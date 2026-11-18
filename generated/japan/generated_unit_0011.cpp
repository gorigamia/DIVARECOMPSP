#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0011[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0,
    0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 70, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 77, 0, 78, 0, 0, 79, 0, 0, 0, 80, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0,
    87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 102, 103, 0, 104, 0, 105, 0, 0, 106, 107, 0, 0,
    0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0,
    0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152,
    153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0,
    0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178,
    0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 187, 0, 0, 0,
    188, 0, 0, 189, 0, 0, 0, 190, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 197, 198, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 205, 206, 0, 207, 0, 0, 208, 0, 0, 209, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 213,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 226, 0, 0, 227, 0,
    0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 234,
    0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 242, 243, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 253, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 266, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 273, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0,
    336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0,
    343, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0,
    0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    356, 0, 357, 0, 0, 0, 0, 358, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    0, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    370, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 0, 393, 0, 0, 394, 0, 395, 0, 396, 0, 0, 397, 0, 398,
    0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 408,
    0, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 418,
    0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 424, 425, 0, 426, 0, 0, 0, 0, 427, 428, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 436,
    0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 440, 0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 0, 445, 0, 446, 0,
    0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0,
    0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0,
    0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0,
    0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477,
    0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 488, 0, 489,
    0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 495, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 502, 503,
    0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0,
    509, 0, 0, 510, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 0, 518, 0, 519, 0,
    0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 524, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0, 0,
    0, 529, 0, 530, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0,
    0, 540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0,
    0, 547, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554,
    0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0,
    0, 561, 0, 562, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568,
    0, 569, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0,
    576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0,
    583, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 590, 0,
    0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 593, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0,
    0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0,
    0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0,
    0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0,
    0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0,
    0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    630, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0,
    0, 639, 0, 640, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 647,
    0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 651, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0,
    654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0,
    0, 0, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 667, 0, 0, 0, 668, 0, 669, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673, 674, 0, 0,
    675, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0,
    0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0,
    0, 689, 0, 0, 0, 690, 691, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 696, 0, 0, 697, 0, 0,
    0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 705, 0, 706, 0, 0, 0,
    0, 707, 0, 0, 708, 0, 0, 709, 0, 0, 710, 711, 0, 0, 712, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0,
    0, 0, 0, 717, 0, 718, 719, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 723,
    0, 0, 0, 0, 724, 0, 725, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 729, 730, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 732, 0,
    733, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 738, 0, 0, 739, 0, 0, 740, 0, 0, 0, 0, 741, 0, 742, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0,
    0, 747, 0, 748, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0,
    0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 758, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 763, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0,
    0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771,
    0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0,
    0, 778, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 781, 782, 0, 0, 783, 0, 0, 0, 784, 0, 0, 785, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 788, 0, 0,
    789, 0, 0, 0, 790, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 796,
    0, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 801, 0,
    0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0,
    0, 0, 807, 0, 808, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    816, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0,
    823, 0, 0, 0, 0, 824, 0, 0, 825, 0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 0, 830, 0, 0,
    831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 834, 0,
    0, 835, 0, 0, 836, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 838, 0, 0, 839, 0, 0, 840, 0, 0, 841, 0, 842, 0, 0, 0, 0, 843,
    0, 0, 844, 0, 0, 0, 0, 845, 0, 0, 0, 0, 846, 0, 0, 847, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 0, 853, 0, 0, 0, 854, 0, 855, 0, 856,
};
void recomp_unit_0011_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08830000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0011[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08830000;
    case 2u: goto L_08830004;
    case 3u: goto L_08830014;
    case 4u: goto L_08830020;
    case 5u: goto L_0883002C;
    case 6u: goto L_0883003C;
    case 7u: goto L_0883004C;
    case 8u: goto L_08830058;
    case 9u: goto L_0883006C;
    case 10u: goto L_08830084;
    case 11u: goto L_08830088;
    case 12u: goto L_088300AC;
    case 13u: goto L_088300C4;
    case 14u: goto L_088300D0;
    case 15u: goto L_088300F0;
    case 16u: goto L_08830144;
    case 17u: goto L_08830150;
    case 18u: goto L_0883015C;
    case 19u: goto L_08830174;
    case 20u: goto L_0883018C;
    case 21u: goto L_08830190;
    case 22u: goto L_088301B0;
    case 23u: goto L_088301C0;
    case 24u: goto L_088301E0;
    case 25u: goto L_088301F4;
    case 26u: goto L_088301FC;
    case 27u: goto L_08830210;
    case 28u: goto L_0883021C;
    case 29u: goto L_0883022C;
    case 30u: goto L_08830240;
    case 31u: goto L_08830250;
    case 32u: goto L_08830260;
    case 33u: goto L_08830270;
    case 34u: goto L_0883027C;
    case 35u: goto L_08830290;
    case 36u: goto L_088302A4;
    case 37u: goto L_088302C0;
    case 38u: goto L_088302DC;
    case 39u: goto L_088302E0;
    case 40u: goto L_08830310;
    case 41u: goto L_08830334;
    case 42u: goto L_08830340;
    case 43u: goto L_08830348;
    case 44u: goto L_088303B0;
    case 45u: goto L_088303BC;
    case 46u: goto L_088303C8;
    case 47u: goto L_088303D8;
    case 48u: goto L_088303E4;
    case 49u: goto L_088303F8;
    case 50u: goto L_08830410;
    case 51u: goto L_08830438;
    case 52u: goto L_08830448;
    case 53u: goto L_08830454;
    case 54u: goto L_08830460;
    case 55u: goto L_0883046C;
    case 56u: goto L_08830474;
    case 57u: goto L_08830488;
    case 58u: goto L_08830494;
    case 59u: goto L_088304A8;
    case 60u: goto L_088304BC;
    case 61u: goto L_088304C8;
    case 62u: goto L_088304D8;
    case 63u: goto L_088304EC;
    case 64u: goto L_088304FC;
    case 65u: goto L_0883050C;
    case 66u: goto L_08830524;
    case 67u: goto L_0883055C;
    case 68u: goto L_08830564;
    case 69u: goto L_0883056C;
    case 70u: goto L_08830570;
    case 71u: goto L_08830578;
    case 72u: goto L_08830590;
    case 73u: goto L_0883059C;
    case 74u: goto L_088305AC;
    case 75u: goto L_088305B4;
    case 76u: goto L_088305C4;
    case 77u: goto L_088305C8;
    case 78u: goto L_088305D0;
    case 79u: goto L_088305DC;
    case 80u: goto L_088305EC;
    case 81u: goto L_088305F0;
    case 82u: goto L_08830614;
    case 83u: goto L_08830640;
    case 84u: goto L_08830650;
    case 85u: goto L_08830660;
    case 86u: goto L_08830670;
    case 87u: goto L_08830680;
    case 88u: goto L_08830690;
    case 89u: goto L_088306A0;
    case 90u: goto L_088306B0;
    case 91u: goto L_088306C0;
    case 92u: goto L_088306D0;
    case 93u: goto L_088306E0;
    case 94u: goto L_088306F0;
    case 95u: goto L_08830700;
    case 96u: goto L_08830710;
    case 97u: goto L_08830734;
    case 98u: goto L_08830768;
    case 99u: goto L_088307B0;
    case 100u: goto L_088307C0;
    case 101u: goto L_088307C8;
    case 102u: goto L_088307D0;
    case 103u: goto L_088307D4;
    case 104u: goto L_088307DC;
    case 105u: goto L_088307E4;
    case 106u: goto L_088307F0;
    case 107u: goto L_088307F4;
    case 108u: goto L_08830804;
    case 109u: goto L_08830810;
    case 110u: goto L_08830820;
    case 111u: goto L_08830830;
    case 112u: goto L_08830844;
    case 113u: goto L_08830850;
    case 114u: goto L_0883085C;
    case 115u: goto L_08830870;
    case 116u: goto L_08830884;
    case 117u: goto L_08830894;
    case 118u: goto L_088308B8;
    case 119u: goto L_088308C4;
    case 120u: goto L_088308D0;
    case 121u: goto L_088308F8;
    case 122u: goto L_08830900;
    case 123u: goto L_08830928;
    case 124u: goto L_0883094C;
    case 125u: goto L_08830964;
    case 126u: goto L_08830974;
    case 127u: goto L_08830998;
    case 128u: goto L_088309B0;
    case 129u: goto L_088309C0;
    case 130u: goto L_088309CC;
    case 131u: goto L_088309D0;
    case 132u: goto L_088309DC;
    case 133u: goto L_088309E8;
    case 134u: goto L_088309F8;
    case 135u: goto L_08830A0C;
    case 136u: goto L_08830A1C;
    case 137u: goto L_08830A40;
    case 138u: goto L_08830A4C;
    case 139u: goto L_08830A58;
    case 140u: goto L_08830A60;
    case 141u: goto L_08830A88;
    case 142u: goto L_08830A90;
    case 143u: goto L_08830AB8;
    case 144u: goto L_08830AD0;
    case 145u: goto L_08830AD8;
    case 146u: goto L_08830AFC;
    case 147u: goto L_08830B14;
    case 148u: goto L_08830B24;
    case 149u: goto L_08830B48;
    case 150u: goto L_08830B60;
    case 151u: goto L_08830B70;
    case 152u: goto L_08830B7C;
    case 153u: goto L_08830B80;
    case 154u: goto L_08830B8C;
    case 155u: goto L_08830BC0;
    case 156u: goto L_08830BD8;
    case 157u: goto L_08830BEC;
    case 158u: goto L_08830BF8;
    case 159u: goto L_08830C0C;
    case 160u: goto L_08830C1C;
    case 161u: goto L_08830C34;
    case 162u: goto L_08830C48;
    case 163u: goto L_08830C5C;
    case 164u: goto L_08830C6C;
    case 165u: goto L_08830C84;
    case 166u: goto L_08830C94;
    case 167u: goto L_08830CA8;
    case 168u: goto L_08830CB8;
    case 169u: goto L_08830CD0;
    case 170u: goto L_08830CE4;
    case 171u: goto L_08830CF8;
    case 172u: goto L_08830D0C;
    case 173u: goto L_08830D20;
    case 174u: goto L_08830D30;
    case 175u: goto L_08830D44;
    case 176u: goto L_08830D54;
    case 177u: goto L_08830D68;
    case 178u: goto L_08830D7C;
    case 179u: goto L_08830D8C;
    case 180u: goto L_08830D9C;
    case 181u: goto L_08830DA8;
    case 182u: goto L_08830DB4;
    case 183u: goto L_08830DBC;
    case 184u: goto L_08830DC4;
    case 185u: goto L_08830DE0;
    case 186u: goto L_08830DEC;
    case 187u: goto L_08830DF0;
    case 188u: goto L_08830E00;
    case 189u: goto L_08830E0C;
    case 190u: goto L_08830E1C;
    case 191u: goto L_08830E20;
    case 192u: goto L_08830E2C;
    case 193u: goto L_08830E38;
    case 194u: goto L_08830E44;
    case 195u: goto L_08830E60;
    case 196u: goto L_08830E78;
    case 197u: goto L_08830E90;
    case 198u: goto L_08830E94;
    case 199u: goto L_08830E9C;
    case 200u: goto L_08830EA8;
    case 201u: goto L_08830EB4;
    case 202u: goto L_08830EC0;
    case 203u: goto L_08830ED8;
    case 204u: goto L_08830EF0;
    case 205u: goto L_08830F08;
    case 206u: goto L_08830F0C;
    case 207u: goto L_08830F14;
    case 208u: goto L_08830F20;
    case 209u: goto L_08830F2C;
    case 210u: goto L_08830F30;
    case 211u: goto L_08830F60;
    case 212u: goto L_08830F68;
    case 213u: goto L_08830F7C;
    case 214u: goto L_08830F8C;
    case 215u: goto L_08830FCC;
    case 216u: goto L_08830FE4;
    case 217u: goto L_08830FF0;
    case 218u: goto L_0883100C;
    case 219u: goto L_08831018;
    case 220u: goto L_0883102C;
    case 221u: goto L_08831038;
    case 222u: goto L_08831044;
    case 223u: goto L_08831050;
    case 224u: goto L_0883105C;
    case 225u: goto L_08831068;
    case 226u: goto L_0883106C;
    case 227u: goto L_08831078;
    case 228u: goto L_0883108C;
    case 229u: goto L_08831094;
    case 230u: goto L_088310B4;
    case 231u: goto L_088310D8;
    case 232u: goto L_088310E0;
    case 233u: goto L_088310F4;
    case 234u: goto L_088310FC;
    case 235u: goto L_08831108;
    case 236u: goto L_08831110;
    case 237u: goto L_0883111C;
    case 238u: goto L_08831134;
    case 239u: goto L_08831158;
    case 240u: goto L_08831160;
    case 241u: goto L_08831180;
    case 242u: goto L_0883119C;
    case 243u: goto L_088311A0;
    case 244u: goto L_088311BC;
    case 245u: goto L_088311C4;
    case 246u: goto L_088311D0;
    case 247u: goto L_088311D8;
    case 248u: goto L_088311F0;
    case 249u: goto L_08831224;
    case 250u: goto L_0883122C;
    case 251u: goto L_08831248;
    case 252u: goto L_08831260;
    case 253u: goto L_08831264;
    case 254u: goto L_08831280;
    case 255u: goto L_08831298;
    case 256u: goto L_088312A4;
    case 257u: goto L_088312B0;
    case 258u: goto L_088312C0;
    case 259u: goto L_088312D0;
    case 260u: goto L_088312E4;
    case 261u: goto L_08831310;
    case 262u: goto L_0883131C;
    case 263u: goto L_08831324;
    case 264u: goto L_08831338;
    case 265u: goto L_08831384;
    case 266u: goto L_08831390;
    case 267u: goto L_08831398;
    case 268u: goto L_088313A4;
    case 269u: goto L_088313B4;
    case 270u: goto L_088313C8;
    case 271u: goto L_088313E4;
    case 272u: goto L_088313F0;
    case 273u: goto L_088313F8;
    case 274u: goto L_0883140C;
    case 275u: goto L_08831438;
    case 276u: goto L_08831444;
    case 277u: goto L_0883144C;
    case 278u: goto L_0883145C;
    case 279u: goto L_0883146C;
    case 280u: goto L_08831480;
    case 281u: goto L_088314B4;
    case 282u: goto L_088314C0;
    case 283u: goto L_088314C8;
    case 284u: goto L_088314DC;
    case 285u: goto L_08831534;
    case 286u: goto L_08831540;
    case 287u: goto L_08831548;
    case 288u: goto L_08831554;
    case 289u: goto L_08831564;
    case 290u: goto L_08831578;
    case 291u: goto L_0883159C;
    case 292u: goto L_088315A8;
    case 293u: goto L_088315B0;
    case 294u: goto L_088315C4;
    case 295u: goto L_088315FC;
    case 296u: goto L_08831608;
    case 297u: goto L_08831610;
    case 298u: goto L_08831634;
    case 299u: goto L_08831658;
    case 300u: goto L_0883166C;
    case 301u: goto L_08831698;
    case 302u: goto L_088316AC;
    case 303u: goto L_088316B8;
    case 304u: goto L_088316D4;
    case 305u: goto L_088316FC;
    case 306u: goto L_08831710;
    case 307u: goto L_08831724;
    case 308u: goto L_08831730;
    case 309u: goto L_08831744;
    case 310u: goto L_0883175C;
    case 311u: goto L_08831784;
    case 312u: goto L_0883178C;
    case 313u: goto L_08831794;
    case 314u: goto L_088317A8;
    case 315u: goto L_088317C4;
    case 316u: goto L_088317E4;
    case 317u: goto L_088317F8;
    case 318u: goto L_0883180C;
    case 319u: goto L_08831824;
    case 320u: goto L_08831848;
    case 321u: goto L_08831864;
    case 322u: goto L_08831874;
    case 323u: goto L_088318BC;
    case 324u: goto L_088318D0;
    case 325u: goto L_088318DC;
    case 326u: goto L_088318F4;
    case 327u: goto L_08831904;
    case 328u: goto L_0883191C;
    case 329u: goto L_0883192C;
    case 330u: goto L_08831934;
    case 331u: goto L_08831940;
    case 332u: goto L_0883194C;
    case 333u: goto L_08831954;
    case 334u: goto L_08831968;
    case 335u: goto L_08831974;
    case 336u: goto L_08831980;
    case 337u: goto L_08831994;
    case 338u: goto L_088319A8;
    case 339u: goto L_088319BC;
    case 340u: goto L_088319D4;
    case 341u: goto L_088319E4;
    case 342u: goto L_088319EC;
    case 343u: goto L_08831A00;
    case 344u: goto L_08831A04;
    case 345u: goto L_08831A14;
    case 346u: goto L_08831A4C;
    case 347u: goto L_08831A68;
    case 348u: goto L_08831A74;
    case 349u: goto L_08831A84;
    case 350u: goto L_08831A90;
    case 351u: goto L_08831A9C;
    case 352u: goto L_08831AB0;
    case 353u: goto L_08831AC4;
    case 354u: goto L_08831AD8;
    case 355u: goto L_08831AF0;
    case 356u: goto L_08831B00;
    case 357u: goto L_08831B08;
    case 358u: goto L_08831B1C;
    case 359u: goto L_08831B20;
    case 360u: goto L_08831B30;
    case 361u: goto L_08831B68;
    case 362u: goto L_08831B8C;
    case 363u: goto L_08831B98;
    case 364u: goto L_08831BA4;
    case 365u: goto L_08831BB0;
    case 366u: goto L_08831BB8;
    case 367u: goto L_08831BCC;
    case 368u: goto L_08831BD8;
    case 369u: goto L_08831BF8;
    case 370u: goto L_08831C00;
    case 371u: goto L_08831C04;
    case 372u: goto L_08831C28;
    case 373u: goto L_08831C54;
    case 374u: goto L_08831C60;
    case 375u: goto L_08831C68;
    case 376u: goto L_08831C74;
    case 377u: goto L_08831C94;
    case 378u: goto L_08831CAC;
    case 379u: goto L_08831CBC;
    case 380u: goto L_08831CCC;
    case 381u: goto L_08831CD8;
    case 382u: goto L_08831CE8;
    case 383u: goto L_08831D00;
    case 384u: goto L_08831D14;
    case 385u: goto L_08831D20;
    case 386u: goto L_08831D40;
    case 387u: goto L_08831D8C;
    case 388u: goto L_08831D98;
    case 389u: goto L_08831DA4;
    case 390u: goto L_08831DB0;
    case 391u: goto L_08831DB8;
    case 392u: goto L_08831DC0;
    case 393u: goto L_08831DCC;
    case 394u: goto L_08831DD8;
    case 395u: goto L_08831DE0;
    case 396u: goto L_08831DE8;
    case 397u: goto L_08831DF4;
    case 398u: goto L_08831DFC;
    case 399u: goto L_08831E0C;
    case 400u: goto L_08831E1C;
    case 401u: goto L_08831E24;
    case 402u: goto L_08831E30;
    case 403u: goto L_08831E3C;
    case 404u: goto L_08831E4C;
    case 405u: goto L_08831E5C;
    case 406u: goto L_08831E68;
    case 407u: goto L_08831E70;
    case 408u: goto L_08831E7C;
    case 409u: goto L_08831E88;
    case 410u: goto L_08831E90;
    case 411u: goto L_08831EA0;
    case 412u: goto L_08831EB0;
    case 413u: goto L_08831EB8;
    case 414u: goto L_08831EC4;
    case 415u: goto L_08831ED0;
    case 416u: goto L_08831EE0;
    case 417u: goto L_08831EF0;
    case 418u: goto L_08831EFC;
    case 419u: goto L_08831F08;
    case 420u: goto L_08831F18;
    case 421u: goto L_08831F28;
    case 422u: goto L_08831F38;
    case 423u: goto L_08831F40;
    case 424u: goto L_08831F54;
    case 425u: goto L_08831F58;
    case 426u: goto L_08831F60;
    case 427u: goto L_08831F74;
    case 428u: goto L_08831F78;
    case 429u: goto L_08831FDC;
    case 430u: goto L_08831FEC;
    case 431u: goto L_0883201C;
    case 432u: goto L_08832044;
    case 433u: goto L_08832054;
    case 434u: goto L_08832064;
    case 435u: goto L_08832074;
    case 436u: goto L_0883207C;
    case 437u: goto L_0883208C;
    case 438u: goto L_0883209C;
    case 439u: goto L_088320AC;
    case 440u: goto L_088320B0;
    case 441u: goto L_088320C0;
    case 442u: goto L_088320C8;
    case 443u: goto L_088320D8;
    case 444u: goto L_088320E0;
    case 445u: goto L_088320F0;
    case 446u: goto L_088320F8;
    case 447u: goto L_08832108;
    case 448u: goto L_08832110;
    case 449u: goto L_0883213C;
    case 450u: goto L_08832180;
    case 451u: goto L_088321B0;
    case 452u: goto L_088321B8;
    case 453u: goto L_088321C4;
    case 454u: goto L_088321D4;
    case 455u: goto L_088321E8;
    case 456u: goto L_088321F0;
    case 457u: goto L_08832204;
    case 458u: goto L_0883220C;
    case 459u: goto L_0883222C;
    case 460u: goto L_08832238;
    case 461u: goto L_08832264;
    case 462u: goto L_0883226C;
    case 463u: goto L_08832278;
    case 464u: goto L_08832284;
    case 465u: goto L_08832290;
    case 466u: goto L_088322B0;
    case 467u: goto L_088322DC;
    case 468u: goto L_088322FC;
    case 469u: goto L_08832324;
    case 470u: goto L_08832344;
    case 471u: goto L_08832374;
    case 472u: goto L_0883238C;
    case 473u: goto L_088323A4;
    case 474u: goto L_088323B4;
    case 475u: goto L_088323C4;
    case 476u: goto L_088323E0;
    case 477u: goto L_088323FC;
    case 478u: goto L_08832420;
    case 479u: goto L_08832430;
    case 480u: goto L_08832450;
    case 481u: goto L_08832468;
    case 482u: goto L_0883249C;
    case 483u: goto L_088324A8;
    case 484u: goto L_088324AC;
    case 485u: goto L_088324C4;
    case 486u: goto L_088324D4;
    case 487u: goto L_088324E0;
    case 488u: goto L_088324F4;
    case 489u: goto L_088324FC;
    case 490u: goto L_08832518;
    case 491u: goto L_0883252C;
    case 492u: goto L_08832540;
    case 493u: goto L_0883254C;
    case 494u: goto L_0883255C;
    case 495u: goto L_0883258C;
    case 496u: goto L_08832594;
    case 497u: goto L_088325A4;
    case 498u: goto L_088325B4;
    case 499u: goto L_088325C4;
    case 500u: goto L_088325D4;
    case 501u: goto L_088325E4;
    case 502u: goto L_088325F8;
    case 503u: goto L_088325FC;
    case 504u: goto L_08832620;
    case 505u: goto L_0883262C;
    case 506u: goto L_0883263C;
    case 507u: goto L_08832660;
    case 508u: goto L_08832674;
    case 509u: goto L_08832680;
    case 510u: goto L_0883268C;
    case 511u: goto L_08832690;
    case 512u: goto L_088326A0;
    case 513u: goto L_088326B0;
    case 514u: goto L_088326BC;
    case 515u: goto L_088326C8;
    case 516u: goto L_088326D4;
    case 517u: goto L_088326E0;
    case 518u: goto L_088326F0;
    case 519u: goto L_088326F8;
    case 520u: goto L_08832710;
    case 521u: goto L_0883271C;
    case 522u: goto L_0883272C;
    case 523u: goto L_0883273C;
    case 524u: goto L_08832744;
    case 525u: goto L_0883274C;
    case 526u: goto L_08832758;
    case 527u: goto L_08832764;
    case 528u: goto L_08832774;
    case 529u: goto L_08832784;
    case 530u: goto L_0883278C;
    case 531u: goto L_08832798;
    case 532u: goto L_088327AC;
    case 533u: goto L_088327BC;
    case 534u: goto L_08832824;
    case 535u: goto L_0883282C;
    case 536u: goto L_08832844;
    case 537u: goto L_0883284C;
    case 538u: goto L_08832864;
    case 539u: goto L_0883286C;
    case 540u: goto L_08832884;
    case 541u: goto L_0883288C;
    case 542u: goto L_088328A4;
    case 543u: goto L_088328BC;
    case 544u: goto L_088328C4;
    case 545u: goto L_088328D8;
    case 546u: goto L_088328E0;
    case 547u: goto L_08832904;
    case 548u: goto L_0883290C;
    case 549u: goto L_0883291C;
    case 550u: goto L_08832934;
    case 551u: goto L_0883294C;
    case 552u: goto L_0883295C;
    case 553u: goto L_0883296C;
    case 554u: goto L_0883297C;
    case 555u: goto L_08832994;
    case 556u: goto L_088329AC;
    case 557u: goto L_088329BC;
    case 558u: goto L_088329CC;
    case 559u: goto L_088329E4;
    case 560u: goto L_088329EC;
    case 561u: goto L_08832A04;
    case 562u: goto L_08832A0C;
    case 563u: goto L_08832A24;
    case 564u: goto L_08832A2C;
    case 565u: goto L_08832A44;
    case 566u: goto L_08832A4C;
    case 567u: goto L_08832A64;
    case 568u: goto L_08832A7C;
    case 569u: goto L_08832A84;
    case 570u: goto L_08832A98;
    case 571u: goto L_08832AA0;
    case 572u: goto L_08832AB0;
    case 573u: goto L_08832AC8;
    case 574u: goto L_08832AE0;
    case 575u: goto L_08832AF0;
    case 576u: goto L_08832B00;
    case 577u: goto L_08832B10;
    case 578u: goto L_08832B28;
    case 579u: goto L_08832B40;
    case 580u: goto L_08832B50;
    case 581u: goto L_08832B60;
    case 582u: goto L_08832B78;
    case 583u: goto L_08832B80;
    case 584u: goto L_08832B98;
    case 585u: goto L_08832BA0;
    case 586u: goto L_08832BB8;
    case 587u: goto L_08832BC0;
    case 588u: goto L_08832BD8;
    case 589u: goto L_08832BE0;
    case 590u: goto L_08832BF8;
    case 591u: goto L_08832C10;
    case 592u: goto L_08832C18;
    case 593u: goto L_08832C2C;
    case 594u: goto L_08832C34;
    case 595u: goto L_08832C44;
    case 596u: goto L_08832C5C;
    case 597u: goto L_08832C74;
    case 598u: goto L_08832C84;
    case 599u: goto L_08832C94;
    case 600u: goto L_08832CA4;
    case 601u: goto L_08832CBC;
    case 602u: goto L_08832CD4;
    case 603u: goto L_08832CE4;
    case 604u: goto L_08832CF4;
    case 605u: goto L_08832D0C;
    case 606u: goto L_08832D14;
    case 607u: goto L_08832D2C;
    case 608u: goto L_08832D34;
    case 609u: goto L_08832D4C;
    case 610u: goto L_08832D54;
    case 611u: goto L_08832D6C;
    case 612u: goto L_08832D74;
    case 613u: goto L_08832D8C;
    case 614u: goto L_08832DA4;
    case 615u: goto L_08832DAC;
    case 616u: goto L_08832DC0;
    case 617u: goto L_08832DC8;
    case 618u: goto L_08832DD8;
    case 619u: goto L_08832DF0;
    case 620u: goto L_08832E08;
    case 621u: goto L_08832E18;
    case 622u: goto L_08832E28;
    case 623u: goto L_08832E38;
    case 624u: goto L_08832E50;
    case 625u: goto L_08832E68;
    case 626u: goto L_08832E78;
    case 627u: goto L_08832E88;
    case 628u: goto L_08832EA4;
    case 629u: goto L_08832ED8;
    case 630u: goto L_08832F00;
    case 631u: goto L_08832F08;
    case 632u: goto L_08832F18;
    case 633u: goto L_08832F2C;
    case 634u: goto L_08832F34;
    case 635u: goto L_08832F48;
    case 636u: goto L_08832F50;
    case 637u: goto L_08832F58;
    case 638u: goto L_08832F68;
    case 639u: goto L_08832F84;
    case 640u: goto L_08832F8C;
    case 641u: goto L_08832F98;
    case 642u: goto L_08832FA8;
    case 643u: goto L_08832FB8;
    case 644u: goto L_08832FC8;
    case 645u: goto L_08832FE4;
    case 646u: goto L_08832FEC;
    case 647u: goto L_08832FFC;
    case 648u: goto L_08833014;
    case 649u: goto L_08833038;
    case 650u: goto L_08833044;
    case 651u: goto L_0883304C;
    case 652u: goto L_08833058;
    case 653u: goto L_0883306C;
    case 654u: goto L_08833080;
    case 655u: goto L_08833088;
    case 656u: goto L_088330AC;
    case 657u: goto L_088330B4;
    case 658u: goto L_088330C0;
    case 659u: goto L_088330D0;
    case 660u: goto L_088330E0;
    case 661u: goto L_088330F0;
    case 662u: goto L_0883310C;
    case 663u: goto L_08833114;
    case 664u: goto L_08833124;
    case 665u: goto L_08833140;
    case 666u: goto L_08833158;
    case 667u: goto L_0883318C;
    case 668u: goto L_0883319C;
    case 669u: goto L_088331A4;
    case 670u: goto L_088331B8;
    case 671u: goto L_088331C4;
    case 672u: goto L_088331DC;
    case 673u: goto L_088331F0;
    case 674u: goto L_088331F4;
    case 675u: goto L_08833200;
    case 676u: goto L_0883320C;
    case 677u: goto L_0883322C;
    case 678u: goto L_08833260;
    case 679u: goto L_0883326C;
    case 680u: goto L_08833278;
    case 681u: goto L_0883328C;
    case 682u: goto L_08833298;
    case 683u: goto L_088332A8;
    case 684u: goto L_088332B8;
    case 685u: goto L_088332C4;
    case 686u: goto L_088332D0;
    case 687u: goto L_088332E0;
    case 688u: goto L_088332F4;
    case 689u: goto L_08833304;
    case 690u: goto L_08833314;
    case 691u: goto L_08833318;
    case 692u: goto L_08833320;
    case 693u: goto L_0883332C;
    case 694u: goto L_0883334C;
    case 695u: goto L_08833360;
    case 696u: goto L_08833368;
    case 697u: goto L_08833374;
    case 698u: goto L_08833384;
    case 699u: goto L_08833398;
    case 700u: goto L_088333AC;
    case 701u: goto L_088333B4;
    case 702u: goto L_088333BC;
    case 703u: goto L_088333CC;
    case 704u: goto L_088333DC;
    case 705u: goto L_088333E8;
    case 706u: goto L_088333F0;
    case 707u: goto L_08833404;
    case 708u: goto L_08833410;
    case 709u: goto L_0883341C;
    case 710u: goto L_08833428;
    case 711u: goto L_0883342C;
    case 712u: goto L_08833438;
    case 713u: goto L_08833444;
    case 714u: goto L_08833454;
    case 715u: goto L_0883346C;
    case 716u: goto L_08833478;
    case 717u: goto L_0883348C;
    case 718u: goto L_08833494;
    case 719u: goto L_08833498;
    case 720u: goto L_088334BC;
    case 721u: goto L_088334E4;
    case 722u: goto L_088334F0;
    case 723u: goto L_088334FC;
    case 724u: goto L_08833510;
    case 725u: goto L_08833518;
    case 726u: goto L_08833520;
    case 727u: goto L_0883352C;
    case 728u: goto L_08833538;
    case 729u: goto L_08833544;
    case 730u: goto L_08833548;
    case 731u: goto L_08833564;
    case 732u: goto L_08833578;
    case 733u: goto L_08833580;
    case 734u: goto L_08833594;
    case 735u: goto L_088335A0;
    case 736u: goto L_088335B0;
    case 737u: goto L_088335D0;
    case 738u: goto L_08833608;
    case 739u: goto L_08833614;
    case 740u: goto L_08833620;
    case 741u: goto L_08833634;
    case 742u: goto L_0883363C;
    case 743u: goto L_08833644;
    case 744u: goto L_08833650;
    case 745u: goto L_0883365C;
    case 746u: goto L_08833674;
    case 747u: goto L_08833684;
    case 748u: goto L_0883368C;
    case 749u: goto L_08833698;
    case 750u: goto L_088336AC;
    case 751u: goto L_088336C8;
    case 752u: goto L_088336E4;
    case 753u: goto L_088336F8;
    case 754u: goto L_08833710;
    case 755u: goto L_08833720;
    case 756u: goto L_0883372C;
    case 757u: goto L_08833754;
    case 758u: goto L_08833788;
    case 759u: goto L_08833798;
    case 760u: goto L_088337A8;
    case 761u: goto L_088337B8;
    case 762u: goto L_088337D8;
    case 763u: goto L_088337F8;
    case 764u: goto L_08833850;
    case 765u: goto L_08833860;
    case 766u: goto L_08833874;
    case 767u: goto L_08833888;
    case 768u: goto L_088338A8;
    case 769u: goto L_088338B8;
    case 770u: goto L_088338E4;
    case 771u: goto L_088338FC;
    case 772u: goto L_08833908;
    case 773u: goto L_08833920;
    case 774u: goto L_08833934;
    case 775u: goto L_08833944;
    case 776u: goto L_08833954;
    case 777u: goto L_08833970;
    case 778u: goto L_08833984;
    case 779u: goto L_08833994;
    case 780u: goto L_088339A0;
    case 781u: goto L_088339C0;
    case 782u: goto L_088339C4;
    case 783u: goto L_088339D0;
    case 784u: goto L_088339E0;
    case 785u: goto L_088339EC;
    case 786u: goto L_08833A20;
    case 787u: goto L_08833A58;
    case 788u: goto L_08833A74;
    case 789u: goto L_08833A80;
    case 790u: goto L_08833A90;
    case 791u: goto L_08833AA8;
    case 792u: goto L_08833ABC;
    case 793u: goto L_08833AC8;
    case 794u: goto L_08833ADC;
    case 795u: goto L_08833AE8;
    case 796u: goto L_08833AFC;
    case 797u: goto L_08833B08;
    case 798u: goto L_08833B24;
    case 799u: goto L_08833B58;
    case 800u: goto L_08833B68;
    case 801u: goto L_08833B78;
    case 802u: goto L_08833B88;
    case 803u: goto L_08833BA8;
    case 804u: goto L_08833BC8;
    case 805u: goto L_08833BF0;
    case 806u: goto L_08833BF8;
    case 807u: goto L_08833C08;
    case 808u: goto L_08833C10;
    case 809u: goto L_08833C20;
    case 810u: goto L_08833C30;
    case 811u: goto L_08833C44;
    case 812u: goto L_08833C4C;
    case 813u: goto L_08833C5C;
    case 814u: goto L_08833CA0;
    case 815u: goto L_08833CB8;
    case 816u: goto L_08833D00;
    case 817u: goto L_08833D18;
    case 818u: goto L_08833D2C;
    case 819u: goto L_08833D38;
    case 820u: goto L_08833D48;
    case 821u: goto L_08833D58;
    case 822u: goto L_08833D70;
    case 823u: goto L_08833D80;
    case 824u: goto L_08833D94;
    case 825u: goto L_08833DA0;
    case 826u: goto L_08833DB0;
    case 827u: goto L_08833DC4;
    case 828u: goto L_08833DD0;
    case 829u: goto L_08833DE0;
    case 830u: goto L_08833DF4;
    case 831u: goto L_08833E00;
    case 832u: goto L_08833E38;
    case 833u: goto L_08833E68;
    case 834u: goto L_08833E78;
    case 835u: goto L_08833E84;
    case 836u: goto L_08833E90;
    case 837u: goto L_08833EA4;
    case 838u: goto L_08833EBC;
    case 839u: goto L_08833EC8;
    case 840u: goto L_08833ED4;
    case 841u: goto L_08833EE0;
    case 842u: goto L_08833EE8;
    case 843u: goto L_08833EFC;
    case 844u: goto L_08833F08;
    case 845u: goto L_08833F1C;
    case 846u: goto L_08833F30;
    case 847u: goto L_08833F3C;
    case 848u: goto L_08833F54;
    case 849u: goto L_08833F90;
    case 850u: goto L_08833F98;
    case 851u: goto L_08833FBC;
    case 852u: goto L_08833FC8;
    case 853u: goto L_08833FDC;
    case 854u: goto L_08833FEC;
    case 855u: goto L_08833FF4;
    case 856u: goto L_08833FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08830000:
    // nop
    goto L_08830004;
L_08830004:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08830014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 157u, 0x08820A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08830014u) goto L_08830014;
    return;
L_08830014:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08830084;
      }
      goto L_08830020;
    }
L_08830020:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830084;
      }
      goto L_0883002C;
    }
L_0883002C:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830084;
      }
      goto L_0883003C;
    }
L_0883003C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883006C;
      }
      goto L_0883004C;
    }
L_0883004C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883006C;
      }
      goto L_08830058;
    }
L_08830058:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830084;
      }
      goto L_0883006C;
    }
L_0883006C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08830084u);
    // nop
    goto L_0883166C;
L_08830084:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_08830088;
L_08830088:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830004;
      }
      goto L_088300AC;
    }
L_088300AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] | 8u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088300C4u);
    // nop
    goto L_088322FC;
L_088300C4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088300D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 758u, 0x0882F684u>(ctx, &aot_mem) && ctx.pc == 0x088300D0u) goto L_088300D0;
    return;
L_088300D0:
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
L_088300F0:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08830144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 268u, 0x08821110u>(ctx, &aot_mem) && ctx.pc == 0x08830144u) goto L_08830144;
    return;
L_08830144:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883015C;
      }
      goto L_08830150;
    }
L_08830150:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088302E0;
      }
      goto L_0883015C;
    }
L_0883015C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08830174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 322u, 0x08821450u>(ctx, &aot_mem) && ctx.pc == 0x08830174u) goto L_08830174;
    return;
L_08830174:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0883018Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 204u, 0x08820E40u>(ctx, &aot_mem) && ctx.pc == 0x0883018Cu) goto L_0883018C;
    return;
L_0883018C:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08830190;
L_08830190:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3892));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[4]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088301C0;
      }
      goto L_088301B0;
    }
L_088301B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_088301C0;
L_088301C0:
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3892));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830190;
      }
      goto L_088301E0;
    }
L_088301E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830290;
      }
      goto L_088301F4;
    }
L_088301F4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883022C;
      }
      goto L_088301FC;
    }
L_088301FC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3892))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883022C;
      }
      goto L_08830210;
    }
L_08830210:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08830240;
      }
      goto L_0883021C;
    }
L_0883021C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 57 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830240;
      }
      goto L_0883022C;
    }
L_0883022C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9232));
    ctx.set_gpr(31, 0x08830240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08830240u) goto L_08830240;
    return;
L_08830240:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(54));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08830290;
      }
      goto L_08830250;
    }
L_08830250:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08830290;
      }
      goto L_08830260;
    }
L_08830260:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(49));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08830290;
      }
      goto L_08830270;
    }
L_08830270:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(5))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830290;
      }
      goto L_0883027C;
    }
L_0883027C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9288));
    ctx.set_gpr(31, 0x08830290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08830290u) goto L_08830290;
    return;
L_08830290:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8192));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088302A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088302A4u) goto L_088302A4;
    return;
L_088302A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088302C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 764u, 0x0882F6DCu>(ctx, &aot_mem) && ctx.pc == 0x088302C0u) goto L_088302C0;
    return;
L_088302C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x088302DCu);
    // nop
    goto L_08830768;
L_088302DC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088302E0;
L_088302E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08830310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830348;
      }
      goto L_08830334;
    }
L_08830334:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830348;
      }
      goto L_08830340;
    }
L_08830340:
    ctx.set_gpr(31, 0x08830348u);
    // nop
    goto L_08833CB8;
L_08830348:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(230)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(200), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(235)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(202), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(201), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(201)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(202)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(203), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(203)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(7, ctx.gpr[2] >> 3u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088303B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 314u, 0x08821380u>(ctx, &aot_mem) && ctx.pc == 0x088303B0u) goto L_088303B0;
    return;
L_088303B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088303C8;
      }
      goto L_088303BC;
    }
L_088303BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088303C8u);
    // nop
    goto L_08830BC0;
L_088303C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x088303D8u);
    // nop
    goto L_08833F54;
L_088303D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(348)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088303F8;
      }
      goto L_088303E4;
    }
L_088303E4:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088303F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088303F8u) goto L_088303F8;
    return;
L_088303F8:
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
L_08830410:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883050C;
      }
      goto L_08830438;
    }
L_08830438:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08830448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 316u, 0x088357D0u>(ctx, &aot_mem) && ctx.pc == 0x08830448u) goto L_08830448;
    return;
L_08830448:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830488;
      }
      goto L_08830454;
    }
L_08830454:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830474;
      }
      goto L_08830460;
    }
L_08830460:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883046Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0883046Cu) goto L_0883046C;
    return;
L_0883046C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830488;
      }
      goto L_08830474;
    }
L_08830474:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9352));
    ctx.set_gpr(31, 0x08830488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08830488u) goto L_08830488;
    return;
L_08830488:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088304BC;
      }
      goto L_08830494;
    }
L_08830494:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x088304A8u);
    // nop
    goto L_088322B0;
L_088304A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_088304BC;
L_088304BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08830438;
      }
      goto L_088304C8;
    }
L_088304C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088304FC;
      }
      goto L_088304D8;
    }
L_088304D8:
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x088304ECu);
    // nop
    goto L_088322B0;
L_088304EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_088304FC;
L_088304FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(276), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883050Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 758u, 0x0882F684u>(ctx, &aot_mem) && ctx.pc == 0x0883050Cu) goto L_0883050C;
    return;
L_0883050C:
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
L_08830524:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830564;
      }
      goto L_0883055C;
    }
L_0883055C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(400)));
    goto L_08830564;
L_08830564:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830570;
      }
      goto L_0883056C;
    }
L_0883056C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08830570;
L_08830570:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088305C8;
      }
      goto L_08830578;
    }
L_08830578:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08830590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 74u, 0x088204FCu>(ctx, &aot_mem) && ctx.pc == 0x08830590u) goto L_08830590;
    return;
L_08830590:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088305B4;
      }
      goto L_0883059C;
    }
L_0883059C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(31, 0x088305ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088305ACu) goto L_088305AC;
    return;
L_088305AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(420), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(416), 0u);
    goto L_088305B4;
L_088305B4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088305C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 283u, 0x088211ECu>(ctx, &aot_mem) && ctx.pc == 0x088305C4u) goto L_088305C4;
    return;
L_088305C4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    goto L_088305C8;
L_088305C8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088305F0;
      }
      goto L_088305D0;
    }
L_088305D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088305DCu);
    // nop
    goto L_08830614;
L_088305DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088305ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 283u, 0x088211ECu>(ctx, &aot_mem) && ctx.pc == 0x088305ECu) goto L_088305EC;
    return;
L_088305EC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_088305F0;
L_088305F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08830614:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08830640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 381u, 0x08835BDCu>(ctx, &aot_mem) && ctx.pc == 0x08830640u) goto L_08830640;
    return;
L_08830640:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08830650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08830650u) goto L_08830650;
    return;
L_08830650:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x08830660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08830660u) goto L_08830660;
    return;
L_08830660:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(31, 0x08830670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08830670u) goto L_08830670;
    return;
L_08830670:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(31, 0x08830680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08830680u) goto L_08830680;
    return;
L_08830680:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(31, 0x08830690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08830690u) goto L_08830690;
    return;
L_08830690:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(31, 0x088306A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088306A0u) goto L_088306A0;
    return;
L_088306A0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(31, 0x088306B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088306B0u) goto L_088306B0;
    return;
L_088306B0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(388)));
    ctx.set_gpr(31, 0x088306C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088306C0u) goto L_088306C0;
    return;
L_088306C0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(31, 0x088306D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088306D0u) goto L_088306D0;
    return;
L_088306D0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(31, 0x088306E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088306E0u) goto L_088306E0;
    return;
L_088306E0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(31, 0x088306F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088306F0u) goto L_088306F0;
    return;
L_088306F0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(31, 0x08830700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08830700u) goto L_08830700;
    return;
L_08830700:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(31, 0x08830710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08830710u) goto L_08830710;
    return;
L_08830710:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(440));
    ctx.set_gpr(31, 0x08830734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08830734u) goto L_08830734;
    return;
L_08830734:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(400), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08830768:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088307C8;
      }
      goto L_088307B0;
    }
L_088307B0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9364));
    ctx.set_gpr(31, 0x088307C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x088307C0u) goto L_088307C0;
    return;
L_088307C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830B8C;
      }
      goto L_088307C8;
    }
L_088307C8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088307D4;
      }
      goto L_088307D0;
    }
L_088307D0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088307D4;
L_088307D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_088307F0;
      }
      goto L_088307DC;
    }
L_088307DC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088307F0;
      }
      goto L_088307E4;
    }
L_088307E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088307F4;
      }
      goto L_088307F0;
    }
L_088307F0:
    ctx.set_gpr(20, 0u + 0u);
    goto L_088307F4;
L_088307F4:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(365), static_cast<std::uint8_t>(ctx.gpr[20]));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088309DC;
      }
      goto L_08830804;
    }
L_08830804:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830850;
      }
      goto L_08830810;
    }
L_08830810:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08830820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08830820u) goto L_08830820;
    return;
L_08830820:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(368), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830844;
      }
      goto L_08830830;
    }
L_08830830:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08830844;
L_08830844:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830830;
      }
      goto L_08830850;
    }
L_08830850:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088308C4;
      }
      goto L_0883085C;
    }
L_0883085C:
    ctx.set_gpr(16, ctx.gpr[20] << 1u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08830870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08830870u) goto L_08830870;
    return;
L_08830870:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(372), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08830884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08830884u) goto L_08830884;
    return;
L_08830884:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(376), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088308B8;
      }
      goto L_08830894;
    }
L_08830894:
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088308B8;
L_088308B8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830894;
      }
      goto L_088308C4;
    }
L_088308C4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088309D0;
      }
      goto L_088308D0;
    }
L_088308D0:
    ctx.set_gpr(2, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088308F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x088308F8u) goto L_088308F8;
    return;
L_088308F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830928;
      }
      goto L_08830900;
    }
L_08830900:
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088309CC;
      }
      goto L_08830928;
    }
L_08830928:
    ctx.set_gpr(2, ctx.gpr[17] << 3u);
    ctx.set_gpr(23, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[17] << 1u);
    ctx.set_gpr(5, 16496u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0883094Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0883094Cu) goto L_0883094C;
    return;
L_0883094C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08830964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08830964u) goto L_08830964;
    return;
L_08830964:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08830974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08830974u) goto L_08830974;
    return;
L_08830974:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[30]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, 16496u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08830998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08830998u) goto L_08830998;
    return;
L_08830998:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088309B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088309B0u) goto L_088309B0;
    return;
L_088309B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088309C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x088309C0u) goto L_088309C0;
    return;
L_088309C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[30]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_088309CC;
L_088309CC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088309D0;
L_088309D0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088308D0;
      }
      goto L_088309DC;
    }
L_088309DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830A4C;
      }
      goto L_088309E8;
    }
L_088309E8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088309F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088309F8u) goto L_088309F8;
    return;
L_088309F8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(380), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08830A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08830A0Cu) goto L_08830A0C;
    return;
L_08830A0C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(384), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830A40;
      }
      goto L_08830A1C;
    }
L_08830A1C:
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08830A40;
L_08830A40:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830A1C;
      }
      goto L_08830A4C;
    }
L_08830A4C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830B80;
      }
      goto L_08830A58;
    }
L_08830A58:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830A90;
      }
      goto L_08830A60;
    }
L_08830A60:
    ctx.set_gpr(2, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08830A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08830A88u) goto L_08830A88;
    return;
L_08830A88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830AB8;
      }
      goto L_08830A90;
    }
L_08830A90:
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830B7C;
      }
      goto L_08830AB8;
    }
L_08830AB8:
    ctx.set_gpr(7, 16368u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08830AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 108u, 0x0883CC74u>(ctx, &aot_mem) && ctx.pc == 0x08830AD0u) goto L_08830AD0;
    return;
L_08830AD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830B7C;
      }
      goto L_08830AD8;
    }
L_08830AD8:
    ctx.set_gpr(2, ctx.gpr[17] << 3u);
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[17] << 1u);
    ctx.set_gpr(5, 16416u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08830AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08830AFCu) goto L_08830AFC;
    return;
L_08830AFC:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08830B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08830B14u) goto L_08830B14;
    return;
L_08830B14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08830B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08830B24u) goto L_08830B24;
    return;
L_08830B24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[22]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, 16416u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08830B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08830B48u) goto L_08830B48;
    return;
L_08830B48:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08830B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08830B60u) goto L_08830B60;
    return;
L_08830B60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08830B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08830B70u) goto L_08830B70;
    return;
L_08830B70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[22]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08830B7C;
L_08830B7C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08830B80;
L_08830B80:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830A58;
      }
      goto L_08830B8C;
    }
L_08830B8C:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08830BC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830D68;
      }
      goto L_08830BD8;
    }
L_08830BD8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 16u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830C0C;
      }
      goto L_08830BEC;
    }
L_08830BEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830C0C;
      }
      goto L_08830BF8;
    }
L_08830BF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08830C0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08830C0Cu) goto L_08830C0C;
    return;
L_08830C0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 32768u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830C34;
      }
      goto L_08830C1C;
    }
L_08830C1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08830C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 683u, 0x0882F164u>(ctx, &aot_mem) && ctx.pc == 0x08830C34u) goto L_08830C34;
    return;
L_08830C34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830C5C;
      }
      goto L_08830C48;
    }
L_08830C48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08830C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 671u, 0x0882F0C0u>(ctx, &aot_mem) && ctx.pc == 0x08830C5Cu) goto L_08830C5C;
    return;
L_08830C5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830C84;
      }
      goto L_08830C6C;
    }
L_08830C6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(231)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08830C84u);
    // nop
    goto L_08830D7C;
L_08830C84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830CA8;
      }
      goto L_08830C94;
    }
L_08830C94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08830CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 666u, 0x0882F068u>(ctx, &aot_mem) && ctx.pc == 0x08830CA8u) goto L_08830CA8;
    return;
L_08830CA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830CD0;
      }
      goto L_08830CB8;
    }
L_08830CB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(321));
    ctx.set_gpr(31, 0x08830CD0u);
    // nop
    goto L_08830F68;
L_08830CD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 8u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830CF8;
      }
      goto L_08830CE4;
    }
L_08830CE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08830CF8u);
    // nop
    goto L_0883144C;
L_08830CF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830D20;
      }
      goto L_08830D0C;
    }
L_08830D0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08830D20u);
    // nop
    goto L_088312B0;
L_08830D20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830D44;
      }
      goto L_08830D30;
    }
L_08830D30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08830D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 726u, 0x0882F480u>(ctx, &aot_mem) && ctx.pc == 0x08830D44u) goto L_08830D44;
    return;
L_08830D44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830D68;
      }
      goto L_08830D54;
    }
L_08830D54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08830D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 660u, 0x0882F014u>(ctx, &aot_mem) && ctx.pc == 0x08830D68u) goto L_08830D68;
    return;
L_08830D68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08830D7C:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08830F60;
      }
      goto L_08830D8C;
    }
L_08830D8C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08830F60;
      }
      goto L_08830D9C;
    }
L_08830D9C:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08830EC0;
      }
      goto L_08830DA8;
    }
L_08830DA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08830E44;
      }
      goto L_08830DB4;
    }
L_08830DB4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08830DC4;
      }
      goto L_08830DBC;
    }
L_08830DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830F30;
      }
      goto L_08830DC4;
    }
L_08830DC4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[5] + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830E20;
      }
      goto L_08830DE0;
    }
L_08830DE0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830DF0;
      }
      goto L_08830DEC;
    }
L_08830DEC:
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    goto L_08830DF0;
L_08830DF0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830E0C;
      }
      goto L_08830E00;
    }
L_08830E00:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830E1C;
      }
      goto L_08830E0C;
    }
L_08830E0C:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    goto L_08830E1C;
L_08830E1C:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08830E20;
L_08830E20:
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830DE0;
      }
      goto L_08830E2C;
    }
L_08830E2C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08830F30;
      }
      goto L_08830E38;
    }
L_08830E38:
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830F30;
      }
      goto L_08830E44;
    }
L_08830E44:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[5] + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830E9C;
      }
      goto L_08830E60;
    }
L_08830E60:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 3u);
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[10] & 31u));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830E90;
      }
      goto L_08830E78;
    }
L_08830E78:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830E94;
      }
      goto L_08830E90;
    }
L_08830E90:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-2));
    goto L_08830E94;
L_08830E94:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08830E9C;
L_08830E9C:
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830E60;
      }
      goto L_08830EA8;
    }
L_08830EA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08830F30;
      }
      goto L_08830EB4;
    }
L_08830EB4:
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830F30;
      }
      goto L_08830EC0;
    }
L_08830EC0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[5] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830F14;
      }
      goto L_08830ED8;
    }
L_08830ED8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[10] & 31u));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830F08;
      }
      goto L_08830EF0;
    }
L_08830EF0:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830F0C;
      }
      goto L_08830F08;
    }
L_08830F08:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-4));
    goto L_08830F0C;
L_08830F0C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08830F14;
L_08830F14:
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08830ED8;
      }
      goto L_08830F20;
    }
L_08830F20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08830F30;
      }
      goto L_08830F2C;
    }
L_08830F2C:
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_08830F30;
L_08830F30:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08830F60;
L_08830F60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08830F68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088312A4;
      }
      goto L_08830F7C;
    }
L_08830F7C:
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[10] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08830FCC;
      }
      goto L_08830F8C;
    }
L_08830F8C:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08830FE4;
      }
      goto L_08830FCC;
    }
L_08830FCC:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08830FE4;
L_08830FE4:
    ctx.set_gpr(3, ctx.gpr[10] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883100C;
      }
      goto L_08830FF0;
    }
L_08830FF0:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(9, ctx.gpr[7] - ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0883100C;
L_0883100C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831110;
      }
      goto L_08831018;
    }
L_08831018:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08831044;
      }
      goto L_0883102C;
    }
L_0883102C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08831044;
      }
      goto L_08831038;
    }
L_08831038:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883106C;
      }
      goto L_08831044;
    }
L_08831044:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08831068;
      }
      goto L_08831050;
    }
L_08831050:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08831068;
      }
      goto L_0883105C;
    }
L_0883105C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(17));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883106C;
      }
      goto L_08831068;
    }
L_08831068:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    goto L_0883106C;
L_0883106C:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088310FC;
      }
      goto L_08831078;
    }
L_08831078:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088310E0;
      }
      goto L_0883108C;
    }
L_0883108C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088310B4;
      }
      goto L_08831094;
    }
L_08831094:
    ctx.set_gpr(7, ctx.gpr[9] & 65535u);
    ctx.set_gpr(7, ctx.gpr[7] << (ctx.gpr[10] & 31u));
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088310D8;
      }
      goto L_088310B4;
    }
L_088310B4:
    ctx.set_gpr(8, ctx.gpr[9] & 65535u);
    ctx.set_gpr(7, 0u - ctx.gpr[10]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> (ctx.gpr[7] & 31u)));
    ctx.set_gpr(7, ctx.gpr[4] & 255u);
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088310D8;
L_088310D8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[7]);
    goto L_088310E0;
L_088310E0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u - ctx.gpr[7]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883108C;
      }
      goto L_088310F4;
    }
L_088310F4:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088310FC;
L_088310FC:
    ctx.set_gpr(7, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831078;
      }
      goto L_08831108;
    }
L_08831108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088312A4;
      }
      goto L_08831110;
    }
L_08831110:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088311D8;
      }
      goto L_0883111C;
    }
L_0883111C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088311C4;
      }
      goto L_08831134;
    }
L_08831134:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(6, ctx.hi);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(10, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[10] + ctx.gpr[29]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088311A0;
      }
      goto L_08831158;
    }
L_08831158:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08831180;
      }
      goto L_08831160;
    }
L_08831160:
    ctx.set_gpr(6, ctx.gpr[11] & 65535u);
    ctx.set_gpr(6, ctx.gpr[6] << (ctx.gpr[12] & 31u));
    ctx.set_gpr(9, ctx.gpr[6] & 255u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883119C;
      }
      goto L_08831180;
    }
L_08831180:
    ctx.set_gpr(9, ctx.gpr[11] & 65535u);
    ctx.set_gpr(6, 0u - ctx.gpr[12]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(9, ctx.gpr[6] & 255u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0883119C;
L_0883119C:
    ctx.set_gpr(12, ctx.gpr[12] - ctx.gpr[7]);
    goto L_088311A0;
L_088311A0:
    ctx.set_gpr(6, ctx.gpr[10] + ctx.gpr[29]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u - ctx.gpr[7]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831158;
      }
      goto L_088311BC;
    }
L_088311BC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088311C4;
L_088311C4:
    ctx.set_gpr(6, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831134;
      }
      goto L_088311D0;
    }
L_088311D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088312A4;
      }
      goto L_088311D8;
    }
L_088311D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831298;
      }
      goto L_088311F0;
    }
L_088311F0:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(9, ctx.hi);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[6] << 8u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(11, ctx.gpr[6] & 65535u);
    ctx.set_gpr(13, 0u + 0u);
    ctx.set_gpr(10, ctx.gpr[9] << 2u);
    ctx.set_gpr(6, ctx.gpr[10] + ctx.gpr[29]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831264;
      }
      goto L_08831224;
    }
L_08831224:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08831248;
      }
      goto L_0883122C;
    }
L_0883122C:
    ctx.set_gpr(6, ctx.gpr[11] & 65535u);
    ctx.set_gpr(6, ctx.gpr[6] << (ctx.gpr[12] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] & 65535u);
    ctx.set_gpr(6, ctx.gpr[13] | ctx.gpr[6]);
    ctx.set_gpr(13, ctx.gpr[6] & 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831260;
      }
      goto L_08831248;
    }
L_08831248:
    ctx.set_gpr(9, ctx.gpr[11] & 65535u);
    ctx.set_gpr(6, 0u - ctx.gpr[12]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(6, ctx.gpr[6] & 65535u);
    ctx.set_gpr(6, ctx.gpr[13] | ctx.gpr[6]);
    ctx.set_gpr(13, ctx.gpr[6] & 65535u);
    goto L_08831260;
L_08831260:
    ctx.set_gpr(12, ctx.gpr[12] - ctx.gpr[7]);
    goto L_08831264;
L_08831264:
    ctx.set_gpr(6, ctx.gpr[10] + ctx.gpr[29]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(0));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u - ctx.gpr[7]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831224;
      }
      goto L_08831280;
    }
L_08831280:
    ctx.set_gpr(7, ctx.gpr[13] & 65535u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08831298;
L_08831298:
    ctx.set_gpr(6, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088311F0;
      }
      goto L_088312A4;
    }
L_088312A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088312B0:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08831398;
      }
      goto L_088312C0;
    }
L_088312C0:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08831324;
      }
      goto L_088312D0;
    }
L_088312D0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831310;
      }
      goto L_088312E4;
    }
L_088312E4:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08831310;
L_08831310:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088312E4;
      }
      goto L_0883131C;
    }
L_0883131C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831444;
      }
      goto L_08831324;
    }
L_08831324:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831384;
      }
      goto L_08831338;
    }
L_08831338:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(5)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(7)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08831384;
L_08831384:
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831338;
      }
      goto L_08831390;
    }
L_08831390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831444;
      }
      goto L_08831398;
    }
L_08831398:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08831444;
      }
      goto L_088313A4;
    }
L_088313A4:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088313F8;
      }
      goto L_088313B4;
    }
L_088313B4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088313E4;
      }
      goto L_088313C8;
    }
L_088313C8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_088313E4;
L_088313E4:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088313C8;
      }
      goto L_088313F0;
    }
L_088313F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831444;
      }
      goto L_088313F8;
    }
L_088313F8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831438;
      }
      goto L_0883140C;
    }
L_0883140C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08831438;
L_08831438:
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883140C;
      }
      goto L_08831444;
    }
L_08831444:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883144C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08831548;
      }
      goto L_0883145C;
    }
L_0883145C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088314C8;
      }
      goto L_0883146C;
    }
L_0883146C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088314B4;
      }
      goto L_08831480;
    }
L_08831480:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_088314B4;
L_088314B4:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831480;
      }
      goto L_088314C0;
    }
L_088314C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831608;
      }
      goto L_088314C8;
    }
L_088314C8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831534;
      }
      goto L_088314DC;
    }
L_088314DC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(5)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08831534;
L_08831534:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088314DC;
      }
      goto L_08831540;
    }
L_08831540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831608;
      }
      goto L_08831548;
    }
L_08831548:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08831608;
      }
      goto L_08831554;
    }
L_08831554:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088315B0;
      }
      goto L_08831564;
    }
L_08831564:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883159C;
      }
      goto L_08831578;
    }
L_08831578:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0883159C;
L_0883159C:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831578;
      }
      goto L_088315A8;
    }
L_088315A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831608;
      }
      goto L_088315B0;
    }
L_088315B0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088315FC;
      }
      goto L_088315C4;
    }
L_088315C4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_088315FC;
L_088315FC:
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088315C4;
      }
      goto L_08831608;
    }
L_08831608:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831610:
    ctx.set_gpr(3, ctx.gpr[5] >> 24u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[5] >> 16u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[5] >> 8u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831634:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831658:
    ctx.set_gpr(3, ctx.gpr[5] >> 8u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883166C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08831698u);
    // nop
    goto L_088316D4;
L_08831698:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088316ACu);
    // nop
    goto L_0883175C;
L_088316AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088316B8u);
    // nop
    goto L_088317C4;
L_088316B8:
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
L_088316D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088316FCu);
    // nop
    goto L_08831610;
L_088316FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08831710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 749u, 0x0882F5E0u>(ctx, &aot_mem) && ctx.pc == 0x08831710u) goto L_08831710;
    return;
L_08831710:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08831724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 749u, 0x0882F5E0u>(ctx, &aot_mem) && ctx.pc == 0x08831724u) goto L_08831724;
    return;
L_08831724:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08831730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 47u, 0x0882033Cu>(ctx, &aot_mem) && ctx.pc == 0x08831730u) goto L_08831730;
    return;
L_08831730:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08831744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 49u, 0x08820378u>(ctx, &aot_mem) && ctx.pc == 0x08831744u) goto L_08831744;
    return;
L_08831744:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883175C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088317A8;
      }
      goto L_08831784;
    }
L_08831784:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088317A8;
      }
      goto L_0883178C;
    }
L_0883178C:
    ctx.set_gpr(31, 0x08831794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 49u, 0x08820378u>(ctx, &aot_mem) && ctx.pc == 0x08831794u) goto L_08831794;
    return;
L_08831794:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088317A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 749u, 0x0882F5E0u>(ctx, &aot_mem) && ctx.pc == 0x088317A8u) goto L_088317A8;
    return;
L_088317A8:
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
L_088317C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(31, 0x088317E4u);
    // nop
    goto L_08831610;
L_088317E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088317F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 749u, 0x0882F5E0u>(ctx, &aot_mem) && ctx.pc == 0x088317F8u) goto L_088317F8;
    return;
L_088317F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883180C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9396));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    goto L_08831824;
L_08831824:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08831824;
      }
      goto L_08831848;
    }
L_08831848:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[29]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08831864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 749u, 0x0882F5E0u>(ctx, &aot_mem) && ctx.pc == 0x08831864u) goto L_08831864;
    return;
L_08831864:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088318D0;
      }
      goto L_088318BC;
    }
L_088318BC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831C04;
      }
      goto L_088318D0;
    }
L_088318D0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831904;
      }
      goto L_088318DC;
    }
L_088318DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9404));
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x088318F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088318F4u) goto L_088318F4;
    return;
L_088318F4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08831904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08831904u) goto L_08831904;
    return;
L_08831904:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_0883191C;
L_0883191C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0883192Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 316u, 0x088357D0u>(ctx, &aot_mem) && ctx.pc == 0x0883192Cu) goto L_0883192C;
    return;
L_0883192C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831968;
      }
      goto L_08831934;
    }
L_08831934:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831954;
      }
      goto L_08831940;
    }
L_08831940:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0883194Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0883194Cu) goto L_0883194C;
    return;
L_0883194C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831968;
      }
      goto L_08831954;
    }
L_08831954:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9432));
    ctx.set_gpr(31, 0x08831968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08831968u) goto L_08831968;
    return;
L_08831968:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831A68;
      }
      goto L_08831974;
    }
L_08831974:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831A68;
      }
      goto L_08831980;
    }
L_08831980:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831A04;
      }
      goto L_08831994;
    }
L_08831994:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088319EC;
      }
      goto L_088319A8;
    }
L_088319A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088319BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088319BCu) goto L_088319BC;
    return;
L_088319BC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088319D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088319D4u) goto L_088319D4;
    return;
L_088319D4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088319E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088319E4u) goto L_088319E4;
    return;
L_088319E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831A04;
      }
      goto L_088319EC;
    }
L_088319EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08831A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08831A00u) goto L_08831A00;
    return;
L_08831A00:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08831A04;
L_08831A04:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08831A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08831A14u) goto L_08831A14;
    return;
L_08831A14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08831A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08831A4Cu) goto L_08831A4C;
    return;
L_08831A4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_08831A68;
L_08831A68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883191C;
      }
      goto L_08831A74;
    }
L_08831A74:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08831A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 316u, 0x088357D0u>(ctx, &aot_mem) && ctx.pc == 0x08831A84u) goto L_08831A84;
    return;
L_08831A84:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831B8C;
      }
      goto L_08831A90;
    }
L_08831A90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831BCC;
      }
      goto L_08831A9C;
    }
L_08831A9C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831B20;
      }
      goto L_08831AB0;
    }
L_08831AB0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831B08;
      }
      goto L_08831AC4;
    }
L_08831AC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08831AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08831AD8u) goto L_08831AD8;
    return;
L_08831AD8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08831AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08831AF0u) goto L_08831AF0;
    return;
L_08831AF0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08831B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08831B00u) goto L_08831B00;
    return;
L_08831B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831B20;
      }
      goto L_08831B08;
    }
L_08831B08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08831B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08831B1Cu) goto L_08831B1C;
    return;
L_08831B1C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08831B20;
L_08831B20:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08831B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08831B30u) goto L_08831B30;
    return;
L_08831B30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08831B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08831B68u) goto L_08831B68;
    return;
L_08831B68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831BCC;
      }
      goto L_08831B8C;
    }
L_08831B8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831BCC;
      }
      goto L_08831B98;
    }
L_08831B98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831BB8;
      }
      goto L_08831BA4;
    }
L_08831BA4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08831BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08831BB0u) goto L_08831BB0;
    return;
L_08831BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831BCC;
      }
      goto L_08831BB8;
    }
L_08831BB8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9432));
    ctx.set_gpr(31, 0x08831BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08831BCCu) goto L_08831BCC;
    return;
L_08831BCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831A74;
      }
      goto L_08831BD8;
    }
L_08831BD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831C00;
      }
      goto L_08831BF8;
    }
L_08831BF8:
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    goto L_08831C00;
L_08831C00:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08831C04;
L_08831C04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08831C28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831C68;
      }
      goto L_08831C54;
    }
L_08831C54:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08831C60u);
    // nop
    goto L_0883175C;
L_08831C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831D20;
      }
      goto L_08831C68;
    }
L_08831C68:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831CBC;
      }
      goto L_08831C74;
    }
L_08831C74:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08831C94u);
    // nop
    goto L_0883175C;
L_08831C94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08831CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08831CACu) goto L_08831CAC;
    return;
L_08831CAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08831CBC;
L_08831CBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08831C74;
      }
      goto L_08831CCC;
    }
L_08831CCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831CE8;
      }
      goto L_08831CD8;
    }
L_08831CD8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08831CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08831CE8u) goto L_08831CE8;
    return;
L_08831CE8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831D14;
      }
      goto L_08831D00;
    }
L_08831D00:
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08831D14u);
    // nop
    goto L_0883175C;
L_08831D14:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08831D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 294u, 0x08835600u>(ctx, &aot_mem) && ctx.pc == 0x08831D20u) goto L_08831D20;
    return;
L_08831D20:
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
L_08831D40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831EF0;
      }
      goto L_08831D8C;
    }
L_08831D8C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08831EB8;
      }
      goto L_08831D98;
    }
L_08831D98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831E5C;
      }
      goto L_08831DA4;
    }
L_08831DA4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08831E24;
      }
      goto L_08831DB0;
    }
L_08831DB0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831DC0;
      }
      goto L_08831DB8;
    }
L_08831DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F28;
      }
      goto L_08831DC0;
    }
L_08831DC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831DFC;
      }
      goto L_08831DCC;
    }
L_08831DCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831DFC;
      }
      goto L_08831DD8;
    }
L_08831DD8:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08831DFC;
      }
      goto L_08831DE0;
    }
L_08831DE0:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08831DFC;
      }
      goto L_08831DE8;
    }
L_08831DE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831DFC;
      }
      goto L_08831DF4;
    }
L_08831DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831E0C;
      }
      goto L_08831DFC;
    }
L_08831DFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F38;
      }
      goto L_08831E0C;
    }
L_08831E0C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9444));
    ctx.set_gpr(31, 0x08831E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08831E1Cu) goto L_08831E1C;
    return;
L_08831E1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F38;
      }
      goto L_08831E24;
    }
L_08831E24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831E4C;
      }
      goto L_08831E30;
    }
L_08831E30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831E4C;
      }
      goto L_08831E3C;
    }
L_08831E3C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9484));
    ctx.set_gpr(31, 0x08831E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08831E4Cu) goto L_08831E4C;
    return;
L_08831E4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F38;
      }
      goto L_08831E5C;
    }
L_08831E5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831E90;
      }
      goto L_08831E68;
    }
L_08831E68:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08831E90;
      }
      goto L_08831E70;
    }
L_08831E70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831E90;
      }
      goto L_08831E7C;
    }
L_08831E7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831E90;
      }
      goto L_08831E88;
    }
L_08831E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831EA0;
      }
      goto L_08831E90;
    }
L_08831E90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F38;
      }
      goto L_08831EA0;
    }
L_08831EA0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9516));
    ctx.set_gpr(31, 0x08831EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08831EB0u) goto L_08831EB0;
    return;
L_08831EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F38;
      }
      goto L_08831EB8;
    }
L_08831EB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831EE0;
      }
      goto L_08831EC4;
    }
L_08831EC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831EE0;
      }
      goto L_08831ED0;
    }
L_08831ED0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9556));
    ctx.set_gpr(31, 0x08831EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08831EE0u) goto L_08831EE0;
    return;
L_08831EE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F38;
      }
      goto L_08831EF0;
    }
L_08831EF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831F18;
      }
      goto L_08831EFC;
    }
L_08831EFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08831F18;
      }
      goto L_08831F08;
    }
L_08831F08:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9600));
    ctx.set_gpr(31, 0x08831F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08831F18u) goto L_08831F18;
    return;
L_08831F18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F38;
      }
      goto L_08831F28;
    }
L_08831F28:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9636));
    ctx.set_gpr(31, 0x08831F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08831F38u) goto L_08831F38;
    return;
L_08831F38:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F58;
      }
      goto L_08831F40;
    }
L_08831F40:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9672));
    ctx.set_gpr(31, 0x08831F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08831F54u) goto L_08831F54;
    return;
L_08831F54:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08831F58;
L_08831F58:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08831F78;
      }
      goto L_08831F60;
    }
L_08831F60:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9708));
    ctx.set_gpr(31, 0x08831F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08831F74u) goto L_08831F74;
    return;
L_08831F74:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08831F78;
L_08831F78:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(231), static_cast<std::uint8_t>(ctx.gpr[19]));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(230), static_cast<std::uint8_t>(ctx.gpr[18]));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(234)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(233)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, ctx.gpr[2] >> 3u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(231)));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(234)));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(235), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08831FDCu);
    // nop
    goto L_08831610;
L_08831FDC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08831FECu);
    // nop
    goto L_08831610;
L_08831FEC:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[19]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[18]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[17]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[16]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3488));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x0883201Cu);
    // nop
    goto L_0883166C;
L_0883201C:
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(640));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(796));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(229)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883207C;
      }
      goto L_08832044;
    }
L_08832044:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08832064;
      }
      goto L_08832054;
    }
L_08832054:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(231)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832074;
      }
      goto L_08832064;
    }
L_08832064:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(229), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883207C;
      }
      goto L_08832074;
    }
L_08832074:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(248));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(229), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0883207C;
L_0883207C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088320B0;
      }
      goto L_0883208C;
    }
L_0883208C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(229)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088320AC;
      }
      goto L_0883209C;
    }
L_0883209C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088320B0;
      }
      goto L_088320AC;
    }
L_088320AC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(132), 0u);
    goto L_088320B0;
L_088320B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088320C8;
      }
      goto L_088320C0;
    }
L_088320C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    goto L_088320C8;
L_088320C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088320E0;
      }
      goto L_088320D8;
    }
L_088320D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    goto L_088320E0;
L_088320E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088320F8;
      }
      goto L_088320F0;
    }
L_088320F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    goto L_088320F8;
L_088320F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832110;
      }
      goto L_08832108;
    }
L_08832108:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    goto L_08832110;
L_08832110:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(9740));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0883213Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 255u, 0x088352D8u>(ctx, &aot_mem) && ctx.pc == 0x0883213Cu) goto L_0883213C;
    return;
L_0883213C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832180:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088321B8;
      }
      goto L_088321B0;
    }
L_088321B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088321C4;
      }
      goto L_088321B8;
    }
L_088321B8:
    ctx.set_gpr(1, ctx.gpr[17] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883220C;
      }
      goto L_088321C4;
    }
L_088321C4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088321F0;
      }
      goto L_088321D4;
    }
L_088321D4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9748));
    ctx.set_gpr(31, 0x088321E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x088321E8u) goto L_088321E8;
    return;
L_088321E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883220C;
      }
      goto L_088321F0;
    }
L_088321F0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9748));
    ctx.set_gpr(31, 0x08832204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08832204u) goto L_08832204;
    return;
L_08832204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832290;
      }
      goto L_0883220C;
    }
L_0883220C:
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(216), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3512));
    ctx.set_gpr(31, 0x0883222Cu);
    // nop
    goto L_088316D4;
L_0883222C:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883226C;
      }
      goto L_08832238;
    }
L_08832238:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08832264u);
    // nop
    goto L_0883175C;
L_08832264:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    goto L_0883226C;
L_0883226C:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832238;
      }
      goto L_08832278;
    }
L_08832278:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08832284u);
    // nop
    goto L_088317C4;
L_08832284:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    goto L_08832290;
L_08832290:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088322B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3496));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088322DCu);
    // nop
    goto L_0883166C;
L_088322DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088322FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3504));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08832324u);
    // nop
    goto L_0883166C;
L_08832324:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] | 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x08832374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08832374u) goto L_08832374;
    return;
L_08832374:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0883238Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0883238Cu) goto L_0883238C;
    return;
L_0883238C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088323A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088323A4u) goto L_088323A4;
    return;
L_088323A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088323B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x088323B4u) goto L_088323B4;
    return;
L_088323B4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088323C4u);
    // nop
    goto L_08831610;
L_088323C4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3536));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088323E0u);
    // nop
    goto L_0883166C;
L_088323E0:
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
L_088323FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832430;
      }
      goto L_08832420;
    }
L_08832420:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9784));
    ctx.set_gpr(31, 0x08832430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08832430u) goto L_08832430;
    return;
L_08832430:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3600));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08832450u);
    // nop
    goto L_0883166C;
L_08832450:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832468:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088324A8;
      }
      goto L_0883249C;
    }
L_0883249C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088324AC;
      }
      goto L_088324A8;
    }
L_088324A8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(10));
    goto L_088324AC;
L_088324AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(20, ctx.lo);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088324E0;
      }
      goto L_088324C4;
    }
L_088324C4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088324D4u);
    // nop
    goto L_0883322C;
L_088324D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088324FC;
      }
      goto L_088324E0;
    }
L_088324E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9824));
    ctx.set_gpr(31, 0x088324F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x088324F4u) goto L_088324F4;
    return;
L_088324F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883263C;
      }
      goto L_088324FC;
    }
L_088324FC:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3592));
    ctx.set_gpr(31, 0x08832518u);
    // nop
    goto L_088316D4;
L_08832518:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0883252Cu);
    // nop
    goto L_0883175C;
L_0883252C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08832540u);
    // nop
    goto L_0883175C;
L_08832540:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088325FC;
      }
      goto L_0883254C;
    }
L_0883254C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08832594;
      }
      goto L_0883255C;
    }
L_0883255C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x0883258Cu);
    // nop
    goto L_08831658;
L_0883258C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088325E4;
      }
      goto L_08832594;
    }
L_08832594:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088325A4u);
    // nop
    goto L_08831658;
L_088325A4:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.set_gpr(31, 0x088325B4u);
    // nop
    goto L_08831658;
L_088325B4:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088325C4u);
    // nop
    goto L_08831658;
L_088325C4:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x088325D4u);
    // nop
    goto L_08831658;
L_088325D4:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088325E4u);
    // nop
    goto L_08831658;
L_088325E4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088325F8u);
    // nop
    goto L_0883175C;
L_088325F8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(10));
    goto L_088325FC;
L_088325FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883254C;
      }
      goto L_08832620;
    }
L_08832620:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0883262Cu);
    // nop
    goto L_088317C4;
L_0883262C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0883263Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0883263Cu) goto L_0883263C;
    return;
L_0883263C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832660:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[6] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832710;
      }
      goto L_08832674;
    }
L_08832674:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883268C;
      }
      goto L_08832680;
    }
L_08832680:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832690;
      }
      goto L_0883268C;
    }
L_0883268C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    goto L_08832690;
L_08832690:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088326E0;
      }
      goto L_088326A0;
    }
L_088326A0:
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088326E0;
      }
      goto L_088326B0;
    }
L_088326B0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088326E0;
      }
      goto L_088326BC;
    }
L_088326BC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088326E0;
      }
      goto L_088326C8;
    }
L_088326C8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088326E0;
      }
      goto L_088326D4;
    }
L_088326D4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088326F8;
      }
      goto L_088326E0;
    }
L_088326E0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9852));
    ctx.set_gpr(31, 0x088326F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x088326F0u) goto L_088326F0;
    return;
L_088326F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088327AC;
      }
      goto L_088326F8;
    }
L_088326F8:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883274C;
      }
      goto L_08832710;
    }
L_08832710:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883272C;
      }
      goto L_0883271C;
    }
L_0883271C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832744;
      }
      goto L_0883272C;
    }
L_0883272C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9852));
    ctx.set_gpr(31, 0x0883273Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0883273Cu) goto L_0883273C;
    return;
L_0883273C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088327AC;
      }
      goto L_08832744;
    }
L_08832744:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_0883274C;
L_0883274C:
    ctx.set_gpr(2, ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832798;
      }
      goto L_08832758;
    }
L_08832758:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832774;
      }
      goto L_08832764;
    }
L_08832764:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883278C;
      }
      goto L_08832774;
    }
L_08832774:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9852));
    ctx.set_gpr(31, 0x08832784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08832784u) goto L_08832784;
    return;
L_08832784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088327AC;
      }
      goto L_0883278C;
    }
L_0883278C:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08832798;
L_08832798:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3584));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088327ACu);
    // nop
    goto L_0883166C;
L_088327AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088327BC:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(21, ctx.gpr[10] + 0u);
    ctx.set_gpr(22, ctx.gpr[11] + 0u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08832824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08832824u) goto L_08832824;
    return;
L_08832824:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088328C4;
      }
      goto L_0883282C;
    }
L_0883282C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32576)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32568)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08832844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08832844u) goto L_08832844;
    return;
L_08832844:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088328C4;
      }
      goto L_0883284C;
    }
L_0883284C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08832864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08832864u) goto L_08832864;
    return;
L_08832864:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088328C4;
      }
      goto L_0883286C;
    }
L_0883286C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32560)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32568)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08832884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08832884u) goto L_08832884;
    return;
L_08832884:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088328C4;
      }
      goto L_0883288C;
    }
L_0883288C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088328A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088328A4u) goto L_088328A4;
    return;
L_088328A4:
    ctx.set_gpr(7, 16368u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088328BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x088328BCu) goto L_088328BC;
    return;
L_088328BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883290C;
      }
      goto L_088328C4;
    }
L_088328C4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9884));
    ctx.set_gpr(31, 0x088328D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x088328D8u) goto L_088328D8;
    return;
L_088328D8:
    ctx.set_gpr(31, 0x088328E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x088328E0u) goto L_088328E0;
    return;
L_088328E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9920));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08832904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x08832904u) goto L_08832904;
    return;
L_08832904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832EA4;
      }
      goto L_0883290C;
    }
L_0883290C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0883291Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0883291Cu) goto L_0883291C;
    return;
L_0883291C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08832934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08832934u) goto L_08832934;
    return;
L_08832934:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0883294Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0883294Cu) goto L_0883294C;
    return;
L_0883294C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0883295Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x0883295Cu) goto L_0883295C;
    return;
L_0883295C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0883296Cu);
    // nop
    goto L_08831610;
L_0883296C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x0883297Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0883297Cu) goto L_0883297C;
    return;
L_0883297C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08832994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08832994u) goto L_08832994;
    return;
L_08832994:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088329ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088329ACu) goto L_088329AC;
    return;
L_088329AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088329BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x088329BCu) goto L_088329BC;
    return;
L_088329BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088329CCu);
    // nop
    goto L_08831610;
L_088329CC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088329E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x088329E4u) goto L_088329E4;
    return;
L_088329E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832A84;
      }
      goto L_088329EC;
    }
L_088329EC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32560)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32568)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08832A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08832A04u) goto L_08832A04;
    return;
L_08832A04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832A84;
      }
      goto L_08832A0C;
    }
L_08832A0C:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08832A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08832A24u) goto L_08832A24;
    return;
L_08832A24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832A84;
      }
      goto L_08832A2C;
    }
L_08832A2C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32560)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32568)));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08832A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08832A44u) goto L_08832A44;
    return;
L_08832A44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832A84;
      }
      goto L_08832A4C;
    }
L_08832A4C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08832A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08832A64u) goto L_08832A64;
    return;
L_08832A64:
    ctx.set_gpr(7, 16368u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08832A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08832A7Cu) goto L_08832A7C;
    return;
L_08832A7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832AA0;
      }
      goto L_08832A84;
    }
L_08832A84:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9944));
    ctx.set_gpr(31, 0x08832A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08832A98u) goto L_08832A98;
    return;
L_08832A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832EA4;
      }
      goto L_08832AA0;
    }
L_08832AA0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x08832AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08832AB0u) goto L_08832AB0;
    return;
L_08832AB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08832AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08832AC8u) goto L_08832AC8;
    return;
L_08832AC8:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08832AE0u) goto L_08832AE0;
    return;
L_08832AE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08832AF0u) goto L_08832AF0;
    return;
L_08832AF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08832B00u);
    // nop
    goto L_08831610;
L_08832B00:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x08832B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08832B10u) goto L_08832B10;
    return;
L_08832B10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08832B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08832B28u) goto L_08832B28;
    return;
L_08832B28:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08832B40u) goto L_08832B40;
    return;
L_08832B40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08832B50u) goto L_08832B50;
    return;
L_08832B50:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08832B60u);
    // nop
    goto L_08831610;
L_08832B60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08832B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08832B78u) goto L_08832B78;
    return;
L_08832B78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832C18;
      }
      goto L_08832B80;
    }
L_08832B80:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32560)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32568)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08832B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08832B98u) goto L_08832B98;
    return;
L_08832B98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832C18;
      }
      goto L_08832BA0;
    }
L_08832BA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08832BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08832BB8u) goto L_08832BB8;
    return;
L_08832BB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832C18;
      }
      goto L_08832BC0;
    }
L_08832BC0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32560)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32568)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08832BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08832BD8u) goto L_08832BD8;
    return;
L_08832BD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832C18;
      }
      goto L_08832BE0;
    }
L_08832BE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08832BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08832BF8u) goto L_08832BF8;
    return;
L_08832BF8:
    ctx.set_gpr(7, 16368u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08832C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08832C10u) goto L_08832C10;
    return;
L_08832C10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832C34;
      }
      goto L_08832C18;
    }
L_08832C18:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9980));
    ctx.set_gpr(31, 0x08832C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08832C2Cu) goto L_08832C2C;
    return;
L_08832C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832EA4;
      }
      goto L_08832C34;
    }
L_08832C34:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x08832C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08832C44u) goto L_08832C44;
    return;
L_08832C44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08832C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08832C5Cu) goto L_08832C5C;
    return;
L_08832C5C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08832C74u) goto L_08832C74;
    return;
L_08832C74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08832C84u) goto L_08832C84;
    return;
L_08832C84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08832C94u);
    // nop
    goto L_08831610;
L_08832C94:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x08832CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08832CA4u) goto L_08832CA4;
    return;
L_08832CA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08832CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08832CBCu) goto L_08832CBC;
    return;
L_08832CBC:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08832CD4u) goto L_08832CD4;
    return;
L_08832CD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08832CE4u) goto L_08832CE4;
    return;
L_08832CE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08832CF4u);
    // nop
    goto L_08831610;
L_08832CF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08832D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08832D0Cu) goto L_08832D0C;
    return;
L_08832D0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832DAC;
      }
      goto L_08832D14;
    }
L_08832D14:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32560)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32568)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08832D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08832D2Cu) goto L_08832D2C;
    return;
L_08832D2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832DAC;
      }
      goto L_08832D34;
    }
L_08832D34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08832D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08832D4Cu) goto L_08832D4C;
    return;
L_08832D4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832DAC;
      }
      goto L_08832D54;
    }
L_08832D54:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32560)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32568)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08832D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08832D6Cu) goto L_08832D6C;
    return;
L_08832D6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832DAC;
      }
      goto L_08832D74;
    }
L_08832D74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08832D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08832D8Cu) goto L_08832D8C;
    return;
L_08832D8C:
    ctx.set_gpr(7, 16368u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08832DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08832DA4u) goto L_08832DA4;
    return;
L_08832DA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832DC8;
      }
      goto L_08832DAC;
    }
L_08832DAC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10016));
    ctx.set_gpr(31, 0x08832DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08832DC0u) goto L_08832DC0;
    return;
L_08832DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832EA4;
      }
      goto L_08832DC8;
    }
L_08832DC8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x08832DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08832DD8u) goto L_08832DD8;
    return;
L_08832DD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08832DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08832DF0u) goto L_08832DF0;
    return;
L_08832DF0:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08832E08u) goto L_08832E08;
    return;
L_08832E08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08832E18u) goto L_08832E18;
    return;
L_08832E18:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08832E28u);
    // nop
    goto L_08831610;
L_08832E28:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 34464u);
    ctx.set_gpr(31, 0x08832E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08832E38u) goto L_08832E38;
    return;
L_08832E38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08832E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08832E50u) goto L_08832E50;
    return;
L_08832E50:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08832E68u) goto L_08832E68;
    return;
L_08832E68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08832E78u) goto L_08832E78;
    return;
L_08832E78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08832E88u);
    // nop
    goto L_08831610;
L_08832E88:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3528));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08832EA4u);
    // nop
    goto L_0883166C;
L_08832EA4:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832ED8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08832F50;
      }
      goto L_08832F00;
    }
L_08832F00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08832F18;
      }
      goto L_08832F08;
    }
L_08832F08:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832F34;
      }
      goto L_08832F18;
    }
L_08832F18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10052));
    ctx.set_gpr(31, 0x08832F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08832F2Cu) goto L_08832F2C;
    return;
L_08832F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832FFC;
      }
      goto L_08832F34;
    }
L_08832F34:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3624));
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08832F48u);
    // nop
    goto L_0883166C;
L_08832F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832FFC;
      }
      goto L_08832F50;
    }
L_08832F50:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832F8C;
      }
      goto L_08832F58;
    }
L_08832F58:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08832F68u);
    // nop
    goto L_08831658;
L_08832F68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3624));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08832F84u);
    // nop
    goto L_0883166C;
L_08832F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832FFC;
      }
      goto L_08832F8C;
    }
L_08832F8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08832FEC;
      }
      goto L_08832F98;
    }
L_08832F98:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08832FA8u);
    // nop
    goto L_08831658;
L_08832FA8:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08832FB8u);
    // nop
    goto L_08831658;
L_08832FB8:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08832FC8u);
    // nop
    goto L_08831658;
L_08832FC8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3624));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08832FE4u);
    // nop
    goto L_0883166C;
L_08832FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832FFC;
      }
      goto L_08832FEC;
    }
L_08832FEC:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10100));
    ctx.set_gpr(31, 0x08832FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08832FFCu) goto L_08832FFC;
    return;
L_08832FFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08833014:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088330B4;
      }
      goto L_08833038;
    }
L_08833038:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833058;
      }
      goto L_08833044;
    }
L_08833044:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833088;
      }
      goto L_0883304C;
    }
L_0883304C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833088;
      }
      goto L_08833058;
    }
L_08833058:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833088;
      }
      goto L_0883306C;
    }
L_0883306C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10140));
    ctx.set_gpr(31, 0x08833080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08833080u) goto L_08833080;
    return;
L_08833080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833140;
      }
      goto L_08833088;
    }
L_08833088:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088330ACu);
    // nop
    goto L_0883166C;
L_088330AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833140;
      }
      goto L_088330B4;
    }
L_088330B4:
    ctx.set_gpr(2, ctx.gpr[6] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833114;
      }
      goto L_088330C0;
    }
L_088330C0:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088330D0u);
    // nop
    goto L_08831658;
L_088330D0:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x088330E0u);
    // nop
    goto L_08831658;
L_088330E0:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088330F0u);
    // nop
    goto L_08831658;
L_088330F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0883310Cu);
    // nop
    goto L_0883166C;
L_0883310C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833140;
      }
      goto L_08833114;
    }
L_08833114:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08833124u);
    // nop
    goto L_08831658;
L_08833124:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08833140u);
    // nop
    goto L_0883166C;
L_08833140:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08833158:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088331A4;
      }
      goto L_0883318C;
    }
L_0883318C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10176));
    ctx.set_gpr(31, 0x0883319Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0883319Cu) goto L_0883319C;
    return;
L_0883319C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883320C;
      }
      goto L_088331A4;
    }
L_088331A4:
    ctx.set_gpr(6, ctx.gpr[17] << 1u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3544));
    ctx.set_gpr(31, 0x088331B8u);
    // nop
    goto L_088316D4;
L_088331B8:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088331F4;
      }
      goto L_088331C4;
    }
L_088331C4:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088331DCu);
    // nop
    goto L_08831658;
L_088331DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088331F0u);
    // nop
    goto L_0883175C;
L_088331F0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088331F4;
L_088331F4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088331C4;
      }
      goto L_08833200;
    }
L_08833200:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0883320Cu);
    // nop
    goto L_088317C4;
L_0883320C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883322C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833278;
      }
      goto L_08833260;
    }
L_08833260:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0883326Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0883326Cu) goto L_0883326C;
    return;
L_0883326C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833298;
      }
      goto L_08833278;
    }
L_08833278:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10224));
    ctx.set_gpr(31, 0x0883328Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 194u, 0x08820D60u>(ctx, &aot_mem) && ctx.pc == 0x0883328Cu) goto L_0883328C;
    return;
L_0883328C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833498;
      }
      goto L_08833298;
    }
L_08833298:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088332A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088332A8u) goto L_088332A8;
    return;
L_088332A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833320;
      }
      goto L_088332B8;
    }
L_088332B8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088332E0;
      }
      goto L_088332C4;
    }
L_088332C4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833314;
      }
      goto L_088332D0;
    }
L_088332D0:
    ctx.set_gpr(2, ctx.gpr[6] & 255u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 161 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833314;
      }
      goto L_088332E0;
    }
L_088332E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10244));
    ctx.set_gpr(31, 0x088332F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088332F4u) goto L_088332F4;
    return;
L_088332F4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08833304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 194u, 0x08820D60u>(ctx, &aot_mem) && ctx.pc == 0x08833304u) goto L_08833304;
    return;
L_08833304:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833318;
      }
      goto L_08833314;
    }
L_08833314:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08833318;
L_08833318:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08833320;
L_08833320:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088332B8;
      }
      goto L_0883332C;
    }
L_0883332C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08833384;
      }
      goto L_0883334C;
    }
L_0883334C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10280));
    ctx.set_gpr(31, 0x08833360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 194u, 0x08820D60u>(ctx, &aot_mem) && ctx.pc == 0x08833360u) goto L_08833360;
    return;
L_08833360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833374;
      }
      goto L_08833368;
    }
L_08833368:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08833374;
L_08833374:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08833368;
      }
      goto L_08833384;
    }
L_08833384:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088333CC;
      }
      goto L_08833398;
    }
L_08833398:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10320));
    ctx.set_gpr(31, 0x088333ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 194u, 0x08820D60u>(ctx, &aot_mem) && ctx.pc == 0x088333ACu) goto L_088333AC;
    return;
L_088333AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088333BC;
      }
      goto L_088333B4;
    }
L_088333B4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_088333BC;
L_088333BC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088333B4;
      }
      goto L_088333CC;
    }
L_088333CC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883342C;
      }
      goto L_088333DC;
    }
L_088333DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08833404;
      }
      goto L_088333E8;
    }
L_088333E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833404;
      }
      goto L_088333F0;
    }
L_088333F0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833428;
      }
      goto L_08833404;
    }
L_08833404:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883341C;
      }
      goto L_08833410;
    }
L_08833410:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833428;
      }
      goto L_0883341C;
    }
L_0883341C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + 0u);
    goto L_08833428;
L_08833428:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0883342C;
L_0883342C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088333DC;
      }
      goto L_08833438;
    }
L_08833438:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883346C;
      }
      goto L_08833444;
    }
L_08833444:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08833454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08833454u) goto L_08833454;
    return;
L_08833454:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10356));
    ctx.set_gpr(31, 0x0883346Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 194u, 0x08820D60u>(ctx, &aot_mem) && ctx.pc == 0x0883346Cu) goto L_0883346C;
    return;
L_0883346C:
    ctx.set_gpr(1, ctx.gpr[17] < static_cast<std::uint32_t>(80) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833494;
      }
      goto L_08833478;
    }
L_08833478:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10376));
    ctx.set_gpr(31, 0x0883348Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 194u, 0x08820D60u>(ctx, &aot_mem) && ctx.pc == 0x0883348Cu) goto L_0883348C;
    return;
L_0883348C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(316), 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(79));
    goto L_08833494;
L_08833494:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08833498;
L_08833498:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088334BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088334FC;
      }
      goto L_088334E4;
    }
L_088334E4:
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088334F0u);
    // nop
    goto L_0883322C;
L_088334F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833518;
      }
      goto L_088334FC;
    }
L_088334FC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10420));
    ctx.set_gpr(31, 0x08833510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08833510u) goto L_08833510;
    return;
L_08833510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088335B0;
      }
      goto L_08833518;
    }
L_08833518:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883352C;
      }
      goto L_08833520;
    }
L_08833520:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833538;
      }
      goto L_0883352C;
    }
L_0883352C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833548;
      }
      goto L_08833538;
    }
L_08833538:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08833544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08833544u) goto L_08833544;
    return;
L_08833544:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08833548;
L_08833548:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3608));
    ctx.set_gpr(31, 0x08833564u);
    // nop
    goto L_088316D4;
L_08833564:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08833578u);
    // nop
    goto L_0883175C;
L_08833578:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833594;
      }
      goto L_08833580;
    }
L_08833580:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08833594u);
    // nop
    goto L_0883175C;
L_08833594:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088335A0u);
    // nop
    goto L_088317C4;
L_088335A0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x088335B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088335B0u) goto L_088335B0;
    return;
L_088335B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088335D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833620;
      }
      goto L_08833608;
    }
L_08833608:
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08833614u);
    // nop
    goto L_0883322C;
L_08833614:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883363C;
      }
      goto L_08833620;
    }
L_08833620:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10448));
    ctx.set_gpr(31, 0x08833634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08833634u) goto L_08833634;
    return;
L_08833634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883372C;
      }
      goto L_0883363C;
    }
L_0883363C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883365C;
      }
      goto L_08833644;
    }
L_08833644:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883365C;
      }
      goto L_08833650;
    }
L_08833650:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883368C;
      }
      goto L_0883365C;
    }
L_0883365C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08833674u);
    // nop
    goto L_088334BC;
L_08833674:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08833684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08833684u) goto L_08833684;
    return;
L_08833684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883372C;
      }
      goto L_0883368C;
    }
L_0883368C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08833698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08833698u) goto L_08833698;
    return;
L_08833698:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x088336ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088336ACu) goto L_088336AC;
    return;
L_088336AC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088336C8u);
    // nop
    goto L_08831874;
L_088336C8:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3632));
    ctx.set_gpr(31, 0x088336E4u);
    // nop
    goto L_088316D4;
L_088336E4:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088336F8u);
    // nop
    goto L_0883175C;
L_088336F8:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08833710u);
    // nop
    goto L_0883175C;
L_08833710:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08833720u);
    // nop
    goto L_08831C28;
L_08833720:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0883372Cu);
    // nop
    goto L_088317C4;
L_0883372C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08833754:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833798;
      }
      goto L_08833788;
    }
L_08833788:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10476));
    ctx.set_gpr(31, 0x08833798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08833798u) goto L_08833798;
    return;
L_08833798:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088337A8u);
    // nop
    goto L_08831610;
L_088337A8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088337B8u);
    // nop
    goto L_08831610;
L_088337B8:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3552));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088337D8u);
    // nop
    goto L_0883166C;
L_088337D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088337F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    ctx.set_gpr(19, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833860;
      }
      goto L_08833850;
    }
L_08833850:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10516));
    ctx.set_gpr(31, 0x08833860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08833860u) goto L_08833860;
    return;
L_08833860:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08833874u);
    // nop
    goto L_0883322C;
L_08833874:
    ctx.set_gpr(30, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, 0u < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08833888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08833888u) goto L_08833888;
    return;
L_08833888:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(5, ctx.gpr[19] << 2u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088338A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088338A8u) goto L_088338A8;
    return;
L_088338A8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088338FC;
      }
      goto L_088338B8;
    }
L_088338B8:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[16] ^ ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088338E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088338E4u) goto L_088338E4;
    return;
L_088338E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088338FC;
L_088338FC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088338B8;
      }
      goto L_08833908;
    }
L_08833908:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3560));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08833920u);
    // nop
    goto L_088316D4;
L_08833920:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08833934u);
    // nop
    goto L_0883175C;
L_08833934:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08833944u);
    // nop
    goto L_08831634;
L_08833944:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08833954u);
    // nop
    goto L_08831634;
L_08833954:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[20]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08833970u);
    // nop
    goto L_0883175C;
L_08833970:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08833984u);
    // nop
    goto L_0883175C;
L_08833984:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08833994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08833994u) goto L_08833994;
    return;
L_08833994:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088339C4;
      }
      goto L_088339A0;
    }
L_088339A0:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088339C0u);
    // nop
    goto L_0883175C;
L_088339C0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088339C4;
L_088339C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088339A0;
      }
      goto L_088339D0;
    }
L_088339D0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088339E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088339E0u) goto L_088339E0;
    return;
L_088339E0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088339ECu);
    // nop
    goto L_088317C4;
L_088339EC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08833A20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10560));
    ctx.set_gpr(31, 0x08833A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08833A58u) goto L_08833A58;
    return;
L_08833A58:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10560));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08833A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08833A74u) goto L_08833A74;
    return;
L_08833A74:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08833A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08833A80u) goto L_08833A80;
    return;
L_08833A80:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08833A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08833A90u) goto L_08833A90;
    return;
L_08833A90:
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3568));
    ctx.set_gpr(31, 0x08833AA8u);
    // nop
    goto L_088316D4;
L_08833AA8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08833ABCu);
    // nop
    goto L_0883175C;
L_08833ABC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08833AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08833AC8u) goto L_08833AC8;
    return;
L_08833AC8:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08833ADCu);
    // nop
    goto L_0883175C;
L_08833ADC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08833AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08833AE8u) goto L_08833AE8;
    return;
L_08833AE8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08833AFCu);
    // nop
    goto L_0883175C;
L_08833AFC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08833B08u);
    // nop
    goto L_088317C4;
L_08833B08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08833B24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833B68;
      }
      goto L_08833B58;
    }
L_08833B58:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10568));
    ctx.set_gpr(31, 0x08833B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08833B68u) goto L_08833B68;
    return;
L_08833B68:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08833B78u);
    // nop
    goto L_08831610;
L_08833B78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08833B88u);
    // nop
    goto L_08831610;
L_08833B88:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3576));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08833BA8u);
    // nop
    goto L_0883166C;
L_08833BA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08833BC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833C30;
      }
      goto L_08833BF0;
    }
L_08833BF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08833C30;
      }
      goto L_08833BF8;
    }
L_08833BF8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833C30;
      }
      goto L_08833C08;
    }
L_08833C08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08833C30;
      }
      goto L_08833C10;
    }
L_08833C10:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833C30;
      }
      goto L_08833C20;
    }
L_08833C20:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833C4C;
      }
      goto L_08833C30;
    }
L_08833C30:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10608));
    ctx.set_gpr(31, 0x08833C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08833C44u) goto L_08833C44;
    return;
L_08833C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833CA0;
      }
      goto L_08833C4C;
    }
L_08833C4C:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08833C5Cu);
    // nop
    goto L_08831658;
L_08833C5C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3616));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08833CA0u);
    // nop
    goto L_0883166C;
L_08833CA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08833CB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(235)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, ctx.gpr[2] >> 3u);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08833D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08833D00u) goto L_08833D00;
    return;
L_08833D00:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(229)));
    ctx.set_gpr(3, ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833D38;
      }
      goto L_08833D18;
    }
L_08833D18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08833D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08833D2Cu) goto L_08833D2C;
    return;
L_08833D2C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08833D38;
L_08833D38:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(229)));
    ctx.set_gpr(3, ctx.gpr[3] & 224u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833E00;
      }
      goto L_08833D48;
    }
L_08833D48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08833D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08833D58u) goto L_08833D58;
    return;
L_08833D58:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08833D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08833D70u) goto L_08833D70;
    return;
L_08833D70:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(229)));
    ctx.set_gpr(3, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833DA0;
      }
      goto L_08833D80;
    }
L_08833D80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08833D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08833D94u) goto L_08833D94;
    return;
L_08833D94:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08833DA0;
L_08833DA0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(229)));
    ctx.set_gpr(3, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833DD0;
      }
      goto L_08833DB0;
    }
L_08833DB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08833DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08833DC4u) goto L_08833DC4;
    return;
L_08833DC4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08833DD0;
L_08833DD0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(229)));
    ctx.set_gpr(3, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833E00;
      }
      goto L_08833DE0;
    }
L_08833DE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08833DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08833DF4u) goto L_08833DF4;
    return;
L_08833DF4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08833E00;
L_08833E00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
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
L_08833E38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833F3C;
      }
      goto L_08833E68;
    }
L_08833E68:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08833E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 316u, 0x088357D0u>(ctx, &aot_mem) && ctx.pc == 0x08833E78u) goto L_08833E78;
    return;
L_08833E78:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833EBC;
      }
      goto L_08833E84;
    }
L_08833E84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833EFC;
      }
      goto L_08833E90;
    }
L_08833E90:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08833EA4u);
    // nop
    goto L_088322B0;
L_08833EA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833EFC;
      }
      goto L_08833EBC;
    }
L_08833EBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08833EFC;
      }
      goto L_08833EC8;
    }
L_08833EC8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833EE8;
      }
      goto L_08833ED4;
    }
L_08833ED4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08833EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08833EE0u) goto L_08833EE0;
    return;
L_08833EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833EFC;
      }
      goto L_08833EE8;
    }
L_08833EE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9432));
    ctx.set_gpr(31, 0x08833EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08833EFCu) goto L_08833EFC;
    return;
L_08833EFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08833E68;
      }
      goto L_08833F08;
    }
L_08833F08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833F30;
      }
      goto L_08833F1C;
    }
L_08833F1C:
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08833F30u);
    // nop
    goto L_088322B0;
L_08833F30:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08833F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 294u, 0x08835600u>(ctx, &aot_mem) && ctx.pc == 0x08833F3Cu) goto L_08833F3C;
    return;
L_08833F3C:
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
L_08833F54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(229)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(365)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08833F98;
      }
      goto L_08833F90;
    }
L_08833F90:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08833F98;
L_08833F98:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(9, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 12u, 0x088340DCu>(ctx, &aot_mem); return;
      }
      goto L_08833FBC;
    }
L_08833FBC:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 12u, 0x088340DCu>(ctx, &aot_mem); return;
      }
      goto L_08833FC8;
    }
L_08833FC8:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(12, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 2u, 0x08834008u>(ctx, &aot_mem); return;
      }
      goto L_08833FDC;
    }
L_08833FDC:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833FF4;
      }
      goto L_08833FEC;
    }
L_08833FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833FFC;
      }
      goto L_08833FF4;
    }
L_08833FF4:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(10, ctx.gpr[9] - ctx.gpr[10]);
    goto L_08833FFC;
L_08833FFC:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[10]);
    ctx.pc = 0x08834000u; return;
}

void recomp_unit_0011(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0011_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_11(Runtime &runtime) {
    runtime.register_generated_unit(11u, 0x08830000u, 16384u, &recomp_unit_0011, &recomp_unit_0011_entry);
    runtime.register_function(0x08830000u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830004u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830014u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830020u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883002Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883003Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883004Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830058u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883006Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830084u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830088u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088300ACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088300C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088300D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088300F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830144u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830150u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883015Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830174u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883018Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830190u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088301B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088301C0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088301E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088301F4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088301FCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830210u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883021Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883022Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830240u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830250u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830260u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830270u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883027Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830290u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088302A4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088302C0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088302DCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088302E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830310u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830334u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830340u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830348u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088303B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088303BCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088303C8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088303D8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088303E4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088303F8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830410u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830438u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830448u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830454u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830460u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883046Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830474u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830488u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830494u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088304A8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088304BCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088304C8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088304D8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088304ECu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088304FCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883050Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830524u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883055Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830564u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883056Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830570u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830578u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830590u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883059Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088305ACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088305B4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088305C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088305C8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088305D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088305DCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088305ECu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088305F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830614u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830640u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830650u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830660u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830670u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830680u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830690u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088306A0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088306B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088306C0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088306D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088306E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088306F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830700u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830710u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830734u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830768u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088307B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088307C0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088307C8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088307D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088307D4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088307DCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088307E4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088307F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088307F4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830804u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830810u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830820u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830830u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830844u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830850u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883085Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830870u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830884u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830894u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088308B8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088308C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088308D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088308F8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830900u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830928u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883094Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830964u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830974u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830998u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088309B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088309C0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088309CCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088309D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088309DCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088309E8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088309F8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830A0Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830A1Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830A40u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830A4Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830A58u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830A60u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830A88u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830A90u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830AB8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830AD0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830AD8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830AFCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830B14u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830B24u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830B48u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830B60u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830B70u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830B7Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830B80u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830B8Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830BC0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830BD8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830BECu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830BF8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830C0Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830C1Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830C34u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830C48u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830C5Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830C6Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830C84u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830C94u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830CA8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830CB8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830CD0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830CE4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830CF8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830D0Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830D20u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830D30u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830D44u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830D54u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830D68u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830D7Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830D8Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830D9Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830DA8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830DB4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830DBCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830DC4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830DE0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830DECu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830DF0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E00u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E0Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E1Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E20u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E2Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E38u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E44u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E60u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E78u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E90u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E94u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830E9Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830EA8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830EB4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830EC0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830ED8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830EF0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830F08u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830F0Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830F14u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830F20u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830F2Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830F30u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830F60u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830F68u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830F7Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830F8Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830FCCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830FE4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08830FF0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883100Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831018u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883102Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831038u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831044u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831050u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883105Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831068u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883106Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831078u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883108Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831094u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088310B4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088310D8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088310E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088310F4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088310FCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831108u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831110u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883111Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831134u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831158u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831160u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831180u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883119Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088311A0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088311BCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088311C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088311D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088311D8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088311F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831224u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883122Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831248u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831260u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831264u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831280u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831298u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088312A4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088312B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088312C0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088312D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088312E4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831310u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883131Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831324u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831338u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831384u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831390u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831398u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088313A4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088313B4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088313C8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088313E4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088313F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088313F8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883140Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831438u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831444u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883144Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883145Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883146Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831480u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088314B4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088314C0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088314C8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088314DCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831534u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831540u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831548u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831554u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831564u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831578u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883159Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088315A8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088315B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088315C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088315FCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831608u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831610u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831634u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831658u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883166Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831698u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088316ACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088316B8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088316D4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088316FCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831710u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831724u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831730u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831744u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883175Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831784u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883178Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831794u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088317A8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088317C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088317E4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088317F8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883180Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831824u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831848u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831864u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831874u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088318BCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088318D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088318DCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088318F4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831904u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883191Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883192Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831934u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831940u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883194Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831954u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831968u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831974u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831980u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831994u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088319A8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088319BCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088319D4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088319E4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088319ECu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831A00u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831A04u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831A14u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831A4Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831A68u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831A74u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831A84u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831A90u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831A9Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831AB0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831AC4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831AD8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831AF0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831B00u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831B08u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831B1Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831B20u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831B30u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831B68u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831B8Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831B98u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831BA4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831BB0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831BB8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831BCCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831BD8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831BF8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831C00u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831C04u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831C28u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831C54u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831C60u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831C68u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831C74u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831C94u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831CACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831CBCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831CCCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831CD8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831CE8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831D00u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831D14u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831D20u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831D40u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831D8Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831D98u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831DA4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831DB0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831DB8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831DC0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831DCCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831DD8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831DE0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831DE8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831DF4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831DFCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E0Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E1Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E24u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E30u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E3Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E4Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E5Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E68u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E70u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E7Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E88u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831E90u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831EA0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831EB0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831EB8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831EC4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831ED0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831EE0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831EF0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831EFCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831F08u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831F18u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831F28u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831F38u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831F40u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831F54u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831F58u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831F60u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831F74u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831F78u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831FDCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08831FECu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883201Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832044u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832054u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832064u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832074u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883207Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883208Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883209Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088320ACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088320B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088320C0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088320C8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088320D8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088320E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088320F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088320F8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832108u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832110u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883213Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832180u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088321B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088321B8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088321C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088321D4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088321E8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088321F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832204u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883220Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883222Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832238u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832264u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883226Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832278u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832284u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832290u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088322B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088322DCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088322FCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832324u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832344u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832374u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883238Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088323A4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088323B4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088323C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088323E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088323FCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832420u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832430u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832450u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832468u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883249Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088324A8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088324ACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088324C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088324D4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088324E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088324F4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088324FCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832518u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883252Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832540u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883254Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883255Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883258Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832594u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088325A4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088325B4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088325C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088325D4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088325E4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088325F8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088325FCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832620u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883262Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883263Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832660u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832674u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832680u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883268Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832690u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088326A0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088326B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088326BCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088326C8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088326D4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088326E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088326F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088326F8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832710u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883271Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883272Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883273Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832744u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883274Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832758u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832764u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832774u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832784u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883278Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832798u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088327ACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088327BCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832824u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883282Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832844u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883284Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832864u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883286Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832884u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883288Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088328A4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088328BCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088328C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088328D8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088328E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832904u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883290Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883291Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832934u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883294Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883295Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883296Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883297Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832994u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088329ACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088329BCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088329CCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088329E4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088329ECu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832A04u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832A0Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832A24u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832A2Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832A44u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832A4Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832A64u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832A7Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832A84u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832A98u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832AA0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832AB0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832AC8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832AE0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832AF0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832B00u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832B10u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832B28u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832B40u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832B50u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832B60u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832B78u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832B80u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832B98u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832BA0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832BB8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832BC0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832BD8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832BE0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832BF8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832C10u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832C18u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832C2Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832C34u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832C44u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832C5Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832C74u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832C84u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832C94u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832CA4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832CBCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832CD4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832CE4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832CF4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832D0Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832D14u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832D2Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832D34u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832D4Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832D54u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832D6Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832D74u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832D8Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832DA4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832DACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832DC0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832DC8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832DD8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832DF0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832E08u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832E18u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832E28u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832E38u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832E50u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832E68u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832E78u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832E88u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832EA4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832ED8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F00u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F08u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F18u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F2Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F34u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F48u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F50u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F58u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F68u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F84u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F8Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832F98u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832FA8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832FB8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832FC8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832FE4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832FECu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08832FFCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833014u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833038u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833044u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883304Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833058u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883306Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833080u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833088u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088330ACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088330B4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088330C0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088330D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088330E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088330F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883310Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833114u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833124u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833140u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833158u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883318Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883319Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088331A4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088331B8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088331C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088331DCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088331F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088331F4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833200u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883320Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883322Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833260u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883326Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833278u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883328Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833298u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088332A8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088332B8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088332C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088332D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088332E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088332F4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833304u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833314u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833318u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833320u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883332Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883334Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833360u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833368u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833374u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833384u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833398u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088333ACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088333B4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088333BCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088333CCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088333DCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088333E8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088333F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833404u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833410u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883341Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833428u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883342Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833438u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833444u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833454u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883346Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833478u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883348Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833494u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833498u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088334BCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088334E4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088334F0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088334FCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833510u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833518u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833520u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883352Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833538u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833544u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833548u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833564u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833578u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833580u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833594u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088335A0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088335B0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088335D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833608u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833614u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833620u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833634u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883363Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833644u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833650u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883365Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833674u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833684u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883368Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833698u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088336ACu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088336C8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088336E4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088336F8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833710u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833720u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x0883372Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833754u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833788u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833798u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088337A8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088337B8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088337D8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088337F8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833850u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833860u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833874u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833888u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088338A8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088338B8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088338E4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088338FCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833908u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833920u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833934u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833944u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833954u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833970u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833984u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833994u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088339A0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088339C0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088339C4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088339D0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088339E0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x088339ECu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833A20u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833A58u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833A74u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833A80u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833A90u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833AA8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833ABCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833AC8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833ADCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833AE8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833AFCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833B08u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833B24u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833B58u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833B68u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833B78u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833B88u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833BA8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833BC8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833BF0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833BF8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833C08u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833C10u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833C20u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833C30u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833C44u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833C4Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833C5Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833CA0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833CB8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833D00u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833D18u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833D2Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833D38u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833D48u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833D58u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833D70u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833D80u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833D94u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833DA0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833DB0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833DC4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833DD0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833DE0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833DF4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833E00u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833E38u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833E68u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833E78u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833E84u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833E90u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833EA4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833EBCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833EC8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833ED4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833EE0u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833EE8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833EFCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833F08u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833F1Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833F30u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833F3Cu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833F54u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833F90u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833F98u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833FBCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833FC8u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833FDCu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833FECu, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833FF4u, &recomp_unit_0011, "recomp_unit_0011");
    runtime.register_function(0x08833FFCu, &recomp_unit_0011, "recomp_unit_0011");
}
} // namespace psprecomp
