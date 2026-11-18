#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0049[4093] = {
    1, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14,
    0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36,
    0, 37, 38, 0, 0, 39, 0, 40, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0,
    0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 73,
    0, 74, 0, 75, 0, 0, 76, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93,
    0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0,
    104, 105, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0,
    0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0,
    148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0,
    154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 164,
    0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0,
    0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 180, 0, 181,
    0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0,
    236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0,
    249, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 253, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 268, 0, 0, 0, 0,
    269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275, 276, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 288,
    0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296,
    0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0,
    0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335,
    0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0,
    349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360,
    0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0,
    369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377,
    0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0,
    0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0,
    0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0,
    0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 413, 0, 0, 414,
    0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0,
    0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425,
    0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 432, 0, 433, 0, 0, 434, 0, 0, 435,
    0, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 451, 0, 0, 0, 0, 0, 452, 453, 0, 0, 0, 0, 0, 454, 455, 0, 0, 0, 0, 0, 456,
    457, 0, 0, 0, 0, 0, 458, 459, 0, 0, 0, 0, 0, 460, 461, 462, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 469, 0, 0, 0, 0, 0, 470, 471, 0, 0, 0, 0, 0, 472,
    473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 475, 0, 0, 0, 0, 0, 476, 477, 0, 0, 0, 0, 0, 478, 479, 480, 0, 0, 0, 481,
    0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0,
    0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 498, 0, 0, 499, 0,
    0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 504, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0,
    0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 515, 0, 0, 516, 517, 0, 0, 0,
    0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 526, 0, 0, 527, 528, 0, 0,
    0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0,
    0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 542, 0, 543, 0, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0,
    0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 554, 555, 0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0,
    561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0,
    569, 0, 0, 0, 570, 0, 0, 0, 571, 0, 572, 0, 0, 0, 573, 574, 0, 0, 0, 0, 575, 576, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0,
    0, 580, 0, 581, 0, 0, 582, 583, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 0,
    591, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0,
    0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 0,
    0, 0, 0, 613, 0, 614, 0, 0, 615, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 620, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0,
    0, 624, 0, 0, 625, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0,
    0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 639, 0, 0, 640, 0, 641, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0,
    0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 647, 648, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0,
    0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0,
    662, 0, 663, 0, 0, 664, 0, 0, 0, 0, 0, 665, 666, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0,
    0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 675, 0, 0, 676, 0, 677, 0, 0, 0, 678, 679, 680, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 686,
    687, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 694, 0,
    695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0,
    0, 0, 701, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 707, 0, 0, 0, 708, 0, 0, 0,
    0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714,
    715, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 722,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 0, 725, 0, 0, 726, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0,
    0, 0, 730, 0, 0, 0, 0, 0, 0, 731, 0, 732, 733, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 738, 0,
    739, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0,
    0, 0, 744, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0,
    752, 0, 753, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 0, 758, 759, 0, 0, 0, 760, 0, 0,
    761, 0, 762, 0, 763, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 769, 0, 0, 0,
    0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 775,
    0, 776, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0,
    0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 805,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0,
    0, 809, 0, 0, 0, 810, 0, 0, 0, 811, 0, 812, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0,
    0, 816, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0,
    0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 824, 0, 825, 0, 0, 0, 826, 0, 827, 0, 828, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 833, 0, 0, 0, 834,
    835, 0, 0, 0, 0, 0, 836, 0, 837, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 843, 844, 0, 0, 0, 0, 0, 0, 845, 846, 0, 0, 0, 0, 0, 0, 847, 848, 0, 0, 0, 0, 0, 0, 849, 850,
};
void recomp_unit_0049_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C8004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0049[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C8004;
    case 2u: goto L_088C8010;
    case 3u: goto L_088C8018;
    case 4u: goto L_088C8024;
    case 5u: goto L_088C802C;
    case 6u: goto L_088C8038;
    case 7u: goto L_088C8040;
    case 8u: goto L_088C804C;
    case 9u: goto L_088C8054;
    case 10u: goto L_088C805C;
    case 11u: goto L_088C808C;
    case 12u: goto L_088C80E4;
    case 13u: goto L_088C80F0;
    case 14u: goto L_088C8100;
    case 15u: goto L_088C8110;
    case 16u: goto L_088C811C;
    case 17u: goto L_088C812C;
    case 18u: goto L_088C813C;
    case 19u: goto L_088C8148;
    case 20u: goto L_088C8158;
    case 21u: goto L_088C8168;
    case 22u: goto L_088C8174;
    case 23u: goto L_088C8184;
    case 24u: goto L_088C8194;
    case 25u: goto L_088C81A0;
    case 26u: goto L_088C81B0;
    case 27u: goto L_088C81C0;
    case 28u: goto L_088C81CC;
    case 29u: goto L_088C81DC;
    case 30u: goto L_088C81EC;
    case 31u: goto L_088C81F8;
    case 32u: goto L_088C8208;
    case 33u: goto L_088C824C;
    case 34u: goto L_088C825C;
    case 35u: goto L_088C8264;
    case 36u: goto L_088C8280;
    case 37u: goto L_088C8288;
    case 38u: goto L_088C828C;
    case 39u: goto L_088C8298;
    case 40u: goto L_088C82A0;
    case 41u: goto L_088C82A4;
    case 42u: goto L_088C82B4;
    case 43u: goto L_088C82C4;
    case 44u: goto L_088C82D0;
    case 45u: goto L_088C82E4;
    case 46u: goto L_088C8328;
    case 47u: goto L_088C833C;
    case 48u: goto L_088C8348;
    case 49u: goto L_088C8354;
    case 50u: goto L_088C8360;
    case 51u: goto L_088C8384;
    case 52u: goto L_088C8390;
    case 53u: goto L_088C839C;
    case 54u: goto L_088C83A8;
    case 55u: goto L_088C83B4;
    case 56u: goto L_088C83C0;
    case 57u: goto L_088C83CC;
    case 58u: goto L_088C83D8;
    case 59u: goto L_088C83E4;
    case 60u: goto L_088C83F0;
    case 61u: goto L_088C83FC;
    case 62u: goto L_088C8408;
    case 63u: goto L_088C8410;
    case 64u: goto L_088C841C;
    case 65u: goto L_088C8428;
    case 66u: goto L_088C8430;
    case 67u: goto L_088C843C;
    case 68u: goto L_088C8448;
    case 69u: goto L_088C8454;
    case 70u: goto L_088C8464;
    case 71u: goto L_088C8470;
    case 72u: goto L_088C847C;
    case 73u: goto L_088C8480;
    case 74u: goto L_088C8488;
    case 75u: goto L_088C8490;
    case 76u: goto L_088C849C;
    case 77u: goto L_088C84A0;
    case 78u: goto L_088C84B4;
    case 79u: goto L_088C84BC;
    case 80u: goto L_088C84C8;
    case 81u: goto L_088C84D0;
    case 82u: goto L_088C84D8;
    case 83u: goto L_088C84E4;
    case 84u: goto L_088C8504;
    case 85u: goto L_088C8510;
    case 86u: goto L_088C851C;
    case 87u: goto L_088C8524;
    case 88u: goto L_088C852C;
    case 89u: goto L_088C853C;
    case 90u: goto L_088C854C;
    case 91u: goto L_088C855C;
    case 92u: goto L_088C856C;
    case 93u: goto L_088C8580;
    case 94u: goto L_088C8588;
    case 95u: goto L_088C8590;
    case 96u: goto L_088C859C;
    case 97u: goto L_088C85A8;
    case 98u: goto L_088C85B0;
    case 99u: goto L_088C85BC;
    case 100u: goto L_088C85C4;
    case 101u: goto L_088C85D4;
    case 102u: goto L_088C85E4;
    case 103u: goto L_088C85F4;
    case 104u: goto L_088C8604;
    case 105u: goto L_088C8608;
    case 106u: goto L_088C860C;
    case 107u: goto L_088C8618;
    case 108u: goto L_088C8648;
    case 109u: goto L_088C8674;
    case 110u: goto L_088C8684;
    case 111u: goto L_088C869C;
    case 112u: goto L_088C86C8;
    case 113u: goto L_088C86D8;
    case 114u: goto L_088C86E4;
    case 115u: goto L_088C8714;
    case 116u: goto L_088C873C;
    case 117u: goto L_088C874C;
    case 118u: goto L_088C8768;
    case 119u: goto L_088C8778;
    case 120u: goto L_088C8788;
    case 121u: goto L_088C8798;
    case 122u: goto L_088C87A4;
    case 123u: goto L_088C87AC;
    case 124u: goto L_088C87BC;
    case 125u: goto L_088C87D4;
    case 126u: goto L_088C87E4;
    case 127u: goto L_088C87FC;
    case 128u: goto L_088C880C;
    case 129u: goto L_088C8820;
    case 130u: goto L_088C8830;
    case 131u: goto L_088C8840;
    case 132u: goto L_088C8854;
    case 133u: goto L_088C8868;
    case 134u: goto L_088C8890;
    case 135u: goto L_088C889C;
    case 136u: goto L_088C88A8;
    case 137u: goto L_088C88B8;
    case 138u: goto L_088C88CC;
    case 139u: goto L_088C88D4;
    case 140u: goto L_088C88DC;
    case 141u: goto L_088C8900;
    case 142u: goto L_088C8918;
    case 143u: goto L_088C8940;
    case 144u: goto L_088C894C;
    case 145u: goto L_088C8958;
    case 146u: goto L_088C8968;
    case 147u: goto L_088C897C;
    case 148u: goto L_088C8984;
    case 149u: goto L_088C898C;
    case 150u: goto L_088C89BC;
    case 151u: goto L_088C89D4;
    case 152u: goto L_088C89F0;
    case 153u: goto L_088C89F8;
    case 154u: goto L_088C8A04;
    case 155u: goto L_088C8A10;
    case 156u: goto L_088C8A24;
    case 157u: goto L_088C8A30;
    case 158u: goto L_088C8A38;
    case 159u: goto L_088C8A44;
    case 160u: goto L_088C8A50;
    case 161u: goto L_088C8A68;
    case 162u: goto L_088C8A74;
    case 163u: goto L_088C8A7C;
    case 164u: goto L_088C8A80;
    case 165u: goto L_088C8A88;
    case 166u: goto L_088C8A9C;
    case 167u: goto L_088C8AB4;
    case 168u: goto L_088C8AC8;
    case 169u: goto L_088C8AD8;
    case 170u: goto L_088C8AE4;
    case 171u: goto L_088C8AEC;
    case 172u: goto L_088C8B08;
    case 173u: goto L_088C8B14;
    case 174u: goto L_088C8B1C;
    case 175u: goto L_088C8B28;
    case 176u: goto L_088C8B30;
    case 177u: goto L_088C8B44;
    case 178u: goto L_088C8B5C;
    case 179u: goto L_088C8B74;
    case 180u: goto L_088C8B78;
    case 181u: goto L_088C8B80;
    case 182u: goto L_088C8B98;
    case 183u: goto L_088C8BA4;
    case 184u: goto L_088C8BBC;
    case 185u: goto L_088C8BC8;
    case 186u: goto L_088C8BD0;
    case 187u: goto L_088C8BDC;
    case 188u: goto L_088C8BE4;
    case 189u: goto L_088C8BF8;
    case 190u: goto L_088C8C10;
    case 191u: goto L_088C8C28;
    case 192u: goto L_088C8C2C;
    case 193u: goto L_088C8C34;
    case 194u: goto L_088C8C4C;
    case 195u: goto L_088C8C58;
    case 196u: goto L_088C8C88;
    case 197u: goto L_088C8CB0;
    case 198u: goto L_088C8CC0;
    case 199u: goto L_088C8CD0;
    case 200u: goto L_088C8CE0;
    case 201u: goto L_088C8CF0;
    case 202u: goto L_088C8D08;
    case 203u: goto L_088C8D38;
    case 204u: goto L_088C8D50;
    case 205u: goto L_088C8D6C;
    case 206u: goto L_088C8DA0;
    case 207u: goto L_088C8DB8;
    case 208u: goto L_088C8DDC;
    case 209u: goto L_088C8DEC;
    case 210u: goto L_088C8DFC;
    case 211u: goto L_088C8E18;
    case 212u: goto L_088C8E24;
    case 213u: goto L_088C8E30;
    case 214u: goto L_088C8E58;
    case 215u: goto L_088C8EBC;
    case 216u: goto L_088C8ECC;
    case 217u: goto L_088C8EE8;
    case 218u: goto L_088C8EF8;
    case 219u: goto L_088C8F08;
    case 220u: goto L_088C8F24;
    case 221u: goto L_088C8F34;
    case 222u: goto L_088C8F58;
    case 223u: goto L_088C8F70;
    case 224u: goto L_088C8F84;
    case 225u: goto L_088C8F90;
    case 226u: goto L_088C8F9C;
    case 227u: goto L_088C8FD4;
    case 228u: goto L_088C8FE4;
    case 229u: goto L_088C9000;
    case 230u: goto L_088C9010;
    case 231u: goto L_088C9020;
    case 232u: goto L_088C904C;
    case 233u: goto L_088C905C;
    case 234u: goto L_088C906C;
    case 235u: goto L_088C9078;
    case 236u: goto L_088C9084;
    case 237u: goto L_088C908C;
    case 238u: goto L_088C90A8;
    case 239u: goto L_088C90BC;
    case 240u: goto L_088C90CC;
    case 241u: goto L_088C90D4;
    case 242u: goto L_088C9108;
    case 243u: goto L_088C9118;
    case 244u: goto L_088C9134;
    case 245u: goto L_088C9144;
    case 246u: goto L_088C9150;
    case 247u: goto L_088C9160;
    case 248u: goto L_088C9170;
    case 249u: goto L_088C9184;
    case 250u: goto L_088C918C;
    case 251u: goto L_088C9198;
    case 252u: goto L_088C91B0;
    case 253u: goto L_088C91B4;
    case 254u: goto L_088C91BC;
    case 255u: goto L_088C91CC;
    case 256u: goto L_088C91DC;
    case 257u: goto L_088C9218;
    case 258u: goto L_088C9220;
    case 259u: goto L_088C922C;
    case 260u: goto L_088C923C;
    case 261u: goto L_088C925C;
    case 262u: goto L_088C9264;
    case 263u: goto L_088C9288;
    case 264u: goto L_088C92AC;
    case 265u: goto L_088C92D0;
    case 266u: goto L_088C92DC;
    case 267u: goto L_088C92E4;
    case 268u: goto L_088C92F0;
    case 269u: goto L_088C9304;
    case 270u: goto L_088C9310;
    case 271u: goto L_088C9318;
    case 272u: goto L_088C933C;
    case 273u: goto L_088C9348;
    case 274u: goto L_088C9358;
    case 275u: goto L_088C936C;
    case 276u: goto L_088C9370;
    case 277u: goto L_088C9384;
    case 278u: goto L_088C939C;
    case 279u: goto L_088C93DC;
    case 280u: goto L_088C9424;
    case 281u: goto L_088C9434;
    case 282u: goto L_088C943C;
    case 283u: goto L_088C9448;
    case 284u: goto L_088C9458;
    case 285u: goto L_088C9464;
    case 286u: goto L_088C9470;
    case 287u: goto L_088C947C;
    case 288u: goto L_088C9480;
    case 289u: goto L_088C948C;
    case 290u: goto L_088C9494;
    case 291u: goto L_088C949C;
    case 292u: goto L_088C94B4;
    case 293u: goto L_088C94CC;
    case 294u: goto L_088C94D4;
    case 295u: goto L_088C94E4;
    case 296u: goto L_088C9500;
    case 297u: goto L_088C9508;
    case 298u: goto L_088C9518;
    case 299u: goto L_088C9520;
    case 300u: goto L_088C9538;
    case 301u: goto L_088C9540;
    case 302u: goto L_088C9550;
    case 303u: goto L_088C9564;
    case 304u: goto L_088C956C;
    case 305u: goto L_088C9580;
    case 306u: goto L_088C95AC;
    case 307u: goto L_088C95DC;
    case 308u: goto L_088C9610;
    case 309u: goto L_088C961C;
    case 310u: goto L_088C9628;
    case 311u: goto L_088C9634;
    case 312u: goto L_088C9640;
    case 313u: goto L_088C964C;
    case 314u: goto L_088C9658;
    case 315u: goto L_088C966C;
    case 316u: goto L_088C9678;
    case 317u: goto L_088C9680;
    case 318u: goto L_088C9694;
    case 319u: goto L_088C96B0;
    case 320u: goto L_088C96B8;
    case 321u: goto L_088C96C4;
    case 322u: goto L_088C96E0;
    case 323u: goto L_088C96F0;
    case 324u: goto L_088C970C;
    case 325u: goto L_088C976C;
    case 326u: goto L_088C977C;
    case 327u: goto L_088C978C;
    case 328u: goto L_088C979C;
    case 329u: goto L_088C97AC;
    case 330u: goto L_088C97DC;
    case 331u: goto L_088C97EC;
    case 332u: goto L_088C97F8;
    case 333u: goto L_088C9814;
    case 334u: goto L_088C9828;
    case 335u: goto L_088C9880;
    case 336u: goto L_088C9894;
    case 337u: goto L_088C98A4;
    case 338u: goto L_088C98B4;
    case 339u: goto L_088C98BC;
    case 340u: goto L_088C98CC;
    case 341u: goto L_088C98D4;
    case 342u: goto L_088C98E4;
    case 343u: goto L_088C9930;
    case 344u: goto L_088C9944;
    case 345u: goto L_088C9954;
    case 346u: goto L_088C9964;
    case 347u: goto L_088C996C;
    case 348u: goto L_088C997C;
    case 349u: goto L_088C9984;
    case 350u: goto L_088C9990;
    case 351u: goto L_088C999C;
    case 352u: goto L_088C99B8;
    case 353u: goto L_088C99CC;
    case 354u: goto L_088C99E4;
    case 355u: goto L_088C9A00;
    case 356u: goto L_088C9A14;
    case 357u: goto L_088C9A7C;
    case 358u: goto L_088C9A84;
    case 359u: goto L_088C9AEC;
    case 360u: goto L_088C9B00;
    case 361u: goto L_088C9B10;
    case 362u: goto L_088C9B18;
    case 363u: goto L_088C9B2C;
    case 364u: goto L_088C9B3C;
    case 365u: goto L_088C9B48;
    case 366u: goto L_088C9B58;
    case 367u: goto L_088C9B6C;
    case 368u: goto L_088C9B7C;
    case 369u: goto L_088C9B84;
    case 370u: goto L_088C9B94;
    case 371u: goto L_088C9BAC;
    case 372u: goto L_088C9BC8;
    case 373u: goto L_088C9BDC;
    case 374u: goto L_088C9C20;
    case 375u: goto L_088C9C28;
    case 376u: goto L_088C9C6C;
    case 377u: goto L_088C9C80;
    case 378u: goto L_088C9C90;
    case 379u: goto L_088C9C98;
    case 380u: goto L_088C9CAC;
    case 381u: goto L_088C9CBC;
    case 382u: goto L_088C9CC8;
    case 383u: goto L_088C9CD8;
    case 384u: goto L_088C9CEC;
    case 385u: goto L_088C9CFC;
    case 386u: goto L_088C9D24;
    case 387u: goto L_088C9D2C;
    case 388u: goto L_088C9D50;
    case 389u: goto L_088C9D88;
    case 390u: goto L_088C9DB8;
    case 391u: goto L_088C9DDC;
    case 392u: goto L_088C9DEC;
    case 393u: goto L_088C9E04;
    case 394u: goto L_088C9E3C;
    case 395u: goto L_088C9E6C;
    case 396u: goto L_088C9E78;
    case 397u: goto L_088C9E88;
    case 398u: goto L_088C9EA4;
    case 399u: goto L_088C9EC4;
    case 400u: goto L_088C9EFC;
    case 401u: goto L_088C9F0C;
    case 402u: goto L_088C9F18;
    case 403u: goto L_088C9F48;
    case 404u: goto L_088C9F58;
    case 405u: goto L_088C9F70;
    case 406u: goto L_088C9F78;
    case 407u: goto L_088C9F88;
    case 408u: goto L_088C9FA0;
    case 409u: goto L_088C9FAC;
    case 410u: goto L_088C9FBC;
    case 411u: goto L_088C9FD8;
    case 412u: goto L_088C9FE4;
    case 413u: goto L_088C9FF4;
    case 414u: goto L_088CA000;
    case 415u: goto L_088CA00C;
    case 416u: goto L_088CA020;
    case 417u: goto L_088CA030;
    case 418u: goto L_088CA044;
    case 419u: goto L_088CA054;
    case 420u: goto L_088CA068;
    case 421u: goto L_088CA08C;
    case 422u: goto L_088CA0A8;
    case 423u: goto L_088CA0B8;
    case 424u: goto L_088CA0F4;
    case 425u: goto L_088CA100;
    case 426u: goto L_088CA10C;
    case 427u: goto L_088CA118;
    case 428u: goto L_088CA124;
    case 429u: goto L_088CA134;
    case 430u: goto L_088CA14C;
    case 431u: goto L_088CA154;
    case 432u: goto L_088CA160;
    case 433u: goto L_088CA168;
    case 434u: goto L_088CA174;
    case 435u: goto L_088CA180;
    case 436u: goto L_088CA18C;
    case 437u: goto L_088CA194;
    case 438u: goto L_088CA19C;
    case 439u: goto L_088CA1A8;
    case 440u: goto L_088CA1B4;
    case 441u: goto L_088CA1C4;
    case 442u: goto L_088CA1D0;
    case 443u: goto L_088CA1D4;
    case 444u: goto L_088CA1F8;
    case 445u: goto L_088CA24C;
    case 446u: goto L_088CA258;
    case 447u: goto L_088CA264;
    case 448u: goto L_088CA27C;
    case 449u: goto L_088CA294;
    case 450u: goto L_088CA2AC;
    case 451u: goto L_088CA2B0;
    case 452u: goto L_088CA2C8;
    case 453u: goto L_088CA2CC;
    case 454u: goto L_088CA2E4;
    case 455u: goto L_088CA2E8;
    case 456u: goto L_088CA300;
    case 457u: goto L_088CA304;
    case 458u: goto L_088CA31C;
    case 459u: goto L_088CA320;
    case 460u: goto L_088CA338;
    case 461u: goto L_088CA33C;
    case 462u: goto L_088CA340;
    case 463u: goto L_088CA34C;
    case 464u: goto L_088CA354;
    case 465u: goto L_088CA360;
    case 466u: goto L_088CA390;
    case 467u: goto L_088CA39C;
    case 468u: goto L_088CA3C8;
    case 469u: goto L_088CA3CC;
    case 470u: goto L_088CA3E4;
    case 471u: goto L_088CA3E8;
    case 472u: goto L_088CA400;
    case 473u: goto L_088CA404;
    case 474u: goto L_088CA430;
    case 475u: goto L_088CA434;
    case 476u: goto L_088CA44C;
    case 477u: goto L_088CA450;
    case 478u: goto L_088CA468;
    case 479u: goto L_088CA46C;
    case 480u: goto L_088CA470;
    case 481u: goto L_088CA480;
    case 482u: goto L_088CA49C;
    case 483u: goto L_088CA4C0;
    case 484u: goto L_088CA4E0;
    case 485u: goto L_088CA4EC;
    case 486u: goto L_088CA4F8;
    case 487u: goto L_088CA50C;
    case 488u: goto L_088CA520;
    case 489u: goto L_088CA534;
    case 490u: goto L_088CA544;
    case 491u: goto L_088CA550;
    case 492u: goto L_088CA568;
    case 493u: goto L_088CA57C;
    case 494u: goto L_088CA5A4;
    case 495u: goto L_088CA5B0;
    case 496u: goto L_088CA5BC;
    case 497u: goto L_088CA5EC;
    case 498u: goto L_088CA5F0;
    case 499u: goto L_088CA5FC;
    case 500u: goto L_088CA60C;
    case 501u: goto L_088CA618;
    case 502u: goto L_088CA624;
    case 503u: goto L_088CA654;
    case 504u: goto L_088CA658;
    case 505u: goto L_088CA664;
    case 506u: goto L_088CA674;
    case 507u: goto L_088CA690;
    case 508u: goto L_088CA6C8;
    case 509u: goto L_088CA6D4;
    case 510u: goto L_088CA6E4;
    case 511u: goto L_088CA6FC;
    case 512u: goto L_088CA728;
    case 513u: goto L_088CA734;
    case 514u: goto L_088CA760;
    case 515u: goto L_088CA764;
    case 516u: goto L_088CA770;
    case 517u: goto L_088CA774;
    case 518u: goto L_088CA794;
    case 519u: goto L_088CA7CC;
    case 520u: goto L_088CA7D8;
    case 521u: goto L_088CA7E8;
    case 522u: goto L_088CA800;
    case 523u: goto L_088CA82C;
    case 524u: goto L_088CA838;
    case 525u: goto L_088CA864;
    case 526u: goto L_088CA868;
    case 527u: goto L_088CA874;
    case 528u: goto L_088CA878;
    case 529u: goto L_088CA898;
    case 530u: goto L_088CA8A8;
    case 531u: goto L_088CA8B8;
    case 532u: goto L_088CA8C8;
    case 533u: goto L_088CA8E0;
    case 534u: goto L_088CA8F0;
    case 535u: goto L_088CA908;
    case 536u: goto L_088CA918;
    case 537u: goto L_088CA92C;
    case 538u: goto L_088CA95C;
    case 539u: goto L_088CA96C;
    case 540u: goto L_088CA9BC;
    case 541u: goto L_088CA9C8;
    case 542u: goto L_088CAA08;
    case 543u: goto L_088CAA10;
    case 544u: goto L_088CAA1C;
    case 545u: goto L_088CAA2C;
    case 546u: goto L_088CAA34;
    case 547u: goto L_088CAA54;
    case 548u: goto L_088CAA64;
    case 549u: goto L_088CAA6C;
    case 550u: goto L_088CAA78;
    case 551u: goto L_088CAA88;
    case 552u: goto L_088CAA94;
    case 553u: goto L_088CAAA0;
    case 554u: goto L_088CAAAC;
    case 555u: goto L_088CAAB0;
    case 556u: goto L_088CAABC;
    case 557u: goto L_088CAAC4;
    case 558u: goto L_088CAACC;
    case 559u: goto L_088CAAE4;
    case 560u: goto L_088CAAFC;
    case 561u: goto L_088CAB04;
    case 562u: goto L_088CAB14;
    case 563u: goto L_088CAB30;
    case 564u: goto L_088CAB38;
    case 565u: goto L_088CAB48;
    case 566u: goto L_088CAB50;
    case 567u: goto L_088CAB68;
    case 568u: goto L_088CAB74;
    case 569u: goto L_088CAB84;
    case 570u: goto L_088CAB94;
    case 571u: goto L_088CABA4;
    case 572u: goto L_088CABAC;
    case 573u: goto L_088CABBC;
    case 574u: goto L_088CABC0;
    case 575u: goto L_088CABD4;
    case 576u: goto L_088CABD8;
    case 577u: goto L_088CABE0;
    case 578u: goto L_088CABEC;
    case 579u: goto L_088CABF8;
    case 580u: goto L_088CAC08;
    case 581u: goto L_088CAC10;
    case 582u: goto L_088CAC1C;
    case 583u: goto L_088CAC20;
    case 584u: goto L_088CAC34;
    case 585u: goto L_088CAC3C;
    case 586u: goto L_088CAC50;
    case 587u: goto L_088CAC7C;
    case 588u: goto L_088CACB0;
    case 589u: goto L_088CACEC;
    case 590u: goto L_088CACF8;
    case 591u: goto L_088CAD04;
    case 592u: goto L_088CAD10;
    case 593u: goto L_088CAD1C;
    case 594u: goto L_088CAD28;
    case 595u: goto L_088CAD34;
    case 596u: goto L_088CAD48;
    case 597u: goto L_088CAD54;
    case 598u: goto L_088CAD5C;
    case 599u: goto L_088CAD70;
    case 600u: goto L_088CAD8C;
    case 601u: goto L_088CAD94;
    case 602u: goto L_088CADA0;
    case 603u: goto L_088CADBC;
    case 604u: goto L_088CADCC;
    case 605u: goto L_088CADE8;
    case 606u: goto L_088CAE30;
    case 607u: goto L_088CAE38;
    case 608u: goto L_088CAE44;
    case 609u: goto L_088CAE50;
    case 610u: goto L_088CAE5C;
    case 611u: goto L_088CAE68;
    case 612u: goto L_088CAE78;
    case 613u: goto L_088CAE90;
    case 614u: goto L_088CAE98;
    case 615u: goto L_088CAEA4;
    case 616u: goto L_088CAEAC;
    case 617u: goto L_088CAEB8;
    case 618u: goto L_088CAEC4;
    case 619u: goto L_088CAED0;
    case 620u: goto L_088CAED8;
    case 621u: goto L_088CAEE0;
    case 622u: goto L_088CAEEC;
    case 623u: goto L_088CAEF8;
    case 624u: goto L_088CAF08;
    case 625u: goto L_088CAF14;
    case 626u: goto L_088CAF18;
    case 627u: goto L_088CAF40;
    case 628u: goto L_088CAF60;
    case 629u: goto L_088CAF70;
    case 630u: goto L_088CAF94;
    case 631u: goto L_088CAFA4;
    case 632u: goto L_088CAFB0;
    case 633u: goto L_088CAFC0;
    case 634u: goto L_088CAFD4;
    case 635u: goto L_088CAFEC;
    case 636u: goto L_088CAFFC;
    case 637u: goto L_088CB028;
    case 638u: goto L_088CB034;
    case 639u: goto L_088CB044;
    case 640u: goto L_088CB050;
    case 641u: goto L_088CB058;
    case 642u: goto L_088CB070;
    case 643u: goto L_088CB078;
    case 644u: goto L_088CB088;
    case 645u: goto L_088CB098;
    case 646u: goto L_088CB0B4;
    case 647u: goto L_088CB0BC;
    case 648u: goto L_088CB0C0;
    case 649u: goto L_088CB0C4;
    case 650u: goto L_088CB0E0;
    case 651u: goto L_088CB0EC;
    case 652u: goto L_088CB10C;
    case 653u: goto L_088CB11C;
    case 654u: goto L_088CB140;
    case 655u: goto L_088CB15C;
    case 656u: goto L_088CB170;
    case 657u: goto L_088CB1A4;
    case 658u: goto L_088CB1B0;
    case 659u: goto L_088CB1C0;
    case 660u: goto L_088CB1D0;
    case 661u: goto L_088CB1F0;
    case 662u: goto L_088CB204;
    case 663u: goto L_088CB20C;
    case 664u: goto L_088CB218;
    case 665u: goto L_088CB230;
    case 666u: goto L_088CB234;
    case 667u: goto L_088CB240;
    case 668u: goto L_088CB24C;
    case 669u: goto L_088CB258;
    case 670u: goto L_088CB260;
    case 671u: goto L_088CB278;
    case 672u: goto L_088CB28C;
    case 673u: goto L_088CB2A8;
    case 674u: goto L_088CB2C0;
    case 675u: goto L_088CB2C4;
    case 676u: goto L_088CB2D0;
    case 677u: goto L_088CB2D8;
    case 678u: goto L_088CB2E8;
    case 679u: goto L_088CB2EC;
    case 680u: goto L_088CB2F0;
    case 681u: goto L_088CB318;
    case 682u: goto L_088CB32C;
    case 683u: goto L_088CB33C;
    case 684u: goto L_088CB368;
    case 685u: goto L_088CB378;
    case 686u: goto L_088CB380;
    case 687u: goto L_088CB384;
    case 688u: goto L_088CB390;
    case 689u: goto L_088CB39C;
    case 690u: goto L_088CB3A8;
    case 691u: goto L_088CB3B4;
    case 692u: goto L_088CB3E0;
    case 693u: goto L_088CB3F4;
    case 694u: goto L_088CB3FC;
    case 695u: goto L_088CB404;
    case 696u: goto L_088CB418;
    case 697u: goto L_088CB444;
    case 698u: goto L_088CB44C;
    case 699u: goto L_088CB458;
    case 700u: goto L_088CB474;
    case 701u: goto L_088CB48C;
    case 702u: goto L_088CB490;
    case 703u: goto L_088CB49C;
    case 704u: goto L_088CB4B8;
    case 705u: goto L_088CB4CC;
    case 706u: goto L_088CB4DC;
    case 707u: goto L_088CB4E4;
    case 708u: goto L_088CB4F4;
    case 709u: goto L_088CB514;
    case 710u: goto L_088CB520;
    case 711u: goto L_088CB534;
    case 712u: goto L_088CB554;
    case 713u: goto L_088CB560;
    case 714u: goto L_088CB580;
    case 715u: goto L_088CB584;
    case 716u: goto L_088CB598;
    case 717u: goto L_088CB5A8;
    case 718u: goto L_088CB5BC;
    case 719u: goto L_088CB5D4;
    case 720u: goto L_088CB5EC;
    case 721u: goto L_088CB5F4;
    case 722u: goto L_088CB600;
    case 723u: goto L_088CB62C;
    case 724u: goto L_088CB638;
    case 725u: goto L_088CB648;
    case 726u: goto L_088CB654;
    case 727u: goto L_088CB65C;
    case 728u: goto L_088CB66C;
    case 729u: goto L_088CB67C;
    case 730u: goto L_088CB68C;
    case 731u: goto L_088CB6A8;
    case 732u: goto L_088CB6B0;
    case 733u: goto L_088CB6B4;
    case 734u: goto L_088CB6B8;
    case 735u: goto L_088CB6D4;
    case 736u: goto L_088CB6E4;
    case 737u: goto L_088CB6F4;
    case 738u: goto L_088CB6FC;
    case 739u: goto L_088CB704;
    case 740u: goto L_088CB70C;
    case 741u: goto L_088CB714;
    case 742u: goto L_088CB768;
    case 743u: goto L_088CB778;
    case 744u: goto L_088CB78C;
    case 745u: goto L_088CB794;
    case 746u: goto L_088CB7A0;
    case 747u: goto L_088CB7AC;
    case 748u: goto L_088CB7C0;
    case 749u: goto L_088CB7D4;
    case 750u: goto L_088CB7E8;
    case 751u: goto L_088CB7F8;
    case 752u: goto L_088CB804;
    case 753u: goto L_088CB80C;
    case 754u: goto L_088CB820;
    case 755u: goto L_088CB828;
    case 756u: goto L_088CB83C;
    case 757u: goto L_088CB850;
    case 758u: goto L_088CB864;
    case 759u: goto L_088CB868;
    case 760u: goto L_088CB878;
    case 761u: goto L_088CB884;
    case 762u: goto L_088CB88C;
    case 763u: goto L_088CB894;
    case 764u: goto L_088CB8A8;
    case 765u: goto L_088CB8B0;
    case 766u: goto L_088CB8C4;
    case 767u: goto L_088CB8CC;
    case 768u: goto L_088CB8E0;
    case 769u: goto L_088CB8F4;
    case 770u: goto L_088CB90C;
    case 771u: goto L_088CB92C;
    case 772u: goto L_088CB938;
    case 773u: goto L_088CB948;
    case 774u: goto L_088CB960;
    case 775u: goto L_088CB980;
    case 776u: goto L_088CB988;
    case 777u: goto L_088CB9A8;
    case 778u: goto L_088CB9B4;
    case 779u: goto L_088CB9C8;
    case 780u: goto L_088CB9E4;
    case 781u: goto L_088CBA14;
    case 782u: goto L_088CBA44;
    case 783u: goto L_088CBA74;
    case 784u: goto L_088CBA9C;
    case 785u: goto L_088CBAC4;
    case 786u: goto L_088CBAD8;
    case 787u: goto L_088CBAEC;
    case 788u: goto L_088CBB14;
    case 789u: goto L_088CBB24;
    case 790u: goto L_088CBB48;
    case 791u: goto L_088CBB58;
    case 792u: goto L_088CBB68;
    case 793u: goto L_088CBB74;
    case 794u: goto L_088CBBA0;
    case 795u: goto L_088CBBB8;
    case 796u: goto L_088CBBD0;
    case 797u: goto L_088CBBF0;
    case 798u: goto L_088CBC08;
    case 799u: goto L_088CBC20;
    case 800u: goto L_088CBC34;
    case 801u: goto L_088CBC40;
    case 802u: goto L_088CBC4C;
    case 803u: goto L_088CBC60;
    case 804u: goto L_088CBC70;
    case 805u: goto L_088CBC80;
    case 806u: goto L_088CBCC4;
    case 807u: goto L_088CBCD4;
    case 808u: goto L_088CBCEC;
    case 809u: goto L_088CBD08;
    case 810u: goto L_088CBD18;
    case 811u: goto L_088CBD28;
    case 812u: goto L_088CBD30;
    case 813u: goto L_088CBD38;
    case 814u: goto L_088CBD54;
    case 815u: goto L_088CBD64;
    case 816u: goto L_088CBD88;
    case 817u: goto L_088CBDA0;
    case 818u: goto L_088CBDB4;
    case 819u: goto L_088CBDC0;
    case 820u: goto L_088CBDF8;
    case 821u: goto L_088CBE08;
    case 822u: goto L_088CBE24;
    case 823u: goto L_088CBE34;
    case 824u: goto L_088CBE44;
    case 825u: goto L_088CBE4C;
    case 826u: goto L_088CBE5C;
    case 827u: goto L_088CBE64;
    case 828u: goto L_088CBE6C;
    case 829u: goto L_088CBEB4;
    case 830u: goto L_088CBEC4;
    case 831u: goto L_088CBED4;
    case 832u: goto L_088CBEE4;
    case 833u: goto L_088CBEF0;
    case 834u: goto L_088CBF00;
    case 835u: goto L_088CBF04;
    case 836u: goto L_088CBF1C;
    case 837u: goto L_088CBF24;
    case 838u: goto L_088CBF2C;
    case 839u: goto L_088CBF38;
    case 840u: goto L_088CBF40;
    case 841u: goto L_088CBF48;
    case 842u: goto L_088CBF54;
    case 843u: goto L_088CBF90;
    case 844u: goto L_088CBF94;
    case 845u: goto L_088CBFB0;
    case 846u: goto L_088CBFB4;
    case 847u: goto L_088CBFD0;
    case 848u: goto L_088CBFD4;
    case 849u: goto L_088CBFF0;
    case 850u: goto L_088CBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C8004:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8018;
      }
      goto L_088C8010;
    }
L_088C8010:
    ctx.set_gpr(31, 0x088C8018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C8018u) goto L_088C8018;
    return;
L_088C8018:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C802C;
      }
      goto L_088C8024;
    }
L_088C8024:
    ctx.set_gpr(31, 0x088C802Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C802Cu) goto L_088C802C;
    return;
L_088C802C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8040;
      }
      goto L_088C8038;
    }
L_088C8038:
    ctx.set_gpr(31, 0x088C8040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C8040u) goto L_088C8040;
    return;
L_088C8040:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8054;
      }
      goto L_088C804C;
    }
L_088C804C:
    ctx.set_gpr(31, 0x088C8054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C8054u) goto L_088C8054;
    return;
L_088C8054:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088C805C;
L_088C805C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(528));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C808C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C80F0;
      }
      goto L_088C80E4;
    }
L_088C80E4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8100;
      }
      goto L_088C80F0;
    }
L_088C80F0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C8100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8100u) goto L_088C8100;
    return;
L_088C8100:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C811C;
      }
      goto L_088C8110;
    }
L_088C8110:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C812C;
      }
      goto L_088C811C;
    }
L_088C811C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C812Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C812Cu) goto L_088C812C;
    return;
L_088C812C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C8148;
      }
      goto L_088C813C;
    }
L_088C813C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8158;
      }
      goto L_088C8148;
    }
L_088C8148:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C8158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8158u) goto L_088C8158;
    return;
L_088C8158:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C8174;
      }
      goto L_088C8168;
    }
L_088C8168:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8184;
      }
      goto L_088C8174;
    }
L_088C8174:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C8184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8184u) goto L_088C8184;
    return;
L_088C8184:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C81A0;
      }
      goto L_088C8194;
    }
L_088C8194:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C81B0;
      }
      goto L_088C81A0;
    }
L_088C81A0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C81B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C81B0u) goto L_088C81B0;
    return;
L_088C81B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C81CC;
      }
      goto L_088C81C0;
    }
L_088C81C0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C81DC;
      }
      goto L_088C81CC;
    }
L_088C81CC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C81DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C81DCu) goto L_088C81DC;
    return;
L_088C81DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C81F8;
      }
      goto L_088C81EC;
    }
L_088C81EC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8208;
      }
      goto L_088C81F8;
    }
L_088C81F8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C8208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8208u) goto L_088C8208;
    return;
L_088C8208:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C824C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C825C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C828C;
      }
      goto L_088C8280;
    }
L_088C8280:
    ctx.set_gpr(31, 0x088C8288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x088C8288u) goto L_088C8288;
    return;
L_088C8288:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_088C828C;
L_088C828C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C82A4;
      }
      goto L_088C8298;
    }
L_088C8298:
    ctx.set_gpr(31, 0x088C82A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x088C82A0u) goto L_088C82A0;
    return;
L_088C82A0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    goto L_088C82A4;
L_088C82A4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C82B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C82B4u) goto L_088C82B4;
    return;
L_088C82B4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C82D0;
      }
      goto L_088C82C4;
    }
L_088C82C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C82D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 280u, 0x089DDEA4u>(ctx, &aot_mem) && ctx.pc == 0x088C82D0u) goto L_088C82D0;
    return;
L_088C82D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C82E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C8348;
      }
      goto L_088C8328;
    }
L_088C8328:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C833Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 55u, 0x089E03C0u>(ctx, &aot_mem) && ctx.pc == 0x088C833Cu) goto L_088C833C;
    return;
L_088C833C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8618;
      }
      goto L_088C8348;
    }
L_088C8348:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C84D8;
      }
      goto L_088C8354;
    }
L_088C8354:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C84C8;
      }
      goto L_088C8360;
    }
L_088C8360:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30936));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(111));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8470;
      }
      goto L_088C8384;
    }
L_088C8384:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(71));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8454;
      }
      goto L_088C8390;
    }
L_088C8390:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8454;
      }
      goto L_088C839C;
    }
L_088C839C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C843C;
      }
      goto L_088C83A8;
    }
L_088C83A8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8428;
      }
      goto L_088C83B4;
    }
L_088C83B4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8428;
      }
      goto L_088C83C0;
    }
L_088C83C0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8428;
      }
      goto L_088C83CC;
    }
L_088C83CC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(105));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C83D8;
    }
L_088C83D8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C83E4;
    }
L_088C83E4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8410;
      }
      goto L_088C83F0;
    }
L_088C83F0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(61));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8410;
      }
      goto L_088C83FC;
    }
L_088C83FC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(25));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8410;
      }
      goto L_088C8408;
    }
L_088C8408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C8410;
    }
L_088C8410:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C841C;
    }
L_088C841C:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C8428;
    }
L_088C8428:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C8430;
    }
L_088C8430:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C843C;
    }
L_088C843C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C8448;
    }
L_088C8448:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C8454;
    }
L_088C8454:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(67))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C8464;
    }
L_088C8464:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C8470;
    }
L_088C8470:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C8480;
      }
      goto L_088C847C;
    }
L_088C847C:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088C8480;
L_088C8480:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C84A0;
      }
      goto L_088C8488;
    }
L_088C8488:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088C849C;
      }
      goto L_088C8490;
    }
L_088C8490:
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8618;
      }
      goto L_088C849C;
    }
L_088C849C:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_088C84A0;
L_088C84A0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C84BC;
      }
      goto L_088C84B4;
    }
L_088C84B4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088C84BC;
L_088C84BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C84B4;
      }
      goto L_088C84C8;
    }
L_088C84C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8360;
      }
      goto L_088C84D0;
    }
L_088C84D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8618;
      }
      goto L_088C84D8;
    }
L_088C84D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8618;
      }
      goto L_088C84E4;
    }
L_088C84E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(18, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C855C;
      }
      goto L_088C8504;
    }
L_088C8504:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C854C;
      }
      goto L_088C8510;
    }
L_088C8510:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C853C;
      }
      goto L_088C851C;
    }
L_088C851C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C852C;
      }
      goto L_088C8524;
    }
L_088C8524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C855C;
      }
      goto L_088C852C;
    }
L_088C852C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C860C;
      }
      goto L_088C853C;
    }
L_088C853C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C860C;
      }
      goto L_088C854C;
    }
L_088C854C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C860C;
      }
      goto L_088C855C;
    }
L_088C855C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C860C;
      }
      goto L_088C856C;
    }
L_088C856C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C8580u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C8580u) goto L_088C8580;
    return;
L_088C8580:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C8608;
      }
      goto L_088C8588;
    }
L_088C8588:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088C8604;
      }
      goto L_088C8590;
    }
L_088C8590:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C85F4;
      }
      goto L_088C859C;
    }
L_088C859C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C85E4;
      }
      goto L_088C85A8;
    }
L_088C85A8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C85D4;
      }
      goto L_088C85B0;
    }
L_088C85B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C85C4;
      }
      goto L_088C85BC;
    }
L_088C85BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C85F4;
      }
      goto L_088C85C4;
    }
L_088C85C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8618;
      }
      goto L_088C85D4;
    }
L_088C85D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8618;
      }
      goto L_088C85E4;
    }
L_088C85E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8618;
      }
      goto L_088C85F4;
    }
L_088C85F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8618;
      }
      goto L_088C8604;
    }
L_088C8604:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_088C8608;
L_088C8608:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    goto L_088C860C;
L_088C860C:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C856C;
      }
      goto L_088C8618;
    }
L_088C8618:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_088C8648:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x088C8674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 542u, 0x089DBFB8u>(ctx, &aot_mem) && ctx.pc == 0x088C8674u) goto L_088C8674;
    return;
L_088C8674:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C8684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 541u, 0x089DBF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8684u) goto L_088C8684;
    return;
L_088C8684:
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
L_088C869C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(864)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(868)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C86C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C86C8u) goto L_088C86C8;
    return;
L_088C86C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C86D8:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C86E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088C8714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088C8714u) goto L_088C8714;
    return;
L_088C8714:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x088C873Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C873Cu) goto L_088C873C;
    return;
L_088C873C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C874Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C874Cu) goto L_088C874C;
    return;
L_088C874C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C8768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C8778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8778u) goto L_088C8778;
    return;
L_088C8778:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8788:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C87A4;
      }
      goto L_088C8798;
    }
L_088C8798:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088C87A4;
L_088C87A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C87AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C87BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C87D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088C87D4u) goto L_088C87D4;
    return;
L_088C87D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C87E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C87FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088C87FCu) goto L_088C87FC;
    return;
L_088C87FC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C880Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088C880Cu) goto L_088C880C;
    return;
L_088C880C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C8830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 452u, 0x088C65E8u>(ctx, &aot_mem) && ctx.pc == 0x088C8830u) goto L_088C8830;
    return;
L_088C8830:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8840:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25764)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8854:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25764)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C8890u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C8890u) goto L_088C8890;
    return;
L_088C8890:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C88A8;
      }
      goto L_088C889C;
    }
L_088C889C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C88D4;
      }
      goto L_088C88A8;
    }
L_088C88A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C88B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 458u, 0x088C6654u>(ctx, &aot_mem) && ctx.pc == 0x088C88B8u) goto L_088C88B8;
    return;
L_088C88B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C88CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C88CCu) goto L_088C88CC;
    return;
L_088C88CC:
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    goto L_088C88D4;
L_088C88D4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8900;
      }
      goto L_088C88DC;
    }
L_088C88DC:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25764)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088C8900;
L_088C8900:
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
L_088C8918:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C8940u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C8940u) goto L_088C8940;
    return;
L_088C8940:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C8958;
      }
      goto L_088C894C;
    }
L_088C894C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8984;
      }
      goto L_088C8958;
    }
L_088C8958:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C8968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 458u, 0x088C6654u>(ctx, &aot_mem) && ctx.pc == 0x088C8968u) goto L_088C8968;
    return;
L_088C8968:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C897Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C897Cu) goto L_088C897C;
    return;
L_088C897C:
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    goto L_088C8984;
L_088C8984:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C89BC;
      }
      goto L_088C898C;
    }
L_088C898C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25764)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088C89BC;
L_088C89BC:
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
L_088C89D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25764)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8A88;
      }
      goto L_088C89F0;
    }
L_088C89F0:
    ctx.set_gpr(31, 0x088C89F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 227u, 0x0893CE8Cu>(ctx, &aot_mem) && ctx.pc == 0x088C89F8u) goto L_088C89F8;
    return;
L_088C89F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C8A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C8A04u) goto L_088C8A04;
    return;
L_088C8A04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C8A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 146u, 0x08998DA0u>(ctx, &aot_mem) && ctx.pc == 0x088C8A10u) goto L_088C8A10;
    return;
L_088C8A10:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25764));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C8A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8A24u) goto L_088C8A24;
    return;
L_088C8A24:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8A80;
      }
      goto L_088C8A30;
    }
L_088C8A30:
    ctx.set_gpr(31, 0x088C8A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 227u, 0x0893CE8Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8A38u) goto L_088C8A38;
    return;
L_088C8A38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C8A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C8A44u) goto L_088C8A44;
    return;
L_088C8A44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C8A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 121u, 0x08998B28u>(ctx, &aot_mem) && ctx.pc == 0x088C8A50u) goto L_088C8A50;
    return;
L_088C8A50:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25764)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C8A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088C8A68u) goto L_088C8A68;
    return;
L_088C8A68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8A7C;
      }
      goto L_088C8A74;
    }
L_088C8A74:
    ctx.set_gpr(31, 0x088C8A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C8A7Cu) goto L_088C8A7C;
    return;
L_088C8A7C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088C8A80;
L_088C8A80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C8A30;
      }
      goto L_088C8A88;
    }
L_088C8A88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8A9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25764)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8AC8;
      }
      goto L_088C8AB4;
    }
L_088C8AB4:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25764));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C8AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C8AC8u) goto L_088C8AC8;
    return;
L_088C8AC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8AD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8AE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8AEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8B30;
      }
      goto L_088C8B08;
    }
L_088C8B08:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C8B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088C8B14u) goto L_088C8B14;
    return;
L_088C8B14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8B28;
      }
      goto L_088C8B1C;
    }
L_088C8B1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C8B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088C8B28u) goto L_088C8B28;
    return;
L_088C8B28:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088C8B30;
L_088C8B30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C8B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088C8B44u) goto L_088C8B44;
    return;
L_088C8B44:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25796)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8B78;
      }
      goto L_088C8B5C;
    }
L_088C8B5C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8B78;
      }
      goto L_088C8B74;
    }
L_088C8B74:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088C8B78;
L_088C8B78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8BA4;
      }
      goto L_088C8B80;
    }
L_088C8B80:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8BA4;
      }
      goto L_088C8B98;
    }
L_088C8B98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C8BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8BA4u) goto L_088C8BA4;
    return;
L_088C8BA4:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25796), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8BE4;
      }
      goto L_088C8BBC;
    }
L_088C8BBC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C8BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088C8BC8u) goto L_088C8BC8;
    return;
L_088C8BC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8BDC;
      }
      goto L_088C8BD0;
    }
L_088C8BD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C8BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088C8BDCu) goto L_088C8BDC;
    return;
L_088C8BDC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088C8BE4;
L_088C8BE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C8BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088C8BF8u) goto L_088C8BF8;
    return;
L_088C8BF8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25812)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8C2C;
      }
      goto L_088C8C10;
    }
L_088C8C10:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8C2C;
      }
      goto L_088C8C28;
    }
L_088C8C28:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088C8C2C;
L_088C8C2C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8C58;
      }
      goto L_088C8C34;
    }
L_088C8C34:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C8C58;
      }
      goto L_088C8C4C;
    }
L_088C8C4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C8C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8C58u) goto L_088C8C58;
    return;
L_088C8C58:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25812), ctx.gpr[16]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20056), ctx.gpr[4]);
    ctx.set_gpr(3, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20060), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8C88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C8CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 56u, 0x089DC68Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8CB0u) goto L_088C8CB0;
    return;
L_088C8CB0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x088C8CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 54u, 0x089DC674u>(ctx, &aot_mem) && ctx.pc == 0x088C8CC0u) goto L_088C8CC0;
    return;
L_088C8CC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C8CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 58u, 0x089DC6A0u>(ctx, &aot_mem) && ctx.pc == 0x088C8CD0u) goto L_088C8CD0;
    return;
L_088C8CD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088C8CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 62u, 0x089DC714u>(ctx, &aot_mem) && ctx.pc == 0x088C8CE0u) goto L_088C8CE0;
    return;
L_088C8CE0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x088C8CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 64u, 0x089DC738u>(ctx, &aot_mem) && ctx.pc == 0x088C8CF0u) goto L_088C8CF0;
    return;
L_088C8CF0:
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
L_088C8D08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(992)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C8D38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C8D38u) goto L_088C8D38;
    return;
L_088C8D38:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(984)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C8D50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C8D50u) goto L_088C8D50;
    return;
L_088C8D50:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1000)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C8D6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C8D6Cu) goto L_088C8D6C;
    return;
L_088C8D6C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1016)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C8DA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C8DA0u) goto L_088C8DA0;
    return;
L_088C8DA0:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1008)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C8DB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C8DB8u) goto L_088C8DB8;
    return;
L_088C8DB8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8DDC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8DEC:
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8DFC:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8E18:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8E24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8E30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C8E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088C8E58u) goto L_088C8E58;
    return;
L_088C8E58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25164)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C8EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C8EBCu) goto L_088C8EBC;
    return;
L_088C8EBC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C8ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C8ECCu) goto L_088C8ECC;
    return;
L_088C8ECC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C8EE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C8EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8EF8u) goto L_088C8EF8;
    return;
L_088C8EF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8F08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C8F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 50u, 0x089DC5F4u>(ctx, &aot_mem) && ctx.pc == 0x088C8F24u) goto L_088C8F24;
    return;
L_088C8F24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8F34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(976)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C8F58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C8F58u) goto L_088C8F58;
    return;
L_088C8F58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C8F70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C8F70u) goto L_088C8F70;
    return;
L_088C8F70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8F84:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8F90:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8F9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C8FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C8FD4u) goto L_088C8FD4;
    return;
L_088C8FD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C8FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C8FE4u) goto L_088C8FE4;
    return;
L_088C8FE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C9000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C9010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9010u) goto L_088C9010;
    return;
L_088C9010:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    ctx.set_gpr(31, 0x088C904Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C904Cu) goto L_088C904C;
    return;
L_088C904C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C905Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 901u, 0x08943F4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C905Cu) goto L_088C905C;
    return;
L_088C905C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9078;
      }
      goto L_088C906C;
    }
L_088C906C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088C9078;
L_088C9078:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C908C;
      }
      goto L_088C9084;
    }
L_088C9084:
    ctx.set_gpr(31, 0x088C908Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C908Cu) goto L_088C908C;
    return;
L_088C908C:
    ctx.set_gpr(2, 0u + 0u);
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
L_088C90A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C90BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C90BCu) goto L_088C90BC;
    return;
L_088C90BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C90CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C90D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(10, ctx.gpr[8] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9108u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9108u) goto L_088C9108;
    return;
L_088C9108:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9118:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9144;
      }
      goto L_088C9134;
    }
L_088C9134:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9144u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9144u) goto L_088C9144;
    return;
L_088C9144:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9160;
      }
      goto L_088C9150;
    }
L_088C9150:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9160u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9160u) goto L_088C9160;
    return;
L_088C9160:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C9170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C9170u) goto L_088C9170;
    return;
L_088C9170:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9184:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C918C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C91B0;
      }
      goto L_088C9198;
    }
L_088C9198:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C91B4;
      }
      goto L_088C91B0;
    }
L_088C91B0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088C91B4;
L_088C91B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C91BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C91CCu);
    // nop
    goto L_088C90CC;
L_088C91CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C91DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9264;
      }
      goto L_088C9218;
    }
L_088C9218:
    ctx.set_gpr(31, 0x088C9220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9220u) goto L_088C9220;
    return;
L_088C9220:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C922Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 421u, 0x0898E544u>(ctx, &aot_mem) && ctx.pc == 0x088C922Cu) goto L_088C922C;
    return;
L_088C922C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C923Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C923Cu) goto L_088C923C;
    return;
L_088C923C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9264;
      }
      goto L_088C925C;
    }
L_088C925C:
    ctx.set_gpr(31, 0x088C9264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088C9264u) goto L_088C9264;
    return;
L_088C9264:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9288u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9288u) goto L_088C9288;
    return;
L_088C9288:
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
L_088C92AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25092)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C9384;
      }
      goto L_088C92D0;
    }
L_088C92D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9384;
      }
      goto L_088C92DC;
    }
L_088C92DC:
    ctx.set_gpr(31, 0x088C92E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x088C92E4u) goto L_088C92E4;
    return;
L_088C92E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C92F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 705u, 0x0898FEA0u>(ctx, &aot_mem) && ctx.pc == 0x088C92F0u) goto L_088C92F0;
    return;
L_088C92F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C9304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C9304u) goto L_088C9304;
    return;
L_088C9304:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9318;
      }
      goto L_088C9310;
    }
L_088C9310:
    ctx.set_gpr(31, 0x088C9318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C9318u) goto L_088C9318;
    return;
L_088C9318:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C933Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C933Cu) goto L_088C933C;
    return;
L_088C933C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9370;
      }
      goto L_088C9348;
    }
L_088C9348:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C9358u);
    // nop
    goto L_088C918C;
L_088C9358:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C936Cu);
    // nop
    goto L_088CA08C;
L_088C936C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088C9370;
L_088C9370:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9348;
      }
      goto L_088C9384;
    }
L_088C9384:
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
L_088C939C:
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
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C93DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 118u, 0x089D0868u>(ctx, &aot_mem) && ctx.pc == 0x088C93DCu) goto L_088C93DC;
    return;
L_088C93DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25816)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25820)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25816), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25820), ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9434;
      }
      goto L_088C9424;
    }
L_088C9424:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088C9434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 137u, 0x089D09BCu>(ctx, &aot_mem) && ctx.pc == 0x088C9434u) goto L_088C9434;
    return;
L_088C9434:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9520;
      }
      goto L_088C943C;
    }
L_088C943C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088C9458;
      }
      goto L_088C9448;
    }
L_088C9448:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9480;
      }
      goto L_088C9458;
    }
L_088C9458:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C9470;
      }
      goto L_088C9464;
    }
L_088C9464:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9480;
      }
      goto L_088C9470;
    }
L_088C9470:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C9550;
      }
      goto L_088C947C;
    }
L_088C947C:
    ctx.set_gpr(22, ctx.gpr[17] + 0u);
    goto L_088C9480;
L_088C9480:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C949C;
      }
      goto L_088C948C;
    }
L_088C948C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9500;
      }
      goto L_088C9494;
    }
L_088C9494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C94D4;
      }
      goto L_088C949C;
    }
L_088C949C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C94B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C94B4u) goto L_088C94B4;
    return;
L_088C94B4:
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C94CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 199u, 0x089D10BCu>(ctx, &aot_mem) && ctx.pc == 0x088C94CCu) goto L_088C94CC;
    return;
L_088C94CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9500;
      }
      goto L_088C94D4;
    }
L_088C94D4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C94E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 141u, 0x089D09F8u>(ctx, &aot_mem) && ctx.pc == 0x088C94E4u) goto L_088C94E4;
    return;
L_088C94E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x088C9500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 227u, 0x089D13B4u>(ctx, &aot_mem) && ctx.pc == 0x088C9500u) goto L_088C9500;
    return;
L_088C9500:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9538;
      }
      goto L_088C9508;
    }
L_088C9508:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C9518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 141u, 0x089D09F8u>(ctx, &aot_mem) && ctx.pc == 0x088C9518u) goto L_088C9518;
    return;
L_088C9518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9538;
      }
      goto L_088C9520;
    }
L_088C9520:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C9538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 199u, 0x089D10BCu>(ctx, &aot_mem) && ctx.pc == 0x088C9538u) goto L_088C9538;
    return;
L_088C9538:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9550;
      }
      goto L_088C9540;
    }
L_088C9540:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C9550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 137u, 0x089D09BCu>(ctx, &aot_mem) && ctx.pc == 0x088C9550u) goto L_088C9550;
    return;
L_088C9550:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(868)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9564u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9564u) goto L_088C9564;
    return;
L_088C9564:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C95AC;
      }
      goto L_088C956C;
    }
L_088C956C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25832)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C95AC;
      }
      goto L_088C9580;
    }
L_088C9580:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25824)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25828)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25824), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25828), ctx.gpr[4]);
    goto L_088C95AC;
L_088C95AC:
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
L_088C95DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C9628;
      }
      goto L_088C9610;
    }
L_088C9610:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C9628;
      }
      goto L_088C961C;
    }
L_088C961C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C96B8;
      }
      goto L_088C9628;
    }
L_088C9628:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C96B8;
      }
      goto L_088C9634;
    }
L_088C9634:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9680;
      }
      goto L_088C9640;
    }
L_088C9640:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C964Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x088C964Cu) goto L_088C964C;
    return;
L_088C964C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C9658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 705u, 0x0898FEA0u>(ctx, &aot_mem) && ctx.pc == 0x088C9658u) goto L_088C9658;
    return;
L_088C9658:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C966Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C966Cu) goto L_088C966C;
    return;
L_088C966C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9680;
      }
      goto L_088C9678;
    }
L_088C9678:
    ctx.set_gpr(31, 0x088C9680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C9680u) goto L_088C9680;
    return;
L_088C9680:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C96F0;
      }
      goto L_088C9694;
    }
L_088C9694:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C96B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C96B0u) goto L_088C96B0;
    return;
L_088C96B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C96F0;
      }
      goto L_088C96B8;
    }
L_088C96B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C96F0;
      }
      goto L_088C96C4;
    }
L_088C96C4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C96E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C96E0u) goto L_088C96E0;
    return;
L_088C96E0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C96F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C96F0u) goto L_088C96F0;
    return;
L_088C96F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C970C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
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
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(30, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    ctx.set_gpr(17, ctx.gpr[11] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x088C976Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x088C976Cu) goto L_088C976C;
    return;
L_088C976C:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C979C;
      }
      goto L_088C977C;
    }
L_088C977C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C979C;
      }
      goto L_088C978C;
    }
L_088C978C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C97AC;
      }
      goto L_088C979C;
    }
L_088C979C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_088C97AC;
L_088C97AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C97DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C97DCu) goto L_088C97DC;
    return;
L_088C97DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C9984;
      }
      goto L_088C97EC;
    }
L_088C97EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C98D4;
      }
      goto L_088C97F8;
    }
L_088C97F8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9814u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9814u) goto L_088C9814;
    return;
L_088C9814:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C98BC;
      }
      goto L_088C9828;
    }
L_088C9828:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[30] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x088C9880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 393u, 0x089F9C28u>(ctx, &aot_mem) && ctx.pc == 0x088C9880u) goto L_088C9880;
    return;
L_088C9880:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C98B4;
      }
      goto L_088C9894;
    }
L_088C9894:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C98B4;
      }
      goto L_088C98A4;
    }
L_088C98A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9CFC;
      }
      goto L_088C98B4;
    }
L_088C98B4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    goto L_088C98BC;
L_088C98BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9828;
      }
      goto L_088C98CC;
    }
L_088C98CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9CFC;
      }
      goto L_088C98D4;
    }
L_088C98D4:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C996C;
      }
      goto L_088C98E4;
    }
L_088C98E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[30] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x088C9930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 393u, 0x089F9C28u>(ctx, &aot_mem) && ctx.pc == 0x088C9930u) goto L_088C9930;
    return;
L_088C9930:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C9964;
      }
      goto L_088C9944;
    }
L_088C9944:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9964;
      }
      goto L_088C9954;
    }
L_088C9954:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9CFC;
      }
      goto L_088C9964;
    }
L_088C9964:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    goto L_088C996C;
L_088C996C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C98E4;
      }
      goto L_088C997C;
    }
L_088C997C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9CFC;
      }
      goto L_088C9984;
    }
L_088C9984:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C9CFC;
      }
      goto L_088C9990;
    }
L_088C9990:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B84;
      }
      goto L_088C999C;
    }
L_088C999C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C99B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C99B8u) goto L_088C99B8;
    return;
L_088C99B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B6C;
      }
      goto L_088C99CC;
    }
L_088C99CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C99E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C99E4u) goto L_088C99E4;
    return;
L_088C99E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B48;
      }
      goto L_088C9A00;
    }
L_088C9A00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9A84;
      }
      goto L_088C9A14;
    }
L_088C9A14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[22] << 1u);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[30] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x088C9A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 393u, 0x089F9C28u>(ctx, &aot_mem) && ctx.pc == 0x088C9A7Cu) goto L_088C9A7C;
    return;
L_088C9A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9AEC;
      }
      goto L_088C9A84;
    }
L_088C9A84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, ctx.gpr[22] << 1u);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[30] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x088C9AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 393u, 0x089F9C28u>(ctx, &aot_mem) && ctx.pc == 0x088C9AECu) goto L_088C9AEC;
    return;
L_088C9AEC:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C9B3C;
      }
      goto L_088C9B00;
    }
L_088C9B00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B2C;
      }
      goto L_088C9B10;
    }
L_088C9B10:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C9B3C;
      }
      goto L_088C9B18;
    }
L_088C9B18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B3C;
      }
      goto L_088C9B2C;
    }
L_088C9B2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9CFC;
      }
      goto L_088C9B3C;
    }
L_088C9B3C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[22] + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088C9B48;
L_088C9B48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9A00;
      }
      goto L_088C9B58;
    }
L_088C9B58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088C9B6C;
L_088C9B6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C99CC;
      }
      goto L_088C9B7C;
    }
L_088C9B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9CFC;
      }
      goto L_088C9B84;
    }
L_088C9B84:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9CEC;
      }
      goto L_088C9B94;
    }
L_088C9B94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9BACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9BACu) goto L_088C9BAC;
    return;
L_088C9BAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9CC8;
      }
      goto L_088C9BC8;
    }
L_088C9BC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9C28;
      }
      goto L_088C9BDC;
    }
L_088C9BDC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[30] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x088C9C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 393u, 0x089F9C28u>(ctx, &aot_mem) && ctx.pc == 0x088C9C20u) goto L_088C9C20;
    return;
L_088C9C20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9C6C;
      }
      goto L_088C9C28;
    }
L_088C9C28:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[30] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x088C9C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 393u, 0x089F9C28u>(ctx, &aot_mem) && ctx.pc == 0x088C9C6Cu) goto L_088C9C6C;
    return;
L_088C9C6C:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C9CBC;
      }
      goto L_088C9C80;
    }
L_088C9C80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9CAC;
      }
      goto L_088C9C90;
    }
L_088C9C90:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C9CBC;
      }
      goto L_088C9C98;
    }
L_088C9C98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9CBC;
      }
      goto L_088C9CAC;
    }
L_088C9CAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9CFC;
      }
      goto L_088C9CBC;
    }
L_088C9CBC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[22] + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088C9CC8;
L_088C9CC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9BC8;
      }
      goto L_088C9CD8;
    }
L_088C9CD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088C9CEC;
L_088C9CEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B94;
      }
      goto L_088C9CFC;
    }
L_088C9CFC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9D24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9D24u) goto L_088C9D24;
    return;
L_088C9D24:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9D50;
      }
      goto L_088C9D2C;
    }
L_088C9D2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9D50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9D50u) goto L_088C9D50;
    return;
L_088C9D50:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9D88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088C9DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9DB8u) goto L_088C9DB8;
    return;
L_088C9DB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9DDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9DDCu) goto L_088C9DDC;
    return;
L_088C9DDC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9E78;
      }
      goto L_088C9DEC;
    }
L_088C9DEC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C9E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 143u, 0x08A01F84u>(ctx, &aot_mem) && ctx.pc == 0x088C9E04u) goto L_088C9E04;
    return;
L_088C9E04:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32416)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C9E6C;
      }
      goto L_088C9E3C;
    }
L_088C9E3C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088C9E6C;
L_088C9E6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088C9E78;
L_088C9E78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9DEC;
      }
      goto L_088C9E88;
    }
L_088C9E88:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9EA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9EA4u) goto L_088C9EA4;
    return;
L_088C9EA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9EC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9EFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9EFCu) goto L_088C9EFC;
    return;
L_088C9EFC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9FD8;
      }
      goto L_088C9F0C;
    }
L_088C9F0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x088C9F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9F18u) goto L_088C9F18;
    return;
L_088C9F18:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9F48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9F48u) goto L_088C9F48;
    return;
L_088C9F48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C9F78;
      }
      goto L_088C9F58;
    }
L_088C9F58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x088C9F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 147u, 0x08A02034u>(ctx, &aot_mem) && ctx.pc == 0x088C9F70u) goto L_088C9F70;
    return;
L_088C9F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9FBC;
      }
      goto L_088C9F78;
    }
L_088C9F78:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9FAC;
      }
      goto L_088C9F88;
    }
L_088C9F88:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C9FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 147u, 0x08A02034u>(ctx, &aot_mem) && ctx.pc == 0x088C9FA0u) goto L_088C9FA0;
    return;
L_088C9FA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088C9FAC;
L_088C9FAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9F88;
      }
      goto L_088C9FBC;
    }
L_088C9FBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C9FD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9FD8u) goto L_088C9FD8;
    return;
L_088C9FD8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088C9FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x088C9FE4u) goto L_088C9FE4;
    return;
L_088C9FE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088C9FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x088C9FF4u) goto L_088C9FF4;
    return;
L_088C9FF4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088CA000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 725u, 0x089FF93Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA000u) goto L_088CA000;
    return;
L_088CA000:
    ctx.set_gpr(3, ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA020;
      }
      goto L_088CA00C;
    }
L_088CA00C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088CA020u);
    // nop
    goto L_088C9D88;
L_088CA020:
    ctx.set_gpr(3, 64u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA044;
      }
      goto L_088CA030;
    }
L_088CA030:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088CA044u);
    // nop
    goto L_088C9D88;
L_088CA044:
    ctx.set_gpr(3, 128u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA068;
      }
      goto L_088CA054;
    }
L_088CA054:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088CA068u);
    // nop
    goto L_088C9D88;
L_088CA068:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA08C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA0A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA0A8u) goto L_088CA0A8;
    return;
L_088CA0A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA0B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA100;
      }
      goto L_088CA0F4;
    }
L_088CA0F4:
    ctx.set_gpr(18, ctx.gpr[2] - ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA1D4;
      }
      goto L_088CA100;
    }
L_088CA100:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CA124;
      }
      goto L_088CA10C;
    }
L_088CA10C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CA124;
      }
      goto L_088CA118;
    }
L_088CA118:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CA168;
      }
      goto L_088CA124;
    }
L_088CA124:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA154;
      }
      goto L_088CA134;
    }
L_088CA134:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA14Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA14Cu) goto L_088CA14C;
    return;
L_088CA14C:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088CA154;
L_088CA154:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA134;
      }
      goto L_088CA160;
    }
L_088CA160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA1D4;
      }
      goto L_088CA168;
    }
L_088CA168:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CA1C4;
      }
      goto L_088CA174;
    }
L_088CA174:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CA1B4;
      }
      goto L_088CA180;
    }
L_088CA180:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CA1A8;
      }
      goto L_088CA18C;
    }
L_088CA18C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA19C;
      }
      goto L_088CA194;
    }
L_088CA194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA1D0;
      }
      goto L_088CA19C;
    }
L_088CA19C:
    ctx.set_gpr(18, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA1D4;
      }
      goto L_088CA1A8;
    }
L_088CA1A8:
    ctx.set_gpr(18, ctx.gpr[16] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA1D4;
      }
      goto L_088CA1B4;
    }
L_088CA1B4:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA1D4;
      }
      goto L_088CA1C4;
    }
L_088CA1C4:
    ctx.set_gpr(18, ctx.gpr[16] << 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA1D4;
      }
      goto L_088CA1D0;
    }
L_088CA1D0:
    ctx.set_gpr(18, 0u + 0u);
    goto L_088CA1D4;
L_088CA1D4:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_088CA1F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32424)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32420)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA354;
      }
      goto L_088CA24C;
    }
L_088CA24C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA354;
      }
      goto L_088CA258;
    }
L_088CA258:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA340;
      }
      goto L_088CA264;
    }
L_088CA264:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA27Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA27Cu) goto L_088CA27C;
    return;
L_088CA27C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA294u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA294u) goto L_088CA294;
    return;
L_088CA294:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA2B0;
      }
      goto L_088CA2AC;
    }
L_088CA2AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA2B0;
L_088CA2B0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA2CC;
      }
      goto L_088CA2C8;
    }
L_088CA2C8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA2CC;
L_088CA2CC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA2E8;
      }
      goto L_088CA2E4;
    }
L_088CA2E4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA2E8;
L_088CA2E8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA304;
      }
      goto L_088CA300;
    }
L_088CA300:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA304;
L_088CA304:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA320;
      }
      goto L_088CA31C;
    }
L_088CA31C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA320;
L_088CA320:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA33C;
      }
      goto L_088CA338;
    }
L_088CA338:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA33C;
L_088CA33C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088CA340;
L_088CA340:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA264;
      }
      goto L_088CA34C;
    }
L_088CA34C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA49C;
      }
      goto L_088CA354;
    }
L_088CA354:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088CA360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA360u) goto L_088CA360;
    return;
L_088CA360:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA390u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA390u) goto L_088CA390;
    return;
L_088CA390:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA470;
      }
      goto L_088CA39C;
    }
L_088CA39C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA3CC;
      }
      goto L_088CA3C8;
    }
L_088CA3C8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA3CC;
L_088CA3CC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA3E8;
      }
      goto L_088CA3E4;
    }
L_088CA3E4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA3E8;
L_088CA3E8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA404;
      }
      goto L_088CA400;
    }
L_088CA400:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA404;
L_088CA404:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA434;
      }
      goto L_088CA430;
    }
L_088CA430:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA434;
L_088CA434:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA450;
      }
      goto L_088CA44C;
    }
L_088CA44C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA450;
L_088CA450:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CA46C;
      }
      goto L_088CA468;
    }
L_088CA468:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CA46C;
L_088CA46C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_088CA470;
L_088CA470:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA39C;
      }
      goto L_088CA480;
    }
L_088CA480:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA49Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA49Cu) goto L_088CA49C;
    return;
L_088CA49C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA4C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088CA4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088CA4E0u) goto L_088CA4E0;
    return;
L_088CA4E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA4F8;
      }
      goto L_088CA4EC;
    }
L_088CA4EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA674;
      }
      goto L_088CA4F8;
    }
L_088CA4F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA50Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA50Cu) goto L_088CA50C;
    return;
L_088CA50C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA534;
      }
      goto L_088CA520;
    }
L_088CA520:
    ctx.set_gpr(2, 64u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA544;
      }
      goto L_088CA534;
    }
L_088CA534:
    ctx.set_gpr(2, 65471u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_088CA544;
L_088CA544:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA568;
      }
      goto L_088CA550;
    }
L_088CA550:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 128u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA57C;
      }
      goto L_088CA568;
    }
L_088CA568:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 65407u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_088CA57C;
L_088CA57C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA5A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA5A4u) goto L_088CA5A4;
    return;
L_088CA5A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA60C;
      }
      goto L_088CA5B0;
    }
L_088CA5B0:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA5F0;
      }
      goto L_088CA5BC;
    }
L_088CA5BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA5ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA5ECu) goto L_088CA5EC;
    return;
L_088CA5EC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088CA5F0;
L_088CA5F0:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA5BC;
      }
      goto L_088CA5FC;
    }
L_088CA5FC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CA60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CA60Cu) goto L_088CA60C;
    return;
L_088CA60C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA674;
      }
      goto L_088CA618;
    }
L_088CA618:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA658;
      }
      goto L_088CA624;
    }
L_088CA624:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA654u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA654u) goto L_088CA654;
    return;
L_088CA654:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088CA658;
L_088CA658:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA624;
      }
      goto L_088CA664;
    }
L_088CA664:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CA674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CA674u) goto L_088CA674;
    return;
L_088CA674:
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
L_088CA690:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA6D4;
      }
      goto L_088CA6C8;
    }
L_088CA6C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA774;
      }
      goto L_088CA6D4;
    }
L_088CA6D4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA6E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA6E4u) goto L_088CA6E4;
    return;
L_088CA6E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.set_gpr(3, 128u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA728;
      }
      goto L_088CA6FC;
    }
L_088CA6FC:
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA728u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA728u) goto L_088CA728;
    return;
L_088CA728:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA764;
      }
      goto L_088CA734;
    }
L_088CA734:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA760u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA760u) goto L_088CA760;
    return;
L_088CA760:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088CA764;
L_088CA764:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA734;
      }
      goto L_088CA770;
    }
L_088CA770:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088CA774;
L_088CA774:
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
L_088CA794:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA7D8;
      }
      goto L_088CA7CC;
    }
L_088CA7CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA878;
      }
      goto L_088CA7D8;
    }
L_088CA7D8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA7E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA7E8u) goto L_088CA7E8;
    return;
L_088CA7E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.set_gpr(3, 64u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA82C;
      }
      goto L_088CA800;
    }
L_088CA800:
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA82Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA82Cu) goto L_088CA82C;
    return;
L_088CA82C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA868;
      }
      goto L_088CA838;
    }
L_088CA838:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA864u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA864u) goto L_088CA864;
    return;
L_088CA864:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088CA868;
L_088CA868:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA838;
      }
      goto L_088CA874;
    }
L_088CA874:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088CA878;
L_088CA878:
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
L_088CA898:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CA8A8u);
    // nop
    goto L_088C9118;
L_088CA8A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA8B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA8C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088CA8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA8E0u) goto L_088CA8E0;
    return;
L_088CA8E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA8F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088CA908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088CA908u) goto L_088CA908;
    return;
L_088CA908:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CA918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA918u) goto L_088CA918;
    return;
L_088CA918:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA92C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA95Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA95Cu) goto L_088CA95C;
    return;
L_088CA95C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA96C:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CA9BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA9BCu) goto L_088CA9BC;
    return;
L_088CA9BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAC20;
      }
      goto L_088CA9C8;
    }
L_088CA9C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25816)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25820)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25816), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25820), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CAA34;
      }
      goto L_088CAA08;
    }
L_088CAA08:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAA34;
      }
      goto L_088CAA10;
    }
L_088CAA10:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAA34;
      }
      goto L_088CAA1C;
    }
L_088CAA1C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x088CAA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 374u, 0x089DE970u>(ctx, &aot_mem) && ctx.pc == 0x088CAA2Cu) goto L_088CAA2C;
    return;
L_088CAA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAC20;
      }
      goto L_088CAA34;
    }
L_088CAA34:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAA64;
      }
      goto L_088CAA54;
    }
L_088CAA54:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CAA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 137u, 0x089D09BCu>(ctx, &aot_mem) && ctx.pc == 0x088CAA64u) goto L_088CAA64;
    return;
L_088CAA64:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAB50;
      }
      goto L_088CAA6C;
    }
L_088CAA6C:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088CAA88;
      }
      goto L_088CAA78;
    }
L_088CAA78:
    ctx.set_gpr(30, 0u + 0u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAAB0;
      }
      goto L_088CAA88;
    }
L_088CAA88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAAA0;
      }
      goto L_088CAA94;
    }
L_088CAA94:
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAAB0;
      }
      goto L_088CAAA0;
    }
L_088CAAA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAB84;
      }
      goto L_088CAAAC;
    }
L_088CAAAC:
    ctx.set_gpr(30, ctx.gpr[22] + 0u);
    goto L_088CAAB0;
L_088CAAB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAACC;
      }
      goto L_088CAABC;
    }
L_088CAABC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAB30;
      }
      goto L_088CAAC4;
    }
L_088CAAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAB04;
      }
      goto L_088CAACC;
    }
L_088CAACC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CAAE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CAAE4u) goto L_088CAAE4;
    return;
L_088CAAE4:
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088CAAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 199u, 0x089D10BCu>(ctx, &aot_mem) && ctx.pc == 0x088CAAFCu) goto L_088CAAFC;
    return;
L_088CAAFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAB30;
      }
      goto L_088CAB04;
    }
L_088CAB04:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CAB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 141u, 0x089D09F8u>(ctx, &aot_mem) && ctx.pc == 0x088CAB14u) goto L_088CAB14;
    return;
L_088CAB14:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x088CAB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 227u, 0x089D13B4u>(ctx, &aot_mem) && ctx.pc == 0x088CAB30u) goto L_088CAB30;
    return;
L_088CAB30:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAB68;
      }
      goto L_088CAB38;
    }
L_088CAB38:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CAB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 141u, 0x089D09F8u>(ctx, &aot_mem) && ctx.pc == 0x088CAB48u) goto L_088CAB48;
    return;
L_088CAB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAB68;
      }
      goto L_088CAB50;
    }
L_088CAB50:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088CAB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 199u, 0x089D10BCu>(ctx, &aot_mem) && ctx.pc == 0x088CAB68u) goto L_088CAB68;
    return;
L_088CAB68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAB84;
      }
      goto L_088CAB74;
    }
L_088CAB74:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CAB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 137u, 0x089D09BCu>(ctx, &aot_mem) && ctx.pc == 0x088CAB84u) goto L_088CAB84;
    return;
L_088CAB84:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CABD8;
      }
      goto L_088CAB94;
    }
L_088CAB94:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CABAC;
      }
      goto L_088CABA4;
    }
L_088CABA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CABD8;
      }
      goto L_088CABAC;
    }
L_088CABAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088CABC0;
      }
      goto L_088CABBC;
    }
L_088CABBC:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_088CABC0;
L_088CABC0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CABD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CABD4u) goto L_088CABD4;
    return;
L_088CABD4:
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[17]);
    goto L_088CABD8;
L_088CABD8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAC20;
      }
      goto L_088CABE0;
    }
L_088CABE0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAC20;
      }
      goto L_088CABEC;
    }
L_088CABEC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CAC20;
      }
      goto L_088CABF8;
    }
L_088CABF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAC20;
      }
      goto L_088CAC08;
    }
L_088CAC08:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAC20;
      }
      goto L_088CAC10;
    }
L_088CAC10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAC20;
      }
      goto L_088CAC1C;
    }
L_088CAC1C:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    goto L_088CAC20;
L_088CAC20:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(868)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CAC34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CAC34u) goto L_088CAC34;
    return;
L_088CAC34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAC7C;
      }
      goto L_088CAC3C;
    }
L_088CAC3C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25832)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAC7C;
      }
      goto L_088CAC50;
    }
L_088CAC50:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25824)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25828)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25824), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25828), ctx.gpr[4]);
    goto L_088CAC7C;
L_088CAC7C:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CACB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAD04;
      }
      goto L_088CACEC;
    }
L_088CACEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAD04;
      }
      goto L_088CACF8;
    }
L_088CACF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAD94;
      }
      goto L_088CAD04;
    }
L_088CAD04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAD94;
      }
      goto L_088CAD10;
    }
L_088CAD10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CAD5C;
      }
      goto L_088CAD1C;
    }
L_088CAD1C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CAD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x088CAD28u) goto L_088CAD28;
    return;
L_088CAD28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CAD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 705u, 0x0898FEA0u>(ctx, &aot_mem) && ctx.pc == 0x088CAD34u) goto L_088CAD34;
    return;
L_088CAD34:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CAD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CAD48u) goto L_088CAD48;
    return;
L_088CAD48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAD5C;
      }
      goto L_088CAD54;
    }
L_088CAD54:
    ctx.set_gpr(31, 0x088CAD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088CAD5Cu) goto L_088CAD5C;
    return;
L_088CAD5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CADCC;
      }
      goto L_088CAD70;
    }
L_088CAD70:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CAD8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CAD8Cu) goto L_088CAD8C;
    return;
L_088CAD8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CADCC;
      }
      goto L_088CAD94;
    }
L_088CAD94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CADCC;
      }
      goto L_088CADA0;
    }
L_088CADA0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CADBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CADBCu) goto L_088CADBC;
    return;
L_088CADBC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CADCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CADCCu) goto L_088CADCC;
    return;
L_088CADCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CADE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CAE30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CAE30u) goto L_088CAE30;
    return;
L_088CAE30:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAE44;
      }
      goto L_088CAE38;
    }
L_088CAE38:
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAF18;
      }
      goto L_088CAE44;
    }
L_088CAE44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAE68;
      }
      goto L_088CAE50;
    }
L_088CAE50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAE68;
      }
      goto L_088CAE5C;
    }
L_088CAE5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAEAC;
      }
      goto L_088CAE68;
    }
L_088CAE68:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAE98;
      }
      goto L_088CAE78;
    }
L_088CAE78:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CAE90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CAE90u) goto L_088CAE90;
    return;
L_088CAE90:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088CAE98;
L_088CAE98:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CAE78;
      }
      goto L_088CAEA4;
    }
L_088CAEA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAF18;
      }
      goto L_088CAEAC;
    }
L_088CAEAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAF08;
      }
      goto L_088CAEB8;
    }
L_088CAEB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAEF8;
      }
      goto L_088CAEC4;
    }
L_088CAEC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CAEEC;
      }
      goto L_088CAED0;
    }
L_088CAED0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAEE0;
      }
      goto L_088CAED8;
    }
L_088CAED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAF14;
      }
      goto L_088CAEE0;
    }
L_088CAEE0:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAF18;
      }
      goto L_088CAEEC;
    }
L_088CAEEC:
    ctx.set_gpr(16, ctx.gpr[17] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAF18;
      }
      goto L_088CAEF8;
    }
L_088CAEF8:
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAF18;
      }
      goto L_088CAF08;
    }
L_088CAF08:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAF18;
      }
      goto L_088CAF14;
    }
L_088CAF14:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088CAF18;
L_088CAF18:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_088CAF40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CAF60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CAF60u) goto L_088CAF60;
    return;
L_088CAF60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAF70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAFA4;
      }
      goto L_088CAF94;
    }
L_088CAF94:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CAFA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CAFA4u) goto L_088CAFA4;
    return;
L_088CAFA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAFC0;
      }
      goto L_088CAFB0;
    }
L_088CAFB0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CAFC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CAFC0u) goto L_088CAFC0;
    return;
L_088CAFC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAFD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CAFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CAFECu) goto L_088CAFEC;
    return;
L_088CAFEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAFFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB034;
      }
      goto L_088CB028;
    }
L_088CB028:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088CB034;
L_088CB034:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CB058;
      }
      goto L_088CB044;
    }
L_088CB044:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088CB050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 168u, 0x088C5028u>(ctx, &aot_mem) && ctx.pc == 0x088CB050u) goto L_088CB050;
    return;
L_088CB050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB0C4;
      }
      goto L_088CB058;
    }
L_088CB058:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB070u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB070u) goto L_088CB070;
    return;
L_088CB070:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB0BC;
      }
      goto L_088CB078;
    }
L_088CB078:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CB088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CB088u) goto L_088CB088;
    return;
L_088CB088:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088CB098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CB098u) goto L_088CB098;
    return;
L_088CB098:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088CB0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CB0B4u) goto L_088CB0B4;
    return;
L_088CB0B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB0C0;
      }
      goto L_088CB0BC;
    }
L_088CB0BC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088CB0C0;
L_088CB0C0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088CB0C4;
L_088CB0C4:
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
L_088CB0E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB0EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088CB10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 385u, 0x089DB264u>(ctx, &aot_mem) && ctx.pc == 0x088CB10Cu) goto L_088CB10C;
    return;
L_088CB10C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB11C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB140u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB140u) goto L_088CB140;
    return;
L_088CB140:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB15C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB170:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088CB1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 267u, 0x089DDD30u>(ctx, &aot_mem) && ctx.pc == 0x088CB1A4u) goto L_088CB1A4;
    return;
L_088CB1A4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088CB1C0;
      }
      goto L_088CB1B0;
    }
L_088CB1B0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB2F0;
      }
      goto L_088CB1C0;
    }
L_088CB1C0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088CB1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 292u, 0x089DDFECu>(ctx, &aot_mem) && ctx.pc == 0x088CB1D0u) goto L_088CB1D0;
    return;
L_088CB1D0:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB234;
      }
      goto L_088CB1F0;
    }
L_088CB1F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25092)));
    ctx.set_gpr(31, 0x088CB204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB204u) goto L_088CB204;
    return;
L_088CB204:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CB218;
      }
      goto L_088CB20C;
    }
L_088CB20C:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB240;
      }
      goto L_088CB218;
    }
L_088CB218:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB230u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB230u) goto L_088CB230;
    return;
L_088CB230:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_088CB234;
L_088CB234:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CB1F0;
      }
      goto L_088CB240;
    }
L_088CB240:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088CB24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 317u, 0x089DE1DCu>(ctx, &aot_mem) && ctx.pc == 0x088CB24Cu) goto L_088CB24C;
    return;
L_088CB24C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB2D8;
      }
      goto L_088CB258;
    }
L_088CB258:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB2D8;
      }
      goto L_088CB260;
    }
L_088CB260:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB278u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB278u) goto L_088CB278;
    return;
L_088CB278:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CB2EC;
      }
      goto L_088CB28C;
    }
L_088CB28C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB2C4;
      }
      goto L_088CB2A8;
    }
L_088CB2A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB2C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB2C0u) goto L_088CB2C0;
    return;
L_088CB2C0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_088CB2C4;
L_088CB2C4:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CB2A8;
      }
      goto L_088CB2D0;
    }
L_088CB2D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB2EC;
      }
      goto L_088CB2D8;
    }
L_088CB2D8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088CB2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 280u, 0x089DDEA4u>(ctx, &aot_mem) && ctx.pc == 0x088CB2E8u) goto L_088CB2E8;
    return;
L_088CB2E8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), 0u);
    goto L_088CB2EC;
L_088CB2EC:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_088CB2F0;
L_088CB2F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088CB32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CB32Cu) goto L_088CB32C;
    return;
L_088CB32C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB33C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB444;
      }
      goto L_088CB368;
    }
L_088CB368:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CB384;
      }
      goto L_088CB378;
    }
L_088CB378:
    ctx.set_gpr(31, 0x088CB380u);
    // nop
    goto L_088CB170;
L_088CB380:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_088CB384;
L_088CB384:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088CB444;
      }
      goto L_088CB390;
    }
L_088CB390:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB444;
      }
      goto L_088CB39C;
    }
L_088CB39C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CB3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 374u, 0x089DE970u>(ctx, &aot_mem) && ctx.pc == 0x088CB3A8u) goto L_088CB3A8;
    return;
L_088CB3A8:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB3E0;
      }
      goto L_088CB3B4;
    }
L_088CB3B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25816)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25820)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25816), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25820), ctx.gpr[3]);
    goto L_088CB3E0;
L_088CB3E0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(868)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB3F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB3F4u) goto L_088CB3F4;
    return;
L_088CB3F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB444;
      }
      goto L_088CB3FC;
    }
L_088CB3FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB444;
      }
      goto L_088CB404;
    }
L_088CB404:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25832)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB444;
      }
      goto L_088CB418;
    }
L_088CB418:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25824)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25828)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25824), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25828), ctx.gpr[4]);
    goto L_088CB444;
L_088CB444:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CB49C;
      }
      goto L_088CB44C;
    }
L_088CB44C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB49C;
      }
      goto L_088CB458;
    }
L_088CB458:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB490;
      }
      goto L_088CB474;
    }
L_088CB474:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB48Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB48Cu) goto L_088CB48C;
    return;
L_088CB48C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_088CB490;
L_088CB490:
    ctx.set_gpr(3, ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CB474;
      }
      goto L_088CB49C;
    }
L_088CB49C:
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
L_088CB4B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB4E4;
      }
      goto L_088CB4CC;
    }
L_088CB4CC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CB4E4;
      }
      goto L_088CB4DC;
    }
L_088CB4DC:
    ctx.set_gpr(31, 0x088CB4E4u);
    // nop
    goto L_088CB170;
L_088CB4E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB4F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB514u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB514u) goto L_088CB514;
    return;
L_088CB514:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CB520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088CB520u) goto L_088CB520;
    return;
L_088CB520:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB534:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB598;
      }
      goto L_088CB554;
    }
L_088CB554:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB584;
      }
      goto L_088CB560;
    }
L_088CB560:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB580u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB580u) goto L_088CB580;
    return;
L_088CB580:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088CB584;
L_088CB584:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CB560;
      }
      goto L_088CB598;
    }
L_088CB598:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CB5BC;
      }
      goto L_088CB5A8;
    }
L_088CB5A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(796)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB5BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB5BCu) goto L_088CB5BC;
    return;
L_088CB5BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CB5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CB5D4u) goto L_088CB5D4;
    return;
L_088CB5D4:
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
L_088CB5EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB5F4:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB600:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB638;
      }
      goto L_088CB62C;
    }
L_088CB62C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088CB638;
L_088CB638:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CB65C;
      }
      goto L_088CB648;
    }
L_088CB648:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088CB654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 168u, 0x088C5028u>(ctx, &aot_mem) && ctx.pc == 0x088CB654u) goto L_088CB654;
    return;
L_088CB654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB6B8;
      }
      goto L_088CB65C;
    }
L_088CB65C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CB6B0;
      }
      goto L_088CB66C;
    }
L_088CB66C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CB67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CB67Cu) goto L_088CB67C;
    return;
L_088CB67C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088CB68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CB68Cu) goto L_088CB68C;
    return;
L_088CB68C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088CB6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CB6A8u) goto L_088CB6A8;
    return;
L_088CB6A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB6B4;
      }
      goto L_088CB6B0;
    }
L_088CB6B0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088CB6B4;
L_088CB6B4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088CB6B8;
L_088CB6B8:
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
L_088CB6D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CB6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB6E4u) goto L_088CB6E4;
    return;
L_088CB6E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB6F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB6FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB704:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB70C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB714:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25856)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25860)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25856), ctx.gpr[6]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25860), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CB794;
      }
      goto L_088CB768;
    }
L_088CB768:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CB778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 58u, 0x089D8314u>(ctx, &aot_mem) && ctx.pc == 0x088CB778u) goto L_088CB778;
    return;
L_088CB778:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CB78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CB78Cu) goto L_088CB78C;
    return;
L_088CB78C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088CB794;
L_088CB794:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB7AC;
      }
      goto L_088CB7A0;
    }
L_088CB7A0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB868;
      }
      goto L_088CB7AC;
    }
L_088CB7AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088CB7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 107u, 0x089D891Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB7C0u) goto L_088CB7C0;
    return;
L_088CB7C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088CB7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 105u, 0x089D8890u>(ctx, &aot_mem) && ctx.pc == 0x088CB7D4u) goto L_088CB7D4;
    return;
L_088CB7D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088CB7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 109u, 0x089D89A8u>(ctx, &aot_mem) && ctx.pc == 0x088CB7E8u) goto L_088CB7E8;
    return;
L_088CB7E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CB828;
      }
      goto L_088CB7F8;
    }
L_088CB7F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CB80C;
      }
      goto L_088CB804;
    }
L_088CB804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB864;
      }
      goto L_088CB80C;
    }
L_088CB80C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x088CB820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 131u, 0x089D8D98u>(ctx, &aot_mem) && ctx.pc == 0x088CB820u) goto L_088CB820;
    return;
L_088CB820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB864;
      }
      goto L_088CB828;
    }
L_088CB828:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x088CB83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 126u, 0x089D8CA4u>(ctx, &aot_mem) && ctx.pc == 0x088CB83Cu) goto L_088CB83C;
    return;
L_088CB83C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x088CB850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D8D38u>(ctx, &aot_mem) && ctx.pc == 0x088CB850u) goto L_088CB850;
    return;
L_088CB850:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x088CB864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 131u, 0x089D8D98u>(ctx, &aot_mem) && ctx.pc == 0x088CB864u) goto L_088CB864;
    return;
L_088CB864:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(0u));
    goto L_088CB868;
L_088CB868:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CB8CC;
      }
      goto L_088CB878;
    }
L_088CB878:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CB8B0;
      }
      goto L_088CB884;
    }
L_088CB884:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB894;
      }
      goto L_088CB88C;
    }
L_088CB88C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB8F4;
      }
      goto L_088CB894;
    }
L_088CB894:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x088CB8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 121u, 0x089D8BA8u>(ctx, &aot_mem) && ctx.pc == 0x088CB8A8u) goto L_088CB8A8;
    return;
L_088CB8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB8F4;
      }
      goto L_088CB8B0;
    }
L_088CB8B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088CB8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 116u, 0x089D8AB0u>(ctx, &aot_mem) && ctx.pc == 0x088CB8C4u) goto L_088CB8C4;
    return;
L_088CB8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB8F4;
      }
      goto L_088CB8CC;
    }
L_088CB8CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x088CB8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 121u, 0x089D8BA8u>(ctx, &aot_mem) && ctx.pc == 0x088CB8E0u) goto L_088CB8E0;
    return;
L_088CB8E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088CB8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 116u, 0x089D8AB0u>(ctx, &aot_mem) && ctx.pc == 0x088CB8F4u) goto L_088CB8F4;
    return;
L_088CB8F4:
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
L_088CB90C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CB948;
      }
      goto L_088CB92C;
    }
L_088CB92C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB948;
      }
      goto L_088CB938;
    }
L_088CB938:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(304)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB948u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB948u) goto L_088CB948;
    return;
L_088CB948:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CB960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CB960u) goto L_088CB960;
    return;
L_088CB960:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB980:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CB9A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB9A8u) goto L_088CB9A8;
    return;
L_088CB9A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CB9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088CB9B4u) goto L_088CB9B4;
    return;
L_088CB9B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB9C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB9E4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBA14:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBA44:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBA74:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBA9C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBAC4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBAD8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBAEC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBB14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBB24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBBB8;
      }
      goto L_088CBB48;
    }
L_088CBB48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CBB68;
      }
      goto L_088CBB58;
    }
L_088CBB58:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CBB68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CBB68u) goto L_088CBB68;
    return;
L_088CBB68:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBBA0;
      }
      goto L_088CBB74;
    }
L_088CBB74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25864)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25868)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25864), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25868), ctx.gpr[3]);
    goto L_088CBBA0;
L_088CBBA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x088CBBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 87u, 0x089D8650u>(ctx, &aot_mem) && ctx.pc == 0x088CBBB8u) goto L_088CBBB8;
    return;
L_088CBBB8:
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
L_088CBBD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBC20;
      }
      goto L_088CBBF0;
    }
L_088CBBF0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CBC08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CBC08u) goto L_088CBC08;
    return;
L_088CBC08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CBC20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CBC20u) goto L_088CBC20;
    return;
L_088CBC20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBC34:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBC40:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBC4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBC70;
      }
      goto L_088CBC60;
    }
L_088CBC60:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CBC70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CBC70u) goto L_088CBC70;
    return;
L_088CBC70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBC80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(25));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CBCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CBCC4u) goto L_088CBCC4;
    return;
L_088CBCC4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x088CBCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CBCD4u) goto L_088CBCD4;
    return;
L_088CBCD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CBCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CBCECu) goto L_088CBCEC;
    return;
L_088CBCEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CBD08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CBD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088CBD18u) goto L_088CBD18;
    return;
L_088CBD18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBD28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBD30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBD38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088CBD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 54u, 0x089D8294u>(ctx, &aot_mem) && ctx.pc == 0x088CBD54u) goto L_088CBD54;
    return;
L_088CBD54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBD64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CBD88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CBD88u) goto L_088CBD88;
    return;
L_088CBD88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CBDA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CBDA0u) goto L_088CBDA0;
    return;
L_088CBDA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBDB4:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBDC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x088CBDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CBDF8u) goto L_088CBDF8;
    return;
L_088CBDF8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CBE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CBE08u) goto L_088CBE08;
    return;
L_088CBE08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CBE24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CBE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088CBE34u) goto L_088CBE34;
    return;
L_088CBE34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBE44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBE4C:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBE5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBE64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBE6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CBEE4;
      }
      goto L_088CBEB4;
    }
L_088CBEB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CBEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CBEC4u) goto L_088CBEC4;
    return;
L_088CBEC4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x088CBED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CBED4u) goto L_088CBED4;
    return;
L_088CBED4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBEF0;
      }
      goto L_088CBEE4;
    }
L_088CBEE4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBF04;
      }
      goto L_088CBEF0;
    }
L_088CBEF0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CBF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CBF00u) goto L_088CBF00;
    return;
L_088CBF00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088CBF04;
L_088CBF04:
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
L_088CBF1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBF24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBF2C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBF38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBF40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBF48:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBF54:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27496)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CBF94;
      }
      goto L_088CBF90;
    }
L_088CBF90:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CBF94;
L_088CBF94:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27492)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CBFB4;
      }
      goto L_088CBFB0;
    }
L_088CBFB0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CBFB4;
L_088CBFB4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27488)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CBFD4;
      }
      goto L_088CBFD0;
    }
L_088CBFD0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CBFD4;
L_088CBFD4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27484)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CBFF4;
      }
      goto L_088CBFF0;
    }
L_088CBFF0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CBFF4;
L_088CBFF4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27480)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x088CC000u; return;
}

void recomp_unit_0049(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0049_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_49(Runtime &runtime) {
    runtime.register_generated_unit(49u, 0x088C8000u, 16384u, &recomp_unit_0049, &recomp_unit_0049_entry);
    runtime.register_function(0x088C8004u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8010u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8018u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8024u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C802Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8038u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8040u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C804Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8054u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C805Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C808Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8100u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8110u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C811Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C812Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C813Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8148u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8158u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8168u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8174u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8184u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8194u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8208u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C824Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C825Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8264u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8280u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8288u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C828Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8298u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8328u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C833Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8348u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8354u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8360u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8384u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8390u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C839Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C83FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8408u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8410u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C841Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8428u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8430u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C843Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8448u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8454u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8464u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8470u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C847Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8480u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8488u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8490u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C849Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8504u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8510u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C851Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8524u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C852Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C853Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C854Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C855Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C856Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8580u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8588u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8590u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C859Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8604u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8608u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C860Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8618u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8648u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8674u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8684u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C869Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C86C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C86D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C86E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8714u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C873Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C874Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8768u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8778u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8788u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8798u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C87A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C87ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C87BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C87D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C87E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C87FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C880Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8820u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8830u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8840u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8854u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8868u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8890u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C889Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C88A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C88B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C88CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C88D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C88DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8900u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8918u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8940u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C894Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8958u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8968u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C897Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8984u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C898Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A9Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8AB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8AC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8AD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8AE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8AECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BBCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C4Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EBCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8ECCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F90u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F9Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FD4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9000u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9010u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9020u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C904Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C905Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C906Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9078u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9084u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C908Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C90A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C90BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C90CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C90D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9108u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9118u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9134u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9144u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9150u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9160u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9170u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9184u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C918Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9198u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9218u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9220u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C922Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C923Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C925Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9264u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9288u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C92F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9304u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9310u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9318u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C933Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9348u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9358u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C936Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9370u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9384u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C939Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9424u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9434u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C943Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9448u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9458u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9464u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9470u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C947Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9480u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C948Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9494u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C949Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9500u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9508u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9518u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9520u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9538u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9540u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9550u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9564u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C956Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9580u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9610u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C961Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9628u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9634u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9640u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C964Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9658u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C966Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9678u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9680u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9694u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C970Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C976Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C977Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C978Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C979Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9814u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9828u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9880u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9894u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C98A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C98B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C98BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C98CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C98D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C98E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9930u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9944u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9954u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9964u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C996Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C997Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9984u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9990u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C999Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B3Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C90u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CBCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9DB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9DDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9DECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E3Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9EA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9EC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9EFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FBCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA000u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA00Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA020u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA030u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA044u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA054u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA068u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA08Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA100u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA10Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA118u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA124u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA134u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA14Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA154u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA160u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA168u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA174u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA180u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA18Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA194u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA19Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA24Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA258u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA264u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA27Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA294u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA300u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA304u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA31Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA320u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA338u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA33Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA340u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA34Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA354u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA360u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA390u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA39Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA400u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA404u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA430u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA434u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA44Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA450u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA468u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA46Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA470u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA480u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA49Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA50Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA520u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA534u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA544u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA550u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA568u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA57Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA60Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA618u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA624u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA654u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA658u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA664u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA674u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA690u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA728u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA734u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA760u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA764u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA770u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA774u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA794u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA800u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA82Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA838u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA864u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA868u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA874u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA878u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA898u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA908u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA918u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA92Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA95Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA96Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAAA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAAACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAAB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAABCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAAC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAACCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAAE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAAFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABBCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABD4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC3Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD8Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADBCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE90u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAED0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAED8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFD4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB028u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB034u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB044u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB050u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB058u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB070u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB078u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB088u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB098u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB10Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB11Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB140u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB15Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB170u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB204u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB20Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB218u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB230u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB234u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB240u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB24Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB258u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB260u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB278u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB28Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB318u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB32Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB33Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB368u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB378u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB380u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB384u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB390u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB39Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB404u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB418u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB444u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB44Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB458u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB474u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB48Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB490u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB49Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB514u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB520u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB534u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB554u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB560u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB580u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB584u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB598u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB600u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB62Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB638u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB648u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB654u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB65Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB66Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB67Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB68Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB704u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB70Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB714u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB768u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB778u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB78Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB794u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB804u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB80Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB820u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB828u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB83Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB850u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB864u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB868u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB878u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB884u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB88Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB894u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB90Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB92Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB938u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB948u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB960u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB980u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB988u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA9Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBBA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBBB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBBD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBBF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC4Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCD4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE4Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBED4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF90u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBFB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBFB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBFD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBFD4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBFF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBFF4u, &recomp_unit_0049, "recomp_unit_0049");
}
} // namespace psprecomp
