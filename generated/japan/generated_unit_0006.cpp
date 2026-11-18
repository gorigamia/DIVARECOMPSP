#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0006[4091] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 7, 0, 0,
    8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23,
    0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 43, 44, 45, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 58,
    0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 64, 0, 0, 0, 65, 0, 0,
    0, 66, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 81, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0,
    86, 87, 0, 0, 0, 88, 89, 0, 90, 0, 0, 0, 91, 0, 0, 92, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0,
    96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0,
    192, 0, 0, 0, 193, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 199, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 202, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 209, 0,
    210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 215, 216, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0,
    0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 225, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 227, 228, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 235, 0,
    236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0,
    0, 244, 0, 0, 245, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0,
    0, 0, 0, 252, 0, 0, 253, 0, 254, 255, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 263, 0, 264, 0, 0, 0, 265, 266, 0, 267, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 269, 270, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 274, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 280, 0, 281, 0, 0, 0, 282, 283, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286,
    287, 0, 288, 0, 0, 0, 289, 290, 0, 0, 0, 0, 0, 0, 291, 0, 292, 293, 0, 294, 0, 0, 295, 296, 0, 297, 0, 0, 298, 0, 0, 299,
    0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0,
    0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 311, 312, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316,
    0, 317, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 326, 327, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0,
    339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 353, 0,
    354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 357, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 360, 0, 361, 0, 0, 0, 362, 0, 0, 0,
    363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 368, 0, 369, 370, 0,
    0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 379, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 382, 0, 383, 0, 0, 0, 384, 0, 0, 385, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 388, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 392, 393, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 394, 395, 0, 396, 0, 0, 0, 397, 398, 0, 399, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 402, 0, 403,
    0, 0, 0, 404, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0,
    411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 419, 0, 420, 0, 0,
    0, 421, 422, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 427, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 429, 430, 0, 431, 0, 0, 0, 432, 0, 0, 433, 0, 0, 434, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 437, 0, 438, 0, 0,
    0, 439, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    446, 0, 0, 447, 0, 0, 448, 449, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0,
    0, 0, 0, 0, 455, 0, 456, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 459, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463,
    464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 466, 0, 467, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0,
    0, 472, 0, 0, 0, 0, 473, 0, 0, 474, 0, 475, 476, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0,
    0, 0, 0, 0, 0, 482, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 485, 0, 486, 0, 0, 0, 487, 488, 0,
    489, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 492, 0, 493, 0, 0, 0, 494, 495, 0, 0, 0, 0, 0, 0, 496, 0, 497, 498, 0, 0,
    499, 0, 0, 0, 0, 500, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 503, 0, 504, 0, 0, 0, 505, 506, 0, 507,
    508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 510, 0, 511, 0, 0, 0, 512, 0, 0, 513, 0, 514, 515, 0, 0, 516, 0, 0, 517, 518, 0,
    0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0,
    528, 0, 0, 529, 0, 530, 0, 0, 0, 531, 532, 0, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 537,
    538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 540, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 544, 545, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 546, 547, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0,
    0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0,
    562, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 568, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 569, 570, 0, 571, 0, 0, 0, 572, 0, 0, 0, 573, 0, 574, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 577,
    0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 583, 0, 584, 585, 0, 0, 0, 0, 586, 0, 587, 0,
    0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 591, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 595, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 597, 0, 598, 0, 0, 0, 599, 0, 0, 600, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602,
    603, 0, 604, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 607, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    609, 610, 0, 611, 0, 0, 0, 612, 613, 0, 614, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 617, 0, 618, 0, 0, 0, 619, 620, 0, 0,
    0, 0, 0, 0, 621, 0, 622, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0,
    627, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 635, 0, 636, 0, 0,
    0, 637, 0, 0, 638, 0, 0, 639, 640, 0, 641, 0, 642, 0, 0, 0, 0, 643, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 649, 0, 650, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0,
    0, 0, 653, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0,
    0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 663, 664, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 669, 0, 0, 670,
    0, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0,
    0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 681, 0, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0,
    0, 685, 686, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 690, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695,
    0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700,
    0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 0, 706, 0, 707, 0,
    0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 0,
    0, 712, 713, 0, 0, 714, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 0,
    0, 720, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 726, 0, 0, 727, 0, 728, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 731, 732, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 737,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 740, 741, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    743, 0, 744, 0, 745, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 750, 0, 751, 0,
    0, 0, 752, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 756, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 759, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779,
    0, 0, 780, 0, 0, 0, 781, 0, 0, 782, 0, 783, 0, 784, 0, 785, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 788, 789, 790, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 792, 793, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796,
    0, 0, 0, 0, 797, 0, 798, 799, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 803,
    0, 804, 0, 0, 805, 806, 0, 0, 0, 807, 0, 808, 0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 813,
    0, 814, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 822, 0, 823, 0,
    0, 0, 0, 824, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 828, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0, 833, 0, 834, 0, 835, 0, 0, 0, 0, 0,
    0, 0, 0, 836, 0, 837, 838, 0, 0, 0, 839, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 841, 842, 0, 0, 843, 844, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0, 847, 0, 848, 0, 0, 0, 0, 849, 0, 0, 850, 0, 0, 0, 0, 0, 851, 852, 0, 853, 0,
    854, 0, 0, 0, 0, 855, 0, 856, 0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 859, 0, 860, 0, 861, 0, 0, 0, 0, 0, 862, 0, 0, 0,
    0, 863, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 866, 0, 0, 0, 867, 0, 0, 868, 0, 869, 0, 870, 0, 871, 0,
    0, 0, 872, 0, 873, 0, 874, 0, 875, 876, 0, 877, 0, 878, 0, 879, 0, 0, 880, 0, 881, 0, 0, 882, 0, 0, 0, 883, 0, 884, 0, 0,
    0, 0, 0, 885, 0, 886, 887, 0, 888, 0, 889, 0, 890, 0, 891, 0, 892, 0, 893, 0, 894, 0, 895, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 896, 0, 0, 897, 0, 0, 898, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 0, 901, 0,
    0, 0, 902, 0, 0, 0, 0, 903, 0, 904, 905, 0, 0, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0,
    908, 0, 0, 0, 909, 0, 0, 0, 0, 910, 0, 911, 912, 0, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 914,
    0, 0, 915, 0, 0, 0, 916, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 918, 0, 919, 0, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 922, 0, 0, 0, 923, 0, 0, 0, 0, 0, 924, 0, 0, 0, 0, 925, 0, 926, 0, 0, 0, 0,
    0, 0, 927, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 928, 0, 0, 929, 0, 0, 0, 930, 0, 0, 0, 0, 931, 0, 932, 933, 0,
    0, 0, 0, 0, 934, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 0, 936, 0, 0, 0, 937, 0, 0, 0, 0, 938, 0, 939,
    940, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 0, 942, 0, 943, 0, 944, 945, 0, 946, 0, 0, 947, 0, 0, 948, 0, 0, 949, 0, 0,
    0, 0, 0, 950, 951, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 952, 0, 953, 0, 954, 0, 0, 0, 955,
};
void recomp_unit_0006_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0881C004u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0006[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0881C004;
    case 2u: goto L_0881C048;
    case 3u: goto L_0881C05C;
    case 4u: goto L_0881C0C8;
    case 5u: goto L_0881C0EC;
    case 6u: goto L_0881C0F4;
    case 7u: goto L_0881C0F8;
    case 8u: goto L_0881C104;
    case 9u: goto L_0881C114;
    case 10u: goto L_0881C12C;
    case 11u: goto L_0881C134;
    case 12u: goto L_0881C188;
    case 13u: goto L_0881C1D8;
    case 14u: goto L_0881C1DC;
    case 15u: goto L_0881C20C;
    case 16u: goto L_0881C218;
    case 17u: goto L_0881C230;
    case 18u: goto L_0881C240;
    case 19u: goto L_0881C24C;
    case 20u: goto L_0881C258;
    case 21u: goto L_0881C260;
    case 22u: goto L_0881C268;
    case 23u: goto L_0881C280;
    case 24u: goto L_0881C28C;
    case 25u: goto L_0881C298;
    case 26u: goto L_0881C2A4;
    case 27u: goto L_0881C2AC;
    case 28u: goto L_0881C2E4;
    case 29u: goto L_0881C2FC;
    case 30u: goto L_0881C304;
    case 31u: goto L_0881C36C;
    case 32u: goto L_0881C39C;
    case 33u: goto L_0881C3A8;
    case 34u: goto L_0881C3B4;
    case 35u: goto L_0881C3BC;
    case 36u: goto L_0881C3C4;
    case 37u: goto L_0881C3CC;
    case 38u: goto L_0881C3E0;
    case 39u: goto L_0881C420;
    case 40u: goto L_0881C42C;
    case 41u: goto L_0881C434;
    case 42u: goto L_0881C43C;
    case 43u: goto L_0881C444;
    case 44u: goto L_0881C448;
    case 45u: goto L_0881C44C;
    case 46u: goto L_0881C450;
    case 47u: goto L_0881C46C;
    case 48u: goto L_0881C474;
    case 49u: goto L_0881C498;
    case 50u: goto L_0881C4A8;
    case 51u: goto L_0881C4B0;
    case 52u: goto L_0881C4B8;
    case 53u: goto L_0881C4C0;
    case 54u: goto L_0881C4D4;
    case 55u: goto L_0881C4DC;
    case 56u: goto L_0881C4EC;
    case 57u: goto L_0881C4F4;
    case 58u: goto L_0881C500;
    case 59u: goto L_0881C508;
    case 60u: goto L_0881C514;
    case 61u: goto L_0881C540;
    case 62u: goto L_0881C550;
    case 63u: goto L_0881C564;
    case 64u: goto L_0881C568;
    case 65u: goto L_0881C578;
    case 66u: goto L_0881C588;
    case 67u: goto L_0881C58C;
    case 68u: goto L_0881C598;
    case 69u: goto L_0881C5A8;
    case 70u: goto L_0881C5B8;
    case 71u: goto L_0881C5C8;
    case 72u: goto L_0881C5DC;
    case 73u: goto L_0881C5E8;
    case 74u: goto L_0881C610;
    case 75u: goto L_0881C61C;
    case 76u: goto L_0881C628;
    case 77u: goto L_0881C63C;
    case 78u: goto L_0881C66C;
    case 79u: goto L_0881C698;
    case 80u: goto L_0881C6A8;
    case 81u: goto L_0881C6AC;
    case 82u: goto L_0881C6C0;
    case 83u: goto L_0881C6C8;
    case 84u: goto L_0881C6E4;
    case 85u: goto L_0881C6F8;
    case 86u: goto L_0881C704;
    case 87u: goto L_0881C708;
    case 88u: goto L_0881C718;
    case 89u: goto L_0881C71C;
    case 90u: goto L_0881C724;
    case 91u: goto L_0881C734;
    case 92u: goto L_0881C740;
    case 93u: goto L_0881C744;
    case 94u: goto L_0881C760;
    case 95u: goto L_0881C770;
    case 96u: goto L_0881C784;
    case 97u: goto L_0881C78C;
    case 98u: goto L_0881C794;
    case 99u: goto L_0881C79C;
    case 100u: goto L_0881C7A4;
    case 101u: goto L_0881C7AC;
    case 102u: goto L_0881C7B4;
    case 103u: goto L_0881C7C0;
    case 104u: goto L_0881C7CC;
    case 105u: goto L_0881C7D4;
    case 106u: goto L_0881C7DC;
    case 107u: goto L_0881C7E8;
    case 108u: goto L_0881C7F0;
    case 109u: goto L_0881C81C;
    case 110u: goto L_0881C82C;
    case 111u: goto L_0881C858;
    case 112u: goto L_0881C86C;
    case 113u: goto L_0881C884;
    case 114u: goto L_0881C88C;
    case 115u: goto L_0881C894;
    case 116u: goto L_0881C89C;
    case 117u: goto L_0881C8C8;
    case 118u: goto L_0881C8E8;
    case 119u: goto L_0881C8F8;
    case 120u: goto L_0881C90C;
    case 121u: goto L_0881C920;
    case 122u: goto L_0881C944;
    case 123u: goto L_0881C94C;
    case 124u: goto L_0881C960;
    case 125u: goto L_0881C984;
    case 126u: goto L_0881C9D4;
    case 127u: goto L_0881C9DC;
    case 128u: goto L_0881C9E4;
    case 129u: goto L_0881CA04;
    case 130u: goto L_0881CA14;
    case 131u: goto L_0881CA28;
    case 132u: goto L_0881CA3C;
    case 133u: goto L_0881CA48;
    case 134u: goto L_0881CA6C;
    case 135u: goto L_0881CA74;
    case 136u: goto L_0881CA88;
    case 137u: goto L_0881CA9C;
    case 138u: goto L_0881CABC;
    case 139u: goto L_0881CACC;
    case 140u: goto L_0881CAE0;
    case 141u: goto L_0881CAE8;
    case 142u: goto L_0881CAFC;
    case 143u: goto L_0881CB08;
    case 144u: goto L_0881CB2C;
    case 145u: goto L_0881CB64;
    case 146u: goto L_0881CB78;
    case 147u: goto L_0881CB80;
    case 148u: goto L_0881CB8C;
    case 149u: goto L_0881CBB0;
    case 150u: goto L_0881CBB8;
    case 151u: goto L_0881CBD4;
    case 152u: goto L_0881CC0C;
    case 153u: goto L_0881CC18;
    case 154u: goto L_0881CC28;
    case 155u: goto L_0881CC3C;
    case 156u: goto L_0881CC54;
    case 157u: goto L_0881CC68;
    case 158u: goto L_0881CC74;
    case 159u: goto L_0881CCA0;
    case 160u: goto L_0881CCB0;
    case 161u: goto L_0881CCD0;
    case 162u: goto L_0881CCE4;
    case 163u: goto L_0881CCF0;
    case 164u: goto L_0881CD1C;
    case 165u: goto L_0881CD40;
    case 166u: goto L_0881CD4C;
    case 167u: goto L_0881CD60;
    case 168u: goto L_0881CD74;
    case 169u: goto L_0881CD98;
    case 170u: goto L_0881CDBC;
    case 171u: goto L_0881CDDC;
    case 172u: goto L_0881CDE8;
    case 173u: goto L_0881CDF8;
    case 174u: goto L_0881CE0C;
    case 175u: goto L_0881CE24;
    case 176u: goto L_0881CE38;
    case 177u: goto L_0881CE44;
    case 178u: goto L_0881CE70;
    case 179u: goto L_0881CE80;
    case 180u: goto L_0881CEA0;
    case 181u: goto L_0881CEB4;
    case 182u: goto L_0881CEC0;
    case 183u: goto L_0881CEEC;
    case 184u: goto L_0881CF04;
    case 185u: goto L_0881CF10;
    case 186u: goto L_0881CF18;
    case 187u: goto L_0881CF34;
    case 188u: goto L_0881CF54;
    case 189u: goto L_0881CF5C;
    case 190u: goto L_0881CF70;
    case 191u: goto L_0881CF7C;
    case 192u: goto L_0881CF84;
    case 193u: goto L_0881CF94;
    case 194u: goto L_0881CF98;
    case 195u: goto L_0881CFA4;
    case 196u: goto L_0881CFAC;
    case 197u: goto L_0881CFD4;
    case 198u: goto L_0881CFE4;
    case 199u: goto L_0881CFEC;
    case 200u: goto L_0881CFF0;
    case 201u: goto L_0881D018;
    case 202u: goto L_0881D01C;
    case 203u: goto L_0881D024;
    case 204u: goto L_0881D034;
    case 205u: goto L_0881D040;
    case 206u: goto L_0881D04C;
    case 207u: goto L_0881D050;
    case 208u: goto L_0881D078;
    case 209u: goto L_0881D07C;
    case 210u: goto L_0881D084;
    case 211u: goto L_0881D094;
    case 212u: goto L_0881D0A0;
    case 213u: goto L_0881D0B0;
    case 214u: goto L_0881D0BC;
    case 215u: goto L_0881D0C0;
    case 216u: goto L_0881D0C4;
    case 217u: goto L_0881D0D0;
    case 218u: goto L_0881D0E8;
    case 219u: goto L_0881D0FC;
    case 220u: goto L_0881D108;
    case 221u: goto L_0881D114;
    case 222u: goto L_0881D11C;
    case 223u: goto L_0881D144;
    case 224u: goto L_0881D160;
    case 225u: goto L_0881D168;
    case 226u: goto L_0881D16C;
    case 227u: goto L_0881D198;
    case 228u: goto L_0881D19C;
    case 229u: goto L_0881D1A4;
    case 230u: goto L_0881D1B4;
    case 231u: goto L_0881D1C0;
    case 232u: goto L_0881D1CC;
    case 233u: goto L_0881D1D0;
    case 234u: goto L_0881D1F8;
    case 235u: goto L_0881D1FC;
    case 236u: goto L_0881D204;
    case 237u: goto L_0881D214;
    case 238u: goto L_0881D220;
    case 239u: goto L_0881D230;
    case 240u: goto L_0881D23C;
    case 241u: goto L_0881D24C;
    case 242u: goto L_0881D254;
    case 243u: goto L_0881D27C;
    case 244u: goto L_0881D288;
    case 245u: goto L_0881D294;
    case 246u: goto L_0881D298;
    case 247u: goto L_0881D2A0;
    case 248u: goto L_0881D2BC;
    case 249u: goto L_0881D2DC;
    case 250u: goto L_0881D2F0;
    case 251u: goto L_0881D2FC;
    case 252u: goto L_0881D310;
    case 253u: goto L_0881D31C;
    case 254u: goto L_0881D324;
    case 255u: goto L_0881D328;
    case 256u: goto L_0881D33C;
    case 257u: goto L_0881D344;
    case 258u: goto L_0881D358;
    case 259u: goto L_0881D364;
    case 260u: goto L_0881D378;
    case 261u: goto L_0881D37C;
    case 262u: goto L_0881D3B8;
    case 263u: goto L_0881D3BC;
    case 264u: goto L_0881D3C4;
    case 265u: goto L_0881D3D4;
    case 266u: goto L_0881D3D8;
    case 267u: goto L_0881D3E0;
    case 268u: goto L_0881D3E4;
    case 269u: goto L_0881D40C;
    case 270u: goto L_0881D410;
    case 271u: goto L_0881D418;
    case 272u: goto L_0881D428;
    case 273u: goto L_0881D434;
    case 274u: goto L_0881D43C;
    case 275u: goto L_0881D440;
    case 276u: goto L_0881D44C;
    case 277u: goto L_0881D468;
    case 278u: goto L_0881D46C;
    case 279u: goto L_0881D4AC;
    case 280u: goto L_0881D4B0;
    case 281u: goto L_0881D4B8;
    case 282u: goto L_0881D4C8;
    case 283u: goto L_0881D4CC;
    case 284u: goto L_0881D4D4;
    case 285u: goto L_0881D4D8;
    case 286u: goto L_0881D500;
    case 287u: goto L_0881D504;
    case 288u: goto L_0881D50C;
    case 289u: goto L_0881D51C;
    case 290u: goto L_0881D520;
    case 291u: goto L_0881D53C;
    case 292u: goto L_0881D544;
    case 293u: goto L_0881D548;
    case 294u: goto L_0881D550;
    case 295u: goto L_0881D55C;
    case 296u: goto L_0881D560;
    case 297u: goto L_0881D568;
    case 298u: goto L_0881D574;
    case 299u: goto L_0881D580;
    case 300u: goto L_0881D58C;
    case 301u: goto L_0881D598;
    case 302u: goto L_0881D5A4;
    case 303u: goto L_0881D5B0;
    case 304u: goto L_0881D5B8;
    case 305u: goto L_0881D5C0;
    case 306u: goto L_0881D5F0;
    case 307u: goto L_0881D5F8;
    case 308u: goto L_0881D60C;
    case 309u: goto L_0881D618;
    case 310u: goto L_0881D620;
    case 311u: goto L_0881D630;
    case 312u: goto L_0881D634;
    case 313u: goto L_0881D640;
    case 314u: goto L_0881D648;
    case 315u: goto L_0881D670;
    case 316u: goto L_0881D680;
    case 317u: goto L_0881D688;
    case 318u: goto L_0881D68C;
    case 319u: goto L_0881D6B4;
    case 320u: goto L_0881D6B8;
    case 321u: goto L_0881D6C0;
    case 322u: goto L_0881D6D0;
    case 323u: goto L_0881D6E0;
    case 324u: goto L_0881D6E8;
    case 325u: goto L_0881D6EC;
    case 326u: goto L_0881D714;
    case 327u: goto L_0881D718;
    case 328u: goto L_0881D720;
    case 329u: goto L_0881D730;
    case 330u: goto L_0881D740;
    case 331u: goto L_0881D750;
    case 332u: goto L_0881D758;
    case 333u: goto L_0881D784;
    case 334u: goto L_0881D790;
    case 335u: goto L_0881D798;
    case 336u: goto L_0881D7A0;
    case 337u: goto L_0881D7E8;
    case 338u: goto L_0881D7F4;
    case 339u: goto L_0881D804;
    case 340u: goto L_0881D80C;
    case 341u: goto L_0881D834;
    case 342u: goto L_0881D840;
    case 343u: goto L_0881D84C;
    case 344u: goto L_0881D858;
    case 345u: goto L_0881D864;
    case 346u: goto L_0881D870;
    case 347u: goto L_0881D878;
    case 348u: goto L_0881D8A0;
    case 349u: goto L_0881D8BC;
    case 350u: goto L_0881D8C8;
    case 351u: goto L_0881D8CC;
    case 352u: goto L_0881D8F8;
    case 353u: goto L_0881D8FC;
    case 354u: goto L_0881D904;
    case 355u: goto L_0881D914;
    case 356u: goto L_0881D924;
    case 357u: goto L_0881D92C;
    case 358u: goto L_0881D930;
    case 359u: goto L_0881D958;
    case 360u: goto L_0881D95C;
    case 361u: goto L_0881D964;
    case 362u: goto L_0881D974;
    case 363u: goto L_0881D984;
    case 364u: goto L_0881D998;
    case 365u: goto L_0881D9B0;
    case 366u: goto L_0881D9D0;
    case 367u: goto L_0881D9E4;
    case 368u: goto L_0881D9F0;
    case 369u: goto L_0881D9F8;
    case 370u: goto L_0881D9FC;
    case 371u: goto L_0881DA10;
    case 372u: goto L_0881DA18;
    case 373u: goto L_0881DA2C;
    case 374u: goto L_0881DA38;
    case 375u: goto L_0881DA4C;
    case 376u: goto L_0881DA58;
    case 377u: goto L_0881DA5C;
    case 378u: goto L_0881DA74;
    case 379u: goto L_0881DA88;
    case 380u: goto L_0881DA8C;
    case 381u: goto L_0881DAC8;
    case 382u: goto L_0881DACC;
    case 383u: goto L_0881DAD4;
    case 384u: goto L_0881DAE4;
    case 385u: goto L_0881DAF0;
    case 386u: goto L_0881DAF4;
    case 387u: goto L_0881DB1C;
    case 388u: goto L_0881DB20;
    case 389u: goto L_0881DB28;
    case 390u: goto L_0881DB38;
    case 391u: goto L_0881DB40;
    case 392u: goto L_0881DB5C;
    case 393u: goto L_0881DB60;
    case 394u: goto L_0881DBA0;
    case 395u: goto L_0881DBA4;
    case 396u: goto L_0881DBAC;
    case 397u: goto L_0881DBBC;
    case 398u: goto L_0881DBC0;
    case 399u: goto L_0881DBC8;
    case 400u: goto L_0881DBCC;
    case 401u: goto L_0881DBF4;
    case 402u: goto L_0881DBF8;
    case 403u: goto L_0881DC00;
    case 404u: goto L_0881DC10;
    case 405u: goto L_0881DC14;
    case 406u: goto L_0881DC30;
    case 407u: goto L_0881DC38;
    case 408u: goto L_0881DC3C;
    case 409u: goto L_0881DC64;
    case 410u: goto L_0881DC6C;
    case 411u: goto L_0881DC84;
    case 412u: goto L_0881DC90;
    case 413u: goto L_0881DC9C;
    case 414u: goto L_0881DCA8;
    case 415u: goto L_0881DCB4;
    case 416u: goto L_0881DCC4;
    case 417u: goto L_0881DCD0;
    case 418u: goto L_0881DCE4;
    case 419u: goto L_0881DCF0;
    case 420u: goto L_0881DCF8;
    case 421u: goto L_0881DD08;
    case 422u: goto L_0881DD0C;
    case 423u: goto L_0881DD18;
    case 424u: goto L_0881DD20;
    case 425u: goto L_0881DD48;
    case 426u: goto L_0881DD58;
    case 427u: goto L_0881DD60;
    case 428u: goto L_0881DD64;
    case 429u: goto L_0881DD8C;
    case 430u: goto L_0881DD90;
    case 431u: goto L_0881DD98;
    case 432u: goto L_0881DDA8;
    case 433u: goto L_0881DDB4;
    case 434u: goto L_0881DDC0;
    case 435u: goto L_0881DDC4;
    case 436u: goto L_0881DDEC;
    case 437u: goto L_0881DDF0;
    case 438u: goto L_0881DDF8;
    case 439u: goto L_0881DE08;
    case 440u: goto L_0881DE14;
    case 441u: goto L_0881DE28;
    case 442u: goto L_0881DE34;
    case 443u: goto L_0881DE44;
    case 444u: goto L_0881DE54;
    case 445u: goto L_0881DE5C;
    case 446u: goto L_0881DE84;
    case 447u: goto L_0881DE90;
    case 448u: goto L_0881DE9C;
    case 449u: goto L_0881DEA0;
    case 450u: goto L_0881DEAC;
    case 451u: goto L_0881DEB8;
    case 452u: goto L_0881DEC8;
    case 453u: goto L_0881DED0;
    case 454u: goto L_0881DEF8;
    case 455u: goto L_0881DF14;
    case 456u: goto L_0881DF1C;
    case 457u: goto L_0881DF20;
    case 458u: goto L_0881DF4C;
    case 459u: goto L_0881DF50;
    case 460u: goto L_0881DF58;
    case 461u: goto L_0881DF68;
    case 462u: goto L_0881DF74;
    case 463u: goto L_0881DF80;
    case 464u: goto L_0881DF84;
    case 465u: goto L_0881DFAC;
    case 466u: goto L_0881DFB0;
    case 467u: goto L_0881DFB8;
    case 468u: goto L_0881DFC8;
    case 469u: goto L_0881DFD4;
    case 470u: goto L_0881DFE8;
    case 471u: goto L_0881DFFC;
    case 472u: goto L_0881E008;
    case 473u: goto L_0881E01C;
    case 474u: goto L_0881E028;
    case 475u: goto L_0881E030;
    case 476u: goto L_0881E034;
    case 477u: goto L_0881E048;
    case 478u: goto L_0881E050;
    case 479u: goto L_0881E064;
    case 480u: goto L_0881E070;
    case 481u: goto L_0881E07C;
    case 482u: goto L_0881E098;
    case 483u: goto L_0881E09C;
    case 484u: goto L_0881E0DC;
    case 485u: goto L_0881E0E0;
    case 486u: goto L_0881E0E8;
    case 487u: goto L_0881E0F8;
    case 488u: goto L_0881E0FC;
    case 489u: goto L_0881E104;
    case 490u: goto L_0881E108;
    case 491u: goto L_0881E130;
    case 492u: goto L_0881E134;
    case 493u: goto L_0881E13C;
    case 494u: goto L_0881E14C;
    case 495u: goto L_0881E150;
    case 496u: goto L_0881E16C;
    case 497u: goto L_0881E174;
    case 498u: goto L_0881E178;
    case 499u: goto L_0881E184;
    case 500u: goto L_0881E198;
    case 501u: goto L_0881E19C;
    case 502u: goto L_0881E1D8;
    case 503u: goto L_0881E1DC;
    case 504u: goto L_0881E1E4;
    case 505u: goto L_0881E1F4;
    case 506u: goto L_0881E1F8;
    case 507u: goto L_0881E200;
    case 508u: goto L_0881E204;
    case 509u: goto L_0881E22C;
    case 510u: goto L_0881E230;
    case 511u: goto L_0881E238;
    case 512u: goto L_0881E248;
    case 513u: goto L_0881E254;
    case 514u: goto L_0881E25C;
    case 515u: goto L_0881E260;
    case 516u: goto L_0881E26C;
    case 517u: goto L_0881E278;
    case 518u: goto L_0881E27C;
    case 519u: goto L_0881E288;
    case 520u: goto L_0881E294;
    case 521u: goto L_0881E2A0;
    case 522u: goto L_0881E2AC;
    case 523u: goto L_0881E2B8;
    case 524u: goto L_0881E2C0;
    case 525u: goto L_0881E2C8;
    case 526u: goto L_0881E2D4;
    case 527u: goto L_0881E2E0;
    case 528u: goto L_0881E304;
    case 529u: goto L_0881E310;
    case 530u: goto L_0881E318;
    case 531u: goto L_0881E328;
    case 532u: goto L_0881E32C;
    case 533u: goto L_0881E338;
    case 534u: goto L_0881E340;
    case 535u: goto L_0881E368;
    case 536u: goto L_0881E378;
    case 537u: goto L_0881E380;
    case 538u: goto L_0881E384;
    case 539u: goto L_0881E3AC;
    case 540u: goto L_0881E3B0;
    case 541u: goto L_0881E3B8;
    case 542u: goto L_0881E3C8;
    case 543u: goto L_0881E3D8;
    case 544u: goto L_0881E3E0;
    case 545u: goto L_0881E3E4;
    case 546u: goto L_0881E40C;
    case 547u: goto L_0881E410;
    case 548u: goto L_0881E418;
    case 549u: goto L_0881E428;
    case 550u: goto L_0881E438;
    case 551u: goto L_0881E440;
    case 552u: goto L_0881E45C;
    case 553u: goto L_0881E46C;
    case 554u: goto L_0881E47C;
    case 555u: goto L_0881E48C;
    case 556u: goto L_0881E494;
    case 557u: goto L_0881E4BC;
    case 558u: goto L_0881E4C8;
    case 559u: goto L_0881E4D4;
    case 560u: goto L_0881E4DC;
    case 561u: goto L_0881E4F8;
    case 562u: goto L_0881E504;
    case 563u: goto L_0881E514;
    case 564u: goto L_0881E51C;
    case 565u: goto L_0881E544;
    case 566u: goto L_0881E560;
    case 567u: goto L_0881E56C;
    case 568u: goto L_0881E570;
    case 569u: goto L_0881E59C;
    case 570u: goto L_0881E5A0;
    case 571u: goto L_0881E5A8;
    case 572u: goto L_0881E5B8;
    case 573u: goto L_0881E5C8;
    case 574u: goto L_0881E5D0;
    case 575u: goto L_0881E5D4;
    case 576u: goto L_0881E5FC;
    case 577u: goto L_0881E600;
    case 578u: goto L_0881E608;
    case 579u: goto L_0881E618;
    case 580u: goto L_0881E628;
    case 581u: goto L_0881E634;
    case 582u: goto L_0881E648;
    case 583u: goto L_0881E654;
    case 584u: goto L_0881E65C;
    case 585u: goto L_0881E660;
    case 586u: goto L_0881E674;
    case 587u: goto L_0881E67C;
    case 588u: goto L_0881E690;
    case 589u: goto L_0881E69C;
    case 590u: goto L_0881E6B0;
    case 591u: goto L_0881E6BC;
    case 592u: goto L_0881E6C0;
    case 593u: goto L_0881E6D8;
    case 594u: goto L_0881E6EC;
    case 595u: goto L_0881E6F0;
    case 596u: goto L_0881E72C;
    case 597u: goto L_0881E730;
    case 598u: goto L_0881E738;
    case 599u: goto L_0881E748;
    case 600u: goto L_0881E754;
    case 601u: goto L_0881E758;
    case 602u: goto L_0881E780;
    case 603u: goto L_0881E784;
    case 604u: goto L_0881E78C;
    case 605u: goto L_0881E79C;
    case 606u: goto L_0881E7A4;
    case 607u: goto L_0881E7C0;
    case 608u: goto L_0881E7C4;
    case 609u: goto L_0881E804;
    case 610u: goto L_0881E808;
    case 611u: goto L_0881E810;
    case 612u: goto L_0881E820;
    case 613u: goto L_0881E824;
    case 614u: goto L_0881E82C;
    case 615u: goto L_0881E830;
    case 616u: goto L_0881E858;
    case 617u: goto L_0881E85C;
    case 618u: goto L_0881E864;
    case 619u: goto L_0881E874;
    case 620u: goto L_0881E878;
    case 621u: goto L_0881E894;
    case 622u: goto L_0881E89C;
    case 623u: goto L_0881E8A0;
    case 624u: goto L_0881E8D8;
    case 625u: goto L_0881E8E0;
    case 626u: goto L_0881E8F8;
    case 627u: goto L_0881E904;
    case 628u: goto L_0881E910;
    case 629u: goto L_0881E91C;
    case 630u: goto L_0881E928;
    case 631u: goto L_0881E938;
    case 632u: goto L_0881E944;
    case 633u: goto L_0881E95C;
    case 634u: goto L_0881E968;
    case 635u: goto L_0881E970;
    case 636u: goto L_0881E978;
    case 637u: goto L_0881E988;
    case 638u: goto L_0881E994;
    case 639u: goto L_0881E9A0;
    case 640u: goto L_0881E9A4;
    case 641u: goto L_0881E9AC;
    case 642u: goto L_0881E9B4;
    case 643u: goto L_0881E9C8;
    case 644u: goto L_0881E9CC;
    case 645u: goto L_0881E9E0;
    case 646u: goto L_0881EA08;
    case 647u: goto L_0881EA1C;
    case 648u: goto L_0881EA3C;
    case 649u: goto L_0881EA48;
    case 650u: goto L_0881EA50;
    case 651u: goto L_0881EA5C;
    case 652u: goto L_0881EA70;
    case 653u: goto L_0881EA8C;
    case 654u: goto L_0881EA94;
    case 655u: goto L_0881EAA8;
    case 656u: goto L_0881EAB8;
    case 657u: goto L_0881EAC4;
    case 658u: goto L_0881EACC;
    case 659u: goto L_0881EAE8;
    case 660u: goto L_0881EAF0;
    case 661u: goto L_0881EB14;
    case 662u: goto L_0881EB1C;
    case 663u: goto L_0881EB2C;
    case 664u: goto L_0881EB30;
    case 665u: goto L_0881EB38;
    case 666u: goto L_0881EB44;
    case 667u: goto L_0881EB64;
    case 668u: goto L_0881EB6C;
    case 669u: goto L_0881EB74;
    case 670u: goto L_0881EB80;
    case 671u: goto L_0881EB8C;
    case 672u: goto L_0881EB98;
    case 673u: goto L_0881EBA4;
    case 674u: goto L_0881EBC4;
    case 675u: goto L_0881EBD0;
    case 676u: goto L_0881EBE8;
    case 677u: goto L_0881EC0C;
    case 678u: goto L_0881EC18;
    case 679u: goto L_0881EC40;
    case 680u: goto L_0881EC4C;
    case 681u: goto L_0881EC54;
    case 682u: goto L_0881EC5C;
    case 683u: goto L_0881EC6C;
    case 684u: goto L_0881EC78;
    case 685u: goto L_0881EC88;
    case 686u: goto L_0881EC8C;
    case 687u: goto L_0881ECA0;
    case 688u: goto L_0881ECB0;
    case 689u: goto L_0881ECD0;
    case 690u: goto L_0881ED10;
    case 691u: goto L_0881ED14;
    case 692u: goto L_0881ED40;
    case 693u: goto L_0881ED84;
    case 694u: goto L_0881EDA0;
    case 695u: goto L_0881EE00;
    case 696u: goto L_0881EE10;
    case 697u: goto L_0881EE1C;
    case 698u: goto L_0881EE30;
    case 699u: goto L_0881EE78;
    case 700u: goto L_0881EE80;
    case 701u: goto L_0881EE94;
    case 702u: goto L_0881EE9C;
    case 703u: goto L_0881EECC;
    case 704u: goto L_0881EED8;
    case 705u: goto L_0881EEE0;
    case 706u: goto L_0881EEF4;
    case 707u: goto L_0881EEFC;
    case 708u: goto L_0881EF20;
    case 709u: goto L_0881EF2C;
    case 710u: goto L_0881EF5C;
    case 711u: goto L_0881EF64;
    case 712u: goto L_0881EF88;
    case 713u: goto L_0881EF8C;
    case 714u: goto L_0881EF98;
    case 715u: goto L_0881EFA4;
    case 716u: goto L_0881EFD4;
    case 717u: goto L_0881EFDC;
    case 718u: goto L_0881EFE8;
    case 719u: goto L_0881EFF4;
    case 720u: goto L_0881F008;
    case 721u: goto L_0881F018;
    case 722u: goto L_0881F028;
    case 723u: goto L_0881F040;
    case 724u: goto L_0881F050;
    case 725u: goto L_0881F05C;
    case 726u: goto L_0881F064;
    case 727u: goto L_0881F070;
    case 728u: goto L_0881F078;
    case 729u: goto L_0881F0A4;
    case 730u: goto L_0881F0B0;
    case 731u: goto L_0881F0B8;
    case 732u: goto L_0881F0BC;
    case 733u: goto L_0881F0C8;
    case 734u: goto L_0881F0D0;
    case 735u: goto L_0881F0E8;
    case 736u: goto L_0881F0F0;
    case 737u: goto L_0881F100;
    case 738u: goto L_0881F12C;
    case 739u: goto L_0881F134;
    case 740u: goto L_0881F138;
    case 741u: goto L_0881F13C;
    case 742u: goto L_0881F140;
    case 743u: goto L_0881F184;
    case 744u: goto L_0881F18C;
    case 745u: goto L_0881F194;
    case 746u: goto L_0881F198;
    case 747u: goto L_0881F1B0;
    case 748u: goto L_0881F1E4;
    case 749u: goto L_0881F1EC;
    case 750u: goto L_0881F1F4;
    case 751u: goto L_0881F1FC;
    case 752u: goto L_0881F20C;
    case 753u: goto L_0881F21C;
    case 754u: goto L_0881F228;
    case 755u: goto L_0881F250;
    case 756u: goto L_0881F254;
    case 757u: goto L_0881F260;
    case 758u: goto L_0881F268;
    case 759u: goto L_0881F290;
    case 760u: goto L_0881F298;
    case 761u: goto L_0881F2A0;
    case 762u: goto L_0881F2E8;
    case 763u: goto L_0881F300;
    case 764u: goto L_0881F328;
    case 765u: goto L_0881F334;
    case 766u: goto L_0881F33C;
    case 767u: goto L_0881F344;
    case 768u: goto L_0881F368;
    case 769u: goto L_0881F39C;
    case 770u: goto L_0881F3A8;
    case 771u: goto L_0881F3C4;
    case 772u: goto L_0881F3CC;
    case 773u: goto L_0881F3E0;
    case 774u: goto L_0881F414;
    case 775u: goto L_0881F420;
    case 776u: goto L_0881F430;
    case 777u: goto L_0881F438;
    case 778u: goto L_0881F44C;
    case 779u: goto L_0881F480;
    case 780u: goto L_0881F48C;
    case 781u: goto L_0881F49C;
    case 782u: goto L_0881F4A8;
    case 783u: goto L_0881F4B0;
    case 784u: goto L_0881F4B8;
    case 785u: goto L_0881F4C0;
    case 786u: goto L_0881F4C8;
    case 787u: goto L_0881F52C;
    case 788u: goto L_0881F534;
    case 789u: goto L_0881F538;
    case 790u: goto L_0881F53C;
    case 791u: goto L_0881F560;
    case 792u: goto L_0881F568;
    case 793u: goto L_0881F56C;
    case 794u: goto L_0881F5CC;
    case 795u: goto L_0881F5D8;
    case 796u: goto L_0881F600;
    case 797u: goto L_0881F614;
    case 798u: goto L_0881F61C;
    case 799u: goto L_0881F620;
    case 800u: goto L_0881F634;
    case 801u: goto L_0881F63C;
    case 802u: goto L_0881F670;
    case 803u: goto L_0881F680;
    case 804u: goto L_0881F688;
    case 805u: goto L_0881F694;
    case 806u: goto L_0881F698;
    case 807u: goto L_0881F6A8;
    case 808u: goto L_0881F6B0;
    case 809u: goto L_0881F6C4;
    case 810u: goto L_0881F6CC;
    case 811u: goto L_0881F6E4;
    case 812u: goto L_0881F6EC;
    case 813u: goto L_0881F700;
    case 814u: goto L_0881F708;
    case 815u: goto L_0881F70C;
    case 816u: goto L_0881F724;
    case 817u: goto L_0881F738;
    case 818u: goto L_0881F740;
    case 819u: goto L_0881F748;
    case 820u: goto L_0881F760;
    case 821u: goto L_0881F768;
    case 822u: goto L_0881F774;
    case 823u: goto L_0881F77C;
    case 824u: goto L_0881F790;
    case 825u: goto L_0881F79C;
    case 826u: goto L_0881F7CC;
    case 827u: goto L_0881F7D8;
    case 828u: goto L_0881F80C;
    case 829u: goto L_0881F818;
    case 830u: goto L_0881F828;
    case 831u: goto L_0881F838;
    case 832u: goto L_0881F850;
    case 833u: goto L_0881F85C;
    case 834u: goto L_0881F864;
    case 835u: goto L_0881F86C;
    case 836u: goto L_0881F890;
    case 837u: goto L_0881F898;
    case 838u: goto L_0881F89C;
    case 839u: goto L_0881F8AC;
    case 840u: goto L_0881F8B8;
    case 841u: goto L_0881F8D8;
    case 842u: goto L_0881F8DC;
    case 843u: goto L_0881F8E8;
    case 844u: goto L_0881F8EC;
    case 845u: goto L_0881F918;
    case 846u: goto L_0881F920;
    case 847u: goto L_0881F930;
    case 848u: goto L_0881F938;
    case 849u: goto L_0881F94C;
    case 850u: goto L_0881F958;
    case 851u: goto L_0881F970;
    case 852u: goto L_0881F974;
    case 853u: goto L_0881F97C;
    case 854u: goto L_0881F984;
    case 855u: goto L_0881F998;
    case 856u: goto L_0881F9A0;
    case 857u: goto L_0881F9AC;
    case 858u: goto L_0881F9C0;
    case 859u: goto L_0881F9CC;
    case 860u: goto L_0881F9D4;
    case 861u: goto L_0881F9DC;
    case 862u: goto L_0881F9F4;
    case 863u: goto L_0881FA08;
    case 864u: goto L_0881FA10;
    case 865u: goto L_0881FA38;
    case 866u: goto L_0881FA48;
    case 867u: goto L_0881FA58;
    case 868u: goto L_0881FA64;
    case 869u: goto L_0881FA6C;
    case 870u: goto L_0881FA74;
    case 871u: goto L_0881FA7C;
    case 872u: goto L_0881FA8C;
    case 873u: goto L_0881FA94;
    case 874u: goto L_0881FA9C;
    case 875u: goto L_0881FAA4;
    case 876u: goto L_0881FAA8;
    case 877u: goto L_0881FAB0;
    case 878u: goto L_0881FAB8;
    case 879u: goto L_0881FAC0;
    case 880u: goto L_0881FACC;
    case 881u: goto L_0881FAD4;
    case 882u: goto L_0881FAE0;
    case 883u: goto L_0881FAF0;
    case 884u: goto L_0881FAF8;
    case 885u: goto L_0881FB10;
    case 886u: goto L_0881FB18;
    case 887u: goto L_0881FB1C;
    case 888u: goto L_0881FB24;
    case 889u: goto L_0881FB2C;
    case 890u: goto L_0881FB34;
    case 891u: goto L_0881FB3C;
    case 892u: goto L_0881FB44;
    case 893u: goto L_0881FB4C;
    case 894u: goto L_0881FB54;
    case 895u: goto L_0881FB5C;
    case 896u: goto L_0881FB90;
    case 897u: goto L_0881FB9C;
    case 898u: goto L_0881FBA8;
    case 899u: goto L_0881FBBC;
    case 900u: goto L_0881FBF0;
    case 901u: goto L_0881FBFC;
    case 902u: goto L_0881FC0C;
    case 903u: goto L_0881FC20;
    case 904u: goto L_0881FC28;
    case 905u: goto L_0881FC2C;
    case 906u: goto L_0881FC44;
    case 907u: goto L_0881FC78;
    case 908u: goto L_0881FC84;
    case 909u: goto L_0881FC94;
    case 910u: goto L_0881FCA8;
    case 911u: goto L_0881FCB0;
    case 912u: goto L_0881FCB4;
    case 913u: goto L_0881FCCC;
    case 914u: goto L_0881FD00;
    case 915u: goto L_0881FD0C;
    case 916u: goto L_0881FD1C;
    case 917u: goto L_0881FD34;
    case 918u: goto L_0881FD48;
    case 919u: goto L_0881FD50;
    case 920u: goto L_0881FD6C;
    case 921u: goto L_0881FDA0;
    case 922u: goto L_0881FDAC;
    case 923u: goto L_0881FDBC;
    case 924u: goto L_0881FDD4;
    case 925u: goto L_0881FDE8;
    case 926u: goto L_0881FDF0;
    case 927u: goto L_0881FE0C;
    case 928u: goto L_0881FE40;
    case 929u: goto L_0881FE4C;
    case 930u: goto L_0881FE5C;
    case 931u: goto L_0881FE70;
    case 932u: goto L_0881FE78;
    case 933u: goto L_0881FE7C;
    case 934u: goto L_0881FE94;
    case 935u: goto L_0881FEC8;
    case 936u: goto L_0881FED4;
    case 937u: goto L_0881FEE4;
    case 938u: goto L_0881FEF8;
    case 939u: goto L_0881FF00;
    case 940u: goto L_0881FF04;
    case 941u: goto L_0881FF1C;
    case 942u: goto L_0881FF38;
    case 943u: goto L_0881FF40;
    case 944u: goto L_0881FF48;
    case 945u: goto L_0881FF4C;
    case 946u: goto L_0881FF54;
    case 947u: goto L_0881FF60;
    case 948u: goto L_0881FF6C;
    case 949u: goto L_0881FF78;
    case 950u: goto L_0881FF90;
    case 951u: goto L_0881FF94;
    case 952u: goto L_0881FFCC;
    case 953u: goto L_0881FFD4;
    case 954u: goto L_0881FFDC;
    case 955u: goto L_0881FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0881C004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(520));
    ctx.set_gpr(3, 32767u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(31, 0x0881C048u);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0881C048u) goto L_0881C048;
    return;
L_0881C048:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0881C05Cu);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 248u, 0x08818E54u>(ctx, &aot_mem) && ctx.pc == 0x0881C05Cu) goto L_0881C05C;
    return;
L_0881C05C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C0C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[6] & 65535u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0881C12C;
      }
      goto L_0881C0EC;
    }
L_0881C0EC:
    ctx.set_gpr(31, 0x0881C0F4u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_0881C36C;
L_0881C0F4:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0881C0F8;
L_0881C0F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0881C114;
      }
      goto L_0881C104;
    }
L_0881C104:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(138));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0881C114;
L_0881C114:
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
L_0881C12C:
    ctx.set_gpr(31, 0x0881C134u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    goto L_0881C36C;
L_0881C134:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0881C0F8;
L_0881C188:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] != 0u) ctx.set_gpr(19, ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.set_gpr(21, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881C20C;
      }
      goto L_0881C1D8;
    }
L_0881C1D8:
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
    goto L_0881C1DC;
L_0881C1DC:
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
L_0881C20C:
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_0881C218;
L_0881C218:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0881C230u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0881C0C8;
L_0881C230:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881C2E4;
      }
      goto L_0881C240;
    }
L_0881C240:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[21] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
        goto L_0881C2AC;
    }
    goto L_0881C24C;
L_0881C24C:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
        goto L_0881C2AC;
    }
    goto L_0881C258;
L_0881C258:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881C28C;
      }
      goto L_0881C260;
    }
L_0881C260:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_0881C280;
      }
      goto L_0881C268;
    }
L_0881C268:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881C268;
      }
      goto L_0881C280;
    }
L_0881C280:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0881C28C;
L_0881C28C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881C2FC;
      }
      goto L_0881C298;
    }
L_0881C298:
    ctx.set_gpr(2, ctx.gpr[21] < ctx.gpr[19] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_0881C218;
    }
    goto L_0881C2A4;
L_0881C2A4:
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
    goto L_0881C1DC;
L_0881C2AC:
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
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
L_0881C2E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(138));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0881C1D8;
L_0881C2FC:
    if (ctx.gpr[17] != 0u) {
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
        goto L_0881C304;
    }
    goto L_0881C304;
L_0881C304:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0881C1D8;
L_0881C36C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(2832));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0881C39Cu);
    ctx.set_gpr(16, ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0881C39Cu) goto L_0881C39C;
    return;
L_0881C39C:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, 2225u << 16u);
      if (branch_taken) {
          goto L_0881C46C;
      }
      goto L_0881C3A8;
    }
L_0881C3A8:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3092));
    ctx.set_gpr(31, 0x0881C3B4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(2832));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0881C3B4u) goto L_0881C3B4;
    return;
L_0881C3B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, 2225u << 16u);
      if (branch_taken) {
          goto L_0881C420;
      }
      goto L_0881C3BC;
    }
L_0881C3BC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] < static_cast<std::uint32_t>(128) ? 1u : 0u);
      if (branch_taken) {
          goto L_0881C474;
      }
      goto L_0881C3C4;
    }
L_0881C3C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881C448;
      }
      goto L_0881C3CC;
    }
L_0881C3CC:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1920) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] & 63u);
      if (branch_taken) {
          goto L_0881C61C;
      }
      goto L_0881C3E0;
    }
L_0881C3E0:
    ctx.set_gpr(5, (ctx.gpr[16] >> 6u) & 0x0000001Fu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
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
L_0881C420:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3100));
    ctx.set_gpr(31, 0x0881C42Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(2832));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0881C42Cu) goto L_0881C42C;
    return;
L_0881C42C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0881C498;
      }
      goto L_0881C434;
    }
L_0881C434:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(3, ctx.gpr[16] >> 8u);
      if (branch_taken) {
          goto L_0881C474;
      }
      goto L_0881C43C;
    }
L_0881C43C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_0881C540;
      }
      goto L_0881C444;
    }
L_0881C444:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_0881C448;
L_0881C448:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_0881C44C;
L_0881C44C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0881C450;
L_0881C450:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C46C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881C448;
      }
      goto L_0881C474;
    }
L_0881C474:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C498:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3108));
    ctx.set_gpr(31, 0x0881C4A8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(2832));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0881C4A8u) goto L_0881C4A8;
    return;
L_0881C4A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0881C4DC;
      }
      goto L_0881C4B0;
    }
L_0881C4B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(3, ctx.gpr[16] >> 8u);
      if (branch_taken) {
          goto L_0881C474;
      }
      goto L_0881C4B8;
    }
L_0881C4B8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881C448;
      }
      goto L_0881C4C0;
    }
L_0881C4C0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(95));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(94) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(95));
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C4D4;
    }
L_0881C4D4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    goto L_0881C44C;
L_0881C4DC:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(2832));
    ctx.set_gpr(31, 0x0881C4ECu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3116));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0881C4ECu) goto L_0881C4EC;
    return;
L_0881C4EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, ctx.gpr[16] >> 8u);
      if (branch_taken) {
          goto L_0881C46C;
      }
      goto L_0881C4F4;
    }
L_0881C4F4:
    ctx.set_gpr(4, ctx.gpr[16] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881C44C;
      }
      goto L_0881C500;
    }
L_0881C500:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(-33));
      if (branch_taken) {
          goto L_0881C5B8;
      }
      goto L_0881C508;
    }
L_0881C508:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_0881C44C;
    }
    goto L_0881C514;
L_0881C514:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(66));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0881C44C;
L_0881C540:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-64));
      if (branch_taken) {
          goto L_0881C568;
      }
      goto L_0881C550;
    }
L_0881C550:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881C44C;
      }
      goto L_0881C564;
    }
L_0881C564:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    goto L_0881C568;
L_0881C568:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(63) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881C58C;
      }
      goto L_0881C578;
    }
L_0881C578:
    ctx.set_gpr(2, ctx.gpr[4] ^ 128u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(125) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
        goto L_0881C44C;
    }
    goto L_0881C588;
L_0881C588:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    goto L_0881C58C;
L_0881C58C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0881C44C;
L_0881C598:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(94) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
        goto L_0881C44C;
    }
    goto L_0881C5A8;
L_0881C5A8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0881C44C;
L_0881C5B8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(94) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881C44C;
      }
      goto L_0881C5C8;
    }
L_0881C5C8:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(94) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0881C450;
      }
      goto L_0881C5DC;
    }
L_0881C5DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881C610;
      }
      goto L_0881C5E8;
    }
L_0881C5E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(36));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(66));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    goto L_0881C610;
L_0881C610:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_0881C44C;
L_0881C61C:
    ctx.set_gpr(2, ctx.gpr[16] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881C44C;
      }
      goto L_0881C628;
    }
L_0881C628:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(10240));
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_0881C44C;
      }
      goto L_0881C63C;
    }
L_0881C63C:
    ctx.set_gpr(5, ctx.gpr[16] & 63u);
    ctx.set_gpr(3, ctx.gpr[16] >> 12u);
    ctx.set_gpr(4, (ctx.gpr[16] >> 6u) & 0x0000003Fu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[6]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0881C44C;
L_0881C66C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 2247u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0881C698u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 123u, 0x088047F8u>(ctx, &aot_mem) && ctx.pc == 0x0881C698u) goto L_0881C698;
    return;
L_0881C698:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23024)));
      if (branch_taken) {
          goto L_0881C6C0;
      }
      goto L_0881C6A8;
    }
L_0881C6A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0881C6AC;
L_0881C6AC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C6C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0881C6AC;
      }
      goto L_0881C6C8;
    }
L_0881C6C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C6E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0881C6F8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0881C6F8u) goto L_0881C6F8;
    return;
L_0881C6F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C784;
      }
      goto L_0881C704;
    }
L_0881C704:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0881C708;
L_0881C708:
    ctx.set_gpr(3, ctx.gpr[4] & 65535u);
    ctx.set_gpr(2, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] & 16u);
      if (branch_taken) {
          goto L_0881C7AC;
      }
      goto L_0881C718;
    }
L_0881C718:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0881C71C;
L_0881C71C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C79C;
      }
      goto L_0881C724;
    }
L_0881C724:
    ctx.set_gpr(3, ctx.gpr[4] & 65535u);
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0881C760;
    }
    goto L_0881C734;
L_0881C734:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881C744;
      }
      goto L_0881C740;
    }
L_0881C740:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0881C744;
L_0881C744:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C760:
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_0881C770;
L_0881C770:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C784:
    ctx.set_gpr(31, 0x0881C78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0881C78Cu) goto L_0881C78C;
    return;
L_0881C78C:
    ctx.set_gpr(31, 0x0881C794u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 251u, 0x08810E78u>(ctx, &aot_mem) && ctx.pc == 0x0881C794u) goto L_0881C794;
    return;
L_0881C794:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0881C708;
L_0881C79C:
    ctx.set_gpr(31, 0x0881C7A4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 461u, 0x08811E74u>(ctx, &aot_mem) && ctx.pc == 0x0881C7A4u) goto L_0881C7A4;
    return;
L_0881C7A4:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0881C724;
L_0881C7AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881C770;
      }
      goto L_0881C7B4;
    }
L_0881C7B4:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_0881C81C;
    }
    goto L_0881C7C0;
L_0881C7C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0881C7F0;
      }
      goto L_0881C7CC;
    }
L_0881C7CC:
    if (ctx.gpr[3] == ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
        goto L_0881C7F0;
    }
    goto L_0881C7D4;
L_0881C7D4:
    ctx.set_gpr(31, 0x0881C7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0881C7DCu) goto L_0881C7DC;
    return;
L_0881C7DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0881C7E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 285u, 0x088112B8u>(ctx, &aot_mem) && ctx.pc == 0x0881C7E8u) goto L_0881C7E8;
    return;
L_0881C7E8:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    goto L_0881C7F0;
L_0881C7F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-37));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[4] | 8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0881C71C;
L_0881C81C:
    ctx.set_gpr(2, ctx.gpr[4] | 8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0881C71C;
L_0881C82C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, ctx.lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[4]) * static_cast<std::uint64_t>(ctx.gpr[6]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(8, ctx.lo);
    ctx.lo = ctx.gpr[10];
    ctx.execute_madd(4u, 7u);
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    ctx.set_gpr(4, ctx.lo);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C858:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0881C894;
      }
      goto L_0881C86C;
    }
L_0881C86C:
    ctx.set_gpr(11, 0u - ctx.gpr[7]);
    ctx.set_gpr(10, ctx.gpr[5] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(9, ctx.gpr[4] >> (ctx.gpr[7] & 31u));
    ctx.set_gpr(5, ctx.gpr[2] << (ctx.gpr[11] & 31u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_0881C88C;
      }
      goto L_0881C884;
    }
L_0881C884:
    ctx.set_gpr(4, ctx.gpr[2] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(5, ctx.gpr[9] | ctx.gpr[10]);
    goto L_0881C88C;
L_0881C88C:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    goto L_0881C894;
L_0881C894:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C89C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(31, 0x0881C8C8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_0881FF1C;
L_0881C8C8:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3128)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3132)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0881C8E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0881F44C;
L_0881C8E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0881C8F8u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    goto L_0881FF1C;
L_0881C8F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_0881C944;
      }
      goto L_0881C90C;
    }
L_0881C90C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0881C920u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881F3E0;
L_0881C920:
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
L_0881C944:
    ctx.set_gpr(31, 0x0881C94Cu);
    // nop
    goto L_0881F3E0;
L_0881C94C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0881C960u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881F3E0;
L_0881C960:
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
L_0881C984:
    ctx.set_gpr(3, 31u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(2, 63u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[7] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0881CA74;
      }
      goto L_0881C9D4;
    }
L_0881C9D4:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0881CA6C;
      }
      goto L_0881C9DC;
    }
L_0881C9DC:
    ctx.set_gpr(31, 0x0881C9E4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0881FF1C;
L_0881C9E4:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3140)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0881CA04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0881F44C;
L_0881CA04:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0881CA14u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    goto L_0881FF1C;
L_0881CA14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0881CAE0;
      }
      goto L_0881CA28;
    }
L_0881CA28:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0881CA3Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881F3E0;
L_0881CA3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0881CA48u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0881CA48u) goto L_0881CA48;
    return;
L_0881CA48:
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
L_0881CA6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881C9DC;
      }
      goto L_0881CA74;
    }
L_0881CA74:
    ctx.set_gpr(4, ctx.gpr[18] & 2047u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C9DC;
      }
      goto L_0881CA88;
    }
L_0881CA88:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    ctx.set_gpr(18, ctx.gpr[4] | 2048u);
    ctx.set_gpr(31, 0x0881CA9Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0881FF1C;
L_0881CA9C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3140)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0881CABCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0881F44C;
L_0881CABC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0881CACCu);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    goto L_0881FF1C;
L_0881CACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0881CA28;
      }
      goto L_0881CAE0;
    }
L_0881CAE0:
    ctx.set_gpr(31, 0x0881CAE8u);
    // nop
    goto L_0881F3E0;
L_0881CAE8:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0881CAFCu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881F3E0;
L_0881CAFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0881CB08u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0881CB08u) goto L_0881CB08;
    return;
L_0881CB08:
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
L_0881CB2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3148)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0881CB64u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    goto L_0881FD6C;
L_0881CB64:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_0881CBB0;
      }
      goto L_0881CB78;
    }
L_0881CB78:
    ctx.set_gpr(31, 0x0881CB80u);
    // nop
    goto L_0881F368;
L_0881CB80:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0881CB8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0881CB8Cu) goto L_0881CB8C;
    return;
L_0881CB8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CBB0:
    ctx.set_gpr(31, 0x0881CBB8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0881CBB8u) goto L_0881CBB8;
    return;
L_0881CBB8:
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
L_0881CBD4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3152)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3156)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(31, 0x0881CC0Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0881F44C;
L_0881CC0C:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0881CC18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0881CB2C;
L_0881CC18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0881CC28u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_0881FF1C;
L_0881CC28:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0881CCA0;
      }
      goto L_0881CC3C;
    }
L_0881CC3C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3168)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3172)));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x0881CC54u);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    goto L_0881F44C;
L_0881CC54:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0881CC68u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881F3E0;
L_0881CC68:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0881CC74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0881CB2C;
L_0881CC74:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[18] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[19] | ctx.gpr[5]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CCA0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3160)));
    ctx.set_gpr(31, 0x0881CCB0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3164)));
    goto L_0881F3E0;
L_0881CCB0:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3168)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3172)));
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x0881CCD0u);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    goto L_0881F44C;
L_0881CCD0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0881CCE4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881F3E0;
L_0881CCE4:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0881CCF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0881CB2C;
L_0881CCF0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[18] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[19] | ctx.gpr[5]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CD1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0881CD40u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0881FE0C;
L_0881CD40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0881CD60;
      }
      goto L_0881CD4C;
    }
L_0881CD4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0881CBD4;
L_0881CD60:
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(7, ctx.gpr[17] ^ ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0881CD74u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    goto L_0881CBD4;
L_0881CD74:
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, 0u - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CD98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(31, 0x0881CDBCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0881EBD0;
L_0881CDBC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3176)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3180)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0881CDDCu);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    goto L_0881F44C;
L_0881CDDC:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0881CDE8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0881CB2C;
L_0881CDE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0881CDF8u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_0881FF1C;
L_0881CDF8:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0881CE70;
      }
      goto L_0881CE0C;
    }
L_0881CE0C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3192)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3196)));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x0881CE24u);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    goto L_0881F44C;
L_0881CE24:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0881CE38u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881F3E0;
L_0881CE38:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0881CE44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0881CB2C;
L_0881CE44:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[18] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[19] | ctx.gpr[5]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CE70:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3184)));
    ctx.set_gpr(31, 0x0881CE80u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3188)));
    goto L_0881F3E0;
L_0881CE80:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3192)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3196)));
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x0881CEA0u);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    goto L_0881F44C;
L_0881CEA0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0881CEB4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881F3E0;
L_0881CEB4:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0881CEC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0881CB2C;
L_0881CEC0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[18] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[19] | ctx.gpr[5]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CEEC:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0881CF10;
      }
      goto L_0881CF04;
    }
L_0881CF04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0881CD98;
L_0881CF10:
    ctx.set_gpr(31, 0x0881CF18u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(12) ^ 0x80000000u);
    goto L_0881CD98;
L_0881CF18:
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, 0u - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CF34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    ctx.set_gpr(11, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(25, 0u + 0u);
      if (branch_taken) {
          goto L_0881D2BC;
      }
      goto L_0881CF54;
    }
L_0881CF54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.set_gpr(2, 0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0881D2A0;
      }
      goto L_0881CF5C;
    }
L_0881CF5C:
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    ctx.set_gpr(12, ctx.gpr[11] + 0u);
    ctx.set_gpr(9, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(11, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_0881D0B0;
      }
      goto L_0881CF70;
    }
L_0881CF70:
    ctx.set_gpr(2, ctx.gpr[12] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u | 65535u);
      if (branch_taken) {
          goto L_0881D0FC;
      }
      goto L_0881CF7C;
    }
L_0881CF7C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881D31C;
      }
      goto L_0881CF84;
    }
L_0881CF84:
    ctx.set_gpr(2, 0u | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881D2DC;
      }
      goto L_0881CF94;
    }
L_0881CF94:
    ctx.set_gpr(2, ctx.gpr[9] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    goto L_0881CF98;
L_0881CF98:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881CFAC;
      }
      goto L_0881CFA4;
    }
L_0881CFA4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881CFAC;
L_0881CFAC:
    ctx.set_gpr(2, ctx.gpr[9] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[3] - ctx.gpr[4]);
    if (ctx.gpr[8] != 0u) {
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[8] & 31u));
        goto L_0881D364;
    }
    goto L_0881CFD4;
L_0881CFD4:
    ctx.set_gpr(4, ctx.gpr[12] - ctx.gpr[9]);
    ctx.set_gpr(7, ctx.gpr[9] >> 16u);
    ctx.set_gpr(13, ctx.gpr[9] & 65535u);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    goto L_0881CFE4;
L_0881CFE4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881CFF0;
      }
      goto L_0881CFEC;
    }
L_0881CFEC:
    ctx.pc = 0x0881CFECu; rt.stop("Allegrex BREAK code 7 at 0x0881CFEC"); return;
    goto L_0881CFF0;
L_0881CFF0:
    ctx.set_gpr(3, ctx.gpr[11] >> 16u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D01C;
      }
      goto L_0881D018;
    }
L_0881D018:
    ctx.pc = 0x0881D018u; rt.stop("Allegrex BREAK code 7 at 0x0881D018"); return;
    goto L_0881D01C;
L_0881D01C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0881D040;
      }
      goto L_0881D024;
    }
L_0881D024:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881D040;
      }
      goto L_0881D034;
    }
L_0881D034:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
        goto L_0881D5B8;
    }
    goto L_0881D040;
L_0881D040:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D050;
      }
      goto L_0881D04C;
    }
L_0881D04C:
    ctx.pc = 0x0881D04Cu; rt.stop("Allegrex BREAK code 7 at 0x0881D04C"); return;
    goto L_0881D050;
L_0881D050:
    ctx.set_gpr(4, ctx.gpr[11] & 65535u);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D07C;
      }
      goto L_0881D078;
    }
L_0881D078:
    ctx.pc = 0x0881D078u; rt.stop("Allegrex BREAK code 7 at 0x0881D078"); return;
    goto L_0881D07C;
L_0881D07C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_0881D0A0;
      }
      goto L_0881D084;
    }
L_0881D084:
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881D0A0;
      }
      goto L_0881D094;
    }
L_0881D094:
    ctx.set_gpr(3, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    if (ctx.gpr[3] != 0u) ctx.set_gpr(8, ctx.gpr[2]);
    goto L_0881D0A0;
L_0881D0A0:
    ctx.set_gpr(2, ctx.gpr[10] << 16u);
    ctx.set_gpr(2, ctx.gpr[8] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[12] + 0u);
    goto L_0881D0C4;
L_0881D0B0:
    ctx.set_gpr(2, ctx.gpr[12] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u | 65535u);
      if (branch_taken) {
          goto L_0881D230;
      }
      goto L_0881D0BC;
    }
L_0881D0BC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0881D0C0;
L_0881D0C0:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0881D0C4;
L_0881D0C4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0881D0E8;
      }
      goto L_0881D0D0;
    }
L_0881D0D0:
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    ctx.set_gpr(4, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, 0u - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881D0E8;
L_0881D0E8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D0FC:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881D344;
      }
      goto L_0881D108;
    }
L_0881D108:
    ctx.set_gpr(2, ctx.gpr[8] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881D11C;
      }
      goto L_0881D114;
    }
L_0881D114:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881D11C;
L_0881D11C:
    ctx.set_gpr(2, ctx.gpr[9] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, ctx.gpr[9] >> 16u);
      if (branch_taken) {
          goto L_0881D160;
      }
      goto L_0881D144;
    }
L_0881D144:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[11] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[12] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(12, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(11, ctx.gpr[11] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[9] >> 16u);
    goto L_0881D160;
L_0881D160:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D16C;
      }
      goto L_0881D168;
    }
L_0881D168:
    ctx.pc = 0x0881D168u; rt.stop("Allegrex BREAK code 7 at 0x0881D168"); return;
    goto L_0881D16C;
L_0881D16C:
    ctx.set_gpr(8, ctx.gpr[9] & 65535u);
    ctx.set_gpr(3, ctx.gpr[11] >> 16u);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D19C;
      }
      goto L_0881D198;
    }
L_0881D198:
    ctx.pc = 0x0881D198u; rt.stop("Allegrex BREAK code 7 at 0x0881D198"); return;
    goto L_0881D19C;
L_0881D19C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0881D1C0;
      }
      goto L_0881D1A4;
    }
L_0881D1A4:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(10, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881D1C0;
      }
      goto L_0881D1B4;
    }
L_0881D1B4:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(10, ctx.gpr[4] + static_cast<std::uint32_t>(-2));
        goto L_0881D5B0;
    }
    goto L_0881D1C0;
L_0881D1C0:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D1D0;
      }
      goto L_0881D1CC;
    }
L_0881D1CC:
    ctx.pc = 0x0881D1CCu; rt.stop("Allegrex BREAK code 7 at 0x0881D1CC"); return;
    goto L_0881D1D0;
L_0881D1D0:
    ctx.set_gpr(4, ctx.gpr[11] & 65535u);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D1FC;
      }
      goto L_0881D1F8;
    }
L_0881D1F8:
    ctx.pc = 0x0881D1F8u; rt.stop("Allegrex BREAK code 7 at 0x0881D1F8"); return;
    goto L_0881D1FC;
L_0881D1FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_0881D220;
      }
      goto L_0881D204;
    }
L_0881D204:
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881D220;
      }
      goto L_0881D214;
    }
L_0881D214:
    ctx.set_gpr(3, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    if (ctx.gpr[3] != 0u) ctx.set_gpr(8, ctx.gpr[2]);
    goto L_0881D220;
L_0881D220:
    ctx.set_gpr(2, ctx.gpr[10] << 16u);
    ctx.set_gpr(2, ctx.gpr[8] | ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    goto L_0881D0C4;
L_0881D230:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881D2FC;
      }
      goto L_0881D23C;
    }
L_0881D23C:
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881D254;
      }
      goto L_0881D24C;
    }
L_0881D24C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881D254;
L_0881D254:
    ctx.set_gpr(2, ctx.gpr[5] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[7]);
        goto L_0881D44C;
    }
    goto L_0881D27C;
L_0881D27C:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881D298;
      }
      goto L_0881D288;
    }
L_0881D288:
    ctx.set_gpr(2, ctx.gpr[11] < ctx.gpr[9] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0881D0C0;
    }
    goto L_0881D294;
L_0881D294:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0881D298;
L_0881D298:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0881D0C4;
L_0881D2A0:
    ctx.set_gpr(4, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, 0u - ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(25, ~(0u | ctx.gpr[25]));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    goto L_0881CF5C;
L_0881D2BC:
    ctx.set_gpr(2, 0u - ctx.gpr[4]);
    ctx.set_gpr(4, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, 0u - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(-1));
    goto L_0881CF54;
L_0881D2DC:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881CFAC;
      }
      goto L_0881D2F0;
    }
L_0881D2F0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881CFAC;
L_0881D2FC:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881D254;
      }
      goto L_0881D310;
    }
L_0881D310:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881D254;
L_0881D31C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D328;
      }
      goto L_0881D324;
    }
L_0881D324:
    ctx.pc = 0x0881D324u; rt.stop("Allegrex BREAK code 7 at 0x0881D324"); return;
    goto L_0881D328;
L_0881D328:
    ctx.set_gpr(2, 0u | 65535u);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 255u << 16u);
        goto L_0881D2DC;
    }
    goto L_0881D33C;
L_0881D33C:
    ctx.set_gpr(2, ctx.gpr[9] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    goto L_0881CF98;
L_0881D344:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881D11C;
      }
      goto L_0881D358;
    }
L_0881D358:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881D11C;
L_0881D364:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[12] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(7, ctx.gpr[9] >> 16u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D37C;
      }
      goto L_0881D378;
    }
L_0881D378:
    ctx.pc = 0x0881D378u; rt.stop("Allegrex BREAK code 7 at 0x0881D378"); return;
    goto L_0881D37C;
L_0881D37C:
    ctx.set_gpr(13, ctx.gpr[9] & 65535u);
    ctx.set_gpr(3, ctx.gpr[11] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[12] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(12, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[12] >> 16u);
    ctx.set_gpr(11, ctx.gpr[11] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(10, ctx.lo);
    ctx.set_gpr(4, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[6]);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D3BC;
      }
      goto L_0881D3B8;
    }
L_0881D3B8:
    ctx.pc = 0x0881D3B8u; rt.stop("Allegrex BREAK code 7 at 0x0881D3B8"); return;
    goto L_0881D3BC;
L_0881D3BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_0881D3D4;
      }
      goto L_0881D3C4;
    }
L_0881D3C4:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881D598;
      }
      goto L_0881D3D4;
    }
L_0881D3D4:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[8]);
    goto L_0881D3D8;
L_0881D3D8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D3E4;
      }
      goto L_0881D3E0;
    }
L_0881D3E0:
    ctx.pc = 0x0881D3E0u; rt.stop("Allegrex BREAK code 7 at 0x0881D3E0"); return;
    goto L_0881D3E4;
L_0881D3E4:
    ctx.set_gpr(4, ctx.gpr[12] & 65535u);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D410;
      }
      goto L_0881D40C;
    }
L_0881D40C:
    ctx.pc = 0x0881D40Cu; rt.stop("Allegrex BREAK code 7 at 0x0881D40C"); return;
    goto L_0881D410;
L_0881D410:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_0881D43C;
      }
      goto L_0881D418;
    }
L_0881D418:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(10, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881D43C;
      }
      goto L_0881D428;
    }
L_0881D428:
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[6] << 16u);
      if (branch_taken) {
          goto L_0881D440;
      }
      goto L_0881D434;
    }
L_0881D434:
    ctx.set_gpr(10, ctx.gpr[8] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[9]);
    goto L_0881D43C;
L_0881D43C:
    ctx.set_gpr(2, ctx.gpr[6] << 16u);
    goto L_0881D440;
L_0881D440:
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(12, ctx.gpr[10] | ctx.gpr[2]);
    goto L_0881CFE4;
L_0881D44C:
    ctx.set_gpr(4, ctx.gpr[5] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(2, ctx.gpr[9] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(10, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[12] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(8, ctx.gpr[10] >> 16u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D46C;
      }
      goto L_0881D468;
    }
L_0881D468:
    ctx.pc = 0x0881D468u; rt.stop("Allegrex BREAK code 7 at 0x0881D468"); return;
    goto L_0881D46C;
L_0881D46C:
    ctx.set_gpr(24, ctx.gpr[10] & 65535u);
    ctx.set_gpr(2, ctx.gpr[12] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(3, ctx.gpr[11] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(12, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[12] >> 16u);
    ctx.set_gpr(16, ctx.gpr[11] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(11, ctx.gpr[9] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(13, ctx.lo);
    ctx.set_gpr(4, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[6]);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D4B0;
      }
      goto L_0881D4AC;
    }
L_0881D4AC:
    ctx.pc = 0x0881D4ACu; rt.stop("Allegrex BREAK code 7 at 0x0881D4AC"); return;
    goto L_0881D4B0;
L_0881D4B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[13] + 0u);
      if (branch_taken) {
          goto L_0881D4C8;
      }
      goto L_0881D4B8;
    }
L_0881D4B8:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881D580;
      }
      goto L_0881D4C8;
    }
L_0881D4C8:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[7]);
    goto L_0881D4CC;
L_0881D4CC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D4D8;
      }
      goto L_0881D4D4;
    }
L_0881D4D4:
    ctx.pc = 0x0881D4D4u; rt.stop("Allegrex BREAK code 7 at 0x0881D4D4"); return;
    goto L_0881D4D8;
L_0881D4D8:
    ctx.set_gpr(4, ctx.gpr[12] & 65535u);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D504;
      }
      goto L_0881D500;
    }
L_0881D500:
    ctx.pc = 0x0881D500u; rt.stop("Allegrex BREAK code 7 at 0x0881D500"); return;
    goto L_0881D504;
L_0881D504:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, ctx.gpr[9] + 0u);
      if (branch_taken) {
          goto L_0881D51C;
      }
      goto L_0881D50C;
    }
L_0881D50C:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881D568;
      }
      goto L_0881D51C;
    }
L_0881D51C:
    ctx.set_gpr(2, ctx.gpr[6] << 16u);
    goto L_0881D520;
L_0881D520:
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[5]);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[7]) * static_cast<std::uint64_t>(ctx.gpr[11]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(8, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881D560;
      }
      goto L_0881D53C;
    }
L_0881D53C:
    if (ctx.gpr[3] == ctx.gpr[8]) {
    ctx.set_gpr(3, ctx.lo);
        goto L_0881D550;
    }
    goto L_0881D544;
L_0881D544:
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    goto L_0881D548;
L_0881D548:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0881D0C4;
L_0881D550:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
        goto L_0881D548;
    }
    goto L_0881D55C;
L_0881D55C:
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_0881D560;
L_0881D560:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0881D0C4;
L_0881D568:
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[6] << 16u);
      if (branch_taken) {
          goto L_0881D520;
      }
      goto L_0881D574;
    }
L_0881D574:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    goto L_0881D520;
L_0881D580:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[7]);
        goto L_0881D4CC;
    }
    goto L_0881D58C;
L_0881D58C:
    ctx.set_gpr(6, ctx.gpr[13] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[10]);
    goto L_0881D4C8;
L_0881D598:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[8]);
        goto L_0881D3D8;
    }
    goto L_0881D5A4;
L_0881D5A4:
    ctx.set_gpr(6, ctx.gpr[10] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    goto L_0881D3D4;
L_0881D5B0:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    goto L_0881D1C0;
L_0881D5B8:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    goto L_0881D040;
L_0881D5C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    ctx.set_gpr(11, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(20, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0881D9B0;
      }
      goto L_0881D5F0;
    }
L_0881D5F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.set_gpr(2, 0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0881D998;
      }
      goto L_0881D5F8;
    }
L_0881D5F8:
    ctx.set_gpr(5, ctx.gpr[11] + 0u);
    ctx.set_gpr(19, ctx.gpr[29] + 0u);
    ctx.set_gpr(14, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(11, ctx.gpr[9] + 0u);
      if (branch_taken) {
          goto L_0881D784;
      }
      goto L_0881D60C;
    }
L_0881D60C:
    ctx.set_gpr(2, ctx.gpr[9] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u | 65535u);
      if (branch_taken) {
          goto L_0881D858;
      }
      goto L_0881D618;
    }
L_0881D618:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881D9F0;
      }
      goto L_0881D620;
    }
L_0881D620:
    ctx.set_gpr(2, 0u | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881D9D0;
      }
      goto L_0881D630;
    }
L_0881D630:
    ctx.set_gpr(2, ctx.gpr[10] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    goto L_0881D634;
L_0881D634:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881D648;
      }
      goto L_0881D640;
    }
L_0881D640:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881D648;
L_0881D648:
    ctx.set_gpr(2, ctx.gpr[10] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(10, ctx.gpr[10] << (ctx.gpr[4] & 31u));
        goto L_0881DA74;
    }
    goto L_0881D670;
L_0881D670:
    ctx.set_gpr(5, ctx.gpr[11] - ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[10] >> 16u);
    ctx.set_gpr(9, ctx.gpr[10] & 65535u);
    ctx.set_gpr(15, 0u + 0u);
    goto L_0881D680;
L_0881D680:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D68C;
      }
      goto L_0881D688;
    }
L_0881D688:
    ctx.pc = 0x0881D688u; rt.stop("Allegrex BREAK code 7 at 0x0881D688"); return;
    goto L_0881D68C;
L_0881D68C:
    ctx.set_gpr(4, ctx.gpr[14] >> 16u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D6B8;
      }
      goto L_0881D6B4;
    }
L_0881D6B4:
    ctx.pc = 0x0881D6B4u; rt.stop("Allegrex BREAK code 7 at 0x0881D6B4"); return;
    goto L_0881D6B8;
L_0881D6B8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0881D6E0;
      }
      goto L_0881D6C0;
    }
L_0881D6C0:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0881D6E0;
      }
      goto L_0881D6D0;
    }
L_0881D6D0:
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[10]);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(4, ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[6]);
    goto L_0881D6E0;
L_0881D6E0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D6EC;
      }
      goto L_0881D6E8;
    }
L_0881D6E8:
    ctx.pc = 0x0881D6E8u; rt.stop("Allegrex BREAK code 7 at 0x0881D6E8"); return;
    goto L_0881D6EC;
L_0881D6EC:
    ctx.set_gpr(5, ctx.gpr[14] & 65535u);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D718;
      }
      goto L_0881D714;
    }
L_0881D714:
    ctx.pc = 0x0881D714u; rt.stop("Allegrex BREAK code 7 at 0x0881D714"); return;
    goto L_0881D718;
L_0881D718:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0881D740;
      }
      goto L_0881D720;
    }
L_0881D720:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0881D740;
      }
      goto L_0881D730;
    }
L_0881D730:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) ctx.set_gpr(5, ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[6]);
    goto L_0881D740;
L_0881D740:
    ctx.set_gpr(12, ctx.gpr[2] >> (ctx.gpr[15] & 31u));
    ctx.set_gpr(13, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    goto L_0881D750;
L_0881D750:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881D7A0;
      }
      goto L_0881D758;
    }
L_0881D758:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D784:
    ctx.set_gpr(2, ctx.gpr[9] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u | 65535u);
      if (branch_taken) {
          goto L_0881D7E8;
      }
      goto L_0881D790;
    }
L_0881D790:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    goto L_0881D798;
L_0881D798:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881D758;
      }
      goto L_0881D7A0;
    }
L_0881D7A0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u - ctx.gpr[6]);
    ctx.set_gpr(4, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, 0u - ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D7E8:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881DA38;
      }
      goto L_0881D7F4;
    }
L_0881D7F4:
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881D80C;
      }
      goto L_0881D804;
    }
L_0881D804:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881D80C;
L_0881D80C:
    ctx.set_gpr(2, ctx.gpr[5] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(25, ctx.gpr[2] - ctx.gpr[8]);
      if (branch_taken) {
          goto L_0881DB40;
      }
      goto L_0881D834;
    }
L_0881D834:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[14] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_0881DA58;
      }
      goto L_0881D840;
    }
L_0881D840:
    ctx.set_gpr(2, ctx.gpr[14] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[14] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881DA5C;
      }
      goto L_0881D84C;
    }
L_0881D84C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    goto L_0881D798;
L_0881D858:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881DA18;
      }
      goto L_0881D864;
    }
L_0881D864:
    ctx.set_gpr(2, ctx.gpr[10] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881D878;
      }
      goto L_0881D870;
    }
L_0881D870:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881D878;
L_0881D878:
    ctx.set_gpr(2, ctx.gpr[10] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(15, 0u + 0u);
      if (branch_taken) {
          goto L_0881D8BC;
      }
      goto L_0881D8A0;
    }
L_0881D8A0:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[14] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[11] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(15, ctx.gpr[4] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(10, ctx.gpr[10] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(14, ctx.gpr[14] << (ctx.gpr[4] & 31u));
    goto L_0881D8BC;
L_0881D8BC:
    ctx.set_gpr(6, ctx.gpr[10] >> 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[11]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D8CC;
      }
      goto L_0881D8C8;
    }
L_0881D8C8:
    ctx.pc = 0x0881D8C8u; rt.stop("Allegrex BREAK code 7 at 0x0881D8C8"); return;
    goto L_0881D8CC;
L_0881D8CC:
    ctx.set_gpr(7, ctx.gpr[10] & 65535u);
    ctx.set_gpr(4, ctx.gpr[14] >> 16u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[11]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D8FC;
      }
      goto L_0881D8F8;
    }
L_0881D8F8:
    ctx.pc = 0x0881D8F8u; rt.stop("Allegrex BREAK code 7 at 0x0881D8F8"); return;
    goto L_0881D8FC;
L_0881D8FC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881D924;
      }
      goto L_0881D904;
    }
L_0881D904:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881D924;
      }
      goto L_0881D914;
    }
L_0881D914:
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[10]);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(4, ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[5]);
    goto L_0881D924;
L_0881D924:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D930;
      }
      goto L_0881D92C;
    }
L_0881D92C:
    ctx.pc = 0x0881D92Cu; rt.stop("Allegrex BREAK code 7 at 0x0881D92C"); return;
    goto L_0881D930;
L_0881D930:
    ctx.set_gpr(5, ctx.gpr[14] & 65535u);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D95C;
      }
      goto L_0881D958;
    }
L_0881D958:
    ctx.pc = 0x0881D958u; rt.stop("Allegrex BREAK code 7 at 0x0881D958"); return;
    goto L_0881D95C;
L_0881D95C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[7]);
      if (branch_taken) {
          goto L_0881D984;
      }
      goto L_0881D964;
    }
L_0881D964:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[7]);
      if (branch_taken) {
          goto L_0881D984;
      }
      goto L_0881D974;
    }
L_0881D974:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) ctx.set_gpr(5, ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[7]);
    goto L_0881D984;
L_0881D984:
    ctx.set_gpr(12, ctx.gpr[2] >> (ctx.gpr[15] & 31u));
    ctx.set_gpr(13, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    goto L_0881D750;
L_0881D998:
    ctx.set_gpr(4, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, 0u - ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    goto L_0881D5F8;
L_0881D9B0:
    ctx.set_gpr(2, 0u - ctx.gpr[4]);
    ctx.set_gpr(4, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, 0u - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(-1));
    goto L_0881D5F0;
L_0881D9D0:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881D648;
      }
      goto L_0881D9E4;
    }
L_0881D9E4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881D648;
L_0881D9F0:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881D9FC;
      }
      goto L_0881D9F8;
    }
L_0881D9F8:
    ctx.pc = 0x0881D9F8u; rt.stop("Allegrex BREAK code 7 at 0x0881D9F8"); return;
    goto L_0881D9FC;
L_0881D9FC:
    ctx.set_gpr(2, 0u | 65535u);
    ctx.set_gpr(10, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[10] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 255u << 16u);
        goto L_0881D9D0;
    }
    goto L_0881DA10;
L_0881DA10:
    ctx.set_gpr(2, ctx.gpr[10] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    goto L_0881D634;
L_0881DA18:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881D878;
      }
      goto L_0881DA2C;
    }
L_0881DA2C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881D878;
L_0881DA38:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881D80C;
      }
      goto L_0881DA4C;
    }
L_0881DA4C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881D80C;
L_0881DA58:
    ctx.set_gpr(2, ctx.gpr[14] < ctx.gpr[4] ? 1u : 0u);
    goto L_0881DA5C;
L_0881DA5C:
    ctx.set_gpr(3, ctx.gpr[11] - ctx.gpr[5]);
    ctx.set_gpr(11, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(14, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    goto L_0881D798;
L_0881DA74:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[11] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(8, ctx.gpr[10] >> 16u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DA8C;
      }
      goto L_0881DA88;
    }
L_0881DA88:
    ctx.pc = 0x0881DA88u; rt.stop("Allegrex BREAK code 7 at 0x0881DA88"); return;
    goto L_0881DA8C;
L_0881DA8C:
    ctx.set_gpr(9, ctx.gpr[10] & 65535u);
    ctx.set_gpr(15, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[14] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[11] << (ctx.gpr[15] & 31u));
    ctx.set_gpr(11, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[11] >> 16u);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(4, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[6]);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DACC;
      }
      goto L_0881DAC8;
    }
L_0881DAC8:
    ctx.pc = 0x0881DAC8u; rt.stop("Allegrex BREAK code 7 at 0x0881DAC8"); return;
    goto L_0881DACC;
L_0881DACC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(14, ctx.gpr[14] << (ctx.gpr[15] & 31u));
      if (branch_taken) {
          goto L_0881DAE4;
      }
      goto L_0881DAD4;
    }
L_0881DAD4:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881DCC4;
      }
      goto L_0881DAE4;
    }
L_0881DAE4:
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DAF4;
      }
      goto L_0881DAF0;
    }
L_0881DAF0:
    ctx.pc = 0x0881DAF0u; rt.stop("Allegrex BREAK code 7 at 0x0881DAF0"); return;
    goto L_0881DAF4;
L_0881DAF4:
    ctx.set_gpr(5, ctx.gpr[11] & 65535u);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DB20;
      }
      goto L_0881DB1C;
    }
L_0881DB1C:
    ctx.pc = 0x0881DB1Cu; rt.stop("Allegrex BREAK code 7 at 0x0881DB1C"); return;
    goto L_0881DB20;
L_0881DB20:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[6]);
        goto L_0881D680;
    }
    goto L_0881DB28;
L_0881DB28:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881DCB4;
      }
      goto L_0881DB38;
    }
L_0881DB38:
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[6]);
    goto L_0881D680;
L_0881DB40:
    ctx.set_gpr(3, ctx.gpr[5] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(2, ctx.gpr[10] >> (ctx.gpr[25] & 31u));
    ctx.set_gpr(24, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[11] >> (ctx.gpr[25] & 31u));
    ctx.set_gpr(7, ctx.gpr[24] >> 16u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DB60;
      }
      goto L_0881DB5C;
    }
L_0881DB5C:
    ctx.pc = 0x0881DB5Cu; rt.stop("Allegrex BREAK code 7 at 0x0881DB5C"); return;
    goto L_0881DB60;
L_0881DB60:
    ctx.set_gpr(18, ctx.gpr[24] & 65535u);
    ctx.set_gpr(3, ctx.gpr[11] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(2, ctx.gpr[14] >> (ctx.gpr[25] & 31u));
    ctx.set_gpr(16, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[16] >> 16u);
    ctx.set_gpr(17, ctx.gpr[14] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(11, ctx.gpr[10] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(15, ctx.lo);
    ctx.set_gpr(4, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[6]);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DBA4;
      }
      goto L_0881DBA0;
    }
L_0881DBA0:
    ctx.pc = 0x0881DBA0u; rt.stop("Allegrex BREAK code 7 at 0x0881DBA0"); return;
    goto L_0881DBA4;
L_0881DBA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(14, ctx.gpr[15] + 0u);
      if (branch_taken) {
          goto L_0881DBBC;
      }
      goto L_0881DBAC;
    }
L_0881DBAC:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[24]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[24] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(14, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881DC9C;
      }
      goto L_0881DBBC;
    }
L_0881DBBC:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[9]);
    goto L_0881DBC0;
L_0881DBC0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DBCC;
      }
      goto L_0881DBC8;
    }
L_0881DBC8:
    ctx.pc = 0x0881DBC8u; rt.stop("Allegrex BREAK code 7 at 0x0881DBC8"); return;
    goto L_0881DBCC;
L_0881DBCC:
    ctx.set_gpr(4, ctx.gpr[16] & 65535u);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DBF8;
      }
      goto L_0881DBF4;
    }
L_0881DBF4:
    ctx.pc = 0x0881DBF4u; rt.stop("Allegrex BREAK code 7 at 0x0881DBF4"); return;
    goto L_0881DBF8;
L_0881DBF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, ctx.gpr[9] + 0u);
      if (branch_taken) {
          goto L_0881DC10;
      }
      goto L_0881DC00;
    }
L_0881DC00:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[24]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[24] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881DC84;
      }
      goto L_0881DC10;
    }
L_0881DC10:
    ctx.set_gpr(2, ctx.gpr[14] << 16u);
    goto L_0881DC14;
L_0881DC14:
    ctx.set_gpr(6, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[10] | ctx.gpr[2]);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[11]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(5, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(7, ctx.lo);
      if (branch_taken) {
          goto L_0881DC6C;
      }
      goto L_0881DC30;
    }
L_0881DC30:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881DC64;
      }
      goto L_0881DC38;
    }
L_0881DC38:
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[7]);
    goto L_0881DC3C;
L_0881DC3C:
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[4] << (ctx.gpr[25] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] >> (ctx.gpr[8] & 31u));
    ctx.set_gpr(12, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(13, ctx.gpr[4] >> (ctx.gpr[8] & 31u));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    goto L_0881D798;
L_0881DC64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[7]);
      if (branch_taken) {
          goto L_0881DC3C;
      }
      goto L_0881DC6C;
    }
L_0881DC6C:
    ctx.set_gpr(4, ctx.gpr[7] - ctx.gpr[11]);
    ctx.set_gpr(2, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[24]);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    goto L_0881DC38;
L_0881DC84:
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[14] << 16u);
      if (branch_taken) {
          goto L_0881DC14;
      }
      goto L_0881DC90;
    }
L_0881DC90:
    ctx.set_gpr(10, ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[24]);
    goto L_0881DC14;
L_0881DC9C:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[9]);
        goto L_0881DBC0;
    }
    goto L_0881DCA8;
L_0881DCA8:
    ctx.set_gpr(14, ctx.gpr[15] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[24]);
    goto L_0881DBBC;
L_0881DCB4:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[10]);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(5, ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[6]);
    goto L_0881D680;
L_0881DCC4:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[10]);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(4, ctx.gpr[2]);
    goto L_0881DAE4;
L_0881DCD0:
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(11, ctx.gpr[5] + 0u);
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(14, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0881DE28;
      }
      goto L_0881DCE4;
    }
L_0881DCE4:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u | 65535u);
      if (branch_taken) {
          goto L_0881DEAC;
      }
      goto L_0881DCF0;
    }
L_0881DCF0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881E028;
      }
      goto L_0881DCF8;
    }
L_0881DCF8:
    ctx.set_gpr(2, 0u | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881E008;
      }
      goto L_0881DD08;
    }
L_0881DD08:
    ctx.set_gpr(2, ctx.gpr[10] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    goto L_0881DD0C;
L_0881DD0C:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881DD20;
      }
      goto L_0881DD18;
    }
L_0881DD18:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881DD20;
L_0881DD20:
    ctx.set_gpr(2, ctx.gpr[10] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(9, ctx.gpr[3] - ctx.gpr[4]);
    if (ctx.gpr[9] != 0u) {
    ctx.set_gpr(10, ctx.gpr[10] << (ctx.gpr[9] & 31u));
        goto L_0881E184;
    }
    goto L_0881DD48;
L_0881DD48:
    ctx.set_gpr(4, ctx.gpr[11] - ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[10] >> 16u);
    ctx.set_gpr(13, ctx.gpr[10] & 65535u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_0881DD58;
L_0881DD58:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DD64;
      }
      goto L_0881DD60;
    }
L_0881DD60:
    ctx.pc = 0x0881DD60u; rt.stop("Allegrex BREAK code 7 at 0x0881DD60"); return;
    goto L_0881DD64;
L_0881DD64:
    ctx.set_gpr(3, ctx.gpr[14] >> 16u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DD90;
      }
      goto L_0881DD8C;
    }
L_0881DD8C:
    ctx.pc = 0x0881DD8Cu; rt.stop("Allegrex BREAK code 7 at 0x0881DD8C"); return;
    goto L_0881DD90;
L_0881DD90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(12, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0881DDB4;
      }
      goto L_0881DD98;
    }
L_0881DD98:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(12, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881DDB4;
      }
      goto L_0881DDA8;
    }
L_0881DDA8:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(12, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
        goto L_0881E2C0;
    }
    goto L_0881DDB4;
L_0881DDB4:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DDC4;
      }
      goto L_0881DDC0;
    }
L_0881DDC0:
    ctx.pc = 0x0881DDC0u; rt.stop("Allegrex BREAK code 7 at 0x0881DDC0"); return;
    goto L_0881DDC4;
L_0881DDC4:
    ctx.set_gpr(4, ctx.gpr[14] & 65535u);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DDF0;
      }
      goto L_0881DDEC;
    }
L_0881DDEC:
    ctx.pc = 0x0881DDECu; rt.stop("Allegrex BREAK code 7 at 0x0881DDEC"); return;
    goto L_0881DDF0;
L_0881DDF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(11, ctx.gpr[9] + 0u);
      if (branch_taken) {
          goto L_0881DE14;
      }
      goto L_0881DDF8;
    }
L_0881DDF8:
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(11, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881DE14;
      }
      goto L_0881DE08;
    }
L_0881DE08:
    ctx.set_gpr(3, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    if (ctx.gpr[3] != 0u) ctx.set_gpr(11, ctx.gpr[2]);
    goto L_0881DE14;
L_0881DE14:
    ctx.set_gpr(2, ctx.gpr[12] << 16u);
    ctx.set_gpr(2, ctx.gpr[11] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DE28:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0881DEA0;
      }
      goto L_0881DE34;
    }
L_0881DE34:
    ctx.set_gpr(2, 0u | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881DFE8;
      }
      goto L_0881DE44;
    }
L_0881DE44:
    ctx.set_gpr(2, ctx.gpr[7] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881DE5C;
      }
      goto L_0881DE54;
    }
L_0881DE54:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881DE5C;
L_0881DE5C:
    ctx.set_gpr(2, ctx.gpr[8] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[7]);
        goto L_0881E07C;
    }
    goto L_0881DE84;
L_0881DE84:
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881E070;
      }
      goto L_0881DE90;
    }
L_0881DE90:
    ctx.set_gpr(2, ctx.gpr[14] < ctx.gpr[10] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_0881E070;
    }
    goto L_0881DE9C;
L_0881DE9C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0881DEA0;
L_0881DEA0:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DEAC:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881E050;
      }
      goto L_0881DEB8;
    }
L_0881DEB8:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881DED0;
      }
      goto L_0881DEC8;
    }
L_0881DEC8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881DED0;
L_0881DED0:
    ctx.set_gpr(2, ctx.gpr[10] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, ctx.gpr[10] >> 16u);
      if (branch_taken) {
          goto L_0881DF14;
      }
      goto L_0881DEF8;
    }
L_0881DEF8:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[14] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[11] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(11, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(14, ctx.gpr[14] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(10, ctx.gpr[10] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(6, ctx.gpr[10] >> 16u);
    goto L_0881DF14;
L_0881DF14:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[11]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DF20;
      }
      goto L_0881DF1C;
    }
L_0881DF1C:
    ctx.pc = 0x0881DF1Cu; rt.stop("Allegrex BREAK code 7 at 0x0881DF1C"); return;
    goto L_0881DF20;
L_0881DF20:
    ctx.set_gpr(7, ctx.gpr[10] & 65535u);
    ctx.set_gpr(3, ctx.gpr[14] >> 16u);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[11]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DF50;
      }
      goto L_0881DF4C;
    }
L_0881DF4C:
    ctx.pc = 0x0881DF4Cu; rt.stop("Allegrex BREAK code 7 at 0x0881DF4C"); return;
    goto L_0881DF50;
L_0881DF50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(12, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0881DF74;
      }
      goto L_0881DF58;
    }
L_0881DF58:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(12, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881DF74;
      }
      goto L_0881DF68;
    }
L_0881DF68:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(12, ctx.gpr[4] + static_cast<std::uint32_t>(-2));
        goto L_0881E2B8;
    }
    goto L_0881DF74;
L_0881DF74:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DF84;
      }
      goto L_0881DF80;
    }
L_0881DF80:
    ctx.pc = 0x0881DF80u; rt.stop("Allegrex BREAK code 7 at 0x0881DF80"); return;
    goto L_0881DF84;
L_0881DF84:
    ctx.set_gpr(4, ctx.gpr[14] & 65535u);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881DFB0;
      }
      goto L_0881DFAC;
    }
L_0881DFAC:
    ctx.pc = 0x0881DFACu; rt.stop("Allegrex BREAK code 7 at 0x0881DFAC"); return;
    goto L_0881DFB0;
L_0881DFB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(9, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_0881DFD4;
      }
      goto L_0881DFB8;
    }
L_0881DFB8:
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(9, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881DFD4;
      }
      goto L_0881DFC8;
    }
L_0881DFC8:
    ctx.set_gpr(3, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(-2));
    if (ctx.gpr[3] != 0u) ctx.set_gpr(9, ctx.gpr[2]);
    goto L_0881DFD4;
L_0881DFD4:
    ctx.set_gpr(2, ctx.gpr[12] << 16u);
    ctx.set_gpr(2, ctx.gpr[9] | ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DFE8:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881DE5C;
      }
      goto L_0881DFFC;
    }
L_0881DFFC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881DE5C;
L_0881E008:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881DD20;
      }
      goto L_0881E01C;
    }
L_0881E01C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881DD20;
L_0881E028:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E034;
      }
      goto L_0881E030;
    }
L_0881E030:
    ctx.pc = 0x0881E030u; rt.stop("Allegrex BREAK code 7 at 0x0881E030"); return;
    goto L_0881E034;
L_0881E034:
    ctx.set_gpr(2, 0u | 65535u);
    ctx.set_gpr(10, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[10] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 255u << 16u);
        goto L_0881E008;
    }
    goto L_0881E048;
L_0881E048:
    ctx.set_gpr(2, ctx.gpr[10] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    goto L_0881DD0C;
L_0881E050:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881DED0;
      }
      goto L_0881E064;
    }
L_0881E064:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881DED0;
L_0881E070:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E07C:
    ctx.set_gpr(4, ctx.gpr[8] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(2, ctx.gpr[10] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(12, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[11] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(8, ctx.gpr[12] >> 16u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E09C;
      }
      goto L_0881E098;
    }
L_0881E098:
    ctx.pc = 0x0881E098u; rt.stop("Allegrex BREAK code 7 at 0x0881E098"); return;
    goto L_0881E09C;
L_0881E09C:
    ctx.set_gpr(15, ctx.gpr[12] & 65535u);
    ctx.set_gpr(2, ctx.gpr[11] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(3, ctx.gpr[14] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(11, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[11] >> 16u);
    ctx.set_gpr(14, ctx.gpr[14] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(7, ctx.gpr[10] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(13, ctx.lo);
    ctx.set_gpr(4, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[6]);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E0E0;
      }
      goto L_0881E0DC;
    }
L_0881E0DC:
    ctx.pc = 0x0881E0DCu; rt.stop("Allegrex BREAK code 7 at 0x0881E0DC"); return;
    goto L_0881E0E0;
L_0881E0E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[13] + 0u);
      if (branch_taken) {
          goto L_0881E0F8;
      }
      goto L_0881E0E8;
    }
L_0881E0E8:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[12]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881E2A0;
      }
      goto L_0881E0F8;
    }
L_0881E0F8:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[9]);
    goto L_0881E0FC;
L_0881E0FC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E108;
      }
      goto L_0881E104;
    }
L_0881E104:
    ctx.pc = 0x0881E104u; rt.stop("Allegrex BREAK code 7 at 0x0881E104"); return;
    goto L_0881E108;
L_0881E108:
    ctx.set_gpr(4, ctx.gpr[11] & 65535u);
    ctx.set_gpr(10, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E134;
      }
      goto L_0881E130;
    }
L_0881E130:
    ctx.pc = 0x0881E130u; rt.stop("Allegrex BREAK code 7 at 0x0881E130"); return;
    goto L_0881E134;
L_0881E134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_0881E14C;
      }
      goto L_0881E13C;
    }
L_0881E13C:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[12]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881E288;
      }
      goto L_0881E14C;
    }
L_0881E14C:
    ctx.set_gpr(2, ctx.gpr[6] << 16u);
    goto L_0881E150;
L_0881E150:
    ctx.set_gpr(8, ctx.gpr[9] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[5]);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[8]) * static_cast<std::uint64_t>(ctx.gpr[7]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(9, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881E27C;
      }
      goto L_0881E16C;
    }
L_0881E16C:
    if (ctx.gpr[3] == ctx.gpr[9]) {
    ctx.set_gpr(3, ctx.lo);
        goto L_0881E26C;
    }
    goto L_0881E174;
L_0881E174:
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    goto L_0881E178;
L_0881E178:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E184:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[11] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(8, ctx.gpr[10] >> 16u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E19C;
      }
      goto L_0881E198;
    }
L_0881E198:
    ctx.pc = 0x0881E198u; rt.stop("Allegrex BREAK code 7 at 0x0881E198"); return;
    goto L_0881E19C;
L_0881E19C:
    ctx.set_gpr(13, ctx.gpr[10] & 65535u);
    ctx.set_gpr(3, ctx.gpr[14] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[11] << (ctx.gpr[9] & 31u));
    ctx.set_gpr(11, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[11] >> 16u);
    ctx.set_gpr(14, ctx.gpr[14] << (ctx.gpr[9] & 31u));
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(4, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[6]);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E1DC;
      }
      goto L_0881E1D8;
    }
L_0881E1D8:
    ctx.pc = 0x0881E1D8u; rt.stop("Allegrex BREAK code 7 at 0x0881E1D8"); return;
    goto L_0881E1DC;
L_0881E1DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_0881E1F4;
      }
      goto L_0881E1E4;
    }
L_0881E1E4:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881E2C8;
      }
      goto L_0881E1F4;
    }
L_0881E1F4:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[9]);
    goto L_0881E1F8;
L_0881E1F8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E204;
      }
      goto L_0881E200;
    }
L_0881E200:
    ctx.pc = 0x0881E200u; rt.stop("Allegrex BREAK code 7 at 0x0881E200"); return;
    goto L_0881E204;
L_0881E204:
    ctx.set_gpr(4, ctx.gpr[11] & 65535u);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E230;
      }
      goto L_0881E22C;
    }
L_0881E22C:
    ctx.pc = 0x0881E22Cu; rt.stop("Allegrex BREAK code 7 at 0x0881E22C"); return;
    goto L_0881E230;
L_0881E230:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(11, ctx.gpr[9] + 0u);
      if (branch_taken) {
          goto L_0881E25C;
      }
      goto L_0881E238;
    }
L_0881E238:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(11, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881E25C;
      }
      goto L_0881E248;
    }
L_0881E248:
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[6] << 16u);
      if (branch_taken) {
          goto L_0881E260;
      }
      goto L_0881E254;
    }
L_0881E254:
    ctx.set_gpr(11, ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[10]);
    goto L_0881E25C;
L_0881E25C:
    ctx.set_gpr(2, ctx.gpr[6] << 16u);
    goto L_0881E260;
L_0881E260:
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[11] | ctx.gpr[2]);
    goto L_0881DD58;
L_0881E26C:
    ctx.set_gpr(2, ctx.gpr[14] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
        goto L_0881E178;
    }
    goto L_0881E278;
L_0881E278:
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_0881E27C;
L_0881E27C:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E288:
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[6] << 16u);
      if (branch_taken) {
          goto L_0881E150;
      }
      goto L_0881E294;
    }
L_0881E294:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[12]);
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(-2));
    goto L_0881E150;
L_0881E2A0:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[9]);
        goto L_0881E0FC;
    }
    goto L_0881E2AC;
L_0881E2AC:
    ctx.set_gpr(6, ctx.gpr[13] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[12]);
    goto L_0881E0F8;
L_0881E2B8:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[10]);
    goto L_0881DF74;
L_0881E2C0:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[10]);
    goto L_0881DDB4;
L_0881E2C8:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[9]);
        goto L_0881E1F8;
    }
    goto L_0881E2D4;
L_0881E2D4:
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[10]);
    goto L_0881E1F4;
L_0881E2E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0881E45C;
      }
      goto L_0881E304;
    }
L_0881E304:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u | 65535u);
      if (branch_taken) {
          goto L_0881E4F8;
      }
      goto L_0881E310;
    }
L_0881E310:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881E654;
      }
      goto L_0881E318;
    }
L_0881E318:
    ctx.set_gpr(2, 0u | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881E634;
      }
      goto L_0881E328;
    }
L_0881E328:
    ctx.set_gpr(2, ctx.gpr[9] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    goto L_0881E32C;
L_0881E32C:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881E340;
      }
      goto L_0881E338;
    }
L_0881E338:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881E340;
L_0881E340:
    ctx.set_gpr(2, ctx.gpr[9] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[4] & 31u));
        goto L_0881E6D8;
    }
    goto L_0881E368;
L_0881E368:
    ctx.set_gpr(5, ctx.gpr[6] - ctx.gpr[9]);
    ctx.set_gpr(8, ctx.gpr[9] >> 16u);
    ctx.set_gpr(11, ctx.gpr[9] & 65535u);
    ctx.set_gpr(14, 0u + 0u);
    goto L_0881E378;
L_0881E378:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E384;
      }
      goto L_0881E380;
    }
L_0881E380:
    ctx.pc = 0x0881E380u; rt.stop("Allegrex BREAK code 7 at 0x0881E380"); return;
    goto L_0881E384;
L_0881E384:
    ctx.set_gpr(4, ctx.gpr[10] >> 16u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E3B0;
      }
      goto L_0881E3AC;
    }
L_0881E3AC:
    ctx.pc = 0x0881E3ACu; rt.stop("Allegrex BREAK code 7 at 0x0881E3AC"); return;
    goto L_0881E3B0;
L_0881E3B0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0881E3D8;
      }
      goto L_0881E3B8;
    }
L_0881E3B8:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0881E3D8;
      }
      goto L_0881E3C8;
    }
L_0881E3C8:
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[9]);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(4, ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[6]);
    goto L_0881E3D8;
L_0881E3D8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E3E4;
      }
      goto L_0881E3E0;
    }
L_0881E3E0:
    ctx.pc = 0x0881E3E0u; rt.stop("Allegrex BREAK code 7 at 0x0881E3E0"); return;
    goto L_0881E3E4;
L_0881E3E4:
    ctx.set_gpr(5, ctx.gpr[10] & 65535u);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(10, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E410;
      }
      goto L_0881E40C;
    }
L_0881E40C:
    ctx.pc = 0x0881E40Cu; rt.stop("Allegrex BREAK code 7 at 0x0881E40C"); return;
    goto L_0881E410;
L_0881E410:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_0881E438;
      }
      goto L_0881E418;
    }
L_0881E418:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_0881E438;
      }
      goto L_0881E428;
    }
L_0881E428:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[10] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) ctx.set_gpr(5, ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[10]);
    goto L_0881E438;
L_0881E438:
    ctx.set_gpr(12, ctx.gpr[2] >> (ctx.gpr[14] & 31u));
    ctx.set_gpr(13, 0u + 0u);
    goto L_0881E440;
L_0881E440:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[12] + 0u);
    ctx.set_gpr(3, ctx.gpr[13] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E45C:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0881E440;
      }
      goto L_0881E46C;
    }
L_0881E46C:
    ctx.set_gpr(2, 0u | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881E69C;
      }
      goto L_0881E47C;
    }
L_0881E47C:
    ctx.set_gpr(2, ctx.gpr[7] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881E494;
      }
      goto L_0881E48C;
    }
L_0881E48C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881E494;
L_0881E494:
    ctx.set_gpr(2, ctx.gpr[8] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(11, ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(25, ctx.gpr[2] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_0881E7A4;
      }
      goto L_0881E4BC;
    }
L_0881E4BC:
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[10] - ctx.gpr[9]);
      if (branch_taken) {
          goto L_0881E6BC;
      }
      goto L_0881E4C8;
    }
L_0881E4C8:
    ctx.set_gpr(2, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[10] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881E6C0;
      }
      goto L_0881E4D4;
    }
L_0881E4D4:
    ctx.set_gpr(12, ctx.gpr[10] + 0u);
    ctx.set_gpr(13, ctx.gpr[6] + 0u);
    goto L_0881E4DC;
L_0881E4DC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[12] + 0u);
    ctx.set_gpr(3, ctx.gpr[13] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E4F8:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 255u << 16u);
      if (branch_taken) {
          goto L_0881E67C;
      }
      goto L_0881E504;
    }
L_0881E504:
    ctx.set_gpr(2, ctx.gpr[9] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0881E51C;
      }
      goto L_0881E514;
    }
L_0881E514:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_0881E51C;
L_0881E51C:
    ctx.set_gpr(2, ctx.gpr[9] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(14, 0u + 0u);
      if (branch_taken) {
          goto L_0881E560;
      }
      goto L_0881E544;
    }
L_0881E544:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[10] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(14, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(10, ctx.gpr[10] << (ctx.gpr[4] & 31u));
    goto L_0881E560;
L_0881E560:
    ctx.set_gpr(7, ctx.gpr[9] >> 16u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E570;
      }
      goto L_0881E56C;
    }
L_0881E56C:
    ctx.pc = 0x0881E56Cu; rt.stop("Allegrex BREAK code 7 at 0x0881E56C"); return;
    goto L_0881E570;
L_0881E570:
    ctx.set_gpr(8, ctx.gpr[9] & 65535u);
    ctx.set_gpr(4, ctx.gpr[10] >> 16u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E5A0;
      }
      goto L_0881E59C;
    }
L_0881E59C:
    ctx.pc = 0x0881E59Cu; rt.stop("Allegrex BREAK code 7 at 0x0881E59C"); return;
    goto L_0881E5A0;
L_0881E5A0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881E5C8;
      }
      goto L_0881E5A8;
    }
L_0881E5A8:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881E5C8;
      }
      goto L_0881E5B8;
    }
L_0881E5B8:
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[9]);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(4, ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[5]);
    goto L_0881E5C8;
L_0881E5C8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E5D4;
      }
      goto L_0881E5D0;
    }
L_0881E5D0:
    ctx.pc = 0x0881E5D0u; rt.stop("Allegrex BREAK code 7 at 0x0881E5D0"); return;
    goto L_0881E5D4;
L_0881E5D4:
    ctx.set_gpr(5, ctx.gpr[10] & 65535u);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E600;
      }
      goto L_0881E5FC;
    }
L_0881E5FC:
    ctx.pc = 0x0881E5FCu; rt.stop("Allegrex BREAK code 7 at 0x0881E5FC"); return;
    goto L_0881E600;
L_0881E600:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[8]);
      if (branch_taken) {
          goto L_0881E628;
      }
      goto L_0881E608;
    }
L_0881E608:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[8]);
      if (branch_taken) {
          goto L_0881E628;
      }
      goto L_0881E618;
    }
L_0881E618:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) ctx.set_gpr(5, ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[8]);
    goto L_0881E628;
L_0881E628:
    ctx.set_gpr(12, ctx.gpr[2] >> (ctx.gpr[14] & 31u));
    ctx.set_gpr(13, 0u + 0u);
    goto L_0881E440;
L_0881E634:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881E340;
      }
      goto L_0881E648;
    }
L_0881E648:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881E340;
L_0881E654:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E660;
      }
      goto L_0881E65C;
    }
L_0881E65C:
    ctx.pc = 0x0881E65Cu; rt.stop("Allegrex BREAK code 7 at 0x0881E65C"); return;
    goto L_0881E660;
L_0881E660:
    ctx.set_gpr(2, 0u | 65535u);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 255u << 16u);
        goto L_0881E634;
    }
    goto L_0881E674;
L_0881E674:
    ctx.set_gpr(2, ctx.gpr[9] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    goto L_0881E32C;
L_0881E67C:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881E51C;
      }
      goto L_0881E690;
    }
L_0881E690:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881E51C;
L_0881E69C:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881E494;
      }
      goto L_0881E6B0;
    }
L_0881E6B0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    goto L_0881E494;
L_0881E6BC:
    ctx.set_gpr(2, ctx.gpr[10] < ctx.gpr[4] ? 1u : 0u);
    goto L_0881E6C0;
L_0881E6C0:
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[8]);
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    ctx.set_gpr(12, ctx.gpr[10] + 0u);
    ctx.set_gpr(13, ctx.gpr[6] + 0u);
    goto L_0881E4DC;
L_0881E6D8:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[6] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(8, ctx.gpr[9] >> 16u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E6F0;
      }
      goto L_0881E6EC;
    }
L_0881E6EC:
    ctx.pc = 0x0881E6ECu; rt.stop("Allegrex BREAK code 7 at 0x0881E6EC"); return;
    goto L_0881E6F0;
L_0881E6F0:
    ctx.set_gpr(11, ctx.gpr[9] & 65535u);
    ctx.set_gpr(14, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] << (ctx.gpr[14] & 31u));
    ctx.set_gpr(3, ctx.gpr[10] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(15, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[15] >> 16u);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(4, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[6]);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E730;
      }
      goto L_0881E72C;
    }
L_0881E72C:
    ctx.pc = 0x0881E72Cu; rt.stop("Allegrex BREAK code 7 at 0x0881E72C"); return;
    goto L_0881E730;
L_0881E730:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, ctx.gpr[10] << (ctx.gpr[14] & 31u));
      if (branch_taken) {
          goto L_0881E748;
      }
      goto L_0881E738;
    }
L_0881E738:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881E938;
      }
      goto L_0881E748;
    }
L_0881E748:
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E758;
      }
      goto L_0881E754;
    }
L_0881E754:
    ctx.pc = 0x0881E754u; rt.stop("Allegrex BREAK code 7 at 0x0881E754"); return;
    goto L_0881E758;
L_0881E758:
    ctx.set_gpr(5, ctx.gpr[15] & 65535u);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E784;
      }
      goto L_0881E780;
    }
L_0881E780:
    ctx.pc = 0x0881E780u; rt.stop("Allegrex BREAK code 7 at 0x0881E780"); return;
    goto L_0881E784;
L_0881E784:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[6]);
        goto L_0881E378;
    }
    goto L_0881E78C;
L_0881E78C:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881E928;
      }
      goto L_0881E79C;
    }
L_0881E79C:
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[6]);
    goto L_0881E378;
L_0881E7A4:
    ctx.set_gpr(3, ctx.gpr[8] << (ctx.gpr[11] & 31u));
    ctx.set_gpr(2, ctx.gpr[9] >> (ctx.gpr[25] & 31u));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[6] >> (ctx.gpr[25] & 31u));
    ctx.set_gpr(8, ctx.gpr[7] >> 16u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E7C4;
      }
      goto L_0881E7C0;
    }
L_0881E7C0:
    ctx.pc = 0x0881E7C0u; rt.stop("Allegrex BREAK code 7 at 0x0881E7C0"); return;
    goto L_0881E7C4;
L_0881E7C4:
    ctx.set_gpr(18, ctx.gpr[7] & 65535u);
    ctx.set_gpr(3, ctx.gpr[6] << (ctx.gpr[11] & 31u));
    ctx.set_gpr(2, ctx.gpr[10] >> (ctx.gpr[25] & 31u));
    ctx.set_gpr(16, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[16] >> 16u);
    ctx.set_gpr(15, ctx.gpr[9] << (ctx.gpr[11] & 31u));
    ctx.set_gpr(17, ctx.gpr[10] << (ctx.gpr[11] & 31u));
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(4, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[6]);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E808;
      }
      goto L_0881E804;
    }
L_0881E804:
    ctx.pc = 0x0881E804u; rt.stop("Allegrex BREAK code 7 at 0x0881E804"); return;
    goto L_0881E808;
L_0881E808:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(24, ctx.gpr[14] + 0u);
      if (branch_taken) {
          goto L_0881E820;
      }
      goto L_0881E810;
    }
L_0881E810:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(24, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881E910;
      }
      goto L_0881E820;
    }
L_0881E820:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[9]);
    goto L_0881E824;
L_0881E824:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E830;
      }
      goto L_0881E82C;
    }
L_0881E82C:
    ctx.pc = 0x0881E82Cu; rt.stop("Allegrex BREAK code 7 at 0x0881E82C"); return;
    goto L_0881E830;
L_0881E830:
    ctx.set_gpr(4, ctx.gpr[16] & 65535u);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(2, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0881E85C;
      }
      goto L_0881E858;
    }
L_0881E858:
    ctx.pc = 0x0881E858u; rt.stop("Allegrex BREAK code 7 at 0x0881E858"); return;
    goto L_0881E85C;
L_0881E85C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, ctx.gpr[9] + 0u);
      if (branch_taken) {
          goto L_0881E874;
      }
      goto L_0881E864;
    }
L_0881E864:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881E8F8;
      }
      goto L_0881E874;
    }
L_0881E874:
    ctx.set_gpr(2, ctx.gpr[24] << 16u);
    goto L_0881E878;
L_0881E878:
    ctx.set_gpr(6, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[10] | ctx.gpr[2]);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[15]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(5, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, ctx.lo);
      if (branch_taken) {
          goto L_0881E8E0;
      }
      goto L_0881E894;
    }
L_0881E894:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881E8D8;
      }
      goto L_0881E89C;
    }
L_0881E89C:
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[8]);
    goto L_0881E8A0;
L_0881E8A0:
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[4] << (ctx.gpr[25] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] >> (ctx.gpr[11] & 31u));
    ctx.set_gpr(12, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(13, ctx.gpr[4] >> (ctx.gpr[11] & 31u));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[12] + 0u);
    ctx.set_gpr(3, ctx.gpr[13] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E8D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[8]);
      if (branch_taken) {
          goto L_0881E8A0;
      }
      goto L_0881E8E0;
    }
L_0881E8E0:
    ctx.set_gpr(4, ctx.gpr[8] - ctx.gpr[15]);
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    goto L_0881E89C;
L_0881E8F8:
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[24] << 16u);
      if (branch_taken) {
          goto L_0881E878;
      }
      goto L_0881E904;
    }
L_0881E904:
    ctx.set_gpr(10, ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    goto L_0881E878;
L_0881E910:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[9]);
        goto L_0881E824;
    }
    goto L_0881E91C;
L_0881E91C:
    ctx.set_gpr(24, ctx.gpr[14] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    goto L_0881E820;
L_0881E928:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[9]);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(5, ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[6]);
    goto L_0881E378;
L_0881E938:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[9]);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(4, ctx.gpr[2]);
    goto L_0881E748;
L_0881E944:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0881E9E0;
      }
      goto L_0881E95C;
    }
L_0881E95C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881EA70;
      }
      goto L_0881E968;
    }
L_0881E968:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0881E9C8;
      }
      goto L_0881E970;
    }
L_0881E970:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(3, 0u + 0u);
        goto L_0881E9CC;
    }
    goto L_0881E978;
L_0881E978:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < -126 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-126));
      if (branch_taken) {
          goto L_0881EA08;
      }
      goto L_0881E988;
    }
L_0881E988:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] & 127u);
      if (branch_taken) {
          goto L_0881EA70;
      }
      goto L_0881E994;
    }
L_0881E994:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_0881EAB8;
      }
      goto L_0881E9A0;
    }
L_0881E9A0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(63));
    goto L_0881E9A4;
L_0881E9A4:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.set_gpr(5, ctx.gpr[5] >> 1u);
        goto L_0881EAA8;
    }
    goto L_0881E9AC;
L_0881E9AC:
    ctx.set_gpr(2, (ctx.gpr[5] >> 7u) & 0x007FFFFFu);
    ctx.set_gpr(3, ctx.gpr[7] & 255u);
    goto L_0881E9B4;
L_0881E9B4:
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x007FFFFFu) | ((ctx.gpr[2] & 0x007FFFFFu) << 0u));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x7F800000u) | ((ctx.gpr[3] & 0x000000FFu) << 23u));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x80000000u) | ((ctx.gpr[9] & 0x00000001u) << 31u));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E9C8:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0881E9CC;
L_0881E9CC:
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x007FFFFFu) | ((ctx.gpr[2] & 0x007FFFFFu) << 0u));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x7F800000u) | ((ctx.gpr[3] & 0x000000FFu) << 23u));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x80000000u) | ((ctx.gpr[9] & 0x00000001u) << 31u));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E9E0:
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0xFF800000u) | ((0u & 0x000001FFu) << 23u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x007FFFFFu) | ((ctx.gpr[2] & 0x007FFFFFu) << 0u));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x7F800000u) | ((ctx.gpr[3] & 0x000000FFu) << 23u));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x80000000u) | ((ctx.gpr[9] & 0x00000001u) << 31u));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EA08:
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 26 ? 1u : 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_0881EA3C;
      }
      goto L_0881EA1C;
    }
L_0881EA1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[5] >> (ctx.gpr[4] & 31u));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[7] & 127u);
    goto L_0881EA3C;
L_0881EA3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[7] & 128u);
      if (branch_taken) {
          goto L_0881EA8C;
      }
      goto L_0881EA48;
    }
L_0881EA48:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(2, 16383u << 16u);
    goto L_0881EA50;
L_0881EA50:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(2, (ctx.gpr[7] >> 7u) & 0x007FFFFFu);
    goto L_0881EA5C;
L_0881EA5C:
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x007FFFFFu) | ((ctx.gpr[2] & 0x007FFFFFu) << 0u));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x7F800000u) | ((ctx.gpr[3] & 0x000000FFu) << 23u));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x80000000u) | ((ctx.gpr[9] & 0x00000001u) << 31u));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EA70:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x007FFFFFu) | ((ctx.gpr[2] & 0x007FFFFFu) << 0u));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x7F800000u) | ((ctx.gpr[3] & 0x000000FFu) << 23u));
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x80000000u) | ((ctx.gpr[9] & 0x00000001u) << 31u));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EA8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 16383u << 16u);
      if (branch_taken) {
          goto L_0881EA50;
      }
      goto L_0881EA94;
    }
L_0881EA94:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(2, (ctx.gpr[7] >> 7u) & 0x007FFFFFu);
    goto L_0881EA5C;
L_0881EAA8:
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(2, (ctx.gpr[5] >> 7u) & 0x007FFFFFu);
    ctx.set_gpr(3, ctx.gpr[7] & 255u);
    goto L_0881E9B4;
L_0881EAB8:
    ctx.set_gpr(2, ctx.gpr[5] & 128u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(64));
        goto L_0881E9A4;
    }
    goto L_0881EAC4;
L_0881EAC4:
    // nop
    goto L_0881E9A4;
L_0881EACC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, (ctx.gpr[2] >> 23u) & 0x000000FFu);
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(3, (ctx.gpr[3] & ~0xFF800000u) | ((0u & 0x000001FFu) << 23u));
      if (branch_taken) {
          goto L_0881EB38;
      }
      goto L_0881EAE8;
    }
L_0881EAE8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881EB64;
      }
      goto L_0881EAF0;
    }
L_0881EAF0:
    ctx.set_gpr(2, 16383u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] << 7u);
    ctx.set_gpr(7, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-126));
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881EB30;
      }
      goto L_0881EB14;
    }
L_0881EB14:
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-126));
    goto L_0881EB1C;
L_0881EB1C:
    ctx.set_gpr(6, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881EB1C;
      }
      goto L_0881EB2C;
    }
L_0881EB2C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0881EB30;
L_0881EB30:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EB38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[3] << 7u);
      if (branch_taken) {
          goto L_0881EB6C;
      }
      goto L_0881EB44;
    }
L_0881EB44:
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-127));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EB64:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EB6C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, 16u << 16u);
      if (branch_taken) {
          goto L_0881EB80;
      }
      goto L_0881EB74;
    }
L_0881EB74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EB80:
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_0881EB98;
    }
    goto L_0881EB8C;
L_0881EB8C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EB98:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EBA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(31, 0x0881EBC4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0881E944;
L_0881EBC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EBD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0881EBE8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881EACC;
L_0881EBE8:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[8] >> 2u);
    ctx.set_gpr(9, ctx.gpr[2] | ctx.gpr[9]);
    ctx.set_gpr(31, 0x0881EC0Cu);
    ctx.set_gpr(8, ctx.gpr[8] << 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 16u, 0x088200D4u>(ctx, &aot_mem) && ctx.pc == 0x0881EC0Cu) goto L_0881EC0C;
    return;
L_0881EC0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EC18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(15, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0881ED40;
      }
      goto L_0881EC40;
    }
L_0881EC40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881EE9C;
      }
      goto L_0881EC4C;
    }
L_0881EC4C:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[10] | ctx.gpr[11]);
      if (branch_taken) {
          goto L_0881ED10;
      }
      goto L_0881EC54;
    }
L_0881EC54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_0881ED14;
      }
      goto L_0881EC5C;
    }
L_0881EC5C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < -1022 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_0881ED84;
      }
      goto L_0881EC6C;
    }
L_0881EC6C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 1024 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[10] & 255u);
      if (branch_taken) {
          goto L_0881EE9C;
      }
      goto L_0881EC78;
    }
L_0881EC78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(1023));
      if (branch_taken) {
          goto L_0881EED8;
      }
      goto L_0881EC88;
    }
L_0881EC88:
    ctx.set_gpr(2, ctx.gpr[10] + static_cast<std::uint32_t>(127));
    goto L_0881EC8C;
L_0881EC8C:
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 8191u << 16u);
    goto L_0881ECA0;
L_0881ECA0:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[11] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(7, ctx.gpr[11] >> 8u);
        goto L_0881ECD0;
    }
    goto L_0881ECB0;
L_0881ECB0:
    ctx.set_gpr(4, ctx.gpr[11] << 31u);
    ctx.set_gpr(2, ctx.gpr[10] >> 1u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[11] >> 1u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(7, ctx.gpr[11] >> 8u);
    goto L_0881ECD0;
L_0881ECD0:
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(2, ctx.gpr[11] << 24u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[10] >> 8u);
    ctx.set_gpr(6, ctx.gpr[2] | ctx.gpr[6]);
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x000FFFFFu) | ((ctx.gpr[7] & 0x000FFFFFu) << 0u));
    ctx.set_gpr(2, ctx.gpr[8] & 65535u);
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x7FF00000u) | ((ctx.gpr[2] & 0x000007FFu) << 20u));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x80000000u) | ((ctx.gpr[25] & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[15] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881ED10:
    ctx.set_gpr(7, 0u + 0u);
    goto L_0881ED14;
L_0881ED14:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x000FFFFFu) | ((ctx.gpr[7] & 0x000FFFFFu) << 0u));
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x7FF00000u) | ((ctx.gpr[2] & 0x000007FFu) << 20u));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x80000000u) | ((ctx.gpr[25] & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[15] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881ED40:
    ctx.set_gpr(2, 7u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(7, ctx.gpr[11] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x000FFFFFu) | ((ctx.gpr[7] & 0x000FFFFFu) << 0u));
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x7FF00000u) | ((ctx.gpr[2] & 0x000007FFu) << 20u));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x80000000u) | ((ctx.gpr[25] & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[15] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881ED84:
    ctx.set_gpr(24, ctx.gpr[2] - ctx.gpr[7]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[24]) < 57 ? 1u : 0u);
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(13, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_0881EE10;
      }
      goto L_0881EDA0;
    }
L_0881EDA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[24] & 32u);
    ctx.set_gpr(2, ctx.gpr[4] << (ctx.gpr[24] & 31u));
    ctx.set_gpr(3, 0u + 0u);
    if (ctx.gpr[7] != 0u) ctx.set_gpr(3, ctx.gpr[2]);
    if (ctx.gpr[7] != 0u) ctx.set_gpr(2, 0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[11] << 1u);
    ctx.set_gpr(2, ~(0u | ctx.gpr[24]));
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[11] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(8, ctx.gpr[10] >> (ctx.gpr[24] & 31u));
    ctx.set_gpr(9, ctx.gpr[11] >> (ctx.gpr[24] & 31u));
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    if (ctx.gpr[7] != 0u) ctx.set_gpr(8, ctx.gpr[9]);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    if (ctx.gpr[7] != 0u) ctx.set_gpr(9, 0u);
      if (branch_taken) {
          goto L_0881EECC;
      }
      goto L_0881EE00;
    }
L_0881EE00:
    ctx.set_gpr(12, ctx.gpr[8] | ctx.gpr[16]);
    ctx.set_gpr(13, ctx.gpr[9] | ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[12] & 255u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0881EE10;
L_0881EE10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[12] + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_0881EE78;
      }
      goto L_0881EE1C;
    }
L_0881EE1C:
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[12] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[13]);
    ctx.set_gpr(12, ctx.gpr[2] + 0u);
    ctx.set_gpr(13, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, ctx.gpr[13] >> 8u);
    goto L_0881EE30;
L_0881EE30:
    ctx.set_gpr(2, ctx.gpr[13] << 24u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, ctx.gpr[12] >> 8u);
    ctx.set_gpr(6, ctx.gpr[2] | ctx.gpr[6]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(2, 4095u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[13] ? 1u : 0u);
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x000FFFFFu) | ((ctx.gpr[7] & 0x000FFFFFu) << 0u));
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x7FF00000u) | ((ctx.gpr[2] & 0x000007FFu) << 20u));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x80000000u) | ((ctx.gpr[25] & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[15] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EE78:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881EE1C;
      }
      goto L_0881EE80;
    }
L_0881EE80:
    ctx.set_gpr(2, ctx.gpr[12] & 256u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, ctx.gpr[13] >> 8u);
      if (branch_taken) {
          goto L_0881EE30;
      }
      goto L_0881EE94;
    }
L_0881EE94:
    ctx.set_gpr(2, ctx.gpr[12] + static_cast<std::uint32_t>(128));
    goto L_0881EE1C;
L_0881EE9C:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x000FFFFFu) | ((ctx.gpr[7] & 0x000FFFFFu) << 0u));
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x7FF00000u) | ((ctx.gpr[2] & 0x000007FFu) << 20u));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x80000000u) | ((ctx.gpr[25] & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, ctx.gpr[15] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EECC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    goto L_0881EE00;
L_0881EED8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, ctx.gpr[10] + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_0881EC8C;
      }
      goto L_0881EEE0;
    }
L_0881EEE0:
    ctx.set_gpr(2, ctx.gpr[10] & 256u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 8191u << 16u);
        goto L_0881ECA0;
    }
    goto L_0881EEF4;
L_0881EEF4:
    ctx.set_gpr(2, ctx.gpr[10] + static_cast<std::uint32_t>(128));
    goto L_0881EC8C;
L_0881EEFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, (ctx.gpr[2] >> 20u) & 0x000007FFu);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(9, (ctx.gpr[9] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
      if (branch_taken) {
          goto L_0881EF98;
      }
      goto L_0881EF20;
    }
L_0881EF20:
    ctx.set_gpr(2, ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881EFD4;
      }
      goto L_0881EF2C;
    }
L_0881EF2C:
    ctx.set_gpr(2, 4095u << 16u);
    ctx.set_gpr(3, ctx.gpr[8] >> 24u);
    ctx.set_gpr(7, ctx.gpr[9] << 8u);
    ctx.set_gpr(5, ctx.gpr[2] | 65535u);
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[7]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1022));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[8] << 8u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881EF8C;
      }
      goto L_0881EF5C;
    }
L_0881EF5C:
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1022));
    goto L_0881EF64;
L_0881EF64:
    ctx.set_gpr(2, ctx.gpr[6] >> 31u);
    ctx.set_gpr(5, ctx.gpr[7] << 1u);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881EF64;
      }
      goto L_0881EF88;
    }
L_0881EF88:
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0881EF8C;
L_0881EF8C:
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EF98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2047));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[8] >> 24u);
      if (branch_taken) {
          goto L_0881EFDC;
      }
      goto L_0881EFA4;
    }
L_0881EFA4:
    ctx.set_gpr(5, ctx.gpr[9] << 8u);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(6, 4096u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1023));
    ctx.set_gpr(4, ctx.gpr[8] << 8u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EFD4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EFDC:
    ctx.set_gpr(2, ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, 8u << 16u);
      if (branch_taken) {
          goto L_0881EFF4;
      }
      goto L_0881EFE8;
    }
L_0881EFE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EFF4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[9] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_0881F018;
    }
    goto L_0881F008;
L_0881F008:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F018:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F028:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[4] + 0u);
    ctx.set_gpr(14, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[7] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(24, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_0881F1E4;
      }
      goto L_0881F040;
    }
L_0881F040:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(12, ctx.gpr[14] + 0u);
        goto L_0881F1EC;
    }
    goto L_0881F050;
L_0881F050:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0881F1F4;
      }
      goto L_0881F05C;
    }
L_0881F05C:
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(12, ctx.gpr[14] + 0u);
        goto L_0881F1EC;
    }
    goto L_0881F064;
L_0881F064:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0881F298;
      }
      goto L_0881F070;
    }
L_0881F070:
    if (ctx.gpr[7] == ctx.gpr[2]) {
    ctx.set_gpr(12, ctx.gpr[14] + 0u);
        goto L_0881F1EC;
    }
    goto L_0881F078;
L_0881F078:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[25] - ctx.gpr[15]);
    ctx.set_gpr(2, 0u - ctx.gpr[13]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[13]) > static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[13] : ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0881F21C;
      }
      goto L_0881F0A4;
    }
L_0881F0A4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[25]) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(25, ctx.gpr[15] + 0u);
        goto L_0881F328;
    }
    goto L_0881F0B0;
L_0881F0B0:
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    goto L_0881F0B8;
L_0881F0B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    goto L_0881F0BC;
L_0881F0BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_0881F300;
      }
      goto L_0881F0C8;
    }
L_0881F0C8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(2, ctx.gpr[8] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_0881F2E8;
      }
      goto L_0881F0D0;
    }
L_0881F0D0:
    ctx.set_gpr(2, ctx.gpr[10] - ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[10] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[11] - ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881F0E8;
L_0881F0E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.set_gpr(2, 0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0881F344;
      }
      goto L_0881F0F0;
    }
L_0881F0F0:
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(8), ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(4), 0u);
    goto L_0881F100;
L_0881F100:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 4095u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[2] | 65535u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 8191u << 16u);
      if (branch_taken) {
          goto L_0881F198;
      }
      goto L_0881F12C;
    }
L_0881F12C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0881F334;
      }
      goto L_0881F134;
    }
L_0881F134:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(8)));
    goto L_0881F138;
L_0881F138:
    ctx.set_gpr(4, ctx.gpr[10] >> 31u);
    goto L_0881F13C;
L_0881F13C:
    ctx.set_gpr(3, ctx.gpr[11] << 1u);
    goto L_0881F140;
L_0881F140:
    ctx.set_gpr(2, ctx.gpr[10] << 1u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 4095u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[2] | 65535u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0881F194;
      }
      goto L_0881F184;
    }
L_0881F184:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.set_gpr(4, ctx.gpr[10] >> 31u);
      if (branch_taken) {
          goto L_0881F13C;
      }
      goto L_0881F18C;
    }
L_0881F18C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(3, ctx.gpr[11] << 1u);
      if (branch_taken) {
          goto L_0881F140;
      }
      goto L_0881F194;
    }
L_0881F194:
    ctx.set_gpr(2, 8191u << 16u);
    goto L_0881F198;
L_0881F198:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[11] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(12, ctx.gpr[24] + 0u);
      if (branch_taken) {
          goto L_0881F1E4;
      }
      goto L_0881F1B0;
    }
L_0881F1B0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[11] << 31u);
    ctx.set_gpr(2, ctx.gpr[10] >> 1u);
    ctx.set_gpr(6, ctx.gpr[10] & 1u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[11] >> 1u);
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    goto L_0881F1E4;
L_0881F1E4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[12] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F1EC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[12] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F1F4:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0881F1E4;
      }
      goto L_0881F1FC;
    }
L_0881F1FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0881F1E4;
      }
      goto L_0881F20C;
    }
L_0881F20C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(12, ctx.gpr[2] + static_cast<std::uint32_t>(3464));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[12] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F21C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[25]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_0881F254;
      }
      goto L_0881F228;
    }
L_0881F228:
    ctx.set_gpr(6, ctx.gpr[11] << 31u);
    ctx.set_gpr(2, ctx.gpr[10] >> 1u);
    ctx.set_gpr(4, ctx.gpr[10] & 1u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[11] >> 1u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[4] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[7];
    ctx.set_gpr(11, ctx.gpr[5] | ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881F228;
      }
      goto L_0881F250;
    }
L_0881F250:
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[7]);
    goto L_0881F254;
L_0881F254:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
        goto L_0881F0BC;
    }
    goto L_0881F260;
L_0881F260:
    ctx.set_gpr(13, ctx.gpr[15] - ctx.gpr[25]);
    ctx.set_gpr(7, 0u + 0u);
    goto L_0881F268;
L_0881F268:
    ctx.set_gpr(6, ctx.gpr[9] << 31u);
    ctx.set_gpr(2, ctx.gpr[8] >> 1u);
    ctx.set_gpr(4, ctx.gpr[8] & 1u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[9] >> 1u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[4] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[7];
    ctx.set_gpr(9, ctx.gpr[5] | ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881F268;
      }
      goto L_0881F290;
    }
L_0881F290:
    ctx.set_gpr(25, ctx.gpr[25] + ctx.gpr[7]);
    goto L_0881F0B8;
L_0881F298:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0881F1E4;
      }
      goto L_0881F2A0;
    }
L_0881F2A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(12, ctx.gpr[24] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[12] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F2E8:
    ctx.set_gpr(4, ctx.gpr[8] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[9] - ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881F0E8;
L_0881F300:
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(8), ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_0881F194;
L_0881F328:
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    goto L_0881F0B8;
L_0881F334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 8191u << 16u);
      if (branch_taken) {
          goto L_0881F198;
      }
      goto L_0881F33C;
    }
L_0881F33C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(8)));
    goto L_0881F138;
L_0881F344:
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, 0u - ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(8), ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_0881F100;
L_0881F368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.set_gpr(31, 0x0881F39Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_0881EEFC;
L_0881F39C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881F3A8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881EEFC;
L_0881F3A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(31, 0x0881F3C4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_0881F028;
L_0881F3C4:
    ctx.set_gpr(31, 0x0881F3CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0881EC18;
L_0881F3CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F3E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.set_gpr(31, 0x0881F414u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_0881EEFC;
L_0881F414:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881F420u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881EEFC;
L_0881F420:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0881F430u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0881F028;
L_0881F430:
    ctx.set_gpr(31, 0x0881F438u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0881EC18;
L_0881F438:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F44C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(31, 0x0881F480u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0881EEFC;
L_0881F480:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881F48Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0881EEFC;
L_0881F48C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0881F708;
      }
      goto L_0881F49C;
    }
L_0881F49C:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881F6CC;
      }
      goto L_0881F4A8;
    }
L_0881F4A8:
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_0881F700;
    }
    goto L_0881F4B0;
L_0881F4B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881F6C4;
      }
      goto L_0881F4B8;
    }
L_0881F4B8:
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_0881F70C;
    }
    goto L_0881F4C0;
L_0881F4C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0881F6CC;
      }
      goto L_0881F4C8;
    }
L_0881F4C8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[8]) * static_cast<std::uint64_t>(ctx.gpr[7]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(7, ctx.hi);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[10]) * static_cast<std::uint64_t>(ctx.gpr[3]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(15, ctx.hi);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[3]) * static_cast<std::uint64_t>(ctx.gpr[2]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(24, ctx.gpr[14] + ctx.gpr[6]);
    ctx.set_gpr(25, ctx.gpr[15] + ctx.gpr[7]);
    ctx.set_gpr(12, ctx.gpr[24] < ctx.gpr[14] ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[25]);
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(17, ctx.hi);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[8]) * static_cast<std::uint64_t>(ctx.gpr[10]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(6, ctx.gpr[12] < ctx.gpr[15] ? 1u : 0u);
    ctx.set_gpr(25, ctx.gpr[12] + 0u);
    ctx.set_gpr(8, ctx.lo);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(9, ctx.hi);
      if (branch_taken) {
          goto L_0881F768;
      }
      goto L_0881F52C;
    }
L_0881F52C:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[15];
    ctx.set_gpr(2, ctx.gpr[24] < ctx.gpr[14] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881F760;
      }
      goto L_0881F534;
    }
L_0881F534:
    ctx.set_gpr(12, 0u + 0u);
    goto L_0881F538;
L_0881F538:
    ctx.set_gpr(13, 0u + 0u);
    goto L_0881F53C;
L_0881F53C:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[9] + ctx.gpr[24]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(11, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0881F748;
      }
      goto L_0881F560;
    }
L_0881F560:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881F740;
      }
      goto L_0881F568;
    }
L_0881F568:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[25]);
    goto L_0881F56C;
L_0881F56C:
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, ctx.gpr[4] < ctx.gpr[12] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(2, 8191u << 16u);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] | 65535u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0881F620;
      }
      goto L_0881F5CC;
    }
L_0881F5CC:
    ctx.set_gpr(13, ctx.gpr[4] + 0u);
    ctx.set_gpr(14, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[9] << 31u);
    goto L_0881F5D8;
L_0881F5D8:
    ctx.set_gpr(4, ctx.gpr[8] >> 1u);
    ctx.set_gpr(4, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[9] >> 1u);
    ctx.set_gpr(2, ctx.gpr[8] & 1u);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(12, ctx.gpr[13] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[11] << 31u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881F614;
      }
      goto L_0881F600;
    }
L_0881F600:
    ctx.set_gpr(4, ctx.gpr[10] >> 1u);
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[11] >> 1u);
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    ctx.set_gpr(11, ctx.gpr[14] | ctx.gpr[5]);
    goto L_0881F614;
L_0881F614:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(2, ctx.gpr[9] << 31u);
      if (branch_taken) {
          goto L_0881F5D8;
      }
      goto L_0881F61C;
    }
L_0881F61C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    goto L_0881F620;
L_0881F620:
    ctx.set_gpr(2, 4095u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_0881F688;
      }
      goto L_0881F634;
    }
L_0881F634:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(13, ctx.gpr[2] + 0u);
    goto L_0881F63C;
L_0881F63C:
    ctx.set_gpr(4, ctx.gpr[8] >> 31u);
    ctx.set_gpr(2, ctx.gpr[10] >> 31u);
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(7, ctx.gpr[11] << 1u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[2] | ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[8] << 1u);
    ctx.set_gpr(6, ctx.gpr[10] << 1u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] | 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) < 0;
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881F7CC;
      }
      goto L_0881F670;
    }
L_0881F670:
    ctx.set_gpr(2, ctx.gpr[13] < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(11, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_0881F63C;
      }
      goto L_0881F680;
    }
L_0881F680:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[12]);
    ctx.set_gpr(4, ctx.gpr[8] & 255u);
    goto L_0881F688;
L_0881F688:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_0881F774;
      }
      goto L_0881F694;
    }
L_0881F694:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_0881F698;
L_0881F698:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_0881F6A8;
L_0881F6A8:
    ctx.set_gpr(31, 0x0881F6B0u);
    // nop
    goto L_0881EC18;
L_0881F6B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F6C4:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0881F738;
      }
      goto L_0881F6CC;
    }
L_0881F6CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_0881F6E4;
L_0881F6E4:
    ctx.set_gpr(31, 0x0881F6ECu);
    // nop
    goto L_0881EC18;
L_0881F6EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F700:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0881F738;
      }
      goto L_0881F708;
    }
L_0881F708:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0881F70C;
L_0881F70C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(31, 0x0881F724u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_0881EC18;
L_0881F724:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F738:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3464));
    goto L_0881F6E4;
L_0881F740:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[25]);
      if (branch_taken) {
          goto L_0881F56C;
      }
      goto L_0881F748;
    }
L_0881F748:
    ctx.set_gpr(2, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[12] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[13]);
    ctx.set_gpr(12, ctx.gpr[2] + 0u);
    ctx.set_gpr(13, ctx.gpr[3] + 0u);
    goto L_0881F568;
L_0881F760:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(12, 0u + 0u);
        goto L_0881F538;
    }
    goto L_0881F768;
L_0881F768:
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(1));
    goto L_0881F53C;
L_0881F774:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0881F698;
      }
      goto L_0881F77C;
    }
L_0881F77C:
    ctx.set_gpr(2, ctx.gpr[8] & 256u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0881F698;
      }
      goto L_0881F790;
    }
L_0881F790:
    ctx.set_gpr(2, ctx.gpr[10] | ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0881F698;
      }
      goto L_0881F79C;
    }
L_0881F79C:
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[9]);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[4] + 0u);
    ctx.set_gpr(8, (ctx.gpr[8] & ~0x000000FFu) | ((0u & 0x000000FFu) << 0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_0881F6A8;
L_0881F7CC:
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    goto L_0881F670;
L_0881F7D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(31, 0x0881F80Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0881EEFC;
L_0881F80C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881F818u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881EEFC;
L_0881F818:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0881F97C;
      }
      goto L_0881F828;
    }
L_0881F828:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881F97C;
      }
      goto L_0881F838;
    }
L_0881F838:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881F998;
      }
      goto L_0881F850;
    }
L_0881F850:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0881F998;
      }
      goto L_0881F85C;
    }
L_0881F85C:
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_0881F9DC;
    }
    goto L_0881F864;
L_0881F864:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0881F9C0;
      }
      goto L_0881F86C;
    }
L_0881F86C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(14, ctx.gpr[9] < ctx.gpr[13] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881FA10;
      }
      goto L_0881F890;
    }
L_0881F890:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[13];
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[12] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881FA08;
      }
      goto L_0881F898;
    }
L_0881F898:
    ctx.set_gpr(10, 0u + 0u);
    goto L_0881F89C;
L_0881F89C:
    ctx.set_gpr(11, 4096u << 16u);
    ctx.set_gpr(24, 0u + 0u);
    ctx.set_gpr(25, 0u + 0u);
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(61));
    goto L_0881F8AC;
L_0881F8AC:
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(3, ctx.gpr[11] << 31u);
      if (branch_taken) {
          goto L_0881F8E8;
      }
      goto L_0881F8B8;
    }
L_0881F8B8:
    ctx.set_gpr(4, ctx.gpr[8] - ctx.gpr[12]);
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[9] - ctx.gpr[13]);
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[24] | ctx.gpr[10]);
    ctx.set_gpr(7, ctx.gpr[25] | ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[13];
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[12] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881F9CC;
      }
      goto L_0881F8D8;
    }
L_0881F8D8:
    ctx.set_gpr(24, ctx.gpr[6] + 0u);
    goto L_0881F8DC;
L_0881F8DC:
    ctx.set_gpr(25, ctx.gpr[7] + 0u);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    goto L_0881F8E8;
L_0881F8E8:
    ctx.set_gpr(4, ctx.gpr[10] >> 1u);
    goto L_0881F8EC;
L_0881F8EC:
    ctx.set_gpr(2, ctx.gpr[8] >> 31u);
    ctx.set_gpr(7, ctx.gpr[9] << 1u);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[11] >> 1u);
    ctx.set_gpr(7, ctx.gpr[2] | ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[8] << 1u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(11, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0881F920;
      }
      goto L_0881F918;
    }
L_0881F918:
    ctx.set_gpr(14, ctx.gpr[9] < ctx.gpr[13] ? 1u : 0u);
    goto L_0881F8AC;
L_0881F920:
    ctx.set_gpr(4, ctx.gpr[24] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_0881F970;
      }
      goto L_0881F930;
    }
L_0881F930:
    if (ctx.gpr[5] != 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[24]);
        goto L_0881F974;
    }
    goto L_0881F938;
L_0881F938:
    ctx.set_gpr(2, ctx.gpr[24] & 256u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[24]);
        goto L_0881F974;
    }
    goto L_0881F94C;
L_0881F94C:
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[7]);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[24]);
        goto L_0881F974;
    }
    goto L_0881F958;
L_0881F958:
    ctx.set_gpr(2, ctx.gpr[24] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[24] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[25]);
    ctx.set_gpr(24, ctx.gpr[2] + 0u);
    ctx.set_gpr(24, (ctx.gpr[24] & ~0x000000FFu) | ((0u & 0x000000FFu) << 0u));
    ctx.set_gpr(25, ctx.gpr[4] + 0u);
    goto L_0881F970;
L_0881F970:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[24]);
    goto L_0881F974;
L_0881F974:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[25]);
    goto L_0881F97C;
L_0881F97C:
    ctx.set_gpr(31, 0x0881F984u);
    // nop
    goto L_0881EC18;
L_0881F984:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F998:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0881F97C;
      }
      goto L_0881F9A0;
    }
L_0881F9A0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0881F9ACu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3464));
    goto L_0881EC18;
L_0881F9AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F9C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    goto L_0881F97C;
L_0881F9CC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[10] >> 1u);
        goto L_0881F8EC;
    }
    goto L_0881F9D4;
L_0881F9D4:
    ctx.set_gpr(24, ctx.gpr[6] + 0u);
    goto L_0881F8DC;
L_0881F9DC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(31, 0x0881F9F4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    goto L_0881EC18;
L_0881F9F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FA08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(10, 0u + 0u);
      if (branch_taken) {
          goto L_0881F89C;
      }
      goto L_0881FA10;
    }
L_0881FA10:
    ctx.set_gpr(2, ctx.gpr[8] >> 31u);
    ctx.set_gpr(5, ctx.gpr[9] << 1u);
    ctx.set_gpr(5, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[8] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    ctx.set_gpr(14, ctx.gpr[5] < ctx.gpr[13] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_0881F898;
L_0881FA38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0881FA94;
      }
      goto L_0881FA48;
    }
L_0881FA48:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881FA94;
      }
      goto L_0881FA58;
    }
L_0881FA58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0881FA9C;
      }
      goto L_0881FA64;
    }
L_0881FA64:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881FAC0;
      }
      goto L_0881FA6C;
    }
L_0881FA6C:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0881FAB8;
      }
      goto L_0881FA74;
    }
L_0881FA74:
    if (ctx.gpr[6] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0881FAA8;
    }
    goto L_0881FA7C;
L_0881FA7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_0881FAE0;
    }
    goto L_0881FA8C;
L_0881FA8C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881FAB0;
      }
      goto L_0881FA94;
    }
L_0881FA94:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FA9C:
    if (ctx.gpr[6] == ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_0881FAD4;
    }
    goto L_0881FAA4;
L_0881FAA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0881FAA8;
L_0881FAA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FA94;
      }
      goto L_0881FAB0;
    }
L_0881FAB0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FAB8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0881FB2C;
      }
      goto L_0881FAC0;
    }
L_0881FAC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FAB0;
      }
      goto L_0881FACC;
    }
L_0881FACC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FAD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FAE0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0881FA8C;
      }
      goto L_0881FAF0;
    }
L_0881FAF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881FB3C;
      }
      goto L_0881FAF8;
    }
L_0881FAF8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0881FA8C;
      }
      goto L_0881FB10;
    }
L_0881FB10:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881FB4C;
      }
      goto L_0881FB18;
    }
L_0881FB18:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    goto L_0881FB1C;
L_0881FB1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881FB3C;
      }
      goto L_0881FB24;
    }
L_0881FB24:
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
        goto L_0881FB34;
    }
    goto L_0881FB2C;
L_0881FB2C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FB34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FB2C;
      }
      goto L_0881FB3C;
    }
L_0881FB3C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FAB0;
      }
      goto L_0881FB44;
    }
L_0881FB44:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FB4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
      if (branch_taken) {
          goto L_0881FB1C;
      }
      goto L_0881FB54;
    }
L_0881FB54:
    // nop
    goto L_0881FA8C;
L_0881FB5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(31, 0x0881FB90u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0881EEFC;
L_0881FB90:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881FB9Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881EEFC;
L_0881FB9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0881FBA8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881FA38;
L_0881FBA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FBBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(31, 0x0881FBF0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0881EEFC;
L_0881FBF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881FBFCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881EEFC;
L_0881FBFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881FC2C;
      }
      goto L_0881FC0C;
    }
L_0881FC0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881FC2C;
      }
      goto L_0881FC20;
    }
L_0881FC20:
    ctx.set_gpr(31, 0x0881FC28u);
    // nop
    goto L_0881FA38;
L_0881FC28:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0881FC2C;
L_0881FC2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FC44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(31, 0x0881FC78u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0881EEFC;
L_0881FC78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881FC84u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881EEFC;
L_0881FC84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881FCB4;
      }
      goto L_0881FC94;
    }
L_0881FC94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881FCB4;
      }
      goto L_0881FCA8;
    }
L_0881FCA8:
    ctx.set_gpr(31, 0x0881FCB0u);
    // nop
    goto L_0881FA38;
L_0881FCB0:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0881FCB4;
L_0881FCB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FCCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(31, 0x0881FD00u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0881EEFC;
L_0881FD00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881FD0Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881EEFC;
L_0881FD0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881FD34;
      }
      goto L_0881FD1C;
    }
L_0881FD1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FD34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881FD1C;
      }
      goto L_0881FD48;
    }
L_0881FD48:
    ctx.set_gpr(31, 0x0881FD50u);
    // nop
    goto L_0881FA38;
L_0881FD50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FD6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(31, 0x0881FDA0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0881EEFC;
L_0881FDA0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881FDACu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881EEFC;
L_0881FDAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881FDD4;
      }
      goto L_0881FDBC;
    }
L_0881FDBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FDD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881FDBC;
      }
      goto L_0881FDE8;
    }
L_0881FDE8:
    ctx.set_gpr(31, 0x0881FDF0u);
    // nop
    goto L_0881FA38;
L_0881FDF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FE0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(31, 0x0881FE40u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0881EEFC;
L_0881FE40:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881FE4Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881EEFC;
L_0881FE4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881FE7C;
      }
      goto L_0881FE5C;
    }
L_0881FE5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881FE7C;
      }
      goto L_0881FE70;
    }
L_0881FE70:
    ctx.set_gpr(31, 0x0881FE78u);
    // nop
    goto L_0881FA38;
L_0881FE78:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0881FE7C;
L_0881FE7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FE94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(31, 0x0881FEC8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0881EEFC;
L_0881FEC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881FED4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881EEFC;
L_0881FED4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881FF04;
      }
      goto L_0881FEE4;
    }
L_0881FEE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881FF04;
      }
      goto L_0881FEF8;
    }
L_0881FEF8:
    ctx.set_gpr(31, 0x0881FF00u);
    // nop
    goto L_0881FA38;
L_0881FF00:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0881FF04;
L_0881FF04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FF1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(3, ctx.gpr[4] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881FF54;
      }
      goto L_0881FF38;
    }
L_0881FF38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0881FF40;
L_0881FF40:
    ctx.set_gpr(31, 0x0881FF48u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0881EC18;
L_0881FF48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_0881FF4C;
L_0881FF4C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FF54:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881FFDC;
      }
      goto L_0881FF60;
    }
L_0881FF60:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, 0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881FFEC;
      }
      goto L_0881FF6C;
    }
L_0881FF6C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_0881FF78;
L_0881FF78:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 4095u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0881FF40;
      }
      goto L_0881FF90;
    }
L_0881FF90:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0881FF94;
L_0881FF94:
    ctx.set_gpr(4, ctx.gpr[6] >> 31u);
    ctx.set_gpr(3, ctx.gpr[7] << 1u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(4, 4095u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 65535u);
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881FF94;
      }
      goto L_0881FFCC;
    }
L_0881FFCC:
    ctx.set_gpr(31, 0x0881FFD4u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0881EC18;
L_0881FFD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_0881FF4C;
L_0881FFDC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_0881FF78;
L_0881FFEC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3460)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3456)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0006(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0006_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_6(Runtime &runtime) {
    runtime.register_generated_unit(6u, 0x0881C000u, 16384u, &recomp_unit_0006, &recomp_unit_0006_entry);
    runtime.register_function(0x0881C004u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C048u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C05Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C104u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C114u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C12Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C134u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C188u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C20Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C218u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C230u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C240u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C24Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C258u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C260u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C268u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C280u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C28Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C298u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C304u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C36Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C39Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C420u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C42Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C434u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C43Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C444u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C448u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C44Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C450u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C46Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C474u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C498u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C500u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C508u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C514u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C540u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C550u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C564u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C568u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C578u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C588u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C58Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C598u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C5A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C5B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C5C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C5DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C5E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C610u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C61Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C628u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C63Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C66Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C698u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C704u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C708u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C718u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C71Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C724u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C734u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C740u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C744u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C760u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C770u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C784u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C78Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C794u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C79Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C81Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C82Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C858u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C86Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C884u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C88Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C894u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C89Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C90Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C920u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C944u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C94Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C960u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C984u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C9D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C9DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C9E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA3Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CABCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CACCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB08u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC3Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC68u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CCA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CCB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CCD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CCE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CCF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD60u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDDCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CEA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CEB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CEC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CEECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D018u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D01Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D024u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D034u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D040u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D04Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D050u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D078u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D07Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D084u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D094u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D108u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D114u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D11Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D144u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D160u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D168u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D16Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D198u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D19Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D204u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D214u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D220u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D230u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D23Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D24Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D254u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D27Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D288u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D294u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D298u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D310u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D31Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D324u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D328u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D33Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D344u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D358u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D364u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D378u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D37Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D40Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D410u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D418u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D428u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D434u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D43Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D440u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D44Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D468u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D46Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D500u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D504u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D50Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D51Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D520u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D53Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D544u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D548u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D550u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D55Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D560u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D568u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D574u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D580u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D58Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D598u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D60Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D618u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D620u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D630u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D634u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D640u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D648u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D670u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D680u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D688u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D68Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D714u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D718u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D720u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D730u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D740u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D750u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D758u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D784u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D790u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D798u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D804u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D80Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D834u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D840u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D84Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D858u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D864u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D870u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D878u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D904u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D914u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D924u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D92Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D930u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D958u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D95Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D964u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D974u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D984u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D998u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA58u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DAC8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DACCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DAD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DAE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DAF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DAF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB60u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBC8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC30u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC3Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD08u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD58u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD60u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE08u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEC8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DED0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF50u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF58u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF68u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFC8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E008u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E01Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E028u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E030u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E034u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E048u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E050u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E064u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E070u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E07Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E098u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E09Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E104u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E108u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E130u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E134u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E13Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E14Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E150u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E16Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E174u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E178u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E184u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E198u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E19Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E200u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E204u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E22Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E230u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E238u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E248u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E254u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E25Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E260u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E26Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E278u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E27Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E288u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E294u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E304u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E310u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E318u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E328u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E32Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E338u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E340u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E368u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E378u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E380u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E384u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E40Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E410u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E418u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E428u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E438u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E440u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E45Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E46Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E47Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E48Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E494u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E504u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E514u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E51Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E544u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E560u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E56Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E570u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E59Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E600u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E608u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E618u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E628u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E634u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E648u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E654u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E65Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E660u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E674u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E67Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E690u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E69Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E6B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E6BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E6C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E6D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E6ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E6F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E72Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E730u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E738u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E748u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E754u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E758u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E780u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E784u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E78Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E79Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E804u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E808u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E810u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E820u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E824u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E82Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E830u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E858u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E85Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E864u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E874u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E878u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E894u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E89Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E904u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E910u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E91Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E928u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E938u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E944u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E95Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E968u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E970u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E978u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E988u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E994u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA08u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA3Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA50u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EACCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB30u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EBA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EBC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EBD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EBE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE30u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EECCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EED8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EEE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EEF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EEFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFDCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F008u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F018u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F028u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F040u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F050u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F05Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F064u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F070u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F078u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F100u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F12Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F134u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F138u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F13Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F140u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F184u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F18Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F194u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F198u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F20Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F21Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F228u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F250u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F254u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F260u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F268u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F290u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F298u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F300u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F328u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F334u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F33Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F344u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F368u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F39Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F414u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F420u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F430u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F438u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F44Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F480u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F48Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F49Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F52Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F534u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F538u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F53Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F560u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F568u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F56Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F600u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F614u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F61Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F620u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F634u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F63Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F670u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F680u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F688u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F694u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F698u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F700u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F708u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F70Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F724u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F738u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F740u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F748u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F760u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F768u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F774u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F77Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F790u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F79Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F7CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F7D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F80Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F818u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F828u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F838u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F850u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F85Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F864u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F86Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F890u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F898u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F89Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F918u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F920u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F930u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F938u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F94Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F958u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F970u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F974u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F97Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F984u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F998u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA08u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA58u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FACCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB3Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FC94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD50u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FEC8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FED4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FEE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FEF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF60u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFDCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFECu, &recomp_unit_0006, "recomp_unit_0006");
}
} // namespace psprecomp
