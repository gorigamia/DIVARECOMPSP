#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0129[4093] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63,
    0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83,
    0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0,
    0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155,
    0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217,
    0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 288, 0,
    289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0,
    325, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 334, 0,
    0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0,
    0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0,
    0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 366, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0,
    0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 404, 0, 0, 405,
    0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412,
    0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0,
    422, 0, 423, 0, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 430, 0, 0,
    0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0,
    0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440,
    0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 444, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448,
    0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0,
    457, 0, 0, 458, 0, 459, 0, 0, 460, 0, 461, 0, 0, 462, 0, 463, 0, 0, 464, 0, 465, 0, 0, 466, 0, 467, 0, 0, 468, 0, 469, 0,
    0, 470, 0, 471, 0, 0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 0, 482,
    0, 483, 0, 0, 484, 0, 485, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 0, 494, 0, 495,
    0, 0, 496, 0, 497, 0, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505,
    0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0,
    0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514,
    0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0,
    521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0,
    0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0,
    0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0,
    0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546,
    0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0,
    553, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0,
    0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0,
    566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 571, 0, 0,
    572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0,
    0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 585,
    0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 607, 0,
    0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 0,
    0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0,
    0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0,
    630, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0,
    0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645,
    0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0,
    0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0,
    656, 0, 0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0,
    0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0,
    670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0,
    0, 674, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0,
    680, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0,
    0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0,
    0, 0, 702, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0,
    708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 718, 0, 0, 719, 0, 720,
    0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0,
    0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0,
    0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0,
    0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 751,
};
void recomp_unit_0129_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A08004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0129[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A08004;
    case 2u: goto L_08A08014;
    case 3u: goto L_08A08024;
    case 4u: goto L_08A0803C;
    case 5u: goto L_08A08050;
    case 6u: goto L_08A08058;
    case 7u: goto L_08A08070;
    case 8u: goto L_08A0808C;
    case 9u: goto L_08A080A8;
    case 10u: goto L_08A080C0;
    case 11u: goto L_08A080E4;
    case 12u: goto L_08A080F4;
    case 13u: goto L_08A0810C;
    case 14u: goto L_08A08124;
    case 15u: goto L_08A08134;
    case 16u: goto L_08A08144;
    case 17u: goto L_08A08190;
    case 18u: goto L_08A081A0;
    case 19u: goto L_08A081B0;
    case 20u: goto L_08A081C0;
    case 21u: goto L_08A081D8;
    case 22u: goto L_08A081EC;
    case 23u: goto L_08A081F4;
    case 24u: goto L_08A0820C;
    case 25u: goto L_08A08228;
    case 26u: goto L_08A08244;
    case 27u: goto L_08A0825C;
    case 28u: goto L_08A08280;
    case 29u: goto L_08A08290;
    case 30u: goto L_08A082A8;
    case 31u: goto L_08A082C0;
    case 32u: goto L_08A082D0;
    case 33u: goto L_08A082E0;
    case 34u: goto L_08A0832C;
    case 35u: goto L_08A0833C;
    case 36u: goto L_08A0834C;
    case 37u: goto L_08A0835C;
    case 38u: goto L_08A08374;
    case 39u: goto L_08A08388;
    case 40u: goto L_08A08390;
    case 41u: goto L_08A083A8;
    case 42u: goto L_08A083C0;
    case 43u: goto L_08A083D8;
    case 44u: goto L_08A083FC;
    case 45u: goto L_08A08404;
    case 46u: goto L_08A0841C;
    case 47u: goto L_08A08434;
    case 48u: goto L_08A08444;
    case 49u: goto L_08A08454;
    case 50u: goto L_08A084B0;
    case 51u: goto L_08A084C0;
    case 52u: goto L_08A084D0;
    case 53u: goto L_08A084E0;
    case 54u: goto L_08A08508;
    case 55u: goto L_08A08524;
    case 56u: goto L_08A08534;
    case 57u: goto L_08A08540;
    case 58u: goto L_08A0855C;
    case 59u: goto L_08A08574;
    case 60u: goto L_08A085A8;
    case 61u: goto L_08A085C4;
    case 62u: goto L_08A085DC;
    case 63u: goto L_08A08600;
    case 64u: goto L_08A08608;
    case 65u: goto L_08A08620;
    case 66u: goto L_08A08638;
    case 67u: goto L_08A08640;
    case 68u: goto L_08A0864C;
    case 69u: goto L_08A08658;
    case 70u: goto L_08A08660;
    case 71u: goto L_08A08678;
    case 72u: goto L_08A08690;
    case 73u: goto L_08A086A4;
    case 74u: goto L_08A086AC;
    case 75u: goto L_08A086C4;
    case 76u: goto L_08A086DC;
    case 77u: goto L_08A086F8;
    case 78u: goto L_08A0871C;
    case 79u: goto L_08A08724;
    case 80u: goto L_08A08740;
    case 81u: goto L_08A08758;
    case 82u: goto L_08A08770;
    case 83u: goto L_08A08780;
    case 84u: goto L_08A08790;
    case 85u: goto L_08A087EC;
    case 86u: goto L_08A087FC;
    case 87u: goto L_08A0880C;
    case 88u: goto L_08A0881C;
    case 89u: goto L_08A08844;
    case 90u: goto L_08A08860;
    case 91u: goto L_08A08870;
    case 92u: goto L_08A0887C;
    case 93u: goto L_08A088B0;
    case 94u: goto L_08A088CC;
    case 95u: goto L_08A088E4;
    case 96u: goto L_08A088F8;
    case 97u: goto L_08A08900;
    case 98u: goto L_08A08918;
    case 99u: goto L_08A08930;
    case 100u: goto L_08A08948;
    case 101u: goto L_08A08970;
    case 102u: goto L_08A08988;
    case 103u: goto L_08A089A0;
    case 104u: goto L_08A089B0;
    case 105u: goto L_08A089C0;
    case 106u: goto L_08A08A14;
    case 107u: goto L_08A08A24;
    case 108u: goto L_08A08A34;
    case 109u: goto L_08A08A44;
    case 110u: goto L_08A08A54;
    case 111u: goto L_08A08A78;
    case 112u: goto L_08A08A94;
    case 113u: goto L_08A08AA4;
    case 114u: goto L_08A08AB8;
    case 115u: goto L_08A08AE0;
    case 116u: goto L_08A08AF8;
    case 117u: goto L_08A08B10;
    case 118u: goto L_08A08B24;
    case 119u: goto L_08A08B38;
    case 120u: goto L_08A08B50;
    case 121u: goto L_08A08B64;
    case 122u: goto L_08A08B6C;
    case 123u: goto L_08A08B84;
    case 124u: goto L_08A08B9C;
    case 125u: goto L_08A08BAC;
    case 126u: goto L_08A08BBC;
    case 127u: goto L_08A08C0C;
    case 128u: goto L_08A08C1C;
    case 129u: goto L_08A08C2C;
    case 130u: goto L_08A08C3C;
    case 131u: goto L_08A08C60;
    case 132u: goto L_08A08C7C;
    case 133u: goto L_08A08C8C;
    case 134u: goto L_08A08CA0;
    case 135u: goto L_08A08CC8;
    case 136u: goto L_08A08CF4;
    case 137u: goto L_08A08D0C;
    case 138u: goto L_08A08D14;
    case 139u: goto L_08A08D20;
    case 140u: goto L_08A08D2C;
    case 141u: goto L_08A08D34;
    case 142u: goto L_08A08D4C;
    case 143u: goto L_08A08D64;
    case 144u: goto L_08A08D78;
    case 145u: goto L_08A08D80;
    case 146u: goto L_08A08D98;
    case 147u: goto L_08A08DAC;
    case 148u: goto L_08A08DC0;
    case 149u: goto L_08A08DDC;
    case 150u: goto L_08A08DF4;
    case 151u: goto L_08A08E04;
    case 152u: goto L_08A08E14;
    case 153u: goto L_08A08E60;
    case 154u: goto L_08A08E70;
    case 155u: goto L_08A08E80;
    case 156u: goto L_08A08E90;
    case 157u: goto L_08A08EA0;
    case 158u: goto L_08A08EB8;
    case 159u: goto L_08A08ECC;
    case 160u: goto L_08A08ED4;
    case 161u: goto L_08A08EEC;
    case 162u: goto L_08A08F04;
    case 163u: goto L_08A08F28;
    case 164u: goto L_08A08F4C;
    case 165u: goto L_08A08F54;
    case 166u: goto L_08A08F6C;
    case 167u: goto L_08A08F7C;
    case 168u: goto L_08A08F94;
    case 169u: goto L_08A08FAC;
    case 170u: goto L_08A08FBC;
    case 171u: goto L_08A08FCC;
    case 172u: goto L_08A09028;
    case 173u: goto L_08A09038;
    case 174u: goto L_08A09048;
    case 175u: goto L_08A09058;
    case 176u: goto L_08A09080;
    case 177u: goto L_08A0909C;
    case 178u: goto L_08A090AC;
    case 179u: goto L_08A090B8;
    case 180u: goto L_08A090D4;
    case 181u: goto L_08A090E8;
    case 182u: goto L_08A090F8;
    case 183u: goto L_08A09110;
    case 184u: goto L_08A09144;
    case 185u: goto L_08A09160;
    case 186u: goto L_08A09178;
    case 187u: goto L_08A0918C;
    case 188u: goto L_08A09194;
    case 189u: goto L_08A091AC;
    case 190u: goto L_08A091C4;
    case 191u: goto L_08A091E4;
    case 192u: goto L_08A09208;
    case 193u: goto L_08A09210;
    case 194u: goto L_08A0921C;
    case 195u: goto L_08A09224;
    case 196u: goto L_08A09230;
    case 197u: goto L_08A09238;
    case 198u: goto L_08A09250;
    case 199u: goto L_08A09268;
    case 200u: goto L_08A09278;
    case 201u: goto L_08A09288;
    case 202u: goto L_08A092E4;
    case 203u: goto L_08A092F4;
    case 204u: goto L_08A09304;
    case 205u: goto L_08A09314;
    case 206u: goto L_08A09324;
    case 207u: goto L_08A0934C;
    case 208u: goto L_08A09368;
    case 209u: goto L_08A09378;
    case 210u: goto L_08A09394;
    case 211u: goto L_08A093A4;
    case 212u: goto L_08A093B4;
    case 213u: goto L_08A093C4;
    case 214u: goto L_08A093D4;
    case 215u: goto L_08A093E4;
    case 216u: goto L_08A093F4;
    case 217u: goto L_08A09400;
    case 218u: goto L_08A09414;
    case 219u: goto L_08A09420;
    case 220u: goto L_08A09434;
    case 221u: goto L_08A09440;
    case 222u: goto L_08A09454;
    case 223u: goto L_08A09468;
    case 224u: goto L_08A0947C;
    case 225u: goto L_08A09490;
    case 226u: goto L_08A094A4;
    case 227u: goto L_08A094B8;
    case 228u: goto L_08A094CC;
    case 229u: goto L_08A094E0;
    case 230u: goto L_08A0950C;
    case 231u: goto L_08A09528;
    case 232u: goto L_08A09540;
    case 233u: goto L_08A09554;
    case 234u: goto L_08A0955C;
    case 235u: goto L_08A09574;
    case 236u: goto L_08A0958C;
    case 237u: goto L_08A095B0;
    case 238u: goto L_08A095D4;
    case 239u: goto L_08A095DC;
    case 240u: goto L_08A095F4;
    case 241u: goto L_08A09604;
    case 242u: goto L_08A0961C;
    case 243u: goto L_08A09634;
    case 244u: goto L_08A09644;
    case 245u: goto L_08A09654;
    case 246u: goto L_08A096B0;
    case 247u: goto L_08A096C0;
    case 248u: goto L_08A096D0;
    case 249u: goto L_08A096E0;
    case 250u: goto L_08A09708;
    case 251u: goto L_08A09724;
    case 252u: goto L_08A09734;
    case 253u: goto L_08A09740;
    case 254u: goto L_08A09774;
    case 255u: goto L_08A09790;
    case 256u: goto L_08A097A8;
    case 257u: goto L_08A097BC;
    case 258u: goto L_08A097C4;
    case 259u: goto L_08A097DC;
    case 260u: goto L_08A097F4;
    case 261u: goto L_08A0980C;
    case 262u: goto L_08A09834;
    case 263u: goto L_08A09840;
    case 264u: goto L_08A09848;
    case 265u: goto L_08A09850;
    case 266u: goto L_08A09860;
    case 267u: goto L_08A09878;
    case 268u: goto L_08A09890;
    case 269u: goto L_08A098A0;
    case 270u: goto L_08A098B0;
    case 271u: goto L_08A09904;
    case 272u: goto L_08A09914;
    case 273u: goto L_08A09924;
    case 274u: goto L_08A09934;
    case 275u: goto L_08A09944;
    case 276u: goto L_08A09968;
    case 277u: goto L_08A09984;
    case 278u: goto L_08A099AC;
    case 279u: goto L_08A099C4;
    case 280u: goto L_08A099DC;
    case 281u: goto L_08A099F0;
    case 282u: goto L_08A099F8;
    case 283u: goto L_08A09A10;
    case 284u: goto L_08A09A28;
    case 285u: goto L_08A09A40;
    case 286u: goto L_08A09A68;
    case 287u: goto L_08A09A74;
    case 288u: goto L_08A09A7C;
    case 289u: goto L_08A09A84;
    case 290u: goto L_08A09A94;
    case 291u: goto L_08A09AAC;
    case 292u: goto L_08A09AC4;
    case 293u: goto L_08A09AD4;
    case 294u: goto L_08A09AE4;
    case 295u: goto L_08A09B38;
    case 296u: goto L_08A09B48;
    case 297u: goto L_08A09B58;
    case 298u: goto L_08A09B68;
    case 299u: goto L_08A09B78;
    case 300u: goto L_08A09B9C;
    case 301u: goto L_08A09BB8;
    case 302u: goto L_08A09BE0;
    case 303u: goto L_08A09BF8;
    case 304u: goto L_08A09C10;
    case 305u: goto L_08A09C24;
    case 306u: goto L_08A09C2C;
    case 307u: goto L_08A09C44;
    case 308u: goto L_08A09C5C;
    case 309u: goto L_08A09C88;
    case 310u: goto L_08A09CAC;
    case 311u: goto L_08A09CB4;
    case 312u: goto L_08A09CC0;
    case 313u: goto L_08A09CC8;
    case 314u: goto L_08A09CD4;
    case 315u: goto L_08A09CDC;
    case 316u: goto L_08A09CE8;
    case 317u: goto L_08A09CF0;
    case 318u: goto L_08A09D08;
    case 319u: goto L_08A09D18;
    case 320u: goto L_08A09D30;
    case 321u: goto L_08A09D50;
    case 322u: goto L_08A09D68;
    case 323u: goto L_08A09D74;
    case 324u: goto L_08A09D7C;
    case 325u: goto L_08A09D84;
    case 326u: goto L_08A09D9C;
    case 327u: goto L_08A09DA8;
    case 328u: goto L_08A09DB0;
    case 329u: goto L_08A09DB8;
    case 330u: goto L_08A09DD0;
    case 331u: goto L_08A09DDC;
    case 332u: goto L_08A09DE8;
    case 333u: goto L_08A09DF4;
    case 334u: goto L_08A09DFC;
    case 335u: goto L_08A09E18;
    case 336u: goto L_08A09E24;
    case 337u: goto L_08A09E30;
    case 338u: goto L_08A09E4C;
    case 339u: goto L_08A09E64;
    case 340u: goto L_08A09E74;
    case 341u: goto L_08A09E84;
    case 342u: goto L_08A09EE8;
    case 343u: goto L_08A09EF8;
    case 344u: goto L_08A09F08;
    case 345u: goto L_08A09F18;
    case 346u: goto L_08A09F28;
    case 347u: goto L_08A09F50;
    case 348u: goto L_08A09F6C;
    case 349u: goto L_08A09F7C;
    case 350u: goto L_08A09F88;
    case 351u: goto L_08A09F9C;
    case 352u: goto L_08A09FA8;
    case 353u: goto L_08A09FC4;
    case 354u: goto L_08A09FD0;
    case 355u: goto L_08A09FE4;
    case 356u: goto L_08A09FF0;
    case 357u: goto L_08A0A010;
    case 358u: goto L_08A0A024;
    case 359u: goto L_08A0A034;
    case 360u: goto L_08A0A05C;
    case 361u: goto L_08A0A078;
    case 362u: goto L_08A0A088;
    case 363u: goto L_08A0A098;
    case 364u: goto L_08A0A0B0;
    case 365u: goto L_08A0A0B8;
    case 366u: goto L_08A0A0C4;
    case 367u: goto L_08A0A0D0;
    case 368u: goto L_08A0A0D8;
    case 369u: goto L_08A0A0F0;
    case 370u: goto L_08A0A108;
    case 371u: goto L_08A0A11C;
    case 372u: goto L_08A0A124;
    case 373u: goto L_08A0A13C;
    case 374u: goto L_08A0A154;
    case 375u: goto L_08A0A174;
    case 376u: goto L_08A0A198;
    case 377u: goto L_08A0A1A0;
    case 378u: goto L_08A0A1AC;
    case 379u: goto L_08A0A1B4;
    case 380u: goto L_08A0A1C0;
    case 381u: goto L_08A0A1C8;
    case 382u: goto L_08A0A1E0;
    case 383u: goto L_08A0A1F8;
    case 384u: goto L_08A0A208;
    case 385u: goto L_08A0A218;
    case 386u: goto L_08A0A274;
    case 387u: goto L_08A0A284;
    case 388u: goto L_08A0A294;
    case 389u: goto L_08A0A2A4;
    case 390u: goto L_08A0A2CC;
    case 391u: goto L_08A0A2E8;
    case 392u: goto L_08A0A2F8;
    case 393u: goto L_08A0A304;
    case 394u: goto L_08A0A320;
    case 395u: goto L_08A0A32C;
    case 396u: goto L_08A0A344;
    case 397u: goto L_08A0A350;
    case 398u: goto L_08A0A36C;
    case 399u: goto L_08A0A378;
    case 400u: goto L_08A0A3AC;
    case 401u: goto L_08A0A3C8;
    case 402u: goto L_08A0A3E0;
    case 403u: goto L_08A0A3E8;
    case 404u: goto L_08A0A3F4;
    case 405u: goto L_08A0A400;
    case 406u: goto L_08A0A408;
    case 407u: goto L_08A0A420;
    case 408u: goto L_08A0A438;
    case 409u: goto L_08A0A44C;
    case 410u: goto L_08A0A454;
    case 411u: goto L_08A0A46C;
    case 412u: goto L_08A0A480;
    case 413u: goto L_08A0A494;
    case 414u: goto L_08A0A4B0;
    case 415u: goto L_08A0A4C8;
    case 416u: goto L_08A0A4D8;
    case 417u: goto L_08A0A4E8;
    case 418u: goto L_08A0A53C;
    case 419u: goto L_08A0A54C;
    case 420u: goto L_08A0A55C;
    case 421u: goto L_08A0A56C;
    case 422u: goto L_08A0A584;
    case 423u: goto L_08A0A58C;
    case 424u: goto L_08A0A598;
    case 425u: goto L_08A0A5A4;
    case 426u: goto L_08A0A5AC;
    case 427u: goto L_08A0A5C4;
    case 428u: goto L_08A0A5DC;
    case 429u: goto L_08A0A5F0;
    case 430u: goto L_08A0A5F8;
    case 431u: goto L_08A0A610;
    case 432u: goto L_08A0A624;
    case 433u: goto L_08A0A638;
    case 434u: goto L_08A0A654;
    case 435u: goto L_08A0A66C;
    case 436u: goto L_08A0A67C;
    case 437u: goto L_08A0A68C;
    case 438u: goto L_08A0A6E0;
    case 439u: goto L_08A0A6F0;
    case 440u: goto L_08A0A700;
    case 441u: goto L_08A0A710;
    case 442u: goto L_08A0A728;
    case 443u: goto L_08A0A730;
    case 444u: goto L_08A0A73C;
    case 445u: goto L_08A0A748;
    case 446u: goto L_08A0A750;
    case 447u: goto L_08A0A768;
    case 448u: goto L_08A0A780;
    case 449u: goto L_08A0A794;
    case 450u: goto L_08A0A79C;
    case 451u: goto L_08A0A7B4;
    case 452u: goto L_08A0A7CC;
    case 453u: goto L_08A0A844;
    case 454u: goto L_08A0A868;
    case 455u: goto L_08A0A870;
    case 456u: goto L_08A0A87C;
    case 457u: goto L_08A0A884;
    case 458u: goto L_08A0A890;
    case 459u: goto L_08A0A898;
    case 460u: goto L_08A0A8A4;
    case 461u: goto L_08A0A8AC;
    case 462u: goto L_08A0A8B8;
    case 463u: goto L_08A0A8C0;
    case 464u: goto L_08A0A8CC;
    case 465u: goto L_08A0A8D4;
    case 466u: goto L_08A0A8E0;
    case 467u: goto L_08A0A8E8;
    case 468u: goto L_08A0A8F4;
    case 469u: goto L_08A0A8FC;
    case 470u: goto L_08A0A908;
    case 471u: goto L_08A0A910;
    case 472u: goto L_08A0A91C;
    case 473u: goto L_08A0A924;
    case 474u: goto L_08A0A930;
    case 475u: goto L_08A0A938;
    case 476u: goto L_08A0A944;
    case 477u: goto L_08A0A94C;
    case 478u: goto L_08A0A958;
    case 479u: goto L_08A0A960;
    case 480u: goto L_08A0A96C;
    case 481u: goto L_08A0A974;
    case 482u: goto L_08A0A980;
    case 483u: goto L_08A0A988;
    case 484u: goto L_08A0A994;
    case 485u: goto L_08A0A99C;
    case 486u: goto L_08A0A9A8;
    case 487u: goto L_08A0A9B0;
    case 488u: goto L_08A0A9BC;
    case 489u: goto L_08A0A9C4;
    case 490u: goto L_08A0A9D0;
    case 491u: goto L_08A0A9D8;
    case 492u: goto L_08A0A9E4;
    case 493u: goto L_08A0A9EC;
    case 494u: goto L_08A0A9F8;
    case 495u: goto L_08A0AA00;
    case 496u: goto L_08A0AA0C;
    case 497u: goto L_08A0AA14;
    case 498u: goto L_08A0AA20;
    case 499u: goto L_08A0AA28;
    case 500u: goto L_08A0AA34;
    case 501u: goto L_08A0AA3C;
    case 502u: goto L_08A0AA48;
    case 503u: goto L_08A0AA50;
    case 504u: goto L_08A0AA68;
    case 505u: goto L_08A0AA80;
    case 506u: goto L_08A0AA90;
    case 507u: goto L_08A0AAA0;
    case 508u: goto L_08A0AAFC;
    case 509u: goto L_08A0AB0C;
    case 510u: goto L_08A0AB1C;
    case 511u: goto L_08A0AB2C;
    case 512u: goto L_08A0AB54;
    case 513u: goto L_08A0AB70;
    case 514u: goto L_08A0AB80;
    case 515u: goto L_08A0AB8C;
    case 516u: goto L_08A0ABA8;
    case 517u: goto L_08A0ABB4;
    case 518u: goto L_08A0ABD0;
    case 519u: goto L_08A0ABDC;
    case 520u: goto L_08A0ABF8;
    case 521u: goto L_08A0AC04;
    case 522u: goto L_08A0AC20;
    case 523u: goto L_08A0AC2C;
    case 524u: goto L_08A0AC48;
    case 525u: goto L_08A0AC54;
    case 526u: goto L_08A0AC70;
    case 527u: goto L_08A0AC7C;
    case 528u: goto L_08A0AC98;
    case 529u: goto L_08A0ACA4;
    case 530u: goto L_08A0ACC0;
    case 531u: goto L_08A0ACCC;
    case 532u: goto L_08A0ACE8;
    case 533u: goto L_08A0ACF4;
    case 534u: goto L_08A0AD10;
    case 535u: goto L_08A0AD1C;
    case 536u: goto L_08A0AD38;
    case 537u: goto L_08A0AD44;
    case 538u: goto L_08A0AD60;
    case 539u: goto L_08A0AD6C;
    case 540u: goto L_08A0AD88;
    case 541u: goto L_08A0AD94;
    case 542u: goto L_08A0ADB0;
    case 543u: goto L_08A0ADBC;
    case 544u: goto L_08A0ADD8;
    case 545u: goto L_08A0ADE4;
    case 546u: goto L_08A0AE00;
    case 547u: goto L_08A0AE0C;
    case 548u: goto L_08A0AE28;
    case 549u: goto L_08A0AE34;
    case 550u: goto L_08A0AE50;
    case 551u: goto L_08A0AE5C;
    case 552u: goto L_08A0AE78;
    case 553u: goto L_08A0AE84;
    case 554u: goto L_08A0AEA0;
    case 555u: goto L_08A0AEAC;
    case 556u: goto L_08A0AEC8;
    case 557u: goto L_08A0AED4;
    case 558u: goto L_08A0AEF0;
    case 559u: goto L_08A0AEFC;
    case 560u: goto L_08A0AF18;
    case 561u: goto L_08A0AF24;
    case 562u: goto L_08A0AF40;
    case 563u: goto L_08A0AF4C;
    case 564u: goto L_08A0AF60;
    case 565u: goto L_08A0AF6C;
    case 566u: goto L_08A0AF84;
    case 567u: goto L_08A0AFB0;
    case 568u: goto L_08A0AFCC;
    case 569u: goto L_08A0AFE4;
    case 570u: goto L_08A0AFEC;
    case 571u: goto L_08A0AFF8;
    case 572u: goto L_08A0B004;
    case 573u: goto L_08A0B00C;
    case 574u: goto L_08A0B024;
    case 575u: goto L_08A0B03C;
    case 576u: goto L_08A0B050;
    case 577u: goto L_08A0B058;
    case 578u: goto L_08A0B070;
    case 579u: goto L_08A0B088;
    case 580u: goto L_08A0B0A8;
    case 581u: goto L_08A0B0CC;
    case 582u: goto L_08A0B0D4;
    case 583u: goto L_08A0B0E0;
    case 584u: goto L_08A0B0E8;
    case 585u: goto L_08A0B100;
    case 586u: goto L_08A0B118;
    case 587u: goto L_08A0B130;
    case 588u: goto L_08A0B140;
    case 589u: goto L_08A0B150;
    case 590u: goto L_08A0B1AC;
    case 591u: goto L_08A0B1BC;
    case 592u: goto L_08A0B1CC;
    case 593u: goto L_08A0B1DC;
    case 594u: goto L_08A0B204;
    case 595u: goto L_08A0B220;
    case 596u: goto L_08A0B230;
    case 597u: goto L_08A0B23C;
    case 598u: goto L_08A0B250;
    case 599u: goto L_08A0B25C;
    case 600u: goto L_08A0B288;
    case 601u: goto L_08A0B2A4;
    case 602u: goto L_08A0B2BC;
    case 603u: goto L_08A0B2C4;
    case 604u: goto L_08A0B2D0;
    case 605u: goto L_08A0B2DC;
    case 606u: goto L_08A0B2E4;
    case 607u: goto L_08A0B2FC;
    case 608u: goto L_08A0B314;
    case 609u: goto L_08A0B328;
    case 610u: goto L_08A0B330;
    case 611u: goto L_08A0B348;
    case 612u: goto L_08A0B35C;
    case 613u: goto L_08A0B370;
    case 614u: goto L_08A0B38C;
    case 615u: goto L_08A0B3A4;
    case 616u: goto L_08A0B3B4;
    case 617u: goto L_08A0B3C4;
    case 618u: goto L_08A0B418;
    case 619u: goto L_08A0B428;
    case 620u: goto L_08A0B438;
    case 621u: goto L_08A0B448;
    case 622u: goto L_08A0B460;
    case 623u: goto L_08A0B474;
    case 624u: goto L_08A0B488;
    case 625u: goto L_08A0B4A0;
    case 626u: goto L_08A0B4B4;
    case 627u: goto L_08A0B4BC;
    case 628u: goto L_08A0B4D4;
    case 629u: goto L_08A0B4EC;
    case 630u: goto L_08A0B504;
    case 631u: goto L_08A0B528;
    case 632u: goto L_08A0B530;
    case 633u: goto L_08A0B548;
    case 634u: goto L_08A0B560;
    case 635u: goto L_08A0B570;
    case 636u: goto L_08A0B580;
    case 637u: goto L_08A0B5DC;
    case 638u: goto L_08A0B5EC;
    case 639u: goto L_08A0B5FC;
    case 640u: goto L_08A0B60C;
    case 641u: goto L_08A0B634;
    case 642u: goto L_08A0B650;
    case 643u: goto L_08A0B660;
    case 644u: goto L_08A0B670;
    case 645u: goto L_08A0B680;
    case 646u: goto L_08A0B68C;
    case 647u: goto L_08A0B6A0;
    case 648u: goto L_08A0B6B8;
    case 649u: goto L_08A0B6EC;
    case 650u: goto L_08A0B708;
    case 651u: goto L_08A0B720;
    case 652u: goto L_08A0B744;
    case 653u: goto L_08A0B74C;
    case 654u: goto L_08A0B764;
    case 655u: goto L_08A0B77C;
    case 656u: goto L_08A0B784;
    case 657u: goto L_08A0B790;
    case 658u: goto L_08A0B79C;
    case 659u: goto L_08A0B7A4;
    case 660u: goto L_08A0B7BC;
    case 661u: goto L_08A0B7D4;
    case 662u: goto L_08A0B7E8;
    case 663u: goto L_08A0B7F0;
    case 664u: goto L_08A0B808;
    case 665u: goto L_08A0B81C;
    case 666u: goto L_08A0B830;
    case 667u: goto L_08A0B84C;
    case 668u: goto L_08A0B864;
    case 669u: goto L_08A0B874;
    case 670u: goto L_08A0B884;
    case 671u: goto L_08A0B8D8;
    case 672u: goto L_08A0B8E8;
    case 673u: goto L_08A0B8F8;
    case 674u: goto L_08A0B908;
    case 675u: goto L_08A0B920;
    case 676u: goto L_08A0B934;
    case 677u: goto L_08A0B93C;
    case 678u: goto L_08A0B954;
    case 679u: goto L_08A0B96C;
    case 680u: goto L_08A0B984;
    case 681u: goto L_08A0B9A8;
    case 682u: goto L_08A0B9C0;
    case 683u: goto L_08A0B9D8;
    case 684u: goto L_08A0B9E8;
    case 685u: goto L_08A0B9F8;
    case 686u: goto L_08A0BA4C;
    case 687u: goto L_08A0BA5C;
    case 688u: goto L_08A0BA6C;
    case 689u: goto L_08A0BA7C;
    case 690u: goto L_08A0BAA0;
    case 691u: goto L_08A0BABC;
    case 692u: goto L_08A0BACC;
    case 693u: goto L_08A0BADC;
    case 694u: goto L_08A0BB04;
    case 695u: goto L_08A0BB1C;
    case 696u: goto L_08A0BB34;
    case 697u: goto L_08A0BB3C;
    case 698u: goto L_08A0BB48;
    case 699u: goto L_08A0BB54;
    case 700u: goto L_08A0BB5C;
    case 701u: goto L_08A0BB74;
    case 702u: goto L_08A0BB8C;
    case 703u: goto L_08A0BBA0;
    case 704u: goto L_08A0BBA8;
    case 705u: goto L_08A0BBC0;
    case 706u: goto L_08A0BBD4;
    case 707u: goto L_08A0BBE8;
    case 708u: goto L_08A0BC04;
    case 709u: goto L_08A0BC1C;
    case 710u: goto L_08A0BC2C;
    case 711u: goto L_08A0BC3C;
    case 712u: goto L_08A0BC90;
    case 713u: goto L_08A0BCA0;
    case 714u: goto L_08A0BCB0;
    case 715u: goto L_08A0BCC0;
    case 716u: goto L_08A0BCD8;
    case 717u: goto L_08A0BCE0;
    case 718u: goto L_08A0BCEC;
    case 719u: goto L_08A0BCF8;
    case 720u: goto L_08A0BD00;
    case 721u: goto L_08A0BD18;
    case 722u: goto L_08A0BD30;
    case 723u: goto L_08A0BD44;
    case 724u: goto L_08A0BD4C;
    case 725u: goto L_08A0BD64;
    case 726u: goto L_08A0BD7C;
    case 727u: goto L_08A0BD98;
    case 728u: goto L_08A0BDBC;
    case 729u: goto L_08A0BDC4;
    case 730u: goto L_08A0BDDC;
    case 731u: goto L_08A0BDF4;
    case 732u: goto L_08A0BE0C;
    case 733u: goto L_08A0BE1C;
    case 734u: goto L_08A0BE2C;
    case 735u: goto L_08A0BE88;
    case 736u: goto L_08A0BE98;
    case 737u: goto L_08A0BEA8;
    case 738u: goto L_08A0BEB8;
    case 739u: goto L_08A0BEE0;
    case 740u: goto L_08A0BEFC;
    case 741u: goto L_08A0BF0C;
    case 742u: goto L_08A0BF18;
    case 743u: goto L_08A0BF3C;
    case 744u: goto L_08A0BF48;
    case 745u: goto L_08A0BF64;
    case 746u: goto L_08A0BF70;
    case 747u: goto L_08A0BFAC;
    case 748u: goto L_08A0BFC8;
    case 749u: goto L_08A0BFE0;
    case 750u: goto L_08A0BFE8;
    case 751u: goto L_08A0BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A08004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A08014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 869u, 0x08A07E88u>(ctx, &aot_mem) && ctx.pc == 0x08A08014u) goto L_08A08014;
    return;
L_08A08014:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26324)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08050;
      }
      goto L_08A0803C;
    }
L_08A0803C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08058;
      }
      goto L_08A08050;
    }
L_08A08050:
    ctx.set_gpr(31, 0x08A08058u);
    // nop
    goto L_08A0810C;
L_08A08058:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26324)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08070:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0808Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A0808Cu) goto L_08A0808C;
    return;
L_08A0808C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A080A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A080A8u) goto L_08A080A8;
    return;
L_08A080A8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-524));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A080C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A080C0u) goto L_08A080C0;
    return;
L_08A080C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x08A080E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A080E4u) goto L_08A080E4;
    return;
L_08A080E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A080F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A080F4u) goto L_08A080F4;
    return;
L_08A080F4:
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
L_08A0810C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32460));
    ctx.set_gpr(31, 0x08A08124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A08124u) goto L_08A08124;
    return;
L_08A08124:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A08144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A08144u) goto L_08A08144;
    return;
L_08A08144:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26324));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30364));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2852));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-32352));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8564));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-32656));
    ctx.set_gpr(31, 0x08A08190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A08190u) goto L_08A08190;
    return;
L_08A08190:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A081A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A081B0u);
    // nop
    goto L_08A08024;
L_08A081B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A081C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26320)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A081EC;
      }
      goto L_08A081D8;
    }
L_08A081D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A081F4;
      }
      goto L_08A081EC;
    }
L_08A081EC:
    ctx.set_gpr(31, 0x08A081F4u);
    // nop
    goto L_08A082A8;
L_08A081F4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26320)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0820C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A08228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A08228u) goto L_08A08228;
    return;
L_08A08228:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A08244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A08244u) goto L_08A08244;
    return;
L_08A08244:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0825Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0825Cu) goto L_08A0825C;
    return;
L_08A0825C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x08A08280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08280u) goto L_08A08280;
    return;
L_08A08280:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A08290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A08290u) goto L_08A08290;
    return;
L_08A08290:
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
L_08A082A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32048));
    ctx.set_gpr(31, 0x08A082C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A082C0u) goto L_08A082C0;
    return;
L_08A082C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A082D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A082E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A082E0u) goto L_08A082E0;
    return;
L_08A082E0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26320));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30364));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2852));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31940));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8544));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-32244));
    ctx.set_gpr(31, 0x08A0832Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0832Cu) goto L_08A0832C;
    return;
L_08A0832C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0833C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0834Cu);
    // nop
    goto L_08A081C0;
L_08A0834C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0835C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26316)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08388;
      }
      goto L_08A08374;
    }
L_08A08374:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08390;
      }
      goto L_08A08388;
    }
L_08A08388:
    ctx.set_gpr(31, 0x08A08390u);
    // nop
    goto L_08A0841C;
L_08A08390:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26316)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A083A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A083C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A083C0u) goto L_08A083C0;
    return;
L_08A083C0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-776));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(31, 0x08A083D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A083D8u) goto L_08A083D8;
    return;
L_08A083D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-776));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08404;
      }
      goto L_08A083FC;
    }
L_08A083FC:
    ctx.set_gpr(31, 0x08A08404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A08404u) goto L_08A08404;
    return;
L_08A08404:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0841C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31676));
    ctx.set_gpr(31, 0x08A08434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A08434u) goto L_08A08434;
    return;
L_08A08434:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A08454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A08454u) goto L_08A08454;
    return;
L_08A08454:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31520));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8520));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26316));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31552));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8512));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-31832));
    ctx.set_gpr(31, 0x08A084B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A084B0u) goto L_08A084B0;
    return;
L_08A084B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A084C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A084D0u);
    // nop
    goto L_08A0835C;
L_08A084D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A084E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26316)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A08508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A08508u) goto L_08A08508;
    return;
L_08A08508:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8488));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A08524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A08524u) goto L_08A08524;
    return;
L_08A08524:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A08534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08534u) goto L_08A08534;
    return;
L_08A08534:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A08540u);
    // nop
    goto L_08A08620;
L_08A08540:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0855Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0855Cu) goto L_08A0855C;
    return;
L_08A0855C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    ctx.set_gpr(31, 0x08A08574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A08574u) goto L_08A08574;
    return;
L_08A08574:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31292));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8456));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8448));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8440));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A085A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A085A8u) goto L_08A085A8;
    return;
L_08A085A8:
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
L_08A085C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26304)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08608;
      }
      goto L_08A085DC;
    }
L_08A085DC:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8396));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8412));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8404));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A08600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A08600u) goto L_08A08600;
    return;
L_08A08600:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26304), ctx.gpr[2]);
    goto L_08A08608;
L_08A08608:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26304)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26300)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08660;
      }
      goto L_08A08638;
    }
L_08A08638:
    ctx.set_gpr(31, 0x08A08640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A08640u) goto L_08A08640;
    return;
L_08A08640:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0864Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0864Cu) goto L_08A0864C;
    return;
L_08A0864C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A08658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A08658u) goto L_08A08658;
    return;
L_08A08658:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26300), ctx.gpr[2]);
    goto L_08A08660;
L_08A08660:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26300)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08678:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26300)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A086A4;
      }
      goto L_08A08690;
    }
L_08A08690:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A086AC;
      }
      goto L_08A086A4;
    }
L_08A086A4:
    ctx.set_gpr(31, 0x08A086ACu);
    // nop
    goto L_08A08758;
L_08A086AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26300)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A086C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A086DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A086DCu) goto L_08A086DC;
    return;
L_08A086DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-880));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A086F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A086F8u) goto L_08A086F8;
    return;
L_08A086F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-880));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08724;
      }
      goto L_08A0871C;
    }
L_08A0871C:
    ctx.set_gpr(31, 0x08A08724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A08724u) goto L_08A08724;
    return;
L_08A08724:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A08740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A08740u) goto L_08A08740;
    return;
L_08A08740:
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
L_08A08758:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30848));
    ctx.set_gpr(31, 0x08A08770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A08770u) goto L_08A08770;
    return;
L_08A08770:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A08790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A08790u) goto L_08A08790;
    return;
L_08A08790:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30692));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26300));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-30724));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8372));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-31036));
    ctx.set_gpr(31, 0x08A087ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A087ECu) goto L_08A087EC;
    return;
L_08A087EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A087FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0880Cu);
    // nop
    goto L_08A08678;
L_08A0880C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0881C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26300)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A08844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A08844u) goto L_08A08844;
    return;
L_08A08844:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8360));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A08860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A08860u) goto L_08A08860;
    return;
L_08A08860:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A08870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08870u) goto L_08A08870;
    return;
L_08A08870:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0887Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 398u, 0x08A1A35Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0887Cu) goto L_08A0887C;
    return;
L_08A0887C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8344));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8340));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8336));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A088B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A088B0u) goto L_08A088B0;
    return;
L_08A088B0:
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
L_08A088CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26292)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A088F8;
      }
      goto L_08A088E4;
    }
L_08A088E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08900;
      }
      goto L_08A088F8;
    }
L_08A088F8:
    ctx.set_gpr(31, 0x08A08900u);
    // nop
    goto L_08A08988;
L_08A08900:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26292)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08918:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A08930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A08930u) goto L_08A08930;
    return;
L_08A08930:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21524));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A08948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A08948u) goto L_08A08948;
    return;
L_08A08948:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1048));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A08970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A08970u) goto L_08A08970;
    return;
L_08A08970:
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
L_08A08988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30288));
    ctx.set_gpr(31, 0x08A089A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A089A0u) goto L_08A089A0;
    return;
L_08A089A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A089B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A089C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A089C0u) goto L_08A089C0;
    return;
L_08A089C0:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26292));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-29780));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30140));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-30172));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8332));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-30440));
    ctx.set_gpr(31, 0x08A08A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A08A14u) goto L_08A08A14;
    return;
L_08A08A14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08A24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A08A34u);
    // nop
    goto L_08A088CC;
L_08A08A34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08A44:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26280)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08A54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26292)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A08A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A08A78u) goto L_08A08A78;
    return;
L_08A08A78:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8312));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A08A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A08A94u) goto L_08A08A94;
    return;
L_08A08A94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A08AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08AA4u) goto L_08A08AA4;
    return;
L_08A08AA4:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A08AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A08AB8u) goto L_08A08AB8;
    return;
L_08A08AB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8280));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8272));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8264));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A08AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08AE0u) goto L_08A08AE0;
    return;
L_08A08AE0:
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
L_08A08AF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A08B10u);
    // nop
    goto L_08A08B84;
L_08A08B10:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26280)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A08B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A08B24u) goto L_08A08B24;
    return;
L_08A08B24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08B38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26280)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08B64;
      }
      goto L_08A08B50;
    }
L_08A08B50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08B6C;
      }
      goto L_08A08B64;
    }
L_08A08B64:
    ctx.set_gpr(31, 0x08A08B6Cu);
    // nop
    goto L_08A08B84;
L_08A08B6C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26280)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08B84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29780));
    ctx.set_gpr(31, 0x08A08B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A08B9Cu) goto L_08A08B9C;
    return;
L_08A08B9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08BAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A08BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A08BBCu) goto L_08A08BBC;
    return;
L_08A08BBC:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29636));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26280));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29668));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8256));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A08C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A08C0Cu) goto L_08A08C0C;
    return;
L_08A08C0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08C1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A08C2Cu);
    // nop
    goto L_08A08B38;
L_08A08C2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08C3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26280)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A08C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A08C60u) goto L_08A08C60;
    return;
L_08A08C60:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8240));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A08C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A08C7Cu) goto L_08A08C7C;
    return;
L_08A08C7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A08C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08C8Cu) goto L_08A08C8C;
    return;
L_08A08C8C:
    ctx.set_gpr(7, 16368u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A08CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 587u, 0x089126B4u>(ctx, &aot_mem) && ctx.pc == 0x08A08CA0u) goto L_08A08CA0;
    return;
L_08A08CA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8208));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8200));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A08CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08CC8u) goto L_08A08CC8;
    return;
L_08A08CC8:
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30172));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26280)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_08A08CF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26268)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08D34;
      }
      goto L_08A08D0C;
    }
L_08A08D0C:
    ctx.set_gpr(31, 0x08A08D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A08D14u) goto L_08A08D14;
    return;
L_08A08D14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A08D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A08D20u) goto L_08A08D20;
    return;
L_08A08D20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A08D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A08D2Cu) goto L_08A08D2C;
    return;
L_08A08D2C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26268), ctx.gpr[2]);
    goto L_08A08D34;
L_08A08D34:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26268)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08D4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26268)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08D78;
      }
      goto L_08A08D64;
    }
L_08A08D64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08D80;
      }
      goto L_08A08D78;
    }
L_08A08D78:
    ctx.set_gpr(31, 0x08A08D80u);
    // nop
    goto L_08A08DDC;
L_08A08D80:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26268)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08D98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A08DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A08DACu) goto L_08A08DAC;
    return;
L_08A08DAC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1148));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A08DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A08DC0u) goto L_08A08DC0;
    return;
L_08A08DC0:
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
L_08A08DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29180));
    ctx.set_gpr(31, 0x08A08DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A08DF4u) goto L_08A08DF4;
    return;
L_08A08DF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08E04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A08E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A08E14u) goto L_08A08E14;
    return;
L_08A08E14:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26268));
    ctx.set_gpr(6, 2192u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30564));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-29040));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29072));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8192));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-29288));
    ctx.set_gpr(31, 0x08A08E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A08E60u) goto L_08A08E60;
    return;
L_08A08E60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08E70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A08E80u);
    // nop
    goto L_08A08D4C;
L_08A08E80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08E90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30052)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08EA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26264)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08ECC;
      }
      goto L_08A08EB8;
    }
L_08A08EB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08ED4;
      }
      goto L_08A08ECC;
    }
L_08A08ECC:
    ctx.set_gpr(31, 0x08A08ED4u);
    // nop
    goto L_08A08F94;
L_08A08ED4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26264)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08EEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A08F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08F04u) goto L_08A08F04;
    return;
L_08A08F04:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(31, 0x08A08F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A08F28u) goto L_08A08F28;
    return;
L_08A08F28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08F54;
      }
      goto L_08A08F4C;
    }
L_08A08F4C:
    ctx.set_gpr(31, 0x08A08F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A08F54u) goto L_08A08F54;
    return;
L_08A08F54:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A08F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08F6Cu) goto L_08A08F6C;
    return;
L_08A08F6C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A08F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A08F7Cu) goto L_08A08F7C;
    return;
L_08A08F7C:
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
L_08A08F94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28740));
    ctx.set_gpr(31, 0x08A08FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A08FACu) goto L_08A08FAC;
    return;
L_08A08FAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08FBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A08FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A08FCCu) goto L_08A08FCC;
    return;
L_08A08FCC:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28584));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8172));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26264));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-28616));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8164));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-28948));
    ctx.set_gpr(31, 0x08A09028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A09028u) goto L_08A09028;
    return;
L_08A09028:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09038:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A09048u);
    // nop
    goto L_08A08EA0;
L_08A09048:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26264)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A09080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A09080u) goto L_08A09080;
    return;
L_08A09080:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8148));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A0909Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0909Cu) goto L_08A0909C;
    return;
L_08A0909C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A090ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A090ACu) goto L_08A090AC;
    return;
L_08A090AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A090B8u);
    // nop
    goto L_08A08CF4;
L_08A090B8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A090D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A090D4u) goto L_08A090D4;
    return;
L_08A090D4:
    ctx.set_gpr(7, 49136u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A090E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 587u, 0x089126B4u>(ctx, &aot_mem) && ctx.pc == 0x08A090E8u) goto L_08A090E8;
    return;
L_08A090E8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A090F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A090F8u) goto L_08A090F8;
    return;
L_08A090F8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8100));
    ctx.set_gpr(31, 0x08A09110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A09110u) goto L_08A09110;
    return;
L_08A09110:
    ctx.set_gpr(2, 2215u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-528));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8136));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8124));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8112));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A09144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09144u) goto L_08A09144;
    return;
L_08A09144:
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
L_08A09160:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26248)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0918C;
      }
      goto L_08A09178;
    }
L_08A09178:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A09194;
      }
      goto L_08A0918C;
    }
L_08A0918C:
    ctx.set_gpr(31, 0x08A09194u);
    // nop
    goto L_08A09250;
L_08A09194:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26248)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A091AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A091C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A091C4u) goto L_08A091C4;
    return;
L_08A091C4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21356));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(31, 0x08A091E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A091E4u) goto L_08A091E4;
    return;
L_08A091E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21356));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09210;
      }
      goto L_08A09208;
    }
L_08A09208:
    ctx.set_gpr(31, 0x08A09210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A09210u) goto L_08A09210;
    return;
L_08A09210:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09224;
      }
      goto L_08A0921C;
    }
L_08A0921C:
    ctx.set_gpr(31, 0x08A09224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A09224u) goto L_08A09224;
    return;
L_08A09224:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09238;
      }
      goto L_08A09230;
    }
L_08A09230:
    ctx.set_gpr(31, 0x08A09238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A09238u) goto L_08A09238;
    return;
L_08A09238:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28040));
    ctx.set_gpr(31, 0x08A09268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A09268u) goto L_08A09268;
    return;
L_08A09268:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09278:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A09288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A09288u) goto L_08A09288;
    return;
L_08A09288:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27868));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8096));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26248));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14180));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27884));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-27916));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-8084));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-28244));
    ctx.set_gpr(31, 0x08A092E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A092E4u) goto L_08A092E4;
    return;
L_08A092E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A092F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A09304u);
    // nop
    goto L_08A09160;
L_08A09304:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09314:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25836)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09324:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26248)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0934Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0934Cu) goto L_08A0934C;
    return;
L_08A0934C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8048));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A09368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A09368u) goto L_08A09368;
    return;
L_08A09368:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A09378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09378u) goto L_08A09378;
    return;
L_08A09378:
    ctx.set_gpr(3, 2214u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(18136));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A09394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09394u) goto L_08A09394;
    return;
L_08A09394:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A093A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A093A4u) goto L_08A093A4;
    return;
L_08A093A4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A093B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A093B4u) goto L_08A093B4;
    return;
L_08A093B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A093C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A093C4u) goto L_08A093C4;
    return;
L_08A093C4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A093D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A093D4u) goto L_08A093D4;
    return;
L_08A093D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A093E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A093E4u) goto L_08A093E4;
    return;
L_08A093E4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A093F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A093F4u) goto L_08A093F4;
    return;
L_08A093F4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A09400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 99u, 0x088B0944u>(ctx, &aot_mem) && ctx.pc == 0x08A09400u) goto L_08A09400;
    return;
L_08A09400:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A09414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09414u) goto L_08A09414;
    return;
L_08A09414:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A09420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 99u, 0x088B0944u>(ctx, &aot_mem) && ctx.pc == 0x08A09420u) goto L_08A09420;
    return;
L_08A09420:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A09434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09434u) goto L_08A09434;
    return;
L_08A09434:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A09440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 919u, 0x088AFAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A09440u) goto L_08A09440;
    return;
L_08A09440:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A09454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09454u) goto L_08A09454;
    return;
L_08A09454:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A09468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09468u) goto L_08A09468;
    return;
L_08A09468:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0947Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0947Cu) goto L_08A0947C;
    return;
L_08A0947C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A09490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09490u) goto L_08A09490;
    return;
L_08A09490:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A094A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A094A4u) goto L_08A094A4;
    return;
L_08A094A4:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A094B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A094B8u) goto L_08A094B8;
    return;
L_08A094B8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A094CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A094CCu) goto L_08A094CC;
    return;
L_08A094CC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A094E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A094E0u) goto L_08A094E0;
    return;
L_08A094E0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7708));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7644));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-7580));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0950Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0950Cu) goto L_08A0950C;
    return;
L_08A0950C:
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
L_08A09528:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26180)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09554;
      }
      goto L_08A09540;
    }
L_08A09540:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0955C;
      }
      goto L_08A09554;
    }
L_08A09554:
    ctx.set_gpr(31, 0x08A0955Cu);
    // nop
    goto L_08A0961C;
L_08A0955C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26180)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09574:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0958Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0958Cu) goto L_08A0958C;
    return;
L_08A0958C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21244));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x08A095B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A095B0u) goto L_08A095B0;
    return;
L_08A095B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21244));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A095DC;
      }
      goto L_08A095D4;
    }
L_08A095D4:
    ctx.set_gpr(31, 0x08A095DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A095DCu) goto L_08A095DC;
    return;
L_08A095DC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A095F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A095F4u) goto L_08A095F4;
    return;
L_08A095F4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A09604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A09604u) goto L_08A09604;
    return;
L_08A09604:
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
L_08A0961C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27068));
    ctx.set_gpr(31, 0x08A09634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A09634u) goto L_08A09634;
    return;
L_08A09634:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09644:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A09654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A09654u) goto L_08A09654;
    return;
L_08A09654:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26912));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7516));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26180));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-26944));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-7508));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-27276));
    ctx.set_gpr(31, 0x08A096B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A096B0u) goto L_08A096B0;
    return;
L_08A096B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A096C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A096D0u);
    // nop
    goto L_08A09528;
L_08A096D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A096E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26180)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A09708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A09708u) goto L_08A09708;
    return;
L_08A09708:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A09724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A09724u) goto L_08A09724;
    return;
L_08A09724:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A09734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09734u) goto L_08A09734;
    return;
L_08A09734:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A09740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 543u, 0x088FAF98u>(ctx, &aot_mem) && ctx.pc == 0x08A09740u) goto L_08A09740;
    return;
L_08A09740:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7480));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7476));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-7472));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A09774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09774u) goto L_08A09774;
    return;
L_08A09774:
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
L_08A09790:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26172)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A097BC;
      }
      goto L_08A097A8;
    }
L_08A097A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A097C4;
      }
      goto L_08A097BC;
    }
L_08A097BC:
    ctx.set_gpr(31, 0x08A097C4u);
    // nop
    goto L_08A09878;
L_08A097C4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26172)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A097DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A097F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A097F4u) goto L_08A097F4;
    return;
L_08A097F4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1388));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x08A0980Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0980Cu) goto L_08A0980C;
    return;
L_08A0980C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1388));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09848;
      }
      goto L_08A09834;
    }
L_08A09834:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A09840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09840u) goto L_08A09840;
    return;
L_08A09840:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A09848;
L_08A09848:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09860;
      }
      goto L_08A09850;
    }
L_08A09850:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A09860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A09860u) goto L_08A09860;
    return;
L_08A09860:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09878:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.set_gpr(31, 0x08A09890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A09890u) goto L_08A09890;
    return;
L_08A09890:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A098A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A098B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A098B0u) goto L_08A098B0;
    return;
L_08A098B0:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26172));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(648));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26316));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-26348));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-7468));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-26660));
    ctx.set_gpr(31, 0x08A09904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A09904u) goto L_08A09904;
    return;
L_08A09904:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A09924u);
    // nop
    goto L_08A09790;
L_08A09924:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09934:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25468)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26172)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A09968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A09968u) goto L_08A09968;
    return;
L_08A09968:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7452));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A09984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A09984u) goto L_08A09984;
    return;
L_08A09984:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7440));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7436));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-7432));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A099ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A099ACu) goto L_08A099AC;
    return;
L_08A099AC:
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
L_08A099C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26164)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A099F0;
      }
      goto L_08A099DC;
    }
L_08A099DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A099F8;
      }
      goto L_08A099F0;
    }
L_08A099F0:
    ctx.set_gpr(31, 0x08A099F8u);
    // nop
    goto L_08A09AAC;
L_08A099F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26164)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09A10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A09A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A09A28u) goto L_08A09A28;
    return;
L_08A09A28:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21096));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x08A09A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A09A40u) goto L_08A09A40;
    return;
L_08A09A40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21096));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09A7C;
      }
      goto L_08A09A68;
    }
L_08A09A68:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A09A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09A74u) goto L_08A09A74;
    return;
L_08A09A74:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A09A7C;
L_08A09A7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09A94;
      }
      goto L_08A09A84;
    }
L_08A09A84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A09A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A09A94u) goto L_08A09A94;
    return;
L_08A09A94:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09AAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-25900));
    ctx.set_gpr(31, 0x08A09AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A09AC4u) goto L_08A09AC4;
    return;
L_08A09AC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09AD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A09AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A09AE4u) goto L_08A09AE4;
    return;
L_08A09AE4:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25736));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26164));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(988));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25752));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-25784));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-7428));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(31, 0x08A09B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A09B38u) goto L_08A09B38;
    return;
L_08A09B38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09B48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A09B58u);
    // nop
    goto L_08A099C4;
L_08A09B58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09B68:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25464)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09B78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26164)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A09B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A09B9Cu) goto L_08A09B9C;
    return;
L_08A09B9C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7416));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A09BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A09BB8u) goto L_08A09BB8;
    return;
L_08A09BB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7412));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7408));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-7404));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A09BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09BE0u) goto L_08A09BE0;
    return;
L_08A09BE0:
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
L_08A09BF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26156)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09C24;
      }
      goto L_08A09C10;
    }
L_08A09C10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A09C2C;
      }
      goto L_08A09C24;
    }
L_08A09C24:
    ctx.set_gpr(31, 0x08A09C2Cu);
    // nop
    goto L_08A09E4C;
L_08A09C2C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26156)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09C44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A09C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A09C5Cu) goto L_08A09C5C;
    return;
L_08A09C5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20996));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(31, 0x08A09C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A09C88u) goto L_08A09C88;
    return;
L_08A09C88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20996));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09CB4;
      }
      goto L_08A09CAC;
    }
L_08A09CAC:
    ctx.set_gpr(31, 0x08A09CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A09CB4u) goto L_08A09CB4;
    return;
L_08A09CB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09CC8;
      }
      goto L_08A09CC0;
    }
L_08A09CC0:
    ctx.set_gpr(31, 0x08A09CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A09CC8u) goto L_08A09CC8;
    return;
L_08A09CC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09CDC;
      }
      goto L_08A09CD4;
    }
L_08A09CD4:
    ctx.set_gpr(31, 0x08A09CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A09CDCu) goto L_08A09CDC;
    return;
L_08A09CDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09CF0;
      }
      goto L_08A09CE8;
    }
L_08A09CE8:
    ctx.set_gpr(31, 0x08A09CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A09CF0u) goto L_08A09CF0;
    return;
L_08A09CF0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13116));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A09D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09D08u) goto L_08A09D08;
    return;
L_08A09D08:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A09D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A09D18u) goto L_08A09D18;
    return;
L_08A09D18:
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
L_08A09D30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09E30;
      }
      goto L_08A09D50;
    }
L_08A09D50:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13116));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09D7C;
      }
      goto L_08A09D68;
    }
L_08A09D68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09D7C;
      }
      goto L_08A09D74;
    }
L_08A09D74:
    ctx.set_gpr(31, 0x08A09D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A09D7Cu) goto L_08A09D7C;
    return;
L_08A09D7C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09E18;
      }
      goto L_08A09D84;
    }
L_08A09D84:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09DB0;
      }
      goto L_08A09D9C;
    }
L_08A09D9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09DB0;
      }
      goto L_08A09DA8;
    }
L_08A09DA8:
    ctx.set_gpr(31, 0x08A09DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A09DB0u) goto L_08A09DB0;
    return;
L_08A09DB0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09E18;
      }
      goto L_08A09DB8;
    }
L_08A09DB8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09DDC;
      }
      goto L_08A09DD0;
    }
L_08A09DD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A09DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09DDCu) goto L_08A09DDC;
    return;
L_08A09DDC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09DF4;
      }
      goto L_08A09DE8;
    }
L_08A09DE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A09DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09DF4u) goto L_08A09DF4;
    return;
L_08A09DF4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09E18;
      }
      goto L_08A09DFC;
    }
L_08A09DFC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A09E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A09E18u) goto L_08A09E18;
    return;
L_08A09E18:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A09E30;
      }
      goto L_08A09E24;
    }
L_08A09E24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A09E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x08A09E30u) goto L_08A09E30;
    return;
L_08A09E30:
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
L_08A09E4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24972));
    ctx.set_gpr(31, 0x08A09E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A09E64u) goto L_08A09E64;
    return;
L_08A09E64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09E74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A09E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A09E84u) goto L_08A09E84;
    return;
L_08A09E84:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24792));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24456));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7400));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26156));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10072));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24808));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-24840));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-7380));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-25532));
    ctx.set_gpr(31, 0x08A09EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A09EE8u) goto L_08A09EE8;
    return;
L_08A09EE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09EF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A09F08u);
    // nop
    goto L_08A09BF8;
L_08A09F08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09F18:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23024)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09F28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26156)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A09F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A09F50u) goto L_08A09F50;
    return;
L_08A09F50:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7364));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08A09F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A09F6Cu) goto L_08A09F6C;
    return;
L_08A09F6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A09F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09F7Cu) goto L_08A09F7C;
    return;
L_08A09F7C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A09F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 444u, 0x088BE86Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09F88u) goto L_08A09F88;
    return;
L_08A09F88:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A09F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09F9Cu) goto L_08A09F9C;
    return;
L_08A09F9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A09FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 537u, 0x088C2FACu>(ctx, &aot_mem) && ctx.pc == 0x08A09FA8u) goto L_08A09FA8;
    return;
L_08A09FA8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A09FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09FC4u) goto L_08A09FC4;
    return;
L_08A09FC4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A09FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 341u, 0x08A19DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A09FD0u) goto L_08A09FD0;
    return;
L_08A09FD0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A09FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09FE4u) goto L_08A09FE4;
    return;
L_08A09FE4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A09FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A09FF0u) goto L_08A09FF0;
    return;
L_08A09FF0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0A010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A010u) goto L_08A0A010;
    return;
L_08A0A010:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0A024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A024u) goto L_08A0A024;
    return;
L_08A0A024:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A0A034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A0A034u) goto L_08A0A034;
    return;
L_08A0A034:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7228));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7204));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-7180));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0A05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A05Cu) goto L_08A0A05C;
    return;
L_08A0A05C:
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
L_08A0A078:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0A088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 4u, 0x08A6403Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A088u) goto L_08A0A088;
    return;
L_08A0A088:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A098:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26128)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A0D8;
      }
      goto L_08A0A0B0;
    }
L_08A0A0B0:
    ctx.set_gpr(31, 0x08A0A0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A0B8u) goto L_08A0A0B8;
    return;
L_08A0A0B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0A0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0A0C4u) goto L_08A0A0C4;
    return;
L_08A0A0C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0A0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A0D0u) goto L_08A0A0D0;
    return;
L_08A0A0D0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26128), ctx.gpr[2]);
    goto L_08A0A0D8;
L_08A0A0D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26128)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A0F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26128)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A11C;
      }
      goto L_08A0A108;
    }
L_08A0A108:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A124;
      }
      goto L_08A0A11C;
    }
L_08A0A11C:
    ctx.set_gpr(31, 0x08A0A124u);
    // nop
    goto L_08A0A1E0;
L_08A0A124:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26128)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A13C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0A154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A154u) goto L_08A0A154;
    return;
L_08A0A154:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A0A174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A174u) goto L_08A0A174;
    return;
L_08A0A174:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1A0;
      }
      goto L_08A0A198;
    }
L_08A0A198:
    ctx.set_gpr(31, 0x08A0A1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A1A0u) goto L_08A0A1A0;
    return;
L_08A0A1A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1B4;
      }
      goto L_08A0A1AC;
    }
L_08A0A1AC:
    ctx.set_gpr(31, 0x08A0A1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A1B4u) goto L_08A0A1B4;
    return;
L_08A0A1B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1C8;
      }
      goto L_08A0A1C0;
    }
L_08A0A1C0:
    ctx.set_gpr(31, 0x08A0A1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A1C8u) goto L_08A0A1C8;
    return;
L_08A0A1C8:
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
L_08A0A1E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24056));
    ctx.set_gpr(31, 0x08A0A1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0A1F8u) goto L_08A0A1F8;
    return;
L_08A0A1F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A208:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0A218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0A218u) goto L_08A0A218;
    return;
L_08A0A218:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23900));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7156));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26128));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-23932));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-7144));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-24260));
    ctx.set_gpr(31, 0x08A0A274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0A274u) goto L_08A0A274;
    return;
L_08A0A274:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A284:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0A294u);
    // nop
    goto L_08A0A0F0;
L_08A0A294:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A2A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26128)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0A2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A2CCu) goto L_08A0A2CC;
    return;
L_08A0A2CC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7128));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08A0A2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0A2E8u) goto L_08A0A2E8;
    return;
L_08A0A2E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0A2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A2F8u) goto L_08A0A2F8;
    return;
L_08A0A2F8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0A304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A0A304u) goto L_08A0A304;
    return;
L_08A0A304:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0A320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A320u) goto L_08A0A320;
    return;
L_08A0A320:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0A32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A0A32Cu) goto L_08A0A32C;
    return;
L_08A0A32C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0A344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A344u) goto L_08A0A344;
    return;
L_08A0A344:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0A350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A0A350u) goto L_08A0A350;
    return;
L_08A0A350:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0A36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A36Cu) goto L_08A0A36C;
    return;
L_08A0A36C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0A378u);
    // nop
    goto L_08A0A56C;
L_08A0A378:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7020));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6996));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6972));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0A3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A3ACu) goto L_08A0A3AC;
    return;
L_08A0A3AC:
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
L_08A0A3C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26100)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A408;
      }
      goto L_08A0A3E0;
    }
L_08A0A3E0:
    ctx.set_gpr(31, 0x08A0A3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A3E8u) goto L_08A0A3E8;
    return;
L_08A0A3E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0A3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0A3F4u) goto L_08A0A3F4;
    return;
L_08A0A3F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0A400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A400u) goto L_08A0A400;
    return;
L_08A0A400:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26100), ctx.gpr[2]);
    goto L_08A0A408;
L_08A0A408:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26100)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A420:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A44C;
      }
      goto L_08A0A438;
    }
L_08A0A438:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A454;
      }
      goto L_08A0A44C;
    }
L_08A0A44C:
    ctx.set_gpr(31, 0x08A0A454u);
    // nop
    goto L_08A0A4B0;
L_08A0A454:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26100)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A46C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0A480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A0A480u) goto L_08A0A480;
    return;
L_08A0A480:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1584));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0A494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A494u) goto L_08A0A494;
    return;
L_08A0A494:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A4B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-23336));
    ctx.set_gpr(31, 0x08A0A4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0A4C8u) goto L_08A0A4C8;
    return;
L_08A0A4C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A4D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0A4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0A4E8u) goto L_08A0A4E8;
    return;
L_08A0A4E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6948));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26100));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-23220));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-6940));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-23444));
    ctx.set_gpr(31, 0x08A0A53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0A53Cu) goto L_08A0A53C;
    return;
L_08A0A53C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A54C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0A55Cu);
    // nop
    goto L_08A0A420;
L_08A0A55C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A56C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26096)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A5AC;
      }
      goto L_08A0A584;
    }
L_08A0A584:
    ctx.set_gpr(31, 0x08A0A58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A58Cu) goto L_08A0A58C;
    return;
L_08A0A58C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0A598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0A598u) goto L_08A0A598;
    return;
L_08A0A598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0A5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A5A4u) goto L_08A0A5A4;
    return;
L_08A0A5A4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26096), ctx.gpr[2]);
    goto L_08A0A5AC;
L_08A0A5AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26096)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A5C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26096)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A5F0;
      }
      goto L_08A0A5DC;
    }
L_08A0A5DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A5F8;
      }
      goto L_08A0A5F0;
    }
L_08A0A5F0:
    ctx.set_gpr(31, 0x08A0A5F8u);
    // nop
    goto L_08A0A654;
L_08A0A5F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26096)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A610:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0A624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A624u) goto L_08A0A624;
    return;
L_08A0A624:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1688));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0A638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A638u) goto L_08A0A638;
    return;
L_08A0A638:
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
L_08A0A654:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22916));
    ctx.set_gpr(31, 0x08A0A66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0A66Cu) goto L_08A0A66C;
    return;
L_08A0A66C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A67C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0A68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0A68Cu) goto L_08A0A68C;
    return;
L_08A0A68C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6920));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11416));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13108));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-22800));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-6912));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-23024));
    ctx.set_gpr(31, 0x08A0A6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0A6E0u) goto L_08A0A6E0;
    return;
L_08A0A6E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A6F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0A700u);
    // nop
    goto L_08A0A5C4;
L_08A0A700:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26092)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A750;
      }
      goto L_08A0A728;
    }
L_08A0A728:
    ctx.set_gpr(31, 0x08A0A730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A730u) goto L_08A0A730;
    return;
L_08A0A730:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0A73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0A73Cu) goto L_08A0A73C;
    return;
L_08A0A73C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0A748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A748u) goto L_08A0A748;
    return;
L_08A0A748:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26092), ctx.gpr[2]);
    goto L_08A0A750;
L_08A0A750:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26092)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26092)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A794;
      }
      goto L_08A0A780;
    }
L_08A0A780:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A79C;
      }
      goto L_08A0A794;
    }
L_08A0A794:
    ctx.set_gpr(31, 0x08A0A79Cu);
    // nop
    goto L_08A0AA68;
L_08A0A79C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26092)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A7B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0A7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A7CCu) goto L_08A0A7CC;
    return;
L_08A0A7CC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20812));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    ctx.set_gpr(31, 0x08A0A844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A844u) goto L_08A0A844;
    return;
L_08A0A844:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20812));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A870;
      }
      goto L_08A0A868;
    }
L_08A0A868:
    ctx.set_gpr(31, 0x08A0A870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A870u) goto L_08A0A870;
    return;
L_08A0A870:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A884;
      }
      goto L_08A0A87C;
    }
L_08A0A87C:
    ctx.set_gpr(31, 0x08A0A884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A884u) goto L_08A0A884;
    return;
L_08A0A884:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A898;
      }
      goto L_08A0A890;
    }
L_08A0A890:
    ctx.set_gpr(31, 0x08A0A898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A898u) goto L_08A0A898;
    return;
L_08A0A898:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A8AC;
      }
      goto L_08A0A8A4;
    }
L_08A0A8A4:
    ctx.set_gpr(31, 0x08A0A8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A8ACu) goto L_08A0A8AC;
    return;
L_08A0A8AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A8C0;
      }
      goto L_08A0A8B8;
    }
L_08A0A8B8:
    ctx.set_gpr(31, 0x08A0A8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A8C0u) goto L_08A0A8C0;
    return;
L_08A0A8C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A8D4;
      }
      goto L_08A0A8CC;
    }
L_08A0A8CC:
    ctx.set_gpr(31, 0x08A0A8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A8D4u) goto L_08A0A8D4;
    return;
L_08A0A8D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A8E8;
      }
      goto L_08A0A8E0;
    }
L_08A0A8E0:
    ctx.set_gpr(31, 0x08A0A8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A8E8u) goto L_08A0A8E8;
    return;
L_08A0A8E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A8FC;
      }
      goto L_08A0A8F4;
    }
L_08A0A8F4:
    ctx.set_gpr(31, 0x08A0A8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A8FCu) goto L_08A0A8FC;
    return;
L_08A0A8FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A910;
      }
      goto L_08A0A908;
    }
L_08A0A908:
    ctx.set_gpr(31, 0x08A0A910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A910u) goto L_08A0A910;
    return;
L_08A0A910:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A924;
      }
      goto L_08A0A91C;
    }
L_08A0A91C:
    ctx.set_gpr(31, 0x08A0A924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A924u) goto L_08A0A924;
    return;
L_08A0A924:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A938;
      }
      goto L_08A0A930;
    }
L_08A0A930:
    ctx.set_gpr(31, 0x08A0A938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A938u) goto L_08A0A938;
    return;
L_08A0A938:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A94C;
      }
      goto L_08A0A944;
    }
L_08A0A944:
    ctx.set_gpr(31, 0x08A0A94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A94Cu) goto L_08A0A94C;
    return;
L_08A0A94C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A960;
      }
      goto L_08A0A958;
    }
L_08A0A958:
    ctx.set_gpr(31, 0x08A0A960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A960u) goto L_08A0A960;
    return;
L_08A0A960:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A974;
      }
      goto L_08A0A96C;
    }
L_08A0A96C:
    ctx.set_gpr(31, 0x08A0A974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A974u) goto L_08A0A974;
    return;
L_08A0A974:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A988;
      }
      goto L_08A0A980;
    }
L_08A0A980:
    ctx.set_gpr(31, 0x08A0A988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A988u) goto L_08A0A988;
    return;
L_08A0A988:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A99C;
      }
      goto L_08A0A994;
    }
L_08A0A994:
    ctx.set_gpr(31, 0x08A0A99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A99Cu) goto L_08A0A99C;
    return;
L_08A0A99C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A9B0;
      }
      goto L_08A0A9A8;
    }
L_08A0A9A8:
    ctx.set_gpr(31, 0x08A0A9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A9B0u) goto L_08A0A9B0;
    return;
L_08A0A9B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A9C4;
      }
      goto L_08A0A9BC;
    }
L_08A0A9BC:
    ctx.set_gpr(31, 0x08A0A9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A9C4u) goto L_08A0A9C4;
    return;
L_08A0A9C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A9D8;
      }
      goto L_08A0A9D0;
    }
L_08A0A9D0:
    ctx.set_gpr(31, 0x08A0A9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A9D8u) goto L_08A0A9D8;
    return;
L_08A0A9D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A9EC;
      }
      goto L_08A0A9E4;
    }
L_08A0A9E4:
    ctx.set_gpr(31, 0x08A0A9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0A9ECu) goto L_08A0A9EC;
    return;
L_08A0A9EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AA00;
      }
      goto L_08A0A9F8;
    }
L_08A0A9F8:
    ctx.set_gpr(31, 0x08A0AA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0AA00u) goto L_08A0AA00;
    return;
L_08A0AA00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AA14;
      }
      goto L_08A0AA0C;
    }
L_08A0AA0C:
    ctx.set_gpr(31, 0x08A0AA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0AA14u) goto L_08A0AA14;
    return;
L_08A0AA14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AA28;
      }
      goto L_08A0AA20;
    }
L_08A0AA20:
    ctx.set_gpr(31, 0x08A0AA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0AA28u) goto L_08A0AA28;
    return;
L_08A0AA28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AA3C;
      }
      goto L_08A0AA34;
    }
L_08A0AA34:
    ctx.set_gpr(31, 0x08A0AA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0AA3Cu) goto L_08A0AA3C;
    return;
L_08A0AA3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AA50;
      }
      goto L_08A0AA48;
    }
L_08A0AA48:
    ctx.set_gpr(31, 0x08A0AA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0AA50u) goto L_08A0AA50;
    return;
L_08A0AA50:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AA68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21872));
    ctx.set_gpr(31, 0x08A0AA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0AA80u) goto L_08A0AA80;
    return;
L_08A0AA80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AA90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0AAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0AAA0u) goto L_08A0AAA0;
    return;
L_08A0AAA0:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21716));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6892));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26092));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-21748));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-6852));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(132));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-22604));
    ctx.set_gpr(31, 0x08A0AAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0AAFCu) goto L_08A0AAFC;
    return;
L_08A0AAFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AB0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0AB1Cu);
    // nop
    goto L_08A0A768;
L_08A0AB1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AB2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26092)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0AB54u) goto L_08A0AB54;
    return;
L_08A0AB54:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6840));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A0AB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0AB70u) goto L_08A0AB70;
    return;
L_08A0AB70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0AB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB80u) goto L_08A0AB80;
    return;
L_08A0AB80:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 444u, 0x088BE86Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB8Cu) goto L_08A0AB8C;
    return;
L_08A0AB8C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0ABA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ABA8u) goto L_08A0ABA8;
    return;
L_08A0ABA8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0ABB4u);
    // nop
    goto L_08A0A3C8;
L_08A0ABB4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0ABD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ABD0u) goto L_08A0ABD0;
    return;
L_08A0ABD0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0ABDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A0ABDCu) goto L_08A0ABDC;
    return;
L_08A0ABDC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0ABF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ABF8u) goto L_08A0ABF8;
    return;
L_08A0ABF8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AC04u);
    // nop
    goto L_08A0A56C;
L_08A0AC04:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AC20u) goto L_08A0AC20;
    return;
L_08A0AC20:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AC2Cu);
    // nop
    goto L_08A0A56C;
L_08A0AC2C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AC48u) goto L_08A0AC48;
    return;
L_08A0AC48:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AC54u);
    // nop
    goto L_08A0A56C;
L_08A0AC54:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AC70u) goto L_08A0AC70;
    return;
L_08A0AC70:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 444u, 0x088BE86Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AC7Cu) goto L_08A0AC7C;
    return;
L_08A0AC7C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AC98u) goto L_08A0AC98;
    return;
L_08A0AC98:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0ACA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 444u, 0x088BE86Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ACA4u) goto L_08A0ACA4;
    return;
L_08A0ACA4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0ACC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ACC0u) goto L_08A0ACC0;
    return;
L_08A0ACC0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0ACCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 444u, 0x088BE86Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ACCCu) goto L_08A0ACCC;
    return;
L_08A0ACCC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0ACE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ACE8u) goto L_08A0ACE8;
    return;
L_08A0ACE8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0ACF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 444u, 0x088BE86Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ACF4u) goto L_08A0ACF4;
    return;
L_08A0ACF4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD10u) goto L_08A0AD10;
    return;
L_08A0AD10:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AD1Cu) goto L_08A0AD1C;
    return;
L_08A0AD1C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD38u) goto L_08A0AD38;
    return;
L_08A0AD38:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AD44u) goto L_08A0AD44;
    return;
L_08A0AD44:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD60u) goto L_08A0AD60;
    return;
L_08A0AD60:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AD6Cu) goto L_08A0AD6C;
    return;
L_08A0AD6C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD88u) goto L_08A0AD88;
    return;
L_08A0AD88:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 550u, 0x088BF22Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD94u) goto L_08A0AD94;
    return;
L_08A0AD94:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0ADB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADB0u) goto L_08A0ADB0;
    return;
L_08A0ADB0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0ADBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 651u, 0x088BFBACu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADBCu) goto L_08A0ADBC;
    return;
L_08A0ADBC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0ADD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADD8u) goto L_08A0ADD8;
    return;
L_08A0ADD8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0ADE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 651u, 0x088BFBACu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADE4u) goto L_08A0ADE4;
    return;
L_08A0ADE4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AE00u) goto L_08A0AE00;
    return;
L_08A0AE00:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AE0Cu);
    // nop
    goto L_08A0A098;
L_08A0AE0C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AE28u) goto L_08A0AE28;
    return;
L_08A0AE28:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AE34u);
    // nop
    goto L_08A0A56C;
L_08A0AE34:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AE50u) goto L_08A0AE50;
    return;
L_08A0AE50:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AE5Cu) goto L_08A0AE5C;
    return;
L_08A0AE5C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AE78u) goto L_08A0AE78;
    return;
L_08A0AE78:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 444u, 0x088BE86Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AE84u) goto L_08A0AE84;
    return;
L_08A0AE84:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AEA0u) goto L_08A0AEA0;
    return;
L_08A0AEA0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 444u, 0x088BE86Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AEACu) goto L_08A0AEAC;
    return;
L_08A0AEAC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(23));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AEC8u) goto L_08A0AEC8;
    return;
L_08A0AEC8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 421u, 0x08A1A540u>(ctx, &aot_mem) && ctx.pc == 0x08A0AED4u) goto L_08A0AED4;
    return;
L_08A0AED4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AEF0u) goto L_08A0AEF0;
    return;
L_08A0AEF0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AEFCu) goto L_08A0AEFC;
    return;
L_08A0AEFC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(25));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AF18u) goto L_08A0AF18;
    return;
L_08A0AF18:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AF24u) goto L_08A0AF24;
    return;
L_08A0AF24:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(29));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AF40u) goto L_08A0AF40;
    return;
L_08A0AF40:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AF4Cu);
    // nop
    goto L_08A0A098;
L_08A0AF4C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AF60u) goto L_08A0AF60;
    return;
L_08A0AF60:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0AF6Cu);
    // nop
    goto L_08A0A098;
L_08A0AF6C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(35));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0AF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AF84u) goto L_08A0AF84;
    return;
L_08A0AF84:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6008));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5864));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5720));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0AFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AFB0u) goto L_08A0AFB0;
    return;
L_08A0AFB0:
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
L_08A0AFCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25944)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B00C;
      }
      goto L_08A0AFE4;
    }
L_08A0AFE4:
    ctx.set_gpr(31, 0x08A0AFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0AFECu) goto L_08A0AFEC;
    return;
L_08A0AFEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0AFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0AFF8u) goto L_08A0AFF8;
    return;
L_08A0AFF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0B004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B004u) goto L_08A0B004;
    return;
L_08A0B004:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25944), ctx.gpr[2]);
    goto L_08A0B00C;
L_08A0B00C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25944)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25944)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B050;
      }
      goto L_08A0B03C;
    }
L_08A0B03C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B058;
      }
      goto L_08A0B050;
    }
L_08A0B050:
    ctx.set_gpr(31, 0x08A0B058u);
    // nop
    goto L_08A0B118;
L_08A0B058:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25944)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B070:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0B088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B088u) goto L_08A0B088;
    return;
L_08A0B088:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1780));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A0B0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B0A8u) goto L_08A0B0A8;
    return;
L_08A0B0A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1780));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B0D4;
      }
      goto L_08A0B0CC;
    }
L_08A0B0CC:
    ctx.set_gpr(31, 0x08A0B0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0B0D4u) goto L_08A0B0D4;
    return;
L_08A0B0D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B0E8;
      }
      goto L_08A0B0E0;
    }
L_08A0B0E0:
    ctx.set_gpr(31, 0x08A0B0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0B0E8u) goto L_08A0B0E8;
    return;
L_08A0B0E8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A0B100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08A0B100u) goto L_08A0B100;
    return;
L_08A0B100:
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
L_08A0B118:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20160));
    ctx.set_gpr(31, 0x08A0B130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0B130u) goto L_08A0B130;
    return;
L_08A0B130:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0B150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0B150u) goto L_08A0B150;
    return;
L_08A0B150:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20004));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25944));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-20036));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-5564));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-20368));
    ctx.set_gpr(31, 0x08A0B1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0B1ACu) goto L_08A0B1AC;
    return;
L_08A0B1AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B1BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0B1CCu);
    // nop
    goto L_08A0B024;
L_08A0B1CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25944)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0B204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B204u) goto L_08A0B204;
    return;
L_08A0B204:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5556));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A0B220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0B220u) goto L_08A0B220;
    return;
L_08A0B220:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0B230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B230u) goto L_08A0B230;
    return;
L_08A0B230:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0B23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 468u, 0x08A1255Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B23Cu) goto L_08A0B23C;
    return;
L_08A0B23C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0B250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B250u) goto L_08A0B250;
    return;
L_08A0B250:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0B25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 364u, 0x089F2A58u>(ctx, &aot_mem) && ctx.pc == 0x08A0B25Cu) goto L_08A0B25C;
    return;
L_08A0B25C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5524));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5516));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5508));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0B288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B288u) goto L_08A0B288;
    return;
L_08A0B288:
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
L_08A0B2A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25932)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B2E4;
      }
      goto L_08A0B2BC;
    }
L_08A0B2BC:
    ctx.set_gpr(31, 0x08A0B2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0B2C4u) goto L_08A0B2C4;
    return;
L_08A0B2C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0B2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0B2D0u) goto L_08A0B2D0;
    return;
L_08A0B2D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0B2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B2DCu) goto L_08A0B2DC;
    return;
L_08A0B2DC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25932), ctx.gpr[2]);
    goto L_08A0B2E4;
L_08A0B2E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25932)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B2FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25932)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B328;
      }
      goto L_08A0B314;
    }
L_08A0B314:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B330;
      }
      goto L_08A0B328;
    }
L_08A0B328:
    ctx.set_gpr(31, 0x08A0B330u);
    // nop
    goto L_08A0B38C;
L_08A0B330:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25932)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0B35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B35Cu) goto L_08A0B35C;
    return;
L_08A0B35C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1884));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0B370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B370u) goto L_08A0B370;
    return;
L_08A0B370:
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
L_08A0B38C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19532));
    ctx.set_gpr(31, 0x08A0B3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0B3A4u) goto L_08A0B3A4;
    return;
L_08A0B3A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B3B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0B3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0B3C4u) goto L_08A0B3C4;
    return;
L_08A0B3C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5500));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25932));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-19416));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-5492));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-19640));
    ctx.set_gpr(31, 0x08A0B418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0B418u) goto L_08A0B418;
    return;
L_08A0B418:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0B438u);
    // nop
    goto L_08A0B2FC;
L_08A0B438:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B448:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A0B460u);
    // nop
    goto L_08A0B548;
L_08A0B460:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25928)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0B474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0B474u) goto L_08A0B474;
    return;
L_08A0B474:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25928)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B4B4;
      }
      goto L_08A0B4A0;
    }
L_08A0B4A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B4BC;
      }
      goto L_08A0B4B4;
    }
L_08A0B4B4:
    ctx.set_gpr(31, 0x08A0B4BCu);
    // nop
    goto L_08A0B548;
L_08A0B4BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25928)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B4D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0B4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B4ECu) goto L_08A0B4EC;
    return;
L_08A0B4EC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1976));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x08A0B504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B504u) goto L_08A0B504;
    return;
L_08A0B504:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1976));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B530;
      }
      goto L_08A0B528;
    }
L_08A0B528:
    ctx.set_gpr(31, 0x08A0B530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0B530u) goto L_08A0B530;
    return;
L_08A0B530:
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
L_08A0B548:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19088));
    ctx.set_gpr(31, 0x08A0B560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0B560u) goto L_08A0B560;
    return;
L_08A0B560:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B570:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0B580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0B580u) goto L_08A0B580;
    return;
L_08A0B580:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18932));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25928));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-18964));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-5472));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-19244));
    ctx.set_gpr(31, 0x08A0B5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0B5DCu) goto L_08A0B5DC;
    return;
L_08A0B5DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B5EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0B5FCu);
    // nop
    goto L_08A0B488;
L_08A0B5FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B60C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25928)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0B634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B634u) goto L_08A0B634;
    return;
L_08A0B634:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5452));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A0B650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0B650u) goto L_08A0B650;
    return;
L_08A0B650:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0B660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B660u) goto L_08A0B660;
    return;
L_08A0B660:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A0B670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A0B670u) goto L_08A0B670;
    return;
L_08A0B670:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0B680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B680u) goto L_08A0B680;
    return;
L_08A0B680:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0B68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 744u, 0x08A073FCu>(ctx, &aot_mem) && ctx.pc == 0x08A0B68Cu) goto L_08A0B68C;
    return;
L_08A0B68C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0B6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B6A0u) goto L_08A0B6A0;
    return;
L_08A0B6A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5372));
    ctx.set_gpr(31, 0x08A0B6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A0B6B8u) goto L_08A0B6B8;
    return;
L_08A0B6B8:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18680));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5408));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5396));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5384));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0B6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B6ECu) goto L_08A0B6EC;
    return;
L_08A0B6EC:
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
L_08A0B708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25912)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B74C;
      }
      goto L_08A0B720;
    }
L_08A0B720:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5284));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5316));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5300));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A0B744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A0B744u) goto L_08A0B744;
    return;
L_08A0B744:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25912), ctx.gpr[2]);
    goto L_08A0B74C;
L_08A0B74C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25912)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B764:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25908)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B7A4;
      }
      goto L_08A0B77C;
    }
L_08A0B77C:
    ctx.set_gpr(31, 0x08A0B784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0B784u) goto L_08A0B784;
    return;
L_08A0B784:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0B790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0B790u) goto L_08A0B790;
    return;
L_08A0B790:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0B79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B79Cu) goto L_08A0B79C;
    return;
L_08A0B79C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25908), ctx.gpr[2]);
    goto L_08A0B7A4;
L_08A0B7A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25908)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B7BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25908)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B7E8;
      }
      goto L_08A0B7D4;
    }
L_08A0B7D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B7F0;
      }
      goto L_08A0B7E8;
    }
L_08A0B7E8:
    ctx.set_gpr(31, 0x08A0B7F0u);
    // nop
    goto L_08A0B84C;
L_08A0B7F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25908)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B808:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0B81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B81Cu) goto L_08A0B81C;
    return;
L_08A0B81C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2080));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0B830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B830u) goto L_08A0B830;
    return;
L_08A0B830:
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
L_08A0B84C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18316));
    ctx.set_gpr(31, 0x08A0B864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0B864u) goto L_08A0B864;
    return;
L_08A0B864:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0B884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0B884u) goto L_08A0B884;
    return;
L_08A0B884:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25908));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-18200));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-5260));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-18424));
    ctx.set_gpr(31, 0x08A0B8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0B8D8u) goto L_08A0B8D8;
    return;
L_08A0B8D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B8E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0B8F8u);
    // nop
    goto L_08A0B7BC;
L_08A0B8F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B908:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25904)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B934;
      }
      goto L_08A0B920;
    }
L_08A0B920:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B93C;
      }
      goto L_08A0B934;
    }
L_08A0B934:
    ctx.set_gpr(31, 0x08A0B93Cu);
    // nop
    goto L_08A0B9C0;
L_08A0B93C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25904)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B954:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A0B96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B96Cu) goto L_08A0B96C;
    return;
L_08A0B96C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2172));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0B984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B984u) goto L_08A0B984;
    return;
L_08A0B984:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A0B9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08A0B9A8u) goto L_08A0B9A8;
    return;
L_08A0B9A8:
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
L_08A0B9C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17944));
    ctx.set_gpr(31, 0x08A0B9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0B9D8u) goto L_08A0B9D8;
    return;
L_08A0B9D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B9E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0B9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0B9F8u) goto L_08A0B9F8;
    return;
L_08A0B9F8:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17796));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25904));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-17828));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-5236));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-18092));
    ctx.set_gpr(31, 0x08A0BA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0BA4Cu) goto L_08A0BA4C;
    return;
L_08A0BA4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BA5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0BA6Cu);
    // nop
    goto L_08A0B908;
L_08A0BA6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BA7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25904)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0BAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BAA0u) goto L_08A0BAA0;
    return;
L_08A0BAA0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5216));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A0BABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0BABCu) goto L_08A0BABC;
    return;
L_08A0BABC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0BACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BACCu) goto L_08A0BACC;
    return;
L_08A0BACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A0BADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A0BADCu) goto L_08A0BADC;
    return;
L_08A0BADC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5176));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5164));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5152));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0BB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BB04u) goto L_08A0BB04;
    return;
L_08A0BB04:
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
L_08A0BB1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25888)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BB5C;
      }
      goto L_08A0BB34;
    }
L_08A0BB34:
    ctx.set_gpr(31, 0x08A0BB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0BB3Cu) goto L_08A0BB3C;
    return;
L_08A0BB3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0BB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0BB48u) goto L_08A0BB48;
    return;
L_08A0BB48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0BB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BB54u) goto L_08A0BB54;
    return;
L_08A0BB54:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25888), ctx.gpr[2]);
    goto L_08A0BB5C;
L_08A0BB5C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25888)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BB74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25888)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BBA0;
      }
      goto L_08A0BB8C;
    }
L_08A0BB8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BBA8;
      }
      goto L_08A0BBA0;
    }
L_08A0BBA0:
    ctx.set_gpr(31, 0x08A0BBA8u);
    // nop
    goto L_08A0BC04;
L_08A0BBA8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25888)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BBC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0BBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0BBD4u) goto L_08A0BBD4;
    return;
L_08A0BBD4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2276));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0BBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0BBE8u) goto L_08A0BBE8;
    return;
L_08A0BBE8:
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
L_08A0BC04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17364));
    ctx.set_gpr(31, 0x08A0BC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0BC1Cu) goto L_08A0BC1C;
    return;
L_08A0BC1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BC2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0BC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0BC3Cu) goto L_08A0BC3C;
    return;
L_08A0BC3C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5140));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25888));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-17248));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-5132));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-17472));
    ctx.set_gpr(31, 0x08A0BC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0BC90u) goto L_08A0BC90;
    return;
L_08A0BC90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BCA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0BCB0u);
    // nop
    goto L_08A0BB74;
L_08A0BCB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BCC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25884)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BD00;
      }
      goto L_08A0BCD8;
    }
L_08A0BCD8:
    ctx.set_gpr(31, 0x08A0BCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0BCE0u) goto L_08A0BCE0;
    return;
L_08A0BCE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0BCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0BCECu) goto L_08A0BCEC;
    return;
L_08A0BCEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0BCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BCF8u) goto L_08A0BCF8;
    return;
L_08A0BCF8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25884), ctx.gpr[2]);
    goto L_08A0BD00;
L_08A0BD00:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25884)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BD18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25884)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BD44;
      }
      goto L_08A0BD30;
    }
L_08A0BD30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BD4C;
      }
      goto L_08A0BD44;
    }
L_08A0BD44:
    ctx.set_gpr(31, 0x08A0BD4Cu);
    // nop
    goto L_08A0BDF4;
L_08A0BD4C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25884)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BD64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A0BD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BD7Cu) goto L_08A0BD7C;
    return;
L_08A0BD7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20712));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(31, 0x08A0BD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0BD98u) goto L_08A0BD98;
    return;
L_08A0BD98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20712));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BDC4;
      }
      goto L_08A0BDBC;
    }
L_08A0BDBC:
    ctx.set_gpr(31, 0x08A0BDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0BDC4u) goto L_08A0BDC4;
    return;
L_08A0BDC4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0BDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08A0BDDCu) goto L_08A0BDDC;
    return;
L_08A0BDDC:
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
L_08A0BDF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16868));
    ctx.set_gpr(31, 0x08A0BE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0BE0Cu) goto L_08A0BE0C;
    return;
L_08A0BE0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BE1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0BE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0BE2Cu) goto L_08A0BE2C;
    return;
L_08A0BE2C:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16712));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5108));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25884));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-16744));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-5100));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-17052));
    ctx.set_gpr(31, 0x08A0BE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0BE88u) goto L_08A0BE88;
    return;
L_08A0BE88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BE98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0BEA8u);
    // nop
    goto L_08A0BD18;
L_08A0BEA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BEB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25884)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0BEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BEE0u) goto L_08A0BEE0;
    return;
L_08A0BEE0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5088));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A0BEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0BEFCu) goto L_08A0BEFC;
    return;
L_08A0BEFC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0BF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BF0Cu) goto L_08A0BF0C;
    return;
L_08A0BF0C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0BF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 50u, 0x089F43E0u>(ctx, &aot_mem) && ctx.pc == 0x08A0BF18u) goto L_08A0BF18;
    return;
L_08A0BF18:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0BF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BF3Cu) goto L_08A0BF3C;
    return;
L_08A0BF3C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0BF48u);
    // nop
    goto L_08A0BB1C;
L_08A0BF48:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0BF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BF64u) goto L_08A0BF64;
    return;
L_08A0BF64:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0BF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 559u, 0x089F3B10u>(ctx, &aot_mem) && ctx.pc == 0x08A0BF70u) goto L_08A0BF70;
    return;
L_08A0BF70:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-5004));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4988));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4972));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0BFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0BFACu) goto L_08A0BFAC;
    return;
L_08A0BFAC:
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
L_08A0BFC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25864)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 2u, 0x08A0C008u>(ctx, &aot_mem); return;
      }
      goto L_08A0BFE0;
    }
L_08A0BFE0:
    ctx.set_gpr(31, 0x08A0BFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0BFE8u) goto L_08A0BFE8;
    return;
L_08A0BFE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0BFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0BFF4u) goto L_08A0BFF4;
    return;
L_08A0BFF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0C000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0129(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0129_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_129(Runtime &runtime) {
    runtime.register_generated_unit(129u, 0x08A08000u, 16384u, &recomp_unit_0129, &recomp_unit_0129_entry);
    runtime.register_function(0x08A08004u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08014u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08024u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0803Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08050u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08058u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08070u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0808Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0810Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08124u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08134u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08144u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08190u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0820Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08228u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08244u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0825Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08280u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08290u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0832Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0833Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0834Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0835Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08374u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08388u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08390u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A083A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A083C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A083D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A083FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08404u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0841Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08434u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08444u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08454u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A084B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A084C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A084D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A084E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08508u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08524u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08534u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08540u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0855Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08574u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A085A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A085C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A085DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08600u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08608u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08620u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08638u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08640u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0864Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08658u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08660u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08678u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08690u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0871Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08724u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08740u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08758u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08770u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08780u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08790u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0880Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0881Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08844u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08860u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08870u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0887Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08900u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08918u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08930u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08948u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08970u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08988u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A94u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BBCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D80u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E80u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08ECCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08ED4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F94u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FBCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09028u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09038u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09048u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09058u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09080u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0909Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09110u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09144u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09160u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09178u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0918Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09194u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A091ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A091C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A091E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09208u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09210u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0921Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09224u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09230u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09238u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09250u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09268u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09278u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09288u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A092E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A092F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09304u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09314u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09324u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0934Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09368u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09378u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09394u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09400u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09414u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09420u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09434u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09440u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09454u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09468u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0947Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09490u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0950Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09528u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09540u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09554u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0955Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09574u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0958Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09604u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0961Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09634u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09644u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09654u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A096B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A096C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A096D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A096E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09708u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09724u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09734u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09740u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09774u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09790u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A097A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A097BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A097C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A097DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A097F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0980Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09834u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09840u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09848u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09850u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09860u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09878u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09890u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A098A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A098B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09904u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09914u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09924u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09934u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09944u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09968u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09984u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A40u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A94u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AD4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B58u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09BB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09BE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09BF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CD4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CF0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D18u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D30u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DD0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E18u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E30u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F18u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FD0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FF0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A010u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A024u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A034u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A05Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A078u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A088u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A098u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A108u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A11Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A124u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A13Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A154u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A174u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A198u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A208u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A218u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A274u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A284u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A294u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A304u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A320u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A32Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A344u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A350u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A36Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A378u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A400u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A408u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A420u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A438u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A44Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A454u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A46Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A480u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A494u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A53Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A54Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A55Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A56Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A584u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A58Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A598u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A610u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A624u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A638u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A654u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A66Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A67Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A68Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A700u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A710u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A728u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A730u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A73Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A748u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A750u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A768u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A780u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A794u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A79Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A844u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A868u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A870u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A87Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A884u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A890u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A898u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A908u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A910u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A91Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A924u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A930u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A938u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A944u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A94Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A958u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A960u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A96Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A974u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A980u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A988u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A994u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A99Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA80u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB80u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABD0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD94u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ADB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ADBCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ADD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ADE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AED4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEF0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF18u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF40u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B004u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B00Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B024u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B03Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B050u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B058u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B070u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B088u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B100u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B118u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B130u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B140u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B150u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B1ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B1BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B1CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B1DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B204u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B220u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B230u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B23Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B250u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B25Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B288u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B314u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B328u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B330u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B348u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B35Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B370u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B38Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B418u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B428u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B438u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B448u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B460u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B474u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B488u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B504u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B528u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B530u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B548u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B560u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B570u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B580u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B60Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B634u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B650u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B660u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B670u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B680u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B68Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B6A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B6B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B6ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B708u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B720u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B744u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B74Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B764u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B77Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B784u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B790u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B79Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B808u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B81Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B830u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B84Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B864u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B874u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B884u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B908u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B920u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B934u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B93Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B954u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B96Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B984u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BAA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BABCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BACCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BADCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBD4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD18u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD30u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BDBCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BDC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BDDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BDF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BEA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BEB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BEE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BEFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF18u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFF4u, &recomp_unit_0129, "recomp_unit_0129");
}
} // namespace psprecomp
