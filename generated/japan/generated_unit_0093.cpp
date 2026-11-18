#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0093[4092] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 15,
    0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0,
    23, 0, 0, 24, 0, 0, 0, 25, 26, 0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 41, 42, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53,
    0, 0, 54, 0, 0, 0, 0, 0, 55, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 76, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 78, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96,
    0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 120,
    0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142,
    0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 148, 0, 0, 149,
    0, 150, 0, 0, 151, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 166, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 181, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 194, 195, 0, 0, 0, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222,
    0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0, 0,
    0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250,
    0, 0, 251, 0, 0, 0, 0, 252, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0,
    0, 0, 262, 0, 0, 0, 0, 263, 0, 264, 265, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0,
    271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 277, 0, 278, 0, 0, 0, 0,
    0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0,
    285, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 293, 0, 0, 0, 294, 0, 295, 296, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 311, 0, 312,
    0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0, 319,
    0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 324, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 327, 0, 0, 0, 328, 0, 329, 330, 0, 331, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 343, 0, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 347, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 352,
    0, 353, 354, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 361, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 367, 368, 0, 369,
    0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 391, 0, 392, 0,
    0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 402, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    404, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 410, 411, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 0, 419,
    420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0,
    0, 0, 427, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0,
    0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 0, 0, 0,
    0, 0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0,
    0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0,
    0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0,
    0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0,
    0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486,
    0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0,
    0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 498,
    0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0,
    503, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 511, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 516, 0,
    0, 0, 0, 0, 517, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 521, 0, 0,
    0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 530, 531, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0,
    0, 535, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540,
    0, 0, 0, 0, 541, 542, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0,
    0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 554,
    0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0,
    0, 0, 560, 561, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567,
    0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0,
    0, 0, 579, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 583, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0,
    0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0,
    0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 0, 0, 604, 0,
    0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616,
    0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 623, 0, 0, 0,
    0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0,
    0, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0,
    637, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 640, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0,
    0, 0, 645, 0, 646, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 651, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 657, 0, 0,
    0, 0, 0, 658, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0,
    0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 0, 666, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 670,
    0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0,
    0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 684, 0,
    0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 691, 692, 0,
    0, 0, 693, 0, 0, 0, 0, 694, 695, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0,
    702, 0, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0,
    0, 709, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 715, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 718, 0, 0, 0, 719, 0, 0, 720, 721, 0, 0, 0, 722, 0, 0, 723, 724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726,
    0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 730, 731, 0, 0, 0, 732, 0, 0, 733,
    0, 0, 734, 0, 0, 735, 0, 736, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0,
    0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0, 751, 752, 0, 0, 753, 0, 0, 754, 755, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 0,
    0, 758, 0, 0, 759, 0, 0, 760, 761, 762, 0, 0, 763, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 768, 769, 0, 0, 0, 770,
    0, 0, 0, 0, 0, 0, 771, 772, 0, 0, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0,
    778, 0, 0, 779, 0, 0, 0, 780, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 783, 784, 0, 0, 785, 786, 0, 0, 787, 788, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 790, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 798, 799, 0, 0,
    0, 800, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 802, 0, 0, 803, 0, 804, 805, 806, 0, 0, 807, 0, 808, 0, 0, 0, 0, 809, 0,
    810, 811, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 817, 0, 0, 818, 0, 0, 819, 820,
    0, 0, 821, 0, 0, 822, 823, 0, 824, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 828, 0, 0, 0, 829,
};
void recomp_unit_0093_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08978000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0093[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08978000;
    case 2u: goto L_08978018;
    case 3u: goto L_08978020;
    case 4u: goto L_08978038;
    case 5u: goto L_08978050;
    case 6u: goto L_08978058;
    case 7u: goto L_08978068;
    case 8u: goto L_08978088;
    case 9u: goto L_0897809C;
    case 10u: goto L_089780A8;
    case 11u: goto L_089780B0;
    case 12u: goto L_089780C8;
    case 13u: goto L_089780D8;
    case 14u: goto L_089780E4;
    case 15u: goto L_089780FC;
    case 16u: goto L_08978108;
    case 17u: goto L_0897811C;
    case 18u: goto L_08978134;
    case 19u: goto L_08978140;
    case 20u: goto L_08978154;
    case 21u: goto L_08978160;
    case 22u: goto L_0897816C;
    case 23u: goto L_08978180;
    case 24u: goto L_0897818C;
    case 25u: goto L_0897819C;
    case 26u: goto L_089781A0;
    case 27u: goto L_089781A8;
    case 28u: goto L_089781B0;
    case 29u: goto L_089781BC;
    case 30u: goto L_089781C8;
    case 31u: goto L_089781E0;
    case 32u: goto L_089781EC;
    case 33u: goto L_08978200;
    case 34u: goto L_08978214;
    case 35u: goto L_08978220;
    case 36u: goto L_08978238;
    case 37u: goto L_08978244;
    case 38u: goto L_08978258;
    case 39u: goto L_08978260;
    case 40u: goto L_08978270;
    case 41u: goto L_08978288;
    case 42u: goto L_0897828C;
    case 43u: goto L_08978294;
    case 44u: goto L_0897829C;
    case 45u: goto L_089782B0;
    case 46u: goto L_089782C4;
    case 47u: goto L_089782CC;
    case 48u: goto L_089782DC;
    case 49u: goto L_089782F0;
    case 50u: goto L_08978308;
    case 51u: goto L_08978334;
    case 52u: goto L_08978364;
    case 53u: goto L_0897837C;
    case 54u: goto L_08978388;
    case 55u: goto L_089783A0;
    case 56u: goto L_089783A4;
    case 57u: goto L_089783AC;
    case 58u: goto L_089783CC;
    case 59u: goto L_089783EC;
    case 60u: goto L_08978420;
    case 61u: goto L_08978438;
    case 62u: goto L_08978440;
    case 63u: goto L_08978458;
    case 64u: goto L_08978460;
    case 65u: goto L_08978480;
    case 66u: goto L_0897849C;
    case 67u: goto L_089784CC;
    case 68u: goto L_089784D4;
    case 69u: goto L_089784E0;
    case 70u: goto L_089784E8;
    case 71u: goto L_08978508;
    case 72u: goto L_0897851C;
    case 73u: goto L_08978540;
    case 74u: goto L_0897854C;
    case 75u: goto L_08978570;
    case 76u: goto L_08978574;
    case 77u: goto L_0897857C;
    case 78u: goto L_0897859C;
    case 79u: goto L_089785A0;
    case 80u: goto L_089785C0;
    case 81u: goto L_089785F0;
    case 82u: goto L_0897860C;
    case 83u: goto L_08978618;
    case 84u: goto L_08978634;
    case 85u: goto L_08978638;
    case 86u: goto L_08978640;
    case 87u: goto L_08978660;
    case 88u: goto L_08978680;
    case 89u: goto L_08978698;
    case 90u: goto L_089786A4;
    case 91u: goto L_089786D8;
    case 92u: goto L_089786E0;
    case 93u: goto L_08978750;
    case 94u: goto L_08978758;
    case 95u: goto L_08978774;
    case 96u: goto L_0897877C;
    case 97u: goto L_08978784;
    case 98u: goto L_089787A0;
    case 99u: goto L_089787B8;
    case 100u: goto L_089787C0;
    case 101u: goto L_089787C4;
    case 102u: goto L_08978804;
    case 103u: goto L_08978810;
    case 104u: goto L_0897882C;
    case 105u: goto L_08978834;
    case 106u: goto L_0897883C;
    case 107u: goto L_08978858;
    case 108u: goto L_08978870;
    case 109u: goto L_0897889C;
    case 110u: goto L_089788D8;
    case 111u: goto L_089788E4;
    case 112u: goto L_08978924;
    case 113u: goto L_08978930;
    case 114u: goto L_08978944;
    case 115u: goto L_0897894C;
    case 116u: goto L_08978958;
    case 117u: goto L_08978964;
    case 118u: goto L_0897896C;
    case 119u: goto L_08978974;
    case 120u: goto L_0897897C;
    case 121u: goto L_0897898C;
    case 122u: goto L_0897899C;
    case 123u: goto L_089789AC;
    case 124u: goto L_089789B8;
    case 125u: goto L_089789D0;
    case 126u: goto L_089789DC;
    case 127u: goto L_089789FC;
    case 128u: goto L_08978A08;
    case 129u: goto L_08978A14;
    case 130u: goto L_08978A20;
    case 131u: goto L_08978A28;
    case 132u: goto L_08978A30;
    case 133u: goto L_08978A3C;
    case 134u: goto L_08978A54;
    case 135u: goto L_08978A64;
    case 136u: goto L_08978A6C;
    case 137u: goto L_08978A7C;
    case 138u: goto L_08978AA0;
    case 139u: goto L_08978AD0;
    case 140u: goto L_08978AE4;
    case 141u: goto L_08978AF0;
    case 142u: goto L_08978AFC;
    case 143u: goto L_08978B08;
    case 144u: goto L_08978B20;
    case 145u: goto L_08978B4C;
    case 146u: goto L_08978B64;
    case 147u: goto L_08978B6C;
    case 148u: goto L_08978B70;
    case 149u: goto L_08978B7C;
    case 150u: goto L_08978B84;
    case 151u: goto L_08978B90;
    case 152u: goto L_08978B94;
    case 153u: goto L_08978BA0;
    case 154u: goto L_08978BC8;
    case 155u: goto L_08978BD8;
    case 156u: goto L_08978BE8;
    case 157u: goto L_08978BF8;
    case 158u: goto L_08978C08;
    case 159u: goto L_08978C2C;
    case 160u: goto L_08978C38;
    case 161u: goto L_08978C40;
    case 162u: goto L_08978C4C;
    case 163u: goto L_08978C54;
    case 164u: goto L_08978C68;
    case 165u: goto L_08978C7C;
    case 166u: goto L_08978C94;
    case 167u: goto L_08978C98;
    case 168u: goto L_08978CA0;
    case 169u: goto L_08978CB8;
    case 170u: goto L_08978CC4;
    case 171u: goto L_08978CD8;
    case 172u: goto L_08978CF0;
    case 173u: goto L_08978D18;
    case 174u: goto L_08978D28;
    case 175u: goto L_08978D34;
    case 176u: goto L_08978D3C;
    case 177u: goto L_08978D48;
    case 178u: goto L_08978D50;
    case 179u: goto L_08978D64;
    case 180u: goto L_08978D78;
    case 181u: goto L_08978D90;
    case 182u: goto L_08978D94;
    case 183u: goto L_08978D9C;
    case 184u: goto L_08978DB4;
    case 185u: goto L_08978DC0;
    case 186u: goto L_08978DD0;
    case 187u: goto L_08978DDC;
    case 188u: goto L_08978DEC;
    case 189u: goto L_08978E04;
    case 190u: goto L_08978E1C;
    case 191u: goto L_08978E28;
    case 192u: goto L_08978E44;
    case 193u: goto L_08978E4C;
    case 194u: goto L_08978E58;
    case 195u: goto L_08978E5C;
    case 196u: goto L_08978E74;
    case 197u: goto L_08978E98;
    case 198u: goto L_08978EAC;
    case 199u: goto L_08978EC4;
    case 200u: goto L_08978F04;
    case 201u: goto L_08978F10;
    case 202u: goto L_08978F30;
    case 203u: goto L_08978F38;
    case 204u: goto L_08978F4C;
    case 205u: goto L_08978F58;
    case 206u: goto L_08978F64;
    case 207u: goto L_08978F74;
    case 208u: goto L_08978F80;
    case 209u: goto L_08978FA0;
    case 210u: goto L_08978FA8;
    case 211u: goto L_08978FBC;
    case 212u: goto L_08978FC8;
    case 213u: goto L_08978FDC;
    case 214u: goto L_08978FFC;
    case 215u: goto L_08979008;
    case 216u: goto L_08979024;
    case 217u: goto L_0897902C;
    case 218u: goto L_08979040;
    case 219u: goto L_0897904C;
    case 220u: goto L_08979050;
    case 221u: goto L_08979070;
    case 222u: goto L_0897907C;
    case 223u: goto L_08979088;
    case 224u: goto L_08979094;
    case 225u: goto L_0897909C;
    case 226u: goto L_089790A4;
    case 227u: goto L_089790AC;
    case 228u: goto L_089790EC;
    case 229u: goto L_08979114;
    case 230u: goto L_08979130;
    case 231u: goto L_08979148;
    case 232u: goto L_0897915C;
    case 233u: goto L_0897916C;
    case 234u: goto L_08979194;
    case 235u: goto L_089791C0;
    case 236u: goto L_089791D8;
    case 237u: goto L_089791EC;
    case 238u: goto L_089791F4;
    case 239u: goto L_08979208;
    case 240u: goto L_08979214;
    case 241u: goto L_08979228;
    case 242u: goto L_08979238;
    case 243u: goto L_08979254;
    case 244u: goto L_08979264;
    case 245u: goto L_0897929C;
    case 246u: goto L_089792A4;
    case 247u: goto L_089792AC;
    case 248u: goto L_089792C8;
    case 249u: goto L_089792E0;
    case 250u: goto L_089792FC;
    case 251u: goto L_08979308;
    case 252u: goto L_0897931C;
    case 253u: goto L_08979320;
    case 254u: goto L_08979340;
    case 255u: goto L_0897935C;
    case 256u: goto L_08979364;
    case 257u: goto L_08979390;
    case 258u: goto L_089793A4;
    case 259u: goto L_089793D8;
    case 260u: goto L_089793E8;
    case 261u: goto L_089793F8;
    case 262u: goto L_08979408;
    case 263u: goto L_0897941C;
    case 264u: goto L_08979424;
    case 265u: goto L_08979428;
    case 266u: goto L_08979430;
    case 267u: goto L_08979440;
    case 268u: goto L_08979448;
    case 269u: goto L_0897945C;
    case 270u: goto L_08979474;
    case 271u: goto L_08979480;
    case 272u: goto L_08979488;
    case 273u: goto L_089794A8;
    case 274u: goto L_089794C4;
    case 275u: goto L_089794D8;
    case 276u: goto L_089794E0;
    case 277u: goto L_089794E4;
    case 278u: goto L_089794EC;
    case 279u: goto L_08979508;
    case 280u: goto L_08979514;
    case 281u: goto L_08979538;
    case 282u: goto L_0897954C;
    case 283u: goto L_0897956C;
    case 284u: goto L_08979574;
    case 285u: goto L_08979580;
    case 286u: goto L_08979588;
    case 287u: goto L_089795A0;
    case 288u: goto L_089795C8;
    case 289u: goto L_089795D4;
    case 290u: goto L_089795F0;
    case 291u: goto L_08979608;
    case 292u: goto L_08979624;
    case 293u: goto L_08979628;
    case 294u: goto L_08979638;
    case 295u: goto L_08979640;
    case 296u: goto L_08979644;
    case 297u: goto L_0897964C;
    case 298u: goto L_08979658;
    case 299u: goto L_08979678;
    case 300u: goto L_0897968C;
    case 301u: goto L_089796AC;
    case 302u: goto L_089796B4;
    case 303u: goto L_089796C0;
    case 304u: goto L_089796C8;
    case 305u: goto L_089796E0;
    case 306u: goto L_08979708;
    case 307u: goto L_08979714;
    case 308u: goto L_08979730;
    case 309u: goto L_08979748;
    case 310u: goto L_08979770;
    case 311u: goto L_08979774;
    case 312u: goto L_0897977C;
    case 313u: goto L_08979788;
    case 314u: goto L_089797AC;
    case 315u: goto L_089797C0;
    case 316u: goto L_089797E0;
    case 317u: goto L_089797E8;
    case 318u: goto L_089797F4;
    case 319u: goto L_089797FC;
    case 320u: goto L_08979814;
    case 321u: goto L_0897983C;
    case 322u: goto L_08979848;
    case 323u: goto L_08979874;
    case 324u: goto L_08979878;
    case 325u: goto L_08979894;
    case 326u: goto L_089798BC;
    case 327u: goto L_089798C0;
    case 328u: goto L_089798D0;
    case 329u: goto L_089798D8;
    case 330u: goto L_089798DC;
    case 331u: goto L_089798E4;
    case 332u: goto L_089798F0;
    case 333u: goto L_08979910;
    case 334u: goto L_08979924;
    case 335u: goto L_08979944;
    case 336u: goto L_0897994C;
    case 337u: goto L_08979958;
    case 338u: goto L_08979960;
    case 339u: goto L_08979978;
    case 340u: goto L_089799A0;
    case 341u: goto L_089799AC;
    case 342u: goto L_089799D8;
    case 343u: goto L_089799DC;
    case 344u: goto L_089799F8;
    case 345u: goto L_08979A24;
    case 346u: goto L_08979A38;
    case 347u: goto L_08979A40;
    case 348u: goto L_08979A44;
    case 349u: goto L_08979A50;
    case 350u: goto L_08979A58;
    case 351u: goto L_08979A70;
    case 352u: goto L_08979A7C;
    case 353u: goto L_08979A84;
    case 354u: goto L_08979A88;
    case 355u: goto L_08979A90;
    case 356u: goto L_08979AA4;
    case 357u: goto L_08979ABC;
    case 358u: goto L_08979AE0;
    case 359u: goto L_08979B0C;
    case 360u: goto L_08979B24;
    case 361u: goto L_08979B2C;
    case 362u: goto L_08979B30;
    case 363u: goto L_08979B3C;
    case 364u: goto L_08979B44;
    case 365u: goto L_08979B5C;
    case 366u: goto L_08979B68;
    case 367u: goto L_08979B70;
    case 368u: goto L_08979B74;
    case 369u: goto L_08979B7C;
    case 370u: goto L_08979B90;
    case 371u: goto L_08979BA8;
    case 372u: goto L_08979BCC;
    case 373u: goto L_08979BDC;
    case 374u: goto L_08979BF0;
    case 375u: goto L_08979C00;
    case 376u: goto L_08979C30;
    case 377u: goto L_08979C40;
    case 378u: goto L_08979C88;
    case 379u: goto L_08979C94;
    case 380u: goto L_08979CA4;
    case 381u: goto L_08979CC0;
    case 382u: goto L_08979CCC;
    case 383u: goto L_08979D00;
    case 384u: goto L_08979D1C;
    case 385u: goto L_08979D28;
    case 386u: goto L_08979D30;
    case 387u: goto L_08979D44;
    case 388u: goto L_08979D50;
    case 389u: goto L_08979D60;
    case 390u: goto L_08979D6C;
    case 391u: goto L_08979D70;
    case 392u: goto L_08979D78;
    case 393u: goto L_08979D8C;
    case 394u: goto L_08979DB4;
    case 395u: goto L_08979DBC;
    case 396u: goto L_08979DC0;
    case 397u: goto L_08979DC8;
    case 398u: goto L_08979DD8;
    case 399u: goto L_08979E04;
    case 400u: goto L_08979E10;
    case 401u: goto L_08979E2C;
    case 402u: goto L_08979E34;
    case 403u: goto L_08979E38;
    case 404u: goto L_08979E80;
    case 405u: goto L_08979E8C;
    case 406u: goto L_08979E9C;
    case 407u: goto L_08979EAC;
    case 408u: goto L_08979EB8;
    case 409u: goto L_08979ED4;
    case 410u: goto L_08979EDC;
    case 411u: goto L_08979EE0;
    case 412u: goto L_08979F10;
    case 413u: goto L_08979F2C;
    case 414u: goto L_08979F38;
    case 415u: goto L_08979F40;
    case 416u: goto L_08979F54;
    case 417u: goto L_08979F60;
    case 418u: goto L_08979F70;
    case 419u: goto L_08979F7C;
    case 420u: goto L_08979F80;
    case 421u: goto L_08979F88;
    case 422u: goto L_08979F94;
    case 423u: goto L_08979FBC;
    case 424u: goto L_08979FC4;
    case 425u: goto L_08979FD0;
    case 426u: goto L_08979FF4;
    case 427u: goto L_0897A008;
    case 428u: goto L_0897A014;
    case 429u: goto L_0897A01C;
    case 430u: goto L_0897A034;
    case 431u: goto L_0897A064;
    case 432u: goto L_0897A074;
    case 433u: goto L_0897A094;
    case 434u: goto L_0897A0A4;
    case 435u: goto L_0897A0AC;
    case 436u: goto L_0897A0C4;
    case 437u: goto L_0897A0D4;
    case 438u: goto L_0897A0E8;
    case 439u: goto L_0897A0F8;
    case 440u: goto L_0897A114;
    case 441u: goto L_0897A128;
    case 442u: goto L_0897A134;
    case 443u: goto L_0897A140;
    case 444u: goto L_0897A158;
    case 445u: goto L_0897A164;
    case 446u: goto L_0897A16C;
    case 447u: goto L_0897A18C;
    case 448u: goto L_0897A19C;
    case 449u: goto L_0897A1A4;
    case 450u: goto L_0897A1C4;
    case 451u: goto L_0897A1E0;
    case 452u: goto L_0897A1F8;
    case 453u: goto L_0897A208;
    case 454u: goto L_0897A21C;
    case 455u: goto L_0897A22C;
    case 456u: goto L_0897A248;
    case 457u: goto L_0897A25C;
    case 458u: goto L_0897A268;
    case 459u: goto L_0897A278;
    case 460u: goto L_0897A290;
    case 461u: goto L_0897A2A8;
    case 462u: goto L_0897A2C8;
    case 463u: goto L_0897A2E0;
    case 464u: goto L_0897A2F8;
    case 465u: goto L_0897A310;
    case 466u: goto L_0897A324;
    case 467u: goto L_0897A344;
    case 468u: goto L_0897A34C;
    case 469u: goto L_0897A360;
    case 470u: goto L_0897A36C;
    case 471u: goto L_0897A380;
    case 472u: goto L_0897A39C;
    case 473u: goto L_0897A3A4;
    case 474u: goto L_0897A3B0;
    case 475u: goto L_0897A3C0;
    case 476u: goto L_0897A3D8;
    case 477u: goto L_0897A3E4;
    case 478u: goto L_0897A3F4;
    case 479u: goto L_0897A404;
    case 480u: goto L_0897A410;
    case 481u: goto L_0897A41C;
    case 482u: goto L_0897A430;
    case 483u: goto L_0897A438;
    case 484u: goto L_0897A44C;
    case 485u: goto L_0897A464;
    case 486u: goto L_0897A47C;
    case 487u: goto L_0897A490;
    case 488u: goto L_0897A4A4;
    case 489u: goto L_0897A4AC;
    case 490u: goto L_0897A4C0;
    case 491u: goto L_0897A4D8;
    case 492u: goto L_0897A4F0;
    case 493u: goto L_0897A504;
    case 494u: goto L_0897A520;
    case 495u: goto L_0897A544;
    case 496u: goto L_0897A558;
    case 497u: goto L_0897A570;
    case 498u: goto L_0897A57C;
    case 499u: goto L_0897A5A0;
    case 500u: goto L_0897A5BC;
    case 501u: goto L_0897A5EC;
    case 502u: goto L_0897A5F4;
    case 503u: goto L_0897A600;
    case 504u: goto L_0897A618;
    case 505u: goto L_0897A624;
    case 506u: goto L_0897A62C;
    case 507u: goto L_0897A640;
    case 508u: goto L_0897A648;
    case 509u: goto L_0897A654;
    case 510u: goto L_0897A664;
    case 511u: goto L_0897A694;
    case 512u: goto L_0897A698;
    case 513u: goto L_0897A6B4;
    case 514u: goto L_0897A6E4;
    case 515u: goto L_0897A6EC;
    case 516u: goto L_0897A6F8;
    case 517u: goto L_0897A710;
    case 518u: goto L_0897A71C;
    case 519u: goto L_0897A724;
    case 520u: goto L_0897A770;
    case 521u: goto L_0897A774;
    case 522u: goto L_0897A790;
    case 523u: goto L_0897A7B0;
    case 524u: goto L_0897A7B8;
    case 525u: goto L_0897A7C4;
    case 526u: goto L_0897A7D8;
    case 527u: goto L_0897A7EC;
    case 528u: goto L_0897A814;
    case 529u: goto L_0897A81C;
    case 530u: goto L_0897A82C;
    case 531u: goto L_0897A830;
    case 532u: goto L_0897A848;
    case 533u: goto L_0897A854;
    case 534u: goto L_0897A86C;
    case 535u: goto L_0897A884;
    case 536u: goto L_0897A89C;
    case 537u: goto L_0897A8A4;
    case 538u: goto L_0897A8BC;
    case 539u: goto L_0897A8E0;
    case 540u: goto L_0897A8FC;
    case 541u: goto L_0897A910;
    case 542u: goto L_0897A914;
    case 543u: goto L_0897A918;
    case 544u: goto L_0897A924;
    case 545u: goto L_0897A940;
    case 546u: goto L_0897A960;
    case 547u: goto L_0897A974;
    case 548u: goto L_0897A984;
    case 549u: goto L_0897A990;
    case 550u: goto L_0897A9AC;
    case 551u: goto L_0897A9CC;
    case 552u: goto L_0897A9E0;
    case 553u: goto L_0897A9F0;
    case 554u: goto L_0897A9FC;
    case 555u: goto L_0897AA18;
    case 556u: goto L_0897AA30;
    case 557u: goto L_0897AA40;
    case 558u: goto L_0897AA58;
    case 559u: goto L_0897AA68;
    case 560u: goto L_0897AA88;
    case 561u: goto L_0897AA8C;
    case 562u: goto L_0897AA98;
    case 563u: goto L_0897AAB0;
    case 564u: goto L_0897AABC;
    case 565u: goto L_0897AACC;
    case 566u: goto L_0897AAE8;
    case 567u: goto L_0897AAFC;
    case 568u: goto L_0897AB0C;
    case 569u: goto L_0897AB2C;
    case 570u: goto L_0897AB3C;
    case 571u: goto L_0897AB54;
    case 572u: goto L_0897AB64;
    case 573u: goto L_0897AB98;
    case 574u: goto L_0897ABB0;
    case 575u: goto L_0897ABBC;
    case 576u: goto L_0897ABD4;
    case 577u: goto L_0897ABE0;
    case 578u: goto L_0897ABEC;
    case 579u: goto L_0897AC08;
    case 580u: goto L_0897AC18;
    case 581u: goto L_0897AC24;
    case 582u: goto L_0897AC38;
    case 583u: goto L_0897AC54;
    case 584u: goto L_0897AC58;
    case 585u: goto L_0897AC78;
    case 586u: goto L_0897AC90;
    case 587u: goto L_0897ACA0;
    case 588u: goto L_0897ACB8;
    case 589u: goto L_0897ACC8;
    case 590u: goto L_0897ACE0;
    case 591u: goto L_0897ACF0;
    case 592u: goto L_0897AD18;
    case 593u: goto L_0897AD28;
    case 594u: goto L_0897AD44;
    case 595u: goto L_0897AD48;
    case 596u: goto L_0897AD64;
    case 597u: goto L_0897AD84;
    case 598u: goto L_0897AD94;
    case 599u: goto L_0897ADB0;
    case 600u: goto L_0897ADBC;
    case 601u: goto L_0897ADD8;
    case 602u: goto L_0897ADE0;
    case 603u: goto L_0897ADE8;
    case 604u: goto L_0897ADF8;
    case 605u: goto L_0897AE14;
    case 606u: goto L_0897AE28;
    case 607u: goto L_0897AE30;
    case 608u: goto L_0897AE40;
    case 609u: goto L_0897AE58;
    case 610u: goto L_0897AE90;
    case 611u: goto L_0897AE9C;
    case 612u: goto L_0897AEAC;
    case 613u: goto L_0897AEB4;
    case 614u: goto L_0897AECC;
    case 615u: goto L_0897AEDC;
    case 616u: goto L_0897AEFC;
    case 617u: goto L_0897AF10;
    case 618u: goto L_0897AF1C;
    case 619u: goto L_0897AF34;
    case 620u: goto L_0897AF40;
    case 621u: goto L_0897AF5C;
    case 622u: goto L_0897AF64;
    case 623u: goto L_0897AF70;
    case 624u: goto L_0897AF84;
    case 625u: goto L_0897AF90;
    case 626u: goto L_0897AFB0;
    case 627u: goto L_0897AFC8;
    case 628u: goto L_0897AFD4;
    case 629u: goto L_0897AFE0;
    case 630u: goto L_0897AFF8;
    case 631u: goto L_0897B004;
    case 632u: goto L_0897B010;
    case 633u: goto L_0897B020;
    case 634u: goto L_0897B03C;
    case 635u: goto L_0897B044;
    case 636u: goto L_0897B068;
    case 637u: goto L_0897B080;
    case 638u: goto L_0897B08C;
    case 639u: goto L_0897B098;
    case 640u: goto L_0897B0B0;
    case 641u: goto L_0897B0B4;
    case 642u: goto L_0897B0C0;
    case 643u: goto L_0897B0E0;
    case 644u: goto L_0897B0E8;
    case 645u: goto L_0897B108;
    case 646u: goto L_0897B110;
    case 647u: goto L_0897B124;
    case 648u: goto L_0897B130;
    case 649u: goto L_0897B150;
    case 650u: goto L_0897B164;
    case 651u: goto L_0897B168;
    case 652u: goto L_0897B190;
    case 653u: goto L_0897B1B8;
    case 654u: goto L_0897B1C4;
    case 655u: goto L_0897B1D4;
    case 656u: goto L_0897B1E8;
    case 657u: goto L_0897B1F4;
    case 658u: goto L_0897B20C;
    case 659u: goto L_0897B218;
    case 660u: goto L_0897B238;
    case 661u: goto L_0897B24C;
    case 662u: goto L_0897B258;
    case 663u: goto L_0897B274;
    case 664u: goto L_0897B28C;
    case 665u: goto L_0897B298;
    case 666u: goto L_0897B2AC;
    case 667u: goto L_0897B2B0;
    case 668u: goto L_0897B2CC;
    case 669u: goto L_0897B2EC;
    case 670u: goto L_0897B2FC;
    case 671u: goto L_0897B31C;
    case 672u: goto L_0897B324;
    case 673u: goto L_0897B32C;
    case 674u: goto L_0897B338;
    case 675u: goto L_0897B344;
    case 676u: goto L_0897B35C;
    case 677u: goto L_0897B368;
    case 678u: goto L_0897B370;
    case 679u: goto L_0897B38C;
    case 680u: goto L_0897B3A0;
    case 681u: goto L_0897B3BC;
    case 682u: goto L_0897B3C8;
    case 683u: goto L_0897B3E4;
    case 684u: goto L_0897B3F8;
    case 685u: goto L_0897B40C;
    case 686u: goto L_0897B41C;
    case 687u: goto L_0897B430;
    case 688u: goto L_0897B440;
    case 689u: goto L_0897B450;
    case 690u: goto L_0897B46C;
    case 691u: goto L_0897B474;
    case 692u: goto L_0897B478;
    case 693u: goto L_0897B488;
    case 694u: goto L_0897B49C;
    case 695u: goto L_0897B4A0;
    case 696u: goto L_0897B4A8;
    case 697u: goto L_0897B4B4;
    case 698u: goto L_0897B4C0;
    case 699u: goto L_0897B4D0;
    case 700u: goto L_0897B4E0;
    case 701u: goto L_0897B4F0;
    case 702u: goto L_0897B500;
    case 703u: goto L_0897B520;
    case 704u: goto L_0897B528;
    case 705u: goto L_0897B53C;
    case 706u: goto L_0897B554;
    case 707u: goto L_0897B564;
    case 708u: goto L_0897B574;
    case 709u: goto L_0897B584;
    case 710u: goto L_0897B594;
    case 711u: goto L_0897B5A4;
    case 712u: goto L_0897B5C8;
    case 713u: goto L_0897B5E0;
    case 714u: goto L_0897B5EC;
    case 715u: goto L_0897B5F4;
    case 716u: goto L_0897B670;
    case 717u: goto L_0897B67C;
    case 718u: goto L_0897B704;
    case 719u: goto L_0897B714;
    case 720u: goto L_0897B720;
    case 721u: goto L_0897B724;
    case 722u: goto L_0897B734;
    case 723u: goto L_0897B740;
    case 724u: goto L_0897B744;
    case 725u: goto L_0897B764;
    case 726u: goto L_0897B77C;
    case 727u: goto L_0897B794;
    case 728u: goto L_0897B7A4;
    case 729u: goto L_0897B7C4;
    case 730u: goto L_0897B7DC;
    case 731u: goto L_0897B7E0;
    case 732u: goto L_0897B7F0;
    case 733u: goto L_0897B7FC;
    case 734u: goto L_0897B808;
    case 735u: goto L_0897B814;
    case 736u: goto L_0897B81C;
    case 737u: goto L_0897B824;
    case 738u: goto L_0897B880;
    case 739u: goto L_0897B8E4;
    case 740u: goto L_0897B940;
    case 741u: goto L_0897B99C;
    case 742u: goto L_0897B9B0;
    case 743u: goto L_0897B9B8;
    case 744u: goto L_0897B9CC;
    case 745u: goto L_0897B9D4;
    case 746u: goto L_0897BA0C;
    case 747u: goto L_0897BA6C;
    case 748u: goto L_0897BA78;
    case 749u: goto L_0897BA94;
    case 750u: goto L_0897BAA0;
    case 751u: goto L_0897BAAC;
    case 752u: goto L_0897BAB0;
    case 753u: goto L_0897BABC;
    case 754u: goto L_0897BAC8;
    case 755u: goto L_0897BACC;
    case 756u: goto L_0897BADC;
    case 757u: goto L_0897BAE8;
    case 758u: goto L_0897BB04;
    case 759u: goto L_0897BB10;
    case 760u: goto L_0897BB1C;
    case 761u: goto L_0897BB20;
    case 762u: goto L_0897BB24;
    case 763u: goto L_0897BB30;
    case 764u: goto L_0897BB34;
    case 765u: goto L_0897BB68;
    case 766u: goto L_0897BBC4;
    case 767u: goto L_0897BBCC;
    case 768u: goto L_0897BBE8;
    case 769u: goto L_0897BBEC;
    case 770u: goto L_0897BBFC;
    case 771u: goto L_0897BC18;
    case 772u: goto L_0897BC1C;
    case 773u: goto L_0897BC38;
    case 774u: goto L_0897BC40;
    case 775u: goto L_0897BC50;
    case 776u: goto L_0897BC5C;
    case 777u: goto L_0897BC78;
    case 778u: goto L_0897BC80;
    case 779u: goto L_0897BC8C;
    case 780u: goto L_0897BC9C;
    case 781u: goto L_0897BCA8;
    case 782u: goto L_0897BCC4;
    case 783u: goto L_0897BCC8;
    case 784u: goto L_0897BCCC;
    case 785u: goto L_0897BCD8;
    case 786u: goto L_0897BCDC;
    case 787u: goto L_0897BCE8;
    case 788u: goto L_0897BCEC;
    case 789u: goto L_0897BD20;
    case 790u: goto L_0897BD2C;
    case 791u: goto L_0897BD38;
    case 792u: goto L_0897BD50;
    case 793u: goto L_0897BD68;
    case 794u: goto L_0897BD98;
    case 795u: goto L_0897BDB4;
    case 796u: goto L_0897BDC4;
    case 797u: goto L_0897BDD0;
    case 798u: goto L_0897BDF0;
    case 799u: goto L_0897BDF4;
    case 800u: goto L_0897BE04;
    case 801u: goto L_0897BE20;
    case 802u: goto L_0897BE34;
    case 803u: goto L_0897BE40;
    case 804u: goto L_0897BE48;
    case 805u: goto L_0897BE4C;
    case 806u: goto L_0897BE50;
    case 807u: goto L_0897BE5C;
    case 808u: goto L_0897BE64;
    case 809u: goto L_0897BE78;
    case 810u: goto L_0897BE80;
    case 811u: goto L_0897BE84;
    case 812u: goto L_0897BE90;
    case 813u: goto L_0897BEA4;
    case 814u: goto L_0897BECC;
    case 815u: goto L_0897BF3C;
    case 816u: goto L_0897BF44;
    case 817u: goto L_0897BF60;
    case 818u: goto L_0897BF6C;
    case 819u: goto L_0897BF78;
    case 820u: goto L_0897BF7C;
    case 821u: goto L_0897BF88;
    case 822u: goto L_0897BF94;
    case 823u: goto L_0897BF98;
    case 824u: goto L_0897BFA0;
    case 825u: goto L_0897BFB0;
    case 826u: goto L_0897BFC0;
    case 827u: goto L_0897BFD8;
    case 828u: goto L_0897BFDC;
    case 829u: goto L_0897BFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08978000:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978088;
      }
      goto L_08978018;
    }
L_08978018:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08978088;
      }
      goto L_08978020;
    }
L_08978020:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978038u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978038u) goto L_08978038;
    return;
L_08978038:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9012));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08978050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08978050u) goto L_08978050;
    return;
L_08978050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978088;
      }
      goto L_08978058;
    }
L_08978058:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978088;
      }
      goto L_08978068;
    }
L_08978068:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9112));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08978088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x08978088u) goto L_08978088;
    return;
L_08978088:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897809Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897809Cu) goto L_0897809C;
    return;
L_0897809C:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089782F0;
      }
      goto L_089780A8;
    }
L_089780A8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978160;
      }
      goto L_089780B0;
    }
L_089780B0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089780C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089780C8u) goto L_089780C8;
    return;
L_089780C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978140;
      }
      goto L_089780D8;
    }
L_089780D8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897811C;
      }
      goto L_089780E4;
    }
L_089780E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089780FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x089780FCu) goto L_089780FC;
    return;
L_089780FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897811C;
      }
      goto L_08978108;
    }
L_08978108:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0897811Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x0897811Cu) goto L_0897811C;
    return;
L_0897811C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08978134u);
    // nop
    goto L_0897849C;
L_08978134:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089781A0;
      }
      goto L_08978140;
    }
L_08978140:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08978154u);
    // nop
    goto L_089785C0;
L_08978154:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089781A0;
      }
      goto L_08978160;
    }
L_08978160:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897818C;
      }
      goto L_0897816C;
    }
L_0897816C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08978180u);
    // nop
    goto L_089785C0;
L_08978180:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089781A0;
      }
      goto L_0897818C;
    }
L_0897818C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0897819Cu);
    // nop
    goto L_08978334;
L_0897819C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_089781A0;
L_089781A0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978260;
      }
      goto L_089781A8;
    }
L_089781A8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978214;
      }
      goto L_089781B0;
    }
L_089781B0:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978214;
      }
      goto L_089781BC;
    }
L_089781BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978200;
      }
      goto L_089781C8;
    }
L_089781C8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089781E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x089781E0u) goto L_089781E0;
    return;
L_089781E0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978200;
      }
      goto L_089781EC;
    }
L_089781EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08978200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x08978200u) goto L_08978200;
    return;
L_08978200:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08978214u);
    // nop
    goto L_089783EC;
L_08978214:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978258;
      }
      goto L_08978220;
    }
L_08978220:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08978238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x08978238u) goto L_08978238;
    return;
L_08978238:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978258;
      }
      goto L_08978244;
    }
L_08978244:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08978258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x08978258u) goto L_08978258;
    return;
L_08978258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897828C;
      }
      goto L_08978260;
    }
L_08978260:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978288;
      }
      goto L_08978270;
    }
L_08978270:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9252));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08978288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x08978288u) goto L_08978288;
    return;
L_08978288:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0897828C;
L_0897828C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089782F0;
      }
      goto L_08978294;
    }
L_08978294:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089782F0;
      }
      goto L_0897829C;
    }
L_0897829C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089782CC;
      }
      goto L_089782B0;
    }
L_089782B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(205));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089782C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089782C4u) goto L_089782C4;
    return;
L_089782C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089782F0;
      }
      goto L_089782CC;
    }
L_089782CC:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089782F0;
      }
      goto L_089782DC;
    }
L_089782DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089782F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089782F0u) goto L_089782F0;
    return;
L_089782F0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978308u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978308u) goto L_08978308;
    return;
L_08978308:
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
L_08978334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 4096u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978388;
      }
      goto L_08978364;
    }
L_08978364:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897837Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897837Cu) goto L_0897837C;
    return;
L_0897837C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089783A4;
      }
      goto L_08978388;
    }
L_08978388:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089783A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089783A0u) goto L_089783A0;
    return;
L_089783A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_089783A4;
L_089783A4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089783CC;
      }
      goto L_089783AC;
    }
L_089783AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089783CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089783CCu) goto L_089783CC;
    return;
L_089783CC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_089783EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 4096u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978440;
      }
      goto L_08978420;
    }
L_08978420:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978438u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978438u) goto L_08978438;
    return;
L_08978438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978458;
      }
      goto L_08978440;
    }
L_08978440:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978458u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978458u) goto L_08978458;
    return;
L_08978458:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978480;
      }
      goto L_08978460;
    }
L_08978460:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978480u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978480u) goto L_08978480;
    return;
L_08978480:
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
L_0897849C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089784E0;
      }
      goto L_089784CC;
    }
L_089784CC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089784E0;
      }
      goto L_089784D4;
    }
L_089784D4:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089785A0;
      }
      goto L_089784E0;
    }
L_089784E0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978508;
      }
      goto L_089784E8;
    }
L_089784E8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978508u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978508u) goto L_08978508;
    return;
L_08978508:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 4096u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897854C;
      }
      goto L_0897851C;
    }
L_0897851C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978540u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978540u) goto L_08978540;
    return;
L_08978540:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978574;
      }
      goto L_0897854C;
    }
L_0897854C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978570u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978570u) goto L_08978570;
    return;
L_08978570:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08978574;
L_08978574:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897859C;
      }
      goto L_0897857C;
    }
L_0897857C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897859Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897859Cu) goto L_0897859C;
    return;
L_0897859C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_089785A0;
L_089785A0:
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
L_089785C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 4096u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978618;
      }
      goto L_089785F0;
    }
L_089785F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897860Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897860Cu) goto L_0897860C;
    return;
L_0897860C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978638;
      }
      goto L_08978618;
    }
L_08978618:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978634u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978634u) goto L_08978634;
    return;
L_08978634:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_08978638;
L_08978638:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978660;
      }
      goto L_08978640;
    }
L_08978640:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978660u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978660u) goto L_08978660;
    return;
L_08978660:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08978680:
    ctx.set_gpr(2, ctx.gpr[5] >> 27u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089786A4;
      }
      goto L_08978698;
    }
L_08978698:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089786D8;
      }
      goto L_089786A4;
    }
L_089786A4:
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] >> 5u);
    ctx.set_gpr(4, ctx.gpr[2] >> 12u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 12u) & 0x0000000Fu);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[4] >> 4u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_089786D8;
L_089786D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089786E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, ctx.gpr[20] >> 27u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(22, ctx.gpr[3] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(6, ctx.gpr[20] << 5u);
    ctx.set_gpr(6, ctx.gpr[6] >> 5u);
    ctx.set_gpr(5, ctx.gpr[6] >> 12u);
    ctx.set_gpr(17, ctx.gpr[5] >> 4u);
    ctx.set_gpr(5, (ctx.gpr[6] >> 12u) & 0x0000000Fu);
    ctx.set_gpr(6, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[5] << (ctx.gpr[6] & 31u));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897877C;
      }
      goto L_08978750;
    }
L_08978750:
    ctx.set_gpr(31, 0x08978758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08978758u) goto L_08978758;
    return;
L_08978758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2048));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978774u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978774u) goto L_08978774;
    return;
L_08978774:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0897877C;
L_0897877C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089787A0;
      }
      goto L_08978784;
    }
L_08978784:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089787B8;
      }
      goto L_089787A0;
    }
L_089787A0:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ~(ctx.gpr[16] | 0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_089787B8;
L_089787B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089787C4;
      }
      goto L_089787C0;
    }
L_089787C0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_089787C4;
L_089787C4:
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[4] >> 27u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, ctx.gpr[4] << 5u);
    ctx.set_gpr(5, ctx.gpr[5] >> 5u);
    ctx.set_gpr(4, ctx.gpr[5] >> 12u);
    ctx.set_gpr(17, ctx.gpr[4] >> 4u);
    ctx.set_gpr(4, (ctx.gpr[5] >> 12u) & 0x0000000Fu);
    ctx.set_gpr(5, ctx.gpr[4] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(16, ctx.gpr[4] << (ctx.gpr[5] & 31u));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978834;
      }
      goto L_08978804;
    }
L_08978804:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08978810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08978810u) goto L_08978810;
    return;
L_08978810:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2048));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897882Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897882Cu) goto L_0897882C;
    return;
L_0897882C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08978834;
L_08978834:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978858;
      }
      goto L_0897883C;
    }
L_0897883C:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978870;
      }
      goto L_08978858;
    }
L_08978858:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ~(ctx.gpr[16] | 0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08978870;
L_08978870:
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
L_0897889C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] >> 27u);
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(4096));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089788E4;
      }
      goto L_089788D8;
    }
L_089788D8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A7C;
      }
      goto L_089788E4;
    }
L_089788E4:
    ctx.set_gpr(3, ctx.gpr[5] << 5u);
    ctx.set_gpr(3, ctx.gpr[3] >> 5u);
    ctx.set_gpr(2, ctx.gpr[3] >> 12u);
    ctx.set_gpr(16, ctx.gpr[2] >> 4u);
    ctx.set_gpr(5, (ctx.gpr[3] >> 12u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978930;
      }
      goto L_08978924;
    }
L_08978924:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A7C;
      }
      goto L_08978930;
    }
L_08978930:
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43690u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897897C;
      }
      goto L_08978944;
    }
L_08978944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897896C;
      }
      goto L_0897894C;
    }
L_0897894C:
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978964;
      }
      goto L_08978958;
    }
L_08978958:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A7C;
      }
      goto L_08978964;
    }
L_08978964:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    goto L_0897896C;
L_0897896C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897894C;
      }
      goto L_08978974;
    }
L_08978974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897898C;
      }
      goto L_0897897C;
    }
L_0897897C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_0897898C;
L_0897898C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[16] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089789DC;
      }
      goto L_0897899C;
    }
L_0897899C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[19] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089789B8;
      }
      goto L_089789AC;
    }
L_089789AC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A7C;
      }
      goto L_089789B8;
    }
L_089789B8:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089789DC;
      }
      goto L_089789D0;
    }
L_089789D0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A7C;
      }
      goto L_089789DC;
    }
L_089789DC:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43690u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A6C;
      }
      goto L_089789FC;
    }
L_089789FC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A28;
      }
      goto L_08978A08;
    }
L_08978A08:
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A20;
      }
      goto L_08978A14;
    }
L_08978A14:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978A7C;
      }
      goto L_08978A20;
    }
L_08978A20:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    goto L_08978A28;
L_08978A28:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978A08;
      }
      goto L_08978A30;
    }
L_08978A30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897898C;
      }
      goto L_08978A3C;
    }
L_08978A3C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978A54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978A54u) goto L_08978A54;
    return;
L_08978A54:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9340));
    ctx.set_gpr(31, 0x08978A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08978A64u) goto L_08978A64;
    return;
L_08978A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897898C;
      }
      goto L_08978A6C;
    }
L_08978A6C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897898C;
      }
      goto L_08978A7C;
    }
L_08978A7C:
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
L_08978AA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978B94;
      }
      goto L_08978AD0;
    }
L_08978AD0:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978B90;
      }
      goto L_08978AE4;
    }
L_08978AE4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978B84;
      }
      goto L_08978AF0;
    }
L_08978AF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978B7C;
      }
      goto L_08978AFC;
    }
L_08978AFC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978B70;
      }
      goto L_08978B08;
    }
L_08978B08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] << (ctx.gpr[16] & 31u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978B6C;
      }
      goto L_08978B20;
    }
L_08978B20:
    ctx.set_gpr(3, ctx.gpr[19] << 27u);
    ctx.set_gpr(2, ctx.gpr[17] << 17u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] << 12u);
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978B4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978B4Cu) goto L_08978B4C;
    return;
L_08978B4C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1104));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08978B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08978B64u) goto L_08978B64;
    return;
L_08978B64:
    ctx.set_gpr(31, 0x08978B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08978B6Cu) goto L_08978B6C;
    return;
L_08978B6C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08978B70;
L_08978B70:
    ctx.set_gpr(3, ctx.gpr[16] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978B08;
      }
      goto L_08978B7C;
    }
L_08978B7C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_08978B84;
L_08978B84:
    ctx.set_gpr(3, ctx.gpr[17] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978AF0;
      }
      goto L_08978B90;
    }
L_08978B90:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08978B94;
L_08978B94:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978AD0;
      }
      goto L_08978BA0;
    }
L_08978BA0:
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
L_08978BC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08978BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 861u, 0x0892F91Cu>(ctx, &aot_mem) && ctx.pc == 0x08978BD8u) goto L_08978BD8;
    return;
L_08978BD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978BE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08978BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 543u, 0x0892E554u>(ctx, &aot_mem) && ctx.pc == 0x08978BF8u) goto L_08978BF8;
    return;
L_08978BF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978C08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978C54;
      }
      goto L_08978C2C;
    }
L_08978C2C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08978C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08978C38u) goto L_08978C38;
    return;
L_08978C38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978C4C;
      }
      goto L_08978C40;
    }
L_08978C40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08978C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08978C4Cu) goto L_08978C4C;
    return;
L_08978C4C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08978C54;
L_08978C54:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08978C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08978C68u) goto L_08978C68;
    return;
L_08978C68:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978C98;
      }
      goto L_08978C7C;
    }
L_08978C7C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978C98;
      }
      goto L_08978C94;
    }
L_08978C94:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08978C98;
L_08978C98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978CC4;
      }
      goto L_08978CA0;
    }
L_08978CA0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978CC4;
      }
      goto L_08978CB8;
    }
L_08978CB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08978CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08978CC4u) goto L_08978CC4;
    return;
L_08978CC4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08978CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08978CD8u) goto L_08978CD8;
    return;
L_08978CD8:
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
L_08978CF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978D18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978D18u) goto L_08978D18;
    return;
L_08978D18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978D50;
      }
      goto L_08978D28;
    }
L_08978D28:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08978D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08978D34u) goto L_08978D34;
    return;
L_08978D34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978D48;
      }
      goto L_08978D3C;
    }
L_08978D3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08978D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08978D48u) goto L_08978D48;
    return;
L_08978D48:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08978D50;
L_08978D50:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08978D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08978D64u) goto L_08978D64;
    return;
L_08978D64:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978D94;
      }
      goto L_08978D78;
    }
L_08978D78:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978D94;
      }
      goto L_08978D90;
    }
L_08978D90:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08978D94;
L_08978D94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978DC0;
      }
      goto L_08978D9C;
    }
L_08978D9C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978DC0;
      }
      goto L_08978DB4;
    }
L_08978DB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08978DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08978DC0u) goto L_08978DC0;
    return;
L_08978DC0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08978DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08978DD0u) goto L_08978DD0;
    return;
L_08978DD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08978DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x08978DDCu) goto L_08978DDC;
    return;
L_08978DDC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08978DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08978DECu) goto L_08978DEC;
    return;
L_08978DEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08978E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 228u, 0x0891D098u>(ctx, &aot_mem) && ctx.pc == 0x08978E04u) goto L_08978E04;
    return;
L_08978E04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978E1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978E1Cu) goto L_08978E1C;
    return;
L_08978E1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08978E58;
      }
      goto L_08978E28;
    }
L_08978E28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9396));
    ctx.set_gpr(31, 0x08978E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08978E44u) goto L_08978E44;
    return;
L_08978E44:
    ctx.set_gpr(31, 0x08978E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08978E4Cu) goto L_08978E4C;
    return;
L_08978E4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978E5C;
      }
      goto L_08978E58;
    }
L_08978E58:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08978E5C;
L_08978E5C:
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
L_08978E74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978E98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978E98u) goto L_08978E98;
    return;
L_08978E98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978EACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978EACu) goto L_08978EAC;
    return;
L_08978EAC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978EC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978F04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978F04u) goto L_08978F04;
    return;
L_08978F04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08978F58;
      }
      goto L_08978F10;
    }
L_08978F10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9416));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08978F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08978F30u) goto L_08978F30;
    return;
L_08978F30:
    ctx.set_gpr(31, 0x08978F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08978F38u) goto L_08978F38;
    return;
L_08978F38:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978F4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978F4Cu) goto L_08978F4C;
    return;
L_08978F4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979050;
      }
      goto L_08978F58;
    }
L_08978F58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978FC8;
      }
      goto L_08978F64;
    }
L_08978F64:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08978F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x08978F74u) goto L_08978F74;
    return;
L_08978F74:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978FC8;
      }
      goto L_08978F80;
    }
L_08978F80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9456));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08978FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08978FA0u) goto L_08978FA0;
    return;
L_08978FA0:
    ctx.set_gpr(31, 0x08978FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08978FA8u) goto L_08978FA8;
    return;
L_08978FA8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978FBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978FBCu) goto L_08978FBC;
    return;
L_08978FBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979050;
      }
      goto L_08978FC8;
    }
L_08978FC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08978FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08978FDCu) goto L_08978FDC;
    return;
L_08978FDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08978FFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08978FFCu) goto L_08978FFC;
    return;
L_08978FFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897904C;
      }
      goto L_08979008;
    }
L_08979008:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5800));
    ctx.set_gpr(31, 0x08979024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08979024u) goto L_08979024;
    return;
L_08979024:
    ctx.set_gpr(31, 0x0897902Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897902Cu) goto L_0897902C;
    return;
L_0897902C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979040u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979040u) goto L_08979040;
    return;
L_08979040:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979050;
      }
      goto L_0897904C;
    }
L_0897904C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08979050;
L_08979050:
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
L_08979070:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897907C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979088:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979094:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897909C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089790A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089790AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089790ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089790ECu) goto L_089790EC;
    return;
L_089790EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979114u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979114u) goto L_08979114;
    return;
L_08979114:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979130u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979130u) goto L_08979130;
    return;
L_08979130:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979148u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979148u) goto L_08979148;
    return;
L_08979148:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897915Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897915Cu) goto L_0897915C;
    return;
L_0897915C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0897916Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897916Cu) goto L_0897916C;
    return;
L_0897916C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
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
L_08979194:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 2200u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28500));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089791C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089791C0u) goto L_089791C0;
    return;
L_089791C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089791D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089791D8u) goto L_089791D8;
    return;
L_089791D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089791EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089791F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979214;
      }
      goto L_08979208;
    }
L_08979208:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979228;
      }
      goto L_08979214;
    }
L_08979214:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979228u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979228u) goto L_08979228;
    return;
L_08979228:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979254u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979254u) goto L_08979254;
    return;
L_08979254:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897929Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897929Cu) goto L_0897929C;
    return;
L_0897929C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089792E0;
      }
      goto L_089792A4;
    }
L_089792A4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089792E0;
      }
      goto L_089792AC;
    }
L_089792AC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089792C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089792C8u) goto L_089792C8;
    return;
L_089792C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089792E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089792E0u) goto L_089792E0;
    return;
L_089792E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089792FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089792FCu) goto L_089792FC;
    return;
L_089792FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897931C;
      }
      goto L_08979308;
    }
L_08979308:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979320;
      }
      goto L_0897931C;
    }
L_0897931C:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_08979320;
L_08979320:
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
L_08979340:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979390;
      }
      goto L_0897935C;
    }
L_0897935C:
    ctx.set_gpr(31, 0x08979364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 566u, 0x0892E720u>(ctx, &aot_mem) && ctx.pc == 0x08979364u) goto L_08979364;
    return;
L_08979364:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] & 3u);
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08979390;
L_08979390:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089793A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089793D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 575u, 0x0892E7DCu>(ctx, &aot_mem) && ctx.pc == 0x089793D8u) goto L_089793D8;
    return;
L_089793D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089793E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089793F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892E848u>(ctx, &aot_mem) && ctx.pc == 0x089793F8u) goto L_089793F8;
    return;
L_089793F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979408:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979424;
      }
      goto L_0897941C;
    }
L_0897941C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979428;
      }
      goto L_08979424;
    }
L_08979424:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08979428;
L_08979428:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979430:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979448;
      }
      goto L_08979440;
    }
L_08979440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979480;
      }
      goto L_08979448;
    }
L_08979448:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979474;
      }
      goto L_0897945C;
    }
L_0897945C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08979474;
L_08979474:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897945C;
      }
      goto L_08979480;
    }
L_08979480:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(376)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089794A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089794A8u) goto L_089794A8;
    return;
L_089794A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089794C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089794E0;
      }
      goto L_089794D8;
    }
L_089794D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089794E4;
      }
      goto L_089794E0;
    }
L_089794E0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089794E4;
L_089794E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089794EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979514;
      }
      goto L_08979508;
    }
L_08979508:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089795F0;
      }
      goto L_08979514;
    }
L_08979514:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897954C;
      }
      goto L_08979538;
    }
L_08979538:
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089795D4;
      }
      goto L_0897954C;
    }
L_0897954C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897956Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897956Cu) goto L_0897956C;
    return;
L_0897956C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089795C8;
      }
      goto L_08979574;
    }
L_08979574:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089795C8;
      }
      goto L_08979580;
    }
L_08979580:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089795C8;
      }
      goto L_08979588;
    }
L_08979588:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089795A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089795A0u) goto L_089795A0;
    return;
L_089795A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9500));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9644));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089795C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089795C8u) goto L_089795C8;
    return;
L_089795C8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089795F0;
      }
      goto L_089795D4;
    }
L_089795D4:
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    goto L_089795F0;
L_089795F0:
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
L_08979608:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979628;
      }
      goto L_08979624;
    }
L_08979624:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08979628;
L_08979628:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979640;
      }
      goto L_08979638;
    }
L_08979638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979644;
      }
      goto L_08979640;
    }
L_08979640:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08979644;
L_08979644:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979658;
      }
      goto L_0897964C;
    }
L_0897964C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979730;
      }
      goto L_08979658;
    }
L_08979658:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897968C;
      }
      goto L_08979678;
    }
L_08979678:
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979714;
      }
      goto L_0897968C;
    }
L_0897968C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089796ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089796ACu) goto L_089796AC;
    return;
L_089796AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979708;
      }
      goto L_089796B4;
    }
L_089796B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08979708;
      }
      goto L_089796C0;
    }
L_089796C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08979708;
      }
      goto L_089796C8;
    }
L_089796C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089796E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089796E0u) goto L_089796E0;
    return;
L_089796E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9500));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9656));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08979708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08979708u) goto L_08979708;
    return;
L_08979708:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979730;
      }
      goto L_08979714;
    }
L_08979714:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    goto L_08979730;
L_08979730:
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
L_08979748:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979774;
      }
      goto L_08979770;
    }
L_08979770:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08979774;
L_08979774:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979788;
      }
      goto L_0897977C;
    }
L_0897977C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979878;
      }
      goto L_08979788;
    }
L_08979788:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089797C0;
      }
      goto L_089797AC;
    }
L_089797AC:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979848;
      }
      goto L_089797C0;
    }
L_089797C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089797E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089797E0u) goto L_089797E0;
    return;
L_089797E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897983C;
      }
      goto L_089797E8;
    }
L_089797E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897983C;
      }
      goto L_089797F4;
    }
L_089797F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897983C;
      }
      goto L_089797FC;
    }
L_089797FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979814u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979814u) goto L_08979814;
    return;
L_08979814:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9500));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9672));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0897983Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897983Cu) goto L_0897983C;
    return;
L_0897983C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979878;
      }
      goto L_08979848;
    }
L_08979848:
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08979874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08979874u) goto L_08979874;
    return;
L_08979874:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08979878;
L_08979878:
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
L_08979894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089798C0;
      }
      goto L_089798BC;
    }
L_089798BC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_089798C0;
L_089798C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089798D8;
      }
      goto L_089798D0;
    }
L_089798D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089798DC;
      }
      goto L_089798D8;
    }
L_089798D8:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    goto L_089798DC;
L_089798DC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089798F0;
      }
      goto L_089798E4;
    }
L_089798E4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089799DC;
      }
      goto L_089798F0;
    }
L_089798F0:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08979924;
      }
      goto L_08979910;
    }
L_08979910:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089799AC;
      }
      goto L_08979924;
    }
L_08979924:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979944u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979944u) goto L_08979944;
    return;
L_08979944:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089799A0;
      }
      goto L_0897994C;
    }
L_0897994C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089799A0;
      }
      goto L_08979958;
    }
L_08979958:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089799A0;
      }
      goto L_08979960;
    }
L_08979960:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979978u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979978u) goto L_08979978;
    return;
L_08979978:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9500));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9684));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089799A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089799A0u) goto L_089799A0;
    return;
L_089799A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089799DC;
      }
      goto L_089799AC;
    }
L_089799AC:
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089799D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089799D8u) goto L_089799D8;
    return;
L_089799D8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_089799DC;
L_089799DC:
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
L_089799F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979A40;
      }
      goto L_08979A24;
    }
L_08979A24:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979A38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979A38u) goto L_08979A38;
    return;
L_08979A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979A44;
      }
      goto L_08979A40;
    }
L_08979A40:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08979A44;
L_08979A44:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979ABC;
      }
      goto L_08979A50;
    }
L_08979A50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979AA4;
      }
      goto L_08979A58;
    }
L_08979A58:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979A70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979A70u) goto L_08979A70;
    return;
L_08979A70:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979A84;
      }
      goto L_08979A7C;
    }
L_08979A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979A88;
      }
      goto L_08979A84;
    }
L_08979A84:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08979A88;
L_08979A88:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979AA4;
      }
      goto L_08979A90;
    }
L_08979A90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08979AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08979AA4u) goto L_08979AA4;
    return;
L_08979AA4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979ABCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979ABCu) goto L_08979ABC;
    return;
L_08979ABC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08979AE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979B2C;
      }
      goto L_08979B0C;
    }
L_08979B0C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979B24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979B24u) goto L_08979B24;
    return;
L_08979B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979B30;
      }
      goto L_08979B2C;
    }
L_08979B2C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08979B30;
L_08979B30:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979BA8;
      }
      goto L_08979B3C;
    }
L_08979B3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979B90;
      }
      goto L_08979B44;
    }
L_08979B44:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979B5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979B5Cu) goto L_08979B5C;
    return;
L_08979B5C:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979B70;
      }
      goto L_08979B68;
    }
L_08979B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979B74;
      }
      goto L_08979B70;
    }
L_08979B70:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08979B74;
L_08979B74:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979B90;
      }
      goto L_08979B7C;
    }
L_08979B7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08979B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08979B90u) goto L_08979B90;
    return;
L_08979B90:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979BA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979BA8u) goto L_08979BA8;
    return;
L_08979BA8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08979BCC:
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979BF0;
      }
      goto L_08979BDC;
    }
L_08979BDC:
    ctx.set_gpr(2, ctx.gpr[9] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08979BF0;
L_08979BF0:
    ctx.set_gpr(3, ctx.gpr[5] & 65535u);
    ctx.set_gpr(2, ctx.gpr[9] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979BDC;
      }
      goto L_08979C00;
    }
L_08979C00:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(3));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(11, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979CA4;
      }
      goto L_08979C30;
    }
L_08979C30:
    ctx.set_gpr(13, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979C88;
      }
      goto L_08979C40;
    }
L_08979C40:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[12] & ctx.gpr[13]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[13] & ctx.gpr[2]);
    ctx.set_gpr(11, ctx.gpr[9] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[11]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[12] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08979C88;
L_08979C88:
    ctx.set_gpr(2, ctx.gpr[9] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979C40;
      }
      goto L_08979C94;
    }
L_08979C94:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[8]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979D70;
      }
      goto L_08979CA4;
    }
L_08979CA4:
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[11] - ctx.gpr[9]);
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979D44;
      }
      goto L_08979CC0;
    }
L_08979CC0:
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979D1C;
      }
      goto L_08979CCC;
    }
L_08979CCC:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(10, ctx.gpr[14] & ctx.gpr[2]);
    ctx.set_gpr(10, ctx.gpr[11] - ctx.gpr[10]);
    ctx.set_gpr(11, ctx.gpr[2] & ctx.gpr[10]);
    ctx.set_gpr(13, ctx.gpr[9] << 2u);
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[13]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[11] + ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[8] - ctx.gpr[5]);
    ctx.set_gpr(10, ctx.gpr[10] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979D28;
      }
      goto L_08979D00;
    }
L_08979D00:
    ctx.set_gpr(11, ctx.gpr[14] + ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[7] + ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08979D1C;
L_08979D1C:
    ctx.set_gpr(10, ctx.gpr[9] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979CCC;
      }
      goto L_08979D28;
    }
L_08979D28:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08979D44;
      }
      goto L_08979D30;
    }
L_08979D30:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[8]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979D70;
      }
      goto L_08979D44;
    }
L_08979D44:
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979D60;
      }
      goto L_08979D50;
    }
L_08979D50:
    ctx.set_gpr(2, ctx.gpr[9] << 2u);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08979D60;
L_08979D60:
    ctx.set_gpr(2, ctx.gpr[9] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979D50;
      }
      goto L_08979D6C;
    }
L_08979D6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08979D70;
L_08979D70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979D78:
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979DC8;
      }
      goto L_08979D8C;
    }
L_08979D8C:
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979DBC;
      }
      goto L_08979DB4;
    }
L_08979DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979DC0;
      }
      goto L_08979DBC;
    }
L_08979DBC:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08979DC0;
L_08979DC0:
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08979DC8;
L_08979DC8:
    ctx.set_gpr(2, ctx.gpr[5] & 65535u);
    ctx.set_gpr(3, ctx.gpr[9] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979D8C;
      }
      goto L_08979DD8;
    }
L_08979DD8:
    ctx.set_gpr(12, ctx.gpr[10] - ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, ctx.gpr[9] - ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979E9C;
      }
      goto L_08979E04;
    }
L_08979E04:
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979E80;
      }
      goto L_08979E10;
    }
L_08979E10:
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979E34;
      }
      goto L_08979E2C;
    }
L_08979E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979E38;
      }
      goto L_08979E34;
    }
L_08979E34:
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    goto L_08979E38;
L_08979E38:
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, ctx.gpr[13] & ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[11] - ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[10] & ctx.gpr[3]);
    ctx.set_gpr(12, ctx.gpr[9] << 2u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[12]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[13] + ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08979E80;
L_08979E80:
    ctx.set_gpr(3, ctx.gpr[9] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979E10;
      }
      goto L_08979E8C;
    }
L_08979E8C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979F80;
      }
      goto L_08979E9C;
    }
L_08979E9C:
    ctx.set_gpr(9, ctx.gpr[11] - ctx.gpr[12]);
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979F54;
      }
      goto L_08979EAC;
    }
L_08979EAC:
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979F2C;
      }
      goto L_08979EB8;
    }
L_08979EB8:
    ctx.set_gpr(14, ctx.gpr[9] << 2u);
    ctx.set_gpr(10, ctx.gpr[8] + ctx.gpr[14]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979EDC;
      }
      goto L_08979ED4;
    }
L_08979ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979EE0;
      }
      goto L_08979EDC;
    }
L_08979EDC:
    ctx.set_gpr(12, ctx.gpr[10] + 0u);
    goto L_08979EE0;
L_08979EE0:
    ctx.set_gpr(11, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(10, ctx.gpr[13] & ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[12] - ctx.gpr[10]);
    ctx.set_gpr(11, ctx.gpr[11] & ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[14]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[11] + ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[10] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979F38;
      }
      goto L_08979F10;
    }
L_08979F10:
    ctx.set_gpr(11, ctx.gpr[13] + ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[7] + ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08979F2C;
L_08979F2C:
    ctx.set_gpr(10, ctx.gpr[9] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979EB8;
      }
      goto L_08979F38;
    }
L_08979F38:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08979F54;
      }
      goto L_08979F40;
    }
L_08979F40:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979F80;
      }
      goto L_08979F54;
    }
L_08979F54:
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979F70;
      }
      goto L_08979F60;
    }
L_08979F60:
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08979F70;
L_08979F70:
    ctx.set_gpr(3, ctx.gpr[9] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979F60;
      }
      goto L_08979F7C;
    }
L_08979F7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08979F80;
L_08979F80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979F88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979F94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08979FBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08979FBCu) goto L_08979FBC;
    return;
L_08979FBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979FD0;
      }
      goto L_08979FC4;
    }
L_08979FC4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A01C;
      }
      goto L_08979FD0;
    }
L_08979FD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A008;
      }
      goto L_08979FF4;
    }
L_08979FF4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[3]);
    goto L_0897A008;
L_0897A008:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979FF4;
      }
      goto L_0897A014;
    }
L_0897A014:
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    goto L_0897A01C;
L_0897A01C:
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
L_0897A034:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[8] - ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[5] << 2u);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A0F8;
      }
      goto L_0897A064;
    }
L_0897A064:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[8]);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A094;
      }
      goto L_0897A074;
    }
L_0897A074:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[6] << 1u);
    ctx.set_gpr(7, ctx.gpr[7] >> 1u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[6]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0897A094;
L_0897A094:
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A074;
      }
      goto L_0897A0A4;
    }
L_0897A0A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A0C4;
      }
      goto L_0897A0AC;
    }
L_0897A0AC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[7] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    goto L_0897A0C4;
L_0897A0C4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897A0E8;
      }
      goto L_0897A0D4;
    }
L_0897A0D4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 32768u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A0AC;
      }
      goto L_0897A0E8;
    }
L_0897A0E8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A164;
      }
      goto L_0897A0F8;
    }
L_0897A0F8:
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] >> 1u);
    ctx.set_gpr(7, ctx.gpr[8] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A128;
      }
      goto L_0897A114;
    }
L_0897A114:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] >> 1u);
    ctx.set_gpr(7, ctx.gpr[7] - ctx.gpr[4]);
    goto L_0897A128;
L_0897A128:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A114;
      }
      goto L_0897A134;
    }
L_0897A134:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A158;
      }
      goto L_0897A140;
    }
L_0897A140:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0897A158;
L_0897A158:
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A140;
      }
      goto L_0897A164;
    }
L_0897A164:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A16C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A278;
      }
      goto L_0897A18C;
    }
L_0897A18C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A19Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A19Cu) goto L_0897A19C;
    return;
L_0897A19C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A278;
      }
      goto L_0897A1A4;
    }
L_0897A1A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A22C;
      }
      goto L_0897A1C4;
    }
L_0897A1C4:
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A1F8;
      }
      goto L_0897A1E0;
    }
L_0897A1E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_0897A1F8;
L_0897A1F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897A21C;
      }
      goto L_0897A208;
    }
L_0897A208:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A1E0;
      }
      goto L_0897A21C;
    }
L_0897A21C:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A278;
      }
      goto L_0897A22C;
    }
L_0897A22C:
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A25C;
      }
      goto L_0897A248;
    }
L_0897A248:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[3]);
    goto L_0897A25C;
L_0897A25C:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A248;
      }
      goto L_0897A268;
    }
L_0897A268:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0897A278;
L_0897A278:
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
L_0897A290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0897A2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x0897A2A8u) goto L_0897A2A8;
    return;
L_0897A2A8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A2C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A2C8u) goto L_0897A2C8;
    return;
L_0897A2C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A2E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A2E0u) goto L_0897A2E0;
    return;
L_0897A2E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A2F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A2F8u) goto L_0897A2F8;
    return;
L_0897A2F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A310u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A310u) goto L_0897A310;
    return;
L_0897A310:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A324:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A344u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A344u) goto L_0897A344;
    return;
L_0897A344:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A360;
      }
      goto L_0897A34C;
    }
L_0897A34C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A360u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A360u) goto L_0897A360;
    return;
L_0897A360:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897A36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 298u, 0x089514E0u>(ctx, &aot_mem) && ctx.pc == 0x0897A36Cu) goto L_0897A36C;
    return;
L_0897A36C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A380:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A3C0;
      }
      goto L_0897A39C;
    }
L_0897A39C:
    ctx.set_gpr(31, 0x0897A3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0897A3A4u) goto L_0897A3A4;
    return;
L_0897A3A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897A3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 111u, 0x088F8A08u>(ctx, &aot_mem) && ctx.pc == 0x0897A3B0u) goto L_0897A3B0;
    return;
L_0897A3B0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897A3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0897A3C0u) goto L_0897A3C0;
    return;
L_0897A3C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A3E4;
      }
      goto L_0897A3D8;
    }
L_0897A3D8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897A3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897A3E4u) goto L_0897A3E4;
    return;
L_0897A3E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897A41C;
      }
      goto L_0897A3F4;
    }
L_0897A3F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A410;
      }
      goto L_0897A404;
    }
L_0897A404:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A41C;
      }
      goto L_0897A410;
    }
L_0897A410:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897A41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0897A41Cu) goto L_0897A41C;
    return;
L_0897A41C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A430u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A430u) goto L_0897A430;
    return;
L_0897A430:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A44C;
      }
      goto L_0897A438;
    }
L_0897A438:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A44Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A44Cu) goto L_0897A44C;
    return;
L_0897A44C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A464u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A464u) goto L_0897A464;
    return;
L_0897A464:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A47Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A47Cu) goto L_0897A47C;
    return;
L_0897A47C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A490u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A490u) goto L_0897A490;
    return;
L_0897A490:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A4A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A4A4u) goto L_0897A4A4;
    return;
L_0897A4A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A4C0;
      }
      goto L_0897A4AC;
    }
L_0897A4AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A4C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A4C0u) goto L_0897A4C0;
    return;
L_0897A4C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A4D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A4D8u) goto L_0897A4D8;
    return;
L_0897A4D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A4F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A4F0u) goto L_0897A4F0;
    return;
L_0897A4F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A504u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A504u) goto L_0897A504;
    return;
L_0897A504:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A520:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A544u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A544u) goto L_0897A544;
    return;
L_0897A544:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A558u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A558u) goto L_0897A558;
    return;
L_0897A558:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A570:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A57C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A5A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A5A0u) goto L_0897A5A0;
    return;
L_0897A5A0:
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A5BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A5ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A5ECu) goto L_0897A5EC;
    return;
L_0897A5EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A600;
      }
      goto L_0897A5F4;
    }
L_0897A5F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A698;
      }
      goto L_0897A600;
    }
L_0897A600:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A618u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A618u) goto L_0897A618;
    return;
L_0897A618:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897A62C;
      }
      goto L_0897A624;
    }
L_0897A624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A698;
      }
      goto L_0897A62C;
    }
L_0897A62C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A664;
      }
      goto L_0897A640;
    }
L_0897A640:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897A664;
      }
      goto L_0897A648;
    }
L_0897A648:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A664;
      }
      goto L_0897A654;
    }
L_0897A654:
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0897A664;
L_0897A664:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A694u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A694u) goto L_0897A694;
    return;
L_0897A694:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0897A698;
L_0897A698:
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
L_0897A6B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A6E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A6E4u) goto L_0897A6E4;
    return;
L_0897A6E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A6F8;
      }
      goto L_0897A6EC;
    }
L_0897A6EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A774;
      }
      goto L_0897A6F8;
    }
L_0897A6F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A710u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A710u) goto L_0897A710;
    return;
L_0897A710:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897A724;
      }
      goto L_0897A71C;
    }
L_0897A71C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A774;
      }
      goto L_0897A724;
    }
L_0897A724:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A770u) goto L_0897A770;
    return;
L_0897A770:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0897A774;
L_0897A774:
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
L_0897A790:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A7B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A7B0u) goto L_0897A7B0;
    return;
L_0897A7B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A7C4;
      }
      goto L_0897A7B8;
    }
L_0897A7B8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A7D8;
      }
      goto L_0897A7C4;
    }
L_0897A7C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A7D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A7D8u) goto L_0897A7D8;
    return;
L_0897A7D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A7EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A814u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A814u) goto L_0897A814;
    return;
L_0897A814:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A82C;
      }
      goto L_0897A81C;
    }
L_0897A81C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A830;
      }
      goto L_0897A82C;
    }
L_0897A82C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0897A830;
L_0897A830:
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
L_0897A848:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A854:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13672));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A86C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A8A4;
      }
      goto L_0897A884;
    }
L_0897A884:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13672));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897A8A4;
      }
      goto L_0897A89C;
    }
L_0897A89C:
    ctx.set_gpr(31, 0x0897A8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0897A8A4u) goto L_0897A8A4;
    return;
L_0897A8A4:
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
L_0897A8BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A918;
      }
      goto L_0897A8E0;
    }
L_0897A8E0:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(31460));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A914;
      }
      goto L_0897A8FC;
    }
L_0897A8FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897A910u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A910u) goto L_0897A910;
    return;
L_0897A910:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0897A914;
L_0897A914:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0897A918;
L_0897A918:
    ctx.set_gpr(3, ctx.gpr[17] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A8E0;
      }
      goto L_0897A924;
    }
L_0897A924:
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
L_0897A940:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0897A960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 487u, 0x0881201Cu>(ctx, &aot_mem) && ctx.pc == 0x0897A960u) goto L_0897A960;
    return;
L_0897A960:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31724)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897A990;
      }
      goto L_0897A974;
    }
L_0897A974:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31720)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A990;
      }
      goto L_0897A984;
    }
L_0897A984:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0897A990u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A990u) goto L_0897A990;
    return;
L_0897A990:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0897A9AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0897A9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 487u, 0x0881201Cu>(ctx, &aot_mem) && ctx.pc == 0x0897A9CCu) goto L_0897A9CC;
    return;
L_0897A9CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31724)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897A9FC;
      }
      goto L_0897A9E0;
    }
L_0897A9E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31720)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A9FC;
      }
      goto L_0897A9F0;
    }
L_0897A9F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0897A9FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A9FCu) goto L_0897A9FC;
    return;
L_0897A9FC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0897AA18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0897AA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 686u, 0x0880F2A4u>(ctx, &aot_mem) && ctx.pc == 0x0897AA30u) goto L_0897AA30;
    return;
L_0897AA30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AA40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0897AA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 224u, 0x08814F48u>(ctx, &aot_mem) && ctx.pc == 0x0897AA58u) goto L_0897AA58;
    return;
L_0897AA58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AA68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AA8C;
      }
      goto L_0897AA88;
    }
L_0897AA88:
    ctx.set_gpr(17, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    goto L_0897AA8C;
L_0897AA8C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0897AA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0897AA98u) goto L_0897AA98;
    return;
L_0897AA98:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AAB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AAB0u) goto L_0897AAB0;
    return;
L_0897AAB0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AACC;
      }
      goto L_0897AABC;
    }
L_0897AABC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0897AACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0897AACCu) goto L_0897AACC;
    return;
L_0897AACC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0897AAE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897AAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 489u, 0x08812048u>(ctx, &aot_mem) && ctx.pc == 0x0897AAFCu) goto L_0897AAFC;
    return;
L_0897AAFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AB0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AB2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AB2Cu) goto L_0897AB2C;
    return;
L_0897AB2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AB3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AB54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AB54u) goto L_0897AB54;
    return;
L_0897AB54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AB64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ABBC;
      }
      goto L_0897AB98;
    }
L_0897AB98:
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(6, ctx.gpr[19] - ctx.gpr[18]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897ABB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897ABB0u) goto L_0897ABB0;
    return;
L_0897ABB0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AC58;
      }
      goto L_0897ABBC;
    }
L_0897ABBC:
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[18] - ctx.gpr[19]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897ABD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897ABD4u) goto L_0897ABD4;
    return;
L_0897ABD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897ABEC;
      }
      goto L_0897ABE0;
    }
L_0897ABE0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AC58;
      }
      goto L_0897ABEC;
    }
L_0897ABEC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AC08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AC08u) goto L_0897AC08;
    return;
L_0897AC08:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897AC24;
      }
      goto L_0897AC18;
    }
L_0897AC18:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AC58;
      }
      goto L_0897AC24;
    }
L_0897AC24:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0897AC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0897AC38u) goto L_0897AC38;
    return;
L_0897AC38:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AC54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AC54u) goto L_0897AC54;
    return;
L_0897AC54:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_0897AC58;
L_0897AC58:
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
L_0897AC78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AC90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AC90u) goto L_0897AC90;
    return;
L_0897AC90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ACA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897ACB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897ACB8u) goto L_0897ACB8;
    return;
L_0897ACB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ACC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897ACE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897ACE0u) goto L_0897ACE0;
    return;
L_0897ACE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ACF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AD18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AD18u) goto L_0897AD18;
    return;
L_0897AD18:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897AD48;
      }
      goto L_0897AD28;
    }
L_0897AD28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AD44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AD44u) goto L_0897AD44;
    return;
L_0897AD44:
    ctx.set_gpr(5, 0u + 0u);
    goto L_0897AD48;
L_0897AD48:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
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
L_0897AD64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897ADE0;
      }
      goto L_0897AD84;
    }
L_0897AD84:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AD94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AD94u) goto L_0897AD94;
    return;
L_0897AD94:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897ADB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897ADB0u) goto L_0897ADB0;
    return;
L_0897ADB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897ADD8;
      }
      goto L_0897ADBC;
    }
L_0897ADBC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897ADD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897ADD8u) goto L_0897ADD8;
    return;
L_0897ADD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AE40;
      }
      goto L_0897ADE0;
    }
L_0897ADE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897AE30;
      }
      goto L_0897ADE8;
    }
L_0897ADE8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897ADF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897ADF8u) goto L_0897ADF8;
    return;
L_0897ADF8:
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(6, 0u - ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AE14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AE14u) goto L_0897AE14;
    return;
L_0897AE14:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AE28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AE28u) goto L_0897AE28;
    return;
L_0897AE28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AE40;
      }
      goto L_0897AE30;
    }
L_0897AE30:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AE40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AE40u) goto L_0897AE40;
    return;
L_0897AE40:
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
L_0897AE58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897AE9C;
      }
      goto L_0897AE90;
    }
L_0897AE90:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B168;
      }
      goto L_0897AE9C;
    }
L_0897AE9C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AEACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AEACu) goto L_0897AEAC;
    return;
L_0897AEAC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AF40;
      }
      goto L_0897AEB4;
    }
L_0897AEB4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AECCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AECCu) goto L_0897AECC;
    return;
L_0897AECC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897B0B4;
      }
      goto L_0897AEDC;
    }
L_0897AEDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31444)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9700)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AF1C;
      }
      goto L_0897AEFC;
    }
L_0897AEFC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AF10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AF10u) goto L_0897AF10;
    return;
L_0897AF10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B168;
      }
      goto L_0897AF1C;
    }
L_0897AF1C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AF34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AF34u) goto L_0897AF34;
    return;
L_0897AF34:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B0B4;
      }
      goto L_0897AF40;
    }
L_0897AF40:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AF5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AF5Cu) goto L_0897AF5C;
    return;
L_0897AF5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AF70;
      }
      goto L_0897AF64;
    }
L_0897AF64:
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B0B4;
      }
      goto L_0897AF70;
    }
L_0897AF70:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AF84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AF84u) goto L_0897AF84;
    return;
L_0897AF84:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0897B004;
      }
      goto L_0897AF90;
    }
L_0897AF90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31444)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9700)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AEFC;
      }
      goto L_0897AFB0;
    }
L_0897AFB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AFC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AFC8u) goto L_0897AFC8;
    return;
L_0897AFC8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0897B0B4;
      }
      goto L_0897AFD4;
    }
L_0897AFD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897B0B4;
      }
      goto L_0897AFE0;
    }
L_0897AFE0:
    ctx.set_gpr(5, 0u - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897AFF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AFF8u) goto L_0897AFF8;
    return;
L_0897AFF8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B0B4;
      }
      goto L_0897B004;
    }
L_0897B004:
    ctx.set_gpr(1, ctx.gpr[21] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B0B4;
      }
      goto L_0897B010;
    }
L_0897B010:
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(1, ctx.gpr[21] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B0B4;
      }
      goto L_0897B020;
    }
L_0897B020:
    ctx.set_gpr(6, ctx.gpr[21] - ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B03Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B03Cu) goto L_0897B03C;
    return;
L_0897B03C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B0B4;
      }
      goto L_0897B044;
    }
L_0897B044:
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[21]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31444)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9700)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AEFC;
      }
      goto L_0897B068;
    }
L_0897B068:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B080u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B080u) goto L_0897B080;
    return;
L_0897B080:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0897B0B4;
      }
      goto L_0897B08C;
    }
L_0897B08C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897B0B4;
      }
      goto L_0897B098;
    }
L_0897B098:
    ctx.set_gpr(5, 0u - ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B0B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B0B0u) goto L_0897B0B0;
    return;
L_0897B0B0:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    goto L_0897B0B4;
L_0897B0B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897B150;
      }
      goto L_0897B0C0;
    }
L_0897B0C0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B0E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B0E0u) goto L_0897B0E0;
    return;
L_0897B0E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B130;
      }
      goto L_0897B0E8;
    }
L_0897B0E8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B108u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B108u) goto L_0897B108;
    return;
L_0897B108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AEAC;
      }
      goto L_0897B110;
    }
L_0897B110:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B124u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B124u) goto L_0897B124;
    return;
L_0897B124:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B168;
      }
      goto L_0897B130;
    }
L_0897B130:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B150u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B150u) goto L_0897B150;
    return;
L_0897B150:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B164u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B164u) goto L_0897B164;
    return;
L_0897B164:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0897B168;
L_0897B168:
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
L_0897B190:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897B1C4;
      }
      goto L_0897B1B8;
    }
L_0897B1B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B2B0;
      }
      goto L_0897B1C4;
    }
L_0897B1C4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B1D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B1D4u) goto L_0897B1D4;
    return;
L_0897B1D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B1E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B1E8u) goto L_0897B1E8;
    return;
L_0897B1E8:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897B258;
      }
      goto L_0897B1F4;
    }
L_0897B1F4:
    ctx.set_gpr(5, 0u - ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B20Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B20Cu) goto L_0897B20C;
    return;
L_0897B20C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897B298;
      }
      goto L_0897B218;
    }
L_0897B218:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B238u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B238u) goto L_0897B238;
    return;
L_0897B238:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B24Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B24Cu) goto L_0897B24C;
    return;
L_0897B24C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B2B0;
      }
      goto L_0897B258;
    }
L_0897B258:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B274u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B274u) goto L_0897B274;
    return;
L_0897B274:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B28Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B28Cu) goto L_0897B28C;
    return;
L_0897B28C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B2B0;
      }
      goto L_0897B298;
    }
L_0897B298:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B2ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B2ACu) goto L_0897B2AC;
    return;
L_0897B2AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0897B2B0;
L_0897B2B0:
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
L_0897B2CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B2ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B2ECu) goto L_0897B2EC;
    return;
L_0897B2EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B2FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B368;
      }
      goto L_0897B31C;
    }
L_0897B31C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B3C8;
      }
      goto L_0897B324;
    }
L_0897B324:
    ctx.set_gpr(31, 0x0897B32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x0897B32Cu) goto L_0897B32C;
    return;
L_0897B32C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897B338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0897B338u) goto L_0897B338;
    return;
L_0897B338:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897B344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 386u, 0x088E9CF8u>(ctx, &aot_mem) && ctx.pc == 0x0897B344u) goto L_0897B344;
    return;
L_0897B344:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B35Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B35Cu) goto L_0897B35C;
    return;
L_0897B35C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B3C8;
      }
      goto L_0897B368;
    }
L_0897B368:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B3C8;
      }
      goto L_0897B370;
    }
L_0897B370:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B38Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B38Cu) goto L_0897B38C;
    return;
L_0897B38C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B3A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B3A0u) goto L_0897B3A0;
    return;
L_0897B3A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B3C8;
      }
      goto L_0897B3BC;
    }
L_0897B3BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897B3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0897B3C8u) goto L_0897B3C8;
    return;
L_0897B3C8:
    ctx.set_gpr(2, 0u + 0u);
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
L_0897B3E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B40C;
      }
      goto L_0897B3F8;
    }
L_0897B3F8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B40Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B40Cu) goto L_0897B40C;
    return;
L_0897B40C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B41C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B440;
      }
      goto L_0897B430;
    }
L_0897B430:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B440u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B440u) goto L_0897B440;
    return;
L_0897B440:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B450:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B46Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B46Cu) goto L_0897B46C;
    return;
L_0897B46C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B478;
      }
      goto L_0897B474;
    }
L_0897B474:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0897B478;
L_0897B478:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B488:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9704)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897B4A0;
      }
      goto L_0897B49C;
    }
L_0897B49C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0897B4A0;
L_0897B4A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B4A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4096));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B4B4:
    ctx.set_gpr(2, 1u << 16u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B4C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B4D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31448)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B4E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31452)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B4F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31456)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31456), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31440)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B554;
      }
      goto L_0897B520;
    }
L_0897B520:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B554;
      }
      goto L_0897B528;
    }
L_0897B528:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31444)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B554;
      }
      goto L_0897B53C;
    }
L_0897B53C:
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B554u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B554u) goto L_0897B554;
    return;
L_0897B554:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B564:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9700)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B574:
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(9700), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B584:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9704)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B594:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31716)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B5A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B5C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B5C8u) goto L_0897B5C8;
    return;
L_0897B5C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x0897B5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0897B5E0u) goto L_0897B5E0;
    return;
L_0897B5E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897B5F4;
      }
      goto L_0897B5EC;
    }
L_0897B5EC:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31716)));
    goto L_0897B5F4;
L_0897B5F4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(9704)));
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31716)));
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(9704)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31448)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31452)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31456)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(9700)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
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
L_0897B670:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B67C:
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
    ctx.set_gpr(30, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[20] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[20] >> 26u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[22] >> 26u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[20] << 6u);
    ctx.set_gpr(2, ctx.gpr[2] >> 6u);
    ctx.set_gpr(2, ctx.gpr[2] >> 12u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[22] << 6u);
    ctx.set_gpr(2, ctx.gpr[2] >> 6u);
    ctx.set_gpr(2, ctx.gpr[2] >> 12u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B7E0;
      }
      goto L_0897B704;
    }
L_0897B704:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B720;
      }
      goto L_0897B714;
    }
L_0897B714:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B724;
      }
      goto L_0897B720;
    }
L_0897B720:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_0897B724;
L_0897B724:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B740;
      }
      goto L_0897B734;
    }
L_0897B734:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(16384));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B744;
      }
      goto L_0897B740;
    }
L_0897B740:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0897B744;
L_0897B744:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31460));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B7A4;
      }
      goto L_0897B764;
    }
L_0897B764:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897B77Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B77Cu) goto L_0897B77C;
    return;
L_0897B77C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x0897B794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0897B794u) goto L_0897B794;
    return;
L_0897B794:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B7C4;
      }
      goto L_0897B7A4;
    }
L_0897B7A4:
    ctx.set_gpr(6, ctx.gpr[23] - ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x0897B7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 228u, 0x0897D0C4u>(ctx, &aot_mem) && ctx.pc == 0x0897B7C4u) goto L_0897B7C4;
    return;
L_0897B7C4:
    ctx.set_gpr(6, ctx.gpr[23] - ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0897B7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 234u, 0x0897D1DCu>(ctx, &aot_mem) && ctx.pc == 0x0897B7DCu) goto L_0897B7DC;
    return;
L_0897B7DC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0897B7E0;
L_0897B7E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B704;
      }
      goto L_0897B7F0;
    }
L_0897B7F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897B940;
      }
      goto L_0897B7FC;
    }
L_0897B7FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897B8E4;
      }
      goto L_0897B808;
    }
L_0897B808:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897B880;
      }
      goto L_0897B814;
    }
L_0897B814:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B824;
      }
      goto L_0897B81C;
    }
L_0897B81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B99C;
      }
      goto L_0897B824;
    }
L_0897B824:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31444)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31444), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31448)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31448), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31452), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B99C;
      }
      goto L_0897B880;
    }
L_0897B880:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31444)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31444), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31448)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31448), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31452)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31452), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B99C;
      }
      goto L_0897B8E4;
    }
L_0897B8E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31444)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31444), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31448)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31448), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31452), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B99C;
      }
      goto L_0897B940;
    }
L_0897B940:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31444)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31444), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31448)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31448), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31452)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] << 12u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31452), ctx.gpr[3]);
    goto L_0897B99C;
L_0897B99C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9704)));
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B9B8;
      }
      goto L_0897B9B0;
    }
L_0897B9B0:
    ctx.set_gpr(2, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9704), ctx.gpr[20]);
    goto L_0897B9B8;
L_0897B9B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31716)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B9D4;
      }
      goto L_0897B9CC;
    }
L_0897B9CC:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31716), ctx.gpr[22]);
    goto L_0897B9D4;
L_0897B9D4:
    ctx.set_gpr(2, 0u + 0u);
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
L_0897BA0C:
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
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(17, ctx.gpr[5] >> 26u);
    ctx.set_gpr(16, ctx.gpr[3] >> 26u);
    ctx.set_gpr(2, ctx.gpr[5] << 6u);
    ctx.set_gpr(2, ctx.gpr[2] >> 6u);
    ctx.set_gpr(23, ctx.gpr[2] >> 12u);
    ctx.set_gpr(2, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, ctx.gpr[2] >> 6u);
    ctx.set_gpr(30, ctx.gpr[2] >> 12u);
    ctx.set_gpr(21, ctx.gpr[17] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] >> 12u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB24;
      }
      goto L_0897BA6C;
    }
L_0897BA6C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB34;
      }
      goto L_0897BA78;
    }
L_0897BA78:
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31460));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB20;
      }
      goto L_0897BA94;
    }
L_0897BA94:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BAAC;
      }
      goto L_0897BAA0;
    }
L_0897BAA0:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BAB0;
      }
      goto L_0897BAAC;
    }
L_0897BAAC:
    ctx.set_gpr(20, ctx.gpr[23] + 0u);
    goto L_0897BAB0;
L_0897BAB0:
    ctx.set_gpr(1, ctx.gpr[21] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BAC8;
      }
      goto L_0897BABC;
    }
L_0897BABC:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(16384));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BACC;
      }
      goto L_0897BAC8;
    }
L_0897BAC8:
    ctx.set_gpr(22, ctx.gpr[30] + 0u);
    goto L_0897BACC;
L_0897BACC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0897BADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 227u, 0x0897D09Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BADCu) goto L_0897BADC;
    return;
L_0897BADC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897BB30;
      }
      goto L_0897BAE8;
    }
L_0897BAE8:
    ctx.set_gpr(6, ctx.gpr[22] - ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0897BB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 239u, 0x0897D254u>(ctx, &aot_mem) && ctx.pc == 0x0897BB04u) goto L_0897BB04;
    return;
L_0897BB04:
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB1C;
      }
      goto L_0897BB10;
    }
L_0897BB10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB34;
      }
      goto L_0897BB1C;
    }
L_0897BB1C:
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[2]);
    goto L_0897BB20;
L_0897BB20:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0897BB24;
L_0897BB24:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BA78;
      }
      goto L_0897BB30;
    }
L_0897BB30:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0897BB34;
L_0897BB34:
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
L_0897BB68:
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
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9704)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(4095));
    ctx.set_gpr(20, ctx.gpr[2] >> 12u);
    ctx.set_gpr(22, ctx.gpr[21] >> 26u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31716)));
    ctx.set_gpr(23, ctx.gpr[2] >> 26u);
    ctx.set_gpr(19, ctx.gpr[22] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BCDC;
      }
      goto L_0897BBC4;
    }
L_0897BBC4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0897BBE8;
      }
      goto L_0897BBCC;
    }
L_0897BBCC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9704)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, ctx.gpr[2] >> 6u);
    ctx.set_gpr(18, ctx.gpr[2] >> 12u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BBEC;
      }
      goto L_0897BBE8;
    }
L_0897BBE8:
    ctx.set_gpr(18, 0u + 0u);
    goto L_0897BBEC;
L_0897BBEC:
    ctx.set_gpr(2, ctx.gpr[19] << 26u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0897BC18;
      }
      goto L_0897BBFC;
    }
L_0897BBFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31716)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, ctx.gpr[2] >> 6u);
    ctx.set_gpr(30, ctx.gpr[2] >> 12u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BC1C;
      }
      goto L_0897BC18;
    }
L_0897BC18:
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(16384));
    goto L_0897BC1C;
L_0897BC1C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31460));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BCD8;
      }
      goto L_0897BC38;
    }
L_0897BC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BCCC;
      }
      goto L_0897BC40;
    }
L_0897BC40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0897BC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 227u, 0x0897D09Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BC50u) goto L_0897BC50;
    return;
L_0897BC50:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897BCA8;
      }
      goto L_0897BC5C;
    }
L_0897BC5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0897BC78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 239u, 0x0897D254u>(ctx, &aot_mem) && ctx.pc == 0x0897BC78u) goto L_0897BC78;
    return;
L_0897BC78:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BC8C;
      }
      goto L_0897BC80;
    }
L_0897BC80:
    ctx.set_gpr(4, ctx.gpr[18] << 12u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(21, ctx.gpr[3] + ctx.gpr[4]);
    goto L_0897BC8C;
L_0897BC8C:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BCC8;
      }
      goto L_0897BC9C;
    }
L_0897BC9C:
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BCEC;
      }
      goto L_0897BCA8;
    }
L_0897BCA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0897BCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 239u, 0x0897D254u>(ctx, &aot_mem) && ctx.pc == 0x0897BCC4u) goto L_0897BCC4;
    return;
L_0897BCC4:
    ctx.set_gpr(17, 0u + 0u);
    goto L_0897BCC8;
L_0897BCC8:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    goto L_0897BCCC;
L_0897BCCC:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BC40;
      }
      goto L_0897BCD8;
    }
L_0897BCD8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0897BCDC;
L_0897BCDC:
    ctx.set_gpr(1, ctx.gpr[23] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BBC4;
      }
      goto L_0897BCE8;
    }
L_0897BCE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0897BCEC;
L_0897BCEC:
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
L_0897BD20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BD2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BD38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BD50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BD68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BE84;
      }
      goto L_0897BD98;
    }
L_0897BD98:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31460));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BE64;
      }
      goto L_0897BDB4;
    }
L_0897BDB4:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BE50;
      }
      goto L_0897BDC4;
    }
L_0897BDC4:
    ctx.set_gpr(21, ctx.gpr[18] & 63u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BDF4;
      }
      goto L_0897BDD0;
    }
L_0897BDD0:
    ctx.set_gpr(3, ctx.gpr[19] << 26u);
    ctx.set_gpr(2, ctx.gpr[18] << 12u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9708));
    ctx.set_gpr(31, 0x0897BDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0897BDF0u) goto L_0897BDF0;
    return;
L_0897BDF0:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(11));
    goto L_0897BDF4;
L_0897BDF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0897BE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 227u, 0x0897D09Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BE04u) goto L_0897BE04;
    return;
L_0897BE04:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897BE4C;
      }
      goto L_0897BE20;
    }
L_0897BE20:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0897BE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BE34u) goto L_0897BE34;
    return;
L_0897BE34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0897BE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897BE40u) goto L_0897BE40;
    return;
L_0897BE40:
    ctx.set_gpr(31, 0x0897BE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897BE48u) goto L_0897BE48;
    return;
L_0897BE48:
    ctx.set_gpr(17, 0u + 0u);
    goto L_0897BE4C;
L_0897BE4C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0897BE50;
L_0897BE50:
    ctx.set_gpr(2, ctx.gpr[18] < static_cast<std::uint32_t>(16384) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BDC4;
      }
      goto L_0897BE5C;
    }
L_0897BE5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BE80;
      }
      goto L_0897BE64;
    }
L_0897BE64:
    ctx.set_gpr(5, ctx.gpr[19] << 26u);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9716));
    ctx.set_gpr(31, 0x0897BE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897BE78u) goto L_0897BE78;
    return;
L_0897BE78:
    ctx.set_gpr(31, 0x0897BE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897BE80u) goto L_0897BE80;
    return;
L_0897BE80:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0897BE84;
L_0897BE84:
    ctx.set_gpr(2, ctx.gpr[19] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BD98;
      }
      goto L_0897BE90;
    }
L_0897BE90:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897BEA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897BEA4u) goto L_0897BEA4;
    return;
L_0897BEA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BECC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-320));
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(22, ctx.gpr[20] >> 26u);
    ctx.set_gpr(23, ctx.gpr[4] >> 26u);
    ctx.set_gpr(3, ctx.gpr[20] << 6u);
    ctx.set_gpr(3, ctx.gpr[3] >> 6u);
    ctx.set_gpr(3, ctx.gpr[3] >> 12u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] << 6u);
    ctx.set_gpr(3, ctx.gpr[3] >> 6u);
    ctx.set_gpr(3, ctx.gpr[3] >> 12u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[22] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 9u, 0x0897C054u>(ctx, &aot_mem); return;
      }
      goto L_0897BF3C;
    }
L_0897BF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 14u, 0x0897C094u>(ctx, &aot_mem); return;
      }
      goto L_0897BF44;
    }
L_0897BF44:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(31460));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 8u, 0x0897C050u>(ctx, &aot_mem); return;
      }
      goto L_0897BF60;
    }
L_0897BF60:
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BF78;
      }
      goto L_0897BF6C;
    }
L_0897BF6C:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BF7C;
      }
      goto L_0897BF78;
    }
L_0897BF78:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0897BF7C;
L_0897BF7C:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BF94;
      }
      goto L_0897BF88;
    }
L_0897BF88:
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(16384));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BF98;
      }
      goto L_0897BF94;
    }
L_0897BF94:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_0897BF98;
L_0897BF98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 7u, 0x0897C044u>(ctx, &aot_mem); return;
      }
      goto L_0897BFA0;
    }
L_0897BFA0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0897BFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 227u, 0x0897D09Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BFB0u) goto L_0897BFB0;
    return;
L_0897BFB0:
    ctx.set_gpr(2, ctx.gpr[17] & 63u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BFDC;
      }
      goto L_0897BFC0;
    }
L_0897BFC0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9708));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0897BFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0897BFD8u) goto L_0897BFD8;
    return;
L_0897BFD8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(11));
    goto L_0897BFDC;
L_0897BFDC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0897BFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 227u, 0x0897D09Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BFECu) goto L_0897BFEC;
    return;
L_0897BFEC:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(63));
    ctx.pc = 0x0897C000u; return;
}

void recomp_unit_0093(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0093_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_93(Runtime &runtime) {
    runtime.register_generated_unit(93u, 0x08978000u, 16384u, &recomp_unit_0093, &recomp_unit_0093_entry);
    runtime.register_function(0x08978000u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978018u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978020u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978038u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978050u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978058u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978068u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978088u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897809Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978108u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897811Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978134u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978140u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978154u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978160u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897816Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978180u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897818Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897819Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978200u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978214u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978220u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978238u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978244u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978258u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978260u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978270u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978288u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897828Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978294u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897829Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978308u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978334u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978364u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897837Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978388u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978420u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978438u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978440u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978458u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978460u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978480u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897849Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978508u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897851Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978540u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897854Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978570u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978574u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897857Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897859Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897860Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978618u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978634u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978638u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978640u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978660u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978680u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978698u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978750u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978758u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978774u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897877Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978784u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978804u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978810u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897882Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978834u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897883Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978858u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978870u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897889Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978924u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978930u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978944u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897894Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978958u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978964u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897896Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978974u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897897Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897898Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897899Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089789ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089789B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089789D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089789DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089789FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AD0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978CF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DD0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978EACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978EC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979008u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979024u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897902Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979040u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897904Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979050u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979070u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897907Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979088u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979094u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897909Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979114u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979130u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979148u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897915Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897916Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979194u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979208u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979214u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979228u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979238u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979254u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979264u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897929Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979308u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897931Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979320u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979340u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897935Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979364u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979390u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979408u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897941Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979424u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979428u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979430u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979440u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979448u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897945Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979474u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979480u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979488u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979508u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979514u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979538u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897954Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897956Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979574u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979580u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979588u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979608u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979624u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979628u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979638u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979640u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979644u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897964Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979658u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979678u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897968Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979708u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979714u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979730u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979748u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979770u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979774u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897977Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979788u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979814u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897983Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979848u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979874u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979878u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979894u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089798F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979910u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979924u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979944u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897994Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979958u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979960u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979978u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089799F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979ABCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BCCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979CCCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979ED4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FD0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A008u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A014u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A01Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A034u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A064u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A074u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A094u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A114u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A128u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A134u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A140u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A158u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A164u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A16Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A18Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A19Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A208u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A21Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A22Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A248u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A25Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A268u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A278u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A290u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A310u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A324u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A344u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A34Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A360u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A36Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A380u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A39Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A404u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A410u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A41Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A430u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A438u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A44Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A464u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A47Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A490u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A4A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A4ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A4C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A4D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A4F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A504u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A520u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A544u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A558u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A570u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A57Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A600u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A618u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A624u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A62Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A640u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A648u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A654u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A664u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A694u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A698u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A710u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A71Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A724u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A770u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A774u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A790u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A814u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A81Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A82Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A830u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A848u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A854u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A86Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A884u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A89Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A910u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A914u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A918u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A924u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A940u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A960u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A974u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A984u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A990u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AABCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AACCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABD4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AECCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFD4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B004u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B010u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B020u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B03Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B044u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B068u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B080u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B08Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B098u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B108u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B110u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B124u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B130u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B150u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B164u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B168u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B190u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B20Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B218u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B238u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B24Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B258u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B274u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B28Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B298u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B31Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B324u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B32Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B338u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B344u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B35Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B368u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B370u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B38Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B40Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B41Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B430u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B440u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B450u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B46Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B474u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B478u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B488u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B49Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B500u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B520u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B528u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B53Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B554u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B564u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B574u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B584u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B594u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B670u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B67Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B704u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B714u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B720u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B724u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B734u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B740u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B744u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B764u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B77Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B794u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B808u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B814u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B81Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B824u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B880u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B940u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B99Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BABCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BACCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BADCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBCCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BBFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BCA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BCC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BCC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BCCCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BCD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BCDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BCE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BCECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BD20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BD2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BD38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BD50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BD68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BD98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BDB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BDC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BDD0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BDF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BDF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BECCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFECu, &recomp_unit_0093, "recomp_unit_0093");
}
} // namespace psprecomp
