#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0160[4088] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 6, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0,
    0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 16, 0, 17, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 21, 22, 0, 23, 0,
    0, 0, 0, 24, 0, 0, 0, 25, 26, 27, 0, 0, 0, 28, 0, 0, 29, 0, 30, 31, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0,
    35, 0, 36, 37, 38, 0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0,
    0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 127, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 0,
    0, 0, 0, 132, 133, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0,
    0, 0, 0, 143, 144, 0, 0, 145, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 0, 152, 153, 154,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163,
    0, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0,
    0, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0,
    0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 192, 0, 193, 0, 194,
    0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0,
    204, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0,
    223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0,
    0, 0, 236, 0, 237, 238, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0,
    246, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 260, 0, 261, 0, 0, 262, 0, 263, 0, 264,
    0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 268, 0, 269, 0, 270, 271, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 276, 277, 0, 0, 0,
    278, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 0, 0, 288, 289, 0, 290, 0, 0,
    291, 0, 0, 292, 293, 0, 0, 294, 0, 0, 295, 0, 296, 0, 0, 297, 0, 0, 298, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0,
    305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 0, 310, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0,
    315, 0, 0, 0, 316, 317, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 339, 0, 340, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 347, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355,
    0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0,
    364, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378,
    0, 379, 0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 387, 0, 0, 388, 0, 389, 390, 391, 0, 0, 0,
    392, 0, 393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 0, 404, 0, 0,
    405, 0, 0, 406, 407, 0, 408, 0, 0, 409, 0, 410, 0, 411, 0, 0, 412, 413, 0, 414, 0, 415, 0, 416, 0, 0, 417, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 420, 0, 421, 0, 422, 0, 423, 0, 0, 424, 0, 425, 0, 0, 0, 426, 0, 0, 427, 428, 0, 429, 0, 430, 0, 431, 0, 0,
    432, 0, 433, 0, 434, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0,
    441, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 451, 0, 0, 452, 0, 0, 0,
    453, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0,
    0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0,
    467, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 470, 471, 0, 472, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0, 0, 0, 476, 477, 0, 0, 0,
    0, 478, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0,
    0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 508, 0, 0,
    0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0,
    0, 0, 0, 0, 515, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 520, 0,
    0, 0, 0, 521, 0, 522, 0, 523, 0, 0, 0, 0, 524, 525, 0, 0, 526, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 531, 532, 0,
    533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0,
    538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 545, 0,
    0, 0, 0, 0, 0, 0, 546, 0, 547, 548, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0,
    0, 0, 0, 0, 554, 555, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 0, 560, 0, 561, 562, 0, 563, 0, 564, 0,
    0, 0, 0, 0, 565, 0, 566, 0, 567, 0, 0, 0, 0, 0, 568, 569, 0, 0, 570, 0, 571, 0, 572, 0, 0, 0, 0, 573, 0, 574, 0, 0,
    0, 0, 575, 0, 576, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 583, 0, 584, 0, 0,
    0, 0, 585, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 0, 593, 0,
    594, 0, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600,
    0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0,
    0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 613, 0, 614,
    0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 617, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0,
    0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626,
    0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 636, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    647, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 657, 0, 658, 0,
    0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 665, 0, 0, 666, 0, 667, 0, 0,
    0, 0, 668, 0, 669, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 0, 0, 0, 676, 0, 677, 0, 0,
    0, 0, 678, 0, 679, 0, 0, 0, 0, 680, 0, 681, 0, 682, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0,
    687, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 0, 0, 0, 693, 694, 0, 695, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 698, 0, 0, 0, 0, 699, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0, 703, 0,
    704, 0, 705, 0, 0, 0, 0, 706, 707, 0, 0, 708, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 713, 714, 0, 715, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0,
    721, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0,
    0, 728, 0, 729, 730, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0,
    0, 0, 736, 737, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 742, 743, 0, 744, 0, 745,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 748, 0, 749, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 754, 0, 0, 755, 0, 756, 0, 757, 0, 758, 0, 0, 0, 0, 759, 0,
    760, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 767, 0, 768, 0, 0, 0,
    0, 769, 0, 770, 0, 771, 0, 772, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 779, 0,
    0, 0, 0, 780, 0, 781, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 786, 0, 787, 0, 0, 0, 0, 788,
    0, 789, 0, 0, 0, 0, 790, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793,
    0, 794, 795, 796, 0, 797, 0, 0, 798, 0, 0, 0, 799, 800, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 0, 804, 0, 805, 0,
    806, 0, 807, 808, 809, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 816, 0, 0, 817, 0, 818, 0, 0,
    819, 0, 0, 0, 820, 821, 0, 822, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 828, 0, 0, 829, 0, 830, 0, 831, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 835, 0, 836, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 839, 0, 0, 840, 0, 841, 0, 0, 842, 0, 0, 0, 843, 844, 0, 845, 0, 846, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 848, 0,
    849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 851, 0, 0,
    852, 853, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 856, 857, 858, 0, 859,
    0, 0, 860, 0, 0, 0, 861, 0, 0, 0, 0, 862, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 866, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 868, 0, 0, 869, 0, 0, 870, 0, 871, 0, 872, 0, 873, 0, 0, 874, 0, 0, 0, 0, 875, 0, 876, 0, 877, 878, 0, 879, 0, 0,
    0, 0, 0, 0, 880, 0, 881, 0, 0, 0, 0, 0, 0, 0, 882, 0, 883, 0, 884, 0, 0, 0, 0, 0, 885, 0, 886, 0, 0, 0, 0, 0,
    0, 0, 887, 0, 888, 0, 889, 0, 0, 890, 0, 0, 0, 0, 891, 0, 892, 0, 0, 893, 0, 894, 0, 895, 0, 896, 0, 897, 0, 898, 0, 0,
    0, 0, 0, 0, 899, 0, 900, 0, 0, 0, 0, 0, 0, 0, 901, 0, 902, 0, 0, 903, 0, 904, 0, 905, 906, 907, 0, 0, 908, 0, 909, 0,
    910, 911, 912, 0, 0, 0, 0, 913, 0, 914, 0, 915, 0, 0, 0, 0, 0, 916, 0, 917, 0, 0, 0, 0, 0, 0, 0, 918, 0, 919, 0, 0,
    0, 0, 0, 920, 0, 921, 0, 922, 0, 0, 0, 0, 0, 923, 0, 924, 0, 0, 0, 0, 0, 0, 0, 925, 0, 926, 0, 0, 0, 0, 0, 927,
    0, 928, 0, 929, 0, 0, 930, 0, 0, 0, 0, 931, 0, 0, 932, 0, 933, 934, 0, 935, 0, 0, 0, 0, 0, 0, 936, 0, 937, 0, 0, 0,
    0, 0, 0, 0, 938, 0, 939, 0, 940, 0, 0, 0, 0, 0, 941, 0, 942, 0, 0, 0, 0, 0, 0, 0, 943, 0, 944, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 945, 0, 0, 946, 0, 947, 0, 948, 0, 0, 0, 949, 0, 950, 0, 0, 0, 0, 0, 951, 0, 952, 0, 953, 0, 954, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 955, 0, 956, 0, 957, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 958, 0, 959, 0, 960, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 961, 0, 962, 0, 0, 963, 0, 964, 0, 0, 0, 0, 0, 965, 0, 966, 0, 967, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 968, 0, 969, 0, 0, 0, 0, 0, 0, 0, 970, 0, 971, 0, 972, 973, 0, 974, 0, 0, 0, 0, 0, 0, 975, 0, 976, 0, 0,
    0, 0, 0, 0, 0, 977, 0, 978, 0, 0, 0, 979, 0, 980, 0, 0, 0, 0, 0, 981, 0, 982, 0, 983, 0, 984, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 985, 0, 986, 0, 987, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 988, 0, 989, 0, 990,
};
void recomp_unit_0160_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A84000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0160[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A84000;
    case 2u: goto L_08A84014;
    case 3u: goto L_08A8401C;
    case 4u: goto L_08A84024;
    case 5u: goto L_08A8403C;
    case 6u: goto L_08A84040;
    case 7u: goto L_08A84048;
    case 8u: goto L_08A84050;
    case 9u: goto L_08A8405C;
    case 10u: goto L_08A84064;
    case 11u: goto L_08A8406C;
    case 12u: goto L_08A84084;
    case 13u: goto L_08A8408C;
    case 14u: goto L_08A84094;
    case 15u: goto L_08A840AC;
    case 16u: goto L_08A840B0;
    case 17u: goto L_08A840B8;
    case 18u: goto L_08A840C4;
    case 19u: goto L_08A840D0;
    case 20u: goto L_08A840D8;
    case 21u: goto L_08A840EC;
    case 22u: goto L_08A840F0;
    case 23u: goto L_08A840F8;
    case 24u: goto L_08A8410C;
    case 25u: goto L_08A8411C;
    case 26u: goto L_08A84120;
    case 27u: goto L_08A84124;
    case 28u: goto L_08A84134;
    case 29u: goto L_08A84140;
    case 30u: goto L_08A84148;
    case 31u: goto L_08A8414C;
    case 32u: goto L_08A84150;
    case 33u: goto L_08A84170;
    case 34u: goto L_08A84178;
    case 35u: goto L_08A84180;
    case 36u: goto L_08A84188;
    case 37u: goto L_08A8418C;
    case 38u: goto L_08A84190;
    case 39u: goto L_08A841B0;
    case 40u: goto L_08A841B4;
    case 41u: goto L_08A841C4;
    case 42u: goto L_08A841D4;
    case 43u: goto L_08A841DC;
    case 44u: goto L_08A841EC;
    case 45u: goto L_08A841F4;
    case 46u: goto L_08A84208;
    case 47u: goto L_08A84218;
    case 48u: goto L_08A84224;
    case 49u: goto L_08A8422C;
    case 50u: goto L_08A8423C;
    case 51u: goto L_08A84248;
    case 52u: goto L_08A84250;
    case 53u: goto L_08A84288;
    case 54u: goto L_08A84290;
    case 55u: goto L_08A842D4;
    case 56u: goto L_08A842DC;
    case 57u: goto L_08A8430C;
    case 58u: goto L_08A84314;
    case 59u: goto L_08A8431C;
    case 60u: goto L_08A84354;
    case 61u: goto L_08A8435C;
    case 62u: goto L_08A843A0;
    case 63u: goto L_08A843A8;
    case 64u: goto L_08A843D8;
    case 65u: goto L_08A843E0;
    case 66u: goto L_08A843E8;
    case 67u: goto L_08A843F0;
    case 68u: goto L_08A8441C;
    case 69u: goto L_08A84424;
    case 70u: goto L_08A84458;
    case 71u: goto L_08A84460;
    case 72u: goto L_08A84480;
    case 73u: goto L_08A84488;
    case 74u: goto L_08A844B4;
    case 75u: goto L_08A844BC;
    case 76u: goto L_08A844F0;
    case 77u: goto L_08A844F8;
    case 78u: goto L_08A84518;
    case 79u: goto L_08A84520;
    case 80u: goto L_08A84528;
    case 81u: goto L_08A84554;
    case 82u: goto L_08A8455C;
    case 83u: goto L_08A84590;
    case 84u: goto L_08A84598;
    case 85u: goto L_08A845B8;
    case 86u: goto L_08A845C0;
    case 87u: goto L_08A845EC;
    case 88u: goto L_08A845F4;
    case 89u: goto L_08A84628;
    case 90u: goto L_08A84630;
    case 91u: goto L_08A84650;
    case 92u: goto L_08A84654;
    case 93u: goto L_08A8465C;
    case 94u: goto L_08A84668;
    case 95u: goto L_08A84670;
    case 96u: goto L_08A84690;
    case 97u: goto L_08A84698;
    case 98u: goto L_08A846B8;
    case 99u: goto L_08A846C8;
    case 100u: goto L_08A846D0;
    case 101u: goto L_08A846D4;
    case 102u: goto L_08A846DC;
    case 103u: goto L_08A846E4;
    case 104u: goto L_08A846EC;
    case 105u: goto L_08A846F4;
    case 106u: goto L_08A846FC;
    case 107u: goto L_08A8471C;
    case 108u: goto L_08A84724;
    case 109u: goto L_08A8472C;
    case 110u: goto L_08A84734;
    case 111u: goto L_08A84754;
    case 112u: goto L_08A84758;
    case 113u: goto L_08A84760;
    case 114u: goto L_08A84770;
    case 115u: goto L_08A847A0;
    case 116u: goto L_08A847A8;
    case 117u: goto L_08A847B8;
    case 118u: goto L_08A847C4;
    case 119u: goto L_08A847CC;
    case 120u: goto L_08A847DC;
    case 121u: goto L_08A847FC;
    case 122u: goto L_08A84804;
    case 123u: goto L_08A84814;
    case 124u: goto L_08A84834;
    case 125u: goto L_08A8483C;
    case 126u: goto L_08A84848;
    case 127u: goto L_08A8484C;
    case 128u: goto L_08A84858;
    case 129u: goto L_08A84860;
    case 130u: goto L_08A84868;
    case 131u: goto L_08A84870;
    case 132u: goto L_08A8488C;
    case 133u: goto L_08A84890;
    case 134u: goto L_08A84898;
    case 135u: goto L_08A848A4;
    case 136u: goto L_08A848AC;
    case 137u: goto L_08A848B4;
    case 138u: goto L_08A848BC;
    case 139u: goto L_08A848C4;
    case 140u: goto L_08A848E0;
    case 141u: goto L_08A848E8;
    case 142u: goto L_08A848F0;
    case 143u: goto L_08A8490C;
    case 144u: goto L_08A84910;
    case 145u: goto L_08A8491C;
    case 146u: goto L_08A84920;
    case 147u: goto L_08A8492C;
    case 148u: goto L_08A84944;
    case 149u: goto L_08A8494C;
    case 150u: goto L_08A84960;
    case 151u: goto L_08A84968;
    case 152u: goto L_08A84974;
    case 153u: goto L_08A84978;
    case 154u: goto L_08A8497C;
    case 155u: goto L_08A84990;
    case 156u: goto L_08A849E0;
    case 157u: goto L_08A849F8;
    case 158u: goto L_08A84A28;
    case 159u: goto L_08A84A38;
    case 160u: goto L_08A84A54;
    case 161u: goto L_08A84A6C;
    case 162u: goto L_08A84A74;
    case 163u: goto L_08A84A7C;
    case 164u: goto L_08A84A8C;
    case 165u: goto L_08A84A94;
    case 166u: goto L_08A84A9C;
    case 167u: goto L_08A84AA4;
    case 168u: goto L_08A84AAC;
    case 169u: goto L_08A84AC0;
    case 170u: goto L_08A84AD0;
    case 171u: goto L_08A84AE4;
    case 172u: goto L_08A84AEC;
    case 173u: goto L_08A84AF4;
    case 174u: goto L_08A84B08;
    case 175u: goto L_08A84B14;
    case 176u: goto L_08A84B1C;
    case 177u: goto L_08A84B24;
    case 178u: goto L_08A84B2C;
    case 179u: goto L_08A84B34;
    case 180u: goto L_08A84B48;
    case 181u: goto L_08A84B58;
    case 182u: goto L_08A84B6C;
    case 183u: goto L_08A84B74;
    case 184u: goto L_08A84B84;
    case 185u: goto L_08A84B94;
    case 186u: goto L_08A84BA8;
    case 187u: goto L_08A84BBC;
    case 188u: goto L_08A84BC4;
    case 189u: goto L_08A84BCC;
    case 190u: goto L_08A84BD4;
    case 191u: goto L_08A84BDC;
    case 192u: goto L_08A84BEC;
    case 193u: goto L_08A84BF4;
    case 194u: goto L_08A84BFC;
    case 195u: goto L_08A84C10;
    case 196u: goto L_08A84C18;
    case 197u: goto L_08A84C20;
    case 198u: goto L_08A84C28;
    case 199u: goto L_08A84C30;
    case 200u: goto L_08A84C3C;
    case 201u: goto L_08A84C5C;
    case 202u: goto L_08A84C70;
    case 203u: goto L_08A84C78;
    case 204u: goto L_08A84C80;
    case 205u: goto L_08A84C88;
    case 206u: goto L_08A84C90;
    case 207u: goto L_08A84C9C;
    case 208u: goto L_08A84CA4;
    case 209u: goto L_08A84CB4;
    case 210u: goto L_08A84CBC;
    case 211u: goto L_08A84CD0;
    case 212u: goto L_08A84CDC;
    case 213u: goto L_08A84CFC;
    case 214u: goto L_08A84D10;
    case 215u: goto L_08A84D24;
    case 216u: goto L_08A84D2C;
    case 217u: goto L_08A84D34;
    case 218u: goto L_08A84D3C;
    case 219u: goto L_08A84D48;
    case 220u: goto L_08A84D58;
    case 221u: goto L_08A84D60;
    case 222u: goto L_08A84D78;
    case 223u: goto L_08A84D80;
    case 224u: goto L_08A84D88;
    case 225u: goto L_08A84D90;
    case 226u: goto L_08A84D98;
    case 227u: goto L_08A84DA8;
    case 228u: goto L_08A84DB0;
    case 229u: goto L_08A84DB8;
    case 230u: goto L_08A84DCC;
    case 231u: goto L_08A84DD4;
    case 232u: goto L_08A84DDC;
    case 233u: goto L_08A84DE4;
    case 234u: goto L_08A84DEC;
    case 235u: goto L_08A84DF8;
    case 236u: goto L_08A84E08;
    case 237u: goto L_08A84E10;
    case 238u: goto L_08A84E14;
    case 239u: goto L_08A84E18;
    case 240u: goto L_08A84E28;
    case 241u: goto L_08A84E34;
    case 242u: goto L_08A84E54;
    case 243u: goto L_08A84E68;
    case 244u: goto L_08A84E70;
    case 245u: goto L_08A84E78;
    case 246u: goto L_08A84E80;
    case 247u: goto L_08A84E88;
    case 248u: goto L_08A84E94;
    case 249u: goto L_08A84E9C;
    case 250u: goto L_08A84EA4;
    case 251u: goto L_08A84EB0;
    case 252u: goto L_08A84EB8;
    case 253u: goto L_08A84EC0;
    case 254u: goto L_08A84F0C;
    case 255u: goto L_08A84F14;
    case 256u: goto L_08A84F24;
    case 257u: goto L_08A84F38;
    case 258u: goto L_08A84F48;
    case 259u: goto L_08A84F50;
    case 260u: goto L_08A84F58;
    case 261u: goto L_08A84F60;
    case 262u: goto L_08A84F6C;
    case 263u: goto L_08A84F74;
    case 264u: goto L_08A84F7C;
    case 265u: goto L_08A84F88;
    case 266u: goto L_08A84F94;
    case 267u: goto L_08A84FA0;
    case 268u: goto L_08A84FA8;
    case 269u: goto L_08A84FB0;
    case 270u: goto L_08A84FB8;
    case 271u: goto L_08A84FBC;
    case 272u: goto L_08A84FC0;
    case 273u: goto L_08A84FD0;
    case 274u: goto L_08A84FE0;
    case 275u: goto L_08A84FE8;
    case 276u: goto L_08A84FEC;
    case 277u: goto L_08A84FF0;
    case 278u: goto L_08A85000;
    case 279u: goto L_08A85008;
    case 280u: goto L_08A8501C;
    case 281u: goto L_08A85028;
    case 282u: goto L_08A85034;
    case 283u: goto L_08A85038;
    case 284u: goto L_08A85040;
    case 285u: goto L_08A85048;
    case 286u: goto L_08A85050;
    case 287u: goto L_08A85058;
    case 288u: goto L_08A85068;
    case 289u: goto L_08A8506C;
    case 290u: goto L_08A85074;
    case 291u: goto L_08A85080;
    case 292u: goto L_08A8508C;
    case 293u: goto L_08A85090;
    case 294u: goto L_08A8509C;
    case 295u: goto L_08A850A8;
    case 296u: goto L_08A850B0;
    case 297u: goto L_08A850BC;
    case 298u: goto L_08A850C8;
    case 299u: goto L_08A850CC;
    case 300u: goto L_08A850D4;
    case 301u: goto L_08A850DC;
    case 302u: goto L_08A850E4;
    case 303u: goto L_08A850EC;
    case 304u: goto L_08A850F4;
    case 305u: goto L_08A85100;
    case 306u: goto L_08A85108;
    case 307u: goto L_08A8511C;
    case 308u: goto L_08A85128;
    case 309u: goto L_08A85130;
    case 310u: goto L_08A85140;
    case 311u: goto L_08A85148;
    case 312u: goto L_08A85150;
    case 313u: goto L_08A8515C;
    case 314u: goto L_08A8516C;
    case 315u: goto L_08A85180;
    case 316u: goto L_08A85190;
    case 317u: goto L_08A85194;
    case 318u: goto L_08A8519C;
    case 319u: goto L_08A851AC;
    case 320u: goto L_08A851B4;
    case 321u: goto L_08A851EC;
    case 322u: goto L_08A851F4;
    case 323u: goto L_08A85238;
    case 324u: goto L_08A85240;
    case 325u: goto L_08A85270;
    case 326u: goto L_08A85278;
    case 327u: goto L_08A85280;
    case 328u: goto L_08A852AC;
    case 329u: goto L_08A852B4;
    case 330u: goto L_08A852E8;
    case 331u: goto L_08A852F0;
    case 332u: goto L_08A85310;
    case 333u: goto L_08A85318;
    case 334u: goto L_08A85344;
    case 335u: goto L_08A8534C;
    case 336u: goto L_08A85380;
    case 337u: goto L_08A85388;
    case 338u: goto L_08A853A8;
    case 339u: goto L_08A853AC;
    case 340u: goto L_08A853B4;
    case 341u: goto L_08A853C0;
    case 342u: goto L_08A853C8;
    case 343u: goto L_08A853E8;
    case 344u: goto L_08A853F0;
    case 345u: goto L_08A85410;
    case 346u: goto L_08A85420;
    case 347u: goto L_08A85428;
    case 348u: goto L_08A8542C;
    case 349u: goto L_08A85434;
    case 350u: goto L_08A8543C;
    case 351u: goto L_08A85444;
    case 352u: goto L_08A8544C;
    case 353u: goto L_08A85454;
    case 354u: goto L_08A85474;
    case 355u: goto L_08A8547C;
    case 356u: goto L_08A85484;
    case 357u: goto L_08A8548C;
    case 358u: goto L_08A854AC;
    case 359u: goto L_08A854B4;
    case 360u: goto L_08A854C8;
    case 361u: goto L_08A854D0;
    case 362u: goto L_08A854E4;
    case 363u: goto L_08A854EC;
    case 364u: goto L_08A85500;
    case 365u: goto L_08A85504;
    case 366u: goto L_08A8550C;
    case 367u: goto L_08A85540;
    case 368u: goto L_08A85548;
    case 369u: goto L_08A85550;
    case 370u: goto L_08A8555C;
    case 371u: goto L_08A85564;
    case 372u: goto L_08A8556C;
    case 373u: goto L_08A855B8;
    case 374u: goto L_08A855C0;
    case 375u: goto L_08A855D0;
    case 376u: goto L_08A855E4;
    case 377u: goto L_08A855F4;
    case 378u: goto L_08A855FC;
    case 379u: goto L_08A85604;
    case 380u: goto L_08A8560C;
    case 381u: goto L_08A85618;
    case 382u: goto L_08A85620;
    case 383u: goto L_08A85628;
    case 384u: goto L_08A85634;
    case 385u: goto L_08A85640;
    case 386u: goto L_08A8564C;
    case 387u: goto L_08A85654;
    case 388u: goto L_08A85660;
    case 389u: goto L_08A85668;
    case 390u: goto L_08A8566C;
    case 391u: goto L_08A85670;
    case 392u: goto L_08A85680;
    case 393u: goto L_08A85688;
    case 394u: goto L_08A8569C;
    case 395u: goto L_08A856A8;
    case 396u: goto L_08A856B4;
    case 397u: goto L_08A856B8;
    case 398u: goto L_08A856C0;
    case 399u: goto L_08A856C8;
    case 400u: goto L_08A856D0;
    case 401u: goto L_08A856D8;
    case 402u: goto L_08A856E0;
    case 403u: goto L_08A856E8;
    case 404u: goto L_08A856F4;
    case 405u: goto L_08A85700;
    case 406u: goto L_08A8570C;
    case 407u: goto L_08A85710;
    case 408u: goto L_08A85718;
    case 409u: goto L_08A85724;
    case 410u: goto L_08A8572C;
    case 411u: goto L_08A85734;
    case 412u: goto L_08A85740;
    case 413u: goto L_08A85744;
    case 414u: goto L_08A8574C;
    case 415u: goto L_08A85754;
    case 416u: goto L_08A8575C;
    case 417u: goto L_08A85768;
    case 418u: goto L_08A85770;
    case 419u: goto L_08A85780;
    case 420u: goto L_08A85790;
    case 421u: goto L_08A85798;
    case 422u: goto L_08A857A0;
    case 423u: goto L_08A857A8;
    case 424u: goto L_08A857B4;
    case 425u: goto L_08A857BC;
    case 426u: goto L_08A857CC;
    case 427u: goto L_08A857D8;
    case 428u: goto L_08A857DC;
    case 429u: goto L_08A857E4;
    case 430u: goto L_08A857EC;
    case 431u: goto L_08A857F4;
    case 432u: goto L_08A85800;
    case 433u: goto L_08A85808;
    case 434u: goto L_08A85810;
    case 435u: goto L_08A85820;
    case 436u: goto L_08A85828;
    case 437u: goto L_08A85830;
    case 438u: goto L_08A8583C;
    case 439u: goto L_08A85870;
    case 440u: goto L_08A85878;
    case 441u: goto L_08A85880;
    case 442u: goto L_08A85884;
    case 443u: goto L_08A858B4;
    case 444u: goto L_08A858C0;
    case 445u: goto L_08A858CC;
    case 446u: goto L_08A858D8;
    case 447u: goto L_08A858EC;
    case 448u: goto L_08A8591C;
    case 449u: goto L_08A85954;
    case 450u: goto L_08A8595C;
    case 451u: goto L_08A85964;
    case 452u: goto L_08A85970;
    case 453u: goto L_08A85980;
    case 454u: goto L_08A85990;
    case 455u: goto L_08A85998;
    case 456u: goto L_08A859C4;
    case 457u: goto L_08A859D4;
    case 458u: goto L_08A859EC;
    case 459u: goto L_08A859F4;
    case 460u: goto L_08A85A08;
    case 461u: goto L_08A85A1C;
    case 462u: goto L_08A85A2C;
    case 463u: goto L_08A85A3C;
    case 464u: goto L_08A85A44;
    case 465u: goto L_08A85A6C;
    case 466u: goto L_08A85A78;
    case 467u: goto L_08A85A80;
    case 468u: goto L_08A85A8C;
    case 469u: goto L_08A85A98;
    case 470u: goto L_08A85AAC;
    case 471u: goto L_08A85AB0;
    case 472u: goto L_08A85AB8;
    case 473u: goto L_08A85AC4;
    case 474u: goto L_08A85ACC;
    case 475u: goto L_08A85AD8;
    case 476u: goto L_08A85AEC;
    case 477u: goto L_08A85AF0;
    case 478u: goto L_08A85B04;
    case 479u: goto L_08A85B10;
    case 480u: goto L_08A85B24;
    case 481u: goto L_08A85B30;
    case 482u: goto L_08A85B44;
    case 483u: goto L_08A85B4C;
    case 484u: goto L_08A85B5C;
    case 485u: goto L_08A85C20;
    case 486u: goto L_08A85C28;
    case 487u: goto L_08A85C38;
    case 488u: goto L_08A85C40;
    case 489u: goto L_08A85C48;
    case 490u: goto L_08A85C54;
    case 491u: goto L_08A85C5C;
    case 492u: goto L_08A85C64;
    case 493u: goto L_08A85C88;
    case 494u: goto L_08A85CB8;
    case 495u: goto L_08A85CD8;
    case 496u: goto L_08A85DA8;
    case 497u: goto L_08A85DB0;
    case 498u: goto L_08A85DB8;
    case 499u: goto L_08A85DD8;
    case 500u: goto L_08A85DE0;
    case 501u: goto L_08A85E00;
    case 502u: goto L_08A85E08;
    case 503u: goto L_08A85E28;
    case 504u: goto L_08A85E30;
    case 505u: goto L_08A85E50;
    case 506u: goto L_08A85E58;
    case 507u: goto L_08A85E6C;
    case 508u: goto L_08A85E74;
    case 509u: goto L_08A85E94;
    case 510u: goto L_08A85E9C;
    case 511u: goto L_08A85EBC;
    case 512u: goto L_08A85EC4;
    case 513u: goto L_08A85EE4;
    case 514u: goto L_08A85EEC;
    case 515u: goto L_08A85F10;
    case 516u: goto L_08A85F14;
    case 517u: goto L_08A85F1C;
    case 518u: goto L_08A85F64;
    case 519u: goto L_08A85F70;
    case 520u: goto L_08A85F78;
    case 521u: goto L_08A85F8C;
    case 522u: goto L_08A85F94;
    case 523u: goto L_08A85F9C;
    case 524u: goto L_08A85FB0;
    case 525u: goto L_08A85FB4;
    case 526u: goto L_08A85FC0;
    case 527u: goto L_08A85FC8;
    case 528u: goto L_08A85FD4;
    case 529u: goto L_08A85FE0;
    case 530u: goto L_08A85FEC;
    case 531u: goto L_08A85FF4;
    case 532u: goto L_08A85FF8;
    case 533u: goto L_08A86000;
    case 534u: goto L_08A86028;
    case 535u: goto L_08A86048;
    case 536u: goto L_08A86050;
    case 537u: goto L_08A86078;
    case 538u: goto L_08A86080;
    case 539u: goto L_08A86094;
    case 540u: goto L_08A8609C;
    case 541u: goto L_08A860C0;
    case 542u: goto L_08A860C8;
    case 543u: goto L_08A860E8;
    case 544u: goto L_08A860F0;
    case 545u: goto L_08A860F8;
    case 546u: goto L_08A86118;
    case 547u: goto L_08A86120;
    case 548u: goto L_08A86124;
    case 549u: goto L_08A8612C;
    case 550u: goto L_08A86134;
    case 551u: goto L_08A86154;
    case 552u: goto L_08A8615C;
    case 553u: goto L_08A86170;
    case 554u: goto L_08A86190;
    case 555u: goto L_08A86194;
    case 556u: goto L_08A861A0;
    case 557u: goto L_08A861A8;
    case 558u: goto L_08A861C8;
    case 559u: goto L_08A861D0;
    case 560u: goto L_08A861DC;
    case 561u: goto L_08A861E4;
    case 562u: goto L_08A861E8;
    case 563u: goto L_08A861F0;
    case 564u: goto L_08A861F8;
    case 565u: goto L_08A86210;
    case 566u: goto L_08A86218;
    case 567u: goto L_08A86220;
    case 568u: goto L_08A86238;
    case 569u: goto L_08A8623C;
    case 570u: goto L_08A86248;
    case 571u: goto L_08A86250;
    case 572u: goto L_08A86258;
    case 573u: goto L_08A8626C;
    case 574u: goto L_08A86274;
    case 575u: goto L_08A86288;
    case 576u: goto L_08A86290;
    case 577u: goto L_08A862A4;
    case 578u: goto L_08A862AC;
    case 579u: goto L_08A862B4;
    case 580u: goto L_08A862BC;
    case 581u: goto L_08A862D0;
    case 582u: goto L_08A862D8;
    case 583u: goto L_08A862EC;
    case 584u: goto L_08A862F4;
    case 585u: goto L_08A86308;
    case 586u: goto L_08A86310;
    case 587u: goto L_08A86318;
    case 588u: goto L_08A86324;
    case 589u: goto L_08A86338;
    case 590u: goto L_08A86340;
    case 591u: goto L_08A86350;
    case 592u: goto L_08A86358;
    case 593u: goto L_08A86378;
    case 594u: goto L_08A86380;
    case 595u: goto L_08A863A0;
    case 596u: goto L_08A863A8;
    case 597u: goto L_08A863C8;
    case 598u: goto L_08A863D0;
    case 599u: goto L_08A863F4;
    case 600u: goto L_08A863FC;
    case 601u: goto L_08A8641C;
    case 602u: goto L_08A86424;
    case 603u: goto L_08A86444;
    case 604u: goto L_08A8644C;
    case 605u: goto L_08A8646C;
    case 606u: goto L_08A86474;
    case 607u: goto L_08A86494;
    case 608u: goto L_08A8649C;
    case 609u: goto L_08A864B4;
    case 610u: goto L_08A864BC;
    case 611u: goto L_08A864D4;
    case 612u: goto L_08A864DC;
    case 613u: goto L_08A864F4;
    case 614u: goto L_08A864FC;
    case 615u: goto L_08A86514;
    case 616u: goto L_08A8651C;
    case 617u: goto L_08A86534;
    case 618u: goto L_08A8653C;
    case 619u: goto L_08A86544;
    case 620u: goto L_08A86564;
    case 621u: goto L_08A8656C;
    case 622u: goto L_08A8658C;
    case 623u: goto L_08A8659C;
    case 624u: goto L_08A865C8;
    case 625u: goto L_08A865D0;
    case 626u: goto L_08A865FC;
    case 627u: goto L_08A86604;
    case 628u: goto L_08A86630;
    case 629u: goto L_08A86638;
    case 630u: goto L_08A86664;
    case 631u: goto L_08A8666C;
    case 632u: goto L_08A86698;
    case 633u: goto L_08A866A0;
    case 634u: goto L_08A866D0;
    case 635u: goto L_08A866D8;
    case 636u: goto L_08A86704;
    case 637u: goto L_08A8670C;
    case 638u: goto L_08A86714;
    case 639u: goto L_08A86734;
    case 640u: goto L_08A8673C;
    case 641u: goto L_08A8675C;
    case 642u: goto L_08A8676C;
    case 643u: goto L_08A86798;
    case 644u: goto L_08A867A0;
    case 645u: goto L_08A867CC;
    case 646u: goto L_08A867D4;
    case 647u: goto L_08A86800;
    case 648u: goto L_08A86808;
    case 649u: goto L_08A86834;
    case 650u: goto L_08A8683C;
    case 651u: goto L_08A86868;
    case 652u: goto L_08A86870;
    case 653u: goto L_08A8689C;
    case 654u: goto L_08A868A4;
    case 655u: goto L_08A868D4;
    case 656u: goto L_08A868DC;
    case 657u: goto L_08A868F0;
    case 658u: goto L_08A868F8;
    case 659u: goto L_08A8690C;
    case 660u: goto L_08A86914;
    case 661u: goto L_08A86928;
    case 662u: goto L_08A86930;
    case 663u: goto L_08A86944;
    case 664u: goto L_08A8694C;
    case 665u: goto L_08A86960;
    case 666u: goto L_08A8696C;
    case 667u: goto L_08A86974;
    case 668u: goto L_08A86988;
    case 669u: goto L_08A86990;
    case 670u: goto L_08A869A4;
    case 671u: goto L_08A869AC;
    case 672u: goto L_08A869C0;
    case 673u: goto L_08A869C8;
    case 674u: goto L_08A869D0;
    case 675u: goto L_08A869D8;
    case 676u: goto L_08A869EC;
    case 677u: goto L_08A869F4;
    case 678u: goto L_08A86A08;
    case 679u: goto L_08A86A10;
    case 680u: goto L_08A86A24;
    case 681u: goto L_08A86A2C;
    case 682u: goto L_08A86A34;
    case 683u: goto L_08A86A48;
    case 684u: goto L_08A86A50;
    case 685u: goto L_08A86A64;
    case 686u: goto L_08A86A6C;
    case 687u: goto L_08A86A80;
    case 688u: goto L_08A86A88;
    case 689u: goto L_08A86A9C;
    case 690u: goto L_08A86AA4;
    case 691u: goto L_08A86AB8;
    case 692u: goto L_08A86AC0;
    case 693u: goto L_08A86AD4;
    case 694u: goto L_08A86AD8;
    case 695u: goto L_08A86AE0;
    case 696u: goto L_08A86B28;
    case 697u: goto L_08A86B30;
    case 698u: goto L_08A86B38;
    case 699u: goto L_08A86B4C;
    case 700u: goto L_08A86B54;
    case 701u: goto L_08A86B5C;
    case 702u: goto L_08A86B64;
    case 703u: goto L_08A86B78;
    case 704u: goto L_08A86B80;
    case 705u: goto L_08A86B88;
    case 706u: goto L_08A86B9C;
    case 707u: goto L_08A86BA0;
    case 708u: goto L_08A86BAC;
    case 709u: goto L_08A86BB4;
    case 710u: goto L_08A86BC0;
    case 711u: goto L_08A86BCC;
    case 712u: goto L_08A86BD8;
    case 713u: goto L_08A86BE0;
    case 714u: goto L_08A86BE4;
    case 715u: goto L_08A86BEC;
    case 716u: goto L_08A86C14;
    case 717u: goto L_08A86C34;
    case 718u: goto L_08A86C3C;
    case 719u: goto L_08A86C64;
    case 720u: goto L_08A86C6C;
    case 721u: goto L_08A86C80;
    case 722u: goto L_08A86C88;
    case 723u: goto L_08A86CAC;
    case 724u: goto L_08A86CB4;
    case 725u: goto L_08A86CD4;
    case 726u: goto L_08A86CDC;
    case 727u: goto L_08A86CE4;
    case 728u: goto L_08A86D04;
    case 729u: goto L_08A86D0C;
    case 730u: goto L_08A86D10;
    case 731u: goto L_08A86D18;
    case 732u: goto L_08A86D20;
    case 733u: goto L_08A86D40;
    case 734u: goto L_08A86D48;
    case 735u: goto L_08A86D68;
    case 736u: goto L_08A86D88;
    case 737u: goto L_08A86D8C;
    case 738u: goto L_08A86D98;
    case 739u: goto L_08A86DA0;
    case 740u: goto L_08A86DC0;
    case 741u: goto L_08A86DC8;
    case 742u: goto L_08A86DE8;
    case 743u: goto L_08A86DEC;
    case 744u: goto L_08A86DF4;
    case 745u: goto L_08A86DFC;
    case 746u: goto L_08A86E44;
    case 747u: goto L_08A86E4C;
    case 748u: goto L_08A86E94;
    case 749u: goto L_08A86E9C;
    case 750u: goto L_08A86EA4;
    case 751u: goto L_08A86EEC;
    case 752u: goto L_08A86EF4;
    case 753u: goto L_08A86F3C;
    case 754u: goto L_08A86F40;
    case 755u: goto L_08A86F4C;
    case 756u: goto L_08A86F54;
    case 757u: goto L_08A86F5C;
    case 758u: goto L_08A86F64;
    case 759u: goto L_08A86F78;
    case 760u: goto L_08A86F80;
    case 761u: goto L_08A86F94;
    case 762u: goto L_08A86F9C;
    case 763u: goto L_08A86FB0;
    case 764u: goto L_08A86FB8;
    case 765u: goto L_08A86FCC;
    case 766u: goto L_08A86FD4;
    case 767u: goto L_08A86FE8;
    case 768u: goto L_08A86FF0;
    case 769u: goto L_08A87004;
    case 770u: goto L_08A8700C;
    case 771u: goto L_08A87014;
    case 772u: goto L_08A8701C;
    case 773u: goto L_08A87030;
    case 774u: goto L_08A87038;
    case 775u: goto L_08A8704C;
    case 776u: goto L_08A87054;
    case 777u: goto L_08A87068;
    case 778u: goto L_08A87070;
    case 779u: goto L_08A87078;
    case 780u: goto L_08A8708C;
    case 781u: goto L_08A87094;
    case 782u: goto L_08A870A8;
    case 783u: goto L_08A870B0;
    case 784u: goto L_08A870C4;
    case 785u: goto L_08A870CC;
    case 786u: goto L_08A870E0;
    case 787u: goto L_08A870E8;
    case 788u: goto L_08A870FC;
    case 789u: goto L_08A87104;
    case 790u: goto L_08A87118;
    case 791u: goto L_08A8711C;
    case 792u: goto L_08A8714C;
    case 793u: goto L_08A8717C;
    case 794u: goto L_08A87184;
    case 795u: goto L_08A87188;
    case 796u: goto L_08A8718C;
    case 797u: goto L_08A87194;
    case 798u: goto L_08A871A0;
    case 799u: goto L_08A871B0;
    case 800u: goto L_08A871B4;
    case 801u: goto L_08A871BC;
    case 802u: goto L_08A871D0;
    case 803u: goto L_08A871E0;
    case 804u: goto L_08A871F0;
    case 805u: goto L_08A871F8;
    case 806u: goto L_08A87200;
    case 807u: goto L_08A87208;
    case 808u: goto L_08A8720C;
    case 809u: goto L_08A87210;
    case 810u: goto L_08A87218;
    case 811u: goto L_08A87234;
    case 812u: goto L_08A872C0;
    case 813u: goto L_08A872C8;
    case 814u: goto L_08A872E0;
    case 815u: goto L_08A8735C;
    case 816u: goto L_08A87360;
    case 817u: goto L_08A8736C;
    case 818u: goto L_08A87374;
    case 819u: goto L_08A87380;
    case 820u: goto L_08A87390;
    case 821u: goto L_08A87394;
    case 822u: goto L_08A8739C;
    case 823u: goto L_08A873A4;
    case 824u: goto L_08A87428;
    case 825u: goto L_08A87430;
    case 826u: goto L_08A87438;
    case 827u: goto L_08A874AC;
    case 828u: goto L_08A874B0;
    case 829u: goto L_08A874BC;
    case 830u: goto L_08A874C4;
    case 831u: goto L_08A874CC;
    case 832u: goto L_08A874D4;
    case 833u: goto L_08A874DC;
    case 834u: goto L_08A874F8;
    case 835u: goto L_08A87588;
    case 836u: goto L_08A87590;
    case 837u: goto L_08A875A8;
    case 838u: goto L_08A87628;
    case 839u: goto L_08A8762C;
    case 840u: goto L_08A87638;
    case 841u: goto L_08A87640;
    case 842u: goto L_08A8764C;
    case 843u: goto L_08A8765C;
    case 844u: goto L_08A87660;
    case 845u: goto L_08A87668;
    case 846u: goto L_08A87670;
    case 847u: goto L_08A876F0;
    case 848u: goto L_08A876F8;
    case 849u: goto L_08A87700;
    case 850u: goto L_08A87770;
    case 851u: goto L_08A87774;
    case 852u: goto L_08A87780;
    case 853u: goto L_08A87784;
    case 854u: goto L_08A877A4;
    case 855u: goto L_08A877E4;
    case 856u: goto L_08A877EC;
    case 857u: goto L_08A877F0;
    case 858u: goto L_08A877F4;
    case 859u: goto L_08A877FC;
    case 860u: goto L_08A87808;
    case 861u: goto L_08A87818;
    case 862u: goto L_08A8782C;
    case 863u: goto L_08A87838;
    case 864u: goto L_08A8786C;
    case 865u: goto L_08A87874;
    case 866u: goto L_08A87878;
    case 867u: goto L_08A878B0;
    case 868u: goto L_08A87908;
    case 869u: goto L_08A87914;
    case 870u: goto L_08A87920;
    case 871u: goto L_08A87928;
    case 872u: goto L_08A87930;
    case 873u: goto L_08A87938;
    case 874u: goto L_08A87944;
    case 875u: goto L_08A87958;
    case 876u: goto L_08A87960;
    case 877u: goto L_08A87968;
    case 878u: goto L_08A8796C;
    case 879u: goto L_08A87974;
    case 880u: goto L_08A87990;
    case 881u: goto L_08A87998;
    case 882u: goto L_08A879B8;
    case 883u: goto L_08A879C0;
    case 884u: goto L_08A879C8;
    case 885u: goto L_08A879E0;
    case 886u: goto L_08A879E8;
    case 887u: goto L_08A87A08;
    case 888u: goto L_08A87A10;
    case 889u: goto L_08A87A18;
    case 890u: goto L_08A87A24;
    case 891u: goto L_08A87A38;
    case 892u: goto L_08A87A40;
    case 893u: goto L_08A87A4C;
    case 894u: goto L_08A87A54;
    case 895u: goto L_08A87A5C;
    case 896u: goto L_08A87A64;
    case 897u: goto L_08A87A6C;
    case 898u: goto L_08A87A74;
    case 899u: goto L_08A87A90;
    case 900u: goto L_08A87A98;
    case 901u: goto L_08A87AB8;
    case 902u: goto L_08A87AC0;
    case 903u: goto L_08A87ACC;
    case 904u: goto L_08A87AD4;
    case 905u: goto L_08A87ADC;
    case 906u: goto L_08A87AE0;
    case 907u: goto L_08A87AE4;
    case 908u: goto L_08A87AF0;
    case 909u: goto L_08A87AF8;
    case 910u: goto L_08A87B00;
    case 911u: goto L_08A87B04;
    case 912u: goto L_08A87B08;
    case 913u: goto L_08A87B1C;
    case 914u: goto L_08A87B24;
    case 915u: goto L_08A87B2C;
    case 916u: goto L_08A87B44;
    case 917u: goto L_08A87B4C;
    case 918u: goto L_08A87B6C;
    case 919u: goto L_08A87B74;
    case 920u: goto L_08A87B8C;
    case 921u: goto L_08A87B94;
    case 922u: goto L_08A87B9C;
    case 923u: goto L_08A87BB4;
    case 924u: goto L_08A87BBC;
    case 925u: goto L_08A87BDC;
    case 926u: goto L_08A87BE4;
    case 927u: goto L_08A87BFC;
    case 928u: goto L_08A87C04;
    case 929u: goto L_08A87C0C;
    case 930u: goto L_08A87C18;
    case 931u: goto L_08A87C2C;
    case 932u: goto L_08A87C38;
    case 933u: goto L_08A87C40;
    case 934u: goto L_08A87C44;
    case 935u: goto L_08A87C4C;
    case 936u: goto L_08A87C68;
    case 937u: goto L_08A87C70;
    case 938u: goto L_08A87C90;
    case 939u: goto L_08A87C98;
    case 940u: goto L_08A87CA0;
    case 941u: goto L_08A87CB8;
    case 942u: goto L_08A87CC0;
    case 943u: goto L_08A87CE0;
    case 944u: goto L_08A87CE8;
    case 945u: goto L_08A87D14;
    case 946u: goto L_08A87D20;
    case 947u: goto L_08A87D28;
    case 948u: goto L_08A87D30;
    case 949u: goto L_08A87D40;
    case 950u: goto L_08A87D48;
    case 951u: goto L_08A87D60;
    case 952u: goto L_08A87D68;
    case 953u: goto L_08A87D70;
    case 954u: goto L_08A87D78;
    case 955u: goto L_08A87DA4;
    case 956u: goto L_08A87DAC;
    case 957u: goto L_08A87DB4;
    case 958u: goto L_08A87DE0;
    case 959u: goto L_08A87DE8;
    case 960u: goto L_08A87DF0;
    case 961u: goto L_08A87E1C;
    case 962u: goto L_08A87E24;
    case 963u: goto L_08A87E30;
    case 964u: goto L_08A87E38;
    case 965u: goto L_08A87E50;
    case 966u: goto L_08A87E58;
    case 967u: goto L_08A87E60;
    case 968u: goto L_08A87E8C;
    case 969u: goto L_08A87E94;
    case 970u: goto L_08A87EB4;
    case 971u: goto L_08A87EBC;
    case 972u: goto L_08A87EC4;
    case 973u: goto L_08A87EC8;
    case 974u: goto L_08A87ED0;
    case 975u: goto L_08A87EEC;
    case 976u: goto L_08A87EF4;
    case 977u: goto L_08A87F14;
    case 978u: goto L_08A87F1C;
    case 979u: goto L_08A87F2C;
    case 980u: goto L_08A87F34;
    case 981u: goto L_08A87F4C;
    case 982u: goto L_08A87F54;
    case 983u: goto L_08A87F5C;
    case 984u: goto L_08A87F64;
    case 985u: goto L_08A87F90;
    case 986u: goto L_08A87F98;
    case 987u: goto L_08A87FA0;
    case 988u: goto L_08A87FCC;
    case 989u: goto L_08A87FD4;
    case 990u: goto L_08A87FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A84000:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A84014u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A84014u) goto L_08A84014;
    return;
L_08A84014:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
      if (branch_taken) {
          goto L_08A84040;
      }
      goto L_08A8401C;
    }
L_08A8401C:
    ctx.set_gpr(31, 0x08A84024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84024u) goto L_08A84024;
    return;
L_08A84024:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A8403Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8403Cu) goto L_08A8403C;
    return;
L_08A8403C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A84040;
L_08A84040:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A84050;
      }
      goto L_08A84048;
    }
L_08A84048:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A84050;
L_08A84050:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A84064;
      }
      goto L_08A8405C;
    }
L_08A8405C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8408C;
      }
      goto L_08A84064;
    }
L_08A84064:
    ctx.set_gpr(31, 0x08A8406Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8406Cu) goto L_08A8406C;
    return;
L_08A8406C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(57));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A84084u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A84084u) goto L_08A84084;
    return;
L_08A84084:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18456)));
      if (branch_taken) {
          goto L_08A840B0;
      }
      goto L_08A8408C;
    }
L_08A8408C:
    ctx.set_gpr(31, 0x08A84094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84094u) goto L_08A84094;
    return;
L_08A84094:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(57));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A840ACu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A840ACu) goto L_08A840AC;
    return;
L_08A840AC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18456)));
    goto L_08A840B0;
L_08A840B0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18448)));
        goto L_08A840F0;
    }
    goto L_08A840B8;
L_08A840B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A840D0;
      }
      goto L_08A840C4;
    }
L_08A840C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A840EC;
      }
      goto L_08A840D0;
    }
L_08A840D0:
    ctx.set_gpr(31, 0x08A840D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A840D8u) goto L_08A840D8;
    return;
L_08A840D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A840ECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A840ECu) goto L_08A840EC;
    return;
L_08A840EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18448)));
    goto L_08A840F0;
L_08A840F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08A84120;
      }
      goto L_08A840F8;
    }
L_08A840F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(0u));
        goto L_08A84124;
    }
    goto L_08A8410C;
L_08A8410C:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84120;
      }
      goto L_08A8411C;
    }
L_08A8411C:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_08A84120;
L_08A84120:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(0u));
    goto L_08A84124;
L_08A84124:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < -4 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(8));
        goto L_08A84178;
    }
    goto L_08A84134;
L_08A84134:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A8414C;
      }
      goto L_08A84140;
    }
L_08A84140:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A84150;
    }
    goto L_08A84148;
L_08A84148:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A8414C;
L_08A8414C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A84150;
L_08A84150:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(70));
    ctx.set_gpr(31, 0x08A84170u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08A84170u) goto L_08A84170;
    return;
L_08A84170:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
      if (branch_taken) {
          goto L_08A841B4;
      }
      goto L_08A84178;
    }
L_08A84178:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A8418C;
      }
      goto L_08A84180;
    }
L_08A84180:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A84190;
    }
    goto L_08A84188;
L_08A84188:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A8418C;
L_08A8418C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A84190;
L_08A84190:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(70));
    ctx.set_gpr(31, 0x08A841B0u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08A841B0u) goto L_08A841B0;
    return;
L_08A841B0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A841B4;
L_08A841B4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A841C4u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08A841C4u) goto L_08A841C4;
    return;
L_08A841C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18120)));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[3] - ctx.gpr[2]);
    goto L_08A841D4;
L_08A841D4:
    ctx.set_gpr(31, 0x08A841DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A841DCu) goto L_08A841DC;
    return;
L_08A841DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A841ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 786u, 0x0885EFFCu>(ctx, &aot_mem) && ctx.pc == 0x08A841ECu) goto L_08A841EC;
    return;
L_08A841EC:
    ctx.set_gpr(31, 0x08A841F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A841F4u) goto L_08A841F4;
    return;
L_08A841F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A84208u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84208u) goto L_08A84208;
    return;
L_08A84208:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A841D4;
      }
      goto L_08A84218;
    }
L_08A84218:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A84224u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A85CD8;
L_08A84224:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A84654;
    }
    goto L_08A8422C;
L_08A8422C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18272)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A843E0;
    }
    goto L_08A8423C;
L_08A8423C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A84314;
      }
      goto L_08A84248;
    }
L_08A84248:
    ctx.set_gpr(31, 0x08A84250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84250u) goto L_08A84250;
    return;
L_08A84250:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 3u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A84288u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84288u) goto L_08A84288;
    return;
L_08A84288:
    ctx.set_gpr(31, 0x08A84290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84290u) goto L_08A84290;
    return;
L_08A84290:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18272)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A842D4u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A842D4u) goto L_08A842D4;
    return;
L_08A842D4:
    ctx.set_gpr(31, 0x08A842DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A842DCu) goto L_08A842DC;
    return;
L_08A842DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18272)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8430Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8430Cu) goto L_08A8430C;
    return;
L_08A8430C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84650;
      }
      goto L_08A84314;
    }
L_08A84314:
    ctx.set_gpr(31, 0x08A8431Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8431Cu) goto L_08A8431C;
    return;
L_08A8431C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 3u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A84354u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84354u) goto L_08A84354;
    return;
L_08A84354:
    ctx.set_gpr(31, 0x08A8435Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8435Cu) goto L_08A8435C;
    return;
L_08A8435C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18272)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A843A0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A843A0u) goto L_08A843A0;
    return;
L_08A843A0:
    ctx.set_gpr(31, 0x08A843A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A843A8u) goto L_08A843A8;
    return;
L_08A843A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18272)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A843D8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A843D8u) goto L_08A843D8;
    return;
L_08A843D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84650;
      }
      goto L_08A843E0;
    }
L_08A843E0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A84520;
      }
      goto L_08A843E8;
    }
L_08A843E8:
    ctx.set_gpr(31, 0x08A843F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A843F0u) goto L_08A843F0;
    return;
L_08A843F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8441Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8441Cu) goto L_08A8441C;
    return;
L_08A8441C:
    ctx.set_gpr(31, 0x08A84424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84424u) goto L_08A84424;
    return;
L_08A84424:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A84458u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A84458u) goto L_08A84458;
    return;
L_08A84458:
    ctx.set_gpr(31, 0x08A84460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84460u) goto L_08A84460;
    return;
L_08A84460:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A84480u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84480u) goto L_08A84480;
    return;
L_08A84480:
    ctx.set_gpr(31, 0x08A84488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84488u) goto L_08A84488;
    return;
L_08A84488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A844B4u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A844B4u) goto L_08A844B4;
    return;
L_08A844B4:
    ctx.set_gpr(31, 0x08A844BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A844BCu) goto L_08A844BC;
    return;
L_08A844BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A844F0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A844F0u) goto L_08A844F0;
    return;
L_08A844F0:
    ctx.set_gpr(31, 0x08A844F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A844F8u) goto L_08A844F8;
    return;
L_08A844F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A84518u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84518u) goto L_08A84518;
    return;
L_08A84518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84650;
      }
      goto L_08A84520;
    }
L_08A84520:
    ctx.set_gpr(31, 0x08A84528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84528u) goto L_08A84528;
    return;
L_08A84528:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A84554u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84554u) goto L_08A84554;
    return;
L_08A84554:
    ctx.set_gpr(31, 0x08A8455Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8455Cu) goto L_08A8455C;
    return;
L_08A8455C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A84590u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A84590u) goto L_08A84590;
    return;
L_08A84590:
    ctx.set_gpr(31, 0x08A84598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84598u) goto L_08A84598;
    return;
L_08A84598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A845B8u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A845B8u) goto L_08A845B8;
    return;
L_08A845B8:
    ctx.set_gpr(31, 0x08A845C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A845C0u) goto L_08A845C0;
    return;
L_08A845C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A845ECu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A845ECu) goto L_08A845EC;
    return;
L_08A845EC:
    ctx.set_gpr(31, 0x08A845F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A845F4u) goto L_08A845F4;
    return;
L_08A845F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A84628u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A84628u) goto L_08A84628;
    return;
L_08A84628:
    ctx.set_gpr(31, 0x08A84630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84630u) goto L_08A84630;
    return;
L_08A84630:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A84650u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84650u) goto L_08A84650;
    return;
L_08A84650:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A84654;
L_08A84654:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18989)));
        goto L_08A84758;
    }
    goto L_08A8465C;
L_08A8465C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84690;
      }
      goto L_08A84668;
    }
L_08A84668:
    ctx.set_gpr(31, 0x08A84670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84670u) goto L_08A84670;
    return;
L_08A84670:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A84690u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84690u) goto L_08A84690;
    return;
L_08A84690:
    ctx.set_gpr(31, 0x08A84698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84698u) goto L_08A84698;
    return;
L_08A84698:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A846B8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A846B8u) goto L_08A846B8;
    return;
L_08A846B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08A846D4;
      }
      goto L_08A846C8;
    }
L_08A846C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A846D4;
      }
      goto L_08A846D0;
    }
L_08A846D0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08A846D4;
L_08A846D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84754;
      }
      goto L_08A846DC;
    }
L_08A846DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_08A846EC;
      }
      goto L_08A846E4;
    }
L_08A846E4:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A846EC;
L_08A846EC:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A84724;
    }
    goto L_08A846F4;
L_08A846F4:
    ctx.set_gpr(31, 0x08A846FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A846FCu) goto L_08A846FC;
    return;
L_08A846FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8471Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8471Cu) goto L_08A8471C;
    return;
L_08A8471C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84754;
      }
      goto L_08A84724;
    }
L_08A84724:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A84754;
      }
      goto L_08A8472C;
    }
L_08A8472C:
    ctx.set_gpr(31, 0x08A84734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84734u) goto L_08A84734;
    return;
L_08A84734:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A84754u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84754u) goto L_08A84754;
    return;
L_08A84754:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18989)));
    goto L_08A84758;
L_08A84758:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84848;
      }
      goto L_08A84760;
    }
L_08A84760:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18989), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A84770u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A84770u) goto L_08A84770;
    return;
L_08A84770:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A847A0u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A847A0u) goto L_08A847A0;
    return;
L_08A847A0:
    ctx.set_gpr(31, 0x08A847A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A847A8u) goto L_08A847A8;
    return;
L_08A847A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A847B8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A847B8u) goto L_08A847B8;
    return;
L_08A847B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A847C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A847C4u) goto L_08A847C4;
    return;
L_08A847C4:
    ctx.set_gpr(31, 0x08A847CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A847CCu) goto L_08A847CC;
    return;
L_08A847CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A847DCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A847DCu) goto L_08A847DC;
    return;
L_08A847DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24476));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A847FCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A847FCu) goto L_08A847FC;
    return;
L_08A847FC:
    ctx.set_gpr(31, 0x08A84804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A84804u) goto L_08A84804;
    return;
L_08A84804:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A84814u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84814u) goto L_08A84814;
    return;
L_08A84814:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24440));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A84834u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A84834u) goto L_08A84834;
    return;
L_08A84834:
    ctx.set_gpr(31, 0x08A8483Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8483Cu) goto L_08A8483C;
    return;
L_08A8483C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A84848u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A84848u) goto L_08A84848;
    return;
L_08A84848:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A8484C;
L_08A8484C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A84860;
      }
      goto L_08A84858;
    }
L_08A84858:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A84860;
L_08A84860:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A84890;
    }
    goto L_08A84868;
L_08A84868:
    ctx.set_gpr(31, 0x08A84870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A84870u) goto L_08A84870;
    return;
L_08A84870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32372));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A8488Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8488Cu) goto L_08A8488C;
    return;
L_08A8488C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A84890;
L_08A84890:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08A84920;
    }
    goto L_08A84898;
L_08A84898:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8491C;
      }
      goto L_08A848A4;
    }
L_08A848A4:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A848AC;
L_08A848AC:
    ctx.set_gpr(31, 0x08A848B4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08A85B5C;
L_08A848B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A848E8;
      }
      goto L_08A848BC;
    }
L_08A848BC:
    ctx.set_gpr(31, 0x08A848C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A848C4u) goto L_08A848C4;
    return;
L_08A848C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A848E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A848E0u) goto L_08A848E0;
    return;
L_08A848E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A84910;
      }
      goto L_08A848E8;
    }
L_08A848E8:
    ctx.set_gpr(31, 0x08A848F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A848F0u) goto L_08A848F0;
    return;
L_08A848F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8490Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8490Cu) goto L_08A8490C;
    return;
L_08A8490C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A84910;
L_08A84910:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A848AC;
    }
    goto L_08A8491C;
L_08A8491C:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08A84920;
L_08A84920:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8492Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08A8492Cu) goto L_08A8492C;
    return;
L_08A8492C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18296)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A84944u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A84944u) goto L_08A84944;
    return;
L_08A84944:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A8494C;
L_08A8494C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08A84968;
      }
      goto L_08A84960;
    }
L_08A84960:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A84978;
      }
      goto L_08A84968;
    }
L_08A84968:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 100 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08A8497C;
    }
    goto L_08A84974;
L_08A84974:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(4));
    goto L_08A84978;
L_08A84978:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A8497C;
L_08A8497C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A84990u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A84990u) goto L_08A84990;
    return;
L_08A84990:
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.set_gpr(4, 17042u << 16u);
    ctx.set_gpr(3, 17190u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(88));
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24400));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[20] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[20], 1u));
    ctx.set_gpr(31, 0x08A849E0u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A849E0u) goto L_08A849E0;
    return;
L_08A849E0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A849F8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A849F8u) goto L_08A849F8;
    return;
L_08A849F8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[0];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(87));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24400));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A84A28u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A84A28u) goto L_08A84A28;
    return;
L_08A84A28:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A8494C;
    }
    goto L_08A84A38;
L_08A84A38:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18296)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A84A6C;
    }
    goto L_08A84A54;
L_08A84A54:
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A84A6C;
L_08A84A6C:
    ctx.set_gpr(31, 0x08A84A74u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18456), static_cast<std::uint8_t>(0u));
    goto L_08A85A44;
L_08A84A74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A84A7C;
    }
L_08A84A7C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A84A8Cu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18448), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 75u, 0x08A88444u>(ctx, &aot_mem) && ctx.pc == 0x08A84A8Cu) goto L_08A84A8C;
    return;
L_08A84A8C:
    ctx.set_gpr(31, 0x08A84A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A84A94u) goto L_08A84A94;
    return;
L_08A84A94:
    ctx.set_gpr(31, 0x08A84A9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84A9Cu) goto L_08A84A9C;
    return;
L_08A84A9C:
    ctx.set_gpr(31, 0x08A84AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A84AA4u) goto L_08A84AA4;
    return;
L_08A84AA4:
    ctx.set_gpr(31, 0x08A84AACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A84AACu) goto L_08A84AAC;
    return;
L_08A84AAC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A84AC0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08A84AC0u) goto L_08A84AC0;
    return;
L_08A84AC0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A84AD0u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15992));
    goto L_08A858CC;
L_08A84AD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84AE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A84AE4u) goto L_08A84AE4;
    return;
L_08A84AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A84AEC;
    }
L_08A84AEC:
    ctx.set_gpr(31, 0x08A84AF4u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18448), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84AF4u) goto L_08A84AF4;
    return;
L_08A84AF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A84B08u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84B08u) goto L_08A84B08;
    return;
L_08A84B08:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84B14u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 75u, 0x08A88444u>(ctx, &aot_mem) && ctx.pc == 0x08A84B14u) goto L_08A84B14;
    return;
L_08A84B14:
    ctx.set_gpr(31, 0x08A84B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A84B1Cu) goto L_08A84B1C;
    return;
L_08A84B1C:
    ctx.set_gpr(31, 0x08A84B24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84B24u) goto L_08A84B24;
    return;
L_08A84B24:
    ctx.set_gpr(31, 0x08A84B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A84B2Cu) goto L_08A84B2C;
    return;
L_08A84B2C:
    ctx.set_gpr(31, 0x08A84B34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A84B34u) goto L_08A84B34;
    return;
L_08A84B34:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A84B48u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08A84B48u) goto L_08A84B48;
    return;
L_08A84B48:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A84B58u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
    goto L_08A858C0;
L_08A84B58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84B6Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A84B6Cu) goto L_08A84B6C;
    return;
L_08A84B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A84B74;
    }
L_08A84B74:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A84B84u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18448), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 75u, 0x08A88444u>(ctx, &aot_mem) && ctx.pc == 0x08A84B84u) goto L_08A84B84;
    return;
L_08A84B84:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A84B94u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16328));
    goto L_08A858B4;
L_08A84B94:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A84BA8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08A84BA8u) goto L_08A84BA8;
    return;
L_08A84BA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84BBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A84BBCu) goto L_08A84BBC;
    return;
L_08A84BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A84BC4;
    }
L_08A84BC4:
    ctx.set_gpr(31, 0x08A84BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A84BCCu) goto L_08A84BCC;
    return;
L_08A84BCC:
    ctx.set_gpr(31, 0x08A84BD4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A84BD4u) goto L_08A84BD4;
    return;
L_08A84BD4:
    ctx.set_gpr(31, 0x08A84BDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08A84BDCu) goto L_08A84BDC;
    return;
L_08A84BDC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84BECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 395u, 0x08A811FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84BECu) goto L_08A84BEC;
    return;
L_08A84BEC:
    ctx.set_gpr(31, 0x08A84BF4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1049u, 0x08A93944u>(ctx, &aot_mem) && ctx.pc == 0x08A84BF4u) goto L_08A84BF4;
    return;
L_08A84BF4:
    ctx.set_gpr(31, 0x08A84BFCu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18448), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84BFCu) goto L_08A84BFC;
    return;
L_08A84BFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A84C10u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84C10u) goto L_08A84C10;
    return;
L_08A84C10:
    ctx.set_gpr(31, 0x08A84C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A84C18u) goto L_08A84C18;
    return;
L_08A84C18:
    ctx.set_gpr(31, 0x08A84C20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84C20u) goto L_08A84C20;
    return;
L_08A84C20:
    ctx.set_gpr(31, 0x08A84C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A84C28u) goto L_08A84C28;
    return;
L_08A84C28:
    ctx.set_gpr(31, 0x08A84C30u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84C30u) goto L_08A84C30;
    return;
L_08A84C30:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84C3Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 75u, 0x08A88444u>(ctx, &aot_mem) && ctx.pc == 0x08A84C3Cu) goto L_08A84C3C;
    return;
L_08A84C3C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A84C5Cu);
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08A84C5Cu) goto L_08A84C5C;
    return;
L_08A84C5C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A84C70u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08A84C70u) goto L_08A84C70;
    return;
L_08A84C70:
    ctx.set_gpr(31, 0x08A84C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84C78u) goto L_08A84C78;
    return;
L_08A84C78:
    ctx.set_gpr(31, 0x08A84C80u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A84C80u) goto L_08A84C80;
    return;
L_08A84C80:
    ctx.set_gpr(31, 0x08A84C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A84C88u) goto L_08A84C88;
    return;
L_08A84C88:
    ctx.set_gpr(31, 0x08A84C90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A84C90u) goto L_08A84C90;
    return;
L_08A84C90:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84C9Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A84C9Cu) goto L_08A84C9C;
    return;
L_08A84C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A84CA4;
    }
L_08A84CA4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(19000));
    ctx.set_gpr(31, 0x08A84CB4u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 999u, 0x08A93650u>(ctx, &aot_mem) && ctx.pc == 0x08A84CB4u) goto L_08A84CB4;
    return;
L_08A84CB4:
    ctx.set_gpr(31, 0x08A84CBCu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18448), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84CBCu) goto L_08A84CBC;
    return;
L_08A84CBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A84CD0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84CD0u) goto L_08A84CD0;
    return;
L_08A84CD0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84CDCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 75u, 0x08A88444u>(ctx, &aot_mem) && ctx.pc == 0x08A84CDCu) goto L_08A84CDC;
    return;
L_08A84CDC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A84CFCu);
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08A84CFCu) goto L_08A84CFC;
    return;
L_08A84CFC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A84D10u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08A84D10u) goto L_08A84D10;
    return;
L_08A84D10:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18252), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18412), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A84D24u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18212), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84D24u) goto L_08A84D24;
    return;
L_08A84D24:
    ctx.set_gpr(31, 0x08A84D2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A84D2Cu) goto L_08A84D2C;
    return;
L_08A84D2C:
    ctx.set_gpr(31, 0x08A84D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A84D34u) goto L_08A84D34;
    return;
L_08A84D34:
    ctx.set_gpr(31, 0x08A84D3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A84D3Cu) goto L_08A84D3C;
    return;
L_08A84D3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18124)));
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18212), 0u);
        goto L_08A84D60;
    }
    goto L_08A84D48;
L_08A84D48:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08A84D58u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A84D58u) goto L_08A84D58;
    return;
L_08A84D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A84D60;
    }
L_08A84D60:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18208), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84D78u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A84D78u) goto L_08A84D78;
    return;
L_08A84D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A84D80;
    }
L_08A84D80:
    ctx.set_gpr(31, 0x08A84D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A84D88u) goto L_08A84D88;
    return;
L_08A84D88:
    ctx.set_gpr(31, 0x08A84D90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A84D90u) goto L_08A84D90;
    return;
L_08A84D90:
    ctx.set_gpr(31, 0x08A84D98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08A84D98u) goto L_08A84D98;
    return;
L_08A84D98:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84DA8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 395u, 0x08A811FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84DA8u) goto L_08A84DA8;
    return;
L_08A84DA8:
    ctx.set_gpr(31, 0x08A84DB0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1049u, 0x08A93944u>(ctx, &aot_mem) && ctx.pc == 0x08A84DB0u) goto L_08A84DB0;
    return;
L_08A84DB0:
    ctx.set_gpr(31, 0x08A84DB8u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18448), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A84DB8u) goto L_08A84DB8;
    return;
L_08A84DB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A84DCCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84DCCu) goto L_08A84DCC;
    return;
L_08A84DCC:
    ctx.set_gpr(31, 0x08A84DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A84DD4u) goto L_08A84DD4;
    return;
L_08A84DD4:
    ctx.set_gpr(31, 0x08A84DDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84DDCu) goto L_08A84DDC;
    return;
L_08A84DDC:
    ctx.set_gpr(31, 0x08A84DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A84DE4u) goto L_08A84DE4;
    return;
L_08A84DE4:
    ctx.set_gpr(31, 0x08A84DECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84DECu) goto L_08A84DEC;
    return;
L_08A84DEC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84DF8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 75u, 0x08A88444u>(ctx, &aot_mem) && ctx.pc == 0x08A84DF8u) goto L_08A84DF8;
    return;
L_08A84DF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A84E14;
      }
      goto L_08A84E08;
    }
L_08A84E08:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A84E18;
    }
    goto L_08A84E10;
L_08A84E10:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A84E14;
L_08A84E14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A84E18;
L_08A84E18:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A84E28u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 287u, 0x08A912FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84E28u) goto L_08A84E28;
    return;
L_08A84E28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A84E34u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 455u, 0x08A9AF00u>(ctx, &aot_mem) && ctx.pc == 0x08A84E34u) goto L_08A84E34;
    return;
L_08A84E34:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A84E54u);
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08A84E54u) goto L_08A84E54;
    return;
L_08A84E54:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A84E68u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08A84E68u) goto L_08A84E68;
    return;
L_08A84E68:
    ctx.set_gpr(31, 0x08A84E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84E70u) goto L_08A84E70;
    return;
L_08A84E70:
    ctx.set_gpr(31, 0x08A84E78u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A84E78u) goto L_08A84E78;
    return;
L_08A84E78:
    ctx.set_gpr(31, 0x08A84E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A84E80u) goto L_08A84E80;
    return;
L_08A84E80:
    ctx.set_gpr(31, 0x08A84E88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A84E88u) goto L_08A84E88;
    return;
L_08A84E88:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A84E94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A84E94u) goto L_08A84E94;
    return;
L_08A84E94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A84E9C;
    }
L_08A84E9C:
    ctx.set_gpr(31, 0x08A84EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A84EA4u) goto L_08A84EA4;
    return;
L_08A84EA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A84EB0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A84EB0u) goto L_08A84EB0;
    return;
L_08A84EB0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A84F48;
    }
    goto L_08A84EB8;
L_08A84EB8:
    ctx.set_gpr(31, 0x08A84EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A84EC0u) goto L_08A84EC0;
    return;
L_08A84EC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17046u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17301u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17144u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16153u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A84F0Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x08A84F0Cu) goto L_08A84F0C;
    return;
L_08A84F0C:
    ctx.set_gpr(31, 0x08A84F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A84F14u) goto L_08A84F14;
    return;
L_08A84F14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A84F24u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08A84F24u) goto L_08A84F24;
    return;
L_08A84F24:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A84F38u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A84F38u) goto L_08A84F38;
    return;
L_08A84F38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A84F48;
L_08A84F48:
    ctx.set_gpr(31, 0x08A84F50u);
    // nop
    goto L_08A85A44;
L_08A84F50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A84F58;
    }
L_08A84F58:
    ctx.set_gpr(31, 0x08A84F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A84F60u) goto L_08A84F60;
    return;
L_08A84F60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A84F6Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A84F6Cu) goto L_08A84F6C;
    return;
L_08A84F6C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A850CC;
    }
    goto L_08A84F74;
L_08A84F74:
    ctx.set_gpr(31, 0x08A84F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A84F7Cu) goto L_08A84F7C;
    return;
L_08A84F7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A84F88u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A84F88u) goto L_08A84F88;
    return;
L_08A84F88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
        goto L_08A850B0;
    }
    goto L_08A84F94;
L_08A84F94:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A84FA8;
    }
    goto L_08A84FA0;
L_08A84FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A850C8;
      }
      goto L_08A84FA8;
    }
L_08A84FA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A84FBC;
      }
      goto L_08A84FB0;
    }
L_08A84FB0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A84FC0;
    }
    goto L_08A84FB8;
L_08A84FB8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A84FBC;
L_08A84FBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A84FC0;
L_08A84FC0:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A84FD0u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08A859EC;
L_08A84FD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A84FEC;
      }
      goto L_08A84FE0;
    }
L_08A84FE0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A84FF0;
    }
    goto L_08A84FE8;
L_08A84FE8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A84FEC;
L_08A84FEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A84FF0;
L_08A84FF0:
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08A85000u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A85000u) goto L_08A85000;
    return;
L_08A85000:
    ctx.set_gpr(31, 0x08A85008u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A85A3C;
L_08A85008:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(17, ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(31, 0x08A8501Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A85A3C;
L_08A8501C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A85028u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A85028u) goto L_08A85028;
    return;
L_08A85028:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
        goto L_08A85090;
    }
    goto L_08A85034;
L_08A85034:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A85038;
L_08A85038:
    ctx.set_gpr(31, 0x08A85040u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A85040u) goto L_08A85040;
    return;
L_08A85040:
    ctx.set_gpr(31, 0x08A85048u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08A85048u) goto L_08A85048;
    return;
L_08A85048:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A8506C;
    }
    goto L_08A85050;
L_08A85050:
    ctx.set_gpr(31, 0x08A85058u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A85A3C;
L_08A85058:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A85068u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A859EC;
L_08A85068:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A8506C;
L_08A8506C:
    ctx.set_gpr(31, 0x08A85074u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A85A3C;
L_08A85074:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A85080u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A85080u) goto L_08A85080;
    return;
L_08A85080:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A85038;
    }
    goto L_08A8508C;
L_08A8508C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
    goto L_08A85090;
L_08A85090:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8509Cu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8509Cu) goto L_08A8509C;
    return;
L_08A8509C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A850A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A850A8u) goto L_08A850A8;
    return;
L_08A850A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A850C8;
      }
      goto L_08A850B0;
    }
L_08A850B0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A850BCu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A850BCu) goto L_08A850BC;
    return;
L_08A850BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A850C8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A850C8u) goto L_08A850C8;
    return;
L_08A850C8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A850CC;
L_08A850CC:
    ctx.set_gpr(31, 0x08A850D4u);
    // nop
    goto L_08A85A44;
L_08A850D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A850DC;
    }
L_08A850DC:
    ctx.set_gpr(31, 0x08A850E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A850E4u) goto L_08A850E4;
    return;
L_08A850E4:
    ctx.set_gpr(31, 0x08A850ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08A850ECu) goto L_08A850EC;
    return;
L_08A850EC:
    ctx.set_gpr(31, 0x08A850F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A850F4u) goto L_08A850F4;
    return;
L_08A850F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A85100u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A85100u) goto L_08A85100;
    return;
L_08A85100:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A85504;
    }
    goto L_08A85108;
L_08A85108:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A8511Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8511Cu) goto L_08A8511C;
    return;
L_08A8511C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A85128u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A8714C;
L_08A85128:
    ctx.set_gpr(31, 0x08A85130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A85130u) goto L_08A85130;
    return;
L_08A85130:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A85140u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85140u) goto L_08A85140;
    return;
L_08A85140:
    ctx.set_gpr(31, 0x08A85148u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A85148u) goto L_08A85148;
    return;
L_08A85148:
    ctx.set_gpr(31, 0x08A85150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A85150u) goto L_08A85150;
    return;
L_08A85150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8515Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8515Cu) goto L_08A8515C;
    return;
L_08A8515C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18448)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08A85194;
      }
      goto L_08A8516C;
    }
L_08A8516C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A85194;
      }
      goto L_08A85180;
    }
L_08A85180:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85194;
      }
      goto L_08A85190;
    }
L_08A85190:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A85194;
L_08A85194:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A853AC;
    }
    goto L_08A8519C;
L_08A8519C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18272)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A85278;
      }
      goto L_08A851AC;
    }
L_08A851AC:
    ctx.set_gpr(31, 0x08A851B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A851B4u) goto L_08A851B4;
    return;
L_08A851B4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 3u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A851ECu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A851ECu) goto L_08A851EC;
    return;
L_08A851EC:
    ctx.set_gpr(31, 0x08A851F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A851F4u) goto L_08A851F4;
    return;
L_08A851F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18272)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A85238u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A85238u) goto L_08A85238;
    return;
L_08A85238:
    ctx.set_gpr(31, 0x08A85240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85240u) goto L_08A85240;
    return;
L_08A85240:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18272)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A85270u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A85270u) goto L_08A85270;
    return;
L_08A85270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A853A8;
      }
      goto L_08A85278;
    }
L_08A85278:
    ctx.set_gpr(31, 0x08A85280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85280u) goto L_08A85280;
    return;
L_08A85280:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A852ACu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A852ACu) goto L_08A852AC;
    return;
L_08A852AC:
    ctx.set_gpr(31, 0x08A852B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A852B4u) goto L_08A852B4;
    return;
L_08A852B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A852E8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A852E8u) goto L_08A852E8;
    return;
L_08A852E8:
    ctx.set_gpr(31, 0x08A852F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A852F0u) goto L_08A852F0;
    return;
L_08A852F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A85310u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A85310u) goto L_08A85310;
    return;
L_08A85310:
    ctx.set_gpr(31, 0x08A85318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85318u) goto L_08A85318;
    return;
L_08A85318:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A85344u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85344u) goto L_08A85344;
    return;
L_08A85344:
    ctx.set_gpr(31, 0x08A8534Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8534Cu) goto L_08A8534C;
    return;
L_08A8534C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A85380u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A85380u) goto L_08A85380;
    return;
L_08A85380:
    ctx.set_gpr(31, 0x08A85388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85388u) goto L_08A85388;
    return;
L_08A85388:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A853A8u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A853A8u) goto L_08A853A8;
    return;
L_08A853A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A853AC;
L_08A853AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A85500;
      }
      goto L_08A853B4;
    }
L_08A853B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A853E8;
      }
      goto L_08A853C0;
    }
L_08A853C0:
    ctx.set_gpr(31, 0x08A853C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A853C8u) goto L_08A853C8;
    return;
L_08A853C8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A853E8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A853E8u) goto L_08A853E8;
    return;
L_08A853E8:
    ctx.set_gpr(31, 0x08A853F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A853F0u) goto L_08A853F0;
    return;
L_08A853F0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A85410u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85410u) goto L_08A85410;
    return;
L_08A85410:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08A8542C;
      }
      goto L_08A85420;
    }
L_08A85420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8542C;
      }
      goto L_08A85428;
    }
L_08A85428:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08A8542C;
L_08A8542C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A854AC;
      }
      goto L_08A85434;
    }
L_08A85434:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_08A85444;
      }
      goto L_08A8543C;
    }
L_08A8543C:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A85444;
L_08A85444:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A8547C;
    }
    goto L_08A8544C;
L_08A8544C:
    ctx.set_gpr(31, 0x08A85454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85454u) goto L_08A85454;
    return;
L_08A85454:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A85474u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85474u) goto L_08A85474;
    return;
L_08A85474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A854AC;
      }
      goto L_08A8547C;
    }
L_08A8547C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A854AC;
      }
      goto L_08A85484;
    }
L_08A85484:
    ctx.set_gpr(31, 0x08A8548Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8548Cu) goto L_08A8548C;
    return;
L_08A8548C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A854ACu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A854ACu) goto L_08A854AC;
    return;
L_08A854AC:
    ctx.set_gpr(31, 0x08A854B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A854B4u) goto L_08A854B4;
    return;
L_08A854B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A854C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A854C8u) goto L_08A854C8;
    return;
L_08A854C8:
    ctx.set_gpr(31, 0x08A854D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A854D0u) goto L_08A854D0;
    return;
L_08A854D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08A854E4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A854E4u) goto L_08A854E4;
    return;
L_08A854E4:
    ctx.set_gpr(31, 0x08A854ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A854ECu) goto L_08A854EC;
    return;
L_08A854EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08A85500u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85500u) goto L_08A85500;
    return;
L_08A85500:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A85504;
L_08A85504:
    ctx.set_gpr(31, 0x08A8550Cu);
    // nop
    goto L_08A85A44;
L_08A8550C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(25));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A85540u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A85540u) goto L_08A85540;
    return;
L_08A85540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A85548;
    }
L_08A85548:
    ctx.set_gpr(31, 0x08A85550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A85550u) goto L_08A85550;
    return;
L_08A85550:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8555Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8555Cu) goto L_08A8555C;
    return;
L_08A8555C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A855F4;
    }
    goto L_08A85564;
L_08A85564:
    ctx.set_gpr(31, 0x08A8556Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8556Cu) goto L_08A8556C;
    return;
L_08A8556C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17046u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17301u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17144u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16153u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A855B8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x08A855B8u) goto L_08A855B8;
    return;
L_08A855B8:
    ctx.set_gpr(31, 0x08A855C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A855C0u) goto L_08A855C0;
    return;
L_08A855C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A855D0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08A855D0u) goto L_08A855D0;
    return;
L_08A855D0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A855E4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A855E4u) goto L_08A855E4;
    return;
L_08A855E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A855F4;
L_08A855F4:
    ctx.set_gpr(31, 0x08A855FCu);
    // nop
    goto L_08A85A44;
L_08A855FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A85604;
    }
L_08A85604:
    ctx.set_gpr(31, 0x08A8560Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8560Cu) goto L_08A8560C;
    return;
L_08A8560C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A85618u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A85618u) goto L_08A85618;
    return;
L_08A85618:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A85744;
    }
    goto L_08A85620;
L_08A85620:
    ctx.set_gpr(31, 0x08A85628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A85628u) goto L_08A85628;
    return;
L_08A85628:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A85634u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A85634u) goto L_08A85634;
    return;
L_08A85634:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
        goto L_08A8572C;
    }
    goto L_08A85640;
L_08A85640:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A85654;
    }
    goto L_08A8564C;
L_08A8564C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85740;
      }
      goto L_08A85654;
    }
L_08A85654:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A8566C;
      }
      goto L_08A85660;
    }
L_08A85660:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A85670;
    }
    goto L_08A85668;
L_08A85668:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A8566C;
L_08A8566C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A85670;
L_08A85670:
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08A85680u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A85680u) goto L_08A85680;
    return;
L_08A85680:
    ctx.set_gpr(31, 0x08A85688u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A85A3C;
L_08A85688:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(17, ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(31, 0x08A8569Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A85A3C;
L_08A8569C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A856A8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A856A8u) goto L_08A856A8;
    return;
L_08A856A8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
        goto L_08A85710;
    }
    goto L_08A856B4;
L_08A856B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A856B8;
L_08A856B8:
    ctx.set_gpr(31, 0x08A856C0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A856C0u) goto L_08A856C0;
    return;
L_08A856C0:
    ctx.set_gpr(31, 0x08A856C8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 706u, 0x08A97638u>(ctx, &aot_mem) && ctx.pc == 0x08A856C8u) goto L_08A856C8;
    return;
L_08A856C8:
    ctx.set_gpr(31, 0x08A856D0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 793u, 0x08A97E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A856D0u) goto L_08A856D0;
    return;
L_08A856D0:
    ctx.set_gpr(31, 0x08A856D8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 63u, 0x08A98F50u>(ctx, &aot_mem) && ctx.pc == 0x08A856D8u) goto L_08A856D8;
    return;
L_08A856D8:
    ctx.set_gpr(31, 0x08A856E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 154u, 0x08A9969Cu>(ctx, &aot_mem) && ctx.pc == 0x08A856E0u) goto L_08A856E0;
    return;
L_08A856E0:
    ctx.set_gpr(31, 0x08A856E8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 615u, 0x08A96F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A856E8u) goto L_08A856E8;
    return;
L_08A856E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A856F4u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A85A3C;
L_08A856F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A85700u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A85700u) goto L_08A85700;
    return;
L_08A85700:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A856B8;
    }
    goto L_08A8570C;
L_08A8570C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    goto L_08A85710;
L_08A85710:
    ctx.set_gpr(31, 0x08A85718u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A85718u) goto L_08A85718;
    return;
L_08A85718:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A85724u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A85724u) goto L_08A85724;
    return;
L_08A85724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85740;
      }
      goto L_08A8572C;
    }
L_08A8572C:
    ctx.set_gpr(31, 0x08A85734u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A85734u) goto L_08A85734;
    return;
L_08A85734:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A85740u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A85740u) goto L_08A85740;
    return;
L_08A85740:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A85744;
L_08A85744:
    ctx.set_gpr(31, 0x08A8574Cu);
    // nop
    goto L_08A85A44;
L_08A8574C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A85754;
    }
L_08A85754:
    ctx.set_gpr(31, 0x08A8575Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8575Cu) goto L_08A8575C;
    return;
L_08A8575C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A85768u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A85768u) goto L_08A85768;
    return;
L_08A85768:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A85790;
    }
    goto L_08A85770;
L_08A85770:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A85780u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A85780u) goto L_08A85780;
    return;
L_08A85780:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A85790;
L_08A85790:
    ctx.set_gpr(31, 0x08A85798u);
    // nop
    goto L_08A85A44;
L_08A85798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A857A0;
    }
L_08A857A0:
    ctx.set_gpr(31, 0x08A857A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A857A8u) goto L_08A857A8;
    return;
L_08A857A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A857B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A857B4u) goto L_08A857B4;
    return;
L_08A857B4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A857DC;
    }
    goto L_08A857BC;
L_08A857BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A857CCu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A857CCu) goto L_08A857CC;
    return;
L_08A857CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A857D8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A857D8u) goto L_08A857D8;
    return;
L_08A857D8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A857DC;
L_08A857DC:
    ctx.set_gpr(31, 0x08A857E4u);
    // nop
    goto L_08A85A44;
L_08A857E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85880;
      }
      goto L_08A857EC;
    }
L_08A857EC:
    ctx.set_gpr(31, 0x08A857F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A857F4u) goto L_08A857F4;
    return;
L_08A857F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A85800u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A85800u) goto L_08A85800;
    return;
L_08A85800:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A85878;
    }
    goto L_08A85808;
L_08A85808:
    ctx.set_gpr(31, 0x08A85810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A85810u) goto L_08A85810;
    return;
L_08A85810:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A85820u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85820u) goto L_08A85820;
    return;
L_08A85820:
    ctx.set_gpr(31, 0x08A85828u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A85828u) goto L_08A85828;
    return;
L_08A85828:
    ctx.set_gpr(31, 0x08A85830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A85830u) goto L_08A85830;
    return;
L_08A85830:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8583Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8583Cu) goto L_08A8583C;
    return;
L_08A8583C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(25));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(28));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A85870u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A85870u) goto L_08A85870;
    return;
L_08A85870:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A85878;
L_08A85878:
    ctx.set_gpr(31, 0x08A85880u);
    // nop
    goto L_08A85A44;
L_08A85880:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08A85884;
L_08A85884:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A858B4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A858C0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15348), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(15344), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A858CC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A858D8:
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3704), static_cast<std::uint8_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A858EC:
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
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 447u, 0x08846D8Cu>(ctx, &aot_mem); return;
L_08A8591C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(15)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85954:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(36));
    goto L_08A8595C;
L_08A8595C:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    goto L_08A85964;
L_08A85964:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(800)));
        goto L_08A85980;
    }
    goto L_08A85970;
L_08A85970:
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(800)));
      if (branch_taken) {
          goto L_08A85990;
      }
      goto L_08A85980;
    }
L_08A85980:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A85964;
      }
      goto L_08A85990;
    }
L_08A85990:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85998:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A859C4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 424u, 0x08A95F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A859C4u) goto L_08A859C4;
    return;
L_08A859C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A859D4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 389u, 0x08A95CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A859D4u) goto L_08A859D4;
    return;
L_08A859D4:
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
L_08A859EC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(36));
    goto L_08A859F4;
L_08A859F4:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(800), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85A08:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3704)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85A1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(36));
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem); return;
L_08A85A2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem); return;
L_08A85A3C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85A44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A85A6Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A85A6Cu) goto L_08A85A6C;
    return;
L_08A85A6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A85A80;
      }
      goto L_08A85A78;
    }
L_08A85A78:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A85A80;
L_08A85A80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, 0u + 0u);
        goto L_08A85AB0;
    }
    goto L_08A85A8C;
L_08A85A8C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(31, 0x08A85A98u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 591u, 0x088522A8u>(ctx, &aot_mem) && ctx.pc == 0x08A85A98u) goto L_08A85A98;
    return;
L_08A85A98:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(310));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08A85AACu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24396));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A85AACu) goto L_08A85AAC;
    return;
L_08A85AAC:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08A85AB0;
L_08A85AB0:
    ctx.set_gpr(31, 0x08A85AB8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 591u, 0x088522A8u>(ctx, &aot_mem) && ctx.pc == 0x08A85AB8u) goto L_08A85AB8;
    return;
L_08A85AB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A85ACC;
      }
      goto L_08A85AC4;
    }
L_08A85AC4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A85ACC;
L_08A85ACC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08A85AF0;
    }
    goto L_08A85AD8;
L_08A85AD8:
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(397));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08A85AECu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31332));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A85AECu) goto L_08A85AEC;
    return;
L_08A85AEC:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08A85AF0;
L_08A85AF0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A85B04u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A85B04u) goto L_08A85B04;
    return;
L_08A85B04:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(31, 0x08A85B10u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 591u, 0x088522A8u>(ctx, &aot_mem) && ctx.pc == 0x08A85B10u) goto L_08A85B10;
    return;
L_08A85B10:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(309));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A85B24u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24396));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A85B24u) goto L_08A85B24;
    return;
L_08A85B24:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08A85B30u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 591u, 0x088522A8u>(ctx, &aot_mem) && ctx.pc == 0x08A85B30u) goto L_08A85B30;
    return;
L_08A85B30:
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(396));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08A85B44u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31332));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A85B44u) goto L_08A85B44;
    return;
L_08A85B44:
    ctx.set_gpr(31, 0x08A85B4Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 38u, 0x08A94354u>(ctx, &aot_mem) && ctx.pc == 0x08A85B4Cu) goto L_08A85B4C;
    return;
L_08A85B4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85B5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24380)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24376)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24372)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24368)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24364)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24360)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24356)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24352)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24348)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24344)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24340)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24336)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A85C20;
L_08A85C20:
    ctx.set_gpr(31, 0x08A85C28u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85C28u) goto L_08A85C28;
    return;
L_08A85C28:
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A85C38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    goto L_08A85C88;
L_08A85C38:
    if (ctx.gpr[19] != ctx.gpr[2]) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A85C48;
    }
    goto L_08A85C40;
L_08A85C40:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A85C48;
L_08A85C48:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A85C20;
      }
      goto L_08A85C54;
    }
L_08A85C54:
    if (static_cast<std::int32_t>(ctx.gpr[17]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
        goto L_08A85C64;
    }
    goto L_08A85C5C;
L_08A85C5C:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
    goto L_08A85C64;
L_08A85C64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85C88:
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
    goto L_08A85CB8;
L_08A85CB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13326)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A85CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24332)));
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24328)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24324)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24320)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24316)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24312)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24308)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24304)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24300)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24296)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24292)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18120)));
    ctx.set_gpr(22, ctx.gpr[23] - ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A86310;
      }
      goto L_08A85DA8;
    }
L_08A85DA8:
    ctx.set_gpr(31, 0x08A85DB0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    goto L_08A8714C;
L_08A85DB0:
    ctx.set_gpr(31, 0x08A85DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85DB8u) goto L_08A85DB8;
    return;
L_08A85DB8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A85DD8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85DD8u) goto L_08A85DD8;
    return;
L_08A85DD8:
    ctx.set_gpr(31, 0x08A85DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85DE0u) goto L_08A85DE0;
    return;
L_08A85DE0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A85E00u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85E00u) goto L_08A85E00;
    return;
L_08A85E00:
    ctx.set_gpr(31, 0x08A85E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85E08u) goto L_08A85E08;
    return;
L_08A85E08:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A85E28u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85E28u) goto L_08A85E28;
    return;
L_08A85E28:
    ctx.set_gpr(31, 0x08A85E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85E30u) goto L_08A85E30;
    return;
L_08A85E30:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A85E50u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85E50u) goto L_08A85E50;
    return;
L_08A85E50:
    ctx.set_gpr(31, 0x08A85E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85E58u) goto L_08A85E58;
    return;
L_08A85E58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(31, 0x08A85E6Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85E6Cu) goto L_08A85E6C;
    return;
L_08A85E6C:
    ctx.set_gpr(31, 0x08A85E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85E74u) goto L_08A85E74;
    return;
L_08A85E74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17166u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A85E94u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A85E94u) goto L_08A85E94;
    return;
L_08A85E94:
    ctx.set_gpr(31, 0x08A85E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85E9Cu) goto L_08A85E9C;
    return;
L_08A85E9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17239u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A85EBCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A85EBCu) goto L_08A85EBC;
    return;
L_08A85EBC:
    ctx.set_gpr(31, 0x08A85EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85EC4u) goto L_08A85EC4;
    return;
L_08A85EC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17296u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A85EE4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A85EE4u) goto L_08A85EE4;
    return;
L_08A85EE4:
    ctx.set_gpr(31, 0x08A85EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85EECu) goto L_08A85EEC;
    return;
L_08A85EEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17332u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A85F10u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A85F10u) goto L_08A85F10;
    return;
L_08A85F10:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A85F14;
L_08A85F14:
    ctx.set_gpr(31, 0x08A85F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85F1Cu) goto L_08A85F1C;
    return;
L_08A85F1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 17042u << 16u);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.set_gpr(7, 17026u << 16u);
    ctx.set_gpr(3, 16512u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A85F64u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A85F64u) goto L_08A85F64;
    return;
L_08A85F64:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A85F94;
      }
      goto L_08A85F70;
    }
L_08A85F70:
    ctx.set_gpr(31, 0x08A85F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85F78u) goto L_08A85F78;
    return;
L_08A85F78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A85F8Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85F8Cu) goto L_08A85F8C;
    return;
L_08A85F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A85FB4;
      }
      goto L_08A85F94;
    }
L_08A85F94:
    ctx.set_gpr(31, 0x08A85F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A85F9Cu) goto L_08A85F9C;
    return;
L_08A85F9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A85FB0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85FB0u) goto L_08A85FB0;
    return;
L_08A85FB0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A85FB4;
L_08A85FB4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A85F14;
      }
      goto L_08A85FC0;
    }
L_08A85FC0:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(21, ctx.gpr[18] + ctx.gpr[23]);
    goto L_08A85FC8;
L_08A85FC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18196)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) >= 0) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(18784))))));
        goto L_08A86124;
    }
    goto L_08A85FD4;
L_08A85FD4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < -4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A86120;
      }
      goto L_08A85FE0;
    }
L_08A85FE0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08A85FF8;
      }
      goto L_08A85FEC;
    }
L_08A85FEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85FF8;
      }
      goto L_08A85FF4;
    }
L_08A85FF4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08A85FF8;
L_08A85FF8:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(18784))))));
        goto L_08A8609C;
    }
    goto L_08A86000;
L_08A86000:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18780)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08A86028u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86028u) goto L_08A86028;
    return;
L_08A86028:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A86048u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86048u) goto L_08A86048;
    return;
L_08A86048:
    ctx.set_gpr(31, 0x08A86050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86050u) goto L_08A86050;
    return;
L_08A86050:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86078u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A86078u) goto L_08A86078;
    return;
L_08A86078:
    ctx.set_gpr(31, 0x08A86080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86080u) goto L_08A86080;
    return;
L_08A86080:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86094u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A86094u) goto L_08A86094;
    return;
L_08A86094:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A86194;
      }
      goto L_08A8609C;
    }
L_08A8609C:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A860F0;
      }
      goto L_08A860C0;
    }
L_08A860C0:
    ctx.set_gpr(31, 0x08A860C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A860C8u) goto L_08A860C8;
    return;
L_08A860C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A860E8u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A860E8u) goto L_08A860E8;
    return;
L_08A860E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86190;
      }
      goto L_08A860F0;
    }
L_08A860F0:
    ctx.set_gpr(31, 0x08A860F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A860F8u) goto L_08A860F8;
    return;
L_08A860F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86118u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86118u) goto L_08A86118;
    return;
L_08A86118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86190;
      }
      goto L_08A86120;
    }
L_08A86120:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(18784))))));
    goto L_08A86124;
L_08A86124:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
        goto L_08A8615C;
    }
    goto L_08A8612C;
L_08A8612C:
    ctx.set_gpr(31, 0x08A86134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86134u) goto L_08A86134;
    return;
L_08A86134:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A86154u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86154u) goto L_08A86154;
    return;
L_08A86154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86190;
      }
      goto L_08A8615C;
    }
L_08A8615C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x08A86170u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86170u) goto L_08A86170;
    return;
L_08A86170:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86190u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86190u) goto L_08A86190;
    return;
L_08A86190:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A86194;
L_08A86194:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A85FC8;
      }
      goto L_08A861A0;
    }
L_08A861A0:
    ctx.set_gpr(31, 0x08A861A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A861A8u) goto L_08A861A8;
    return;
L_08A861A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A861C8u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A861C8u) goto L_08A861C8;
    return;
L_08A861C8:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18196)));
    goto L_08A861D0;
L_08A861D0:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08A861E8;
      }
      goto L_08A861DC;
    }
L_08A861DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A861E8;
      }
      goto L_08A861E4;
    }
L_08A861E4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08A861E8;
L_08A861E8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A86218;
      }
      goto L_08A861F0;
    }
L_08A861F0:
    ctx.set_gpr(31, 0x08A861F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A861F8u) goto L_08A861F8;
    return;
L_08A861F8:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(33));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A86210u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A86210u) goto L_08A86210;
    return;
L_08A86210:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8623C;
      }
      goto L_08A86218;
    }
L_08A86218:
    ctx.set_gpr(31, 0x08A86220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86220u) goto L_08A86220;
    return;
L_08A86220:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(33));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A86238u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A86238u) goto L_08A86238;
    return;
L_08A86238:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A8623C;
L_08A8623C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18196)));
        goto L_08A861D0;
    }
    goto L_08A86248;
L_08A86248:
    if (ctx.gpr[23] != 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(196));
        goto L_08A862AC;
    }
    goto L_08A86250;
L_08A86250:
    ctx.set_gpr(31, 0x08A86258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86258u) goto L_08A86258;
    return;
L_08A86258:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A8626Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8626Cu) goto L_08A8626C;
    return;
L_08A8626C:
    ctx.set_gpr(31, 0x08A86274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86274u) goto L_08A86274;
    return;
L_08A86274:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08A86288u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86288u) goto L_08A86288;
    return;
L_08A86288:
    ctx.set_gpr(31, 0x08A86290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86290u) goto L_08A86290;
    return;
L_08A86290:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08A862A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A862A4u) goto L_08A862A4;
    return;
L_08A862A4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18120), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08A8711C;
      }
      goto L_08A862AC;
    }
L_08A862AC:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A87118;
      }
      goto L_08A862B4;
    }
L_08A862B4:
    ctx.set_gpr(31, 0x08A862BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A862BCu) goto L_08A862BC;
    return;
L_08A862BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08A862D0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A862D0u) goto L_08A862D0;
    return;
L_08A862D0:
    ctx.set_gpr(31, 0x08A862D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A862D8u) goto L_08A862D8;
    return;
L_08A862D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A862ECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A862ECu) goto L_08A862EC;
    return;
L_08A862EC:
    ctx.set_gpr(31, 0x08A862F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A862F4u) goto L_08A862F4;
    return;
L_08A862F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x08A86308u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86308u) goto L_08A86308;
    return;
L_08A86308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87118;
      }
      goto L_08A86310;
    }
L_08A86310:
    ctx.set_gpr(31, 0x08A86318u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86318u) goto L_08A86318;
    return;
L_08A86318:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A86324u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_08A8591C;
L_08A86324:
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 16368u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08A86338u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 98u, 0x0883CBCCu>(ctx, &aot_mem) && ctx.pc == 0x08A86338u) goto L_08A86338;
    return;
L_08A86338:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(196));
        goto L_08A86F54;
    }
    goto L_08A86340;
L_08A86340:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A86350u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18296), 0u);
    goto L_08A8714C;
L_08A86350:
    ctx.set_gpr(31, 0x08A86358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86358u) goto L_08A86358;
    return;
L_08A86358:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17166u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86378u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A86378u) goto L_08A86378;
    return;
L_08A86378:
    ctx.set_gpr(31, 0x08A86380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86380u) goto L_08A86380;
    return;
L_08A86380:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17239u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A863A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A863A0u) goto L_08A863A0;
    return;
L_08A863A0:
    ctx.set_gpr(31, 0x08A863A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A863A8u) goto L_08A863A8;
    return;
L_08A863A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17296u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A863C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A863C8u) goto L_08A863C8;
    return;
L_08A863C8:
    ctx.set_gpr(31, 0x08A863D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A863D0u) goto L_08A863D0;
    return;
L_08A863D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17332u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A863F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A863F4u) goto L_08A863F4;
    return;
L_08A863F4:
    ctx.set_gpr(31, 0x08A863FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A863FCu) goto L_08A863FC;
    return;
L_08A863FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8641Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8641Cu) goto L_08A8641C;
    return;
L_08A8641C:
    ctx.set_gpr(31, 0x08A86424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86424u) goto L_08A86424;
    return;
L_08A86424:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A86444u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86444u) goto L_08A86444;
    return;
L_08A86444:
    ctx.set_gpr(31, 0x08A8644Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8644Cu) goto L_08A8644C;
    return;
L_08A8644C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8646Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8646Cu) goto L_08A8646C;
    return;
L_08A8646C:
    ctx.set_gpr(31, 0x08A86474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86474u) goto L_08A86474;
    return;
L_08A86474:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A86494u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86494u) goto L_08A86494;
    return;
L_08A86494:
    ctx.set_gpr(31, 0x08A8649Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8649Cu) goto L_08A8649C;
    return;
L_08A8649C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A864B4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A864B4u) goto L_08A864B4;
    return;
L_08A864B4:
    ctx.set_gpr(31, 0x08A864BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A864BCu) goto L_08A864BC;
    return;
L_08A864BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A864D4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A864D4u) goto L_08A864D4;
    return;
L_08A864D4:
    ctx.set_gpr(31, 0x08A864DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A864DCu) goto L_08A864DC;
    return;
L_08A864DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A864F4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A864F4u) goto L_08A864F4;
    return;
L_08A864F4:
    ctx.set_gpr(31, 0x08A864FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A864FCu) goto L_08A864FC;
    return;
L_08A864FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A86514u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A86514u) goto L_08A86514;
    return;
L_08A86514:
    ctx.set_gpr(31, 0x08A8651Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8651Cu) goto L_08A8651C;
    return;
L_08A8651C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A86534u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A86534u) goto L_08A86534;
    return;
L_08A86534:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A8670C;
      }
      goto L_08A8653C;
    }
L_08A8653C:
    ctx.set_gpr(31, 0x08A86544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86544u) goto L_08A86544;
    return;
L_08A86544:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17034u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86564u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A86564u) goto L_08A86564;
    return;
L_08A86564:
    ctx.set_gpr(31, 0x08A8656Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8656Cu) goto L_08A8656C;
    return;
L_08A8656C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8658Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8658Cu) goto L_08A8658C;
    return;
L_08A8658C:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x08A8659Cu);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8659Cu) goto L_08A8659C;
    return;
L_08A8659C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A865C8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A865C8u) goto L_08A865C8;
    return;
L_08A865C8:
    ctx.set_gpr(31, 0x08A865D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A865D0u) goto L_08A865D0;
    return;
L_08A865D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A865FCu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A865FCu) goto L_08A865FC;
    return;
L_08A865FC:
    ctx.set_gpr(31, 0x08A86604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86604u) goto L_08A86604;
    return;
L_08A86604:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17166u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86630u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A86630u) goto L_08A86630;
    return;
L_08A86630:
    ctx.set_gpr(31, 0x08A86638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86638u) goto L_08A86638;
    return;
L_08A86638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17239u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86664u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A86664u) goto L_08A86664;
    return;
L_08A86664:
    ctx.set_gpr(31, 0x08A8666Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8666Cu) goto L_08A8666C;
    return;
L_08A8666C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17296u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86698u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A86698u) goto L_08A86698;
    return;
L_08A86698:
    ctx.set_gpr(31, 0x08A866A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A866A0u) goto L_08A866A0;
    return;
L_08A866A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17332u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A866D0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A866D0u) goto L_08A866D0;
    return;
L_08A866D0:
    ctx.set_gpr(31, 0x08A866D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A866D8u) goto L_08A866D8;
    return;
L_08A866D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17369u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86704u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A86704u) goto L_08A86704;
    return;
L_08A86704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A868D4;
      }
      goto L_08A8670C;
    }
L_08A8670C:
    ctx.set_gpr(31, 0x08A86714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86714u) goto L_08A86714;
    return;
L_08A86714:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17369u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86734u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A86734u) goto L_08A86734;
    return;
L_08A86734:
    ctx.set_gpr(31, 0x08A8673Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8673Cu) goto L_08A8673C;
    return;
L_08A8673C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8675Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8675Cu) goto L_08A8675C;
    return;
L_08A8675C:
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x08A8676Cu);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8676Cu) goto L_08A8676C;
    return;
L_08A8676C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A86798u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A86798u) goto L_08A86798;
    return;
L_08A86798:
    ctx.set_gpr(31, 0x08A867A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A867A0u) goto L_08A867A0;
    return;
L_08A867A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A867CCu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A867CCu) goto L_08A867CC;
    return;
L_08A867CC:
    ctx.set_gpr(31, 0x08A867D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A867D4u) goto L_08A867D4;
    return;
L_08A867D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17034u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86800u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A86800u) goto L_08A86800;
    return;
L_08A86800:
    ctx.set_gpr(31, 0x08A86808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86808u) goto L_08A86808;
    return;
L_08A86808:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17166u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86834u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A86834u) goto L_08A86834;
    return;
L_08A86834:
    ctx.set_gpr(31, 0x08A8683Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8683Cu) goto L_08A8683C;
    return;
L_08A8683C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17239u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86868u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A86868u) goto L_08A86868;
    return;
L_08A86868:
    ctx.set_gpr(31, 0x08A86870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86870u) goto L_08A86870;
    return;
L_08A86870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17296u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8689Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A8689Cu) goto L_08A8689C;
    return;
L_08A8689C:
    ctx.set_gpr(31, 0x08A868A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A868A4u) goto L_08A868A4;
    return;
L_08A868A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17332u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A868D4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A868D4u) goto L_08A868D4;
    return;
L_08A868D4:
    ctx.set_gpr(31, 0x08A868DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A868DCu) goto L_08A868DC;
    return;
L_08A868DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(31, 0x08A868F0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A868F0u) goto L_08A868F0;
    return;
L_08A868F0:
    ctx.set_gpr(31, 0x08A868F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A868F8u) goto L_08A868F8;
    return;
L_08A868F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(31, 0x08A8690Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8690Cu) goto L_08A8690C;
    return;
L_08A8690C:
    ctx.set_gpr(31, 0x08A86914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86914u) goto L_08A86914;
    return;
L_08A86914:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(31, 0x08A86928u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86928u) goto L_08A86928;
    return;
L_08A86928:
    ctx.set_gpr(31, 0x08A86930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86930u) goto L_08A86930;
    return;
L_08A86930:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A86944u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86944u) goto L_08A86944;
    return;
L_08A86944:
    ctx.set_gpr(31, 0x08A8694Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8694Cu) goto L_08A8694C;
    return;
L_08A8694C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(31, 0x08A86960u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86960u) goto L_08A86960;
    return;
L_08A86960:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(196));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A869C8;
      }
      goto L_08A8696C;
    }
L_08A8696C:
    ctx.set_gpr(31, 0x08A86974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86974u) goto L_08A86974;
    return;
L_08A86974:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A86988u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86988u) goto L_08A86988;
    return;
L_08A86988:
    ctx.set_gpr(31, 0x08A86990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86990u) goto L_08A86990;
    return;
L_08A86990:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(31, 0x08A869A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A869A4u) goto L_08A869A4;
    return;
L_08A869A4:
    ctx.set_gpr(31, 0x08A869ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A869ACu) goto L_08A869AC;
    return;
L_08A869AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A869C0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A869C0u) goto L_08A869C0;
    return;
L_08A869C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08A86AD8;
      }
      goto L_08A869C8;
    }
L_08A869C8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A86A2C;
      }
      goto L_08A869D0;
    }
L_08A869D0:
    ctx.set_gpr(31, 0x08A869D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A869D8u) goto L_08A869D8;
    return;
L_08A869D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A869ECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A869ECu) goto L_08A869EC;
    return;
L_08A869EC:
    ctx.set_gpr(31, 0x08A869F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A869F4u) goto L_08A869F4;
    return;
L_08A869F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08A86A08u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86A08u) goto L_08A86A08;
    return;
L_08A86A08:
    ctx.set_gpr(31, 0x08A86A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86A10u) goto L_08A86A10;
    return;
L_08A86A10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08A86A24u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86A24u) goto L_08A86A24;
    return;
L_08A86A24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86AD4;
      }
      goto L_08A86A2C;
    }
L_08A86A2C:
    ctx.set_gpr(31, 0x08A86A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86A34u) goto L_08A86A34;
    return;
L_08A86A34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A86A48u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86A48u) goto L_08A86A48;
    return;
L_08A86A48:
    ctx.set_gpr(31, 0x08A86A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86A50u) goto L_08A86A50;
    return;
L_08A86A50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08A86A64u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86A64u) goto L_08A86A64;
    return;
L_08A86A64:
    ctx.set_gpr(31, 0x08A86A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86A6Cu) goto L_08A86A6C;
    return;
L_08A86A6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08A86A80u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86A80u) goto L_08A86A80;
    return;
L_08A86A80:
    ctx.set_gpr(31, 0x08A86A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86A88u) goto L_08A86A88;
    return;
L_08A86A88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08A86A9Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86A9Cu) goto L_08A86A9C;
    return;
L_08A86A9C:
    ctx.set_gpr(31, 0x08A86AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86AA4u) goto L_08A86AA4;
    return;
L_08A86AA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A86AB8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86AB8u) goto L_08A86AB8;
    return;
L_08A86AB8:
    ctx.set_gpr(31, 0x08A86AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86AC0u) goto L_08A86AC0;
    return;
L_08A86AC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x08A86AD4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86AD4u) goto L_08A86AD4;
    return;
L_08A86AD4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A86AD8;
L_08A86AD8:
    ctx.set_gpr(31, 0x08A86AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86AE0u) goto L_08A86AE0;
    return;
L_08A86AE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 17042u << 16u);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.set_gpr(7, 17026u << 16u);
    ctx.set_gpr(3, 16512u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A86B28u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A86B28u) goto L_08A86B28;
    return;
L_08A86B28:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
        goto L_08A86B54;
    }
    goto L_08A86B30;
L_08A86B30:
    ctx.set_gpr(31, 0x08A86B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86B38u) goto L_08A86B38;
    return;
L_08A86B38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86B4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86B4Cu) goto L_08A86B4C;
    return;
L_08A86B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A86BA0;
      }
      goto L_08A86B54;
    }
L_08A86B54:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A86B80;
      }
      goto L_08A86B5C;
    }
L_08A86B5C:
    ctx.set_gpr(31, 0x08A86B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86B64u) goto L_08A86B64;
    return;
L_08A86B64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86B78u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86B78u) goto L_08A86B78;
    return;
L_08A86B78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86B9C;
      }
      goto L_08A86B80;
    }
L_08A86B80:
    ctx.set_gpr(31, 0x08A86B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86B88u) goto L_08A86B88;
    return;
L_08A86B88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86B9Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86B9Cu) goto L_08A86B9C;
    return;
L_08A86B9C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A86BA0;
L_08A86BA0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A86AD8;
      }
      goto L_08A86BAC;
    }
L_08A86BAC:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[23]);
    goto L_08A86BB4;
L_08A86BB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18196)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) >= 0) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18784))))));
        goto L_08A86D10;
    }
    goto L_08A86BC0;
L_08A86BC0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < -4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A86D0C;
      }
      goto L_08A86BCC;
    }
L_08A86BCC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08A86BE4;
      }
      goto L_08A86BD8;
    }
L_08A86BD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86BE4;
      }
      goto L_08A86BE0;
    }
L_08A86BE0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08A86BE4;
L_08A86BE4:
    if (ctx.gpr[2] != ctx.gpr[17]) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18784))))));
        goto L_08A86C88;
    }
    goto L_08A86BEC;
L_08A86BEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18780)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08A86C14u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86C14u) goto L_08A86C14;
    return;
L_08A86C14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(82));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A86C34u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86C34u) goto L_08A86C34;
    return;
L_08A86C34:
    ctx.set_gpr(31, 0x08A86C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86C3Cu) goto L_08A86C3C;
    return;
L_08A86C3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(82));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86C64u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A86C64u) goto L_08A86C64;
    return;
L_08A86C64:
    ctx.set_gpr(31, 0x08A86C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86C6Cu) goto L_08A86C6C;
    return;
L_08A86C6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(82));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86C80u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A86C80u) goto L_08A86C80;
    return;
L_08A86C80:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A86D8C;
      }
      goto L_08A86C88;
    }
L_08A86C88:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A86CDC;
      }
      goto L_08A86CAC;
    }
L_08A86CAC:
    ctx.set_gpr(31, 0x08A86CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86CB4u) goto L_08A86CB4;
    return;
L_08A86CB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(82));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86CD4u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86CD4u) goto L_08A86CD4;
    return;
L_08A86CD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86D88;
      }
      goto L_08A86CDC;
    }
L_08A86CDC:
    ctx.set_gpr(31, 0x08A86CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86CE4u) goto L_08A86CE4;
    return;
L_08A86CE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(82));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86D04u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86D04u) goto L_08A86D04;
    return;
L_08A86D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86D88;
      }
      goto L_08A86D0C;
    }
L_08A86D0C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18784))))));
    goto L_08A86D10;
L_08A86D10:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
        goto L_08A86D48;
    }
    goto L_08A86D18;
L_08A86D18:
    ctx.set_gpr(31, 0x08A86D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86D20u) goto L_08A86D20;
    return;
L_08A86D20:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(82));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A86D40u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86D40u) goto L_08A86D40;
    return;
L_08A86D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86D88;
      }
      goto L_08A86D48;
    }
L_08A86D48:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08A86D68u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86D68u) goto L_08A86D68;
    return;
L_08A86D68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(82));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A86D88u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86D88u) goto L_08A86D88;
    return;
L_08A86D88:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A86D8C;
L_08A86D8C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A86BB4;
      }
      goto L_08A86D98;
    }
L_08A86D98:
    ctx.set_gpr(31, 0x08A86DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86DA0u) goto L_08A86DA0;
    return;
L_08A86DA0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(81));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A86DC0u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86DC0u) goto L_08A86DC0;
    return;
L_08A86DC0:
    ctx.set_gpr(31, 0x08A86DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86DC8u) goto L_08A86DC8;
    return;
L_08A86DC8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(86));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A86DE8u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86DE8u) goto L_08A86DE8;
    return;
L_08A86DE8:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A86DEC;
L_08A86DEC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A86E9C;
      }
      goto L_08A86DF4;
    }
L_08A86DF4:
    ctx.set_gpr(31, 0x08A86DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86DFCu) goto L_08A86DFC;
    return;
L_08A86DFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 17042u << 16u);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.set_gpr(7, 17026u << 16u);
    ctx.set_gpr(3, 16512u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A86E44u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A86E44u) goto L_08A86E44;
    return;
L_08A86E44:
    ctx.set_gpr(31, 0x08A86E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86E4Cu) goto L_08A86E4C;
    return;
L_08A86E4C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 17042u << 16u);
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(7, 16512u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17066u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A86E94u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A86E94u) goto L_08A86E94;
    return;
L_08A86E94:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A86F40;
      }
      goto L_08A86E9C;
    }
L_08A86E9C:
    ctx.set_gpr(31, 0x08A86EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86EA4u) goto L_08A86EA4;
    return;
L_08A86EA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 17042u << 16u);
    ctx.set_gpr(2, 17066u << 16u);
    ctx.set_gpr(7, 17026u << 16u);
    ctx.set_gpr(3, 16512u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A86EECu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A86EECu) goto L_08A86EEC;
    return;
L_08A86EEC:
    ctx.set_gpr(31, 0x08A86EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86EF4u) goto L_08A86EF4;
    return;
L_08A86EF4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 17042u << 16u);
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(7, 16512u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17066u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A86F3Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A86F3Cu) goto L_08A86F3C;
    return;
L_08A86F3C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A86F40;
L_08A86F40:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A86DEC;
      }
      goto L_08A86F4C;
    }
L_08A86F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87118;
      }
      goto L_08A86F54;
    }
L_08A86F54:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8700C;
      }
      goto L_08A86F5C;
    }
L_08A86F5C:
    ctx.set_gpr(31, 0x08A86F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86F64u) goto L_08A86F64;
    return;
L_08A86F64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08A86F78u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86F78u) goto L_08A86F78;
    return;
L_08A86F78:
    ctx.set_gpr(31, 0x08A86F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86F80u) goto L_08A86F80;
    return;
L_08A86F80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A86F94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86F94u) goto L_08A86F94;
    return;
L_08A86F94:
    ctx.set_gpr(31, 0x08A86F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86F9Cu) goto L_08A86F9C;
    return;
L_08A86F9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x08A86FB0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86FB0u) goto L_08A86FB0;
    return;
L_08A86FB0:
    ctx.set_gpr(31, 0x08A86FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86FB8u) goto L_08A86FB8;
    return;
L_08A86FB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A86FCCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86FCCu) goto L_08A86FCC;
    return;
L_08A86FCC:
    ctx.set_gpr(31, 0x08A86FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86FD4u) goto L_08A86FD4;
    return;
L_08A86FD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(31, 0x08A86FE8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86FE8u) goto L_08A86FE8;
    return;
L_08A86FE8:
    ctx.set_gpr(31, 0x08A86FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86FF0u) goto L_08A86FF0;
    return;
L_08A86FF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A87004u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87004u) goto L_08A87004;
    return;
L_08A87004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87118;
      }
      goto L_08A8700C;
    }
L_08A8700C:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87070;
      }
      goto L_08A87014;
    }
L_08A87014:
    ctx.set_gpr(31, 0x08A8701Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8701Cu) goto L_08A8701C;
    return;
L_08A8701C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A87030u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87030u) goto L_08A87030;
    return;
L_08A87030:
    ctx.set_gpr(31, 0x08A87038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87038u) goto L_08A87038;
    return;
L_08A87038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08A8704Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8704Cu) goto L_08A8704C;
    return;
L_08A8704C:
    ctx.set_gpr(31, 0x08A87054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87054u) goto L_08A87054;
    return;
L_08A87054:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08A87068u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87068u) goto L_08A87068;
    return;
L_08A87068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87118;
      }
      goto L_08A87070;
    }
L_08A87070:
    ctx.set_gpr(31, 0x08A87078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87078u) goto L_08A87078;
    return;
L_08A87078:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A8708Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8708Cu) goto L_08A8708C;
    return;
L_08A8708C:
    ctx.set_gpr(31, 0x08A87094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87094u) goto L_08A87094;
    return;
L_08A87094:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08A870A8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A870A8u) goto L_08A870A8;
    return;
L_08A870A8:
    ctx.set_gpr(31, 0x08A870B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A870B0u) goto L_08A870B0;
    return;
L_08A870B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08A870C4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A870C4u) goto L_08A870C4;
    return;
L_08A870C4:
    ctx.set_gpr(31, 0x08A870CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A870CCu) goto L_08A870CC;
    return;
L_08A870CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08A870E0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A870E0u) goto L_08A870E0;
    return;
L_08A870E0:
    ctx.set_gpr(31, 0x08A870E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A870E8u) goto L_08A870E8;
    return;
L_08A870E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A870FCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A870FCu) goto L_08A870FC;
    return;
L_08A870FC:
    ctx.set_gpr(31, 0x08A87104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87104u) goto L_08A87104;
    return;
L_08A87104:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x08A87118u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87118u) goto L_08A87118;
    return;
L_08A87118:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18120), ctx.gpr[23]);
    goto L_08A8711C;
L_08A8711C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8714C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.set_gpr(4, ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_08A87188;
      }
      goto L_08A8717C;
    }
L_08A8717C:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
        goto L_08A8718C;
    }
    goto L_08A87184;
L_08A87184:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    goto L_08A87188;
L_08A87188:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    goto L_08A8718C;
L_08A8718C:
    if (static_cast<std::int32_t>(ctx.gpr[6]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
        goto L_08A871A0;
    }
    goto L_08A87194;
L_08A87194:
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    goto L_08A871A0;
L_08A871A0:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A871F8;
      }
      goto L_08A871B0;
    }
L_08A871B0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A871B4;
L_08A871B4:
    ctx.set_gpr(31, 0x08A871BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A871BCu) goto L_08A871BC;
    return;
L_08A871BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A871D0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A871D0u) goto L_08A871D0;
    return;
L_08A871D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A871E0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08A877A4;
L_08A871E0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A871B4;
      }
      goto L_08A871F0;
    }
L_08A871F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A87784;
      }
      goto L_08A871F8;
    }
L_08A871F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A874C4;
      }
      goto L_08A87200;
    }
L_08A87200:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8720C;
      }
      goto L_08A87208;
    }
L_08A87208:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A8720C;
L_08A8720C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A87210;
L_08A87210:
    if (ctx.gpr[17] != ctx.gpr[16]) {
    ctx.set_gpr(2, 17096u << 16u);
        goto L_08A872C8;
    }
    goto L_08A87218;
L_08A87218:
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17042u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.set_gpr(31, 0x08A87234u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87234u) goto L_08A87234;
    return;
L_08A87234:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.gpr[16] >> 31u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, 17042u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16512u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 37449u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] | 9363u);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.hi);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A872C0u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[2];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A872C0u) goto L_08A872C0;
    return;
L_08A872C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A87360;
      }
      goto L_08A872C8;
    }
L_08A872C8:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17042u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.set_gpr(31, 0x08A872E0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A872E0u) goto L_08A872E0;
    return;
L_08A872E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.gpr[16] >> 31u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, 17042u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 37449u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] | 9363u);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.hi);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[2];
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(31, 0x08A8735Cu);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A8735Cu) goto L_08A8735C;
    return;
L_08A8735C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A87360;
L_08A87360:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87210;
      }
      goto L_08A8736C;
    }
L_08A8736C:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A87374;
L_08A87374:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A87380u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08A877A4;
L_08A87380:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08A87374;
    }
    goto L_08A87390;
L_08A87390:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A87394;
L_08A87394:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A87430;
      }
      goto L_08A8739C;
    }
L_08A8739C:
    ctx.set_gpr(31, 0x08A873A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A873A4u) goto L_08A873A4;
    return;
L_08A873A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] >> 31u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16512u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 37449u << 16u);
    ctx.set_gpr(8, ctx.gpr[3] | 9363u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[0] = ctx.fpr[20] + ctx.fpr[0];
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[0];
    ctx.set_gpr(31, 0x08A87428u);
    ctx.fpr[14] = ctx.fpr[0] - ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A87428u) goto L_08A87428;
    return;
L_08A87428:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A874B0;
      }
      goto L_08A87430;
    }
L_08A87430:
    ctx.set_gpr(31, 0x08A87438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87438u) goto L_08A87438;
    return;
L_08A87438:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] >> 31u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 37449u << 16u);
    ctx.set_gpr(8, ctx.gpr[3] | 9363u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[0];
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08A874ACu);
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A874ACu) goto L_08A874AC;
    return;
L_08A874AC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A874B0;
L_08A874B0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87394;
      }
      goto L_08A874BC;
    }
L_08A874BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87780;
      }
      goto L_08A874C4;
    }
L_08A874C4:
    if (static_cast<std::int32_t>(ctx.gpr[6]) >= 0) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_08A874D4;
    }
    goto L_08A874CC;
L_08A874CC:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A874D4;
L_08A874D4:
    if (ctx.gpr[17] != ctx.gpr[16]) {
    ctx.set_gpr(2, 17096u << 16u);
        goto L_08A87590;
    }
    goto L_08A874DC;
L_08A874DC:
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17042u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.set_gpr(31, 0x08A874F8u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A874F8u) goto L_08A874F8;
    return;
L_08A874F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.gpr[16] >> 31u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, 17042u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16512u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 37449u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] | 9363u);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A87588u);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[2];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A87588u) goto L_08A87588;
    return;
L_08A87588:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8762C;
      }
      goto L_08A87590;
    }
L_08A87590:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17042u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.set_gpr(31, 0x08A875A8u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A875A8u) goto L_08A875A8;
    return;
L_08A875A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.gpr[16] >> 31u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, 17042u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 37449u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] | 9363u);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[2];
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(31, 0x08A87628u);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A87628u) goto L_08A87628;
    return;
L_08A87628:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A8762C;
L_08A8762C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A874D4;
      }
      goto L_08A87638;
    }
L_08A87638:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A87640;
L_08A87640:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8764Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A877A4;
L_08A8764C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08A87640;
    }
    goto L_08A8765C;
L_08A8765C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A87660;
L_08A87660:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A876F8;
      }
      goto L_08A87668;
    }
L_08A87668:
    ctx.set_gpr(31, 0x08A87670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87670u) goto L_08A87670;
    return;
L_08A87670:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] >> 31u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.hi);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16512u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 37449u << 16u);
    ctx.set_gpr(8, ctx.gpr[3] | 9363u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[0] = ctx.fpr[20] + ctx.fpr[0];
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[0];
    ctx.set_gpr(31, 0x08A876F0u);
    ctx.fpr[14] = ctx.fpr[0] - ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A876F0u) goto L_08A876F0;
    return;
L_08A876F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A87774;
      }
      goto L_08A876F8;
    }
L_08A876F8:
    ctx.set_gpr(31, 0x08A87700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87700u) goto L_08A87700;
    return;
L_08A87700:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] >> 31u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.hi);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 37449u << 16u);
    ctx.set_gpr(8, ctx.gpr[3] | 9363u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[0];
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08A87770u);
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A87770u) goto L_08A87770;
    return;
L_08A87770:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A87774;
L_08A87774:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87660;
      }
      goto L_08A87780;
    }
L_08A87780:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A87784;
L_08A87784:
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
L_08A877A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[16] ^ 1u);
    ctx.set_gpr(5, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(7, ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_08A877F0;
      }
      goto L_08A877E4;
    }
L_08A877E4:
    if (ctx.gpr[7] == 0u) {
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
        goto L_08A877F4;
    }
    goto L_08A877EC;
L_08A877EC:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    goto L_08A877F0;
L_08A877F0:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    goto L_08A877F4;
L_08A877F4:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.set_gpr(3, ctx.gpr[6] << 3u);
        goto L_08A87808;
    }
    goto L_08A877FC;
L_08A877FC:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[6] << 3u);
    goto L_08A87808;
L_08A87808:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A87CE8;
      }
      goto L_08A87818;
    }
L_08A87818:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(19, ctx.hi);
    if (static_cast<std::int32_t>(ctx.gpr[19]) <= 0) {
    ctx.set_gpr(20, 0u + 0u);
        goto L_08A87878;
    }
    goto L_08A8782C;
L_08A8782C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87874;
      }
      goto L_08A87838;
    }
L_08A87838:
    ctx.set_gpr(2, 37449u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 9363u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[17] >> 31u);
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(20, 0u + 0u);
        goto L_08A87878;
    }
    goto L_08A8786C;
L_08A8786C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A87878;
      }
      goto L_08A87874;
    }
L_08A87874:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08A87878;
L_08A87878:
    ctx.set_gpr(2, 37449u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 9363u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[17] >> 31u);
    ctx.set_gpr(2, 49280u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(31, 0x08A878B0u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A878B0u) goto L_08A878B0;
    return;
L_08A878B0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 17042u << 16u);
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(7, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 17096u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A87908u);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A87908u) goto L_08A87908;
    return;
L_08A87908:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A87C04;
      }
      goto L_08A87914;
    }
L_08A87914:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A87A10;
      }
      goto L_08A87920;
    }
L_08A87920:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87930;
      }
      goto L_08A87928;
    }
L_08A87928:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A88424u>(ctx, &aot_mem); return;
      }
      goto L_08A87930;
    }
L_08A87930:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A879C0;
      }
      goto L_08A87938;
    }
L_08A87938:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A879C0;
      }
      goto L_08A87944;
    }
L_08A87944:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(31, 0x08A87958u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A87958u) goto L_08A87958;
    return;
L_08A87958:
    ctx.set_gpr(31, 0x08A87960u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15992));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 752u, 0x08AE28ECu>(ctx, &aot_mem) && ctx.pc == 0x08A87960u) goto L_08A87960;
    return;
L_08A87960:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_08A8796C;
    }
    goto L_08A87968;
L_08A87968:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(11));
    goto L_08A8796C;
L_08A8796C:
    ctx.set_gpr(31, 0x08A87974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87974u) goto L_08A87974;
    return;
L_08A87974:
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(8, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A87990u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87990u) goto L_08A87990;
    return;
L_08A87990:
    ctx.set_gpr(31, 0x08A87998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87998u) goto L_08A87998;
    return;
L_08A87998:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A879B8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A879B8u) goto L_08A879B8;
    return;
L_08A879B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A879C0;
    }
L_08A879C0:
    ctx.set_gpr(31, 0x08A879C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A879C8u) goto L_08A879C8;
    return;
L_08A879C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A879E0u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A879E0u) goto L_08A879E0;
    return;
L_08A879E0:
    ctx.set_gpr(31, 0x08A879E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A879E8u) goto L_08A879E8;
    return;
L_08A879E8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87A08u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87A08u) goto L_08A87A08;
    return;
L_08A87A08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87A10;
    }
L_08A87A10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A87B94;
      }
      goto L_08A87A18;
    }
L_08A87A18:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87B94;
      }
      goto L_08A87A24;
    }
L_08A87A24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(31, 0x08A87A38u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A87A38u) goto L_08A87A38;
    return;
L_08A87A38:
    ctx.set_gpr(31, 0x08A87A40u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 770u, 0x08AA2978u>(ctx, &aot_mem) && ctx.pc == 0x08A87A40u) goto L_08A87A40;
    return;
L_08A87A40:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A87B24;
      }
      goto L_08A87A4C;
    }
L_08A87A4C:
    ctx.set_gpr(31, 0x08A87A54u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 770u, 0x08AA2978u>(ctx, &aot_mem) && ctx.pc == 0x08A87A54u) goto L_08A87A54;
    return;
L_08A87A54:
    ctx.set_gpr(31, 0x08A87A5Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 770u, 0x08AA2978u>(ctx, &aot_mem) && ctx.pc == 0x08A87A5Cu) goto L_08A87A5C;
    return;
L_08A87A5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A87A6C;
      }
      goto L_08A87A64;
    }
L_08A87A64:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A87A6C;
L_08A87A6C:
    ctx.set_gpr(31, 0x08A87A74u);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87A74u) goto L_08A87A74;
    return;
L_08A87A74:
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(8, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A87A90u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87A90u) goto L_08A87A90;
    return;
L_08A87A90:
    ctx.set_gpr(31, 0x08A87A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87A98u) goto L_08A87A98;
    return;
L_08A87A98:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87AB8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87AB8u) goto L_08A87AB8;
    return;
L_08A87AB8:
    ctx.set_gpr(31, 0x08A87AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87AC0u) goto L_08A87AC0;
    return;
L_08A87AC0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A87ACCu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 770u, 0x08AA2978u>(ctx, &aot_mem) && ctx.pc == 0x08A87ACCu) goto L_08A87ACC;
    return;
L_08A87ACC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
      if (branch_taken) {
          goto L_08A87AE0;
      }
      goto L_08A87AD4;
    }
L_08A87AD4:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, ctx.gpr[3] ^ 1u);
        goto L_08A87AE4;
    }
    goto L_08A87ADC;
L_08A87ADC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    goto L_08A87AE0;
L_08A87AE0:
    ctx.set_gpr(2, ctx.gpr[3] ^ 1u);
    goto L_08A87AE4;
L_08A87AE4:
    ctx.set_gpr(19, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(31, 0x08A87AF0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 770u, 0x08AA2978u>(ctx, &aot_mem) && ctx.pc == 0x08A87AF0u) goto L_08A87AF0;
    return;
L_08A87AF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A87B04;
      }
      goto L_08A87AF8;
    }
L_08A87AF8:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
        goto L_08A87B08;
    }
    goto L_08A87B00;
L_08A87B00:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A87B04;
L_08A87B04:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    goto L_08A87B08;
L_08A87B08:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A87B1Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 256u, 0x08A7D144u>(ctx, &aot_mem) && ctx.pc == 0x08A87B1Cu) goto L_08A87B1C;
    return;
L_08A87B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87B24;
    }
L_08A87B24:
    ctx.set_gpr(31, 0x08A87B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87B2Cu) goto L_08A87B2C;
    return;
L_08A87B2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A87B44u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87B44u) goto L_08A87B44;
    return;
L_08A87B44:
    ctx.set_gpr(31, 0x08A87B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87B4Cu) goto L_08A87B4C;
    return;
L_08A87B4C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87B6Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87B6Cu) goto L_08A87B6C;
    return;
L_08A87B6C:
    ctx.set_gpr(31, 0x08A87B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87B74u) goto L_08A87B74;
    return;
L_08A87B74:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A87B8Cu);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 256u, 0x08A7D144u>(ctx, &aot_mem) && ctx.pc == 0x08A87B8Cu) goto L_08A87B8C;
    return;
L_08A87B8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87B94;
    }
L_08A87B94:
    ctx.set_gpr(31, 0x08A87B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87B9Cu) goto L_08A87B9C;
    return;
L_08A87B9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A87BB4u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87BB4u) goto L_08A87BB4;
    return;
L_08A87BB4:
    ctx.set_gpr(31, 0x08A87BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87BBCu) goto L_08A87BBC;
    return;
L_08A87BBC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87BDCu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87BDCu) goto L_08A87BDC;
    return;
L_08A87BDC:
    ctx.set_gpr(31, 0x08A87BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87BE4u) goto L_08A87BE4;
    return;
L_08A87BE4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A87BFCu);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 256u, 0x08A7D144u>(ctx, &aot_mem) && ctx.pc == 0x08A87BFCu) goto L_08A87BFC;
    return;
L_08A87BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87C04;
    }
L_08A87C04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A87C98;
      }
      goto L_08A87C0C;
    }
L_08A87C0C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87C98;
      }
      goto L_08A87C18;
    }
L_08A87C18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(31, 0x08A87C2Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A87C2Cu) goto L_08A87C2C;
    return;
L_08A87C2C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16328));
    ctx.set_gpr(31, 0x08A87C38u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1269u, 0x08AEBD14u>(ctx, &aot_mem) && ctx.pc == 0x08A87C38u) goto L_08A87C38;
    return;
L_08A87C38:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_08A87C44;
    }
    goto L_08A87C40;
L_08A87C40:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(10));
    goto L_08A87C44;
L_08A87C44:
    ctx.set_gpr(31, 0x08A87C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87C4Cu) goto L_08A87C4C;
    return;
L_08A87C4C:
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(8, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A87C68u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87C68u) goto L_08A87C68;
    return;
L_08A87C68:
    ctx.set_gpr(31, 0x08A87C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87C70u) goto L_08A87C70;
    return;
L_08A87C70:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87C90u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87C90u) goto L_08A87C90;
    return;
L_08A87C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87C98;
    }
L_08A87C98:
    ctx.set_gpr(31, 0x08A87CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87CA0u) goto L_08A87CA0;
    return;
L_08A87CA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A87CB8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87CB8u) goto L_08A87CB8;
    return;
L_08A87CB8:
    ctx.set_gpr(31, 0x08A87CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87CC0u) goto L_08A87CC0;
    return;
L_08A87CC0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87CE0u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87CE0u) goto L_08A87CE0;
    return;
L_08A87CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87CE8;
    }
L_08A87CE8:
    ctx.set_gpr(4, 37449u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 9363u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.gpr[17] >> 31u);
    ctx.set_gpr(6, ctx.hi);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[17]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 44u, 0x08A88234u>(ctx, &aot_mem); return;
      }
      goto L_08A87D14;
    }
L_08A87D14:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[6] == ctx.gpr[4]) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        goto L_08A87F1C;
    }
    goto L_08A87D20;
L_08A87D20:
    if (ctx.gpr[6] == 0u) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        goto L_08A87D30;
    }
    goto L_08A87D28;
L_08A87D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87D30;
    }
L_08A87D30:
    ctx.set_gpr(19, ctx.hi);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(5));
        goto L_08A87E24;
    }
    goto L_08A87D40;
L_08A87D40:
    ctx.set_gpr(31, 0x08A87D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87D48u) goto L_08A87D48;
    return;
L_08A87D48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A87D60u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87D60u) goto L_08A87D60;
    return;
L_08A87D60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A87DE8;
      }
      goto L_08A87D68;
    }
L_08A87D68:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87DAC;
      }
      goto L_08A87D70;
    }
L_08A87D70:
    ctx.set_gpr(31, 0x08A87D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87D78u) goto L_08A87D78;
    return;
L_08A87D78:
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87DA4u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A87DA4u) goto L_08A87DA4;
    return;
L_08A87DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87DAC;
    }
L_08A87DAC:
    ctx.set_gpr(31, 0x08A87DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87DB4u) goto L_08A87DB4;
    return;
L_08A87DB4:
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87DE0u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A87DE0u) goto L_08A87DE0;
    return;
L_08A87DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87DE8;
    }
L_08A87DE8:
    ctx.set_gpr(31, 0x08A87DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87DF0u) goto L_08A87DF0;
    return;
L_08A87DF0:
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87E1Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A87E1Cu) goto L_08A87E1C;
    return;
L_08A87E1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87E24;
    }
L_08A87E24:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[5]);
        goto L_08A87E94;
    }
    goto L_08A87E30;
L_08A87E30:
    ctx.set_gpr(31, 0x08A87E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87E38u) goto L_08A87E38;
    return;
L_08A87E38:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A87E50u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87E50u) goto L_08A87E50;
    return;
L_08A87E50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87E58;
    }
L_08A87E58:
    ctx.set_gpr(31, 0x08A87E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87E60u) goto L_08A87E60;
    return;
L_08A87E60:
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87E8Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A87E8Cu) goto L_08A87E8C;
    return;
L_08A87E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87E94;
    }
L_08A87E94:
    ctx.set_gpr(16, ctx.gpr[17] ^ ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(31, 0x08A87EB4u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A87EB4u) goto L_08A87EB4;
    return;
L_08A87EB4:
    ctx.set_gpr(31, 0x08A87EBCu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15992));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 752u, 0x08AE28ECu>(ctx, &aot_mem) && ctx.pc == 0x08A87EBCu) goto L_08A87EBC;
    return;
L_08A87EBC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, 0u + 0u);
        goto L_08A87EC8;
    }
    goto L_08A87EC4;
L_08A87EC4:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(11));
    goto L_08A87EC8;
L_08A87EC8:
    ctx.set_gpr(31, 0x08A87ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87ED0u) goto L_08A87ED0;
    return;
L_08A87ED0:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(8, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A87EECu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87EECu) goto L_08A87EEC;
    return;
L_08A87EEC:
    ctx.set_gpr(31, 0x08A87EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87EF4u) goto L_08A87EF4;
    return;
L_08A87EF4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87F14u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87F14u) goto L_08A87F14;
    return;
L_08A87F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 73u, 0x08A88420u>(ctx, &aot_mem); return;
      }
      goto L_08A87F1C;
    }
L_08A87F1C:
    ctx.set_gpr(19, ctx.hi);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(5));
        (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 5u, 0x08A88030u>(ctx, &aot_mem); return;
    }
    goto L_08A87F2C;
L_08A87F2C:
    ctx.set_gpr(31, 0x08A87F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87F34u) goto L_08A87F34;
    return;
L_08A87F34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A87F4Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A87F4Cu) goto L_08A87F4C;
    return;
L_08A87F4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A87FD4;
      }
      goto L_08A87F54;
    }
L_08A87F54:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87F98;
      }
      goto L_08A87F5C;
    }
L_08A87F5C:
    ctx.set_gpr(31, 0x08A87F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87F64u) goto L_08A87F64;
    return;
L_08A87F64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87F90u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A87F90u) goto L_08A87F90;
    return;
L_08A87F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 2u, 0x08A88008u>(ctx, &aot_mem); return;
      }
      goto L_08A87F98;
    }
L_08A87F98:
    ctx.set_gpr(31, 0x08A87FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87FA0u) goto L_08A87FA0;
    return;
L_08A87FA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A87FCCu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A87FCCu) goto L_08A87FCC;
    return;
L_08A87FCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 2u, 0x08A88008u>(ctx, &aot_mem); return;
      }
      goto L_08A87FD4;
    }
L_08A87FD4:
    ctx.set_gpr(31, 0x08A87FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A87FDCu) goto L_08A87FDC;
    return;
L_08A87FDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.pc = 0x08A88000u; return;
}

void recomp_unit_0160(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0160_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_160(Runtime &runtime) {
    runtime.register_generated_unit(160u, 0x08A84000u, 16384u, &recomp_unit_0160, &recomp_unit_0160_entry);
    runtime.register_function(0x08A84000u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84014u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8401Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84024u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8403Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84040u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84048u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84050u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8405Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84064u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8406Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84084u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8408Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84094u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8410Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8411Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84120u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84124u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84134u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84140u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84148u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8414Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84150u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84170u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84178u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84180u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84188u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8418Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84190u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84208u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84218u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84224u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8422Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8423Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84248u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84250u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84288u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84290u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8430Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84314u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8431Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84354u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8435Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8441Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84424u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84458u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84460u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84480u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84488u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84518u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84520u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84528u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84554u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8455Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84590u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84598u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84628u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84630u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84650u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84654u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8465Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84668u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84670u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84690u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84698u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8471Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84724u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8472Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84734u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84754u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84758u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84760u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84770u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84804u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84814u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84834u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8483Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84848u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8484Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84858u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84860u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84868u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84870u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8488Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84890u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84898u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8490Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84910u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8491Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84920u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8492Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84944u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8494Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84960u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84968u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84974u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84978u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8497Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84990u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85000u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85008u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8501Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85028u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85034u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85038u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85040u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85048u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85050u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85058u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85068u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8506Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85074u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85080u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8508Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85090u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8509Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85100u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85108u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8511Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85128u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85130u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85140u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85148u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85150u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8515Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8516Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85180u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85190u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85194u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8519Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85238u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85240u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85270u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85278u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85280u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85310u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85318u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85344u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8534Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85380u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85388u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85410u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85420u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85428u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8542Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85434u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8543Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85444u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8544Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85454u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85474u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8547Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85484u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8548Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85500u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85504u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8550Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85540u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85548u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85550u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8555Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85564u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8556Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85604u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8560Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85618u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85620u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85628u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85634u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85640u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8564Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85654u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85660u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85668u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8566Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85670u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85680u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85688u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8569Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85700u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8570Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85710u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85718u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85724u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8572Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85734u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85740u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85744u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8574Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85754u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8575Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85768u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85770u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85780u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85790u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85798u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A857F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85800u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85808u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85810u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85820u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85828u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85830u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8583Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85870u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85878u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85880u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85884u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8591Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85954u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8595Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85964u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85970u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85980u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85990u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85998u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85ACCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86000u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86028u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86048u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86050u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86078u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86080u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86094u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8609Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86118u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86120u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86124u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8612Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86134u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86154u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8615Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86170u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86190u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86194u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86210u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86218u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86220u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86238u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8623Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86248u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86250u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86258u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8626Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86274u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86288u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86290u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86308u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86310u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86318u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86324u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86338u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86340u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86350u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86358u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86378u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86380u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8641Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86424u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86444u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8644Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8646Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86474u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86494u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8649Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86514u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8651Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86534u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8653Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86544u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86564u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8656Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8658Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8659Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86604u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86630u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86638u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86664u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8666Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86698u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86704u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8670Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86714u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86734u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8673Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8675Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8676Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86798u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86800u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86808u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86834u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8683Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86868u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86870u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8689Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8690Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86914u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86928u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86930u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86944u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8694Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86960u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8696Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86974u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86988u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86990u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87004u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8700Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87014u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8701Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87030u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87038u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8704Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87054u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87068u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87070u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87078u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8708Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87094u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87104u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87118u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8711Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8714Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8717Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87184u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87188u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8718Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87194u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87200u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87208u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8720Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87210u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87218u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87234u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8735Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87360u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8736Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87374u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87380u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87390u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87394u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8739Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A873A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87428u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87430u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87438u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87588u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87590u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87628u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8762Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87638u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87640u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8764Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8765Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87660u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87668u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87670u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87700u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87770u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87774u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87780u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87784u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87808u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87818u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8782Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87838u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8786Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87874u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87878u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87908u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87914u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87920u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87928u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87930u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87938u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87944u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87958u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87960u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87968u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8796Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87974u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87990u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87998u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87ACCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87ADCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87ED0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FDCu, &recomp_unit_0160, "recomp_unit_0160");
}
} // namespace psprecomp
