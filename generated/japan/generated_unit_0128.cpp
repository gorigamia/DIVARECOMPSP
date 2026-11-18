#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0128[4094] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0,
    10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0,
    0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0,
    0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0,
    0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52,
    0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0,
    62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0,
    0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0,
    0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0,
    140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0,
    156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0,
    172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0,
    188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0,
    204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0,
    220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0,
    236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0,
    252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0,
    268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0,
    284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0,
    300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0,
    316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0,
    332, 0, 333, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0,
    0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0,
    0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 391,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0,
    0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0,
    0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 416, 0, 417, 0,
    0, 418, 0, 0, 419, 0, 420, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0,
    0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0,
    0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0,
    0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0,
    0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0,
    0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0,
    0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473,
    0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0,
    0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0,
    0, 0, 493, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0, 502, 0, 0, 503, 0, 504, 0, 0, 505, 0, 506, 0, 0,
    507, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0,
    0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0,
    0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0,
    523, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0,
    529, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 535,
    0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0,
    0, 0, 543, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0,
    548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0,
    0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558,
    0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0,
    564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0,
    0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0,
    0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 583, 0, 0, 584, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0,
    0, 588, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0,
    0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0,
    600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0,
    0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608,
    0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0,
    0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619,
    0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0,
    623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0,
    0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0,
    0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0,
    0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0,
    645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0,
    0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0,
    0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0,
    0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0,
    0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 0,
    0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0,
    0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0,
    0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0,
    0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701,
    0, 0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0,
    0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0,
    0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726, 0, 0,
    0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0,
    0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733,
    0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744,
    0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 747, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0,
    752, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0,
    0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 763, 0,
    0, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 767, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 770, 0, 771, 0, 0, 0, 0, 0, 772, 0,
    0, 773, 0, 0, 774, 0, 0, 775, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0, 0, 0, 0, 0, 0, 780, 0, 0,
    0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 784, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789,
    0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0,
    0, 793, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0, 803, 0, 0, 804, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0,
    807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0,
    0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 823, 0,
    824, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0,
    0, 830, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0,
    0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 837, 0, 838, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 840, 0,
    0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 843, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 0, 0, 850,
    0, 851, 0, 0, 852, 0, 0, 853, 0, 854, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 857, 0, 858, 0, 0, 0,
    0, 0, 859, 0, 0, 0, 0, 860, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0,
    0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 867, 0, 0, 0, 868, 0,
    0, 0, 869, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 0, 874, 0, 0, 0,
    0, 0, 0, 875, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 0, 0, 879, 0, 0, 0,
    0, 0, 880, 0, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883,
};
void recomp_unit_0128_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A04000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0128[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A04000;
    case 2u: goto L_08A0400C;
    case 3u: goto L_08A0401C;
    case 4u: goto L_08A04028;
    case 5u: goto L_08A04038;
    case 6u: goto L_08A04048;
    case 7u: goto L_08A04054;
    case 8u: goto L_08A04064;
    case 9u: goto L_08A04074;
    case 10u: goto L_08A04080;
    case 11u: goto L_08A04090;
    case 12u: goto L_08A040A0;
    case 13u: goto L_08A040AC;
    case 14u: goto L_08A040BC;
    case 15u: goto L_08A040CC;
    case 16u: goto L_08A040D8;
    case 17u: goto L_08A040E8;
    case 18u: goto L_08A040F8;
    case 19u: goto L_08A04108;
    case 20u: goto L_08A04118;
    case 21u: goto L_08A04124;
    case 22u: goto L_08A04134;
    case 23u: goto L_08A04144;
    case 24u: goto L_08A04154;
    case 25u: goto L_08A04164;
    case 26u: goto L_08A04174;
    case 27u: goto L_08A04184;
    case 28u: goto L_08A04194;
    case 29u: goto L_08A041A4;
    case 30u: goto L_08A041B4;
    case 31u: goto L_08A041C4;
    case 32u: goto L_08A041D4;
    case 33u: goto L_08A041E4;
    case 34u: goto L_08A041F4;
    case 35u: goto L_08A04204;
    case 36u: goto L_08A04214;
    case 37u: goto L_08A04220;
    case 38u: goto L_08A04230;
    case 39u: goto L_08A0423C;
    case 40u: goto L_08A0424C;
    case 41u: goto L_08A04258;
    case 42u: goto L_08A04268;
    case 43u: goto L_08A04274;
    case 44u: goto L_08A04284;
    case 45u: goto L_08A04294;
    case 46u: goto L_08A042A0;
    case 47u: goto L_08A042B0;
    case 48u: goto L_08A042BC;
    case 49u: goto L_08A042CC;
    case 50u: goto L_08A042DC;
    case 51u: goto L_08A042EC;
    case 52u: goto L_08A042FC;
    case 53u: goto L_08A0430C;
    case 54u: goto L_08A0431C;
    case 55u: goto L_08A0432C;
    case 56u: goto L_08A04338;
    case 57u: goto L_08A04344;
    case 58u: goto L_08A04350;
    case 59u: goto L_08A0435C;
    case 60u: goto L_08A04368;
    case 61u: goto L_08A04374;
    case 62u: goto L_08A04380;
    case 63u: goto L_08A0438C;
    case 64u: goto L_08A04398;
    case 65u: goto L_08A043A4;
    case 66u: goto L_08A043B0;
    case 67u: goto L_08A043BC;
    case 68u: goto L_08A043C8;
    case 69u: goto L_08A043D4;
    case 70u: goto L_08A043E0;
    case 71u: goto L_08A043EC;
    case 72u: goto L_08A043F8;
    case 73u: goto L_08A04404;
    case 74u: goto L_08A04414;
    case 75u: goto L_08A04424;
    case 76u: goto L_08A04434;
    case 77u: goto L_08A04450;
    case 78u: goto L_08A0445C;
    case 79u: goto L_08A0446C;
    case 80u: goto L_08A04488;
    case 81u: goto L_08A04494;
    case 82u: goto L_08A044A4;
    case 83u: goto L_08A044C0;
    case 84u: goto L_08A044CC;
    case 85u: goto L_08A044DC;
    case 86u: goto L_08A044F8;
    case 87u: goto L_08A04504;
    case 88u: goto L_08A04514;
    case 89u: goto L_08A04530;
    case 90u: goto L_08A0453C;
    case 91u: goto L_08A0454C;
    case 92u: goto L_08A04568;
    case 93u: goto L_08A04574;
    case 94u: goto L_08A04584;
    case 95u: goto L_08A045A0;
    case 96u: goto L_08A045AC;
    case 97u: goto L_08A045BC;
    case 98u: goto L_08A045D8;
    case 99u: goto L_08A045E4;
    case 100u: goto L_08A045F4;
    case 101u: goto L_08A04610;
    case 102u: goto L_08A0461C;
    case 103u: goto L_08A0462C;
    case 104u: goto L_08A04648;
    case 105u: goto L_08A04654;
    case 106u: goto L_08A04664;
    case 107u: goto L_08A04680;
    case 108u: goto L_08A0468C;
    case 109u: goto L_08A0469C;
    case 110u: goto L_08A046B8;
    case 111u: goto L_08A046C4;
    case 112u: goto L_08A046D4;
    case 113u: goto L_08A046F0;
    case 114u: goto L_08A046FC;
    case 115u: goto L_08A0470C;
    case 116u: goto L_08A04728;
    case 117u: goto L_08A04734;
    case 118u: goto L_08A04744;
    case 119u: goto L_08A04760;
    case 120u: goto L_08A0476C;
    case 121u: goto L_08A0477C;
    case 122u: goto L_08A04798;
    case 123u: goto L_08A047A4;
    case 124u: goto L_08A047B4;
    case 125u: goto L_08A047D0;
    case 126u: goto L_08A047DC;
    case 127u: goto L_08A047EC;
    case 128u: goto L_08A04808;
    case 129u: goto L_08A04814;
    case 130u: goto L_08A04824;
    case 131u: goto L_08A04830;
    case 132u: goto L_08A04838;
    case 133u: goto L_08A04840;
    case 134u: goto L_08A04850;
    case 135u: goto L_08A04858;
    case 136u: goto L_08A04860;
    case 137u: goto L_08A04868;
    case 138u: goto L_08A04870;
    case 139u: goto L_08A04878;
    case 140u: goto L_08A04880;
    case 141u: goto L_08A04888;
    case 142u: goto L_08A04890;
    case 143u: goto L_08A04898;
    case 144u: goto L_08A048A0;
    case 145u: goto L_08A048A8;
    case 146u: goto L_08A048B0;
    case 147u: goto L_08A048B8;
    case 148u: goto L_08A048C0;
    case 149u: goto L_08A048C8;
    case 150u: goto L_08A048D0;
    case 151u: goto L_08A048D8;
    case 152u: goto L_08A048E0;
    case 153u: goto L_08A048E8;
    case 154u: goto L_08A048F0;
    case 155u: goto L_08A048F8;
    case 156u: goto L_08A04900;
    case 157u: goto L_08A04908;
    case 158u: goto L_08A04910;
    case 159u: goto L_08A04918;
    case 160u: goto L_08A04920;
    case 161u: goto L_08A04928;
    case 162u: goto L_08A04930;
    case 163u: goto L_08A04938;
    case 164u: goto L_08A04940;
    case 165u: goto L_08A04948;
    case 166u: goto L_08A04950;
    case 167u: goto L_08A04958;
    case 168u: goto L_08A04960;
    case 169u: goto L_08A04968;
    case 170u: goto L_08A04970;
    case 171u: goto L_08A04978;
    case 172u: goto L_08A04980;
    case 173u: goto L_08A04988;
    case 174u: goto L_08A04990;
    case 175u: goto L_08A04998;
    case 176u: goto L_08A049A0;
    case 177u: goto L_08A049A8;
    case 178u: goto L_08A049B0;
    case 179u: goto L_08A049B8;
    case 180u: goto L_08A049C0;
    case 181u: goto L_08A049C8;
    case 182u: goto L_08A049D0;
    case 183u: goto L_08A049D8;
    case 184u: goto L_08A049E0;
    case 185u: goto L_08A049E8;
    case 186u: goto L_08A049F0;
    case 187u: goto L_08A049F8;
    case 188u: goto L_08A04A00;
    case 189u: goto L_08A04A08;
    case 190u: goto L_08A04A10;
    case 191u: goto L_08A04A18;
    case 192u: goto L_08A04A20;
    case 193u: goto L_08A04A28;
    case 194u: goto L_08A04A30;
    case 195u: goto L_08A04A38;
    case 196u: goto L_08A04A40;
    case 197u: goto L_08A04A48;
    case 198u: goto L_08A04A50;
    case 199u: goto L_08A04A58;
    case 200u: goto L_08A04A60;
    case 201u: goto L_08A04A68;
    case 202u: goto L_08A04A70;
    case 203u: goto L_08A04A78;
    case 204u: goto L_08A04A80;
    case 205u: goto L_08A04A88;
    case 206u: goto L_08A04A90;
    case 207u: goto L_08A04A98;
    case 208u: goto L_08A04AA0;
    case 209u: goto L_08A04AA8;
    case 210u: goto L_08A04AB0;
    case 211u: goto L_08A04AB8;
    case 212u: goto L_08A04AC0;
    case 213u: goto L_08A04AC8;
    case 214u: goto L_08A04AD0;
    case 215u: goto L_08A04AD8;
    case 216u: goto L_08A04AE0;
    case 217u: goto L_08A04AE8;
    case 218u: goto L_08A04AF0;
    case 219u: goto L_08A04AF8;
    case 220u: goto L_08A04B00;
    case 221u: goto L_08A04B08;
    case 222u: goto L_08A04B10;
    case 223u: goto L_08A04B18;
    case 224u: goto L_08A04B20;
    case 225u: goto L_08A04B28;
    case 226u: goto L_08A04B30;
    case 227u: goto L_08A04B38;
    case 228u: goto L_08A04B40;
    case 229u: goto L_08A04B48;
    case 230u: goto L_08A04B50;
    case 231u: goto L_08A04B58;
    case 232u: goto L_08A04B60;
    case 233u: goto L_08A04B68;
    case 234u: goto L_08A04B70;
    case 235u: goto L_08A04B78;
    case 236u: goto L_08A04B80;
    case 237u: goto L_08A04B88;
    case 238u: goto L_08A04B90;
    case 239u: goto L_08A04B98;
    case 240u: goto L_08A04BA0;
    case 241u: goto L_08A04BA8;
    case 242u: goto L_08A04BB0;
    case 243u: goto L_08A04BB8;
    case 244u: goto L_08A04BC0;
    case 245u: goto L_08A04BC8;
    case 246u: goto L_08A04BD0;
    case 247u: goto L_08A04BD8;
    case 248u: goto L_08A04BE0;
    case 249u: goto L_08A04BE8;
    case 250u: goto L_08A04BF0;
    case 251u: goto L_08A04BF8;
    case 252u: goto L_08A04C00;
    case 253u: goto L_08A04C08;
    case 254u: goto L_08A04C10;
    case 255u: goto L_08A04C18;
    case 256u: goto L_08A04C20;
    case 257u: goto L_08A04C28;
    case 258u: goto L_08A04C30;
    case 259u: goto L_08A04C38;
    case 260u: goto L_08A04C40;
    case 261u: goto L_08A04C48;
    case 262u: goto L_08A04C50;
    case 263u: goto L_08A04C58;
    case 264u: goto L_08A04C60;
    case 265u: goto L_08A04C68;
    case 266u: goto L_08A04C70;
    case 267u: goto L_08A04C78;
    case 268u: goto L_08A04C80;
    case 269u: goto L_08A04C88;
    case 270u: goto L_08A04C90;
    case 271u: goto L_08A04C98;
    case 272u: goto L_08A04CA0;
    case 273u: goto L_08A04CA8;
    case 274u: goto L_08A04CB0;
    case 275u: goto L_08A04CB8;
    case 276u: goto L_08A04CC0;
    case 277u: goto L_08A04CC8;
    case 278u: goto L_08A04CD0;
    case 279u: goto L_08A04CD8;
    case 280u: goto L_08A04CE0;
    case 281u: goto L_08A04CE8;
    case 282u: goto L_08A04CF0;
    case 283u: goto L_08A04CF8;
    case 284u: goto L_08A04D00;
    case 285u: goto L_08A04D08;
    case 286u: goto L_08A04D10;
    case 287u: goto L_08A04D18;
    case 288u: goto L_08A04D20;
    case 289u: goto L_08A04D28;
    case 290u: goto L_08A04D30;
    case 291u: goto L_08A04D38;
    case 292u: goto L_08A04D40;
    case 293u: goto L_08A04D48;
    case 294u: goto L_08A04D50;
    case 295u: goto L_08A04D58;
    case 296u: goto L_08A04D60;
    case 297u: goto L_08A04D68;
    case 298u: goto L_08A04D70;
    case 299u: goto L_08A04D78;
    case 300u: goto L_08A04D80;
    case 301u: goto L_08A04D88;
    case 302u: goto L_08A04D90;
    case 303u: goto L_08A04D98;
    case 304u: goto L_08A04DA0;
    case 305u: goto L_08A04DA8;
    case 306u: goto L_08A04DB0;
    case 307u: goto L_08A04DB8;
    case 308u: goto L_08A04DC0;
    case 309u: goto L_08A04DC8;
    case 310u: goto L_08A04DD0;
    case 311u: goto L_08A04DD8;
    case 312u: goto L_08A04DE0;
    case 313u: goto L_08A04DE8;
    case 314u: goto L_08A04DF0;
    case 315u: goto L_08A04DF8;
    case 316u: goto L_08A04E00;
    case 317u: goto L_08A04E08;
    case 318u: goto L_08A04E10;
    case 319u: goto L_08A04E18;
    case 320u: goto L_08A04E20;
    case 321u: goto L_08A04E28;
    case 322u: goto L_08A04E30;
    case 323u: goto L_08A04E38;
    case 324u: goto L_08A04E40;
    case 325u: goto L_08A04E48;
    case 326u: goto L_08A04E50;
    case 327u: goto L_08A04E58;
    case 328u: goto L_08A04E60;
    case 329u: goto L_08A04E68;
    case 330u: goto L_08A04E70;
    case 331u: goto L_08A04E78;
    case 332u: goto L_08A04E80;
    case 333u: goto L_08A04E88;
    case 334u: goto L_08A04E90;
    case 335u: goto L_08A04EA0;
    case 336u: goto L_08A04EB8;
    case 337u: goto L_08A04ECC;
    case 338u: goto L_08A04EE0;
    case 339u: goto L_08A04EF8;
    case 340u: goto L_08A04F0C;
    case 341u: goto L_08A04F14;
    case 342u: goto L_08A04F2C;
    case 343u: goto L_08A04F40;
    case 344u: goto L_08A04F54;
    case 345u: goto L_08A04F70;
    case 346u: goto L_08A04F88;
    case 347u: goto L_08A04F98;
    case 348u: goto L_08A04FA8;
    case 349u: goto L_08A04FF4;
    case 350u: goto L_08A05004;
    case 351u: goto L_08A05014;
    case 352u: goto L_08A05024;
    case 353u: goto L_08A0503C;
    case 354u: goto L_08A05050;
    case 355u: goto L_08A05058;
    case 356u: goto L_08A05070;
    case 357u: goto L_08A05088;
    case 358u: goto L_08A05098;
    case 359u: goto L_08A050A8;
    case 360u: goto L_08A05100;
    case 361u: goto L_08A05110;
    case 362u: goto L_08A05120;
    case 363u: goto L_08A05130;
    case 364u: goto L_08A05158;
    case 365u: goto L_08A05174;
    case 366u: goto L_08A05184;
    case 367u: goto L_08A05190;
    case 368u: goto L_08A051D0;
    case 369u: goto L_08A051EC;
    case 370u: goto L_08A05204;
    case 371u: goto L_08A05218;
    case 372u: goto L_08A05220;
    case 373u: goto L_08A05238;
    case 374u: goto L_08A05250;
    case 375u: goto L_08A05268;
    case 376u: goto L_08A0528C;
    case 377u: goto L_08A05294;
    case 378u: goto L_08A052AC;
    case 379u: goto L_08A052C4;
    case 380u: goto L_08A052D4;
    case 381u: goto L_08A052E4;
    case 382u: goto L_08A05348;
    case 383u: goto L_08A05358;
    case 384u: goto L_08A05368;
    case 385u: goto L_08A05378;
    case 386u: goto L_08A053A0;
    case 387u: goto L_08A053BC;
    case 388u: goto L_08A053CC;
    case 389u: goto L_08A053E0;
    case 390u: goto L_08A053F0;
    case 391u: goto L_08A053FC;
    case 392u: goto L_08A05428;
    case 393u: goto L_08A05438;
    case 394u: goto L_08A05454;
    case 395u: goto L_08A05464;
    case 396u: goto L_08A05474;
    case 397u: goto L_08A05484;
    case 398u: goto L_08A05494;
    case 399u: goto L_08A054A4;
    case 400u: goto L_08A054BC;
    case 401u: goto L_08A054D0;
    case 402u: goto L_08A054D8;
    case 403u: goto L_08A054F0;
    case 404u: goto L_08A05508;
    case 405u: goto L_08A0552C;
    case 406u: goto L_08A05550;
    case 407u: goto L_08A0555C;
    case 408u: goto L_08A05568;
    case 409u: goto L_08A05574;
    case 410u: goto L_08A0558C;
    case 411u: goto L_08A055AC;
    case 412u: goto L_08A055C4;
    case 413u: goto L_08A055D0;
    case 414u: goto L_08A055D8;
    case 415u: goto L_08A055E4;
    case 416u: goto L_08A055F0;
    case 417u: goto L_08A055F8;
    case 418u: goto L_08A05604;
    case 419u: goto L_08A05610;
    case 420u: goto L_08A05618;
    case 421u: goto L_08A05624;
    case 422u: goto L_08A05630;
    case 423u: goto L_08A05638;
    case 424u: goto L_08A05644;
    case 425u: goto L_08A05650;
    case 426u: goto L_08A0566C;
    case 427u: goto L_08A05684;
    case 428u: goto L_08A05694;
    case 429u: goto L_08A056A4;
    case 430u: goto L_08A05700;
    case 431u: goto L_08A05710;
    case 432u: goto L_08A05720;
    case 433u: goto L_08A05730;
    case 434u: goto L_08A05740;
    case 435u: goto L_08A05770;
    case 436u: goto L_08A05784;
    case 437u: goto L_08A057A0;
    case 438u: goto L_08A057AC;
    case 439u: goto L_08A057DC;
    case 440u: goto L_08A057F8;
    case 441u: goto L_08A05804;
    case 442u: goto L_08A05818;
    case 443u: goto L_08A0582C;
    case 444u: goto L_08A05848;
    case 445u: goto L_08A05854;
    case 446u: goto L_08A05884;
    case 447u: goto L_08A058A0;
    case 448u: goto L_08A058AC;
    case 449u: goto L_08A058C0;
    case 450u: goto L_08A058D4;
    case 451u: goto L_08A058F0;
    case 452u: goto L_08A058FC;
    case 453u: goto L_08A05910;
    case 454u: goto L_08A05934;
    case 455u: goto L_08A05950;
    case 456u: goto L_08A0595C;
    case 457u: goto L_08A05970;
    case 458u: goto L_08A05984;
    case 459u: goto L_08A059A0;
    case 460u: goto L_08A059AC;
    case 461u: goto L_08A059DC;
    case 462u: goto L_08A059F8;
    case 463u: goto L_08A05A04;
    case 464u: goto L_08A05A20;
    case 465u: goto L_08A05A38;
    case 466u: goto L_08A05A4C;
    case 467u: goto L_08A05A54;
    case 468u: goto L_08A05A6C;
    case 469u: goto L_08A05A84;
    case 470u: goto L_08A05A94;
    case 471u: goto L_08A05AA4;
    case 472u: goto L_08A05AEC;
    case 473u: goto L_08A05AFC;
    case 474u: goto L_08A05B0C;
    case 475u: goto L_08A05B1C;
    case 476u: goto L_08A05B34;
    case 477u: goto L_08A05B3C;
    case 478u: goto L_08A05B48;
    case 479u: goto L_08A05B54;
    case 480u: goto L_08A05B5C;
    case 481u: goto L_08A05B74;
    case 482u: goto L_08A05B8C;
    case 483u: goto L_08A05BA0;
    case 484u: goto L_08A05BA8;
    case 485u: goto L_08A05BC0;
    case 486u: goto L_08A05BD8;
    case 487u: goto L_08A05BE8;
    case 488u: goto L_08A05BF8;
    case 489u: goto L_08A05C40;
    case 490u: goto L_08A05C50;
    case 491u: goto L_08A05C60;
    case 492u: goto L_08A05C70;
    case 493u: goto L_08A05C88;
    case 494u: goto L_08A05C9C;
    case 495u: goto L_08A05CA4;
    case 496u: goto L_08A05CBC;
    case 497u: goto L_08A05CD4;
    case 498u: goto L_08A05D0C;
    case 499u: goto L_08A05D30;
    case 500u: goto L_08A05D38;
    case 501u: goto L_08A05D44;
    case 502u: goto L_08A05D4C;
    case 503u: goto L_08A05D58;
    case 504u: goto L_08A05D60;
    case 505u: goto L_08A05D6C;
    case 506u: goto L_08A05D74;
    case 507u: goto L_08A05D80;
    case 508u: goto L_08A05D88;
    case 509u: goto L_08A05DA0;
    case 510u: goto L_08A05DAC;
    case 511u: goto L_08A05DB8;
    case 512u: goto L_08A05DC4;
    case 513u: goto L_08A05DDC;
    case 514u: goto L_08A05DF4;
    case 515u: goto L_08A05E04;
    case 516u: goto L_08A05E14;
    case 517u: goto L_08A05E78;
    case 518u: goto L_08A05E88;
    case 519u: goto L_08A05E98;
    case 520u: goto L_08A05EA8;
    case 521u: goto L_08A05EB8;
    case 522u: goto L_08A05EE4;
    case 523u: goto L_08A05F00;
    case 524u: goto L_08A05F10;
    case 525u: goto L_08A05F1C;
    case 526u: goto L_08A05F3C;
    case 527u: goto L_08A05F50;
    case 528u: goto L_08A05F6C;
    case 529u: goto L_08A05F80;
    case 530u: goto L_08A05FA4;
    case 531u: goto L_08A05FC0;
    case 532u: goto L_08A05FCC;
    case 533u: goto L_08A05FDC;
    case 534u: goto L_08A05FE8;
    case 535u: goto L_08A05FFC;
    case 536u: goto L_08A06008;
    case 537u: goto L_08A0601C;
    case 538u: goto L_08A06028;
    case 539u: goto L_08A0603C;
    case 540u: goto L_08A0604C;
    case 541u: goto L_08A0605C;
    case 542u: goto L_08A06074;
    case 543u: goto L_08A06088;
    case 544u: goto L_08A06098;
    case 545u: goto L_08A060A4;
    case 546u: goto L_08A060D0;
    case 547u: goto L_08A060F0;
    case 548u: goto L_08A06100;
    case 549u: goto L_08A06110;
    case 550u: goto L_08A06128;
    case 551u: goto L_08A0613C;
    case 552u: goto L_08A06144;
    case 553u: goto L_08A0615C;
    case 554u: goto L_08A06174;
    case 555u: goto L_08A06184;
    case 556u: goto L_08A06194;
    case 557u: goto L_08A061EC;
    case 558u: goto L_08A061FC;
    case 559u: goto L_08A0620C;
    case 560u: goto L_08A0621C;
    case 561u: goto L_08A0622C;
    case 562u: goto L_08A06254;
    case 563u: goto L_08A06270;
    case 564u: goto L_08A06280;
    case 565u: goto L_08A0628C;
    case 566u: goto L_08A062A8;
    case 567u: goto L_08A062B4;
    case 568u: goto L_08A062D0;
    case 569u: goto L_08A062DC;
    case 570u: goto L_08A062F8;
    case 571u: goto L_08A06304;
    case 572u: goto L_08A06320;
    case 573u: goto L_08A06334;
    case 574u: goto L_08A06344;
    case 575u: goto L_08A0635C;
    case 576u: goto L_08A06378;
    case 577u: goto L_08A0638C;
    case 578u: goto L_08A063A0;
    case 579u: goto L_08A063BC;
    case 580u: goto L_08A063E4;
    case 581u: goto L_08A06414;
    case 582u: goto L_08A0642C;
    case 583u: goto L_08A06434;
    case 584u: goto L_08A06440;
    case 585u: goto L_08A0644C;
    case 586u: goto L_08A06454;
    case 587u: goto L_08A0646C;
    case 588u: goto L_08A06484;
    case 589u: goto L_08A06498;
    case 590u: goto L_08A064A0;
    case 591u: goto L_08A064B8;
    case 592u: goto L_08A064D4;
    case 593u: goto L_08A064F8;
    case 594u: goto L_08A06504;
    case 595u: goto L_08A0650C;
    case 596u: goto L_08A06530;
    case 597u: goto L_08A06540;
    case 598u: goto L_08A06558;
    case 599u: goto L_08A06570;
    case 600u: goto L_08A06580;
    case 601u: goto L_08A06590;
    case 602u: goto L_08A065E4;
    case 603u: goto L_08A065F4;
    case 604u: goto L_08A06604;
    case 605u: goto L_08A06614;
    case 606u: goto L_08A06638;
    case 607u: goto L_08A06654;
    case 608u: goto L_08A0667C;
    case 609u: goto L_08A06694;
    case 610u: goto L_08A066AC;
    case 611u: goto L_08A066C0;
    case 612u: goto L_08A066C8;
    case 613u: goto L_08A066E0;
    case 614u: goto L_08A066F8;
    case 615u: goto L_08A06718;
    case 616u: goto L_08A0673C;
    case 617u: goto L_08A0674C;
    case 618u: goto L_08A06764;
    case 619u: goto L_08A0677C;
    case 620u: goto L_08A0678C;
    case 621u: goto L_08A0679C;
    case 622u: goto L_08A067F0;
    case 623u: goto L_08A06800;
    case 624u: goto L_08A06810;
    case 625u: goto L_08A06820;
    case 626u: goto L_08A06848;
    case 627u: goto L_08A06864;
    case 628u: goto L_08A06874;
    case 629u: goto L_08A06888;
    case 630u: goto L_08A0689C;
    case 631u: goto L_08A068B0;
    case 632u: goto L_08A068DC;
    case 633u: goto L_08A068F8;
    case 634u: goto L_08A06910;
    case 635u: goto L_08A06924;
    case 636u: goto L_08A06938;
    case 637u: goto L_08A06950;
    case 638u: goto L_08A06964;
    case 639u: goto L_08A0696C;
    case 640u: goto L_08A06984;
    case 641u: goto L_08A0699C;
    case 642u: goto L_08A069B8;
    case 643u: goto L_08A069DC;
    case 644u: goto L_08A069E4;
    case 645u: goto L_08A06A00;
    case 646u: goto L_08A06A18;
    case 647u: goto L_08A06A30;
    case 648u: goto L_08A06A6C;
    case 649u: goto L_08A06A84;
    case 650u: goto L_08A06A94;
    case 651u: goto L_08A06AA4;
    case 652u: goto L_08A06B00;
    case 653u: goto L_08A06B10;
    case 654u: goto L_08A06B20;
    case 655u: goto L_08A06B30;
    case 656u: goto L_08A06B40;
    case 657u: goto L_08A06B68;
    case 658u: goto L_08A06B84;
    case 659u: goto L_08A06B94;
    case 660u: goto L_08A06BA0;
    case 661u: goto L_08A06BB4;
    case 662u: goto L_08A06BC8;
    case 663u: goto L_08A06BF4;
    case 664u: goto L_08A06C10;
    case 665u: goto L_08A06C28;
    case 666u: goto L_08A06C3C;
    case 667u: goto L_08A06C44;
    case 668u: goto L_08A06C5C;
    case 669u: goto L_08A06C74;
    case 670u: goto L_08A06C90;
    case 671u: goto L_08A06CB4;
    case 672u: goto L_08A06CBC;
    case 673u: goto L_08A06CD8;
    case 674u: goto L_08A06CF0;
    case 675u: goto L_08A06D08;
    case 676u: goto L_08A06D18;
    case 677u: goto L_08A06D28;
    case 678u: goto L_08A06D84;
    case 679u: goto L_08A06D94;
    case 680u: goto L_08A06DA4;
    case 681u: goto L_08A06DB4;
    case 682u: goto L_08A06DDC;
    case 683u: goto L_08A06DF8;
    case 684u: goto L_08A06E08;
    case 685u: goto L_08A06E14;
    case 686u: goto L_08A06E28;
    case 687u: goto L_08A06E3C;
    case 688u: goto L_08A06E68;
    case 689u: goto L_08A06E84;
    case 690u: goto L_08A06E9C;
    case 691u: goto L_08A06EB0;
    case 692u: goto L_08A06EB8;
    case 693u: goto L_08A06ED0;
    case 694u: goto L_08A06EE8;
    case 695u: goto L_08A06F08;
    case 696u: goto L_08A06F2C;
    case 697u: goto L_08A06F34;
    case 698u: goto L_08A06F40;
    case 699u: goto L_08A06F48;
    case 700u: goto L_08A06F64;
    case 701u: goto L_08A06F7C;
    case 702u: goto L_08A06F94;
    case 703u: goto L_08A06FA4;
    case 704u: goto L_08A06FB4;
    case 705u: goto L_08A07010;
    case 706u: goto L_08A07020;
    case 707u: goto L_08A07030;
    case 708u: goto L_08A07040;
    case 709u: goto L_08A07068;
    case 710u: goto L_08A07084;
    case 711u: goto L_08A07094;
    case 712u: goto L_08A070A0;
    case 713u: goto L_08A070BC;
    case 714u: goto L_08A070C8;
    case 715u: goto L_08A070DC;
    case 716u: goto L_08A070F0;
    case 717u: goto L_08A0711C;
    case 718u: goto L_08A07138;
    case 719u: goto L_08A07150;
    case 720u: goto L_08A07164;
    case 721u: goto L_08A0716C;
    case 722u: goto L_08A07184;
    case 723u: goto L_08A0719C;
    case 724u: goto L_08A071B4;
    case 725u: goto L_08A071D8;
    case 726u: goto L_08A071F4;
    case 727u: goto L_08A0720C;
    case 728u: goto L_08A07224;
    case 729u: goto L_08A07270;
    case 730u: goto L_08A07288;
    case 731u: goto L_08A07298;
    case 732u: goto L_08A072A8;
    case 733u: goto L_08A072FC;
    case 734u: goto L_08A0730C;
    case 735u: goto L_08A0731C;
    case 736u: goto L_08A0732C;
    case 737u: goto L_08A0733C;
    case 738u: goto L_08A07360;
    case 739u: goto L_08A0737C;
    case 740u: goto L_08A073A4;
    case 741u: goto L_08A073BC;
    case 742u: goto L_08A073D4;
    case 743u: goto L_08A073E8;
    case 744u: goto L_08A073FC;
    case 745u: goto L_08A07414;
    case 746u: goto L_08A0741C;
    case 747u: goto L_08A07428;
    case 748u: goto L_08A07434;
    case 749u: goto L_08A0743C;
    case 750u: goto L_08A07454;
    case 751u: goto L_08A0746C;
    case 752u: goto L_08A07480;
    case 753u: goto L_08A07488;
    case 754u: goto L_08A074A0;
    case 755u: goto L_08A074BC;
    case 756u: goto L_08A074E0;
    case 757u: goto L_08A074EC;
    case 758u: goto L_08A07510;
    case 759u: goto L_08A07518;
    case 760u: goto L_08A07530;
    case 761u: goto L_08A07540;
    case 762u: goto L_08A07558;
    case 763u: goto L_08A07578;
    case 764u: goto L_08A07590;
    case 765u: goto L_08A0759C;
    case 766u: goto L_08A075A4;
    case 767u: goto L_08A075AC;
    case 768u: goto L_08A075C4;
    case 769u: goto L_08A075D0;
    case 770u: goto L_08A075D8;
    case 771u: goto L_08A075E0;
    case 772u: goto L_08A075F8;
    case 773u: goto L_08A07604;
    case 774u: goto L_08A07610;
    case 775u: goto L_08A0761C;
    case 776u: goto L_08A07624;
    case 777u: goto L_08A07640;
    case 778u: goto L_08A0764C;
    case 779u: goto L_08A07658;
    case 780u: goto L_08A07674;
    case 781u: goto L_08A0768C;
    case 782u: goto L_08A0769C;
    case 783u: goto L_08A076AC;
    case 784u: goto L_08A07708;
    case 785u: goto L_08A07718;
    case 786u: goto L_08A07728;
    case 787u: goto L_08A07738;
    case 788u: goto L_08A07760;
    case 789u: goto L_08A0777C;
    case 790u: goto L_08A0778C;
    case 791u: goto L_08A077E4;
    case 792u: goto L_08A077F4;
    case 793u: goto L_08A07804;
    case 794u: goto L_08A07814;
    case 795u: goto L_08A07824;
    case 796u: goto L_08A07834;
    case 797u: goto L_08A07844;
    case 798u: goto L_08A07854;
    case 799u: goto L_08A07860;
    case 800u: goto L_08A0788C;
    case 801u: goto L_08A078A8;
    case 802u: goto L_08A078C0;
    case 803u: goto L_08A078C8;
    case 804u: goto L_08A078D4;
    case 805u: goto L_08A078E0;
    case 806u: goto L_08A078E8;
    case 807u: goto L_08A07900;
    case 808u: goto L_08A07918;
    case 809u: goto L_08A0792C;
    case 810u: goto L_08A07934;
    case 811u: goto L_08A0794C;
    case 812u: goto L_08A07960;
    case 813u: goto L_08A07974;
    case 814u: goto L_08A07990;
    case 815u: goto L_08A079A8;
    case 816u: goto L_08A079B8;
    case 817u: goto L_08A079C8;
    case 818u: goto L_08A07A1C;
    case 819u: goto L_08A07A2C;
    case 820u: goto L_08A07A3C;
    case 821u: goto L_08A07A4C;
    case 822u: goto L_08A07A64;
    case 823u: goto L_08A07A78;
    case 824u: goto L_08A07A80;
    case 825u: goto L_08A07A98;
    case 826u: goto L_08A07AAC;
    case 827u: goto L_08A07AC0;
    case 828u: goto L_08A07ADC;
    case 829u: goto L_08A07AF4;
    case 830u: goto L_08A07B04;
    case 831u: goto L_08A07B14;
    case 832u: goto L_08A07B68;
    case 833u: goto L_08A07B78;
    case 834u: goto L_08A07B88;
    case 835u: goto L_08A07B98;
    case 836u: goto L_08A07BB0;
    case 837u: goto L_08A07BC4;
    case 838u: goto L_08A07BCC;
    case 839u: goto L_08A07BE4;
    case 840u: goto L_08A07BF8;
    case 841u: goto L_08A07C0C;
    case 842u: goto L_08A07C28;
    case 843u: goto L_08A07C40;
    case 844u: goto L_08A07C50;
    case 845u: goto L_08A07C60;
    case 846u: goto L_08A07CB4;
    case 847u: goto L_08A07CC4;
    case 848u: goto L_08A07CD4;
    case 849u: goto L_08A07CE4;
    case 850u: goto L_08A07CFC;
    case 851u: goto L_08A07D04;
    case 852u: goto L_08A07D10;
    case 853u: goto L_08A07D1C;
    case 854u: goto L_08A07D24;
    case 855u: goto L_08A07D3C;
    case 856u: goto L_08A07D54;
    case 857u: goto L_08A07D68;
    case 858u: goto L_08A07D70;
    case 859u: goto L_08A07D88;
    case 860u: goto L_08A07D9C;
    case 861u: goto L_08A07DB0;
    case 862u: goto L_08A07DCC;
    case 863u: goto L_08A07DE4;
    case 864u: goto L_08A07DF4;
    case 865u: goto L_08A07E04;
    case 866u: goto L_08A07E58;
    case 867u: goto L_08A07E68;
    case 868u: goto L_08A07E78;
    case 869u: goto L_08A07E88;
    case 870u: goto L_08A07EA0;
    case 871u: goto L_08A07EB4;
    case 872u: goto L_08A07EBC;
    case 873u: goto L_08A07ED4;
    case 874u: goto L_08A07EF0;
    case 875u: goto L_08A07F0C;
    case 876u: goto L_08A07F24;
    case 877u: goto L_08A07F48;
    case 878u: goto L_08A07F58;
    case 879u: goto L_08A07F70;
    case 880u: goto L_08A07F88;
    case 881u: goto L_08A07F98;
    case 882u: goto L_08A07FA8;
    case 883u: goto L_08A07FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A04000:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26784)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0400C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26780)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0401C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04028:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26800)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04038:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26796)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04048:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04054:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26808)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04064:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26804)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04074:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04080:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26816)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04090:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26812)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A040A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A040AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26824)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A040BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26820)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A040CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A040D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26836)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A040E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26832)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A040F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26844)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04108:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26840)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04118:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04124:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04134:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04144:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26672)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04154:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26676)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04164:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26680)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04174:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26684)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04184:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26688)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04194:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26692)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A041A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26696)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A041B4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26700)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A041C4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26704)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A041D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26708)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A041E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26712)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A041F4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26716)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04204:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26724)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04214:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04220:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26732)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04230:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0423C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26740)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0424C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04258:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26748)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04268:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04274:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26752)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04284:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26760)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04294:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A042A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A042B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A042BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A042CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26864)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A042DC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A042EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A042FC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26896)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0430C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26900)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0431C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26908)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0432C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04338:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04344:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04350:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0435C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04368:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04374:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04380:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0438C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04398:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A043A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A043B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A043BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A043C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A043D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A043E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A043EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A043F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04404:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04414:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04424:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26904)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04434:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0445C;
      }
      goto L_08A04450;
    }
L_08A04450:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A0445Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0445Cu) goto L_08A0445C;
    return;
L_08A0445C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0446C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04494;
      }
      goto L_08A04488;
    }
L_08A04488:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A04494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04494u) goto L_08A04494;
    return;
L_08A04494:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A044A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A044CC;
      }
      goto L_08A044C0;
    }
L_08A044C0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A044CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A044CCu) goto L_08A044CC;
    return;
L_08A044CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A044DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04504;
      }
      goto L_08A044F8;
    }
L_08A044F8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A04504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04504u) goto L_08A04504;
    return;
L_08A04504:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04514:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0453C;
      }
      goto L_08A04530;
    }
L_08A04530:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A0453Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0453Cu) goto L_08A0453C;
    return;
L_08A0453C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0454C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04574;
      }
      goto L_08A04568;
    }
L_08A04568:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A04574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04574u) goto L_08A04574;
    return;
L_08A04574:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04584:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A045AC;
      }
      goto L_08A045A0;
    }
L_08A045A0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A045ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A045ACu) goto L_08A045AC;
    return;
L_08A045AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A045BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A045E4;
      }
      goto L_08A045D8;
    }
L_08A045D8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A045E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A045E4u) goto L_08A045E4;
    return;
L_08A045E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A045F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0461C;
      }
      goto L_08A04610;
    }
L_08A04610:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A0461Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0461Cu) goto L_08A0461C;
    return;
L_08A0461C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0462C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04654;
      }
      goto L_08A04648;
    }
L_08A04648:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A04654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04654u) goto L_08A04654;
    return;
L_08A04654:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04664:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0468C;
      }
      goto L_08A04680;
    }
L_08A04680:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A0468Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0468Cu) goto L_08A0468C;
    return;
L_08A0468C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0469C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A046C4;
      }
      goto L_08A046B8;
    }
L_08A046B8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A046C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A046C4u) goto L_08A046C4;
    return;
L_08A046C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A046D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A046FC;
      }
      goto L_08A046F0;
    }
L_08A046F0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A046FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A046FCu) goto L_08A046FC;
    return;
L_08A046FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0470C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04734;
      }
      goto L_08A04728;
    }
L_08A04728:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A04734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04734u) goto L_08A04734;
    return;
L_08A04734:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0476C;
      }
      goto L_08A04760;
    }
L_08A04760:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0476Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0476Cu) goto L_08A0476C;
    return;
L_08A0476C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0477C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A047A4;
      }
      goto L_08A04798;
    }
L_08A04798:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A047A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A047A4u) goto L_08A047A4;
    return;
L_08A047A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A047B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A047DC;
      }
      goto L_08A047D0;
    }
L_08A047D0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A047DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A047DCu) goto L_08A047DC;
    return;
L_08A047DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A047EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04814;
      }
      goto L_08A04808;
    }
L_08A04808:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A04814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04814u) goto L_08A04814;
    return;
L_08A04814:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04824:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32156)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A04838;
      }
      goto L_08A04830;
    }
L_08A04830:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32156), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08A04838;
L_08A04838:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04840:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A04850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 3u, 0x08A280A4u>(ctx, &aot_mem) && ctx.pc == 0x08A04850u) goto L_08A04850;
    return;
L_08A04850:
    ctx.set_gpr(31, 0x08A04858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 682u, 0x08A27AE8u>(ctx, &aot_mem) && ctx.pc == 0x08A04858u) goto L_08A04858;
    return;
L_08A04858:
    ctx.set_gpr(31, 0x08A04860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 620u, 0x08A2752Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04860u) goto L_08A04860;
    return;
L_08A04860:
    ctx.set_gpr(31, 0x08A04868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 584u, 0x08A27274u>(ctx, &aot_mem) && ctx.pc == 0x08A04868u) goto L_08A04868;
    return;
L_08A04868:
    ctx.set_gpr(31, 0x08A04870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 550u, 0x08A26F88u>(ctx, &aot_mem) && ctx.pc == 0x08A04870u) goto L_08A04870;
    return;
L_08A04870:
    ctx.set_gpr(31, 0x08A04878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 525u, 0x08A26D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04878u) goto L_08A04878;
    return;
L_08A04878:
    ctx.set_gpr(31, 0x08A04880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 488u, 0x08A26A68u>(ctx, &aot_mem) && ctx.pc == 0x08A04880u) goto L_08A04880;
    return;
L_08A04880:
    ctx.set_gpr(31, 0x08A04888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 456u, 0x08A267F0u>(ctx, &aot_mem) && ctx.pc == 0x08A04888u) goto L_08A04888;
    return;
L_08A04888:
    ctx.set_gpr(31, 0x08A04890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 426u, 0x08A26550u>(ctx, &aot_mem) && ctx.pc == 0x08A04890u) goto L_08A04890;
    return;
L_08A04890:
    ctx.set_gpr(31, 0x08A04898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 408u, 0x08A263BCu>(ctx, &aot_mem) && ctx.pc == 0x08A04898u) goto L_08A04898;
    return;
L_08A04898:
    ctx.set_gpr(31, 0x08A048A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 382u, 0x08A26168u>(ctx, &aot_mem) && ctx.pc == 0x08A048A0u) goto L_08A048A0;
    return;
L_08A048A0:
    ctx.set_gpr(31, 0x08A048A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 362u, 0x08A25F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A048A8u) goto L_08A048A8;
    return;
L_08A048A8:
    ctx.set_gpr(31, 0x08A048B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 342u, 0x08A25DC8u>(ctx, &aot_mem) && ctx.pc == 0x08A048B0u) goto L_08A048B0;
    return;
L_08A048B0:
    ctx.set_gpr(31, 0x08A048B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 316u, 0x08A25B74u>(ctx, &aot_mem) && ctx.pc == 0x08A048B8u) goto L_08A048B8;
    return;
L_08A048B8:
    ctx.set_gpr(31, 0x08A048C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 296u, 0x08A2599Cu>(ctx, &aot_mem) && ctx.pc == 0x08A048C0u) goto L_08A048C0;
    return;
L_08A048C0:
    ctx.set_gpr(31, 0x08A048C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 264u, 0x08A256D8u>(ctx, &aot_mem) && ctx.pc == 0x08A048C8u) goto L_08A048C8;
    return;
L_08A048C8:
    ctx.set_gpr(31, 0x08A048D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 241u, 0x08A254ECu>(ctx, &aot_mem) && ctx.pc == 0x08A048D0u) goto L_08A048D0;
    return;
L_08A048D0:
    ctx.set_gpr(31, 0x08A048D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 190u, 0x08A25090u>(ctx, &aot_mem) && ctx.pc == 0x08A048D8u) goto L_08A048D8;
    return;
L_08A048D8:
    ctx.set_gpr(31, 0x08A048E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 165u, 0x08A24E68u>(ctx, &aot_mem) && ctx.pc == 0x08A048E0u) goto L_08A048E0;
    return;
L_08A048E0:
    ctx.set_gpr(31, 0x08A048E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 148u, 0x08A24CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A048E8u) goto L_08A048E8;
    return;
L_08A048E8:
    ctx.set_gpr(31, 0x08A048F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x08A24B38u>(ctx, &aot_mem) && ctx.pc == 0x08A048F0u) goto L_08A048F0;
    return;
L_08A048F0:
    ctx.set_gpr(31, 0x08A048F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 99u, 0x08A24884u>(ctx, &aot_mem) && ctx.pc == 0x08A048F8u) goto L_08A048F8;
    return;
L_08A048F8:
    ctx.set_gpr(31, 0x08A04900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 81u, 0x08A246F0u>(ctx, &aot_mem) && ctx.pc == 0x08A04900u) goto L_08A04900;
    return;
L_08A04900:
    ctx.set_gpr(31, 0x08A04908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 53u, 0x08A2444Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04908u) goto L_08A04908;
    return;
L_08A04908:
    ctx.set_gpr(31, 0x08A04910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 22u, 0x08A24204u>(ctx, &aot_mem) && ctx.pc == 0x08A04910u) goto L_08A04910;
    return;
L_08A04910:
    ctx.set_gpr(31, 0x08A04918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 5u, 0x08A24044u>(ctx, &aot_mem) && ctx.pc == 0x08A04918u) goto L_08A04918;
    return;
L_08A04918:
    ctx.set_gpr(31, 0x08A04920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 740u, 0x08A23EA8u>(ctx, &aot_mem) && ctx.pc == 0x08A04920u) goto L_08A04920;
    return;
L_08A04920:
    ctx.set_gpr(31, 0x08A04928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 712u, 0x08A23C34u>(ctx, &aot_mem) && ctx.pc == 0x08A04928u) goto L_08A04928;
    return;
L_08A04928:
    ctx.set_gpr(31, 0x08A04930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 688u, 0x08A23A44u>(ctx, &aot_mem) && ctx.pc == 0x08A04930u) goto L_08A04930;
    return;
L_08A04930:
    ctx.set_gpr(31, 0x08A04938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 677u, 0x08A2393Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04938u) goto L_08A04938;
    return;
L_08A04938:
    ctx.set_gpr(31, 0x08A04940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 660u, 0x08A237B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04940u) goto L_08A04940;
    return;
L_08A04940:
    ctx.set_gpr(31, 0x08A04948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 605u, 0x08A232D4u>(ctx, &aot_mem) && ctx.pc == 0x08A04948u) goto L_08A04948;
    return;
L_08A04948:
    ctx.set_gpr(31, 0x08A04950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 573u, 0x08A23024u>(ctx, &aot_mem) && ctx.pc == 0x08A04950u) goto L_08A04950;
    return;
L_08A04950:
    ctx.set_gpr(31, 0x08A04958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 556u, 0x08A22EC4u>(ctx, &aot_mem) && ctx.pc == 0x08A04958u) goto L_08A04958;
    return;
L_08A04958:
    ctx.set_gpr(31, 0x08A04960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 522u, 0x08A22BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A04960u) goto L_08A04960;
    return;
L_08A04960:
    ctx.set_gpr(31, 0x08A04968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 488u, 0x08A22940u>(ctx, &aot_mem) && ctx.pc == 0x08A04968u) goto L_08A04968;
    return;
L_08A04968:
    ctx.set_gpr(31, 0x08A04970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 468u, 0x08A22730u>(ctx, &aot_mem) && ctx.pc == 0x08A04970u) goto L_08A04970;
    return;
L_08A04970:
    ctx.set_gpr(31, 0x08A04978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 447u, 0x08A22540u>(ctx, &aot_mem) && ctx.pc == 0x08A04978u) goto L_08A04978;
    return;
L_08A04978:
    ctx.set_gpr(31, 0x08A04980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 397u, 0x08A220ECu>(ctx, &aot_mem) && ctx.pc == 0x08A04980u) goto L_08A04980;
    return;
L_08A04980:
    ctx.set_gpr(31, 0x08A04988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 355u, 0x08A21E28u>(ctx, &aot_mem) && ctx.pc == 0x08A04988u) goto L_08A04988;
    return;
L_08A04988:
    ctx.set_gpr(31, 0x08A04990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 321u, 0x08A21B48u>(ctx, &aot_mem) && ctx.pc == 0x08A04990u) goto L_08A04990;
    return;
L_08A04990:
    ctx.set_gpr(31, 0x08A04998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 294u, 0x08A218B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04998u) goto L_08A04998;
    return;
L_08A04998:
    ctx.set_gpr(31, 0x08A049A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 259u, 0x08A21548u>(ctx, &aot_mem) && ctx.pc == 0x08A049A0u) goto L_08A049A0;
    return;
L_08A049A0:
    ctx.set_gpr(31, 0x08A049A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 225u, 0x08A211C4u>(ctx, &aot_mem) && ctx.pc == 0x08A049A8u) goto L_08A049A8;
    return;
L_08A049A8:
    ctx.set_gpr(31, 0x08A049B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 173u, 0x08A20D60u>(ctx, &aot_mem) && ctx.pc == 0x08A049B0u) goto L_08A049B0;
    return;
L_08A049B0:
    ctx.set_gpr(31, 0x08A049B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 93u, 0x08A20758u>(ctx, &aot_mem) && ctx.pc == 0x08A049B8u) goto L_08A049B8;
    return;
L_08A049B8:
    ctx.set_gpr(31, 0x08A049C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 32u, 0x08A2031Cu>(ctx, &aot_mem) && ctx.pc == 0x08A049C0u) goto L_08A049C0;
    return;
L_08A049C0:
    ctx.set_gpr(31, 0x08A049C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 7u, 0x08A2008Cu>(ctx, &aot_mem) && ctx.pc == 0x08A049C8u) goto L_08A049C8;
    return;
L_08A049C8:
    ctx.set_gpr(31, 0x08A049D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 730u, 0x08A1FBECu>(ctx, &aot_mem) && ctx.pc == 0x08A049D0u) goto L_08A049D0;
    return;
L_08A049D0:
    ctx.set_gpr(31, 0x08A049D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 672u, 0x08A1F780u>(ctx, &aot_mem) && ctx.pc == 0x08A049D8u) goto L_08A049D8;
    return;
L_08A049D8:
    ctx.set_gpr(31, 0x08A049E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 551u, 0x08A1ECA8u>(ctx, &aot_mem) && ctx.pc == 0x08A049E0u) goto L_08A049E0;
    return;
L_08A049E0:
    ctx.set_gpr(31, 0x08A049E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 447u, 0x08A1E5B0u>(ctx, &aot_mem) && ctx.pc == 0x08A049E8u) goto L_08A049E8;
    return;
L_08A049E8:
    ctx.set_gpr(31, 0x08A049F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 415u, 0x08A1E354u>(ctx, &aot_mem) && ctx.pc == 0x08A049F0u) goto L_08A049F0;
    return;
L_08A049F0:
    ctx.set_gpr(31, 0x08A049F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 379u, 0x08A1E030u>(ctx, &aot_mem) && ctx.pc == 0x08A049F8u) goto L_08A049F8;
    return;
L_08A049F8:
    ctx.set_gpr(31, 0x08A04A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 315u, 0x08A1DA64u>(ctx, &aot_mem) && ctx.pc == 0x08A04A00u) goto L_08A04A00;
    return;
L_08A04A00:
    ctx.set_gpr(31, 0x08A04A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 275u, 0x08A1D7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A04A08u) goto L_08A04A08;
    return;
L_08A04A08:
    ctx.set_gpr(31, 0x08A04A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 247u, 0x08A1D52Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04A10u) goto L_08A04A10;
    return;
L_08A04A10:
    ctx.set_gpr(31, 0x08A04A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 209u, 0x08A1D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08A04A18u) goto L_08A04A18;
    return;
L_08A04A18:
    ctx.set_gpr(31, 0x08A04A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 182u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04A20u) goto L_08A04A20;
    return;
L_08A04A20:
    ctx.set_gpr(31, 0x08A04A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 151u, 0x08A1CC94u>(ctx, &aot_mem) && ctx.pc == 0x08A04A28u) goto L_08A04A28;
    return;
L_08A04A28:
    ctx.set_gpr(31, 0x08A04A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 97u, 0x08A1C850u>(ctx, &aot_mem) && ctx.pc == 0x08A04A30u) goto L_08A04A30;
    return;
L_08A04A30:
    ctx.set_gpr(31, 0x08A04A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 54u, 0x08A1C48Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04A38u) goto L_08A04A38;
    return;
L_08A04A38:
    ctx.set_gpr(31, 0x08A04A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 21u, 0x08A1C1CCu>(ctx, &aot_mem) && ctx.pc == 0x08A04A40u) goto L_08A04A40;
    return;
L_08A04A40:
    ctx.set_gpr(31, 0x08A04A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 761u, 0x08A1BEFCu>(ctx, &aot_mem) && ctx.pc == 0x08A04A48u) goto L_08A04A48;
    return;
L_08A04A48:
    ctx.set_gpr(31, 0x08A04A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 730u, 0x08A1BC40u>(ctx, &aot_mem) && ctx.pc == 0x08A04A50u) goto L_08A04A50;
    return;
L_08A04A50:
    ctx.set_gpr(31, 0x08A04A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 714u, 0x08A1BAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A04A58u) goto L_08A04A58;
    return;
L_08A04A58:
    ctx.set_gpr(31, 0x08A04A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 655u, 0x08A1B604u>(ctx, &aot_mem) && ctx.pc == 0x08A04A60u) goto L_08A04A60;
    return;
L_08A04A60:
    ctx.set_gpr(31, 0x08A04A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 611u, 0x08A1B21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04A68u) goto L_08A04A68;
    return;
L_08A04A68:
    ctx.set_gpr(31, 0x08A04A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 492u, 0x08A1AB64u>(ctx, &aot_mem) && ctx.pc == 0x08A04A70u) goto L_08A04A70;
    return;
L_08A04A70:
    ctx.set_gpr(31, 0x08A04A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 475u, 0x08A1A9CCu>(ctx, &aot_mem) && ctx.pc == 0x08A04A78u) goto L_08A04A78;
    return;
L_08A04A78:
    ctx.set_gpr(31, 0x08A04A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 440u, 0x08A1A6A0u>(ctx, &aot_mem) && ctx.pc == 0x08A04A80u) goto L_08A04A80;
    return;
L_08A04A80:
    ctx.set_gpr(31, 0x08A04A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 411u, 0x08A1A444u>(ctx, &aot_mem) && ctx.pc == 0x08A04A88u) goto L_08A04A88;
    return;
L_08A04A88:
    ctx.set_gpr(31, 0x08A04A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 381u, 0x08A1A190u>(ctx, &aot_mem) && ctx.pc == 0x08A04A90u) goto L_08A04A90;
    return;
L_08A04A90:
    ctx.set_gpr(31, 0x08A04A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 359u, 0x08A19F48u>(ctx, &aot_mem) && ctx.pc == 0x08A04A98u) goto L_08A04A98;
    return;
L_08A04A98:
    ctx.set_gpr(31, 0x08A04AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 325u, 0x08A19C34u>(ctx, &aot_mem) && ctx.pc == 0x08A04AA0u) goto L_08A04AA0;
    return;
L_08A04AA0:
    ctx.set_gpr(31, 0x08A04AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 301u, 0x08A199D0u>(ctx, &aot_mem) && ctx.pc == 0x08A04AA8u) goto L_08A04AA8;
    return;
L_08A04AA8:
    ctx.set_gpr(31, 0x08A04AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 285u, 0x08A19854u>(ctx, &aot_mem) && ctx.pc == 0x08A04AB0u) goto L_08A04AB0;
    return;
L_08A04AB0:
    ctx.set_gpr(31, 0x08A04AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 261u, 0x08A19630u>(ctx, &aot_mem) && ctx.pc == 0x08A04AB8u) goto L_08A04AB8;
    return;
L_08A04AB8:
    ctx.set_gpr(31, 0x08A04AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 226u, 0x08A19310u>(ctx, &aot_mem) && ctx.pc == 0x08A04AC0u) goto L_08A04AC0;
    return;
L_08A04AC0:
    ctx.set_gpr(31, 0x08A04AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 178u, 0x08A18FA0u>(ctx, &aot_mem) && ctx.pc == 0x08A04AC8u) goto L_08A04AC8;
    return;
L_08A04AC8:
    ctx.set_gpr(31, 0x08A04AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 154u, 0x08A18D50u>(ctx, &aot_mem) && ctx.pc == 0x08A04AD0u) goto L_08A04AD0;
    return;
L_08A04AD0:
    ctx.set_gpr(31, 0x08A04AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 130u, 0x08A18AE4u>(ctx, &aot_mem) && ctx.pc == 0x08A04AD8u) goto L_08A04AD8;
    return;
L_08A04AD8:
    ctx.set_gpr(31, 0x08A04AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 105u, 0x08A188D4u>(ctx, &aot_mem) && ctx.pc == 0x08A04AE0u) goto L_08A04AE0;
    return;
L_08A04AE0:
    ctx.set_gpr(31, 0x08A04AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 64u, 0x08A18544u>(ctx, &aot_mem) && ctx.pc == 0x08A04AE8u) goto L_08A04AE8;
    return;
L_08A04AE8:
    ctx.set_gpr(31, 0x08A04AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 29u, 0x08A1824Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04AF0u) goto L_08A04AF0;
    return;
L_08A04AF0:
    ctx.set_gpr(31, 0x08A04AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 723u, 0x08A17D74u>(ctx, &aot_mem) && ctx.pc == 0x08A04AF8u) goto L_08A04AF8;
    return;
L_08A04AF8:
    ctx.set_gpr(31, 0x08A04B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 666u, 0x08A1793Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04B00u) goto L_08A04B00;
    return;
L_08A04B00:
    ctx.set_gpr(31, 0x08A04B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 642u, 0x08A17738u>(ctx, &aot_mem) && ctx.pc == 0x08A04B08u) goto L_08A04B08;
    return;
L_08A04B08:
    ctx.set_gpr(31, 0x08A04B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 611u, 0x08A17454u>(ctx, &aot_mem) && ctx.pc == 0x08A04B10u) goto L_08A04B10;
    return;
L_08A04B10:
    ctx.set_gpr(31, 0x08A04B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 584u, 0x08A1721Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04B18u) goto L_08A04B18;
    return;
L_08A04B18:
    ctx.set_gpr(31, 0x08A04B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 558u, 0x08A16FC0u>(ctx, &aot_mem) && ctx.pc == 0x08A04B20u) goto L_08A04B20;
    return;
L_08A04B20:
    ctx.set_gpr(31, 0x08A04B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 531u, 0x08A16D20u>(ctx, &aot_mem) && ctx.pc == 0x08A04B28u) goto L_08A04B28;
    return;
L_08A04B28:
    ctx.set_gpr(31, 0x08A04B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 508u, 0x08A16AE4u>(ctx, &aot_mem) && ctx.pc == 0x08A04B30u) goto L_08A04B30;
    return;
L_08A04B30:
    ctx.set_gpr(31, 0x08A04B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 481u, 0x08A1683Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04B38u) goto L_08A04B38;
    return;
L_08A04B38:
    ctx.set_gpr(31, 0x08A04B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 456u, 0x08A165B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04B40u) goto L_08A04B40;
    return;
L_08A04B40:
    ctx.set_gpr(31, 0x08A04B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 420u, 0x08A16254u>(ctx, &aot_mem) && ctx.pc == 0x08A04B48u) goto L_08A04B48;
    return;
L_08A04B48:
    ctx.set_gpr(31, 0x08A04B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 398u, 0x08A16074u>(ctx, &aot_mem) && ctx.pc == 0x08A04B50u) goto L_08A04B50;
    return;
L_08A04B50:
    ctx.set_gpr(31, 0x08A04B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 372u, 0x08A15E30u>(ctx, &aot_mem) && ctx.pc == 0x08A04B58u) goto L_08A04B58;
    return;
L_08A04B58:
    ctx.set_gpr(31, 0x08A04B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 334u, 0x08A15AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A04B60u) goto L_08A04B60;
    return;
L_08A04B60:
    ctx.set_gpr(31, 0x08A04B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 273u, 0x08A1565Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04B68u) goto L_08A04B68;
    return;
L_08A04B68:
    ctx.set_gpr(31, 0x08A04B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 226u, 0x08A152C0u>(ctx, &aot_mem) && ctx.pc == 0x08A04B70u) goto L_08A04B70;
    return;
L_08A04B70:
    ctx.set_gpr(31, 0x08A04B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 187u, 0x08A14F54u>(ctx, &aot_mem) && ctx.pc == 0x08A04B78u) goto L_08A04B78;
    return;
L_08A04B78:
    ctx.set_gpr(31, 0x08A04B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 163u, 0x08A14D68u>(ctx, &aot_mem) && ctx.pc == 0x08A04B80u) goto L_08A04B80;
    return;
L_08A04B80:
    ctx.set_gpr(31, 0x08A04B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 131u, 0x08A14A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04B88u) goto L_08A04B88;
    return;
L_08A04B88:
    ctx.set_gpr(31, 0x08A04B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 92u, 0x08A14740u>(ctx, &aot_mem) && ctx.pc == 0x08A04B90u) goto L_08A04B90;
    return;
L_08A04B90:
    ctx.set_gpr(31, 0x08A04B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 48u, 0x08A14390u>(ctx, &aot_mem) && ctx.pc == 0x08A04B98u) goto L_08A04B98;
    return;
L_08A04B98:
    ctx.set_gpr(31, 0x08A04BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 20u, 0x08A14174u>(ctx, &aot_mem) && ctx.pc == 0x08A04BA0u) goto L_08A04BA0;
    return;
L_08A04BA0:
    ctx.set_gpr(31, 0x08A04BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 759u, 0x08A13E98u>(ctx, &aot_mem) && ctx.pc == 0x08A04BA8u) goto L_08A04BA8;
    return;
L_08A04BA8:
    ctx.set_gpr(31, 0x08A04BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 743u, 0x08A13D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04BB0u) goto L_08A04BB0;
    return;
L_08A04BB0:
    ctx.set_gpr(31, 0x08A04BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 713u, 0x08A13A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04BB8u) goto L_08A04BB8;
    return;
L_08A04BB8:
    ctx.set_gpr(31, 0x08A04BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 693u, 0x08A138C8u>(ctx, &aot_mem) && ctx.pc == 0x08A04BC0u) goto L_08A04BC0;
    return;
L_08A04BC0:
    ctx.set_gpr(31, 0x08A04BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 661u, 0x08A135D8u>(ctx, &aot_mem) && ctx.pc == 0x08A04BC8u) goto L_08A04BC8;
    return;
L_08A04BC8:
    ctx.set_gpr(31, 0x08A04BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 618u, 0x08A13270u>(ctx, &aot_mem) && ctx.pc == 0x08A04BD0u) goto L_08A04BD0;
    return;
L_08A04BD0:
    ctx.set_gpr(31, 0x08A04BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 601u, 0x08A130D0u>(ctx, &aot_mem) && ctx.pc == 0x08A04BD8u) goto L_08A04BD8;
    return;
L_08A04BD8:
    ctx.set_gpr(31, 0x08A04BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 587u, 0x08A12F84u>(ctx, &aot_mem) && ctx.pc == 0x08A04BE0u) goto L_08A04BE0;
    return;
L_08A04BE0:
    ctx.set_gpr(31, 0x08A04BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 573u, 0x08A12E38u>(ctx, &aot_mem) && ctx.pc == 0x08A04BE8u) goto L_08A04BE8;
    return;
L_08A04BE8:
    ctx.set_gpr(31, 0x08A04BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 559u, 0x08A12CECu>(ctx, &aot_mem) && ctx.pc == 0x08A04BF0u) goto L_08A04BF0;
    return;
L_08A04BF0:
    ctx.set_gpr(31, 0x08A04BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 539u, 0x08A12B48u>(ctx, &aot_mem) && ctx.pc == 0x08A04BF8u) goto L_08A04BF8;
    return;
L_08A04BF8:
    ctx.set_gpr(31, 0x08A04C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 519u, 0x08A129A4u>(ctx, &aot_mem) && ctx.pc == 0x08A04C00u) goto L_08A04C00;
    return;
L_08A04C00:
    ctx.set_gpr(31, 0x08A04C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 486u, 0x08A126A8u>(ctx, &aot_mem) && ctx.pc == 0x08A04C08u) goto L_08A04C08;
    return;
L_08A04C08:
    ctx.set_gpr(31, 0x08A04C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 453u, 0x08A123D0u>(ctx, &aot_mem) && ctx.pc == 0x08A04C10u) goto L_08A04C10;
    return;
L_08A04C10:
    ctx.set_gpr(31, 0x08A04C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 425u, 0x08A121A0u>(ctx, &aot_mem) && ctx.pc == 0x08A04C18u) goto L_08A04C18;
    return;
L_08A04C18:
    ctx.set_gpr(31, 0x08A04C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 391u, 0x08A11E70u>(ctx, &aot_mem) && ctx.pc == 0x08A04C20u) goto L_08A04C20;
    return;
L_08A04C20:
    ctx.set_gpr(31, 0x08A04C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 345u, 0x08A11A58u>(ctx, &aot_mem) && ctx.pc == 0x08A04C28u) goto L_08A04C28;
    return;
L_08A04C28:
    ctx.set_gpr(31, 0x08A04C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 215u, 0x08A11020u>(ctx, &aot_mem) && ctx.pc == 0x08A04C30u) goto L_08A04C30;
    return;
L_08A04C30:
    ctx.set_gpr(31, 0x08A04C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 121u, 0x08A109F4u>(ctx, &aot_mem) && ctx.pc == 0x08A04C38u) goto L_08A04C38;
    return;
L_08A04C38:
    ctx.set_gpr(31, 0x08A04C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 101u, 0x08A10848u>(ctx, &aot_mem) && ctx.pc == 0x08A04C40u) goto L_08A04C40;
    return;
L_08A04C40:
    ctx.set_gpr(31, 0x08A04C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 73u, 0x08A105D4u>(ctx, &aot_mem) && ctx.pc == 0x08A04C48u) goto L_08A04C48;
    return;
L_08A04C48:
    ctx.set_gpr(31, 0x08A04C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 46u, 0x08A103B4u>(ctx, &aot_mem) && ctx.pc == 0x08A04C50u) goto L_08A04C50;
    return;
L_08A04C50:
    ctx.set_gpr(31, 0x08A04C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 29u, 0x08A10260u>(ctx, &aot_mem) && ctx.pc == 0x08A04C58u) goto L_08A04C58;
    return;
L_08A04C58:
    ctx.set_gpr(31, 0x08A04C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 779u, 0x08A0FF90u>(ctx, &aot_mem) && ctx.pc == 0x08A04C60u) goto L_08A04C60;
    return;
L_08A04C60:
    ctx.set_gpr(31, 0x08A04C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 753u, 0x08A0FD74u>(ctx, &aot_mem) && ctx.pc == 0x08A04C68u) goto L_08A04C68;
    return;
L_08A04C68:
    ctx.set_gpr(31, 0x08A04C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 654u, 0x08A0F51Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04C70u) goto L_08A04C70;
    return;
L_08A04C70:
    ctx.set_gpr(31, 0x08A04C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 592u, 0x08A0F15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04C78u) goto L_08A04C78;
    return;
L_08A04C78:
    ctx.set_gpr(31, 0x08A04C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 572u, 0x08A0EFB8u>(ctx, &aot_mem) && ctx.pc == 0x08A04C80u) goto L_08A04C80;
    return;
L_08A04C80:
    ctx.set_gpr(31, 0x08A04C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 552u, 0x08A0EE14u>(ctx, &aot_mem) && ctx.pc == 0x08A04C88u) goto L_08A04C88;
    return;
L_08A04C88:
    ctx.set_gpr(31, 0x08A04C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 532u, 0x08A0EC70u>(ctx, &aot_mem) && ctx.pc == 0x08A04C90u) goto L_08A04C90;
    return;
L_08A04C90:
    ctx.set_gpr(31, 0x08A04C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 512u, 0x08A0EACCu>(ctx, &aot_mem) && ctx.pc == 0x08A04C98u) goto L_08A04C98;
    return;
L_08A04C98:
    ctx.set_gpr(31, 0x08A04CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 492u, 0x08A0E928u>(ctx, &aot_mem) && ctx.pc == 0x08A04CA0u) goto L_08A04CA0;
    return;
L_08A04CA0:
    ctx.set_gpr(31, 0x08A04CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 472u, 0x08A0E784u>(ctx, &aot_mem) && ctx.pc == 0x08A04CA8u) goto L_08A04CA8;
    return;
L_08A04CA8:
    ctx.set_gpr(31, 0x08A04CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 452u, 0x08A0E5E0u>(ctx, &aot_mem) && ctx.pc == 0x08A04CB0u) goto L_08A04CB0;
    return;
L_08A04CB0:
    ctx.set_gpr(31, 0x08A04CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 432u, 0x08A0E43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04CB8u) goto L_08A04CB8;
    return;
L_08A04CB8:
    ctx.set_gpr(31, 0x08A04CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 412u, 0x08A0E298u>(ctx, &aot_mem) && ctx.pc == 0x08A04CC0u) goto L_08A04CC0;
    return;
L_08A04CC0:
    ctx.set_gpr(31, 0x08A04CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 392u, 0x08A0E0FCu>(ctx, &aot_mem) && ctx.pc == 0x08A04CC8u) goto L_08A04CC8;
    return;
L_08A04CC8:
    ctx.set_gpr(31, 0x08A04CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 378u, 0x08A0DFB8u>(ctx, &aot_mem) && ctx.pc == 0x08A04CD0u) goto L_08A04CD0;
    return;
L_08A04CD0:
    ctx.set_gpr(31, 0x08A04CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 339u, 0x08A0DC30u>(ctx, &aot_mem) && ctx.pc == 0x08A04CD8u) goto L_08A04CD8;
    return;
L_08A04CD8:
    ctx.set_gpr(31, 0x08A04CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 283u, 0x08A0D82Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04CE0u) goto L_08A04CE0;
    return;
L_08A04CE0:
    ctx.set_gpr(31, 0x08A04CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 260u, 0x08A0D5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A04CE8u) goto L_08A04CE8;
    return;
L_08A04CE8:
    ctx.set_gpr(31, 0x08A04CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 232u, 0x08A0D3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A04CF0u) goto L_08A04CF0;
    return;
L_08A04CF0:
    ctx.set_gpr(31, 0x08A04CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 198u, 0x08A0D0CCu>(ctx, &aot_mem) && ctx.pc == 0x08A04CF8u) goto L_08A04CF8;
    return;
L_08A04CF8:
    ctx.set_gpr(31, 0x08A04D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 173u, 0x08A0CED0u>(ctx, &aot_mem) && ctx.pc == 0x08A04D00u) goto L_08A04D00;
    return;
L_08A04D00:
    ctx.set_gpr(31, 0x08A04D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 151u, 0x08A0CCB8u>(ctx, &aot_mem) && ctx.pc == 0x08A04D08u) goto L_08A04D08;
    return;
L_08A04D08:
    ctx.set_gpr(31, 0x08A04D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 125u, 0x08A0CA18u>(ctx, &aot_mem) && ctx.pc == 0x08A04D10u) goto L_08A04D10;
    return;
L_08A04D10:
    ctx.set_gpr(31, 0x08A04D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 107u, 0x08A0C874u>(ctx, &aot_mem) && ctx.pc == 0x08A04D18u) goto L_08A04D18;
    return;
L_08A04D18:
    ctx.set_gpr(31, 0x08A04D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 71u, 0x08A0C554u>(ctx, &aot_mem) && ctx.pc == 0x08A04D20u) goto L_08A04D20;
    return;
L_08A04D20:
    ctx.set_gpr(31, 0x08A04D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 26u, 0x08A0C238u>(ctx, &aot_mem) && ctx.pc == 0x08A04D28u) goto L_08A04D28;
    return;
L_08A04D28:
    ctx.set_gpr(31, 0x08A04D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 10u, 0x08A0C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04D30u) goto L_08A04D30;
    return;
L_08A04D30:
    ctx.set_gpr(31, 0x08A04D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 731u, 0x08A0BDF4u>(ctx, &aot_mem) && ctx.pc == 0x08A04D38u) goto L_08A04D38;
    return;
L_08A04D38:
    ctx.set_gpr(31, 0x08A04D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 708u, 0x08A0BC04u>(ctx, &aot_mem) && ctx.pc == 0x08A04D40u) goto L_08A04D40;
    return;
L_08A04D40:
    ctx.set_gpr(31, 0x08A04D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 682u, 0x08A0B9C0u>(ctx, &aot_mem) && ctx.pc == 0x08A04D48u) goto L_08A04D48;
    return;
L_08A04D48:
    ctx.set_gpr(31, 0x08A04D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 667u, 0x08A0B84Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04D50u) goto L_08A04D50;
    return;
L_08A04D50:
    ctx.set_gpr(31, 0x08A04D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 633u, 0x08A0B548u>(ctx, &aot_mem) && ctx.pc == 0x08A04D58u) goto L_08A04D58;
    return;
L_08A04D58:
    ctx.set_gpr(31, 0x08A04D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 614u, 0x08A0B38Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04D60u) goto L_08A04D60;
    return;
L_08A04D60:
    ctx.set_gpr(31, 0x08A04D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 586u, 0x08A0B118u>(ctx, &aot_mem) && ctx.pc == 0x08A04D68u) goto L_08A04D68;
    return;
L_08A04D68:
    ctx.set_gpr(31, 0x08A04D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 504u, 0x08A0AA68u>(ctx, &aot_mem) && ctx.pc == 0x08A04D70u) goto L_08A04D70;
    return;
L_08A04D70:
    ctx.set_gpr(31, 0x08A04D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 434u, 0x08A0A654u>(ctx, &aot_mem) && ctx.pc == 0x08A04D78u) goto L_08A04D78;
    return;
L_08A04D78:
    ctx.set_gpr(31, 0x08A04D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 414u, 0x08A0A4B0u>(ctx, &aot_mem) && ctx.pc == 0x08A04D80u) goto L_08A04D80;
    return;
L_08A04D80:
    ctx.set_gpr(31, 0x08A04D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 382u, 0x08A0A1E0u>(ctx, &aot_mem) && ctx.pc == 0x08A04D88u) goto L_08A04D88;
    return;
L_08A04D88:
    ctx.set_gpr(31, 0x08A04D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 338u, 0x08A09E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04D90u) goto L_08A04D90;
    return;
L_08A04D90:
    ctx.set_gpr(31, 0x08A04D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 291u, 0x08A09AACu>(ctx, &aot_mem) && ctx.pc == 0x08A04D98u) goto L_08A04D98;
    return;
L_08A04D98:
    ctx.set_gpr(31, 0x08A04DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 267u, 0x08A09878u>(ctx, &aot_mem) && ctx.pc == 0x08A04DA0u) goto L_08A04DA0;
    return;
L_08A04DA0:
    ctx.set_gpr(31, 0x08A04DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 242u, 0x08A0961Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04DA8u) goto L_08A04DA8;
    return;
L_08A04DA8:
    ctx.set_gpr(31, 0x08A04DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 198u, 0x08A09250u>(ctx, &aot_mem) && ctx.pc == 0x08A04DB0u) goto L_08A04DB0;
    return;
L_08A04DB0:
    ctx.set_gpr(31, 0x08A04DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 168u, 0x08A08F94u>(ctx, &aot_mem) && ctx.pc == 0x08A04DB8u) goto L_08A04DB8;
    return;
L_08A04DB8:
    ctx.set_gpr(31, 0x08A04DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 149u, 0x08A08DDCu>(ctx, &aot_mem) && ctx.pc == 0x08A04DC0u) goto L_08A04DC0;
    return;
L_08A04DC0:
    ctx.set_gpr(31, 0x08A04DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 123u, 0x08A08B84u>(ctx, &aot_mem) && ctx.pc == 0x08A04DC8u) goto L_08A04DC8;
    return;
L_08A04DC8:
    ctx.set_gpr(31, 0x08A04DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 102u, 0x08A08988u>(ctx, &aot_mem) && ctx.pc == 0x08A04DD0u) goto L_08A04DD0;
    return;
L_08A04DD0:
    ctx.set_gpr(31, 0x08A04DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 81u, 0x08A08758u>(ctx, &aot_mem) && ctx.pc == 0x08A04DD8u) goto L_08A04DD8;
    return;
L_08A04DD8:
    ctx.set_gpr(31, 0x08A04DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 46u, 0x08A0841Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04DE0u) goto L_08A04DE0;
    return;
L_08A04DE0:
    ctx.set_gpr(31, 0x08A04DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 30u, 0x08A082A8u>(ctx, &aot_mem) && ctx.pc == 0x08A04DE8u) goto L_08A04DE8;
    return;
L_08A04DE8:
    ctx.set_gpr(31, 0x08A04DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 13u, 0x08A0810Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04DF0u) goto L_08A04DF0;
    return;
L_08A04DF0:
    ctx.set_gpr(31, 0x08A04DF8u);
    // nop
    goto L_08A07F70;
L_08A04DF8:
    ctx.set_gpr(31, 0x08A04E00u);
    // nop
    goto L_08A07DCC;
L_08A04E00:
    ctx.set_gpr(31, 0x08A04E08u);
    // nop
    goto L_08A07C28;
L_08A04E08:
    ctx.set_gpr(31, 0x08A04E10u);
    // nop
    goto L_08A07ADC;
L_08A04E10:
    ctx.set_gpr(31, 0x08A04E18u);
    // nop
    goto L_08A07990;
L_08A04E18:
    ctx.set_gpr(31, 0x08A04E20u);
    // nop
    goto L_08A07674;
L_08A04E20:
    ctx.set_gpr(31, 0x08A04E28u);
    // nop
    goto L_08A07270;
L_08A04E28:
    ctx.set_gpr(31, 0x08A04E30u);
    // nop
    goto L_08A06F7C;
L_08A04E30:
    ctx.set_gpr(31, 0x08A04E38u);
    // nop
    goto L_08A06CF0;
L_08A04E38:
    ctx.set_gpr(31, 0x08A04E40u);
    // nop
    goto L_08A06A6C;
L_08A04E40:
    ctx.set_gpr(31, 0x08A04E48u);
    // nop
    goto L_08A06764;
L_08A04E48:
    ctx.set_gpr(31, 0x08A04E50u);
    // nop
    goto L_08A06558;
L_08A04E50:
    ctx.set_gpr(31, 0x08A04E58u);
    // nop
    goto L_08A0615C;
L_08A04E58:
    ctx.set_gpr(31, 0x08A04E60u);
    // nop
    goto L_08A05DDC;
L_08A04E60:
    ctx.set_gpr(31, 0x08A04E68u);
    // nop
    goto L_08A05BC0;
L_08A04E68:
    ctx.set_gpr(31, 0x08A04E70u);
    // nop
    goto L_08A05A6C;
L_08A04E70:
    ctx.set_gpr(31, 0x08A04E78u);
    // nop
    goto L_08A0566C;
L_08A04E78:
    ctx.set_gpr(31, 0x08A04E80u);
    // nop
    goto L_08A052AC;
L_08A04E80:
    ctx.set_gpr(31, 0x08A04E88u);
    // nop
    goto L_08A05070;
L_08A04E88:
    ctx.set_gpr(31, 0x08A04E90u);
    // nop
    goto L_08A04F70;
L_08A04E90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04EA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A04EB8u);
    // nop
    goto L_08A04F70;
L_08A04EB8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26584)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A04ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A04ECCu) goto L_08A04ECC;
    return;
L_08A04ECC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04EE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26584)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04F0C;
      }
      goto L_08A04EF8;
    }
L_08A04EF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A04F14;
      }
      goto L_08A04F0C;
    }
L_08A04F0C:
    ctx.set_gpr(31, 0x08A04F14u);
    // nop
    goto L_08A04F70;
L_08A04F14:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26584)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04F2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A04F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A04F40u) goto L_08A04F40;
    return;
L_08A04F40:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(312));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A04F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A04F54u) goto L_08A04F54;
    return;
L_08A04F54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04F70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20376));
    ctx.set_gpr(31, 0x08A04F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A04F88u) goto L_08A04F88;
    return;
L_08A04F88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04F98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A04FA8u);
    // nop
    goto L_08A04824;
L_08A04FA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26584));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(20484));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-10404));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(20268));
    ctx.set_gpr(31, 0x08A04FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A04FF4u) goto L_08A04FF4;
    return;
L_08A04FF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05014u);
    // nop
    goto L_08A04EE0;
L_08A05014:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26580)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05050;
      }
      goto L_08A0503C;
    }
L_08A0503C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05058;
      }
      goto L_08A05050;
    }
L_08A05050:
    ctx.set_gpr(31, 0x08A05058u);
    // nop
    goto L_08A05070;
L_08A05058:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26580)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05070:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20632));
    ctx.set_gpr(31, 0x08A05088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A05088u) goto L_08A05088;
    return;
L_08A05088:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05098:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A050A8u);
    // nop
    goto L_08A04824;
L_08A050A8:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20784));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26580));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(20752));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-10376));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A05100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A05100u) goto L_08A05100;
    return;
L_08A05100:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05120u);
    // nop
    goto L_08A05024;
L_08A05120:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26580)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A05158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A05158u) goto L_08A05158;
    return;
L_08A05158:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10364));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A05174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A05174u) goto L_08A05174;
    return;
L_08A05174:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A05184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05184u) goto L_08A05184;
    return;
L_08A05184:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A05190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 88u, 0x08A10760u>(ctx, &aot_mem) && ctx.pc == 0x08A05190u) goto L_08A05190;
    return;
L_08A05190:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10344));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10340));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-10336));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A051D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A051D0u) goto L_08A051D0;
    return;
L_08A051D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A051EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26572)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05218;
      }
      goto L_08A05204;
    }
L_08A05204:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05220;
      }
      goto L_08A05218;
    }
L_08A05218:
    ctx.set_gpr(31, 0x08A05220u);
    // nop
    goto L_08A052AC;
L_08A05220:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26572)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A05250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A05250u) goto L_08A05250;
    return;
L_08A05250:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A05268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A05268u) goto L_08A05268;
    return;
L_08A05268:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05294;
      }
      goto L_08A0528C;
    }
L_08A0528C:
    ctx.set_gpr(31, 0x08A05294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A05294u) goto L_08A05294;
    return;
L_08A05294:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A052AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21204));
    ctx.set_gpr(31, 0x08A052C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A052C4u) goto L_08A052C4;
    return;
L_08A052C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A052D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A052E4u);
    // nop
    goto L_08A04824;
L_08A052E4:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21368));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21588));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10332));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26572));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(21336));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-10324));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(21048));
    ctx.set_gpr(31, 0x08A05348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A05348u) goto L_08A05348;
    return;
L_08A05348:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05368u);
    // nop
    goto L_08A051EC;
L_08A05368:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26572)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A053A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A053A0u) goto L_08A053A0;
    return;
L_08A053A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10312));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A053BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A053BCu) goto L_08A053BC;
    return;
L_08A053BC:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A053CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A053CCu) goto L_08A053CC;
    return;
L_08A053CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A053E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 63u, 0x089284A0u>(ctx, &aot_mem) && ctx.pc == 0x08A053E0u) goto L_08A053E0;
    return;
L_08A053E0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A053F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A053F0u) goto L_08A053F0;
    return;
L_08A053F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A053FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 365u, 0x08A0DED0u>(ctx, &aot_mem) && ctx.pc == 0x08A053FCu) goto L_08A053FC;
    return;
L_08A053FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10212));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10192));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-10172));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A05428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05428u) goto L_08A05428;
    return;
L_08A05428:
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21636));
    ctx.set_gpr(31, 0x08A05438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x08A05438u) goto L_08A05438;
    return;
L_08A05438:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 283u, 0x08A69A04u>(ctx, &aot_mem) && ctx.pc == 0x08A05464u) goto L_08A05464;
    return;
L_08A05464:
    ctx.set_gpr(4, 2215u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26384));
    ctx.set_gpr(31, 0x08A05474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 240u, 0x089451F4u>(ctx, &aot_mem) && ctx.pc == 0x08A05474u) goto L_08A05474;
    return;
L_08A05474:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 312u, 0x08A69C38u>(ctx, &aot_mem) && ctx.pc == 0x08A05494u) goto L_08A05494;
    return;
L_08A05494:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A054A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26548)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A054D0;
      }
      goto L_08A054BC;
    }
L_08A054BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A054D8;
      }
      goto L_08A054D0;
    }
L_08A054D0:
    ctx.set_gpr(31, 0x08A054D8u);
    // nop
    goto L_08A0566C;
L_08A054D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26548)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A054F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A05508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A05508u) goto L_08A05508;
    return;
L_08A05508:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0552Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0552Cu) goto L_08A0552C;
    return;
L_08A0552C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19912));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A05550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05550u) goto L_08A05550;
    return;
L_08A05550:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08A0555Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0555Cu) goto L_08A0555C;
    return;
L_08A0555C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A05568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05568u) goto L_08A05568;
    return;
L_08A05568:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A05574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05574u) goto L_08A05574;
    return;
L_08A05574:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0558C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05650;
      }
      goto L_08A055AC;
    }
L_08A055AC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19912));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A055D8;
      }
      goto L_08A055C4;
    }
L_08A055C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A055D8;
      }
      goto L_08A055D0;
    }
L_08A055D0:
    ctx.set_gpr(31, 0x08A055D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A055D8u) goto L_08A055D8;
    return;
L_08A055D8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A055F8;
      }
      goto L_08A055E4;
    }
L_08A055E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A055F8;
      }
      goto L_08A055F0;
    }
L_08A055F0:
    ctx.set_gpr(31, 0x08A055F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A055F8u) goto L_08A055F8;
    return;
L_08A055F8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05618;
      }
      goto L_08A05604;
    }
L_08A05604:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05618;
      }
      goto L_08A05610;
    }
L_08A05610:
    ctx.set_gpr(31, 0x08A05618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A05618u) goto L_08A05618;
    return;
L_08A05618:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05638;
      }
      goto L_08A05624;
    }
L_08A05624:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05638;
      }
      goto L_08A05630;
    }
L_08A05630:
    ctx.set_gpr(31, 0x08A05638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A05638u) goto L_08A05638;
    return;
L_08A05638:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A05650;
      }
      goto L_08A05644;
    }
L_08A05644:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A05650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x08A05650u) goto L_08A05650;
    return;
L_08A05650:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0566C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22164));
    ctx.set_gpr(31, 0x08A05684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A05684u) goto L_08A05684;
    return;
L_08A05684:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05694:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A056A4u);
    // nop
    goto L_08A04824;
L_08A056A4:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10152));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26548));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10716));
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22320));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(22288));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-10136));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(21744));
    ctx.set_gpr(31, 0x08A05700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A05700u) goto L_08A05700;
    return;
L_08A05700:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05720u);
    // nop
    goto L_08A054A4;
L_08A05720:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05730:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25788)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26548)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10112));
    ctx.set_gpr(31, 0x08A05770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A05770u) goto L_08A05770;
    return;
L_08A05770:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A05784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x08A05784u) goto L_08A05784;
    return;
L_08A05784:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A057A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A057A0u) goto L_08A057A0;
    return;
L_08A057A0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A057ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 581u, 0x088C3344u>(ctx, &aot_mem) && ctx.pc == 0x08A057ACu) goto L_08A057AC;
    return;
L_08A057AC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26544));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A057DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x08A057DCu) goto L_08A057DC;
    return;
L_08A057DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05804;
      }
      goto L_08A057F8;
    }
L_08A057F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A05804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A05804u) goto L_08A05804;
    return;
L_08A05804:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10096));
    ctx.set_gpr(31, 0x08A05818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A05818u) goto L_08A05818;
    return;
L_08A05818:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0582Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x08A0582Cu) goto L_08A0582C;
    return;
L_08A0582C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A05848u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05848u) goto L_08A05848;
    return;
L_08A05848:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A05854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 581u, 0x088C3344u>(ctx, &aot_mem) && ctx.pc == 0x08A05854u) goto L_08A05854;
    return;
L_08A05854:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26540));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A05884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x08A05884u) goto L_08A05884;
    return;
L_08A05884:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A058AC;
      }
      goto L_08A058A0;
    }
L_08A058A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A058ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A058ACu) goto L_08A058AC;
    return;
L_08A058AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10080));
    ctx.set_gpr(31, 0x08A058C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A058C0u) goto L_08A058C0;
    return;
L_08A058C0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A058D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x08A058D4u) goto L_08A058D4;
    return;
L_08A058D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A058F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A058F0u) goto L_08A058F0;
    return;
L_08A058F0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A058FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 439u, 0x08A768A4u>(ctx, &aot_mem) && ctx.pc == 0x08A058FCu) goto L_08A058FC;
    return;
L_08A058FC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A05910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 626u, 0x0894AD9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05910u) goto L_08A05910;
    return;
L_08A05910:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26536));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A05934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x08A05934u) goto L_08A05934;
    return;
L_08A05934:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0595C;
      }
      goto L_08A05950;
    }
L_08A05950:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0595Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A0595Cu) goto L_08A0595C;
    return;
L_08A0595C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-10068));
    ctx.set_gpr(31, 0x08A05970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A05970u) goto L_08A05970;
    return;
L_08A05970:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A05984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x08A05984u) goto L_08A05984;
    return;
L_08A05984:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A059A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A059A0u) goto L_08A059A0;
    return;
L_08A059A0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A059ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 526u, 0x08A12A60u>(ctx, &aot_mem) && ctx.pc == 0x08A059ACu) goto L_08A059AC;
    return;
L_08A059AC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26532));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A059DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x08A059DCu) goto L_08A059DC;
    return;
L_08A059DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05A04;
      }
      goto L_08A059F8;
    }
L_08A059F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A05A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A05A04u) goto L_08A05A04;
    return;
L_08A05A04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05A20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26528)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05A4C;
      }
      goto L_08A05A38;
    }
L_08A05A38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05A54;
      }
      goto L_08A05A4C;
    }
L_08A05A4C:
    ctx.set_gpr(31, 0x08A05A54u);
    // nop
    goto L_08A05A6C;
L_08A05A54:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26528)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05A6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23188));
    ctx.set_gpr(31, 0x08A05A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A05A84u) goto L_08A05A84;
    return;
L_08A05A84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05A94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05AA4u);
    // nop
    goto L_08A04824;
L_08A05AA4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26528));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(23292));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-10056));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A05AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A05AECu) goto L_08A05AEC;
    return;
L_08A05AEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05AFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05B0Cu);
    // nop
    goto L_08A05A20;
L_08A05B0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05B1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26524)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05B5C;
      }
      goto L_08A05B34;
    }
L_08A05B34:
    ctx.set_gpr(31, 0x08A05B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A05B3Cu) goto L_08A05B3C;
    return;
L_08A05B3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A05B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A05B48u) goto L_08A05B48;
    return;
L_08A05B48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A05B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A05B54u) goto L_08A05B54;
    return;
L_08A05B54:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26524), ctx.gpr[2]);
    goto L_08A05B5C;
L_08A05B5C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26524)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05B74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26524)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05BA0;
      }
      goto L_08A05B8C;
    }
L_08A05B8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05BA8;
      }
      goto L_08A05BA0;
    }
L_08A05BA0:
    ctx.set_gpr(31, 0x08A05BA8u);
    // nop
    goto L_08A05BC0;
L_08A05BA8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26524)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05BC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23528));
    ctx.set_gpr(31, 0x08A05BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A05BD8u) goto L_08A05BD8;
    return;
L_08A05BD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05BE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05BF8u);
    // nop
    goto L_08A04824;
L_08A05BF8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26524));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(23632));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-10028));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A05C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A05C40u) goto L_08A05C40;
    return;
L_08A05C40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05C60u);
    // nop
    goto L_08A05B74;
L_08A05C60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05C70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26520)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05C9C;
      }
      goto L_08A05C88;
    }
L_08A05C88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05CA4;
      }
      goto L_08A05C9C;
    }
L_08A05C9C:
    ctx.set_gpr(31, 0x08A05CA4u);
    // nop
    goto L_08A05DDC;
L_08A05CA4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26520)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05CBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A05CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A05CD4u) goto L_08A05CD4;
    return;
L_08A05CD4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23156));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(31, 0x08A05D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A05D0Cu) goto L_08A05D0C;
    return;
L_08A05D0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23156));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05D38;
      }
      goto L_08A05D30;
    }
L_08A05D30:
    ctx.set_gpr(31, 0x08A05D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A05D38u) goto L_08A05D38;
    return;
L_08A05D38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05D4C;
      }
      goto L_08A05D44;
    }
L_08A05D44:
    ctx.set_gpr(31, 0x08A05D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A05D4Cu) goto L_08A05D4C;
    return;
L_08A05D4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05D60;
      }
      goto L_08A05D58;
    }
L_08A05D58:
    ctx.set_gpr(31, 0x08A05D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A05D60u) goto L_08A05D60;
    return;
L_08A05D60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05D74;
      }
      goto L_08A05D6C;
    }
L_08A05D6C:
    ctx.set_gpr(31, 0x08A05D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A05D74u) goto L_08A05D74;
    return;
L_08A05D74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05D88;
      }
      goto L_08A05D80;
    }
L_08A05D80:
    ctx.set_gpr(31, 0x08A05D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A05D88u) goto L_08A05D88;
    return;
L_08A05D88:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22868));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A05DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05DA0u) goto L_08A05DA0;
    return;
L_08A05DA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08A05DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05DACu) goto L_08A05DAC;
    return;
L_08A05DAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A05DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05DB8u) goto L_08A05DB8;
    return;
L_08A05DB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A05DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05DC4u) goto L_08A05DC4;
    return;
L_08A05DC4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24068));
    ctx.set_gpr(31, 0x08A05DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A05DF4u) goto L_08A05DF4;
    return;
L_08A05DF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05E04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05E14u);
    // nop
    goto L_08A04824;
L_08A05E14:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24248));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10008));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26520));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24964));
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24232));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(24200));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-9992));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(23740));
    ctx.set_gpr(31, 0x08A05E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A05E78u) goto L_08A05E78;
    return;
L_08A05E78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05E88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A05E98u);
    // nop
    goto L_08A05C70;
L_08A05E98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05EA8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26476)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05EB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26520)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A05EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A05EE4u) goto L_08A05EE4;
    return;
L_08A05EE4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9968));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A05F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A05F00u) goto L_08A05F00;
    return;
L_08A05F00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A05F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05F10u) goto L_08A05F10;
    return;
L_08A05F10:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A05F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 571u, 0x088F7008u>(ctx, &aot_mem) && ctx.pc == 0x08A05F1Cu) goto L_08A05F1C;
    return;
L_08A05F1C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9620));
    ctx.set_gpr(31, 0x08A05F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A05F3Cu) goto L_08A05F3C;
    return;
L_08A05F3C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A05F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x08A05F50u) goto L_08A05F50;
    return;
L_08A05F50:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A05F6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05F6Cu) goto L_08A05F6C;
    return;
L_08A05F6C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A05F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 626u, 0x0894AD9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05F80u) goto L_08A05F80;
    return;
L_08A05F80:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26512));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A05FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x08A05FA4u) goto L_08A05FA4;
    return;
L_08A05FA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A05FCC;
      }
      goto L_08A05FC0;
    }
L_08A05FC0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A05FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A05FCCu) goto L_08A05FCC;
    return;
L_08A05FCC:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A05FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05FDCu) goto L_08A05FDC;
    return;
L_08A05FDC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A05FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 204u, 0x089F5114u>(ctx, &aot_mem) && ctx.pc == 0x08A05FE8u) goto L_08A05FE8;
    return;
L_08A05FE8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A05FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05FFCu) goto L_08A05FFC;
    return;
L_08A05FFC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A06008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 204u, 0x089F5114u>(ctx, &aot_mem) && ctx.pc == 0x08A06008u) goto L_08A06008;
    return;
L_08A06008:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0601Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0601Cu) goto L_08A0601C;
    return;
L_08A0601C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A06028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 204u, 0x089F5114u>(ctx, &aot_mem) && ctx.pc == 0x08A06028u) goto L_08A06028;
    return;
L_08A06028:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0603Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0603Cu) goto L_08A0603C;
    return;
L_08A0603C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08A0604Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0604Cu) goto L_08A0604C;
    return;
L_08A0604C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0605Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0605Cu) goto L_08A0605C;
    return;
L_08A0605C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A06074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06074u) goto L_08A06074;
    return;
L_08A06074:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A06088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 63u, 0x089284A0u>(ctx, &aot_mem) && ctx.pc == 0x08A06088u) goto L_08A06088;
    return;
L_08A06088:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A06098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06098u) goto L_08A06098;
    return;
L_08A06098:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A060A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 130u, 0x08A1CB34u>(ctx, &aot_mem) && ctx.pc == 0x08A060A4u) goto L_08A060A4;
    return;
L_08A060A4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9728));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9692));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9656));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A060D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A060D0u) goto L_08A060D0;
    return;
L_08A060D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A060F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A06100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 462u, 0x08A671D8u>(ctx, &aot_mem) && ctx.pc == 0x08A06100u) goto L_08A06100;
    return;
L_08A06100:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26476)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0613C;
      }
      goto L_08A06128;
    }
L_08A06128:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06144;
      }
      goto L_08A0613C;
    }
L_08A0613C:
    ctx.set_gpr(31, 0x08A06144u);
    // nop
    goto L_08A0615C;
L_08A06144:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26476)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0615C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24964));
    ctx.set_gpr(31, 0x08A06174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A06174u) goto L_08A06174;
    return;
L_08A06174:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A06194u);
    // nop
    goto L_08A04824;
L_08A06194:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25132));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9608));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26476));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23528));
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25116));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(25084));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-9592));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A061ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A061ECu) goto L_08A061EC;
    return;
L_08A061EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A061FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0620Cu);
    // nop
    goto L_08A06110;
L_08A0620C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0621C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26524)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0622C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26476)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A06254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A06254u) goto L_08A06254;
    return;
L_08A06254:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9572));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A06270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A06270u) goto L_08A06270;
    return;
L_08A06270:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A06280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06280u) goto L_08A06280;
    return;
L_08A06280:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0628Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 204u, 0x089F5114u>(ctx, &aot_mem) && ctx.pc == 0x08A0628Cu) goto L_08A0628C;
    return;
L_08A0628C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A062A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A062A8u) goto L_08A062A8;
    return;
L_08A062A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A062B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 327u, 0x089F5C38u>(ctx, &aot_mem) && ctx.pc == 0x08A062B4u) goto L_08A062B4;
    return;
L_08A062B4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A062D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A062D0u) goto L_08A062D0;
    return;
L_08A062D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A062DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 204u, 0x089F5114u>(ctx, &aot_mem) && ctx.pc == 0x08A062DCu) goto L_08A062DC;
    return;
L_08A062DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A062F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A062F8u) goto L_08A062F8;
    return;
L_08A062F8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A06304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 83u, 0x088F878Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06304u) goto L_08A06304;
    return;
L_08A06304:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A06320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06320u) goto L_08A06320;
    return;
L_08A06320:
    ctx.set_gpr(7, 49136u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A06334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 587u, 0x089126B4u>(ctx, &aot_mem) && ctx.pc == 0x08A06334u) goto L_08A06334;
    return;
L_08A06334:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A06344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06344u) goto L_08A06344;
    return;
L_08A06344:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9316));
    ctx.set_gpr(31, 0x08A0635Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A0635Cu) goto L_08A0635C;
    return;
L_08A0635C:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24480));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A06378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06378u) goto L_08A06378;
    return;
L_08A06378:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A0638Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A0638Cu) goto L_08A0638C;
    return;
L_08A0638C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A063A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A063A0u) goto L_08A063A0;
    return;
L_08A063A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A063BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A063BCu) goto L_08A063BC;
    return;
L_08A063BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9424));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9388));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9352));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A063E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A063E4u) goto L_08A063E4;
    return;
L_08A063E4:
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24200));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26476)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06414:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26436)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06454;
      }
      goto L_08A0642C;
    }
L_08A0642C:
    ctx.set_gpr(31, 0x08A06434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A06434u) goto L_08A06434;
    return;
L_08A06434:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A06440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A06440u) goto L_08A06440;
    return;
L_08A06440:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0644Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0644Cu) goto L_08A0644C;
    return;
L_08A0644C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26436), ctx.gpr[2]);
    goto L_08A06454;
L_08A06454:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26436)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0646C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26436)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06498;
      }
      goto L_08A06484;
    }
L_08A06484:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A064A0;
      }
      goto L_08A06498;
    }
L_08A06498:
    ctx.set_gpr(31, 0x08A064A0u);
    // nop
    goto L_08A06558;
L_08A064A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26436)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A064B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A064D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A064D4u) goto L_08A064D4;
    return;
L_08A064D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21844));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A064F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A064F8u) goto L_08A064F8;
    return;
L_08A064F8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A06504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A06504u) goto L_08A06504;
    return;
L_08A06504:
    ctx.set_gpr(31, 0x08A0650Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0650Cu) goto L_08A0650C;
    return;
L_08A0650C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A06530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06530u) goto L_08A06530;
    return;
L_08A06530:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A06540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A06540u) goto L_08A06540;
    return;
L_08A06540:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06558:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25984));
    ctx.set_gpr(31, 0x08A06570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A06570u) goto L_08A06570;
    return;
L_08A06570:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06580:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A06590u);
    // nop
    goto L_08A04824;
L_08A06590:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26132));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26436));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(26100));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-9312));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(160));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(25784));
    ctx.set_gpr(31, 0x08A065E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A065E4u) goto L_08A065E4;
    return;
L_08A065E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A065F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A06604u);
    // nop
    goto L_08A0646C;
L_08A06604:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06614:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26436)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A06638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A06638u) goto L_08A06638;
    return;
L_08A06638:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9292));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A06654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A06654u) goto L_08A06654;
    return;
L_08A06654:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9272));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9264));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9256));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0667Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0667Cu) goto L_08A0667C;
    return;
L_08A0667C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06694:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26424)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A066C0;
      }
      goto L_08A066AC;
    }
L_08A066AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A066C8;
      }
      goto L_08A066C0;
    }
L_08A066C0:
    ctx.set_gpr(31, 0x08A066C8u);
    // nop
    goto L_08A06764;
L_08A066C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26424)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A066E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A066F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A066F8u) goto L_08A066F8;
    return;
L_08A066F8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22604));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A06718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A06718u) goto L_08A06718;
    return;
L_08A06718:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A0673Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0673Cu) goto L_08A0673C;
    return;
L_08A0673C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A0674Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0674Cu) goto L_08A0674C;
    return;
L_08A0674C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06764:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26508));
    ctx.set_gpr(31, 0x08A0677Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0677Cu) goto L_08A0677C;
    return;
L_08A0677C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0678C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0679Cu);
    // nop
    goto L_08A04824;
L_08A0679C:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26656));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26424));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(26624));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-9248));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(26336));
    ctx.set_gpr(31, 0x08A067F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A067F0u) goto L_08A067F0;
    return;
L_08A067F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06800:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A06810u);
    // nop
    goto L_08A06694;
L_08A06810:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26424)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A06848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A06848u) goto L_08A06848;
    return;
L_08A06848:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9228));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A06864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A06864u) goto L_08A06864;
    return;
L_08A06864:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A06874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06874u) goto L_08A06874;
    return;
L_08A06874:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A06888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06888u) goto L_08A06888;
    return;
L_08A06888:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0689Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0689Cu) goto L_08A0689C;
    return;
L_08A0689C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A068B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A068B0u) goto L_08A068B0;
    return;
L_08A068B0:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9172));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9160));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9148));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A068DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A068DCu) goto L_08A068DC;
    return;
L_08A068DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A068F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A06910u);
    // nop
    goto L_08A06A6C;
L_08A06910:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A06924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A06924u) goto L_08A06924;
    return;
L_08A06924:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06964;
      }
      goto L_08A06950;
    }
L_08A06950:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0696C;
      }
      goto L_08A06964;
    }
L_08A06964:
    ctx.set_gpr(31, 0x08A0696Cu);
    // nop
    goto L_08A06A6C;
L_08A0696C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06984:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0699Cu);
    // nop
    goto L_08A06A18;
L_08A0699C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21996));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(31, 0x08A069B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A069B8u) goto L_08A069B8;
    return;
L_08A069B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21996));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A069E4;
      }
      goto L_08A069DC;
    }
L_08A069DC:
    ctx.set_gpr(31, 0x08A069E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A069E4u) goto L_08A069E4;
    return;
L_08A069E4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22604));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A06A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A06A00u) goto L_08A06A00;
    return;
L_08A06A00:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06A18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A06A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A06A30u) goto L_08A06A30;
    return;
L_08A06A30:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06A6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27284));
    ctx.set_gpr(31, 0x08A06A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A06A84u) goto L_08A06A84;
    return;
L_08A06A84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06A94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A06AA4u);
    // nop
    goto L_08A04824;
L_08A06AA4:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27456));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9136));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26408));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26508));
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(27440));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(27408));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-9128));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(27012));
    ctx.set_gpr(31, 0x08A06B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A06B00u) goto L_08A06B00;
    return;
L_08A06B00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06B10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A06B20u);
    // nop
    goto L_08A06938;
L_08A06B20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06B30:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26424)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06B40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A06B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A06B68u) goto L_08A06B68;
    return;
L_08A06B68:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9096));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A06B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A06B84u) goto L_08A06B84;
    return;
L_08A06B84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A06B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06B94u) goto L_08A06B94;
    return;
L_08A06B94:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A06BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 358u, 0x088BA0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A06BA0u) goto L_08A06BA0;
    return;
L_08A06BA0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A06BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06BB4u) goto L_08A06BB4;
    return;
L_08A06BB4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A06BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A06BC8u) goto L_08A06BC8;
    return;
L_08A06BC8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9052));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9044));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9036));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A06BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06BF4u) goto L_08A06BF4;
    return;
L_08A06BF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06C10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26396)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06C3C;
      }
      goto L_08A06C28;
    }
L_08A06C28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06C44;
      }
      goto L_08A06C3C;
    }
L_08A06C3C:
    ctx.set_gpr(31, 0x08A06C44u);
    // nop
    goto L_08A06CF0;
L_08A06C44:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26396)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06C5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A06C74u);
    // nop
    goto L_08A06A18;
L_08A06C74:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22148));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(31, 0x08A06C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A06C90u) goto L_08A06C90;
    return;
L_08A06C90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22148));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06CBC;
      }
      goto L_08A06CB4;
    }
L_08A06CB4:
    ctx.set_gpr(31, 0x08A06CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A06CBCu) goto L_08A06CBC;
    return;
L_08A06CBC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22604));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A06CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A06CD8u) goto L_08A06CD8;
    return;
L_08A06CD8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06CF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27928));
    ctx.set_gpr(31, 0x08A06D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A06D08u) goto L_08A06D08;
    return;
L_08A06D08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06D18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A06D28u);
    // nop
    goto L_08A04824;
L_08A06D28:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28084));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9028));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26396));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26508));
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(27440));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(28052));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-9020));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(27740));
    ctx.set_gpr(31, 0x08A06D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A06D84u) goto L_08A06D84;
    return;
L_08A06D84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06D94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A06DA4u);
    // nop
    goto L_08A06C10;
L_08A06DA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26396)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A06DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A06DDCu) goto L_08A06DDC;
    return;
L_08A06DDC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8992));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A06DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A06DF8u) goto L_08A06DF8;
    return;
L_08A06DF8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A06E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06E08u) goto L_08A06E08;
    return;
L_08A06E08:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A06E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 99u, 0x088B0944u>(ctx, &aot_mem) && ctx.pc == 0x08A06E14u) goto L_08A06E14;
    return;
L_08A06E14:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A06E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06E28u) goto L_08A06E28;
    return;
L_08A06E28:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A06E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A06E3Cu) goto L_08A06E3C;
    return;
L_08A06E3C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8984));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8976));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8968));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A06E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06E68u) goto L_08A06E68;
    return;
L_08A06E68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06E84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26384)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06EB0;
      }
      goto L_08A06E9C;
    }
L_08A06E9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06EB8;
      }
      goto L_08A06EB0;
    }
L_08A06EB0:
    ctx.set_gpr(31, 0x08A06EB8u);
    // nop
    goto L_08A06F7C;
L_08A06EB8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26384)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06ED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A06EE8u);
    // nop
    goto L_08A06A18;
L_08A06EE8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(31, 0x08A06F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A06F08u) goto L_08A06F08;
    return;
L_08A06F08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06F34;
      }
      goto L_08A06F2C;
    }
L_08A06F2C:
    ctx.set_gpr(31, 0x08A06F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A06F34u) goto L_08A06F34;
    return;
L_08A06F34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06F48;
      }
      goto L_08A06F40;
    }
L_08A06F40:
    ctx.set_gpr(31, 0x08A06F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A06F48u) goto L_08A06F48;
    return;
L_08A06F48:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22604));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A06F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A06F64u) goto L_08A06F64;
    return;
L_08A06F64:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06F7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28580));
    ctx.set_gpr(31, 0x08A06F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A06F94u) goto L_08A06F94;
    return;
L_08A06F94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06FA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A06FB4u);
    // nop
    goto L_08A04824;
L_08A06FB4:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28736));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8960));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26384));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26508));
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(27440));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(28704));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8948));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(28368));
    ctx.set_gpr(31, 0x08A07010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A07010u) goto L_08A07010;
    return;
L_08A07010:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A07030u);
    // nop
    goto L_08A06E84;
L_08A07030:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07040:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26384)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A07068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A07068u) goto L_08A07068;
    return;
L_08A07068:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8920));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A07084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A07084u) goto L_08A07084;
    return;
L_08A07084:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A07094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07094u) goto L_08A07094;
    return;
L_08A07094:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A070A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A070A0u) goto L_08A070A0;
    return;
L_08A070A0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A070BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A070BCu) goto L_08A070BC;
    return;
L_08A070BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A070C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 272u, 0x088C18B4u>(ctx, &aot_mem) && ctx.pc == 0x08A070C8u) goto L_08A070C8;
    return;
L_08A070C8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A070DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A070DCu) goto L_08A070DC;
    return;
L_08A070DC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A070F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A070F0u) goto L_08A070F0;
    return;
L_08A070F0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8888));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8876));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8864));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0711Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0711Cu) goto L_08A0711C;
    return;
L_08A0711C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07138:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26368)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07164;
      }
      goto L_08A07150;
    }
L_08A07150:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0716C;
      }
      goto L_08A07164;
    }
L_08A07164:
    ctx.set_gpr(31, 0x08A0716Cu);
    // nop
    goto L_08A07270;
L_08A0716C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26368)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A0719Cu);
    // nop
    goto L_08A0720C;
L_08A0719C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22452));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A071B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A071B4u) goto L_08A071B4;
    return;
L_08A071B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21996));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A071D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A071D8u) goto L_08A071D8;
    return;
L_08A071D8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22604));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A071F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A071F4u) goto L_08A071F4;
    return;
L_08A071F4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0720C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A07224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A07224u) goto L_08A07224;
    return;
L_08A07224:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07270:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29336));
    ctx.set_gpr(31, 0x08A07288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A07288u) goto L_08A07288;
    return;
L_08A07288:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A072A8u);
    // nop
    goto L_08A04824;
L_08A072A8:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29500));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26368));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(27284));
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(29484));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(29452));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8852));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(29060));
    ctx.set_gpr(31, 0x08A072FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A072FCu) goto L_08A072FC;
    return;
L_08A072FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0730C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0731Cu);
    // nop
    goto L_08A07138;
L_08A0731C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0732C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0733C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26368)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A07360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A07360u) goto L_08A07360;
    return;
L_08A07360:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8816));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A0737Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0737Cu) goto L_08A0737C;
    return;
L_08A0737C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8812));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8808));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8804));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A073A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A073A4u) goto L_08A073A4;
    return;
L_08A073A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A073BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A073D4u);
    // nop
    goto L_08A07674;
L_08A073D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A073E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A073E8u) goto L_08A073E8;
    return;
L_08A073E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A073FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0743C;
      }
      goto L_08A07414;
    }
L_08A07414:
    ctx.set_gpr(31, 0x08A0741Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0741Cu) goto L_08A0741C;
    return;
L_08A0741C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A07428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A07428u) goto L_08A07428;
    return;
L_08A07428:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A07434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A07434u) goto L_08A07434;
    return;
L_08A07434:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26360), ctx.gpr[2]);
    goto L_08A0743C;
L_08A0743C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07480;
      }
      goto L_08A0746C;
    }
L_08A0746C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07488;
      }
      goto L_08A07480;
    }
L_08A07480:
    ctx.set_gpr(31, 0x08A07488u);
    // nop
    goto L_08A07674;
L_08A07488:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A074A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A074BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A074BCu) goto L_08A074BC;
    return;
L_08A074BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A074E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A074E0u) goto L_08A074E0;
    return;
L_08A074E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(31, 0x08A074ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A074ECu) goto L_08A074EC;
    return;
L_08A074EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07518;
      }
      goto L_08A07510;
    }
L_08A07510:
    ctx.set_gpr(31, 0x08A07518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A07518u) goto L_08A07518;
    return;
L_08A07518:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A07530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07530u) goto L_08A07530;
    return;
L_08A07530:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A07540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A07540u) goto L_08A07540;
    return;
L_08A07540:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07558:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07658;
      }
      goto L_08A07578;
    }
L_08A07578:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A075A4;
      }
      goto L_08A07590;
    }
L_08A07590:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A075A4;
      }
      goto L_08A0759C;
    }
L_08A0759C:
    ctx.set_gpr(31, 0x08A075A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A075A4u) goto L_08A075A4;
    return;
L_08A075A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07640;
      }
      goto L_08A075AC;
    }
L_08A075AC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A075D8;
      }
      goto L_08A075C4;
    }
L_08A075C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A075D8;
      }
      goto L_08A075D0;
    }
L_08A075D0:
    ctx.set_gpr(31, 0x08A075D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A075D8u) goto L_08A075D8;
    return;
L_08A075D8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07640;
      }
      goto L_08A075E0;
    }
L_08A075E0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07604;
      }
      goto L_08A075F8;
    }
L_08A075F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A07604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07604u) goto L_08A07604;
    return;
L_08A07604:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0761C;
      }
      goto L_08A07610;
    }
L_08A07610:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A0761Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0761Cu) goto L_08A0761C;
    return;
L_08A0761C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07640;
      }
      goto L_08A07624;
    }
L_08A07624:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A07640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A07640u) goto L_08A07640;
    return;
L_08A07640:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A07658;
      }
      goto L_08A0764C;
    }
L_08A0764C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A07658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x08A07658u) goto L_08A07658;
    return;
L_08A07658:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07674:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30364));
    ctx.set_gpr(31, 0x08A0768Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0768Cu) goto L_08A0768C;
    return;
L_08A0768C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0769C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A076ACu);
    // nop
    goto L_08A04824;
L_08A076AC:
    ctx.set_gpr(2, 2208u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30520));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8800));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26360));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(30488));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8792));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(29856));
    ctx.set_gpr(31, 0x08A07708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A07708u) goto L_08A07708;
    return;
L_08A07708:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07718:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A07728u);
    // nop
    goto L_08A07454;
L_08A07728:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07738:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A07760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A07760u) goto L_08A07760;
    return;
L_08A07760:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8780));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A0777Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0777Cu) goto L_08A0777C;
    return;
L_08A0777C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0778Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0778Cu) goto L_08A0778C;
    return;
L_08A0778C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A077E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A077E4u) goto L_08A077E4;
    return;
L_08A077E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A077F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A077F4u) goto L_08A077F4;
    return;
L_08A077F4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A07804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A07804u) goto L_08A07804;
    return;
L_08A07804:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A07814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A07814u) goto L_08A07814;
    return;
L_08A07814:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A07824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x08A07824u) goto L_08A07824;
    return;
L_08A07824:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A07834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07834u) goto L_08A07834;
    return;
L_08A07834:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A07844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A07844u) goto L_08A07844;
    return;
L_08A07844:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A07854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07854u) goto L_08A07854;
    return;
L_08A07854:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A07860u);
    // nop
    goto L_08A05B1C;
L_08A07860:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8744));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8732));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8720));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0788Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0788Cu) goto L_08A0788C;
    return;
L_08A0788C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A078A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26344)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A078E8;
      }
      goto L_08A078C0;
    }
L_08A078C0:
    ctx.set_gpr(31, 0x08A078C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A078C8u) goto L_08A078C8;
    return;
L_08A078C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A078D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A078D4u) goto L_08A078D4;
    return;
L_08A078D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A078E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A078E0u) goto L_08A078E0;
    return;
L_08A078E0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26344), ctx.gpr[2]);
    goto L_08A078E8;
L_08A078E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26344)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07900:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26344)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0792C;
      }
      goto L_08A07918;
    }
L_08A07918:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07934;
      }
      goto L_08A0792C;
    }
L_08A0792C:
    ctx.set_gpr(31, 0x08A07934u);
    // nop
    goto L_08A07990;
L_08A07934:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26344)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0794C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A07960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A07960u) goto L_08A07960;
    return;
L_08A07960:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(108));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A07974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A07974u) goto L_08A07974;
    return;
L_08A07974:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07990:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31160));
    ctx.set_gpr(31, 0x08A079A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A079A8u) goto L_08A079A8;
    return;
L_08A079A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A079B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A079C8u);
    // nop
    goto L_08A04824;
L_08A079C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8708));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26344));
    ctx.set_gpr(6, 2215u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(11364));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30708));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(31276));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8700));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(31052));
    ctx.set_gpr(31, 0x08A07A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A07A1Cu) goto L_08A07A1C;
    return;
L_08A07A1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07A2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A07A3Cu);
    // nop
    goto L_08A07900;
L_08A07A3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07A4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26340)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07A78;
      }
      goto L_08A07A64;
    }
L_08A07A64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07A80;
      }
      goto L_08A07A78;
    }
L_08A07A78:
    ctx.set_gpr(31, 0x08A07A80u);
    // nop
    goto L_08A07ADC;
L_08A07A80:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26340)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07A98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A07AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A07AACu) goto L_08A07AAC;
    return;
L_08A07AAC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A07AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A07AC0u) goto L_08A07AC0;
    return;
L_08A07AC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07ADC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31492));
    ctx.set_gpr(31, 0x08A07AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A07AF4u) goto L_08A07AF4;
    return;
L_08A07AF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07B04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A07B14u);
    // nop
    goto L_08A04824;
L_08A07B14:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8680));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26340));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(31608));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8672));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(31384));
    ctx.set_gpr(31, 0x08A07B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A07B68u) goto L_08A07B68;
    return;
L_08A07B68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07B78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A07B88u);
    // nop
    goto L_08A07A4C;
L_08A07B88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07B98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26336)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07BC4;
      }
      goto L_08A07BB0;
    }
L_08A07BB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07BCC;
      }
      goto L_08A07BC4;
    }
L_08A07BC4:
    ctx.set_gpr(31, 0x08A07BCCu);
    // nop
    goto L_08A07C28;
L_08A07BCC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26336)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07BE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A07BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A07BF8u) goto L_08A07BF8;
    return;
L_08A07BF8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-100));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A07C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A07C0Cu) goto L_08A07C0C;
    return;
L_08A07C0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07C28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(31, 0x08A07C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A07C40u) goto L_08A07C40;
    return;
L_08A07C40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A07C60u);
    // nop
    goto L_08A04824;
L_08A07C60:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8656));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26336));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(31940));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8648));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(31716));
    ctx.set_gpr(31, 0x08A07CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A07CB4u) goto L_08A07CB4;
    return;
L_08A07CB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A07CD4u);
    // nop
    goto L_08A07B98;
L_08A07CD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07CE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26332)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07D24;
      }
      goto L_08A07CFC;
    }
L_08A07CFC:
    ctx.set_gpr(31, 0x08A07D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A07D04u) goto L_08A07D04;
    return;
L_08A07D04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A07D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A07D10u) goto L_08A07D10;
    return;
L_08A07D10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A07D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A07D1Cu) goto L_08A07D1C;
    return;
L_08A07D1C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26332), ctx.gpr[2]);
    goto L_08A07D24;
L_08A07D24:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26332)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07D3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26332)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07D68;
      }
      goto L_08A07D54;
    }
L_08A07D54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07D70;
      }
      goto L_08A07D68;
    }
L_08A07D68:
    ctx.set_gpr(31, 0x08A07D70u);
    // nop
    goto L_08A07DCC;
L_08A07D70:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26332)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07D88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A07D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A07D9Cu) goto L_08A07D9C;
    return;
L_08A07D9C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A07DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A07DB0u) goto L_08A07DB0;
    return;
L_08A07DB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07DCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32244));
    ctx.set_gpr(31, 0x08A07DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A07DE4u) goto L_08A07DE4;
    return;
L_08A07DE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07DF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A07E04u);
    // nop
    goto L_08A04824;
L_08A07E04:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8628));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26332));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11416));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13108));
    ctx.set_gpr(8, 2208u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(32360));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8620));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(32136));
    ctx.set_gpr(31, 0x08A07E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A07E58u) goto L_08A07E58;
    return;
L_08A07E58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07E68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A07E78u);
    // nop
    goto L_08A07D3C;
L_08A07E78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07E88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26328)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07EB4;
      }
      goto L_08A07EA0;
    }
L_08A07EA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07EBC;
      }
      goto L_08A07EB4;
    }
L_08A07EB4:
    ctx.set_gpr(31, 0x08A07EBCu);
    // nop
    goto L_08A07F70;
L_08A07EBC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26328)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07ED4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A07EF0u);
    // nop
    goto L_08A06A18;
L_08A07EF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A07F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A07F0Cu) goto L_08A07F0C;
    return;
L_08A07F0C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-364));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A07F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A07F24u) goto L_08A07F24;
    return;
L_08A07F24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x08A07F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07F48u) goto L_08A07F48;
    return;
L_08A07F48:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A07F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A07F58u) goto L_08A07F58;
    return;
L_08A07F58:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07F70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32664));
    ctx.set_gpr(31, 0x08A07F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A07F88u) goto L_08A07F88;
    return;
L_08A07F88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07F98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A07FA8u);
    // nop
    goto L_08A04824;
L_08A07FA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26328));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30364));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2852));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-32764));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8588));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(11, 2208u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(32468));
    ctx.set_gpr(31, 0x08A07FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A07FF4u) goto L_08A07FF4;
    return;
L_08A07FF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0128(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0128_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_128(Runtime &runtime) {
    runtime.register_generated_unit(128u, 0x08A04000u, 16384u, &recomp_unit_0128, &recomp_unit_0128_entry);
    runtime.register_function(0x08A04000u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0400Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0401Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04028u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04038u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04048u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04054u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04064u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04074u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04080u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04090u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040E8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04108u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04118u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04124u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04134u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04144u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04154u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04164u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04174u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04184u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04194u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041B4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041C4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041F4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04204u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04214u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04220u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04230u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0423Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0424Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04258u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04268u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04274u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04284u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04294u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0430Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0431Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0432Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04338u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04344u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04350u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0435Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04368u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04374u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04380u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0438Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04398u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04404u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04414u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04424u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04434u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04450u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0445Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0446Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04488u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04494u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A044A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A044C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A044CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A044DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A044F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04504u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04514u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04530u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0453Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0454Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04568u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04574u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04584u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045F4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04610u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0461Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0462Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04648u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04654u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04664u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04680u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0468Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0469Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A046B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A046C4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A046D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A046F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A046FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0470Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04728u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04734u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04744u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04760u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0476Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0477Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04798u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A047A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A047B4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A047D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A047DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A047ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04808u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04814u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04824u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04830u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04838u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04840u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04850u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04858u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04860u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04868u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04870u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04878u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04880u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04888u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04890u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04898u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048E8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04900u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04908u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04910u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04918u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04920u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04928u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04930u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04938u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04940u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04948u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04950u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04958u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04960u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04968u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04970u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04978u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04980u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04988u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04990u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04998u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049E8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A40u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A48u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A50u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A58u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A60u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A90u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AB8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AC0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AC8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AD0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AD8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AF0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B40u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B48u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B50u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B58u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B60u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B90u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BB8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BC0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BC8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BD0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BD8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BF0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C40u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C48u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C50u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C58u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C60u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C90u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CB8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CC0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CC8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CD0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CD8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CF0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D40u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D48u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D50u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D58u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D60u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D90u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DB8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DC0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DC8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DD0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DD8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DF0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E40u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E48u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E50u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E58u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E60u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E90u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04EA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04EB8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04ECCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04EE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04EF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F0Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F14u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F2Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F40u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F54u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04FA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04FF4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05004u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05014u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05024u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0503Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05050u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05058u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05070u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05088u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05098u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05100u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05110u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05120u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05130u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05158u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05174u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05184u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05190u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A051D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A051ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05204u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05218u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05220u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05238u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05250u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05268u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0528Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05294u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A052ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A052C4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A052D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A052E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05348u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05358u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05368u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05378u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A053A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A053BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A053CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A053E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A053F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A053FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05428u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05438u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05454u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05464u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05474u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05484u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05494u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05508u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0552Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05550u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0555Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05568u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05574u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0558Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055C4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05604u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05610u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05618u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05624u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05630u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05638u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05644u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05650u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0566Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05684u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05694u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A056A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05700u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05710u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05720u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05730u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05740u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05770u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05784u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A057A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A057ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A057DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A057F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05804u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05818u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0582Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05848u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05854u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05884u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A058A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A058ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A058C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A058D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A058F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A058FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05910u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05934u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05950u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0595Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05970u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05984u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A059A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A059ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A059DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A059F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A04u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A4Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A54u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A6Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A84u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A94u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05AA4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05AECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05AFCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B0Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B1Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B34u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B3Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B48u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B54u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B5Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B74u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B8Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05BA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05BA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05BC0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05BD8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05BE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05BF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C40u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C50u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C60u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C9Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05CA4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05CBCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05CD4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D0Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D44u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D4Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D58u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D60u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D6Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D74u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DB8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DC4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DDCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DF4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E04u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E14u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05EA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05EB8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05EE4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F1Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F3Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F50u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F6Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05FA4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05FC0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05FCCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05FDCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05FE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05FFCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06008u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0601Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06028u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0603Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0604Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0605Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06074u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06088u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06098u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A060A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A060D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A060F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06100u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06110u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06128u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0613Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06144u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0615Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06174u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06184u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06194u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A061ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A061FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0620Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0621Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0622Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06254u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06270u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06280u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0628Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A062A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A062B4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A062D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A062DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A062F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06304u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06320u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06334u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06344u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0635Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06378u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0638Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A063A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A063BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A063E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06414u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0642Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06434u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06440u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0644Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06454u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0646Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06484u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06498u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A064A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A064B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A064D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A064F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06504u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0650Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06530u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06540u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06558u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06570u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06580u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06590u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A065E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A065F4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06604u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06614u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06638u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06654u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0667Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06694u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A066ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A066C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A066C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A066E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A066F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06718u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0673Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0674Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06764u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0677Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0678Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0679Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A067F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06800u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06810u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06820u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06848u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06864u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06874u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06888u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0689Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A068B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A068DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A068F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06910u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06924u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06938u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06950u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06964u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0696Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06984u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0699Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A069B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A069DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A069E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06A00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06A18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06A30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06A6Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06A84u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06A94u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06AA4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B40u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B84u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B94u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06BA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06BB4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06BC8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06BF4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06C10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06C28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06C3Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06C44u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06C5Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06C74u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06C90u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CB4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CBCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CD8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CF0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D84u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D94u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06DA4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06DB4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06DDCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06DF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E14u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E3Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E84u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E9Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06EB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06EB8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06ED0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06EE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06F08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06F2Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06F34u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06F40u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06F48u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06F64u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06F7Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06F94u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06FA4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06FB4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07010u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07020u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07030u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07040u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07068u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07084u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07094u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0711Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07138u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07150u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07164u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0716Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07184u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0719Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A071B4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A071D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A071F4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0720Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07224u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07270u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07288u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07298u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0730Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0731Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0732Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0733Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07360u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0737Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A073A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A073BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A073D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A073E8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A073FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07414u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0741Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07428u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07434u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0743Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07454u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0746Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07480u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07488u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A074A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A074BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A074E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A074ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07510u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07518u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07530u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07540u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07558u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07578u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07590u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0759Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075C4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07604u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07610u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0761Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07624u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07640u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0764Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07658u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07674u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0768Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0769Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A076ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07708u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07718u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07728u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07738u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07760u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0777Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0778Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A077E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A077F4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07804u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07814u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07824u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07834u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07844u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07854u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07860u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0788Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078E8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07900u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07918u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0792Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07934u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0794Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07960u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07974u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07990u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A079A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A079B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A079C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A1Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A2Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A3Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A4Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A64u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07AACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07AC0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07ADCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07AF4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B04u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B14u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07BB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07BC4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07BCCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07BE4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07BF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07C0Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07C28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07C40u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07C50u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07C60u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07CB4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07CC4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07CD4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07CE4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07CFCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07D04u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07D10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07D1Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07D24u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07D3Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07D54u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07D68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07D70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07D88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07D9Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07DB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07DCCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07DE4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07DF4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07E04u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07E58u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07E68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07E78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07E88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07EA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07EB4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07EBCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07ED4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07EF0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07F0Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07F24u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07F48u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07F58u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07F70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07F88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07F98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FF4u, &recomp_unit_0128, "recomp_unit_0128");
}
} // namespace psprecomp
