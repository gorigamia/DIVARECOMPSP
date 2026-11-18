#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0172[4079] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 12, 13, 0, 0, 0, 14, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0,
    19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 50, 51, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 56, 57, 0, 58, 0,
    59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 68,
    0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0,
    0, 0, 78, 0, 79, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89,
    0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0,
    99, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 109, 0, 0, 0, 0, 110, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0,
    114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 138, 0, 139, 0, 140, 0, 141, 142, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0,
    151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 163, 164, 165, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0,
    0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 0, 176, 0, 177, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0,
    191, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0,
    199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 224,
    0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 237, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 248,
    0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 0,
    0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 283, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0,
    0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0,
    311, 0, 312, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 319, 0, 0, 0,
    0, 320, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327,
    0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 335, 0, 0, 336, 0, 0, 0, 0, 337, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0, 345,
    0, 0, 346, 0, 0, 0, 0, 347, 348, 0, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0,
    363, 364, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 370, 0, 0, 371, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 376, 377, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 381, 0, 382,
    0, 0, 0, 0, 383, 384, 0, 0, 385, 0, 0, 386, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 391, 392, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 399,
    0, 0, 400, 0, 401, 402, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 408, 409, 0, 0, 410, 0, 0, 411, 0,
    412, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 417, 0, 0, 0, 0, 0, 418, 0, 419,
    0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424,
    0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 428, 429, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0,
    434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0,
    0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0,
    452, 0, 453, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 461,
    462, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 0, 469, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0,
    477, 0, 0, 0, 478, 479, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0,
    0, 0, 486, 487, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 490, 491, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494,
    0, 495, 0, 0, 0, 0, 0, 0, 496, 497, 0, 498, 0, 499, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0,
    0, 0, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 511, 0, 512, 0, 0, 513, 0, 0, 0, 0,
    0, 0, 0, 0, 514, 0, 515, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0,
    0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 527, 0, 528,
    0, 0, 0, 529, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0, 537, 538,
    0, 0, 0, 539, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 545, 0, 0, 0, 546, 0,
    0, 547, 0, 0, 0, 548, 549, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 552, 553, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0,
    0, 0, 0, 0, 556, 557, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 560, 561, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0,
    564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0, 570, 0, 0, 0, 571, 572, 0, 0, 573,
    0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 579, 580, 581, 0, 0, 582, 0, 0,
    0, 583, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 593, 0, 0,
    0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 598, 0, 599, 0, 600, 601, 602, 0, 603, 0, 0, 0, 0, 0, 604, 0,
    605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 610, 611, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0,
    616, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0,
    624, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 629, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0,
    0, 0, 0, 0, 634, 0, 635, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 639, 0, 640,
    0, 641, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 649, 0, 0, 650, 0,
    0, 651, 0, 0, 652, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 659, 0,
    0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 662, 0, 663, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0,
    672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 675, 676, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 679, 0, 680, 0, 681,
    0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 686, 0,
    687, 0, 688, 0, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 691, 692, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 695, 0,
    696, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 701, 0, 702, 0, 0, 0, 703, 704, 0, 0, 705, 0, 0, 706, 0, 707,
    0, 708, 0, 0, 709, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 718, 719, 0, 0, 720, 721, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 727, 0, 728, 0, 729, 0, 730,
    0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 734, 0, 735, 0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 0, 0, 742, 0, 743, 0, 744, 0, 745, 746, 747, 0, 0, 0,
    748, 0, 0, 749, 0, 750, 0, 751, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 754, 0, 755, 0, 0, 756, 0, 0, 0,
    757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 761, 762, 0, 0, 0, 763, 0,
    0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766, 767, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 769, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 776, 0,
    777, 0, 778, 0, 779, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781,
    0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 0, 785, 0, 786, 0,
    0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 791, 0, 792, 0, 0, 0, 793, 0, 794, 0, 0,
    0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 798, 0, 0, 799, 800,
    0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 803, 0, 804, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 807,
    0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 813, 0,
    0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 817, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0,
    0, 821, 822, 0, 0, 0, 0, 0, 823, 0, 824, 0, 825, 0, 826, 0, 0, 0, 827, 0, 828, 0, 0, 0, 829, 0, 830, 0, 0, 0, 831, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 833, 0, 0, 834, 0, 835, 0,
    836, 0, 0, 0, 837, 0, 838, 839, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 842, 0, 0, 843, 844,
    0, 845, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0, 0, 0, 848, 0, 849, 0, 850, 0, 0, 851, 0, 852, 0, 853, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 859, 0, 0, 860, 0, 861, 0, 862, 0, 0, 0, 863, 0, 864,
    0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 868, 0, 0, 869, 0, 870, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0,
    0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 0, 875, 0, 0, 0, 0, 0, 876, 877, 0, 0, 878, 0, 879,
    0, 880, 0, 0, 881, 0, 882, 0, 0, 0, 883, 0, 884, 0, 0, 885, 0, 886, 0, 887, 0, 888, 0, 889, 0, 890, 0, 0, 891, 0, 0, 0,
    0, 0, 892, 0, 893, 0, 894, 0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 896, 0, 897, 898, 0, 899, 0, 0, 0, 0, 0, 0, 900, 0, 901,
    0, 902, 0, 0, 903, 0, 0, 904, 0, 0, 905, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 908, 0, 909, 0, 910, 0, 911, 0, 912, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 915, 0, 916, 0, 917, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 919, 0, 920, 0, 0, 0, 921,
    0, 0, 922, 0, 0, 923, 0, 0, 924, 0, 925, 0, 926, 0, 927, 0, 928, 0, 929, 0, 930, 0, 931, 0, 0, 0, 932, 0, 0, 0, 0, 933,
    0, 934, 0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 936, 0, 937, 0, 938, 0, 939, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940,
};
void recomp_unit_0172_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB4000u;
        entry_id = (entry_delta < 16316u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0172[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AB4000;
    case 2u: goto L_08AB4018;
    case 3u: goto L_08AB4024;
    case 4u: goto L_08AB4030;
    case 5u: goto L_08AB4040;
    case 6u: goto L_08AB4048;
    case 7u: goto L_08AB4064;
    case 8u: goto L_08AB406C;
    case 9u: goto L_08AB4164;
    case 10u: goto L_08AB4178;
    case 11u: goto L_08AB4194;
    case 12u: goto L_08AB41A0;
    case 13u: goto L_08AB41A4;
    case 14u: goto L_08AB41B4;
    case 15u: goto L_08AB41B8;
    case 16u: goto L_08AB41C4;
    case 17u: goto L_08AB41E8;
    case 18u: goto L_08AB41F0;
    case 19u: goto L_08AB4200;
    case 20u: goto L_08AB4208;
    case 21u: goto L_08AB4210;
    case 22u: goto L_08AB4218;
    case 23u: goto L_08AB4220;
    case 24u: goto L_08AB422C;
    case 25u: goto L_08AB4234;
    case 26u: goto L_08AB4244;
    case 27u: goto L_08AB424C;
    case 28u: goto L_08AB4258;
    case 29u: goto L_08AB4288;
    case 30u: goto L_08AB4294;
    case 31u: goto L_08AB42A0;
    case 32u: goto L_08AB42B8;
    case 33u: goto L_08AB42C4;
    case 34u: goto L_08AB42DC;
    case 35u: goto L_08AB42F4;
    case 36u: goto L_08AB430C;
    case 37u: goto L_08AB4314;
    case 38u: goto L_08AB4324;
    case 39u: goto L_08AB432C;
    case 40u: goto L_08AB4334;
    case 41u: goto L_08AB433C;
    case 42u: goto L_08AB4348;
    case 43u: goto L_08AB4358;
    case 44u: goto L_08AB4368;
    case 45u: goto L_08AB437C;
    case 46u: goto L_08AB4390;
    case 47u: goto L_08AB439C;
    case 48u: goto L_08AB43A4;
    case 49u: goto L_08AB43AC;
    case 50u: goto L_08AB43B4;
    case 51u: goto L_08AB43B8;
    case 52u: goto L_08AB43BC;
    case 53u: goto L_08AB43CC;
    case 54u: goto L_08AB43D4;
    case 55u: goto L_08AB43DC;
    case 56u: goto L_08AB43EC;
    case 57u: goto L_08AB43F0;
    case 58u: goto L_08AB43F8;
    case 59u: goto L_08AB4400;
    case 60u: goto L_08AB4408;
    case 61u: goto L_08AB4420;
    case 62u: goto L_08AB4428;
    case 63u: goto L_08AB4448;
    case 64u: goto L_08AB4458;
    case 65u: goto L_08AB4460;
    case 66u: goto L_08AB446C;
    case 67u: goto L_08AB4474;
    case 68u: goto L_08AB447C;
    case 69u: goto L_08AB448C;
    case 70u: goto L_08AB4498;
    case 71u: goto L_08AB44E4;
    case 72u: goto L_08AB4500;
    case 73u: goto L_08AB4508;
    case 74u: goto L_08AB4530;
    case 75u: goto L_08AB4554;
    case 76u: goto L_08AB4564;
    case 77u: goto L_08AB456C;
    case 78u: goto L_08AB4588;
    case 79u: goto L_08AB4590;
    case 80u: goto L_08AB4598;
    case 81u: goto L_08AB45A4;
    case 82u: goto L_08AB45B0;
    case 83u: goto L_08AB45C0;
    case 84u: goto L_08AB45CC;
    case 85u: goto L_08AB45D4;
    case 86u: goto L_08AB45E0;
    case 87u: goto L_08AB45E8;
    case 88u: goto L_08AB45F4;
    case 89u: goto L_08AB45FC;
    case 90u: goto L_08AB4604;
    case 91u: goto L_08AB4618;
    case 92u: goto L_08AB4628;
    case 93u: goto L_08AB4638;
    case 94u: goto L_08AB4650;
    case 95u: goto L_08AB4660;
    case 96u: goto L_08AB4668;
    case 97u: goto L_08AB4670;
    case 98u: goto L_08AB4678;
    case 99u: goto L_08AB4680;
    case 100u: goto L_08AB4688;
    case 101u: goto L_08AB4690;
    case 102u: goto L_08AB46A0;
    case 103u: goto L_08AB46D4;
    case 104u: goto L_08AB46E4;
    case 105u: goto L_08AB4704;
    case 106u: goto L_08AB4714;
    case 107u: goto L_08AB4720;
    case 108u: goto L_08AB473C;
    case 109u: goto L_08AB4740;
    case 110u: goto L_08AB4754;
    case 111u: goto L_08AB4758;
    case 112u: goto L_08AB4764;
    case 113u: goto L_08AB4778;
    case 114u: goto L_08AB4780;
    case 115u: goto L_08AB4790;
    case 116u: goto L_08AB47B4;
    case 117u: goto L_08AB47D0;
    case 118u: goto L_08AB47D8;
    case 119u: goto L_08AB47E0;
    case 120u: goto L_08AB480C;
    case 121u: goto L_08AB4824;
    case 122u: goto L_08AB4830;
    case 123u: goto L_08AB4838;
    case 124u: goto L_08AB4840;
    case 125u: goto L_08AB484C;
    case 126u: goto L_08AB4854;
    case 127u: goto L_08AB485C;
    case 128u: goto L_08AB4864;
    case 129u: goto L_08AB486C;
    case 130u: goto L_08AB4874;
    case 131u: goto L_08AB4898;
    case 132u: goto L_08AB489C;
    case 133u: goto L_08AB48A8;
    case 134u: goto L_08AB48B8;
    case 135u: goto L_08AB48C4;
    case 136u: goto L_08AB48CC;
    case 137u: goto L_08AB48EC;
    case 138u: goto L_08AB4908;
    case 139u: goto L_08AB4910;
    case 140u: goto L_08AB4918;
    case 141u: goto L_08AB4920;
    case 142u: goto L_08AB4924;
    case 143u: goto L_08AB4928;
    case 144u: goto L_08AB4930;
    case 145u: goto L_08AB493C;
    case 146u: goto L_08AB4944;
    case 147u: goto L_08AB494C;
    case 148u: goto L_08AB4968;
    case 149u: goto L_08AB4970;
    case 150u: goto L_08AB4978;
    case 151u: goto L_08AB4980;
    case 152u: goto L_08AB4988;
    case 153u: goto L_08AB49B4;
    case 154u: goto L_08AB49B8;
    case 155u: goto L_08AB49C8;
    case 156u: goto L_08AB49E4;
    case 157u: goto L_08AB49F0;
    case 158u: goto L_08AB49F8;
    case 159u: goto L_08AB4A04;
    case 160u: goto L_08AB4A20;
    case 161u: goto L_08AB4A28;
    case 162u: goto L_08AB4A30;
    case 163u: goto L_08AB4A40;
    case 164u: goto L_08AB4A44;
    case 165u: goto L_08AB4A48;
    case 166u: goto L_08AB4A50;
    case 167u: goto L_08AB4A5C;
    case 168u: goto L_08AB4A64;
    case 169u: goto L_08AB4A6C;
    case 170u: goto L_08AB4A88;
    case 171u: goto L_08AB4A90;
    case 172u: goto L_08AB4A98;
    case 173u: goto L_08AB4AA0;
    case 174u: goto L_08AB4AA8;
    case 175u: goto L_08AB4AB4;
    case 176u: goto L_08AB4AC0;
    case 177u: goto L_08AB4AC8;
    case 178u: goto L_08AB4ACC;
    case 179u: goto L_08AB4ADC;
    case 180u: goto L_08AB4B08;
    case 181u: goto L_08AB4B10;
    case 182u: goto L_08AB4B18;
    case 183u: goto L_08AB4B20;
    case 184u: goto L_08AB4B2C;
    case 185u: goto L_08AB4B38;
    case 186u: goto L_08AB4B48;
    case 187u: goto L_08AB4B54;
    case 188u: goto L_08AB4B68;
    case 189u: goto L_08AB4B70;
    case 190u: goto L_08AB4B78;
    case 191u: goto L_08AB4B80;
    case 192u: goto L_08AB4B8C;
    case 193u: goto L_08AB4B94;
    case 194u: goto L_08AB4BA0;
    case 195u: goto L_08AB4BAC;
    case 196u: goto L_08AB4BC0;
    case 197u: goto L_08AB4BE8;
    case 198u: goto L_08AB4BF4;
    case 199u: goto L_08AB4C00;
    case 200u: goto L_08AB4C14;
    case 201u: goto L_08AB4C38;
    case 202u: goto L_08AB4C3C;
    case 203u: goto L_08AB4C58;
    case 204u: goto L_08AB4C80;
    case 205u: goto L_08AB4C8C;
    case 206u: goto L_08AB4C98;
    case 207u: goto L_08AB4CAC;
    case 208u: goto L_08AB4CC4;
    case 209u: goto L_08AB4CD4;
    case 210u: goto L_08AB4CEC;
    case 211u: goto L_08AB4D10;
    case 212u: goto L_08AB4D18;
    case 213u: goto L_08AB4D30;
    case 214u: goto L_08AB4D4C;
    case 215u: goto L_08AB4D5C;
    case 216u: goto L_08AB4D6C;
    case 217u: goto L_08AB4D84;
    case 218u: goto L_08AB4D9C;
    case 219u: goto L_08AB4DAC;
    case 220u: goto L_08AB4DC4;
    case 221u: goto L_08AB4DDC;
    case 222u: goto L_08AB4DE4;
    case 223u: goto L_08AB4DF4;
    case 224u: goto L_08AB4DFC;
    case 225u: goto L_08AB4E04;
    case 226u: goto L_08AB4E10;
    case 227u: goto L_08AB4E24;
    case 228u: goto L_08AB4E34;
    case 229u: goto L_08AB4E60;
    case 230u: goto L_08AB4E80;
    case 231u: goto L_08AB4E90;
    case 232u: goto L_08AB4EB0;
    case 233u: goto L_08AB4EE0;
    case 234u: goto L_08AB4EEC;
    case 235u: goto L_08AB4F10;
    case 236u: goto L_08AB4F28;
    case 237u: goto L_08AB4F2C;
    case 238u: goto L_08AB4F38;
    case 239u: goto L_08AB4F40;
    case 240u: goto L_08AB4F48;
    case 241u: goto L_08AB4FA0;
    case 242u: goto L_08AB4FB8;
    case 243u: goto L_08AB4FC4;
    case 244u: goto L_08AB4FCC;
    case 245u: goto L_08AB4FE4;
    case 246u: goto L_08AB4FEC;
    case 247u: goto L_08AB4FF4;
    case 248u: goto L_08AB4FFC;
    case 249u: goto L_08AB5004;
    case 250u: goto L_08AB5014;
    case 251u: goto L_08AB5028;
    case 252u: goto L_08AB5050;
    case 253u: goto L_08AB5060;
    case 254u: goto L_08AB5068;
    case 255u: goto L_08AB5088;
    case 256u: goto L_08AB5090;
    case 257u: goto L_08AB50A0;
    case 258u: goto L_08AB50B8;
    case 259u: goto L_08AB5130;
    case 260u: goto L_08AB513C;
    case 261u: goto L_08AB5158;
    case 262u: goto L_08AB5168;
    case 263u: goto L_08AB51C0;
    case 264u: goto L_08AB51E0;
    case 265u: goto L_08AB51EC;
    case 266u: goto L_08AB51F4;
    case 267u: goto L_08AB5208;
    case 268u: goto L_08AB5218;
    case 269u: goto L_08AB522C;
    case 270u: goto L_08AB5238;
    case 271u: goto L_08AB5284;
    case 272u: goto L_08AB5298;
    case 273u: goto L_08AB5310;
    case 274u: goto L_08AB532C;
    case 275u: goto L_08AB5334;
    case 276u: goto L_08AB542C;
    case 277u: goto L_08AB5440;
    case 278u: goto L_08AB5448;
    case 279u: goto L_08AB548C;
    case 280u: goto L_08AB54C0;
    case 281u: goto L_08AB54CC;
    case 282u: goto L_08AB5500;
    case 283u: goto L_08AB5508;
    case 284u: goto L_08AB5514;
    case 285u: goto L_08AB551C;
    case 286u: goto L_08AB5528;
    case 287u: goto L_08AB5534;
    case 288u: goto L_08AB553C;
    case 289u: goto L_08AB5548;
    case 290u: goto L_08AB5554;
    case 291u: goto L_08AB5584;
    case 292u: goto L_08AB5590;
    case 293u: goto L_08AB55A8;
    case 294u: goto L_08AB55C0;
    case 295u: goto L_08AB55C8;
    case 296u: goto L_08AB55D0;
    case 297u: goto L_08AB55D8;
    case 298u: goto L_08AB55E4;
    case 299u: goto L_08AB55F4;
    case 300u: goto L_08AB5604;
    case 301u: goto L_08AB5618;
    case 302u: goto L_08AB562C;
    case 303u: goto L_08AB5638;
    case 304u: goto L_08AB56A0;
    case 305u: goto L_08AB56B0;
    case 306u: goto L_08AB56C0;
    case 307u: goto L_08AB56D8;
    case 308u: goto L_08AB56E8;
    case 309u: goto L_08AB56F0;
    case 310u: goto L_08AB56F8;
    case 311u: goto L_08AB5700;
    case 312u: goto L_08AB5708;
    case 313u: goto L_08AB5710;
    case 314u: goto L_08AB5718;
    case 315u: goto L_08AB5728;
    case 316u: goto L_08AB57C4;
    case 317u: goto L_08AB57D0;
    case 318u: goto L_08AB57EC;
    case 319u: goto L_08AB57F0;
    case 320u: goto L_08AB5804;
    case 321u: goto L_08AB5808;
    case 322u: goto L_08AB5814;
    case 323u: goto L_08AB5828;
    case 324u: goto L_08AB5830;
    case 325u: goto L_08AB5840;
    case 326u: goto L_08AB5864;
    case 327u: goto L_08AB587C;
    case 328u: goto L_08AB5888;
    case 329u: goto L_08AB5890;
    case 330u: goto L_08AB5898;
    case 331u: goto L_08AB58A0;
    case 332u: goto L_08AB58A8;
    case 333u: goto L_08AB58B0;
    case 334u: goto L_08AB58D4;
    case 335u: goto L_08AB58D8;
    case 336u: goto L_08AB58E4;
    case 337u: goto L_08AB58F8;
    case 338u: goto L_08AB5908;
    case 339u: goto L_08AB593C;
    case 340u: goto L_08AB5944;
    case 341u: goto L_08AB594C;
    case 342u: goto L_08AB5954;
    case 343u: goto L_08AB5960;
    case 344u: goto L_08AB596C;
    case 345u: goto L_08AB597C;
    case 346u: goto L_08AB5988;
    case 347u: goto L_08AB599C;
    case 348u: goto L_08AB59A0;
    case 349u: goto L_08AB59AC;
    case 350u: goto L_08AB59B4;
    case 351u: goto L_08AB59BC;
    case 352u: goto L_08AB59C4;
    case 353u: goto L_08AB59CC;
    case 354u: goto L_08AB59D4;
    case 355u: goto L_08AB59DC;
    case 356u: goto L_08AB59E4;
    case 357u: goto L_08AB59EC;
    case 358u: goto L_08AB59F4;
    case 359u: goto L_08AB5A04;
    case 360u: goto L_08AB5A2C;
    case 361u: goto L_08AB5A4C;
    case 362u: goto L_08AB5A68;
    case 363u: goto L_08AB5A80;
    case 364u: goto L_08AB5A84;
    case 365u: goto L_08AB5A90;
    case 366u: goto L_08AB5AA4;
    case 367u: goto L_08AB5AB4;
    case 368u: goto L_08AB5ACC;
    case 369u: goto L_08AB5AE4;
    case 370u: goto L_08AB5B0C;
    case 371u: goto L_08AB5B18;
    case 372u: goto L_08AB5B20;
    case 373u: goto L_08AB5B28;
    case 374u: goto L_08AB5B30;
    case 375u: goto L_08AB5B3C;
    case 376u: goto L_08AB5B44;
    case 377u: goto L_08AB5B48;
    case 378u: goto L_08AB5B50;
    case 379u: goto L_08AB5B58;
    case 380u: goto L_08AB5B6C;
    case 381u: goto L_08AB5B74;
    case 382u: goto L_08AB5B7C;
    case 383u: goto L_08AB5B90;
    case 384u: goto L_08AB5B94;
    case 385u: goto L_08AB5BA0;
    case 386u: goto L_08AB5BAC;
    case 387u: goto L_08AB5BB4;
    case 388u: goto L_08AB5BC0;
    case 389u: goto L_08AB5BD0;
    case 390u: goto L_08AB5BD8;
    case 391u: goto L_08AB5C0C;
    case 392u: goto L_08AB5C10;
    case 393u: goto L_08AB5C28;
    case 394u: goto L_08AB5C30;
    case 395u: goto L_08AB5C58;
    case 396u: goto L_08AB5C64;
    case 397u: goto L_08AB5C6C;
    case 398u: goto L_08AB5C74;
    case 399u: goto L_08AB5C7C;
    case 400u: goto L_08AB5C88;
    case 401u: goto L_08AB5C90;
    case 402u: goto L_08AB5C94;
    case 403u: goto L_08AB5C9C;
    case 404u: goto L_08AB5CA4;
    case 405u: goto L_08AB5CB8;
    case 406u: goto L_08AB5CC0;
    case 407u: goto L_08AB5CC8;
    case 408u: goto L_08AB5CDC;
    case 409u: goto L_08AB5CE0;
    case 410u: goto L_08AB5CEC;
    case 411u: goto L_08AB5CF8;
    case 412u: goto L_08AB5D00;
    case 413u: goto L_08AB5D0C;
    case 414u: goto L_08AB5D1C;
    case 415u: goto L_08AB5D24;
    case 416u: goto L_08AB5D58;
    case 417u: goto L_08AB5D5C;
    case 418u: goto L_08AB5D74;
    case 419u: goto L_08AB5D7C;
    case 420u: goto L_08AB5D8C;
    case 421u: goto L_08AB5D9C;
    case 422u: goto L_08AB5DC8;
    case 423u: goto L_08AB5DE4;
    case 424u: goto L_08AB5DFC;
    case 425u: goto L_08AB5E08;
    case 426u: goto L_08AB5E14;
    case 427u: goto L_08AB5E20;
    case 428u: goto L_08AB5E28;
    case 429u: goto L_08AB5E2C;
    case 430u: goto L_08AB5E40;
    case 431u: goto L_08AB5E48;
    case 432u: goto L_08AB5E68;
    case 433u: goto L_08AB5E70;
    case 434u: goto L_08AB5E80;
    case 435u: goto L_08AB5E98;
    case 436u: goto L_08AB5EB8;
    case 437u: goto L_08AB5EC0;
    case 438u: goto L_08AB5ED0;
    case 439u: goto L_08AB5EE8;
    case 440u: goto L_08AB5EF0;
    case 441u: goto L_08AB5F0C;
    case 442u: goto L_08AB5F18;
    case 443u: goto L_08AB5F28;
    case 444u: goto L_08AB5F38;
    case 445u: goto L_08AB5F48;
    case 446u: goto L_08AB5F50;
    case 447u: goto L_08AB5F58;
    case 448u: goto L_08AB5F60;
    case 449u: goto L_08AB5F68;
    case 450u: goto L_08AB5F70;
    case 451u: goto L_08AB5F78;
    case 452u: goto L_08AB5F80;
    case 453u: goto L_08AB5F88;
    case 454u: goto L_08AB5F94;
    case 455u: goto L_08AB5F9C;
    case 456u: goto L_08AB5FB8;
    case 457u: goto L_08AB5FD0;
    case 458u: goto L_08AB5FDC;
    case 459u: goto L_08AB5FE8;
    case 460u: goto L_08AB5FF4;
    case 461u: goto L_08AB5FFC;
    case 462u: goto L_08AB6000;
    case 463u: goto L_08AB6014;
    case 464u: goto L_08AB601C;
    case 465u: goto L_08AB603C;
    case 466u: goto L_08AB6044;
    case 467u: goto L_08AB6054;
    case 468u: goto L_08AB606C;
    case 469u: goto L_08AB608C;
    case 470u: goto L_08AB6094;
    case 471u: goto L_08AB60A4;
    case 472u: goto L_08AB60BC;
    case 473u: goto L_08AB60C4;
    case 474u: goto L_08AB60D0;
    case 475u: goto L_08AB60DC;
    case 476u: goto L_08AB60F8;
    case 477u: goto L_08AB6100;
    case 478u: goto L_08AB6110;
    case 479u: goto L_08AB6114;
    case 480u: goto L_08AB6128;
    case 481u: goto L_08AB6130;
    case 482u: goto L_08AB614C;
    case 483u: goto L_08AB6150;
    case 484u: goto L_08AB6164;
    case 485u: goto L_08AB616C;
    case 486u: goto L_08AB6188;
    case 487u: goto L_08AB618C;
    case 488u: goto L_08AB61A0;
    case 489u: goto L_08AB61A8;
    case 490u: goto L_08AB61C4;
    case 491u: goto L_08AB61C8;
    case 492u: goto L_08AB61CC;
    case 493u: goto L_08AB61DC;
    case 494u: goto L_08AB61FC;
    case 495u: goto L_08AB6204;
    case 496u: goto L_08AB6220;
    case 497u: goto L_08AB6224;
    case 498u: goto L_08AB622C;
    case 499u: goto L_08AB6234;
    case 500u: goto L_08AB623C;
    case 501u: goto L_08AB624C;
    case 502u: goto L_08AB625C;
    case 503u: goto L_08AB6268;
    case 504u: goto L_08AB628C;
    case 505u: goto L_08AB6294;
    case 506u: goto L_08AB62A0;
    case 507u: goto L_08AB62A8;
    case 508u: goto L_08AB62B0;
    case 509u: goto L_08AB62C0;
    case 510u: goto L_08AB62D0;
    case 511u: goto L_08AB62D8;
    case 512u: goto L_08AB62E0;
    case 513u: goto L_08AB62EC;
    case 514u: goto L_08AB6310;
    case 515u: goto L_08AB6318;
    case 516u: goto L_08AB6324;
    case 517u: goto L_08AB6330;
    case 518u: goto L_08AB6338;
    case 519u: goto L_08AB6344;
    case 520u: goto L_08AB6360;
    case 521u: goto L_08AB636C;
    case 522u: goto L_08AB6384;
    case 523u: goto L_08AB6390;
    case 524u: goto L_08AB63C8;
    case 525u: goto L_08AB63D4;
    case 526u: goto L_08AB63EC;
    case 527u: goto L_08AB63F4;
    case 528u: goto L_08AB63FC;
    case 529u: goto L_08AB640C;
    case 530u: goto L_08AB6410;
    case 531u: goto L_08AB6420;
    case 532u: goto L_08AB6448;
    case 533u: goto L_08AB6450;
    case 534u: goto L_08AB645C;
    case 535u: goto L_08AB6468;
    case 536u: goto L_08AB6470;
    case 537u: goto L_08AB6478;
    case 538u: goto L_08AB647C;
    case 539u: goto L_08AB648C;
    case 540u: goto L_08AB6490;
    case 541u: goto L_08AB64A0;
    case 542u: goto L_08AB64C0;
    case 543u: goto L_08AB64C8;
    case 544u: goto L_08AB64E4;
    case 545u: goto L_08AB64E8;
    case 546u: goto L_08AB64F8;
    case 547u: goto L_08AB6504;
    case 548u: goto L_08AB6514;
    case 549u: goto L_08AB6518;
    case 550u: goto L_08AB652C;
    case 551u: goto L_08AB6534;
    case 552u: goto L_08AB6550;
    case 553u: goto L_08AB6554;
    case 554u: goto L_08AB6568;
    case 555u: goto L_08AB6574;
    case 556u: goto L_08AB6590;
    case 557u: goto L_08AB6594;
    case 558u: goto L_08AB65A8;
    case 559u: goto L_08AB65B0;
    case 560u: goto L_08AB65CC;
    case 561u: goto L_08AB65D0;
    case 562u: goto L_08AB65D4;
    case 563u: goto L_08AB65E4;
    case 564u: goto L_08AB6600;
    case 565u: goto L_08AB6610;
    case 566u: goto L_08AB6620;
    case 567u: goto L_08AB663C;
    case 568u: goto L_08AB664C;
    case 569u: goto L_08AB6654;
    case 570u: goto L_08AB665C;
    case 571u: goto L_08AB666C;
    case 572u: goto L_08AB6670;
    case 573u: goto L_08AB667C;
    case 574u: goto L_08AB6688;
    case 575u: goto L_08AB6694;
    case 576u: goto L_08AB66A0;
    case 577u: goto L_08AB66D0;
    case 578u: goto L_08AB66D8;
    case 579u: goto L_08AB66E0;
    case 580u: goto L_08AB66E4;
    case 581u: goto L_08AB66E8;
    case 582u: goto L_08AB66F4;
    case 583u: goto L_08AB6704;
    case 584u: goto L_08AB670C;
    case 585u: goto L_08AB6714;
    case 586u: goto L_08AB6720;
    case 587u: goto L_08AB6728;
    case 588u: goto L_08AB6734;
    case 589u: goto L_08AB6740;
    case 590u: goto L_08AB6748;
    case 591u: goto L_08AB6764;
    case 592u: goto L_08AB676C;
    case 593u: goto L_08AB6774;
    case 594u: goto L_08AB6784;
    case 595u: goto L_08AB6798;
    case 596u: goto L_08AB67A8;
    case 597u: goto L_08AB67B8;
    case 598u: goto L_08AB67C0;
    case 599u: goto L_08AB67C8;
    case 600u: goto L_08AB67D0;
    case 601u: goto L_08AB67D4;
    case 602u: goto L_08AB67D8;
    case 603u: goto L_08AB67E0;
    case 604u: goto L_08AB67F8;
    case 605u: goto L_08AB6800;
    case 606u: goto L_08AB6808;
    case 607u: goto L_08AB6810;
    case 608u: goto L_08AB6818;
    case 609u: goto L_08AB6820;
    case 610u: goto L_08AB682C;
    case 611u: goto L_08AB6830;
    case 612u: goto L_08AB6838;
    case 613u: goto L_08AB6854;
    case 614u: goto L_08AB6860;
    case 615u: goto L_08AB6878;
    case 616u: goto L_08AB6880;
    case 617u: goto L_08AB6898;
    case 618u: goto L_08AB68A4;
    case 619u: goto L_08AB68B4;
    case 620u: goto L_08AB68C0;
    case 621u: goto L_08AB68D4;
    case 622u: goto L_08AB68E0;
    case 623u: goto L_08AB68F8;
    case 624u: goto L_08AB6900;
    case 625u: goto L_08AB6918;
    case 626u: goto L_08AB6924;
    case 627u: goto L_08AB6940;
    case 628u: goto L_08AB694C;
    case 629u: goto L_08AB6954;
    case 630u: goto L_08AB695C;
    case 631u: goto L_08AB6964;
    case 632u: goto L_08AB6970;
    case 633u: goto L_08AB6978;
    case 634u: goto L_08AB6990;
    case 635u: goto L_08AB6998;
    case 636u: goto L_08AB699C;
    case 637u: goto L_08AB69E4;
    case 638u: goto L_08AB69EC;
    case 639u: goto L_08AB69F4;
    case 640u: goto L_08AB69FC;
    case 641u: goto L_08AB6A04;
    case 642u: goto L_08AB6A0C;
    case 643u: goto L_08AB6A14;
    case 644u: goto L_08AB6A1C;
    case 645u: goto L_08AB6A30;
    case 646u: goto L_08AB6A3C;
    case 647u: goto L_08AB6A58;
    case 648u: goto L_08AB6A64;
    case 649u: goto L_08AB6A6C;
    case 650u: goto L_08AB6A78;
    case 651u: goto L_08AB6A84;
    case 652u: goto L_08AB6A90;
    case 653u: goto L_08AB6A98;
    case 654u: goto L_08AB6AA0;
    case 655u: goto L_08AB6AC0;
    case 656u: goto L_08AB6ACC;
    case 657u: goto L_08AB6AE8;
    case 658u: goto L_08AB6AF0;
    case 659u: goto L_08AB6AF8;
    case 660u: goto L_08AB6B10;
    case 661u: goto L_08AB6B1C;
    case 662u: goto L_08AB6B28;
    case 663u: goto L_08AB6B30;
    case 664u: goto L_08AB6B38;
    case 665u: goto L_08AB6B48;
    case 666u: goto L_08AB6B54;
    case 667u: goto L_08AB6BAC;
    case 668u: goto L_08AB6BB4;
    case 669u: goto L_08AB6BD0;
    case 670u: goto L_08AB6BE4;
    case 671u: goto L_08AB6BEC;
    case 672u: goto L_08AB6C00;
    case 673u: goto L_08AB6C28;
    case 674u: goto L_08AB6C30;
    case 675u: goto L_08AB6C38;
    case 676u: goto L_08AB6C3C;
    case 677u: goto L_08AB6C4C;
    case 678u: goto L_08AB6C64;
    case 679u: goto L_08AB6C6C;
    case 680u: goto L_08AB6C74;
    case 681u: goto L_08AB6C7C;
    case 682u: goto L_08AB6C88;
    case 683u: goto L_08AB6CB8;
    case 684u: goto L_08AB6CD8;
    case 685u: goto L_08AB6CF0;
    case 686u: goto L_08AB6CF8;
    case 687u: goto L_08AB6D00;
    case 688u: goto L_08AB6D08;
    case 689u: goto L_08AB6D14;
    case 690u: goto L_08AB6D28;
    case 691u: goto L_08AB6D38;
    case 692u: goto L_08AB6D3C;
    case 693u: goto L_08AB6D4C;
    case 694u: goto L_08AB6D68;
    case 695u: goto L_08AB6D78;
    case 696u: goto L_08AB6D80;
    case 697u: goto L_08AB6D88;
    case 698u: goto L_08AB6D90;
    case 699u: goto L_08AB6DB0;
    case 700u: goto L_08AB6DB8;
    case 701u: goto L_08AB6DC0;
    case 702u: goto L_08AB6DC8;
    case 703u: goto L_08AB6DD8;
    case 704u: goto L_08AB6DDC;
    case 705u: goto L_08AB6DE8;
    case 706u: goto L_08AB6DF4;
    case 707u: goto L_08AB6DFC;
    case 708u: goto L_08AB6E04;
    case 709u: goto L_08AB6E10;
    case 710u: goto L_08AB6E18;
    case 711u: goto L_08AB6E24;
    case 712u: goto L_08AB6E60;
    case 713u: goto L_08AB6E6C;
    case 714u: goto L_08AB6E94;
    case 715u: goto L_08AB6EA0;
    case 716u: goto L_08AB6EAC;
    case 717u: goto L_08AB6EB4;
    case 718u: goto L_08AB6F04;
    case 719u: goto L_08AB6F08;
    case 720u: goto L_08AB6F14;
    case 721u: goto L_08AB6F18;
    case 722u: goto L_08AB6F20;
    case 723u: goto L_08AB6F28;
    case 724u: goto L_08AB6F38;
    case 725u: goto L_08AB6F4C;
    case 726u: goto L_08AB6F54;
    case 727u: goto L_08AB6F64;
    case 728u: goto L_08AB6F6C;
    case 729u: goto L_08AB6F74;
    case 730u: goto L_08AB6F7C;
    case 731u: goto L_08AB6F88;
    case 732u: goto L_08AB6FC4;
    case 733u: goto L_08AB6FC8;
    case 734u: goto L_08AB7008;
    case 735u: goto L_08AB7010;
    case 736u: goto L_08AB7018;
    case 737u: goto L_08AB7020;
    case 738u: goto L_08AB7028;
    case 739u: goto L_08AB7030;
    case 740u: goto L_08AB7038;
    case 741u: goto L_08AB7040;
    case 742u: goto L_08AB7050;
    case 743u: goto L_08AB7058;
    case 744u: goto L_08AB7060;
    case 745u: goto L_08AB7068;
    case 746u: goto L_08AB706C;
    case 747u: goto L_08AB7070;
    case 748u: goto L_08AB7080;
    case 749u: goto L_08AB708C;
    case 750u: goto L_08AB7094;
    case 751u: goto L_08AB709C;
    case 752u: goto L_08AB70A4;
    case 753u: goto L_08AB70CC;
    case 754u: goto L_08AB70DC;
    case 755u: goto L_08AB70E4;
    case 756u: goto L_08AB70F0;
    case 757u: goto L_08AB7100;
    case 758u: goto L_08AB7114;
    case 759u: goto L_08AB7144;
    case 760u: goto L_08AB714C;
    case 761u: goto L_08AB7164;
    case 762u: goto L_08AB7168;
    case 763u: goto L_08AB7178;
    case 764u: goto L_08AB7188;
    case 765u: goto L_08AB71A0;
    case 766u: goto L_08AB71B8;
    case 767u: goto L_08AB71BC;
    case 768u: goto L_08AB71C8;
    case 769u: goto L_08AB7210;
    case 770u: goto L_08AB7218;
    case 771u: goto L_08AB7220;
    case 772u: goto L_08AB7294;
    case 773u: goto L_08AB72B0;
    case 774u: goto L_08AB72C0;
    case 775u: goto L_08AB72E4;
    case 776u: goto L_08AB72F8;
    case 777u: goto L_08AB7300;
    case 778u: goto L_08AB7308;
    case 779u: goto L_08AB7310;
    case 780u: goto L_08AB7318;
    case 781u: goto L_08AB737C;
    case 782u: goto L_08AB738C;
    case 783u: goto L_08AB73C8;
    case 784u: goto L_08AB73DC;
    case 785u: goto L_08AB73F0;
    case 786u: goto L_08AB73F8;
    case 787u: goto L_08AB7410;
    case 788u: goto L_08AB7424;
    case 789u: goto L_08AB743C;
    case 790u: goto L_08AB7444;
    case 791u: goto L_08AB7454;
    case 792u: goto L_08AB745C;
    case 793u: goto L_08AB746C;
    case 794u: goto L_08AB7474;
    case 795u: goto L_08AB7498;
    case 796u: goto L_08AB74A4;
    case 797u: goto L_08AB74E0;
    case 798u: goto L_08AB74EC;
    case 799u: goto L_08AB74F8;
    case 800u: goto L_08AB74FC;
    case 801u: goto L_08AB7504;
    case 802u: goto L_08AB7540;
    case 803u: goto L_08AB7548;
    case 804u: goto L_08AB7550;
    case 805u: goto L_08AB7558;
    case 806u: goto L_08AB7574;
    case 807u: goto L_08AB757C;
    case 808u: goto L_08AB7584;
    case 809u: goto L_08AB758C;
    case 810u: goto L_08AB75B4;
    case 811u: goto L_08AB75BC;
    case 812u: goto L_08AB75F0;
    case 813u: goto L_08AB75F8;
    case 814u: goto L_08AB7608;
    case 815u: goto L_08AB7628;
    case 816u: goto L_08AB7630;
    case 817u: goto L_08AB7638;
    case 818u: goto L_08AB7640;
    case 819u: goto L_08AB7670;
    case 820u: goto L_08AB7678;
    case 821u: goto L_08AB7684;
    case 822u: goto L_08AB7688;
    case 823u: goto L_08AB76A0;
    case 824u: goto L_08AB76A8;
    case 825u: goto L_08AB76B0;
    case 826u: goto L_08AB76B8;
    case 827u: goto L_08AB76C8;
    case 828u: goto L_08AB76D0;
    case 829u: goto L_08AB76E0;
    case 830u: goto L_08AB76E8;
    case 831u: goto L_08AB76F8;
    case 832u: goto L_08AB7758;
    case 833u: goto L_08AB7764;
    case 834u: goto L_08AB7770;
    case 835u: goto L_08AB7778;
    case 836u: goto L_08AB7780;
    case 837u: goto L_08AB7790;
    case 838u: goto L_08AB7798;
    case 839u: goto L_08AB779C;
    case 840u: goto L_08AB77A4;
    case 841u: goto L_08AB77E0;
    case 842u: goto L_08AB77EC;
    case 843u: goto L_08AB77F8;
    case 844u: goto L_08AB77FC;
    case 845u: goto L_08AB7804;
    case 846u: goto L_08AB7814;
    case 847u: goto L_08AB7824;
    case 848u: goto L_08AB783C;
    case 849u: goto L_08AB7844;
    case 850u: goto L_08AB784C;
    case 851u: goto L_08AB7858;
    case 852u: goto L_08AB7860;
    case 853u: goto L_08AB7868;
    case 854u: goto L_08AB78EC;
    case 855u: goto L_08AB79A0;
    case 856u: goto L_08AB79C8;
    case 857u: goto L_08AB79D0;
    case 858u: goto L_08AB7A3C;
    case 859u: goto L_08AB7A48;
    case 860u: goto L_08AB7A54;
    case 861u: goto L_08AB7A5C;
    case 862u: goto L_08AB7A64;
    case 863u: goto L_08AB7A74;
    case 864u: goto L_08AB7A7C;
    case 865u: goto L_08AB7A90;
    case 866u: goto L_08AB7A98;
    case 867u: goto L_08AB7AAC;
    case 868u: goto L_08AB7AB4;
    case 869u: goto L_08AB7AC0;
    case 870u: goto L_08AB7AC8;
    case 871u: goto L_08AB7AF4;
    case 872u: goto L_08AB7B04;
    case 873u: goto L_08AB7B34;
    case 874u: goto L_08AB7B40;
    case 875u: goto L_08AB7B4C;
    case 876u: goto L_08AB7B64;
    case 877u: goto L_08AB7B68;
    case 878u: goto L_08AB7B74;
    case 879u: goto L_08AB7B7C;
    case 880u: goto L_08AB7B84;
    case 881u: goto L_08AB7B90;
    case 882u: goto L_08AB7B98;
    case 883u: goto L_08AB7BA8;
    case 884u: goto L_08AB7BB0;
    case 885u: goto L_08AB7BBC;
    case 886u: goto L_08AB7BC4;
    case 887u: goto L_08AB7BCC;
    case 888u: goto L_08AB7BD4;
    case 889u: goto L_08AB7BDC;
    case 890u: goto L_08AB7BE4;
    case 891u: goto L_08AB7BF0;
    case 892u: goto L_08AB7C08;
    case 893u: goto L_08AB7C10;
    case 894u: goto L_08AB7C18;
    case 895u: goto L_08AB7C2C;
    case 896u: goto L_08AB7C44;
    case 897u: goto L_08AB7C4C;
    case 898u: goto L_08AB7C50;
    case 899u: goto L_08AB7C58;
    case 900u: goto L_08AB7C74;
    case 901u: goto L_08AB7C7C;
    case 902u: goto L_08AB7C84;
    case 903u: goto L_08AB7C90;
    case 904u: goto L_08AB7C9C;
    case 905u: goto L_08AB7CA8;
    case 906u: goto L_08AB7CB8;
    case 907u: goto L_08AB7CE4;
    case 908u: goto L_08AB7D94;
    case 909u: goto L_08AB7D9C;
    case 910u: goto L_08AB7DA4;
    case 911u: goto L_08AB7DAC;
    case 912u: goto L_08AB7DB4;
    case 913u: goto L_08AB7DC4;
    case 914u: goto L_08AB7DE4;
    case 915u: goto L_08AB7E0C;
    case 916u: goto L_08AB7E14;
    case 917u: goto L_08AB7E1C;
    case 918u: goto L_08AB7E24;
    case 919u: goto L_08AB7E64;
    case 920u: goto L_08AB7E6C;
    case 921u: goto L_08AB7E7C;
    case 922u: goto L_08AB7E88;
    case 923u: goto L_08AB7E94;
    case 924u: goto L_08AB7EA0;
    case 925u: goto L_08AB7EA8;
    case 926u: goto L_08AB7EB0;
    case 927u: goto L_08AB7EB8;
    case 928u: goto L_08AB7EC0;
    case 929u: goto L_08AB7EC8;
    case 930u: goto L_08AB7ED0;
    case 931u: goto L_08AB7ED8;
    case 932u: goto L_08AB7EE8;
    case 933u: goto L_08AB7EFC;
    case 934u: goto L_08AB7F04;
    case 935u: goto L_08AB7F10;
    case 936u: goto L_08AB7F4C;
    case 937u: goto L_08AB7F54;
    case 938u: goto L_08AB7F5C;
    case 939u: goto L_08AB7F64;
    case 940u: goto L_08AB7FB8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AB4000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB4018u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0E0C4u;
    return;
L_08AB4018:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08AB4024u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.pc = 0x08B0E0BCu;
    return;
L_08AB4024:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AB4030u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB4040;
L_08AB4030:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4040:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 992u, 0x08AB3DCCu>(ctx, &aot_mem); return;
L_08AB4048:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB4064u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AB4064u) goto L_08AB4064;
    return;
L_08AB4064:
    ctx.set_gpr(31, 0x08AB406Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB406Cu) goto L_08AB406C;
    return;
L_08AB406C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AB4164u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AB4164u) goto L_08AB4164;
    return;
L_08AB4164:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4178:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB41A4;
    }
    goto L_08AB4194;
L_08AB4194:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AB41B8;
    }
    goto L_08AB41A0;
L_08AB41A0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB41A4;
L_08AB41A4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AB41B4u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AB41B4u) goto L_08AB41B4;
    return;
L_08AB41B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB41B8;
L_08AB41B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB41E8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AB41E8u) goto L_08AB41E8;
    return;
L_08AB41E8:
    ctx.set_gpr(31, 0x08AB41F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 915u, 0x08AAB1F0u>(ctx, &aot_mem) && ctx.pc == 0x08AB41F0u) goto L_08AB41F0;
    return;
L_08AB41F0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AB4200u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25712));
    goto L_08AB4564;
L_08AB4200:
    ctx.set_gpr(31, 0x08AB4208u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AB4208u) goto L_08AB4208;
    return;
L_08AB4208:
    ctx.set_gpr(31, 0x08AB4210u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB4554;
L_08AB4210:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB4288;
      }
      goto L_08AB4218;
    }
L_08AB4218:
    ctx.set_gpr(31, 0x08AB4220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AB4220u) goto L_08AB4220;
    return;
L_08AB4220:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB422Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08AB422Cu) goto L_08AB422C;
    return;
L_08AB422C:
    ctx.set_gpr(31, 0x08AB4234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4234u) goto L_08AB4234;
    return;
L_08AB4234:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB4244u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(236));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AB4244u) goto L_08AB4244;
    return;
L_08AB4244:
    ctx.set_gpr(31, 0x08AB424Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AB424Cu) goto L_08AB424C;
    return;
L_08AB424C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB4258u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AB4258u) goto L_08AB4258;
    return;
L_08AB4258:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB4288u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB4288u) goto L_08AB4288;
    return;
L_08AB4288:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AB4294u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 438u, 0x08AADC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4294u) goto L_08AB4294;
    return;
L_08AB4294:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AB42A0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 525u, 0x08AAE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB42A0u) goto L_08AB42A0;
    return;
L_08AB42A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB42B8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08AB42B8u) goto L_08AB42B8;
    return;
L_08AB42B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AB42C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 599u, 0x08AAE670u>(ctx, &aot_mem) && ctx.pc == 0x08AB42C4u) goto L_08AB42C4;
    return;
L_08AB42C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08AB42DCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 787u, 0x0885F02Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB42DCu) goto L_08AB42DC;
    return;
L_08AB42DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB42F4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 252u, 0x08B0CEF0u>(ctx, &aot_mem) && ctx.pc == 0x08AB42F4u) goto L_08AB42F4;
    return;
L_08AB42F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB430Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AB430Cu) goto L_08AB430C;
    return;
L_08AB430C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4324;
      }
      goto L_08AB4314;
    }
L_08AB4314:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB44E4;
      }
      goto L_08AB4324;
    }
L_08AB4324:
    ctx.set_gpr(31, 0x08AB432Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AB432Cu) goto L_08AB432C;
    return;
L_08AB432C:
    ctx.set_gpr(31, 0x08AB4334u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB4530;
L_08AB4334:
    ctx.set_gpr(31, 0x08AB433Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AB433Cu) goto L_08AB433C;
    return;
L_08AB433C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB4348u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB4508;
L_08AB4348:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB4358u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AB4358u) goto L_08AB4358;
    return;
L_08AB4358:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB4368u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AB4368u) goto L_08AB4368;
    return;
L_08AB4368:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB437Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AB46A0;
L_08AB437C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB43B4;
      }
      goto L_08AB4390;
    }
L_08AB4390:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08AB43B8;
    }
    goto L_08AB439C;
L_08AB439C:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB43B4;
      }
      goto L_08AB43A4;
    }
L_08AB43A4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB43B4;
      }
      goto L_08AB43AC;
    }
L_08AB43AC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AB43BC;
      }
      goto L_08AB43B4;
    }
L_08AB43B4:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB43B8;
L_08AB43B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08AB43BC;
L_08AB43BC:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(17)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08AB43D4;
    }
    goto L_08AB43CC;
L_08AB43CC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AB43D4;
L_08AB43D4:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08AB43F0;
    }
    goto L_08AB43DC;
L_08AB43DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AB43ECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 496u, 0x08AAE130u>(ctx, &aot_mem) && ctx.pc == 0x08AB43ECu) goto L_08AB43EC;
    return;
L_08AB43EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08AB43F0;
L_08AB43F0:
    ctx.set_gpr(31, 0x08AB43F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 74u, 0x08AAC60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB43F8u) goto L_08AB43F8;
    return;
L_08AB43F8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(88));
        goto L_08AB447C;
    }
    goto L_08AB4400;
L_08AB4400:
    ctx.set_gpr(31, 0x08AB4408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AB4408u) goto L_08AB4408;
    return;
L_08AB4408:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB4420u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AB4420u) goto L_08AB4420;
    return;
L_08AB4420:
    ctx.set_gpr(31, 0x08AB4428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AB4428u) goto L_08AB4428;
    return;
L_08AB4428:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB4448u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4448u) goto L_08AB4448;
    return;
L_08AB4448:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AB4458u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB4500;
L_08AB4458:
    ctx.set_gpr(31, 0x08AB4460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4460u) goto L_08AB4460;
    return;
L_08AB4460:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB446Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AB446Cu) goto L_08AB446C;
    return;
L_08AB446C:
    ctx.set_gpr(31, 0x08AB4474u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AB50B8;
L_08AB4474:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB44E4;
      }
      goto L_08AB447C;
    }
L_08AB447C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AB448Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AB448Cu) goto L_08AB448C;
    return;
L_08AB448C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB4498u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4498u) goto L_08AB4498;
    return;
L_08AB4498:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(220)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(228)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(232)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB44E4;
L_08AB44E4:
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
L_08AB4500:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4508:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem); return;
L_08AB4530:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 77u, 0x08AFC5B4u>(ctx, &aot_mem); return;
L_08AB4554:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4776)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4564:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB456C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB4588u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AB4588u) goto L_08AB4588;
    return;
L_08AB4588:
    ctx.set_gpr(31, 0x08AB4590u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AB4590u) goto L_08AB4590;
    return;
L_08AB4590:
    ctx.set_gpr(31, 0x08AB4598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AB4598u) goto L_08AB4598;
    return;
L_08AB4598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB45A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB45A4u) goto L_08AB45A4;
    return;
L_08AB45A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB45E0;
      }
      goto L_08AB45B0;
    }
L_08AB45B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AB45C0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 365u, 0x08861720u>(ctx, &aot_mem) && ctx.pc == 0x08AB45C0u) goto L_08AB45C0;
    return;
L_08AB45C0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB45E0;
      }
      goto L_08AB45CC;
    }
L_08AB45CC:
    ctx.set_gpr(31, 0x08AB45D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AB45D4u) goto L_08AB45D4;
    return;
L_08AB45D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB45E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB45E0u) goto L_08AB45E0;
    return;
L_08AB45E0:
    ctx.set_gpr(31, 0x08AB45E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AB45E8u) goto L_08AB45E8;
    return;
L_08AB45E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB45F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB45F4u) goto L_08AB45F4;
    return;
L_08AB45F4:
    ctx.set_gpr(31, 0x08AB45FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AB45FCu) goto L_08AB45FC;
    return;
L_08AB45FC:
    ctx.set_gpr(31, 0x08AB4604u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB4604u) goto L_08AB4604;
    return;
L_08AB4604:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4618:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AB4628u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 547u, 0x08ABDF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4628u) goto L_08AB4628;
    return;
L_08AB4628:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4638:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB4650u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 554u, 0x08ABDFB4u>(ctx, &aot_mem) && ctx.pc == 0x08AB4650u) goto L_08AB4650;
    return;
L_08AB4650:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB4660u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB4660u) goto L_08AB4660;
    return;
L_08AB4660:
    ctx.set_gpr(31, 0x08AB4668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AB4668u) goto L_08AB4668;
    return;
L_08AB4668:
    ctx.set_gpr(31, 0x08AB4670u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AB4670u) goto L_08AB4670;
    return;
L_08AB4670:
    ctx.set_gpr(31, 0x08AB4678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AB4678u) goto L_08AB4678;
    return;
L_08AB4678:
    ctx.set_gpr(31, 0x08AB4680u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AB4680u) goto L_08AB4680;
    return;
L_08AB4680:
    ctx.set_gpr(31, 0x08AB4688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4688u) goto L_08AB4688;
    return;
L_08AB4688:
    ctx.set_gpr(31, 0x08AB4690u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4690u) goto L_08AB4690;
    return;
L_08AB4690:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(31, 0x08AB46D4u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_08AB456C;
L_08AB46D4:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(656));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    goto L_08AB46E4;
L_08AB46E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB46E4;
      }
      goto L_08AB4704;
    }
L_08AB4704:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    goto L_08AB4714;
L_08AB4714:
    ctx.set_gpr(18, ctx.gpr[20] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x08AB4720u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 664u, 0x08AAA488u>(ctx, &aot_mem) && ctx.pc == 0x08AB4720u) goto L_08AB4720;
    return;
L_08AB4720:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB4740;
      }
      goto L_08AB473C;
    }
L_08AB473C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AB4740;
L_08AB4740:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB4714;
      }
      goto L_08AB4754;
    }
L_08AB4754:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08AB4758;
L_08AB4758:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(216));
      if (branch_taken) {
          goto L_08AB4780;
      }
      goto L_08AB4764;
    }
L_08AB4764:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(306));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB4778u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AB47B4;
L_08AB4778:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(116));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08AB4780;
L_08AB4780:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AB4758;
      }
      goto L_08AB4790;
    }
L_08AB4790:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB47D0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB47D0u) goto L_08AB47D0;
    return;
L_08AB47D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
      if (branch_taken) {
          goto L_08AB47E0;
      }
      goto L_08AB47D8;
    }
L_08AB47D8:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08AB47E0;
L_08AB47E0:
    ctx.set_gpr(3, 0u - ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB480C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB4824u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4824u) goto L_08AB4824;
    return;
L_08AB4824:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
        goto L_08AB4838;
    }
    goto L_08AB4830;
L_08AB4830:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB4898;
      }
      goto L_08AB4838;
    }
L_08AB4838:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
        goto L_08AB4854;
    }
    goto L_08AB4840;
L_08AB4840:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB484Cu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(0u));
    goto L_08AB4E34;
L_08AB484C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB4898;
      }
      goto L_08AB4854;
    }
L_08AB4854:
    ctx.set_gpr(31, 0x08AB485Cu);
    // nop
    goto L_08AB48A8;
L_08AB485C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB4874;
    }
    goto L_08AB4864;
L_08AB4864:
    ctx.set_gpr(31, 0x08AB486Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB48CC;
L_08AB486C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB489C;
      }
      goto L_08AB4874;
    }
L_08AB4874:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(784)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(788)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(792)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB4898;
L_08AB4898:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB489C;
L_08AB489C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB48A8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
        goto L_08AB48C4;
    }
    goto L_08AB48B8;
L_08AB48B8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08AB48C4;
L_08AB48C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB48CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08AB4924;
      }
      goto L_08AB48EC;
    }
L_08AB48EC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-23472));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4908:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB4928;
      }
      goto L_08AB4910;
    }
L_08AB4910:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB4924;
      }
      goto L_08AB4918;
    }
L_08AB4918:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB4924;
      }
      goto L_08AB4920;
    }
L_08AB4920:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    goto L_08AB4924;
L_08AB4924:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08AB4928;
L_08AB4928:
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AB4980;
    }
    goto L_08AB4930;
L_08AB4930:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AB4970;
    }
    goto L_08AB493C;
L_08AB493C:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, 16128u << 16u);
        goto L_08AB494C;
    }
    goto L_08AB4944;
L_08AB4944:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB49B8;
      }
      goto L_08AB494C;
    }
L_08AB494C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB4968u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB4968u) goto L_08AB4968;
    return;
L_08AB4968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB49B4;
      }
      goto L_08AB4970;
    }
L_08AB4970:
    ctx.set_gpr(31, 0x08AB4978u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE2D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4978u) goto L_08AB4978;
    return;
L_08AB4978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB49B4;
      }
      goto L_08AB4980;
    }
L_08AB4980:
    ctx.set_gpr(31, 0x08AB4988u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 585u, 0x08AAE578u>(ctx, &aot_mem) && ctx.pc == 0x08AB4988u) goto L_08AB4988;
    return;
L_08AB4988:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(796)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(804)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AB49B8;
      }
      goto L_08AB49B4;
    }
L_08AB49B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB49B8;
L_08AB49B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB49C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AB49E4u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 600u, 0x08AAE684u>(ctx, &aot_mem) && ctx.pc == 0x08AB49E4u) goto L_08AB49E4;
    return;
L_08AB49E4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
        goto L_08AB49F8;
    }
    goto L_08AB49F0;
L_08AB49F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB4ACC;
      }
      goto L_08AB49F8;
    }
L_08AB49F8:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB4A44;
      }
      goto L_08AB4A04;
    }
L_08AB4A04:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-23440));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4A20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB4A48;
      }
      goto L_08AB4A28;
    }
L_08AB4A28:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB4A44;
      }
      goto L_08AB4A30;
    }
L_08AB4A30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
        goto L_08AB4A44;
    }
    goto L_08AB4A40;
L_08AB4A40:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08AB4A44;
L_08AB4A44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08AB4A48;
L_08AB4A48:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB4AA0;
      }
      goto L_08AB4A50;
    }
L_08AB4A50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AB4A90;
    }
    goto L_08AB4A5C;
L_08AB4A5C:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, 16128u << 16u);
        goto L_08AB4A6C;
    }
    goto L_08AB4A64;
L_08AB4A64:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB4ACC;
      }
      goto L_08AB4A6C;
    }
L_08AB4A6C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB4A88u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB4A88u) goto L_08AB4A88;
    return;
L_08AB4A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4AC8;
      }
      goto L_08AB4A90;
    }
L_08AB4A90:
    ctx.set_gpr(31, 0x08AB4A98u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE2D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4A98u) goto L_08AB4A98;
    return;
L_08AB4A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4AC8;
      }
      goto L_08AB4AA0;
    }
L_08AB4AA0:
    ctx.set_gpr(31, 0x08AB4AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4AA8u) goto L_08AB4AA8;
    return;
L_08AB4AA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB4AB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08AB4AB4u) goto L_08AB4AB4;
    return;
L_08AB4AB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AB4AC0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE2D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4AC0u) goto L_08AB4AC0;
    return;
L_08AB4AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB4ACC;
      }
      goto L_08AB4AC8;
    }
L_08AB4AC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB4ACC;
L_08AB4ACC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4ADC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB4B08u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB4B08u) goto L_08AB4B08;
    return;
L_08AB4B08:
    ctx.set_gpr(31, 0x08AB4B10u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AB4B10u) goto L_08AB4B10;
    return;
L_08AB4B10:
    ctx.set_gpr(31, 0x08AB4B18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB4530;
L_08AB4B18:
    ctx.set_gpr(31, 0x08AB4B20u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AB4B20u) goto L_08AB4B20;
    return;
L_08AB4B20:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB4B2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB4508;
L_08AB4B2C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB4B38u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AB4B38u) goto L_08AB4B38;
    return;
L_08AB4B38:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AB4B48u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AB4B48u) goto L_08AB4B48;
    return;
L_08AB4B48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AB4B68;
      }
      goto L_08AB4B54;
    }
L_08AB4B54:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB4B68u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB46A0;
L_08AB4B68:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
        goto L_08AB4B78;
    }
    goto L_08AB4B70;
L_08AB4B70:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB4C3C;
      }
      goto L_08AB4B78;
    }
L_08AB4B78:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
        goto L_08AB4BE8;
    }
    goto L_08AB4B80;
L_08AB4B80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
        goto L_08AB4B94;
    }
    goto L_08AB4B8C;
L_08AB4B8C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB4C3C;
      }
      goto L_08AB4B94;
    }
L_08AB4B94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB4BA0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AB4D18;
L_08AB4BA0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4C38;
      }
      goto L_08AB4BAC;
    }
L_08AB4BAC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AB4BC0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AB4BC0u) goto L_08AB4BC0;
    return;
L_08AB4BC0:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(812)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(816)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AB4C38;
      }
      goto L_08AB4BE8;
    }
L_08AB4BE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB4BF4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB4D18;
L_08AB4BF4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4C38;
      }
      goto L_08AB4C00;
    }
L_08AB4C00:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AB4C14u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AB4C14u) goto L_08AB4C14;
    return;
L_08AB4C14:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(820)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(824)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(828)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB4C38;
L_08AB4C38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB4C3C;
L_08AB4C3C:
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
L_08AB4C58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    goto L_08AB4C80;
L_08AB4C80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(216));
      if (branch_taken) {
          goto L_08AB4CC4;
      }
      goto L_08AB4C8C;
    }
L_08AB4C8C:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AB4C98u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(104));
    goto L_08AB4D10;
L_08AB4C98:
    ctx.set_fpr_bits(15, ctx.fpr_bits(0));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AB4CACu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AB4CACu) goto L_08AB4CAC;
    return;
L_08AB4CAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AB4CC4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(832));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4CC4u) goto L_08AB4CC4;
    return;
L_08AB4CC4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AB4C80;
      }
      goto L_08AB4CD4;
    }
L_08AB4CD4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AB4CECu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AB4CECu) goto L_08AB4CEC;
    return;
L_08AB4CEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4D10:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4D18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB4DFC;
      }
      goto L_08AB4D30;
    }
L_08AB4D30:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-23408));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4D4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB4DFC;
      }
      goto L_08AB4D5C;
    }
L_08AB4D5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB4DFC;
      }
      goto L_08AB4D6C;
    }
L_08AB4D6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AB4DFC;
      }
      goto L_08AB4D84;
    }
L_08AB4D84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AB4DFC;
      }
      goto L_08AB4D9C;
    }
L_08AB4D9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB4DFC;
      }
      goto L_08AB4DAC;
    }
L_08AB4DAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AB4DFC;
      }
      goto L_08AB4DC4;
    }
L_08AB4DC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AB4DFC;
      }
      goto L_08AB4DDC;
    }
L_08AB4DDC:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AB4DF4;
    }
    goto L_08AB4DE4;
L_08AB4DE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB4DFC;
      }
      goto L_08AB4DF4;
    }
L_08AB4DF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    goto L_08AB4DFC;
L_08AB4DFC:
    ctx.set_gpr(31, 0x08AB4E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AB4E04u) goto L_08AB4E04;
    return;
L_08AB4E04:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(31, 0x08AB4E10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB4E24;
L_08AB4E10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4E24:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4776), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4E34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(836));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    goto L_08AB4E60;
L_08AB4E60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB4E60;
      }
      goto L_08AB4E80;
    }
L_08AB4E80:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1088));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    goto L_08AB4E90;
L_08AB4E90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB4E90;
      }
      goto L_08AB4EB0;
    }
L_08AB4EB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(60));
    ctx.set_fpr_bits(15, ctx.fpr_bits(14));
    ctx.set_gpr(31, 0x08AB4EE0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 414u, 0x08B05B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4EE0u) goto L_08AB4EE0;
    return;
L_08AB4EE0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AB4EEC;
L_08AB4EEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AB4F2C;
    }
    goto L_08AB4F10;
L_08AB4F10:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AB4F28u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AB4F28u) goto L_08AB4F28;
    return;
L_08AB4F28:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AB4F2C;
L_08AB4F2C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB4EEC;
      }
      goto L_08AB4F38;
    }
L_08AB4F38:
    ctx.set_gpr(31, 0x08AB4F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4F40u) goto L_08AB4F40;
    return;
L_08AB4F40:
    ctx.set_gpr(31, 0x08AB4F48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4F48u) goto L_08AB4F48;
    return;
L_08AB4F48:
    ctx.set_gpr(3, 16025u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(228), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(244), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(260), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(276), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1184)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1188)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1192)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4FA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB4FB8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    goto L_08AB5068;
L_08AB4FB8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AB4FCC;
    }
    goto L_08AB4FC4;
L_08AB4FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB5050;
      }
      goto L_08AB4FCC;
    }
L_08AB4FCC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(276), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB4FE4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    goto L_08AB5060;
L_08AB4FE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4FFC;
      }
      goto L_08AB4FEC;
    }
L_08AB4FEC:
    ctx.set_gpr(31, 0x08AB4FF4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB48CC;
L_08AB4FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB5050;
      }
      goto L_08AB4FFC;
    }
L_08AB4FFC:
    ctx.set_gpr(31, 0x08AB5004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5004u) goto L_08AB5004;
    return;
L_08AB5004:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5014u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(236));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AB5014u) goto L_08AB5014;
    return;
L_08AB5014:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AB5028u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AB5028u) goto L_08AB5028;
    return;
L_08AB5028:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1196)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1200)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1204)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB5050;
L_08AB5050:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5060:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5068:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB5088u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08AB5088u) goto L_08AB5088;
    return;
L_08AB5088:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB50A0;
    }
    goto L_08AB5090;
L_08AB5090:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB50A0u);
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB50A0u) goto L_08AB50A0;
    return;
L_08AB50A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB50B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1316)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1320)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1324)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1328)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 16776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AB5130u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(14));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 414u, 0x08B05B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5130u) goto L_08AB5130;
    return;
L_08AB5130:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08AB513C;
L_08AB513C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AB5158u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AB5158u) goto L_08AB5158;
    return;
L_08AB5158:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB513C;
      }
      goto L_08AB5168;
    }
L_08AB5168:
    ctx.set_gpr(3, 16025u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(276), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1332)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1336)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1340)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AB51C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB51E0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    goto L_08AB5068;
L_08AB51E0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AB51F4;
    }
    goto L_08AB51EC;
L_08AB51EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB5284;
      }
      goto L_08AB51F4;
    }
L_08AB51F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB5208u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(276), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5208u) goto L_08AB5208;
    return;
L_08AB5208:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5218u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(236));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AB5218u) goto L_08AB5218;
    return;
L_08AB5218:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AB522Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AB522Cu) goto L_08AB522C;
    return;
L_08AB522C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB5238u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5238u) goto L_08AB5238;
    return;
L_08AB5238:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1344)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1348)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1352)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1360)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1356)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1364)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB5284;
L_08AB5284:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1504)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1508)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1512)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1516)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1520)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1524)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1528)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1532)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB532Cu);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AB532Cu) goto L_08AB532C;
    return;
L_08AB532C:
    ctx.set_gpr(31, 0x08AB5334u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB5334u) goto L_08AB5334;
    return;
L_08AB5334:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1536)));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1540)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1544)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1548)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1552)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1556)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1560)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1564)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1568)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1572)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1576)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1580)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AB542Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AB542Cu) goto L_08AB542C;
    return;
L_08AB542C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5440:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5448:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-12628), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-12624), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AB548Cu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 305u, 0x088A54C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB548Cu) goto L_08AB548C;
    return;
L_08AB548C:
    ctx.set_gpr(3, 26214u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 26215u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1608));
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1620));
    ctx.set_gpr(31, 0x08AB54C0u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB54C0u) goto L_08AB54C0;
    return;
L_08AB54C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AB54CCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 304u, 0x088A54BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB54CCu) goto L_08AB54CC;
    return;
L_08AB54CC:
    ctx.set_gpr(3, 26214u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 26215u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1608));
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1624));
    ctx.set_gpr(31, 0x08AB5500u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5500u) goto L_08AB5500;
    return;
L_08AB5500:
    ctx.set_gpr(31, 0x08AB5508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AB5508u) goto L_08AB5508;
    return;
L_08AB5508:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5514u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08AB5514u) goto L_08AB5514;
    return;
L_08AB5514:
    ctx.set_gpr(31, 0x08AB551Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB551Cu) goto L_08AB551C;
    return;
L_08AB551C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5528u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    goto L_08AB5298;
L_08AB5528:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB5534u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AB5534u) goto L_08AB5534;
    return;
L_08AB5534:
    ctx.set_gpr(31, 0x08AB553Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AB553Cu) goto L_08AB553C;
    return;
L_08AB553C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5548u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AB5548u) goto L_08AB5548;
    return;
L_08AB5548:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AB5554u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 530u, 0x08AAE348u>(ctx, &aot_mem) && ctx.pc == 0x08AB5554u) goto L_08AB5554;
    return;
L_08AB5554:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB5584u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB5584u) goto L_08AB5584;
    return;
L_08AB5584:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AB5590u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 525u, 0x08AAE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5590u) goto L_08AB5590;
    return;
L_08AB5590:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB55A8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08AB55A8u) goto L_08AB55A8;
    return;
L_08AB55A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB55C0u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08AB55C0u) goto L_08AB55C0;
    return;
L_08AB55C0:
    ctx.set_gpr(31, 0x08AB55C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AB55C8u) goto L_08AB55C8;
    return;
L_08AB55C8:
    ctx.set_gpr(31, 0x08AB55D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB4530;
L_08AB55D0:
    ctx.set_gpr(31, 0x08AB55D8u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AB55D8u) goto L_08AB55D8;
    return;
L_08AB55D8:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB55E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB4508;
L_08AB55E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB55F4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AB55F4u) goto L_08AB55F4;
    return;
L_08AB55F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5604u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AB5604u) goto L_08AB5604;
    return;
L_08AB5604:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AB5618u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB5728;
L_08AB5618:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08AB562Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AB562Cu) goto L_08AB562C;
    return;
L_08AB562C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB5638u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5638u) goto L_08AB5638;
    return;
L_08AB5638:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1584)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1588)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1592)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1600)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1604)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB56A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AB56B0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 547u, 0x08ABDF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB56B0u) goto L_08AB56B0;
    return;
L_08AB56B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB56C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB56D8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 554u, 0x08ABDFB4u>(ctx, &aot_mem) && ctx.pc == 0x08AB56D8u) goto L_08AB56D8;
    return;
L_08AB56D8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB56E8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB56E8u) goto L_08AB56E8;
    return;
L_08AB56E8:
    ctx.set_gpr(31, 0x08AB56F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AB56F0u) goto L_08AB56F0;
    return;
L_08AB56F0:
    ctx.set_gpr(31, 0x08AB56F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AB56F8u) goto L_08AB56F8;
    return;
L_08AB56F8:
    ctx.set_gpr(31, 0x08AB5700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AB5700u) goto L_08AB5700;
    return;
L_08AB5700:
    ctx.set_gpr(31, 0x08AB5708u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AB5708u) goto L_08AB5708;
    return;
L_08AB5708:
    ctx.set_gpr(31, 0x08AB5710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5710u) goto L_08AB5710;
    return;
L_08AB5710:
    ctx.set_gpr(31, 0x08AB5718u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5718u) goto L_08AB5718;
    return;
L_08AB5718:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[7]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1704)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1708)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1712)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1716)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1720)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1724)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1728)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1732)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB57C4;
L_08AB57C4:
    ctx.set_gpr(18, ctx.gpr[20] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x08AB57D0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 664u, 0x08AAA488u>(ctx, &aot_mem) && ctx.pc == 0x08AB57D0u) goto L_08AB57D0;
    return;
L_08AB57D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB57F0;
      }
      goto L_08AB57EC;
    }
L_08AB57EC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AB57F0;
L_08AB57F0:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB57C4;
      }
      goto L_08AB5804;
    }
L_08AB5804:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08AB5808;
L_08AB5808:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(188));
      if (branch_taken) {
          goto L_08AB5830;
      }
      goto L_08AB5814;
    }
L_08AB5814:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(306));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB5828u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AB47B4;
L_08AB5828:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(116));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08AB5830;
L_08AB5830:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AB5808;
      }
      goto L_08AB5840;
    }
L_08AB5840:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5864:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB587Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 839u, 0x08ABF36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB587Cu) goto L_08AB587C;
    return;
L_08AB587C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
        goto L_08AB5890;
    }
    goto L_08AB5888;
L_08AB5888:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB58D4;
      }
      goto L_08AB5890;
    }
L_08AB5890:
    ctx.set_gpr(31, 0x08AB5898u);
    // nop
    goto L_08AB48A8;
L_08AB5898:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB58B0;
    }
    goto L_08AB58A0;
L_08AB58A0:
    ctx.set_gpr(31, 0x08AB58A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB58E4;
L_08AB58A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB58D8;
      }
      goto L_08AB58B0;
    }
L_08AB58B0:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1736)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1740)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1744)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB58D4;
L_08AB58D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB58D8;
L_08AB58D8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB58E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AB58F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE2D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB58F8u) goto L_08AB58F8;
    return;
L_08AB58F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5908:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB593Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB593Cu) goto L_08AB593C;
    return;
L_08AB593C:
    ctx.set_gpr(31, 0x08AB5944u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AB5944u) goto L_08AB5944;
    return;
L_08AB5944:
    ctx.set_gpr(31, 0x08AB594Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB4530;
L_08AB594C:
    ctx.set_gpr(31, 0x08AB5954u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AB5954u) goto L_08AB5954;
    return;
L_08AB5954:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AB5960u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB4508;
L_08AB5960:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB596Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AB596Cu) goto L_08AB596C;
    return;
L_08AB596C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AB597Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 401u, 0x08A81268u>(ctx, &aot_mem) && ctx.pc == 0x08AB597Cu) goto L_08AB597C;
    return;
L_08AB597C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    if (ctx.gpr[3] == ctx.gpr[19]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
        goto L_08AB59A0;
    }
    goto L_08AB5988;
L_08AB5988:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AB599Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AB5728;
L_08AB599C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    goto L_08AB59A0;
L_08AB59A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
        goto L_08AB59CC;
    }
    goto L_08AB59AC;
L_08AB59AC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
        goto L_08AB59BC;
    }
    goto L_08AB59B4;
L_08AB59B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB59D4;
      }
      goto L_08AB59BC;
    }
L_08AB59BC:
    ctx.set_gpr(31, 0x08AB59C4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AB5AE4;
L_08AB59C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB59D4;
      }
      goto L_08AB59CC;
    }
L_08AB59CC:
    ctx.set_gpr(31, 0x08AB59D4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AB5C30;
L_08AB59D4:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AB59E4;
    }
    goto L_08AB59DC;
L_08AB59DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB5A2C;
      }
      goto L_08AB59E4;
    }
L_08AB59E4:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(60));
        goto L_08AB59F4;
    }
    goto L_08AB59EC;
L_08AB59EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB5A2C;
      }
      goto L_08AB59F4;
    }
L_08AB59F4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08AB5A04u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 831u, 0x08ABF318u>(ctx, &aot_mem) && ctx.pc == 0x08AB5A04u) goto L_08AB5A04;
    return;
L_08AB5A04:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1748)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1752)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1756)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB5A2C;
L_08AB5A2C:
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
L_08AB5A4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08AB5A68u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08AB4D10;
L_08AB5A68:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(15, ctx.fpr_bits(0));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AB5A80u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AB5A80u) goto L_08AB5A80;
    return;
L_08AB5A80:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AB5A84;
L_08AB5A84:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(188));
      if (branch_taken) {
          goto L_08AB5AA4;
      }
      goto L_08AB5A90;
    }
L_08AB5A90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08AB5AA4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(832));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5AA4u) goto L_08AB5AA4;
    return;
L_08AB5AA4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AB5A84;
      }
      goto L_08AB5AB4;
    }
L_08AB5AB4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AB5ACCu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AB5ACCu) goto L_08AB5ACC;
    return;
L_08AB5ACC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5AE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AB5B0Cu);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5B0Cu) goto L_08AB5B0C;
    return;
L_08AB5B0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5B18u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AB5B18u) goto L_08AB5B18;
    return;
L_08AB5B18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5B28;
      }
      goto L_08AB5B20;
    }
L_08AB5B20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08AB5B48;
      }
      goto L_08AB5B28;
    }
L_08AB5B28:
    ctx.set_gpr(31, 0x08AB5B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5B30u) goto L_08AB5B30;
    return;
L_08AB5B30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5B3Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AB5B3Cu) goto L_08AB5B3C;
    return;
L_08AB5B3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5B48;
      }
      goto L_08AB5B44;
    }
L_08AB5B44:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(10));
    goto L_08AB5B48;
L_08AB5B48:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AB5C10;
    }
    goto L_08AB5B50;
L_08AB5B50:
    ctx.set_gpr(31, 0x08AB5B58u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 305u, 0x088A54C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5B58u) goto L_08AB5B58;
    return;
L_08AB5B58:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB5B6Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 679u, 0x08862AB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5B6Cu) goto L_08AB5B6C;
    return;
L_08AB5B6C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
        goto L_08AB5B94;
    }
    goto L_08AB5B74;
L_08AB5B74:
    ctx.set_gpr(31, 0x08AB5B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5B7Cu) goto L_08AB5B7C;
    return;
L_08AB5B7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AB5B90u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5B90u) goto L_08AB5B90;
    return;
L_08AB5B90:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB5B94;
L_08AB5B94:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08AB5BA0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 683u, 0x08862AD8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5BA0u) goto L_08AB5BA0;
    return;
L_08AB5BA0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5BACu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB5C28;
L_08AB5BAC:
    ctx.set_gpr(31, 0x08AB5BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5BB4u) goto L_08AB5BB4;
    return;
L_08AB5BB4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5BC0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 305u, 0x088A54C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5BC0u) goto L_08AB5BC0;
    return;
L_08AB5BC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5BD0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 911u, 0x08AB3554u>(ctx, &aot_mem) && ctx.pc == 0x08AB5BD0u) goto L_08AB5BD0;
    return;
L_08AB5BD0:
    ctx.set_gpr(31, 0x08AB5BD8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 305u, 0x088A54C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5BD8u) goto L_08AB5BD8;
    return;
L_08AB5BD8:
    ctx.set_gpr(3, 26214u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 26215u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1608));
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1620));
    ctx.set_gpr(31, 0x08AB5C0Cu);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5C0Cu) goto L_08AB5C0C;
    return;
L_08AB5C0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB5C10;
L_08AB5C10:
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
L_08AB5C28:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5C30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AB5C58u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5C58u) goto L_08AB5C58;
    return;
L_08AB5C58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5C64u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AB5C64u) goto L_08AB5C64;
    return;
L_08AB5C64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5C74;
      }
      goto L_08AB5C6C;
    }
L_08AB5C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08AB5C94;
      }
      goto L_08AB5C74;
    }
L_08AB5C74:
    ctx.set_gpr(31, 0x08AB5C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5C7Cu) goto L_08AB5C7C;
    return;
L_08AB5C7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5C88u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AB5C88u) goto L_08AB5C88;
    return;
L_08AB5C88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5C94;
      }
      goto L_08AB5C90;
    }
L_08AB5C90:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(10));
    goto L_08AB5C94;
L_08AB5C94:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AB5D5C;
    }
    goto L_08AB5C9C;
L_08AB5C9C:
    ctx.set_gpr(31, 0x08AB5CA4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 304u, 0x088A54BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB5CA4u) goto L_08AB5CA4;
    return;
L_08AB5CA4:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB5CB8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 679u, 0x08862AB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5CB8u) goto L_08AB5CB8;
    return;
L_08AB5CB8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
        goto L_08AB5CE0;
    }
    goto L_08AB5CC0;
L_08AB5CC0:
    ctx.set_gpr(31, 0x08AB5CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5CC8u) goto L_08AB5CC8;
    return;
L_08AB5CC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AB5CDCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5CDCu) goto L_08AB5CDC;
    return;
L_08AB5CDC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB5CE0;
L_08AB5CE0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08AB5CECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 683u, 0x08862AD8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5CECu) goto L_08AB5CEC;
    return;
L_08AB5CEC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5CF8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB5D74;
L_08AB5CF8:
    ctx.set_gpr(31, 0x08AB5D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB5D00u) goto L_08AB5D00;
    return;
L_08AB5D00:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5D0Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 304u, 0x088A54BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB5D0Cu) goto L_08AB5D0C;
    return;
L_08AB5D0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB5D1Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 911u, 0x08AB3554u>(ctx, &aot_mem) && ctx.pc == 0x08AB5D1Cu) goto L_08AB5D1C;
    return;
L_08AB5D1C:
    ctx.set_gpr(31, 0x08AB5D24u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 304u, 0x088A54BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB5D24u) goto L_08AB5D24;
    return;
L_08AB5D24:
    ctx.set_gpr(3, 26214u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 26215u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1608));
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1624));
    ctx.set_gpr(31, 0x08AB5D58u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB5D58u) goto L_08AB5D58;
    return;
L_08AB5D58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB5D5C;
L_08AB5D5C:
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
L_08AB5D74:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5D7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB5D9C;
      }
      goto L_08AB5D8C;
    }
L_08AB5D8C:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB5D8C;
      }
      goto L_08AB5D9C;
    }
L_08AB5D9C:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12628)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12624)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5DC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AB5E28;
      }
      goto L_08AB5DE4;
    }
L_08AB5DE4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6664));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08AB5DFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 1021u, 0x08AABB80u>(ctx, &aot_mem) && ctx.pc == 0x08AB5DFCu) goto L_08AB5DFC;
    return;
L_08AB5DFC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08AB5E08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 1027u, 0x08AABBDCu>(ctx, &aot_mem) && ctx.pc == 0x08AB5E08u) goto L_08AB5E08;
    return;
L_08AB5E08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB5E14u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 921u, 0x08AAB254u>(ctx, &aot_mem) && ctx.pc == 0x08AB5E14u) goto L_08AB5E14;
    return;
L_08AB5E14:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AB5E2C;
    }
    goto L_08AB5E20;
L_08AB5E20:
    ctx.set_gpr(31, 0x08AB5E28u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB5E40;
L_08AB5E28:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AB5E2C;
L_08AB5E2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5E40:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08AB5E48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB5E68u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08AB5E68u) goto L_08AB5E68;
    return;
L_08AB5E68:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB5E80;
    }
    goto L_08AB5E70;
L_08AB5E70:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB5E80u);
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB5E80u) goto L_08AB5E80;
    return;
L_08AB5E80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5E98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB5EB8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08AB5EB8u) goto L_08AB5EB8;
    return;
L_08AB5EB8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB5ED0;
    }
    goto L_08AB5EC0;
L_08AB5EC0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB5ED0u);
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB5ED0u) goto L_08AB5ED0;
    return;
L_08AB5ED0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5EE8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5EF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB5F0Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB5F50;
L_08AB5F0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB5F18u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB5F48;
L_08AB5F18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AB5F28u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 663u, 0x08AF2AACu>(ctx, &aot_mem) && ctx.pc == 0x08AB5F28u) goto L_08AB5F28;
    return;
L_08AB5F28:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB5F38u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 663u, 0x08AF2AACu>(ctx, &aot_mem) && ctx.pc == 0x08AB5F38u) goto L_08AB5F38;
    return;
L_08AB5F38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F48:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F50:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F58:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F60:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F68:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F70:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F78:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F80:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F88:
    ctx.set_gpr(2, 49152u << 16u);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AB5FFC;
      }
      goto L_08AB5FB8;
    }
L_08AB5FB8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6776));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AB5FD0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 48u, 0x08AAC3B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB5FD0u) goto L_08AB5FD0;
    return;
L_08AB5FD0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08AB5FDCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 54u, 0x08AAC414u>(ctx, &aot_mem) && ctx.pc == 0x08AB5FDCu) goto L_08AB5FDC;
    return;
L_08AB5FDC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB5FE8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 921u, 0x08AAB254u>(ctx, &aot_mem) && ctx.pc == 0x08AB5FE8u) goto L_08AB5FE8;
    return;
L_08AB5FE8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AB6000;
    }
    goto L_08AB5FF4;
L_08AB5FF4:
    ctx.set_gpr(31, 0x08AB5FFCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB6014;
L_08AB5FFC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AB6000;
L_08AB6000:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6014:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08AB601C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB603Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08AB603Cu) goto L_08AB603C;
    return;
L_08AB603C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB6054;
    }
    goto L_08AB6044;
L_08AB6044:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB6054u);
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB6054u) goto L_08AB6054;
    return;
L_08AB6054:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB606C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB608Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08AB608Cu) goto L_08AB608C;
    return;
L_08AB608C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB60A4;
    }
    goto L_08AB6094;
L_08AB6094:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB60A4u);
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB60A4u) goto L_08AB60A4;
    return;
L_08AB60A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB60BC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB60C4:
    ctx.set_gpr(2, ctx.gpr[6] ^ 4u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB60D0:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 938u, 0x08A93290u>(ctx, &aot_mem); return;
L_08AB60DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22888)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AB6114;
      }
      goto L_08AB60F8;
    }
L_08AB60F8:
    ctx.set_gpr(31, 0x08AB6100u);
    // nop
    ctx.pc = 0x08B0DE74u;
    return;
L_08AB6100:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2230u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(22888), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6114;
      }
      goto L_08AB6110;
    }
L_08AB6110:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB6114;
L_08AB6114:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6150;
      }
      goto L_08AB6128;
    }
L_08AB6128:
    ctx.set_gpr(31, 0x08AB6130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 586u, 0x08AB9F34u>(ctx, &aot_mem) && ctx.pc == 0x08AB6130u) goto L_08AB6130;
    return;
L_08AB6130:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12620), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6150;
      }
      goto L_08AB614C;
    }
L_08AB614C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB6150;
L_08AB6150:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB618C;
      }
      goto L_08AB6164;
    }
L_08AB6164:
    ctx.set_gpr(31, 0x08AB616Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(768));
    ctx.pc = 0x08B0E08Cu;
    return;
L_08AB616C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12620), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB618C;
      }
      goto L_08AB6188;
    }
L_08AB6188:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB618C;
L_08AB618C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB61CC;
    }
    goto L_08AB61A0;
L_08AB61A0:
    ctx.set_gpr(31, 0x08AB61A8u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(773));
    ctx.pc = 0x08B0E08Cu;
    return;
L_08AB61A8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12620), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB61C8;
      }
      goto L_08AB61C4;
    }
L_08AB61C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB61C8;
L_08AB61C8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB61CC;
L_08AB61CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB61DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AB6224;
      }
      goto L_08AB61FC;
    }
L_08AB61FC:
    ctx.set_gpr(31, 0x08AB6204u);
    // nop
    goto L_08AB6C4C;
L_08AB6204:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-17));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12620), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6224;
      }
      goto L_08AB6220;
    }
L_08AB6220:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB6224;
L_08AB6224:
    ctx.set_gpr(31, 0x08AB622Cu);
    ctx.set_gpr(4, 0u + 0u);
    ctx.pc = 0x08B0DE84u;
    return;
L_08AB622C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB623C;
    }
    goto L_08AB6234;
L_08AB6234:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB623C;
L_08AB623C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB624C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AB625Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_08AB67E0;
L_08AB625C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB62B0;
      }
      goto L_08AB6268;
    }
L_08AB6268:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 16u);
    ctx.set_gpr(2, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12620), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB628Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AB628C:
    ctx.set_gpr(31, 0x08AB6294u);
    // nop
    goto L_08AB6C88;
L_08AB6294:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB62B0;
      }
      goto L_08AB62A0;
    }
L_08AB62A0:
    ctx.set_gpr(31, 0x08AB62A8u);
    // nop
    goto L_08AB61DC;
L_08AB62A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB62E0;
      }
      goto L_08AB62B0;
    }
L_08AB62B0:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB62C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-257));
    ctx.pc = 0x08B0DE3Cu;
    return;
L_08AB62C0:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB62D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AB62D0:
    ctx.set_gpr(31, 0x08AB62D8u);
    // nop
    goto L_08AB61DC;
L_08AB62D8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB62E0;
L_08AB62E0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB62EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AB6310u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = 0x08B0DDA4u;
    return;
L_08AB6310:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2230u << 16u);
        goto L_08AB6324;
    }
    goto L_08AB6318;
L_08AB6318:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 66u);
      if (branch_taken) {
          goto L_08AB6410;
      }
      goto L_08AB6324;
    }
L_08AB6324:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB6330u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.pc = 0x08B0DE3Cu;
    return;
L_08AB6330:
    ctx.set_gpr(31, 0x08AB6338u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(773));
    ctx.pc = 0x08B0DFFCu;
    return;
L_08AB6338:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB63F4;
      }
      goto L_08AB6344;
    }
L_08AB6344:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(768));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    ctx.set_gpr(31, 0x08AB6360u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-12620), ctx.gpr[3]);
    ctx.pc = 0x08B0DFFCu;
    return;
L_08AB6360:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB63F4;
      }
      goto L_08AB636C;
    }
L_08AB636C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    ctx.set_gpr(31, 0x08AB6384u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-12620), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 578u, 0x08AB9EC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6384u) goto L_08AB6384;
    return;
L_08AB6384:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB63F4;
      }
      goto L_08AB6390;
    }
L_08AB6390:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12620)));
    ctx.set_gpr(5, 2219u << 16u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 8u);
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12620), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1896)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25164));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AB63C8u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.pc = 0x08B0DDE4u;
    return;
L_08AB63C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB63F4;
      }
      goto L_08AB63D4;
    }
L_08AB63D4:
    ctx.set_gpr(2, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(22888), ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB63ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AB63EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AB6410;
      }
      goto L_08AB63F4;
    }
L_08AB63F4:
    ctx.set_gpr(31, 0x08AB63FCu);
    // nop
    goto L_08AB60DC;
L_08AB63FC:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB640Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AB640C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB6410;
L_08AB6410:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6420:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB6448u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.pc = 0x08B0DDA4u;
    return;
L_08AB6448:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2230u << 16u);
        goto L_08AB645C;
    }
    goto L_08AB6450;
L_08AB6450:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 66u);
      if (branch_taken) {
          goto L_08AB6490;
      }
      goto L_08AB645C;
    }
L_08AB645C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB6468u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-17));
    ctx.pc = 0x08B0DE3Cu;
    return;
L_08AB6468:
    ctx.set_gpr(31, 0x08AB6470u);
    // nop
    goto L_08AB60DC;
L_08AB6470:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB647C;
      }
      goto L_08AB6478;
    }
L_08AB6478:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB647C;
L_08AB647C:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB648Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AB648C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB6490;
L_08AB6490:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB64A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AB64E8;
      }
      goto L_08AB64C0;
    }
L_08AB64C0:
    ctx.set_gpr(31, 0x08AB64C8u);
    // nop
    ctx.pc = 0x08B0E154u;
    return;
L_08AB64C8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12616), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB64E8;
      }
      goto L_08AB64E4;
    }
L_08AB64E4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB64E8;
L_08AB64E8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6518;
      }
      goto L_08AB64F8;
    }
L_08AB64F8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB6504u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    ctx.pc = 0x08B0E144u;
    return;
L_08AB6504:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2231u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1900), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6518;
      }
      goto L_08AB6514;
    }
L_08AB6514:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB6518;
L_08AB6518:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6554;
      }
      goto L_08AB652C;
    }
L_08AB652C:
    ctx.set_gpr(31, 0x08AB6534u);
    // nop
    ctx.pc = 0x08B0E0F4u;
    return;
L_08AB6534:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12616), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6554;
      }
      goto L_08AB6550;
    }
L_08AB6550:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB6554;
L_08AB6554:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6594;
      }
      goto L_08AB6568;
    }
L_08AB6568:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(31, 0x08AB6574u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 616u, 0x08ABA0CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB6574u) goto L_08AB6574;
    return;
L_08AB6574:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12616), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6594;
      }
      goto L_08AB6590;
    }
L_08AB6590:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB6594;
L_08AB6594:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB65D4;
    }
    goto L_08AB65A8;
L_08AB65A8:
    ctx.set_gpr(31, 0x08AB65B0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(772));
    ctx.pc = 0x08B0E08Cu;
    return;
L_08AB65B0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12616), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB65D0;
      }
      goto L_08AB65CC;
    }
L_08AB65CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB65D0;
L_08AB65D0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB65D4;
L_08AB65D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB65E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11672)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11668)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6610;
      }
      goto L_08AB6600;
    }
L_08AB6600:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11844), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11664), 0u);
    goto L_08AB6610;
L_08AB6610:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11668), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11868)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB66E0;
      }
      goto L_08AB663C;
    }
L_08AB663C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    ctx.set_gpr(31, 0x08AB664Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 714u, 0x08ABA62Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB664Cu) goto L_08AB664C;
    return;
L_08AB664C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AB6670;
    }
    goto L_08AB6654;
L_08AB6654:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB66E4;
    }
    goto L_08AB665C;
L_08AB665C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    ctx.set_gpr(31, 0x08AB666Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 705u, 0x08ABA5B4u>(ctx, &aot_mem) && ctx.pc == 0x08AB666Cu) goto L_08AB666C;
    return;
L_08AB666C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AB6670;
L_08AB6670:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AB66D8;
      }
      goto L_08AB667C;
    }
L_08AB667C:
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6694;
      }
      goto L_08AB6688;
    }
L_08AB6688:
    ctx.set_gpr(1, ctx.gpr[5] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB66D8;
      }
      goto L_08AB6694;
    }
L_08AB6694:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB66A0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    ctx.pc = 0x08B0E0D4u;
    return;
L_08AB66A0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11864)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11864), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11856)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11856), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB66D8;
      }
      goto L_08AB66D0;
    }
L_08AB66D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB66E8;
      }
      goto L_08AB66D8;
    }
L_08AB66D8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11868), 0u);
    goto L_08AB66E0;
L_08AB66E0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB66E4;
L_08AB66E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB66E8;
L_08AB66E8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB66F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AB6704u);
    ctx.set_gpr(4, 0u + 0u);
    goto L_08AB6620;
L_08AB6704:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB6714;
    }
    goto L_08AB670C;
L_08AB670C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB67D8;
      }
      goto L_08AB6714;
    }
L_08AB6714:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08AB6728;
    }
    goto L_08AB6720;
L_08AB6720:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB67D4;
      }
      goto L_08AB6728;
    }
L_08AB6728:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11868)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB67D4;
    }
    goto L_08AB6734;
L_08AB6734:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB6740u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    ctx.pc = 0x08B0E13Cu;
    return;
L_08AB6740:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB67D0;
      }
      goto L_08AB6748;
    }
L_08AB6748:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AB6764u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.pc = 0x08B0E12Cu;
    return;
L_08AB6764:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08AB6774;
    }
    goto L_08AB676C;
L_08AB676C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB67D4;
      }
      goto L_08AB6774;
    }
L_08AB6774:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11864)));
    if (ctx.gpr[6] == ctx.gpr[2]) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08AB67A8;
    }
    goto L_08AB6784;
L_08AB6784:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    ctx.set_gpr(31, 0x08AB6798u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 679u, 0x08ABA42Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6798u) goto L_08AB6798;
    return;
L_08AB6798:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11864), ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AB67A8;
L_08AB67A8:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08AB67B8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 651u, 0x08ABA2D0u>(ctx, &aot_mem) && ctx.pc == 0x08AB67B8u) goto L_08AB67B8;
    return;
L_08AB67B8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB67C8;
    }
    goto L_08AB67C0;
L_08AB67C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB67D4;
      }
      goto L_08AB67C8;
    }
L_08AB67C8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11868), ctx.gpr[3]);
    goto L_08AB67D0;
L_08AB67D0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB67D4;
L_08AB67D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB67D8;
L_08AB67D8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB67E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11632)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6800;
      }
      goto L_08AB67F8;
    }
L_08AB67F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB682C;
      }
      goto L_08AB6800;
    }
L_08AB6800:
    ctx.set_gpr(31, 0x08AB6808u);
    // nop
    goto L_08AB6838;
L_08AB6808:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB6818;
      }
      goto L_08AB6810;
    }
L_08AB6810:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB6830;
      }
      goto L_08AB6818;
    }
L_08AB6818:
    ctx.set_gpr(31, 0x08AB6820u);
    // nop
    goto L_08AB6978;
L_08AB6820:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11632), ctx.gpr[4]);
    goto L_08AB682C;
L_08AB682C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB6830;
L_08AB6830:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11636), 0u);
    ctx.set_gpr(31, 0x08AB6854u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(772));
    ctx.pc = 0x08B0DFFCu;
    return;
L_08AB6854:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6954;
      }
      goto L_08AB6860;
    }
L_08AB6860:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    ctx.set_gpr(31, 0x08AB6878u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-12616), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6878u) goto L_08AB6878;
    return;
L_08AB6878:
    ctx.set_gpr(31, 0x08AB6880u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB6970;
L_08AB6880:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB6898u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 587u, 0x08AB9F3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6898u) goto L_08AB6898;
    return;
L_08AB6898:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) >= 0) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08AB68C0;
    }
    goto L_08AB68A4;
L_08AB68A4:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB6954;
      }
      goto L_08AB68B4;
    }
L_08AB68B4:
    ctx.set_gpr(2, 2246u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11636), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AB6954;
      }
      goto L_08AB68C0;
    }
L_08AB68C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    ctx.set_gpr(31, 0x08AB68D4u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-12616), ctx.gpr[3]);
    ctx.pc = 0x08B0E0ECu;
    return;
L_08AB68D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6954;
      }
      goto L_08AB68E0;
    }
L_08AB68E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    ctx.set_gpr(31, 0x08AB68F8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-12616), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB68F8u) goto L_08AB68F8;
    return;
L_08AB68F8:
    ctx.set_gpr(31, 0x08AB6900u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 533u, 0x08AB2078u>(ctx, &aot_mem) && ctx.pc == 0x08AB6900u) goto L_08AB6900;
    return;
L_08AB6900:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12576));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12544));
    ctx.set_gpr(31, 0x08AB6918u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 255u, 0x08AB8EB0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6918u) goto L_08AB6918;
    return;
L_08AB6918:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6954;
      }
      goto L_08AB6924;
    }
L_08AB6924:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12544));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12576));
    ctx.set_gpr(31, 0x08AB6940u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12608));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 278u, 0x08AB9038u>(ctx, &aot_mem) && ctx.pc == 0x08AB6940u) goto L_08AB6940;
    return;
L_08AB6940:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6954;
      }
      goto L_08AB694C;
    }
L_08AB694C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB6964;
      }
      goto L_08AB6954;
    }
L_08AB6954:
    ctx.set_gpr(31, 0x08AB695Cu);
    // nop
    goto L_08AB64A0;
L_08AB695C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB6964;
L_08AB6964:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6970:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(44));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, 0x08AB6990u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11848)));
    goto L_08AB7ED8;
L_08AB6990:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB699C;
      }
      goto L_08AB6998;
    }
L_08AB6998:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB699C;
L_08AB699C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12568)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12564)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12560)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12556)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AB69E4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB69E4u) goto L_08AB69E4;
    return;
L_08AB69E4:
    ctx.set_gpr(31, 0x08AB69ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 534u, 0x08AB2080u>(ctx, &aot_mem) && ctx.pc == 0x08AB69ECu) goto L_08AB69EC;
    return;
L_08AB69EC:
    ctx.set_gpr(31, 0x08AB69F4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB69F4u) goto L_08AB69F4;
    return;
L_08AB69F4:
    ctx.set_gpr(31, 0x08AB69FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 535u, 0x08AB2088u>(ctx, &aot_mem) && ctx.pc == 0x08AB69FCu) goto L_08AB69FC;
    return;
L_08AB69FC:
    ctx.set_gpr(31, 0x08AB6A04u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6A04u) goto L_08AB6A04;
    return;
L_08AB6A04:
    ctx.set_gpr(31, 0x08AB6A0Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 549u, 0x08AB2144u>(ctx, &aot_mem) && ctx.pc == 0x08AB6A0Cu) goto L_08AB6A0C;
    return;
L_08AB6A0C:
    ctx.set_gpr(31, 0x08AB6A14u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6A14u) goto L_08AB6A14;
    return;
L_08AB6A14:
    ctx.set_gpr(31, 0x08AB6A1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 550u, 0x08AB214Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6A1Cu) goto L_08AB6A1C;
    return;
L_08AB6A1C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11856), 0u);
    ctx.set_gpr(31, 0x08AB6A30u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08B0E0CCu;
    return;
L_08AB6A30:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6C30;
      }
      goto L_08AB6A3C;
    }
L_08AB6A3C:
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1900), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11868), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, 0x08AB6A58u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11864), 0u);
    goto L_08AB66F4;
L_08AB6A58:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6C30;
      }
      goto L_08AB6A64;
    }
L_08AB6A64:
    ctx.set_gpr(31, 0x08AB6A6Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB6620;
L_08AB6A6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6C30;
      }
      goto L_08AB6A78;
    }
L_08AB6A78:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB6A84u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    ctx.pc = 0x08B0E104u;
    return;
L_08AB6A84:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6C30;
      }
      goto L_08AB6A90;
    }
L_08AB6A90:
    ctx.set_gpr(31, 0x08AB6A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6A98u) goto L_08AB6A98;
    return;
L_08AB6A98:
    ctx.set_gpr(31, 0x08AB6AA0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 533u, 0x08AB2078u>(ctx, &aot_mem) && ctx.pc == 0x08AB6AA0u) goto L_08AB6AA0;
    return;
L_08AB6AA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(7, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12576));
    ctx.set_gpr(31, 0x08AB6AC0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-12608));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 301u, 0x08AB9130u>(ctx, &aot_mem) && ctx.pc == 0x08AB6AC0u) goto L_08AB6AC0;
    return;
L_08AB6AC0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6C30;
      }
      goto L_08AB6ACC;
    }
L_08AB6ACC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11864)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AB6AE8u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 679u, 0x08ABA42Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6AE8u) goto L_08AB6AE8;
    return;
L_08AB6AE8:
    ctx.set_gpr(31, 0x08AB6AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6AF0u) goto L_08AB6AF0;
    return;
L_08AB6AF0:
    ctx.set_gpr(31, 0x08AB6AF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 533u, 0x08AB2078u>(ctx, &aot_mem) && ctx.pc == 0x08AB6AF8u) goto L_08AB6AF8;
    return;
L_08AB6AF8:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12576));
    ctx.set_gpr(31, 0x08AB6B10u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-12544));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 336u, 0x08AB92F8u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B10u) goto L_08AB6B10;
    return;
L_08AB6B10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB6B1Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1152));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 67u, 0x088A4464u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B1Cu) goto L_08AB6B1C;
    return;
L_08AB6B1C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6C30;
      }
      goto L_08AB6B28;
    }
L_08AB6B28:
    ctx.set_gpr(31, 0x08AB6B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6B30u) goto L_08AB6B30;
    return;
L_08AB6B30:
    ctx.set_gpr(31, 0x08AB6B38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 533u, 0x08AB2078u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B38u) goto L_08AB6B38;
    return;
L_08AB6B38:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1152));
    ctx.set_gpr(31, 0x08AB6B48u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.pc = 0x08B0E14Cu;
    return;
L_08AB6B48:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6C30;
      }
      goto L_08AB6B54;
    }
L_08AB6B54:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12616)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11872), 0u);
    ctx.set_gpr(2, ctx.gpr[4] | 8u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12616), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1904), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11672), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11664), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11660), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1908), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, 0x08AB6BACu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11656), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6BACu) goto L_08AB6BAC;
    return;
L_08AB6BAC:
    ctx.set_gpr(31, 0x08AB6BB4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 533u, 0x08AB2078u>(ctx, &aot_mem) && ctx.pc == 0x08AB6BB4u) goto L_08AB6BB4;
    return;
L_08AB6BB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 129 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11648), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6C00;
      }
      goto L_08AB6BD0;
    }
L_08AB6BD0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11652), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
      if (branch_taken) {
          goto L_08AB6BEC;
      }
      goto L_08AB6BE4;
    }
L_08AB6BE4:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(127));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 7u));
    goto L_08AB6BEC;
L_08AB6BEC:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11644), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11640), 0u);
      if (branch_taken) {
          goto L_08AB6C28;
      }
      goto L_08AB6C00;
    }
L_08AB6C00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11652), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11644), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(128));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11640), ctx.gpr[3]);
    goto L_08AB6C28;
L_08AB6C28:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AB6C3C;
      }
      goto L_08AB6C30;
    }
L_08AB6C30:
    ctx.set_gpr(31, 0x08AB6C38u);
    // nop
    goto L_08AB64A0;
L_08AB6C38:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB6C3C;
L_08AB6C3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6C4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11632)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6C6C;
      }
      goto L_08AB6C64;
    }
L_08AB6C64:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB6C7C;
      }
      goto L_08AB6C6C;
    }
L_08AB6C6C:
    ctx.set_gpr(31, 0x08AB6C74u);
    // nop
    goto L_08AB64A0;
L_08AB6C74:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11632), 0u);
    goto L_08AB6C7C;
L_08AB6C7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6C88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1904), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(19, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11844), 0u);
    goto L_08AB6CB8;
L_08AB6CB8:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AB6CD8u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.pc = 0x08B0DDACu;
    return;
L_08AB6CD8:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB6CF0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = 0x08B0DDA4u;
    return;
L_08AB6CF0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB7070;
    }
    goto L_08AB6CF8;
L_08AB6CF8:
    ctx.set_gpr(31, 0x08AB6D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 520u, 0x08AB9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D00u) goto L_08AB6D00;
    return;
L_08AB6D00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6D14;
      }
      goto L_08AB6D08;
    }
L_08AB6D08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1904), ctx.gpr[3]);
    goto L_08AB6D14;
L_08AB6D14:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1904)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB706C;
      }
      goto L_08AB6D28;
    }
L_08AB6D28:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB6CB8;
      }
      goto L_08AB6D38;
    }
L_08AB6D38:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08AB6D3C;
L_08AB6D3C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    ctx.set_gpr(31, 0x08AB6D4Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.pc = 0x08B0E134u;
    return;
L_08AB6D4C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11844)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11844), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB6DB0;
      }
      goto L_08AB6D68;
    }
L_08AB6D68:
    ctx.set_gpr(2, 32871u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 5122u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB6DB0;
      }
      goto L_08AB6D78;
    }
L_08AB6D78:
    ctx.set_gpr(31, 0x08AB6D80u);
    // nop
    goto L_08AB66F4;
L_08AB6D80:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08AB6D90;
    }
    goto L_08AB6D88;
L_08AB6D88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB706C;
      }
      goto L_08AB6D90;
    }
L_08AB6D90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11664)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1152));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11664), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6D3C;
      }
      goto L_08AB6DB0;
    }
L_08AB6DB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB6DC0;
      }
      goto L_08AB6DB8;
    }
L_08AB6DB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08AB706C;
      }
      goto L_08AB6DC0;
    }
L_08AB6DC0:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB6DD8;
    }
    goto L_08AB6DC8;
L_08AB6DC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1904), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB6DDC;
      }
      goto L_08AB6DD8;
    }
L_08AB6DD8:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1904), 0u);
    goto L_08AB6DDC;
L_08AB6DDC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB6DE8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    ctx.pc = 0x08B0E0E4u;
    return;
L_08AB6DE8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(31, 0x08AB6DF4u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11672), ctx.gpr[2]);
    goto L_08AB65E4;
L_08AB6DF4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08AB6E04;
    }
    goto L_08AB6DFC;
L_08AB6DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB706C;
      }
      goto L_08AB6E04;
    }
L_08AB6E04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11872)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB6F6C;
    }
    goto L_08AB6E10;
L_08AB6E10:
    ctx.set_gpr(31, 0x08AB6E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6E18u) goto L_08AB6E18;
    return;
L_08AB6E18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB6E24u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 920u, 0x08AB35D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E24u) goto L_08AB6E24;
    return;
L_08AB6E24:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1908)));
    ctx.set_gpr(3, 20971u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] << 15u);
    ctx.set_gpr(3, ctx.gpr[3] | 34079u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 5u));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(31, 0x08AB6E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6E60u) goto L_08AB6E60;
    return;
L_08AB6E60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB6E6Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 910u, 0x08AB3544u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E6Cu) goto L_08AB6E6C;
    return;
L_08AB6E6C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 20971u << 16u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] | 34079u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    ctx.set_gpr(31, 0x08AB6E94u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6E94u) goto L_08AB6E94;
    return;
L_08AB6E94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB6EA0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 521u, 0x08AB1FA4u>(ctx, &aot_mem) && ctx.pc == 0x08AB6EA0u) goto L_08AB6EA0;
    return;
L_08AB6EA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
        goto L_08AB6EB4;
    }
    goto L_08AB6EAC;
L_08AB6EAC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    goto L_08AB6EB4;
L_08AB6EB4:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(3, 20971u << 16u);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[3] | 34079u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 5u));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB6F08;
      }
      goto L_08AB6F04;
    }
L_08AB6F04:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AB6F08;
L_08AB6F08:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6F18;
      }
      goto L_08AB6F14;
    }
L_08AB6F14:
    ctx.set_gpr(18, ctx.gpr[16] + 0u);
    goto L_08AB6F18;
L_08AB6F18:
    ctx.set_gpr(31, 0x08AB6F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6F20u) goto L_08AB6F20;
    return;
L_08AB6F20:
    ctx.set_gpr(31, 0x08AB6F28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 533u, 0x08AB2078u>(ctx, &aot_mem) && ctx.pc == 0x08AB6F28u) goto L_08AB6F28;
    return;
L_08AB6F28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u | 44100u);
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08AB6F54;
    }
    goto L_08AB6F38;
L_08AB6F38:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB6F4Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 73u, 0x088A44D4u>(ctx, &aot_mem) && ctx.pc == 0x08AB6F4Cu) goto L_08AB6F4C;
    return;
L_08AB6F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB6FC8;
      }
      goto L_08AB6F54;
    }
L_08AB6F54:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AB6F64u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 73u, 0x088A44D4u>(ctx, &aot_mem) && ctx.pc == 0x08AB6F64u) goto L_08AB6F64;
    return;
L_08AB6F64:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB6FC8;
      }
      goto L_08AB6F6C;
    }
L_08AB6F6C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB6FC8;
      }
      goto L_08AB6F74;
    }
L_08AB6F74:
    ctx.set_gpr(31, 0x08AB6F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6F7Cu) goto L_08AB6F7C;
    return;
L_08AB6F7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB6F88u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 920u, 0x08AB35D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB6F88u) goto L_08AB6F88;
    return;
L_08AB6F88:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1908)));
    ctx.set_gpr(3, 20971u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] << 15u);
    ctx.set_gpr(3, ctx.gpr[3] | 34079u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 5u));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(31, 0x08AB6FC4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08B0E15Cu;
    return;
L_08AB6FC4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB6FC8;
L_08AB6FC8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11664)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11664), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11660)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11660), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(31, 0x08AB7008u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = 0x08B0DDA4u;
    return;
L_08AB7008:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7058;
      }
      goto L_08AB7010;
    }
L_08AB7010:
    ctx.set_gpr(31, 0x08AB7018u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB6620;
L_08AB7018:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB7028;
    }
    goto L_08AB7020;
L_08AB7020:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB706C;
      }
      goto L_08AB7028;
    }
L_08AB7028:
    ctx.set_gpr(31, 0x08AB7030u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    ctx.pc = 0x08B0E0DCu;
    return;
L_08AB7030:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2230u << 16u);
        goto L_08AB7040;
    }
    goto L_08AB7038;
L_08AB7038:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB706C;
      }
      goto L_08AB7040;
    }
L_08AB7040:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(2, 65534u << 16u);
    ctx.set_gpr(31, 0x08AB7050u);
    ctx.set_gpr(5, ctx.gpr[2] | 65535u);
    ctx.pc = 0x08B0DE3Cu;
    return;
L_08AB7050:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11844), 0u);
    goto L_08AB7058;
L_08AB7058:
    ctx.set_gpr(31, 0x08AB7060u);
    // nop
    goto L_08AB66F4;
L_08AB7060:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB6CB8;
      }
      goto L_08AB7068;
    }
L_08AB7068:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08AB706C;
L_08AB706C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB7070;
L_08AB7070:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AB7080u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 73u, 0x088A44D4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7080u) goto L_08AB7080;
    return;
L_08AB7080:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08AB708Cu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = 0x08B0E15Cu;
    return;
L_08AB708C:
    ctx.set_gpr(31, 0x08AB7094u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB6620;
L_08AB7094:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB70A4;
    }
    goto L_08AB709C;
L_08AB709C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB70A4;
L_08AB70A4:
    ctx.set_gpr(3, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1904), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AB70CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AB70DCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB70DCu) goto L_08AB70DC;
    return;
L_08AB70DC:
    ctx.set_gpr(31, 0x08AB70E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 533u, 0x08AB2078u>(ctx, &aot_mem) && ctx.pc == 0x08AB70E4u) goto L_08AB70E4;
    return;
L_08AB70E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_08AB7168;
    }
    goto L_08AB70F0;
L_08AB70F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11848)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB7164;
      }
      goto L_08AB7100;
    }
L_08AB7100:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1904)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB7164;
      }
      goto L_08AB7114;
    }
L_08AB7114:
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11852)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11664)));
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(31, 0x08AB7144u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7144u) goto L_08AB7144;
    return;
L_08AB7144:
    ctx.set_gpr(31, 0x08AB714Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 533u, 0x08AB2078u>(ctx, &aot_mem) && ctx.pc == 0x08AB714Cu) goto L_08AB714C;
    return;
L_08AB714C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
      if (branch_taken) {
          goto L_08AB7168;
      }
      goto L_08AB7164;
    }
L_08AB7164:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AB7168;
L_08AB7168:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7178:
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1900)));
    ctx.pc = 0x08B0E0FCu; return;
L_08AB7188:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1904)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB71BC;
    }
    goto L_08AB71A0;
L_08AB71A0:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AB71B8u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = 0x08B0DDA4u;
    return;
L_08AB71B8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08AB71BC;
L_08AB71BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB71C8:
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
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11860)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB73C8;
      }
      goto L_08AB7210;
    }
L_08AB7210:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08AB7220;
    }
    goto L_08AB7218;
L_08AB7218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7AB4;
      }
      goto L_08AB7220;
    }
L_08AB7220:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11824), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11820), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11816), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11812), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11808), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11804), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11800), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11796), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11792), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11788), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11784), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11780), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11776), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11768), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AB7294u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 853u, 0x08A8AE30u>(ctx, &aot_mem) && ctx.pc == 0x08AB7294u) goto L_08AB7294;
    return;
L_08AB7294:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AB72B0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11764), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 853u, 0x08A8AE30u>(ctx, &aot_mem) && ctx.pc == 0x08AB72B0u) goto L_08AB72B0;
    return;
L_08AB72B0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11760), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB72C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB7E7C;
L_08AB72C0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11772), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11756), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11684), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, 0x08AB72E4u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11680), ctx.gpr[18]);
    ctx.pc = 0x08B0E0B4u;
    return;
L_08AB72E4:
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11832), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, 0x08AB72F8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11828), ctx.gpr[3]);
    goto L_08AB7CA8;
L_08AB72F8:
    ctx.set_gpr(31, 0x08AB7300u);
    // nop
    goto L_08AB6838;
L_08AB7300:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB7318;
    }
    goto L_08AB7308;
L_08AB7308:
    ctx.set_gpr(31, 0x08AB7310u);
    // nop
    goto L_08AB7CA8;
L_08AB7310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7AB4;
      }
      goto L_08AB7318;
    }
L_08AB7318:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11632), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12568)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12564)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11808), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11804), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12560)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12556)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11800), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11796), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11764)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 17008u << 16u);
        goto L_08AB738C;
    }
    goto L_08AB737C;
L_08AB737C:
    ctx.set_gpr(3, 17008u << 16u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11764), ctx.gpr[3]);
    ctx.set_gpr(2, 17008u << 16u);
    goto L_08AB738C;
L_08AB738C:
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11764)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11860)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11860), ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11756), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB73C8;
L_08AB73C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11824)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A90;
      }
      goto L_08AB73DC;
    }
L_08AB73DC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11768)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB74A4;
      }
      goto L_08AB73F0;
    }
L_08AB73F0:
    ctx.set_gpr(31, 0x08AB73F8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 853u, 0x08A8AE30u>(ctx, &aot_mem) && ctx.pc == 0x08AB73F8u) goto L_08AB73F8;
    return;
L_08AB73F8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[21] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11824)));
    ctx.set_gpr(31, 0x08AB7410u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 853u, 0x08A8AE30u>(ctx, &aot_mem) && ctx.pc == 0x08AB7410u) goto L_08AB7410;
    return;
L_08AB7410:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[21]) || std::isnan(ctx.fpr[0])) || ctx.fpr[21] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB7444;
      }
      goto L_08AB7424;
    }
L_08AB7424:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11764)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[21])) && ctx.fpr[0] == ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB7444;
      }
      goto L_08AB743C;
    }
L_08AB743C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11764), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    goto L_08AB7444;
L_08AB7444:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11760)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB7474;
      }
      goto L_08AB7454;
    }
L_08AB7454:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB7474;
      }
      goto L_08AB745C;
    }
L_08AB745C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11760), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB746Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AB7E7C;
L_08AB746C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11772), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB7474;
L_08AB7474:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11768), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11764)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB74A4;
      }
      goto L_08AB7498;
    }
L_08AB7498:
    ctx.set_gpr(3, 17008u << 16u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11764), ctx.gpr[3]);
    goto L_08AB74A4;
L_08AB74A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11808)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11804)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11800)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11796)));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A90;
      }
      goto L_08AB74E0;
    }
L_08AB74E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
        goto L_08AB74FC;
    }
    goto L_08AB74EC;
L_08AB74EC:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A90;
      }
      goto L_08AB74F8;
    }
L_08AB74F8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    goto L_08AB74FC;
L_08AB74FC:
    ctx.set_gpr(31, 0x08AB7504u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 305u, 0x0881D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7504u) goto L_08AB7504;
    return;
L_08AB7504:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11776), ctx.gpr[2]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11808)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11804)));
    ctx.set_gpr(4, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(31, 0x08AB7540u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 679u, 0x08ABA42Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7540u) goto L_08AB7540;
    return;
L_08AB7540:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08AB7558;
    }
    goto L_08AB7548;
L_08AB7548:
    ctx.set_gpr(31, 0x08AB7550u);
    // nop
    goto L_08AB7CA8;
L_08AB7550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7AB4;
      }
      goto L_08AB7558;
    }
L_08AB7558:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11776)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11752));
    ctx.set_gpr(31, 0x08AB7574u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 621u, 0x08ABA104u>(ctx, &aot_mem) && ctx.pc == 0x08AB7574u) goto L_08AB7574;
    return;
L_08AB7574:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08AB758C;
    }
    goto L_08AB757C;
L_08AB757C:
    ctx.set_gpr(31, 0x08AB7584u);
    // nop
    goto L_08AB7CA8;
L_08AB7584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7AB4;
      }
      goto L_08AB758C;
    }
L_08AB758C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11776)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1912));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11824));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AB75B4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08AB75B4u) goto L_08AB75B4;
    return;
L_08AB75B4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AB75F0;
    }
    goto L_08AB75BC;
L_08AB75BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11808)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11804)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-12560), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-12556), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11800), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11796), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB7A90;
      }
      goto L_08AB75F0;
    }
L_08AB75F0:
    ctx.set_gpr(31, 0x08AB75F8u);
    // nop
    goto L_08AB7B74;
L_08AB75F8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB77A4;
      }
      goto L_08AB7608;
    }
L_08AB7608:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11808)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11804)));
    ctx.set_gpr(31, 0x08AB7628u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 679u, 0x08ABA42Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7628u) goto L_08AB7628;
    return;
L_08AB7628:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08AB7640;
    }
    goto L_08AB7630;
L_08AB7630:
    ctx.set_gpr(31, 0x08AB7638u);
    // nop
    goto L_08AB7CA8;
L_08AB7638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7AB4;
      }
      goto L_08AB7640;
    }
L_08AB7640:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11800)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11796)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11808)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11804)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(18, ctx.gpr[6] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB7688;
      }
      goto L_08AB7670;
    }
L_08AB7670:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(67));
        goto L_08AB7688;
    }
    goto L_08AB7678;
L_08AB7678:
    ctx.set_gpr(2, ctx.gpr[18] < static_cast<std::uint32_t>(68) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7688;
      }
      goto L_08AB7684;
    }
L_08AB7684:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(67));
    goto L_08AB7688;
L_08AB7688:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11752));
    ctx.set_gpr(31, 0x08AB76A0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 621u, 0x08ABA104u>(ctx, &aot_mem) && ctx.pc == 0x08AB76A0u) goto L_08AB76A0;
    return;
L_08AB76A0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(21, 2246u << 16u);
        goto L_08AB76B8;
    }
    goto L_08AB76A8;
L_08AB76A8:
    ctx.set_gpr(31, 0x08AB76B0u);
    // nop
    goto L_08AB7CA8;
L_08AB76B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7AB4;
      }
      goto L_08AB76B8;
    }
L_08AB76B8:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(-11752));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AB76F8;
      }
      goto L_08AB76C8;
    }
L_08AB76C8:
    ctx.set_gpr(31, 0x08AB76D0u);
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[19]);
    goto L_08AB7B74;
L_08AB76D0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[20] != ctx.gpr[2]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08AB76E8;
    }
    goto L_08AB76E0;
L_08AB76E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AB76F8;
      }
      goto L_08AB76E8;
    }
L_08AB76E8:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB76C8;
      }
      goto L_08AB76F8;
    }
L_08AB76F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11808)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11804)));
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11808), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11804), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11800)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11796)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB77A4;
      }
      goto L_08AB7758;
    }
L_08AB7758:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7770;
      }
      goto L_08AB7764;
    }
L_08AB7764:
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB77A4;
      }
      goto L_08AB7770;
    }
L_08AB7770:
    ctx.set_gpr(31, 0x08AB7778u);
    // nop
    goto L_08AB7AF4;
L_08AB7778:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB779C;
    }
    goto L_08AB7780;
L_08AB7780:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11680)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7798;
      }
      goto L_08AB7790;
    }
L_08AB7790:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB7AC8;
      }
      goto L_08AB7798;
    }
L_08AB7798:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB779C;
L_08AB779C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB7608;
      }
      goto L_08AB77A4;
    }
L_08AB77A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11808)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11804)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11800)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11796)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A90;
      }
      goto L_08AB77E0;
    }
L_08AB77E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AB77FC;
    }
    goto L_08AB77EC;
L_08AB77EC:
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A90;
      }
      goto L_08AB77F8;
    }
L_08AB77F8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AB77FC;
L_08AB77FC:
    ctx.set_gpr(31, 0x08AB7804u);
    // nop
    goto L_08AB7DA4;
L_08AB7804:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11792), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB7814u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AB7E14;
L_08AB7814:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AB7824u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11788), ctx.gpr[2]);
    goto L_08AB7E6C;
L_08AB7824:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11784), ctx.gpr[2]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11792)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.set_gpr(3, 2246u << 16u);
        goto L_08AB784C;
    }
    goto L_08AB783C;
L_08AB783C:
    ctx.set_gpr(31, 0x08AB7844u);
    // nop
    goto L_08AB7CA8;
L_08AB7844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7AB4;
      }
      goto L_08AB784C;
    }
L_08AB784C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11788)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
        goto L_08AB7868;
    }
    goto L_08AB7858;
L_08AB7858:
    ctx.set_gpr(31, 0x08AB7860u);
    // nop
    goto L_08AB7CA8;
L_08AB7860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7AB4;
      }
      goto L_08AB7868;
    }
L_08AB7868:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11780), ctx.gpr[3]);
    ctx.set_gpr(2, 17008u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11764)));
    ctx.fpr[3] = ctx.fpr[3] / ctx.fpr[1];
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = ctx.fpr[3] / ctx.fpr[2];
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11756)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11812)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 7u);
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB79D0;
      }
      goto L_08AB78EC;
    }
L_08AB78EC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11808)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11852)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11804)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12568)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12564)));
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11816)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11816)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11812)));
    ctx.set_gpr(5, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11820)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11816)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11820), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11816), ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11772)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB79C8;
      }
      goto L_08AB79A0;
    }
L_08AB79A0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11820), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11824)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11824), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11768), ctx.gpr[3]);
    goto L_08AB79C8;
L_08AB79C8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11756), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_08AB79D0;
L_08AB79D0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11780)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11808)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11804)));
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11808), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11804), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11812)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11812), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11800)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11796)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A90;
      }
      goto L_08AB7A3C;
    }
L_08AB7A3C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A54;
      }
      goto L_08AB7A48;
    }
L_08AB7A48:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A90;
      }
      goto L_08AB7A54;
    }
L_08AB7A54:
    ctx.set_gpr(31, 0x08AB7A5Cu);
    // nop
    goto L_08AB7AF4;
L_08AB7A5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A7C;
      }
      goto L_08AB7A64;
    }
L_08AB7A64:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11680)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A7C;
      }
      goto L_08AB7A74;
    }
L_08AB7A74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB7AC8;
      }
      goto L_08AB7A7C;
    }
L_08AB7A7C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11824)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB73DC;
      }
      goto L_08AB7A90;
    }
L_08AB7A90:
    ctx.set_gpr(31, 0x08AB7A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7A98u) goto L_08AB7A98;
    return;
L_08AB7A98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB7AACu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 467u, 0x08AB1B58u>(ctx, &aot_mem) && ctx.pc == 0x08AB7AACu) goto L_08AB7AAC;
    return;
L_08AB7AAC:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11836), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AB7AB4;
L_08AB7AB4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, 0x08AB7AC0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11860), 0u);
    goto L_08AB6C4C;
L_08AB7AC0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11824)));
    goto L_08AB7AC8;
L_08AB7AC8:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7AF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AB7B04u);
    // nop
    ctx.pc = 0x08B0E0B4u;
    return;
L_08AB7B04:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11832)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11828)));
    ctx.set_gpr(4, 15u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 16960u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB7B68;
    }
    goto L_08AB7B34;
L_08AB7B34:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7B4C;
      }
      goto L_08AB7B40;
    }
L_08AB7B40:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7B64;
      }
      goto L_08AB7B4C;
    }
L_08AB7B4C:
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11832), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11828), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB7B68;
      }
      goto L_08AB7B64;
    }
L_08AB7B64:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB7B68;
L_08AB7B68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7B74:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AB7B84;
    }
    goto L_08AB7B7C;
L_08AB7B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB7BDC;
      }
      goto L_08AB7B84;
    }
L_08AB7B84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
        goto L_08AB7B98;
    }
    goto L_08AB7B90;
L_08AB7B90:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB7BDC;
      }
      goto L_08AB7B98;
    }
L_08AB7B98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(250));
    ctx.set_gpr(3, ctx.gpr[3] & 250u);
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
        goto L_08AB7BB0;
    }
    goto L_08AB7BA8;
L_08AB7BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB7BDC;
      }
      goto L_08AB7BB0;
    }
L_08AB7BB0:
    ctx.set_gpr(3, ctx.gpr[4] & 240u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(240));
        goto L_08AB7BC4;
    }
    goto L_08AB7BBC;
L_08AB7BBC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB7BDC;
      }
      goto L_08AB7BC4;
    }
L_08AB7BC4:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[4] & 12u);
        goto L_08AB7BD4;
    }
    goto L_08AB7BCC;
L_08AB7BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB7BDC;
      }
      goto L_08AB7BD4;
    }
L_08AB7BD4:
    ctx.set_gpr(2, ctx.gpr[2] ^ 12u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08AB7BDC;
L_08AB7BDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7BE4:
    ctx.set_gpr(3, 2246u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11848), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7BF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11852)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AB7C50;
    }
    goto L_08AB7C08;
L_08AB7C08:
    ctx.set_gpr(31, 0x08AB7C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB7C10u) goto L_08AB7C10;
    return;
L_08AB7C10:
    ctx.set_gpr(31, 0x08AB7C18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB7C18u) goto L_08AB7C18;
    return;
L_08AB7C18:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AB7C2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(25600));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB7C2Cu) goto L_08AB7C2C;
    return;
L_08AB7C2C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11852), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AB7C44u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(25600));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C44u) goto L_08AB7C44;
    return;
L_08AB7C44:
    ctx.set_gpr(31, 0x08AB7C4Cu);
    // nop
    goto L_08AB7CA8;
L_08AB7C4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB7C50;
L_08AB7C50:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7C58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11852)));
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AB7C9C;
    }
    goto L_08AB7C74;
L_08AB7C74:
    ctx.set_gpr(31, 0x08AB7C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AB7C7Cu) goto L_08AB7C7C;
    return;
L_08AB7C7C:
    ctx.set_gpr(31, 0x08AB7C84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AB7C84u) goto L_08AB7C84;
    return;
L_08AB7C84:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB7C90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C90u) goto L_08AB7C90;
    return;
L_08AB7C90:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11852), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB7C9C;
L_08AB7C9C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7CA8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11852)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7D9C;
      }
      goto L_08AB7CB8;
    }
L_08AB7CB8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(13, 2246u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(12, 2246u << 16u);
    ctx.set_gpr(11, 2246u << 16u);
    ctx.set_gpr(10, 2246u << 16u);
    ctx.set_gpr(9, 2246u << 16u);
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(7, 2246u << 16u);
    ctx.set_gpr(6, 2246u << 16u);
    goto L_08AB7CE4;
L_08AB7CE4:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-11852)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[5]) < 1600 ? 1u : 0u);
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-11852)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-11852)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-11852)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-11852)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11852)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11852)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11852)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08AB7CE4;
      }
      goto L_08AB7D94;
    }
L_08AB7D94:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11836), 0u);
    goto L_08AB7D9C;
L_08AB7D9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7DA4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
      if (branch_taken) {
          goto L_08AB7DB4;
      }
      goto L_08AB7DAC;
    }
L_08AB7DAC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB7E0C;
      }
      goto L_08AB7DB4;
    }
L_08AB7DB4:
    ctx.set_gpr(7, 2231u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1920));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    goto L_08AB7DC4;
L_08AB7DC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB7DC4;
      }
      goto L_08AB7DE4;
    }
L_08AB7DE4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    goto L_08AB7E0C;
L_08AB7E0C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7E14:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08AB7E24;
      }
      goto L_08AB7E1C;
    }
L_08AB7E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB7E64;
      }
      goto L_08AB7E24;
    }
L_08AB7E24:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1984)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] & 12u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1988)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1992)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1996)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08AB7E64;
L_08AB7E64:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7E6C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7E7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AB7EC8;
      }
      goto L_08AB7E88;
    }
L_08AB7E88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16576u << 16u);
        goto L_08AB7EC0;
    }
    goto L_08AB7E94;
L_08AB7E94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16512u << 16u);
        goto L_08AB7EB8;
    }
    goto L_08AB7EA0;
L_08AB7EA0:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, 16384u << 16u);
        goto L_08AB7EB0;
    }
    goto L_08AB7EA8;
L_08AB7EA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7ED0;
      }
      goto L_08AB7EB0;
    }
L_08AB7EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB7ED0;
      }
      goto L_08AB7EB8;
    }
L_08AB7EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB7ED0;
      }
      goto L_08AB7EC0;
    }
L_08AB7EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB7ED0;
      }
      goto L_08AB7EC8;
    }
L_08AB7EC8:
    ctx.set_gpr(2, 16640u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08AB7ED0;
L_08AB7ED0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7ED8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11840)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB7EFC;
      }
      goto L_08AB7EE8;
    }
L_08AB7EE8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11852)));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08AB7EFC;
L_08AB7EFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7F04:
    ctx.set_gpr(3, 2246u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11840), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7F10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2204)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AB7F54;
      }
      goto L_08AB7F4C;
    }
L_08AB7F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB7F5C;
      }
      goto L_08AB7F54;
    }
L_08AB7F54:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    goto L_08AB7F5C;
L_08AB7F5C:
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
        goto L_08AB7F64;
    }
    goto L_08AB7F64;
L_08AB7F64:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(10)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(9)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] >> (ctx.gpr[3] & 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7FB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(5, ctx.gpr[2] & 127u);
    ctx.set_gpr(2, ctx.gpr[4] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
    ctx.set_gpr(4, (ctx.gpr[4] >> 1u) & 0x0000003Fu);
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(4, (ctx.gpr[3] >> 2u) & 0x0000001Fu);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.pc = 0x08AB8000u; return;
}

void recomp_unit_0172(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0172_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_172(Runtime &runtime) {
    runtime.register_generated_unit(172u, 0x08AB4000u, 16384u, &recomp_unit_0172, &recomp_unit_0172_entry);
    runtime.register_function(0x08AB4000u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4018u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4024u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4030u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4040u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4048u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4064u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB406Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4164u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4178u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4194u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4200u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4208u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4210u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4218u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4220u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB422Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4234u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4244u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB424Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4258u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4288u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4294u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB430Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4314u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4324u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB432Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4334u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB433Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4348u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4358u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4368u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB437Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4390u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB439Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4400u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4408u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4420u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4428u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4448u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4458u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4460u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB446Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4474u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB447Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB448Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4498u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4500u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4508u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4530u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4554u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4564u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB456Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4588u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4590u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4598u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4604u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4618u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4628u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4638u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4650u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4660u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4668u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4670u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4678u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4680u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4688u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4690u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4704u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4714u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4720u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB473Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4740u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4754u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4758u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4764u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4778u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4780u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4790u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB480Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4824u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4830u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4838u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4840u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB484Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4854u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB485Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4864u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB486Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4874u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4898u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB489Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB48A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB48B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB48C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB48CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB48ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4908u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4910u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4918u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4920u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4924u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4928u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4930u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB493Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4944u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB494Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4968u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4970u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4978u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4980u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4988u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4AC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4ACCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4ADCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4BA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4BACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4BC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4BE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4BF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4C98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4CACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4CC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4CD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4CECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4D9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4DACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4DC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4DDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4DE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4DF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4DFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4EB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4EE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4EECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5004u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5014u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5028u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5050u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5060u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5068u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5088u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5090u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5130u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB513Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5158u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5168u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5208u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5218u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB522Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5238u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5284u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5298u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5310u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB532Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5334u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB542Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5440u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5448u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB548Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5500u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5508u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5514u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB551Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5528u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5534u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB553Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5548u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5554u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5584u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5590u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5604u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5618u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB562Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5638u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5700u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5708u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5710u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5718u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5728u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5804u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5808u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5814u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5828u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5830u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5840u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5864u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB587Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5888u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5890u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5898u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5908u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB593Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5944u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB594Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5954u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5960u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB596Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB597Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5988u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB599Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5ACCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5ED0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6000u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6014u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB601Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB603Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6044u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6054u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB606Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB608Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6094u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6100u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6110u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6114u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6128u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6130u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB614Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6150u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6164u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB616Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6188u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB618Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6204u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6220u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6224u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB622Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6234u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB623Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB624Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB625Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6268u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB628Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6294u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6310u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6318u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6324u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6330u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6338u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6344u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6360u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB636Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6384u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6390u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB640Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6410u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6420u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6448u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6450u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB645Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6468u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6470u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6478u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB647Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB648Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6490u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB64F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6504u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6514u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6518u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB652Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6534u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6550u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6554u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6568u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6574u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6590u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6594u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6600u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6610u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6620u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB663Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB664Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6654u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB665Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB666Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6670u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB667Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6688u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6694u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6704u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB670Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6714u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6720u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6728u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6734u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6740u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6748u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6764u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB676Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6774u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6784u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6798u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6800u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6808u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6810u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6818u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6820u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB682Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6830u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6838u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6854u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6860u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6878u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6880u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6898u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6900u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6918u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6924u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6940u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB694Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6954u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB695Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6964u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6970u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6978u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6990u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6998u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB699Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB69E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB69ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB69F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB69FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6A98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6AA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6AC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6ACCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6AE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6AF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6AF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6EA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6EACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6EB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7008u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7010u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7018u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7020u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7028u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7030u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7038u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7040u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7050u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7058u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7060u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7068u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB706Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7070u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7080u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB708Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7094u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB709Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7100u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7114u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7144u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB714Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7164u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7168u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7178u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7188u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7210u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7218u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7220u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7294u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7300u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7308u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7310u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7318u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB737Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB738Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7410u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7424u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB743Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7444u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7454u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB745Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB746Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7474u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7498u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7504u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7540u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7548u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7550u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7558u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7574u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB757Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7584u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB758Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7608u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7628u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7630u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7638u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7640u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7670u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7678u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7684u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7688u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7758u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7764u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7770u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7778u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7780u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7790u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7798u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB779Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7804u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7814u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7824u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB783Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7844u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB784Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7858u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7860u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7868u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7ED0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7ED8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FB8u, &recomp_unit_0172, "recomp_unit_0172");
}
} // namespace psprecomp
