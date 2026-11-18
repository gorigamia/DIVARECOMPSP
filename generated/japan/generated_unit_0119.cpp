#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0119[4090] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10,
    0, 0, 11, 12, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0,
    19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 27,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 36,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0,
    45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 63, 0, 0, 0, 64, 0, 0, 65, 0,
    66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0,
    93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0,
    103, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114,
    0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0,
    0, 0, 0, 0, 122, 123, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0,
    0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147,
    0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154,
    0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 163, 0, 164, 0, 165,
    0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 181, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 193, 0,
    0, 194, 0, 195, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 225, 0, 0, 226, 0, 227, 0, 0, 228,
    0, 0, 0, 0, 0, 229, 230, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 241, 0, 0,
    242, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 245, 246, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 251, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0,
    255, 0, 256, 257, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 261, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    271, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 296, 297, 0, 0, 298, 0, 299, 0, 0, 300, 301, 0, 302, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 317, 0,
    318, 319, 0, 0, 320, 321, 0, 0, 322, 0, 0, 323, 0, 324, 325, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329,
    330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0,
    0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 359, 0, 0, 360, 0, 361, 362, 363, 0, 0, 364, 0, 0, 365,
    0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0,
    375, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0,
    0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 386,
    0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0,
    0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0, 401, 402, 0, 0, 403, 0, 404, 0, 0, 405, 0,
    0, 0, 0, 0, 406, 407, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412,
    413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421,
    0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429, 0,
    0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0,
    0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 443, 444, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 0, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453,
    0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 460, 461, 0, 462, 0, 0,
    0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0,
    0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 474, 475, 0, 476, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479,
    480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0,
    487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0,
    497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0,
    500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504,
    0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0,
    0, 0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0,
    0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523,
    0, 0, 524, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 536,
    0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 547, 0, 0, 0, 0, 548, 0, 0, 549,
    550, 0, 0, 551, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 557, 0, 0,
    0, 558, 0, 0, 559, 0, 0, 560, 561, 0, 0, 562, 0, 563, 0, 0, 0, 564, 0, 0, 565, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572,
    0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 582, 583, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 588, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0,
    0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 599, 600, 0, 601, 602, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605,
    0, 606, 0, 0, 607, 608, 0, 609, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 614,
    0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 617, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0,
    624, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631,
    0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 638, 639, 0, 640, 641,
    642, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 645, 0, 0, 646, 647, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 654, 655,
};
void recomp_unit_0119_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089E0000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0119[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E0000;
    case 2u: goto L_089E0024;
    case 3u: goto L_089E002C;
    case 4u: goto L_089E006C;
    case 5u: goto L_089E0088;
    case 6u: goto L_089E0094;
    case 7u: goto L_089E00CC;
    case 8u: goto L_089E00D0;
    case 9u: goto L_089E00E4;
    case 10u: goto L_089E00FC;
    case 11u: goto L_089E0108;
    case 12u: goto L_089E010C;
    case 13u: goto L_089E0114;
    case 14u: goto L_089E0120;
    case 15u: goto L_089E0128;
    case 16u: goto L_089E015C;
    case 17u: goto L_089E0168;
    case 18u: goto L_089E0174;
    case 19u: goto L_089E0180;
    case 20u: goto L_089E0188;
    case 21u: goto L_089E01A8;
    case 22u: goto L_089E01C0;
    case 23u: goto L_089E01C8;
    case 24u: goto L_089E01D4;
    case 25u: goto L_089E01E0;
    case 26u: goto L_089E01F8;
    case 27u: goto L_089E01FC;
    case 28u: goto L_089E0204;
    case 29u: goto L_089E0224;
    case 30u: goto L_089E0238;
    case 31u: goto L_089E0244;
    case 32u: goto L_089E0250;
    case 33u: goto L_089E025C;
    case 34u: goto L_089E0268;
    case 35u: goto L_089E0274;
    case 36u: goto L_089E027C;
    case 37u: goto L_089E0290;
    case 38u: goto L_089E02A8;
    case 39u: goto L_089E02B4;
    case 40u: goto L_089E02C8;
    case 41u: goto L_089E02D4;
    case 42u: goto L_089E02E0;
    case 43u: goto L_089E02EC;
    case 44u: goto L_089E02F8;
    case 45u: goto L_089E0300;
    case 46u: goto L_089E031C;
    case 47u: goto L_089E0338;
    case 48u: goto L_089E0354;
    case 49u: goto L_089E0370;
    case 50u: goto L_089E0384;
    case 51u: goto L_089E0394;
    case 52u: goto L_089E03A8;
    case 53u: goto L_089E03AC;
    case 54u: goto L_089E03B8;
    case 55u: goto L_089E03C0;
    case 56u: goto L_089E040C;
    case 57u: goto L_089E0420;
    case 58u: goto L_089E042C;
    case 59u: goto L_089E0434;
    case 60u: goto L_089E0440;
    case 61u: goto L_089E044C;
    case 62u: goto L_089E0458;
    case 63u: goto L_089E045C;
    case 64u: goto L_089E046C;
    case 65u: goto L_089E0478;
    case 66u: goto L_089E0480;
    case 67u: goto L_089E048C;
    case 68u: goto L_089E0498;
    case 69u: goto L_089E04A4;
    case 70u: goto L_089E04B8;
    case 71u: goto L_089E04C4;
    case 72u: goto L_089E04D0;
    case 73u: goto L_089E04D8;
    case 74u: goto L_089E04FC;
    case 75u: goto L_089E0550;
    case 76u: goto L_089E058C;
    case 77u: goto L_089E0598;
    case 78u: goto L_089E05E4;
    case 79u: goto L_089E05F8;
    case 80u: goto L_089E0604;
    case 81u: goto L_089E0630;
    case 82u: goto L_089E063C;
    case 83u: goto L_089E06B0;
    case 84u: goto L_089E06BC;
    case 85u: goto L_089E06D4;
    case 86u: goto L_089E0728;
    case 87u: goto L_089E0730;
    case 88u: goto L_089E073C;
    case 89u: goto L_089E0758;
    case 90u: goto L_089E0760;
    case 91u: goto L_089E0770;
    case 92u: goto L_089E0778;
    case 93u: goto L_089E0780;
    case 94u: goto L_089E078C;
    case 95u: goto L_089E07A8;
    case 96u: goto L_089E07B0;
    case 97u: goto L_089E07D0;
    case 98u: goto L_089E0830;
    case 99u: goto L_089E0838;
    case 100u: goto L_089E0844;
    case 101u: goto L_089E0864;
    case 102u: goto L_089E0870;
    case 103u: goto L_089E0880;
    case 104u: goto L_089E0888;
    case 105u: goto L_089E0890;
    case 106u: goto L_089E089C;
    case 107u: goto L_089E08BC;
    case 108u: goto L_089E08C8;
    case 109u: goto L_089E08D0;
    case 110u: goto L_089E08E4;
    case 111u: goto L_089E08FC;
    case 112u: goto L_089E0928;
    case 113u: goto L_089E0970;
    case 114u: goto L_089E097C;
    case 115u: goto L_089E0988;
    case 116u: goto L_089E0994;
    case 117u: goto L_089E09C4;
    case 118u: goto L_089E09D0;
    case 119u: goto L_089E09E4;
    case 120u: goto L_089E09EC;
    case 121u: goto L_089E09F8;
    case 122u: goto L_089E0A10;
    case 123u: goto L_089E0A14;
    case 124u: goto L_089E0A28;
    case 125u: goto L_089E0A30;
    case 126u: goto L_089E0A38;
    case 127u: goto L_089E0A48;
    case 128u: goto L_089E0A6C;
    case 129u: goto L_089E0A90;
    case 130u: goto L_089E0A98;
    case 131u: goto L_089E0AA4;
    case 132u: goto L_089E0AB0;
    case 133u: goto L_089E0AC0;
    case 134u: goto L_089E0AD4;
    case 135u: goto L_089E0AE4;
    case 136u: goto L_089E0AF8;
    case 137u: goto L_089E0B08;
    case 138u: goto L_089E0B18;
    case 139u: goto L_089E0B3C;
    case 140u: goto L_089E0B80;
    case 141u: goto L_089E0B88;
    case 142u: goto L_089E0B94;
    case 143u: goto L_089E0BD0;
    case 144u: goto L_089E0BD4;
    case 145u: goto L_089E0BE0;
    case 146u: goto L_089E0BE8;
    case 147u: goto L_089E0BFC;
    case 148u: goto L_089E0C08;
    case 149u: goto L_089E0C20;
    case 150u: goto L_089E0C2C;
    case 151u: goto L_089E0C34;
    case 152u: goto L_089E0C48;
    case 153u: goto L_089E0C74;
    case 154u: goto L_089E0C7C;
    case 155u: goto L_089E0C94;
    case 156u: goto L_089E0CA0;
    case 157u: goto L_089E0CAC;
    case 158u: goto L_089E0CBC;
    case 159u: goto L_089E0CC8;
    case 160u: goto L_089E0CD4;
    case 161u: goto L_089E0CE0;
    case 162u: goto L_089E0CE8;
    case 163u: goto L_089E0CEC;
    case 164u: goto L_089E0CF4;
    case 165u: goto L_089E0CFC;
    case 166u: goto L_089E0D10;
    case 167u: goto L_089E0D1C;
    case 168u: goto L_089E0D28;
    case 169u: goto L_089E0D34;
    case 170u: goto L_089E0D3C;
    case 171u: goto L_089E0D54;
    case 172u: goto L_089E0D6C;
    case 173u: goto L_089E0D84;
    case 174u: goto L_089E0D94;
    case 175u: goto L_089E0D9C;
    case 176u: goto L_089E0DF8;
    case 177u: goto L_089E0E0C;
    case 178u: goto L_089E0E18;
    case 179u: goto L_089E0E3C;
    case 180u: goto L_089E0E68;
    case 181u: goto L_089E0E6C;
    case 182u: goto L_089E0E84;
    case 183u: goto L_089E0EAC;
    case 184u: goto L_089E0EC0;
    case 185u: goto L_089E0EC8;
    case 186u: goto L_089E0ED4;
    case 187u: goto L_089E0ED8;
    case 188u: goto L_089E0EF8;
    case 189u: goto L_089E0F40;
    case 190u: goto L_089E0F54;
    case 191u: goto L_089E0F6C;
    case 192u: goto L_089E0F74;
    case 193u: goto L_089E0F78;
    case 194u: goto L_089E0F84;
    case 195u: goto L_089E0F8C;
    case 196u: goto L_089E0F90;
    case 197u: goto L_089E0FA0;
    case 198u: goto L_089E0FB4;
    case 199u: goto L_089E0FC4;
    case 200u: goto L_089E0FDC;
    case 201u: goto L_089E1000;
    case 202u: goto L_089E1018;
    case 203u: goto L_089E1044;
    case 204u: goto L_089E1060;
    case 205u: goto L_089E107C;
    case 206u: goto L_089E1090;
    case 207u: goto L_089E10AC;
    case 208u: goto L_089E10C0;
    case 209u: goto L_089E10DC;
    case 210u: goto L_089E10F0;
    case 211u: goto L_089E1180;
    case 212u: goto L_089E118C;
    case 213u: goto L_089E11B8;
    case 214u: goto L_089E11BC;
    case 215u: goto L_089E11E8;
    case 216u: goto L_089E1218;
    case 217u: goto L_089E1248;
    case 218u: goto L_089E1330;
    case 219u: goto L_089E1358;
    case 220u: goto L_089E1368;
    case 221u: goto L_089E1378;
    case 222u: goto L_089E13C4;
    case 223u: goto L_089E13D0;
    case 224u: goto L_089E13D8;
    case 225u: goto L_089E13DC;
    case 226u: goto L_089E13E8;
    case 227u: goto L_089E13F0;
    case 228u: goto L_089E13FC;
    case 229u: goto L_089E1414;
    case 230u: goto L_089E1418;
    case 231u: goto L_089E1430;
    case 232u: goto L_089E1438;
    case 233u: goto L_089E144C;
    case 234u: goto L_089E1458;
    case 235u: goto L_089E1484;
    case 236u: goto L_089E1488;
    case 237u: goto L_089E14A8;
    case 238u: goto L_089E14DC;
    case 239u: goto L_089E14E8;
    case 240u: goto L_089E14F0;
    case 241u: goto L_089E14F4;
    case 242u: goto L_089E1500;
    case 243u: goto L_089E1508;
    case 244u: goto L_089E1514;
    case 245u: goto L_089E152C;
    case 246u: goto L_089E1530;
    case 247u: goto L_089E1548;
    case 248u: goto L_089E1550;
    case 249u: goto L_089E1564;
    case 250u: goto L_089E1570;
    case 251u: goto L_089E159C;
    case 252u: goto L_089E15A0;
    case 253u: goto L_089E15C0;
    case 254u: goto L_089E15F4;
    case 255u: goto L_089E1600;
    case 256u: goto L_089E1608;
    case 257u: goto L_089E160C;
    case 258u: goto L_089E1618;
    case 259u: goto L_089E1620;
    case 260u: goto L_089E162C;
    case 261u: goto L_089E1644;
    case 262u: goto L_089E1648;
    case 263u: goto L_089E1660;
    case 264u: goto L_089E1668;
    case 265u: goto L_089E167C;
    case 266u: goto L_089E1688;
    case 267u: goto L_089E16B4;
    case 268u: goto L_089E16B8;
    case 269u: goto L_089E16D8;
    case 270u: goto L_089E16F4;
    case 271u: goto L_089E1700;
    case 272u: goto L_089E1704;
    case 273u: goto L_089E1754;
    case 274u: goto L_089E175C;
    case 275u: goto L_089E176C;
    case 276u: goto L_089E1784;
    case 277u: goto L_089E1794;
    case 278u: goto L_089E17A0;
    case 279u: goto L_089E17AC;
    case 280u: goto L_089E17B8;
    case 281u: goto L_089E17F8;
    case 282u: goto L_089E1800;
    case 283u: goto L_089E1824;
    case 284u: goto L_089E187C;
    case 285u: goto L_089E18A8;
    case 286u: goto L_089E18D8;
    case 287u: goto L_089E18E8;
    case 288u: goto L_089E18F4;
    case 289u: goto L_089E1910;
    case 290u: goto L_089E191C;
    case 291u: goto L_089E1928;
    case 292u: goto L_089E1944;
    case 293u: goto L_089E1950;
    case 294u: goto L_089E1964;
    case 295u: goto L_089E1988;
    case 296u: goto L_089E1994;
    case 297u: goto L_089E1998;
    case 298u: goto L_089E19A4;
    case 299u: goto L_089E19AC;
    case 300u: goto L_089E19B8;
    case 301u: goto L_089E19BC;
    case 302u: goto L_089E19C4;
    case 303u: goto L_089E19C8;
    case 304u: goto L_089E1A14;
    case 305u: goto L_089E1A1C;
    case 306u: goto L_089E1A28;
    case 307u: goto L_089E1A3C;
    case 308u: goto L_089E1A44;
    case 309u: goto L_089E1A50;
    case 310u: goto L_089E1A6C;
    case 311u: goto L_089E1A98;
    case 312u: goto L_089E1AF0;
    case 313u: goto L_089E1B00;
    case 314u: goto L_089E1B58;
    case 315u: goto L_089E1B64;
    case 316u: goto L_089E1B6C;
    case 317u: goto L_089E1B78;
    case 318u: goto L_089E1B80;
    case 319u: goto L_089E1B84;
    case 320u: goto L_089E1B90;
    case 321u: goto L_089E1B94;
    case 322u: goto L_089E1BA0;
    case 323u: goto L_089E1BAC;
    case 324u: goto L_089E1BB4;
    case 325u: goto L_089E1BB8;
    case 326u: goto L_089E1BBC;
    case 327u: goto L_089E1BC8;
    case 328u: goto L_089E1BE0;
    case 329u: goto L_089E1BFC;
    case 330u: goto L_089E1C00;
    case 331u: goto L_089E1C14;
    case 332u: goto L_089E1C90;
    case 333u: goto L_089E1CA0;
    case 334u: goto L_089E1CD8;
    case 335u: goto L_089E1CF4;
    case 336u: goto L_089E1D04;
    case 337u: goto L_089E1D54;
    case 338u: goto L_089E1D64;
    case 339u: goto L_089E1E68;
    case 340u: goto L_089E1E74;
    case 341u: goto L_089E1F78;
    case 342u: goto L_089E1F84;
    case 343u: goto L_089E2088;
    case 344u: goto L_089E2180;
    case 345u: goto L_089E2188;
    case 346u: goto L_089E21C4;
    case 347u: goto L_089E21DC;
    case 348u: goto L_089E21F8;
    case 349u: goto L_089E2204;
    case 350u: goto L_089E2210;
    case 351u: goto L_089E221C;
    case 352u: goto L_089E2228;
    case 353u: goto L_089E2258;
    case 354u: goto L_089E22E4;
    case 355u: goto L_089E22EC;
    case 356u: goto L_089E22F0;
    case 357u: goto L_089E23BC;
    case 358u: goto L_089E23C4;
    case 359u: goto L_089E23C8;
    case 360u: goto L_089E23D4;
    case 361u: goto L_089E23DC;
    case 362u: goto L_089E23E0;
    case 363u: goto L_089E23E4;
    case 364u: goto L_089E23F0;
    case 365u: goto L_089E23FC;
    case 366u: goto L_089E2408;
    case 367u: goto L_089E242C;
    case 368u: goto L_089E2450;
    case 369u: goto L_089E2484;
    case 370u: goto L_089E2494;
    case 371u: goto L_089E24A0;
    case 372u: goto L_089E24E0;
    case 373u: goto L_089E24E8;
    case 374u: goto L_089E24F4;
    case 375u: goto L_089E2500;
    case 376u: goto L_089E250C;
    case 377u: goto L_089E2518;
    case 378u: goto L_089E2538;
    case 379u: goto L_089E256C;
    case 380u: goto L_089E2574;
    case 381u: goto L_089E2588;
    case 382u: goto L_089E2594;
    case 383u: goto L_089E25D0;
    case 384u: goto L_089E25D8;
    case 385u: goto L_089E25E4;
    case 386u: goto L_089E25FC;
    case 387u: goto L_089E2608;
    case 388u: goto L_089E2620;
    case 389u: goto L_089E2674;
    case 390u: goto L_089E26D8;
    case 391u: goto L_089E26EC;
    case 392u: goto L_089E2750;
    case 393u: goto L_089E275C;
    case 394u: goto L_089E276C;
    case 395u: goto L_089E2788;
    case 396u: goto L_089E2790;
    case 397u: goto L_089E2798;
    case 398u: goto L_089E27B0;
    case 399u: goto L_089E27C0;
    case 400u: goto L_089E27CC;
    case 401u: goto L_089E27D4;
    case 402u: goto L_089E27D8;
    case 403u: goto L_089E27E4;
    case 404u: goto L_089E27EC;
    case 405u: goto L_089E27F8;
    case 406u: goto L_089E2810;
    case 407u: goto L_089E2814;
    case 408u: goto L_089E2828;
    case 409u: goto L_089E2830;
    case 410u: goto L_089E2844;
    case 411u: goto L_089E2850;
    case 412u: goto L_089E287C;
    case 413u: goto L_089E2880;
    case 414u: goto L_089E28A0;
    case 415u: goto L_089E28C0;
    case 416u: goto L_089E28DC;
    case 417u: goto L_089E28EC;
    case 418u: goto L_089E2948;
    case 419u: goto L_089E2954;
    case 420u: goto L_089E296C;
    case 421u: goto L_089E297C;
    case 422u: goto L_089E2990;
    case 423u: goto L_089E2998;
    case 424u: goto L_089E29A0;
    case 425u: goto L_089E29AC;
    case 426u: goto L_089E29BC;
    case 427u: goto L_089E29D8;
    case 428u: goto L_089E29EC;
    case 429u: goto L_089E29F8;
    case 430u: goto L_089E2A04;
    case 431u: goto L_089E2A10;
    case 432u: goto L_089E2A1C;
    case 433u: goto L_089E2A28;
    case 434u: goto L_089E2A34;
    case 435u: goto L_089E2A3C;
    case 436u: goto L_089E2A4C;
    case 437u: goto L_089E2A68;
    case 438u: goto L_089E2A78;
    case 439u: goto L_089E2A88;
    case 440u: goto L_089E2A94;
    case 441u: goto L_089E2A9C;
    case 442u: goto L_089E2AB8;
    case 443u: goto L_089E2AC0;
    case 444u: goto L_089E2AC4;
    case 445u: goto L_089E2AD8;
    case 446u: goto L_089E2AE8;
    case 447u: goto L_089E2AF0;
    case 448u: goto L_089E2B0C;
    case 449u: goto L_089E2B34;
    case 450u: goto L_089E2B40;
    case 451u: goto L_089E2B48;
    case 452u: goto L_089E2B68;
    case 453u: goto L_089E2B7C;
    case 454u: goto L_089E2B88;
    case 455u: goto L_089E2B94;
    case 456u: goto L_089E2BB0;
    case 457u: goto L_089E2BB8;
    case 458u: goto L_089E2BCC;
    case 459u: goto L_089E2BD4;
    case 460u: goto L_089E2BE8;
    case 461u: goto L_089E2BEC;
    case 462u: goto L_089E2BF4;
    case 463u: goto L_089E2C0C;
    case 464u: goto L_089E2C1C;
    case 465u: goto L_089E2C38;
    case 466u: goto L_089E2C44;
    case 467u: goto L_089E2C50;
    case 468u: goto L_089E2C58;
    case 469u: goto L_089E2C64;
    case 470u: goto L_089E2C70;
    case 471u: goto L_089E2C8C;
    case 472u: goto L_089E2CA4;
    case 473u: goto L_089E2CBC;
    case 474u: goto L_089E2CC4;
    case 475u: goto L_089E2CC8;
    case 476u: goto L_089E2CD0;
    case 477u: goto L_089E2CD4;
    case 478u: goto L_089E2CF4;
    case 479u: goto L_089E2CFC;
    case 480u: goto L_089E2D00;
    case 481u: goto L_089E2D0C;
    case 482u: goto L_089E2D28;
    case 483u: goto L_089E2D30;
    case 484u: goto L_089E2D3C;
    case 485u: goto L_089E2D44;
    case 486u: goto L_089E2D74;
    case 487u: goto L_089E2D80;
    case 488u: goto L_089E2DB0;
    case 489u: goto L_089E2DBC;
    case 490u: goto L_089E2DD4;
    case 491u: goto L_089E2DDC;
    case 492u: goto L_089E2E08;
    case 493u: goto L_089E2E34;
    case 494u: goto L_089E2E50;
    case 495u: goto L_089E2E5C;
    case 496u: goto L_089E2E78;
    case 497u: goto L_089E2E80;
    case 498u: goto L_089E2EB8;
    case 499u: goto L_089E2EE4;
    case 500u: goto L_089E2F00;
    case 501u: goto L_089E2F08;
    case 502u: goto L_089E2F34;
    case 503u: goto L_089E2F60;
    case 504u: goto L_089E2F7C;
    case 505u: goto L_089E2F84;
    case 506u: goto L_089E2FB0;
    case 507u: goto L_089E2FBC;
    case 508u: goto L_089E2FF8;
    case 509u: goto L_089E3008;
    case 510u: goto L_089E3014;
    case 511u: goto L_089E3024;
    case 512u: goto L_089E3030;
    case 513u: goto L_089E3040;
    case 514u: goto L_089E304C;
    case 515u: goto L_089E305C;
    case 516u: goto L_089E3070;
    case 517u: goto L_089E3090;
    case 518u: goto L_089E3130;
    case 519u: goto L_089E3140;
    case 520u: goto L_089E3150;
    case 521u: goto L_089E315C;
    case 522u: goto L_089E316C;
    case 523u: goto L_089E317C;
    case 524u: goto L_089E3188;
    case 525u: goto L_089E3198;
    case 526u: goto L_089E31A0;
    case 527u: goto L_089E31B8;
    case 528u: goto L_089E31C4;
    case 529u: goto L_089E31D4;
    case 530u: goto L_089E3214;
    case 531u: goto L_089E3220;
    case 532u: goto L_089E322C;
    case 533u: goto L_089E3248;
    case 534u: goto L_089E3260;
    case 535u: goto L_089E3268;
    case 536u: goto L_089E327C;
    case 537u: goto L_089E328C;
    case 538u: goto L_089E32A8;
    case 539u: goto L_089E32BC;
    case 540u: goto L_089E3308;
    case 541u: goto L_089E336C;
    case 542u: goto L_089E340C;
    case 543u: goto L_089E34AC;
    case 544u: goto L_089E34BC;
    case 545u: goto L_089E364C;
    case 546u: goto L_089E3654;
    case 547u: goto L_089E365C;
    case 548u: goto L_089E3670;
    case 549u: goto L_089E367C;
    case 550u: goto L_089E3680;
    case 551u: goto L_089E368C;
    case 552u: goto L_089E3690;
    case 553u: goto L_089E3698;
    case 554u: goto L_089E36BC;
    case 555u: goto L_089E36D8;
    case 556u: goto L_089E36E4;
    case 557u: goto L_089E36F4;
    case 558u: goto L_089E3704;
    case 559u: goto L_089E3710;
    case 560u: goto L_089E371C;
    case 561u: goto L_089E3720;
    case 562u: goto L_089E372C;
    case 563u: goto L_089E3734;
    case 564u: goto L_089E3744;
    case 565u: goto L_089E3750;
    case 566u: goto L_089E3754;
    case 567u: goto L_089E375C;
    case 568u: goto L_089E39A0;
    case 569u: goto L_089E39B0;
    case 570u: goto L_089E39B4;
    case 571u: goto L_089E3A74;
    case 572u: goto L_089E3A7C;
    case 573u: goto L_089E3A84;
    case 574u: goto L_089E3A8C;
    case 575u: goto L_089E3A94;
    case 576u: goto L_089E3A9C;
    case 577u: goto L_089E3AA4;
    case 578u: goto L_089E3ABC;
    case 579u: goto L_089E3AD4;
    case 580u: goto L_089E3B08;
    case 581u: goto L_089E3B1C;
    case 582u: goto L_089E3B28;
    case 583u: goto L_089E3B2C;
    case 584u: goto L_089E3B34;
    case 585u: goto L_089E3B48;
    case 586u: goto L_089E3B58;
    case 587u: goto L_089E3B60;
    case 588u: goto L_089E3B74;
    case 589u: goto L_089E3BB4;
    case 590u: goto L_089E3BBC;
    case 591u: goto L_089E3BC8;
    case 592u: goto L_089E3BD4;
    case 593u: goto L_089E3BEC;
    case 594u: goto L_089E3BF8;
    case 595u: goto L_089E3C04;
    case 596u: goto L_089E3C1C;
    case 597u: goto L_089E3C28;
    case 598u: goto L_089E3C34;
    case 599u: goto L_089E3C40;
    case 600u: goto L_089E3C44;
    case 601u: goto L_089E3C4C;
    case 602u: goto L_089E3C50;
    case 603u: goto L_089E3C54;
    case 604u: goto L_089E3C70;
    case 605u: goto L_089E3C7C;
    case 606u: goto L_089E3C84;
    case 607u: goto L_089E3C90;
    case 608u: goto L_089E3C94;
    case 609u: goto L_089E3C9C;
    case 610u: goto L_089E3CA8;
    case 611u: goto L_089E3CB0;
    case 612u: goto L_089E3CD4;
    case 613u: goto L_089E3CF0;
    case 614u: goto L_089E3CFC;
    case 615u: goto L_089E3D20;
    case 616u: goto L_089E3D28;
    case 617u: goto L_089E3D3C;
    case 618u: goto L_089E3D40;
    case 619u: goto L_089E3D58;
    case 620u: goto L_089E3DB4;
    case 621u: goto L_089E3DD0;
    case 622u: goto L_089E3DE4;
    case 623u: goto L_089E3DF0;
    case 624u: goto L_089E3E00;
    case 625u: goto L_089E3E0C;
    case 626u: goto L_089E3E24;
    case 627u: goto L_089E3E3C;
    case 628u: goto L_089E3E48;
    case 629u: goto L_089E3E50;
    case 630u: goto L_089E3E64;
    case 631u: goto L_089E3E7C;
    case 632u: goto L_089E3E98;
    case 633u: goto L_089E3EA4;
    case 634u: goto L_089E3EB0;
    case 635u: goto L_089E3EC8;
    case 636u: goto L_089E3ED4;
    case 637u: goto L_089E3EE0;
    case 638u: goto L_089E3EEC;
    case 639u: goto L_089E3EF0;
    case 640u: goto L_089E3EF8;
    case 641u: goto L_089E3EFC;
    case 642u: goto L_089E3F00;
    case 643u: goto L_089E3F18;
    case 644u: goto L_089E3F24;
    case 645u: goto L_089E3F2C;
    case 646u: goto L_089E3F38;
    case 647u: goto L_089E3F3C;
    case 648u: goto L_089E3F44;
    case 649u: goto L_089E3F88;
    case 650u: goto L_089E3F90;
    case 651u: goto L_089E3FB0;
    case 652u: goto L_089E3FC8;
    case 653u: goto L_089E3FD0;
    case 654u: goto L_089E3FE0;
    case 655u: goto L_089E3FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E0000:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27060)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27064), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27060), ctx.gpr[4]);
    goto L_089E0024;
L_089E0024:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089E006C;
      }
      goto L_089E002C;
    }
L_089E002C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27056)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27052)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27056), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27052), ctx.gpr[4]);
    goto L_089E006C;
L_089E006C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E00CC;
      }
      goto L_089E0088;
    }
L_089E0088:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089E0094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089E0094u) goto L_089E0094;
    return;
L_089E0094:
    ctx.set_gpr(3, (ctx.gpr[18] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089E00CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089E00CCu) goto L_089E00CC;
    return;
L_089E00CC:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_089E00D0;
L_089E00D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 505u, 0x089DF894u>(ctx, &aot_mem); return;
      }
      goto L_089E00E4;
    }
L_089E00E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0108;
      }
      goto L_089E00FC;
    }
L_089E00FC:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E010C;
      }
      goto L_089E0108;
    }
L_089E0108:
    ctx.set_gpr(4, 0u + 0u);
    goto L_089E010C;
L_089E010C:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_089E0114;
L_089E0114:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0128;
      }
      goto L_089E0120;
    }
L_089E0120:
    ctx.set_gpr(31, 0x089E0128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089E0128u) goto L_089E0128;
    return;
L_089E0128:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E015C:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E01E0;
      }
      goto L_089E0168;
    }
L_089E0168:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E01A8;
      }
      goto L_089E0174;
    }
L_089E0174:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E0188;
      }
      goto L_089E0180;
    }
L_089E0180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E01C0;
      }
      goto L_089E0188;
    }
L_089E0188:
    ctx.set_gpr(2, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E01E0;
      }
      goto L_089E01A8;
    }
L_089E01A8:
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    ctx.set_gpr(2, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E01E0;
      }
      goto L_089E01C0;
    }
L_089E01C0:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E01D4;
      }
      goto L_089E01C8;
    }
L_089E01C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E01FC;
      }
      goto L_089E01D4;
    }
L_089E01D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089E01E0;
L_089E01E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E0168;
      }
      goto L_089E01F8;
    }
L_089E01F8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089E01FC;
L_089E01FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0204:
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E03AC;
      }
      goto L_089E0224;
    }
L_089E0224:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 24u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E0290;
      }
      goto L_089E0238;
    }
L_089E0238:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E0290;
      }
      goto L_089E0244;
    }
L_089E0244:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E0290;
      }
      goto L_089E0250;
    }
L_089E0250:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E0290;
      }
      goto L_089E025C;
    }
L_089E025C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E0290;
      }
      goto L_089E0268;
    }
L_089E0268:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E027C;
      }
      goto L_089E0274;
    }
L_089E0274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E03A8;
      }
      goto L_089E027C;
    }
L_089E027C:
    ctx.set_gpr(3, 255u << 16u);
    ctx.set_gpr(3, ctx.gpr[11] & ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[3] << 8u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E03A8;
      }
      goto L_089E0290;
    }
L_089E0290:
    ctx.set_gpr(3, ctx.gpr[11] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(11, ctx.gpr[10] | ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E03A8;
      }
      goto L_089E02A8;
    }
L_089E02A8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E03A8;
      }
      goto L_089E02B4;
    }
L_089E02B4:
    ctx.set_gpr(3, ctx.gpr[11] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089E0370;
      }
      goto L_089E02C8;
    }
L_089E02C8:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089E0354;
      }
      goto L_089E02D4;
    }
L_089E02D4:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089E0338;
      }
      goto L_089E02E0;
    }
L_089E02E0:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089E031C;
      }
      goto L_089E02EC;
    }
L_089E02EC:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089E0300;
      }
      goto L_089E02F8;
    }
L_089E02F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0384;
      }
      goto L_089E0300;
    }
L_089E0300:
    ctx.set_gpr(11, ctx.gpr[3] << 8u);
    ctx.set_gpr(11, ctx.gpr[11] >> 8u);
    ctx.set_gpr(6, 2560u << 16u);
    ctx.set_gpr(6, ctx.gpr[11] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0384;
      }
      goto L_089E031C;
    }
L_089E031C:
    ctx.set_gpr(11, ctx.gpr[3] << 8u);
    ctx.set_gpr(11, ctx.gpr[11] >> 8u);
    ctx.set_gpr(6, 2048u << 16u);
    ctx.set_gpr(6, ctx.gpr[11] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0384;
      }
      goto L_089E0338;
    }
L_089E0338:
    ctx.set_gpr(11, ctx.gpr[3] << 8u);
    ctx.set_gpr(11, ctx.gpr[11] >> 8u);
    ctx.set_gpr(6, 2304u << 16u);
    ctx.set_gpr(6, ctx.gpr[11] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0384;
      }
      goto L_089E0354;
    }
L_089E0354:
    ctx.set_gpr(11, ctx.gpr[3] << 8u);
    ctx.set_gpr(11, ctx.gpr[11] >> 8u);
    ctx.set_gpr(6, 256u << 16u);
    ctx.set_gpr(6, ctx.gpr[11] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0384;
      }
      goto L_089E0370;
    }
L_089E0370:
    ctx.set_gpr(11, ctx.gpr[3] << 8u);
    ctx.set_gpr(11, ctx.gpr[11] >> 8u);
    ctx.set_gpr(6, 512u << 16u);
    ctx.set_gpr(6, ctx.gpr[11] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089E0384;
L_089E0384:
    ctx.set_gpr(6, 65280u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089E03A8;
      }
      goto L_089E0394;
    }
L_089E0394:
    ctx.set_gpr(3, (ctx.gpr[3] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(6, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_089E03A8;
L_089E03A8:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    goto L_089E03AC;
L_089E03AC:
    ctx.set_gpr(3, ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0224;
      }
      goto L_089E03B8;
    }
L_089E03B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E03C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E04D8;
      }
      goto L_089E040C;
    }
L_089E040C:
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E042C;
      }
      goto L_089E0420;
    }
L_089E0420:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(59));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E045C;
      }
      goto L_089E042C;
    }
L_089E042C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0440;
      }
      goto L_089E0434;
    }
L_089E0434:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E045C;
      }
      goto L_089E0440;
    }
L_089E0440:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E0458;
      }
      goto L_089E044C;
    }
L_089E044C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E045C;
      }
      goto L_089E0458;
    }
L_089E0458:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(65));
    goto L_089E045C;
L_089E045C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089E046Cu);
    // nop
    goto L_089E015C;
L_089E046C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E04C4;
      }
      goto L_089E0478;
    }
L_089E0478:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089E048C;
      }
      goto L_089E0480;
    }
L_089E0480:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E04D8;
      }
      goto L_089E048C;
    }
L_089E048C:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E04A4;
      }
      goto L_089E0498;
    }
L_089E0498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_089E04A4;
L_089E04A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089E0498;
      }
      goto L_089E04B8;
    }
L_089E04B8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E04D0;
      }
      goto L_089E04C4;
    }
L_089E04C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_089E04D0;
L_089E04D0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E045C;
      }
      goto L_089E04D8;
    }
L_089E04D8:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_089E04FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(17, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E06BC;
      }
      goto L_089E0550;
    }
L_089E0550:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 2206u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9464));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089E058Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 805u, 0x0890FBA8u>(ctx, &aot_mem) && ctx.pc == 0x089E058Cu) goto L_089E058C;
    return;
L_089E058C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E06BC;
      }
      goto L_089E0598;
    }
L_089E0598:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E06BC;
      }
      goto L_089E05E4;
    }
L_089E05E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E05F8u);
    // nop
    goto L_089E015C;
L_089E05F8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E06BC;
      }
      goto L_089E0604;
    }
L_089E0604:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E06BC;
      }
      goto L_089E0630;
    }
L_089E0630:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E06B0;
      }
      goto L_089E063C;
    }
L_089E063C:
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089E06B0;
L_089E06B0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E063C;
      }
      goto L_089E06BC;
    }
L_089E06BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E06D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(478)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0778;
      }
      goto L_089E0728;
    }
L_089E0728:
    ctx.set_gpr(31, 0x089E0730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0730u) goto L_089E0730;
    return;
L_089E0730:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089E073Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089E073Cu) goto L_089E073C;
    return;
L_089E073C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E0758u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E0758u) goto L_089E0758;
    return;
L_089E0758:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0770;
      }
      goto L_089E0760;
    }
L_089E0760:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0778;
      }
      goto L_089E0770;
    }
L_089E0770:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    goto L_089E0778;
L_089E0778:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E07B0;
      }
      goto L_089E0780;
    }
L_089E0780:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089E078Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 133u, 0x089BCCB4u>(ctx, &aot_mem) && ctx.pc == 0x089E078Cu) goto L_089E078C;
    return;
L_089E078C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E07A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E07A8u) goto L_089E07A8;
    return;
L_089E07A8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    goto L_089E07B0;
L_089E07B0:
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
L_089E07D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(478)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0888;
      }
      goto L_089E0830;
    }
L_089E0830:
    ctx.set_gpr(31, 0x089E0838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0838u) goto L_089E0838;
    return;
L_089E0838:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089E0844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089E0844u) goto L_089E0844;
    return;
L_089E0844:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E0864u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E0864u) goto L_089E0864;
    return;
L_089E0864:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0880;
      }
      goto L_089E0870;
    }
L_089E0870:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0888;
      }
      goto L_089E0880;
    }
L_089E0880:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_089E0888;
L_089E0888:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E08C8;
      }
      goto L_089E0890;
    }
L_089E0890:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089E089Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 133u, 0x089BCCB4u>(ctx, &aot_mem) && ctx.pc == 0x089E089Cu) goto L_089E089C;
    return;
L_089E089C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E08BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E08BCu) goto L_089E08BC;
    return;
L_089E08BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_089E08C8;
L_089E08C8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089E08FC;
      }
      goto L_089E08D0;
    }
L_089E08D0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089E08E4u);
    // nop
    goto L_089E0204;
L_089E08E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089E08FCu);
    // nop
    goto L_089E0928;
L_089E08FC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_089E0928:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    ctx.set_gpr(14, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E097C;
      }
      goto L_089E0970;
    }
L_089E0970:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089E097C;
L_089E097C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0A28;
      }
      goto L_089E0988;
    }
L_089E0988:
    ctx.set_gpr(15, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0A14;
      }
      goto L_089E0994;
    }
L_089E0994:
    ctx.set_gpr(7, ctx.gpr[15] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(13, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0A10;
      }
      goto L_089E09C4;
    }
L_089E09C4:
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[14] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0A10;
      }
      goto L_089E09D0;
    }
L_089E09D0:
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0A10;
      }
      goto L_089E09E4;
    }
L_089E09E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[15]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E0A10;
      }
      goto L_089E09EC;
    }
L_089E09EC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0A10;
      }
      goto L_089E09F8;
    }
L_089E09F8:
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[11]));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[10]));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[9]));
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    goto L_089E0A10;
L_089E0A10:
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    goto L_089E0A14;
L_089E0A14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0994;
      }
      goto L_089E0A28;
    }
L_089E0A28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0A38;
      }
      goto L_089E0A30;
    }
L_089E0A30:
    ctx.set_gpr(31, 0x089E0A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089E0A38u) goto L_089E0A38;
    return;
L_089E0A38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0A48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12544));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(39));
    goto L_089E0A6C;
L_089E0A6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_089E0A6C;
      }
      goto L_089E0A90;
    }
L_089E0A90:
    ctx.set_gpr(31, 0x089E0A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 223u, 0x0893CE4Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0A98u) goto L_089E0A98;
    return;
L_089E0A98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089E0AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089E0AA4u) goto L_089E0AA4;
    return;
L_089E0AA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089E0AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 321u, 0x088E975Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0AB0u) goto L_089E0AB0;
    return;
L_089E0AB0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089E0AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0AC0u) goto L_089E0AC0;
    return;
L_089E0AC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(348)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 27 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0AE4;
      }
      goto L_089E0AD4;
    }
L_089E0AD4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089E0AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0AE4u) goto L_089E0AE4;
    return;
L_089E0AE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(348)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0B08;
      }
      goto L_089E0AF8;
    }
L_089E0AF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(26));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0B18;
      }
      goto L_089E0B08;
    }
L_089E0B08:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089E0B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089E0B18u) goto L_089E0B18;
    return;
L_089E0B18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0BD4;
      }
      goto L_089E0B3C;
    }
L_089E0B3C:
    ctx.set_gpr(2, ctx.gpr[8] << 1u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(65)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(66)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(348)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0BD0;
      }
      goto L_089E0B80;
    }
L_089E0B80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E0BD0;
      }
      goto L_089E0B88;
    }
L_089E0B88:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0BD0;
      }
      goto L_089E0B94;
    }
L_089E0B94:
    ctx.set_gpr(3, ctx.gpr[7] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089E0BD0;
L_089E0BD0:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089E0BD4;
L_089E0BD4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0B3C;
      }
      goto L_089E0BE0;
    }
L_089E0BE0:
    ctx.set_gpr(31, 0x089E0BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089E0BE8u) goto L_089E0BE8;
    return;
L_089E0BE8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(348)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0C08;
      }
      goto L_089E0BFC;
    }
L_089E0BFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089E0C08;
L_089E0C08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x089E0C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 158u, 0x08958B08u>(ctx, &aot_mem) && ctx.pc == 0x089E0C20u) goto L_089E0C20;
    return;
L_089E0C20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0C34;
      }
      goto L_089E0C2C;
    }
L_089E0C2C:
    ctx.set_gpr(31, 0x089E0C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089E0C34u) goto L_089E0C34;
    return;
L_089E0C34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E0C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 189u, 0x08958D00u>(ctx, &aot_mem) && ctx.pc == 0x089E0C48u) goto L_089E0C48;
    return;
L_089E0C48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26980), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26976), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0C7C;
      }
      goto L_089E0C74;
    }
L_089E0C74:
    ctx.set_gpr(31, 0x089E0C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089E0C7Cu) goto L_089E0C7C;
    return;
L_089E0C7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0C94:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0CA0:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0CAC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E0CE8;
      }
      goto L_089E0CBC;
    }
L_089E0CBC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E0CE8;
      }
      goto L_089E0CC8;
    }
L_089E0CC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E0CE8;
      }
      goto L_089E0CD4;
    }
L_089E0CD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E0CE8;
      }
      goto L_089E0CE0;
    }
L_089E0CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0CEC;
      }
      goto L_089E0CE8;
    }
L_089E0CE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089E0CEC;
L_089E0CEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0CF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0CFC:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E0D84;
      }
      goto L_089E0D10;
    }
L_089E0D10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E0D6C;
      }
      goto L_089E0D1C;
    }
L_089E0D1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E0D54;
      }
      goto L_089E0D28;
    }
L_089E0D28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E0D3C;
      }
      goto L_089E0D34;
    }
L_089E0D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0D94;
      }
      goto L_089E0D3C;
    }
L_089E0D3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0D94;
      }
      goto L_089E0D54;
    }
L_089E0D54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0D94;
      }
      goto L_089E0D6C;
    }
L_089E0D6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0D94;
      }
      goto L_089E0D84;
    }
L_089E0D84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    goto L_089E0D94;
L_089E0D94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0D9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26968)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26964)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26968), ctx.gpr[6]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26964), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(560)));
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0E6C;
      }
      goto L_089E0DF8;
    }
L_089E0DF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0E18;
      }
      goto L_089E0E0C;
    }
L_089E0E0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E0E6C;
      }
      goto L_089E0E18;
    }
L_089E0E18:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(590)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(540)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089E0E3Cu);
    // nop
    ctx.pc = 0x08B0DF24u;
    return;
L_089E0E3C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(590)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(590), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(556)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(560)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(560), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0E6C;
      }
      goto L_089E0E68;
    }
L_089E0E68:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(560), 0u);
    goto L_089E0E6C;
L_089E0E6C:
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
L_089E0E84:
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28616));
    ctx.set_gpr(8, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ~(ctx.gpr[6] | 0u));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0ED8;
      }
      goto L_089E0EAC;
    }
L_089E0EAC:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0EC8;
      }
      goto L_089E0EC0;
    }
L_089E0EC0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089E0EC8;
L_089E0EC8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0EC0;
      }
      goto L_089E0ED4;
    }
L_089E0ED4:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    goto L_089E0ED8;
L_089E0ED8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E0EF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089E0F40u);
    // nop
    goto L_089E0E84;
L_089E0F40:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0FB4;
      }
      goto L_089E0F54;
    }
L_089E0F54:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(5, ctx.gpr[16] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0F74;
      }
      goto L_089E0F6C;
    }
L_089E0F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0F78;
      }
      goto L_089E0F74;
    }
L_089E0F74:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089E0F78;
L_089E0F78:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0F8C;
      }
      goto L_089E0F84;
    }
L_089E0F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E0F90;
      }
      goto L_089E0F8C;
    }
L_089E0F8C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089E0F90;
L_089E0F90:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089E0FA0u);
    // nop
    goto L_089E0E84;
L_089E0FA0:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089E0FB4;
L_089E0FB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E0F54;
      }
      goto L_089E0FC4;
    }
L_089E0FC4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1018;
      }
      goto L_089E0FDC;
    }
L_089E0FDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E1000u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1000u) goto L_089E1000;
    return;
L_089E1000:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089E1018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089E1018u) goto L_089E1018;
    return;
L_089E1018:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_089E1044:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089E1060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089E1060u) goto L_089E1060;
    return;
L_089E1060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E107Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E107Cu) goto L_089E107C;
    return;
L_089E107C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26944), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089E1090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089E1090u) goto L_089E1090;
    return;
L_089E1090:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E10ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E10ACu) goto L_089E10AC;
    return;
L_089E10AC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26940), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089E10C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089E10C0u) goto L_089E10C0;
    return;
L_089E10C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E10DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E10DCu) goto L_089E10DC;
    return;
L_089E10DC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26936), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1180;
      }
      goto L_089E10F0;
    }
L_089E10F0:
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 8u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26944)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, 255u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 65535u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26940)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] & 15u);
    ctx.set_gpr(4, ctx.gpr[4] << 4u);
    ctx.set_gpr(6, ctx.gpr[4] | 15u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | 15u);
    ctx.set_gpr(5, ctx.gpr[4] << 24u);
    ctx.set_gpr(4, ctx.gpr[6] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[6] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26936)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089E1180;
L_089E1180:
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E10F0;
      }
      goto L_089E118C;
    }
L_089E118C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26940)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26936)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E11BC;
      }
      goto L_089E11B8;
    }
L_089E11B8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(7));
    goto L_089E11BC;
L_089E11BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E11E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E11E8u) goto L_089E11E8;
    return;
L_089E11E8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E1218u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1218u) goto L_089E1218;
    return;
L_089E1218:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E1248u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1248u) goto L_089E1248;
    return;
L_089E1248:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(540)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
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
L_089E1330:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26944)));
    ctx.set_gpr(31, 0x089E1358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089E1358u) goto L_089E1358;
    return;
L_089E1358:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26940)));
    ctx.set_gpr(31, 0x089E1368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089E1368u) goto L_089E1368;
    return;
L_089E1368:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26936)));
    ctx.set_gpr(31, 0x089E1378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089E1378u) goto L_089E1378;
    return;
L_089E1378:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26944), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26940), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26936), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E13C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E13C4u) goto L_089E13C4;
    return;
L_089E13C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E13DC;
      }
      goto L_089E13D0;
    }
L_089E13D0:
    ctx.set_gpr(31, 0x089E13D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089E13D8u) goto L_089E13D8;
    return;
L_089E13D8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    goto L_089E13DC;
L_089E13DC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1418;
      }
      goto L_089E13E8;
    }
L_089E13E8:
    ctx.set_gpr(31, 0x089E13F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E13F0u) goto L_089E13F0;
    return;
L_089E13F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089E13FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089E13FCu) goto L_089E13FC;
    return;
L_089E13FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E1414u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1414u) goto L_089E1414;
    return;
L_089E1414:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    goto L_089E1418;
L_089E1418:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E14A8;
      }
      goto L_089E1430;
    }
L_089E1430:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E14A8;
      }
      goto L_089E1438;
    }
L_089E1438:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1488;
      }
      goto L_089E144C;
    }
L_089E144C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089E1458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089E1458u) goto L_089E1458;
    return;
L_089E1458:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E1484u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1484u) goto L_089E1484;
    return;
L_089E1484:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_089E1488;
L_089E1488:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089E14A8;
L_089E14A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(848)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E14DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E14DCu) goto L_089E14DC;
    return;
L_089E14DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E14F4;
      }
      goto L_089E14E8;
    }
L_089E14E8:
    ctx.set_gpr(31, 0x089E14F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089E14F0u) goto L_089E14F0;
    return;
L_089E14F0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    goto L_089E14F4;
L_089E14F4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1530;
      }
      goto L_089E1500;
    }
L_089E1500:
    ctx.set_gpr(31, 0x089E1508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1508u) goto L_089E1508;
    return;
L_089E1508:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089E1514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089E1514u) goto L_089E1514;
    return;
L_089E1514:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E152Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E152Cu) goto L_089E152C;
    return;
L_089E152C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    goto L_089E1530;
L_089E1530:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(848)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E15C0;
      }
      goto L_089E1548;
    }
L_089E1548:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E15C0;
      }
      goto L_089E1550;
    }
L_089E1550:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E15A0;
      }
      goto L_089E1564;
    }
L_089E1564:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089E1570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089E1570u) goto L_089E1570;
    return;
L_089E1570:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E159Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E159Cu) goto L_089E159C;
    return;
L_089E159C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_089E15A0;
L_089E15A0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089E15C0;
L_089E15C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E15F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E15F4u) goto L_089E15F4;
    return;
L_089E15F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E160C;
      }
      goto L_089E1600;
    }
L_089E1600:
    ctx.set_gpr(31, 0x089E1608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089E1608u) goto L_089E1608;
    return;
L_089E1608:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    goto L_089E160C;
L_089E160C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1648;
      }
      goto L_089E1618;
    }
L_089E1618:
    ctx.set_gpr(31, 0x089E1620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E1620u) goto L_089E1620;
    return;
L_089E1620:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089E162Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089E162Cu) goto L_089E162C;
    return;
L_089E162C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E1644u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1644u) goto L_089E1644;
    return;
L_089E1644:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    goto L_089E1648;
L_089E1648:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E16D8;
      }
      goto L_089E1660;
    }
L_089E1660:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E16D8;
      }
      goto L_089E1668;
    }
L_089E1668:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E16B8;
      }
      goto L_089E167C;
    }
L_089E167C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089E1688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089E1688u) goto L_089E1688;
    return;
L_089E1688:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E16B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E16B4u) goto L_089E16B4;
    return;
L_089E16B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_089E16B8;
L_089E16B8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_089E16D8;
L_089E16D8:
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
L_089E16F4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32159)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1704;
      }
      goto L_089E1700;
    }
L_089E1700:
    ctx.set_gpr(6, 0u + 0u);
    goto L_089E1704;
L_089E1704:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28352)));
    ctx.set_gpr(5, ctx.gpr[6] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28352), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1784;
      }
      goto L_089E1754;
    }
L_089E1754:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1784;
      }
      goto L_089E175C;
    }
L_089E175C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E1784;
      }
      goto L_089E176C;
    }
L_089E176C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E17F8;
      }
      goto L_089E1784;
    }
L_089E1784:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E17B8;
      }
      goto L_089E1794;
    }
L_089E1794:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E17B8;
      }
      goto L_089E17A0;
    }
L_089E17A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E17B8;
      }
      goto L_089E17AC;
    }
L_089E17AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E17F8;
      }
      goto L_089E17B8;
    }
L_089E17B8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(5, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(5, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089E17F8;
L_089E17F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1800:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28352)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1824:
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(30, ctx.gpr[8] + 0u);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    ctx.set_gpr(21, ctx.gpr[10] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089E1964;
      }
      goto L_089E187C;
    }
L_089E187C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089E18A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 433u, 0x08929E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089E18A8u) goto L_089E18A8;
    return;
L_089E18A8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(432));
    ctx.set_gpr(31, 0x089E18D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089E18D8u) goto L_089E18D8;
    return;
L_089E18D8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E191C;
      }
      goto L_089E18E8;
    }
L_089E18E8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089E18F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089E18F4u) goto L_089E18F4;
    return;
L_089E18F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E1910u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1910u) goto L_089E1910;
    return;
L_089E1910:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089E191C;
L_089E191C:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1944;
      }
      goto L_089E1928;
    }
L_089E1928:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089E1944;
L_089E1944:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1928;
      }
      goto L_089E1950;
    }
L_089E1950:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089E1964;
L_089E1964:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(22, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1994;
      }
      goto L_089E1988;
    }
L_089E1988:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1998;
      }
      goto L_089E1994;
    }
L_089E1994:
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    goto L_089E1998;
L_089E1998:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E19C4;
      }
      goto L_089E19A4;
    }
L_089E19A4:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E19B8;
      }
      goto L_089E19AC;
    }
L_089E19AC:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E19BC;
      }
      goto L_089E19B8;
    }
L_089E19B8:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    goto L_089E19BC;
L_089E19BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E19C8;
      }
      goto L_089E19C4;
    }
L_089E19C4:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(7));
    goto L_089E19C8;
L_089E19C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[22] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1A1C;
      }
      goto L_089E1A14;
    }
L_089E1A14:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089E1A1C;
L_089E1A1C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1A14;
      }
      goto L_089E1A28;
    }
L_089E1A28:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1A44;
      }
      goto L_089E1A3C;
    }
L_089E1A3C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089E1A44;
L_089E1A44:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1A3C;
      }
      goto L_089E1A50;
    }
L_089E1A50:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E1A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E1A6Cu) goto L_089E1A6C;
    return;
L_089E1A6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7168));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1AF0;
      }
      goto L_089E1A98;
    }
L_089E1A98:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12232));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] >> 3u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26960)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26956)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26960), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26956), ctx.gpr[3]);
    goto L_089E1AF0;
L_089E1AF0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1B58;
      }
      goto L_089E1B00;
    }
L_089E1B00:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12212));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] >> 1u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26960)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26956)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26960), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26956), ctx.gpr[3]);
    goto L_089E1B58;
L_089E1B58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E1BBC;
      }
      goto L_089E1B64;
    }
L_089E1B64:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1BBC;
      }
      goto L_089E1B6C;
    }
L_089E1B6C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1B80;
      }
      goto L_089E1B78;
    }
L_089E1B78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1B84;
      }
      goto L_089E1B80;
    }
L_089E1B80:
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_089E1B84;
L_089E1B84:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1B94;
      }
      goto L_089E1B90;
    }
L_089E1B90:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089E1B94;
L_089E1B94:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E1B90;
      }
      goto L_089E1BA0;
    }
L_089E1BA0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[21]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1BB4;
      }
      goto L_089E1BAC;
    }
L_089E1BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1BB8;
      }
      goto L_089E1BB4;
    }
L_089E1BB4:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(7));
    goto L_089E1BB8;
L_089E1BB8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    goto L_089E1BBC;
L_089E1BBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E1C00;
      }
      goto L_089E1BC8;
    }
L_089E1BC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] | 1023u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089E1BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x089BCDF4u>(ctx, &aot_mem) && ctx.pc == 0x089E1BE0u) goto L_089E1BE0;
    return;
L_089E1BE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E1BFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1BFCu) goto L_089E1BFC;
    return;
L_089E1BFC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_089E1C00;
L_089E1C00:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089E1C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 305u, 0x089CA150u>(ctx, &aot_mem) && ctx.pc == 0x089E1C14u) goto L_089E1C14;
    return;
L_089E1C14:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13436));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13432));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13428));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13424));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13440));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089E1C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 153u, 0x089BCDB4u>(ctx, &aot_mem) && ctx.pc == 0x089E1C90u) goto L_089E1C90;
    return;
L_089E1C90:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089E1CA0u);
    // nop
    goto L_089E0EF8;
L_089E1CA0:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
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
L_089E1CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E1CF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E1CF4u) goto L_089E1CF4;
    return;
L_089E1CF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1D04:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E1D54:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E1E68;
      }
      goto L_089E1D64;
    }
L_089E1D64:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684)));
    ctx.set_gpr(6, 0u & 31u);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27683), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27682)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[6]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27682), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(3, ctx.gpr[3] | 32u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26944)));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27768)));
    ctx.set_gpr(6, ctx.gpr[8] << 8u);
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(5, 65280u << 16u);
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27768), ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27428)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-27762), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(5, 2u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27428), ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-27688)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-27688), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(5, ctx.gpr[3] | 16u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E21C4;
      }
      goto L_089E1E68;
    }
L_089E1E68:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E1F78;
      }
      goto L_089E1E74;
    }
L_089E1E74:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684)));
    ctx.set_gpr(6, 0u & 31u);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27683), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27682)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[6]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27682), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(3, ctx.gpr[3] | 32u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26940)));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27768)));
    ctx.set_gpr(6, ctx.gpr[8] << 8u);
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(5, 65280u << 16u);
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27768), ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27428)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-27762), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(5, 2u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27428), ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-27688)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-27688), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(5, ctx.gpr[3] | 16u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E21C4;
      }
      goto L_089E1F78;
    }
L_089E1F78:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089E2088;
      }
      goto L_089E1F84;
    }
L_089E1F84:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684)));
    ctx.set_gpr(5, ctx.gpr[7] & 3u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684)));
    ctx.set_gpr(6, 0u & 31u);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27684), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27683), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27682)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[6]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27682), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(3, ctx.gpr[3] | 32u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26936)));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27768)));
    ctx.set_gpr(6, ctx.gpr[8] << 8u);
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(5, 65280u << 16u);
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27768), ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27428)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-27762), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(5, 2u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27428), ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-27688)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-27688), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(5, ctx.gpr[3] | 16u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E21C4;
      }
      goto L_089E2088;
    }
L_089E2088:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-27684)));
    ctx.set_gpr(7, ctx.gpr[7] & 3u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-27684), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-27684)));
    ctx.set_gpr(8, 0u & 31u);
    ctx.set_gpr(7, ctx.gpr[8] << 2u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(6, ctx.gpr[9] & ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-27684), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-27683), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-27682)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(6, ctx.gpr[7] & ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[8]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-27682), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(7, ctx.gpr[6] | 32u);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27424), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(8, ctx.gpr[7] & ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27768)));
    ctx.set_gpr(5, ctx.gpr[7] << 8u);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27768), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27428)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27762), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27428), ctx.gpr[5]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089E2188;
      }
      goto L_089E2180;
    }
L_089E2180:
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    goto L_089E2188;
L_089E2188:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27688)));
    ctx.set_gpr(5, ctx.gpr[5] & 63u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27688), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(5, ctx.gpr[3] | 16u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    goto L_089E21C4;
L_089E21C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4097));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E21DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2228;
      }
      goto L_089E21F8;
    }
L_089E21F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E2228;
      }
      goto L_089E2204;
    }
L_089E2204:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E2228;
      }
      goto L_089E2210;
    }
L_089E2210:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E2228;
      }
      goto L_089E221C;
    }
L_089E221C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E2408;
      }
      goto L_089E2228;
    }
L_089E2228:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(4, ctx.gpr[3] | 2048u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E23E4;
      }
      goto L_089E2258;
    }
L_089E2258:
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28472));
    ctx.set_gpr(11, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(640)));
    ctx.set_gpr(5, ctx.gpr[4] << 8u);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(640), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(4, ctx.gpr[5] & 31u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[11] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(4, ctx.gpr[5] >> 5u);
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27448));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 24u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[11] << (ctx.gpr[9] & 31u));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E22EC;
      }
      goto L_089E22E4;
    }
L_089E22E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E22F0;
      }
      goto L_089E22EC;
    }
L_089E22EC:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    goto L_089E22F0;
L_089E22F0:
    ctx.set_gpr(11, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28472));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[11]);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(672)));
    ctx.set_gpr(4, ctx.gpr[4] & 2047u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2048));
    ctx.set_gpr(3, ctx.gpr[10] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(672), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27798));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(10, ctx.gpr[7] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(3, ctx.gpr[10] & 31u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[4] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[10] >> 5u);
    ctx.set_gpr(10, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27448));
    ctx.set_gpr(11, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(736)));
    ctx.set_gpr(11, ctx.gpr[9] & 15u);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(10, ctx.gpr[10] & ctx.gpr[12]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(736), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(737)));
    ctx.set_gpr(11, ctx.gpr[8] & 15u);
    ctx.set_gpr(10, ctx.gpr[10] & ctx.gpr[12]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(737), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(10, ctx.gpr[7] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(5, ctx.gpr[10] & 31u);
    ctx.set_gpr(5, ctx.gpr[4] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(4, ctx.gpr[10] >> 5u);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E23C4;
      }
      goto L_089E23BC;
    }
L_089E23BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E23C8;
      }
      goto L_089E23C4;
    }
L_089E23C4:
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    goto L_089E23C8;
L_089E23C8:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E23DC;
      }
      goto L_089E23D4;
    }
L_089E23D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E23E0;
      }
      goto L_089E23DC;
    }
L_089E23DC:
    ctx.set_gpr(8, 0u + 0u);
    goto L_089E23E0;
L_089E23E0:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089E23E4;
L_089E23E4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2258;
      }
      goto L_089E23F0;
    }
L_089E23F0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2408;
      }
      goto L_089E23FC;
    }
L_089E23FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089E2408u);
    // nop
    goto L_089E1D54;
L_089E2408:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1025));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E242C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2518;
      }
      goto L_089E2450;
    }
L_089E2450:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[16] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(472)));
    ctx.set_gpr(3, ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2494;
      }
      goto L_089E2484;
    }
L_089E2484:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 1024u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E24E0;
      }
      goto L_089E2494;
    }
L_089E2494:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089E24A0u);
    // nop
    goto L_089E21DC;
L_089E24A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] | 4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26952)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26948)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26952), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26948), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2518;
      }
      goto L_089E24E0;
    }
L_089E24E0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2518;
      }
      goto L_089E24E8;
    }
L_089E24E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2518;
      }
      goto L_089E24F4;
    }
L_089E24F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2518;
      }
      goto L_089E2500;
    }
L_089E2500:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2518;
      }
      goto L_089E250C;
    }
L_089E250C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089E2518u);
    // nop
    goto L_089E1D54;
L_089E2518:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(472), ctx.gpr[16]);
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
L_089E2538:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2574;
      }
      goto L_089E256C;
    }
L_089E256C:
    ctx.set_gpr(31, 0x089E2574u);
    // nop
    goto L_089E21DC;
L_089E2574:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2588:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2608;
      }
      goto L_089E25D0;
    }
L_089E25D0:
    ctx.set_gpr(31, 0x089E25D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E25D8u) goto L_089E25D8;
    return;
L_089E25D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089E25E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089E25E4u) goto L_089E25E4;
    return;
L_089E25E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E25FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E25FCu) goto L_089E25FC;
    return;
L_089E25FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_089E2608;
L_089E2608:
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
L_089E2620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[17] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E26D8;
      }
      goto L_089E2674;
    }
L_089E2674:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12232));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] >> 3u);
    ctx.set_gpr(4, 0u - ctx.gpr[2]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26960)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26956)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26960), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26956), ctx.gpr[3]);
    goto L_089E26D8;
L_089E26D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2750;
      }
      goto L_089E26EC;
    }
L_089E26EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12212));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] >> 1u);
    ctx.set_gpr(4, 0u - ctx.gpr[2]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26960)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26956)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26960), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26956), ctx.gpr[3]);
    goto L_089E2750;
L_089E2750:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2798;
      }
      goto L_089E275C;
    }
L_089E275C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E2798;
      }
      goto L_089E276C;
    }
L_089E276C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2790;
      }
      goto L_089E2788;
    }
L_089E2788:
    ctx.set_gpr(31, 0x089E2790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089E2790u) goto L_089E2790;
    return;
L_089E2790:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    goto L_089E2798;
L_089E2798:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E27B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E27B0u) goto L_089E27B0;
    return;
L_089E27B0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E27C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E27C0u) goto L_089E27C0;
    return;
L_089E27C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E27D8;
      }
      goto L_089E27CC;
    }
L_089E27CC:
    ctx.set_gpr(31, 0x089E27D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089E27D4u) goto L_089E27D4;
    return;
L_089E27D4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    goto L_089E27D8;
L_089E27D8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2814;
      }
      goto L_089E27E4;
    }
L_089E27E4:
    ctx.set_gpr(31, 0x089E27ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E27ECu) goto L_089E27EC;
    return;
L_089E27EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089E27F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089E27F8u) goto L_089E27F8;
    return;
L_089E27F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E2810u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2810u) goto L_089E2810;
    return;
L_089E2810:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    goto L_089E2814;
L_089E2814:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E28A0;
      }
      goto L_089E2828;
    }
L_089E2828:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E28A0;
      }
      goto L_089E2830;
    }
L_089E2830:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2880;
      }
      goto L_089E2844;
    }
L_089E2844:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089E2850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089E2850u) goto L_089E2850;
    return;
L_089E2850:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E287Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E287Cu) goto L_089E287C;
    return;
L_089E287C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_089E2880;
L_089E2880:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_089E28A0;
L_089E28A0:
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
L_089E28C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E28DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E28DCu) goto L_089E28DC;
    return;
L_089E28DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E28EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2954;
      }
      goto L_089E2948;
    }
L_089E2948:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089E2954;
L_089E2954:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(104));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E29EC;
      }
      goto L_089E296C;
    }
L_089E296C:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-42));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2998;
      }
      goto L_089E297C;
    }
L_089E297C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E2990u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2990u) goto L_089E2990;
    return;
L_089E2990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E29EC;
      }
      goto L_089E2998;
    }
L_089E2998:
    ctx.set_gpr(31, 0x089E29A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089E29A0u) goto L_089E29A0;
    return;
L_089E29A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089E29ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x089E29ACu) goto L_089E29AC;
    return;
L_089E29AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089E29BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089E29BCu) goto L_089E29BC;
    return;
L_089E29BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E29D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E29D8u) goto L_089E29D8;
    return;
L_089E29D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E29ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E29ECu) goto L_089E29EC;
    return;
L_089E29EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089E2A04;
      }
      goto L_089E29F8;
    }
L_089E29F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_089E2A04;
L_089E2A04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089E2A1C;
      }
      goto L_089E2A10;
    }
L_089E2A10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_089E2A1C;
L_089E2A1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089E2A34;
      }
      goto L_089E2A28;
    }
L_089E2A28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_089E2A34;
L_089E2A34:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2AF0;
      }
      goto L_089E2A3C;
    }
L_089E2A3C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089E2A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E2A4Cu) goto L_089E2A4C;
    return;
L_089E2A4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] | 1024u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E2A88;
      }
      goto L_089E2A68;
    }
L_089E2A68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2A88;
      }
      goto L_089E2A78;
    }
L_089E2A78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E2B7C;
      }
      goto L_089E2A88;
    }
L_089E2A88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089E2A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089E2A94u) goto L_089E2A94;
    return;
L_089E2A94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2B7C;
      }
      goto L_089E2A9C;
    }
L_089E2A9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2AC0;
      }
      goto L_089E2AB8;
    }
L_089E2AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2AC4;
      }
      goto L_089E2AC0;
    }
L_089E2AC0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_089E2AC4;
L_089E2AC4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E2AD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2AD8u) goto L_089E2AD8;
    return;
L_089E2AD8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089E2AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E2AE8u) goto L_089E2AE8;
    return;
L_089E2AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2B7C;
      }
      goto L_089E2AF0;
    }
L_089E2AF0:
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(22, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089E2B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E2B0Cu) goto L_089E2B0C;
    return;
L_089E2B0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[20] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2B7C;
      }
      goto L_089E2B34;
    }
L_089E2B34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089E2B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089E2B40u) goto L_089E2B40;
    return;
L_089E2B40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2B68;
      }
      goto L_089E2B48;
    }
L_089E2B48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E2B68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2B68u) goto L_089E2B68;
    return;
L_089E2B68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089E2B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E2B7Cu) goto L_089E2B7C;
    return;
L_089E2B7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2BCC;
      }
      goto L_089E2B88;
    }
L_089E2B88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2BB8;
      }
      goto L_089E2B94;
    }
L_089E2B94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2BB8;
      }
      goto L_089E2BB0;
    }
L_089E2BB0:
    ctx.set_gpr(31, 0x089E2BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089E2BB8u) goto L_089E2BB8;
    return;
L_089E2BB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089E2BCC;
L_089E2BCC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089E2BEC;
      }
      goto L_089E2BD4;
    }
L_089E2BD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089E2BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 415u, 0x089A1BD8u>(ctx, &aot_mem) && ctx.pc == 0x089E2BE8u) goto L_089E2BE8;
    return;
L_089E2BE8:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    goto L_089E2BEC;
L_089E2BEC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2C0C;
      }
      goto L_089E2BF4;
    }
L_089E2BF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089E2C0C;
L_089E2C0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2D30;
      }
      goto L_089E2C1C;
    }
L_089E2C1C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2C44;
      }
      goto L_089E2C38;
    }
L_089E2C38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089E2C44;
L_089E2C44:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2D00;
      }
      goto L_089E2C50;
    }
L_089E2C50:
    ctx.set_gpr(31, 0x089E2C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 226u, 0x0893CE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E2C58u) goto L_089E2C58;
    return;
L_089E2C58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089E2C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089E2C64u) goto L_089E2C64;
    return;
L_089E2C64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089E2C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x089E2C70u) goto L_089E2C70;
    return;
L_089E2C70:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E2C8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E2C8Cu) goto L_089E2C8C;
    return;
L_089E2C8C:
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x089E2CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E2CA4u) goto L_089E2CA4;
    return;
L_089E2CA4:
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 1u));
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 1u));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x089E2CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E2CBCu) goto L_089E2CBC;
    return;
L_089E2CBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_089E2CC8;
      }
      goto L_089E2CC4;
    }
L_089E2CC4:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    goto L_089E2CC8;
L_089E2CC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    // nop
      if (branch_taken) {
          goto L_089E2CD4;
      }
      goto L_089E2CD0;
    }
L_089E2CD0:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_089E2CD4;
L_089E2CD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2CFC;
      }
      goto L_089E2CF4;
    }
L_089E2CF4:
    ctx.set_gpr(31, 0x089E2CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089E2CFCu) goto L_089E2CFC;
    return;
L_089E2CFC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089E2D00;
L_089E2D00:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E2C50;
      }
      goto L_089E2D0C;
    }
L_089E2D0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2D30;
      }
      goto L_089E2D28;
    }
L_089E2D28:
    ctx.set_gpr(31, 0x089E2D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089E2D30u) goto L_089E2D30;
    return;
L_089E2D30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2D44;
      }
      goto L_089E2D3C;
    }
L_089E2D3C:
    ctx.set_gpr(31, 0x089E2D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089E2D44u) goto L_089E2D44;
    return;
L_089E2D44:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_089E2D74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2D80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E2DBC;
      }
      goto L_089E2DB0;
    }
L_089E2DB0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E2DD4;
      }
      goto L_089E2DBC;
    }
L_089E2DBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089E2DD4;
L_089E2DD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2DDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2E08:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E2E50;
      }
      goto L_089E2E34;
    }
L_089E2E34:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] | 2048u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089E2E50;
L_089E2E50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089E2E78;
      }
      goto L_089E2E5C;
    }
L_089E2E5C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] | 2048u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089E2E78;
L_089E2E78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2E80:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2EB8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E2F00;
      }
      goto L_089E2EE4;
    }
L_089E2EE4:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] | 2048u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089E2F00;
L_089E2F00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2F08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2F34:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E2F7C;
      }
      goto L_089E2F60;
    }
L_089E2F60:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] | 2048u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089E2F7C;
L_089E2F7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2F84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2FB0:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E2FBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089E3008;
      }
      goto L_089E2FF8;
    }
L_089E2FF8:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] | 2048u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    goto L_089E3008;
L_089E3008:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089E3024;
      }
      goto L_089E3014;
    }
L_089E3014:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] | 2048u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    goto L_089E3024;
L_089E3024:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089E3040;
      }
      goto L_089E3030;
    }
L_089E3030:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] | 2048u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    goto L_089E3040;
L_089E3040:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089E305C;
      }
      goto L_089E304C;
    }
L_089E304C:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] | 2048u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    goto L_089E305C;
L_089E305C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3070u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3070u) goto L_089E3070;
    return;
L_089E3070:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3090:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(728), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28600));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27668)));
    ctx.set_gpr(4, ctx.gpr[4] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27668), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27667)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27667), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27666)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27666), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(4, ctx.gpr[3] | 512u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089E3140u);
    // nop
    goto L_089E3090;
L_089E3140:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3150:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E315C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089E316Cu);
    // nop
    goto L_089E317C;
L_089E316C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E317C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E31B8;
      }
      goto L_089E3188;
    }
L_089E3188:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E31B8;
      }
      goto L_089E3198;
    }
L_089E3198:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E31B8;
      }
      goto L_089E31A0;
    }
L_089E31A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3214;
      }
      goto L_089E31B8;
    }
L_089E31B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E31D4;
      }
      goto L_089E31C4;
    }
L_089E31C4:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3214;
      }
      goto L_089E31D4;
    }
L_089E31D4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(5, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(5, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089E3214;
L_089E3214:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E322C;
      }
      goto L_089E3220;
    }
L_089E3220:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 8192u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089E322C;
L_089E322C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(736), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(732), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 8u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3248:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3260:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E327C;
      }
      goto L_089E3268;
    }
L_089E3268:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(828), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E328C;
      }
      goto L_089E327C;
    }
L_089E327C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(828), ctx.gpr[3]);
    goto L_089E328C;
L_089E328C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 8u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E32A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E32BC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 16768u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(884)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27670), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(4, ctx.gpr[3] | 256u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(880)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27640)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27640), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E336C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(748), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28176)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(7, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28176), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(5, ctx.gpr[3] | 1024u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28172)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28172), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[5] | 2048u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E340C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28184)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(7, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28184), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(5, ctx.gpr[3] | 256u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28180)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28180), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[5] | 512u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E34AC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(472)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E364C;
      }
      goto L_089E34BC;
    }
L_089E34BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, ctx.gpr[6] << 3u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28580));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28552));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27696)));
    ctx.set_gpr(10, ctx.gpr[4] & 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(10, ctx.gpr[3] | ctx.gpr[10]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27696), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27695)));
    ctx.set_gpr(10, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(10, ctx.gpr[3] | ctx.gpr[10]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27695), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27694)));
    ctx.set_gpr(11, ctx.gpr[11] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(10, ctx.gpr[10] & ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[10] | ctx.gpr[11]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(-27694), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(10, 2246u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(12, ctx.gpr[10] | 4u);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-27424), ctx.gpr[12]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, 2246u << 16u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-27692)));
    ctx.set_gpr(10, ctx.gpr[10] & 15u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(9, ctx.gpr[11] & ctx.gpr[9]);
    ctx.set_gpr(10, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(9, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-27692), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(10, ctx.gpr[12] | 8u);
    ctx.set_gpr(9, 2246u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-27680)));
    ctx.set_gpr(8, ctx.gpr[8] & 7u);
    ctx.set_gpr(3, ctx.gpr[9] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[8]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27680), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27679)));
    ctx.set_gpr(7, ctx.gpr[7] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27679), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(7, ctx.gpr[10] | 64u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27676)));
    ctx.set_gpr(6, ctx.gpr[6] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[6]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27676), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27675)));
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27675), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[7] | 128u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    goto L_089E364C;
L_089E364C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3680;
      }
      goto L_089E365C;
    }
L_089E365C:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E367C;
      }
      goto L_089E3670;
    }
L_089E3670:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3690;
      }
      goto L_089E367C;
    }
L_089E367C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089E3680;
L_089E3680:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E365C;
      }
      goto L_089E368C;
    }
L_089E368C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089E3690;
L_089E3690:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3698:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(12, ctx.gpr[13] + 0u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(1, ctx.gpr[11] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E39B4;
      }
      goto L_089E36BC;
    }
L_089E36BC:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28488));
    ctx.set_gpr(3, ctx.gpr[11] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E36D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_089E36F4;
      }
      goto L_089E36E4;
    }
L_089E36E4:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E375C;
      }
      goto L_089E36F4;
    }
L_089E36F4:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(444));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E3704u);
    // nop
    goto L_089E3654;
L_089E3704:
    ctx.set_gpr(13, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E3720;
      }
      goto L_089E3710;
    }
L_089E3710:
    ctx.set_gpr(5, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E371Cu);
    // nop
    goto L_089E3654;
L_089E371C:
    ctx.set_gpr(12, ctx.gpr[2] + 0u);
    goto L_089E3720;
L_089E3720:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E375C;
      }
      goto L_089E372C;
    }
L_089E372C:
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E3744;
      }
      goto L_089E3734;
    }
L_089E3734:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3754;
      }
      goto L_089E3744;
    }
L_089E3744:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_089E3754;
      }
      goto L_089E3750;
    }
L_089E3750:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(2));
    goto L_089E3754;
L_089E3754:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089E375C;
L_089E375C:
    ctx.set_gpr(3, ctx.gpr[13] << 2u);
    ctx.set_gpr(10, 2246u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-28472));
    ctx.set_gpr(7, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(381)));
    ctx.set_gpr(3, 0u & 3u);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(381), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(7, ctx.gpr[13] + static_cast<std::uint32_t>(95));
    ctx.set_gpr(6, ctx.gpr[7] & 31u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[9] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(6, ctx.gpr[7] >> 5u);
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-27448));
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[12] << 2u);
    ctx.set_gpr(7, ctx.gpr[10] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(381)));
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(381), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[12] + static_cast<std::uint32_t>(95));
    ctx.set_gpr(3, ctx.gpr[4] & 31u);
    ctx.set_gpr(5, ctx.gpr[9] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[4] >> 5u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(7, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[13] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[13]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(15, ctx.gpr[10] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(6, (ctx.gpr[7] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(5, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(14, ctx.gpr[14] & ctx.gpr[5]);
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(400), ctx.gpr[14]);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(14, ctx.gpr[14] & ctx.gpr[5]);
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(404), ctx.gpr[14]);
    ctx.set_gpr(15, ctx.gpr[3] + static_cast<std::uint32_t>(99));
    ctx.set_gpr(14, ctx.gpr[15] & 31u);
    ctx.set_gpr(24, ctx.gpr[9] << (ctx.gpr[14] & 31u));
    ctx.set_gpr(14, ctx.gpr[15] >> 5u);
    ctx.set_gpr(14, ctx.gpr[14] << 2u);
    ctx.set_gpr(15, ctx.gpr[8] + ctx.gpr[14]);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.set_gpr(15, ctx.gpr[3] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(14, ctx.gpr[15] & 31u);
    ctx.set_gpr(24, ctx.gpr[9] << (ctx.gpr[14] & 31u));
    ctx.set_gpr(14, ctx.gpr[15] >> 5u);
    ctx.set_gpr(14, ctx.gpr[14] << 2u);
    ctx.set_gpr(15, ctx.gpr[8] + ctx.gpr[14]);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.set_gpr(14, ctx.gpr[3] + static_cast<std::uint32_t>(101));
    ctx.set_gpr(3, ctx.gpr[14] & 31u);
    ctx.set_gpr(15, ctx.gpr[9] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[14] >> 5u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(14, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(3, ctx.gpr[12] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[12]);
    ctx.set_gpr(7, ctx.gpr[3] << 2u);
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(396), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[7] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(400), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(5, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(99));
    ctx.set_gpr(4, ctx.gpr[5] & 31u);
    ctx.set_gpr(6, ctx.gpr[9] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(4, ctx.gpr[5] >> 5u);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(4, ctx.gpr[5] & 31u);
    ctx.set_gpr(6, ctx.gpr[9] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(4, ctx.gpr[5] >> 5u);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(101));
    ctx.set_gpr(3, ctx.gpr[4] & 31u);
    ctx.set_gpr(5, ctx.gpr[9] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[4] >> 5u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E39B4;
      }
      goto L_089E39A0;
    }
L_089E39A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E39B4;
      }
      goto L_089E39B0;
    }
L_089E39B0:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(5));
    goto L_089E39B4;
L_089E39B4:
    ctx.set_gpr(6, ctx.gpr[11] << 3u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28536));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-27704)));
    ctx.set_gpr(5, ctx.gpr[5] & 3u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-27704), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28532));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-27703)));
    ctx.set_gpr(5, ctx.gpr[5] & 3u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-27703), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(6, ctx.gpr[4] | 1u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-27700)));
    ctx.set_gpr(5, ctx.gpr[13] & 3u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-27700), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-27699)));
    ctx.set_gpr(4, ctx.gpr[12] & 3u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-27699), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[6] | 2u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3A74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3A7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3A84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3A8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3A94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3A9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3AA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089E3ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 160u, 0x089BCE14u>(ctx, &aot_mem) && ctx.pc == 0x089E3ABCu) goto L_089E3ABC;
    return;
L_089E3ABC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2048u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32158)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E3B08;
      }
      goto L_089E3AD4;
    }
L_089E3AD4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28304)));
    ctx.set_gpr(4, 0u & 127u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28304), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(4, ctx.gpr[3] | 1024u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    goto L_089E3B08;
L_089E3B08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3B1C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32158)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3B2C;
      }
      goto L_089E3B28;
    }
L_089E3B28:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089E3B2C;
L_089E3B2C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3B48;
      }
      goto L_089E3B34;
    }
L_089E3B34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(828), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3B58;
      }
      goto L_089E3B48;
    }
L_089E3B48:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(828), ctx.gpr[3]);
    goto L_089E3B58;
L_089E3B58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3B60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E3B74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(868)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3BB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3BB4u) goto L_089E3BB4;
    return;
L_089E3BB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 5u, 0x089E4078u>(ctx, &aot_mem); return;
      }
      goto L_089E3BBC;
    }
L_089E3BBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3DE4;
      }
      goto L_089E3BC8;
    }
L_089E3BC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 5u, 0x089E4078u>(ctx, &aot_mem); return;
      }
      goto L_089E3BD4;
    }
L_089E3BD4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3BECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3BECu) goto L_089E3BEC;
    return;
L_089E3BEC:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E3C54;
      }
      goto L_089E3BF8;
    }
L_089E3BF8:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3C44;
      }
      goto L_089E3C04;
    }
L_089E3C04:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E3C34;
      }
      goto L_089E3C1C;
    }
L_089E3C1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E3C34;
      }
      goto L_089E3C28;
    }
L_089E3C28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E3C40;
      }
      goto L_089E3C34;
    }
L_089E3C34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3C50;
      }
      goto L_089E3C40;
    }
L_089E3C40:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089E3C44;
L_089E3C44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E3C04;
      }
      goto L_089E3C4C;
    }
L_089E3C4C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089E3C50;
L_089E3C50:
    ctx.set_gpr(16, ctx.gpr[3] & 255u);
    goto L_089E3C54;
L_089E3C54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(17, ctx.gpr[3] ^ ctx.gpr[4]);
    ctx.set_gpr(17, 0u < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3C94;
      }
      goto L_089E3C70;
    }
L_089E3C70:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3C94;
      }
      goto L_089E3C7C;
    }
L_089E3C7C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3C90;
      }
      goto L_089E3C84;
    }
L_089E3C84:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089E3C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 170u, 0x089BCEDCu>(ctx, &aot_mem) && ctx.pc == 0x089E3C90u) goto L_089E3C90;
    return;
L_089E3C90:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_089E3C94;
L_089E3C94:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 5u, 0x089E4078u>(ctx, &aot_mem); return;
      }
      goto L_089E3C9C;
    }
L_089E3C9C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x089E3CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3CA8u) goto L_089E3CA8;
    return;
L_089E3CA8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3CF0;
      }
      goto L_089E3CB0;
    }
L_089E3CB0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3CD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3CD4u) goto L_089E3CD4;
    return;
L_089E3CD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3CF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3CF0u) goto L_089E3CF0;
    return;
L_089E3CF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x089E3CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089E3CFCu) goto L_089E3CFC;
    return;
L_089E3CFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3D20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3D20u) goto L_089E3D20;
    return;
L_089E3D20:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3D3C;
      }
      goto L_089E3D28;
    }
L_089E3D28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3D40;
      }
      goto L_089E3D3C;
    }
L_089E3D3C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_089E3D40;
L_089E3D40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3D58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3D58u) goto L_089E3D58;
    return;
L_089E3D58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 3840u);
    ctx.set_gpr(7, (ctx.gpr[2] >> 8u) & 0x000000FFu);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089E3DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 318u, 0x089FDC58u>(ctx, &aot_mem) && ctx.pc == 0x089E3DB4u) goto L_089E3DB4;
    return;
L_089E3DB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3DD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3DD0u) goto L_089E3DD0;
    return;
L_089E3DD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 5u, 0x089E4078u>(ctx, &aot_mem); return;
      }
      goto L_089E3DE4;
    }
L_089E3DE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 5u, 0x089E4078u>(ctx, &aot_mem); return;
      }
      goto L_089E3DF0;
    }
L_089E3DF0:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 5u, 0x089E4078u>(ctx, &aot_mem); return;
      }
      goto L_089E3E00;
    }
L_089E3E00:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 5u, 0x089E4078u>(ctx, &aot_mem); return;
      }
      goto L_089E3E0C;
    }
L_089E3E0C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089E3E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 241u, 0x089B9570u>(ctx, &aot_mem) && ctx.pc == 0x089E3E24u) goto L_089E3E24;
    return;
L_089E3E24:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089E3E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 241u, 0x089B9570u>(ctx, &aot_mem) && ctx.pc == 0x089E3E3Cu) goto L_089E3E3C;
    return;
L_089E3E3C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 5u, 0x089E4078u>(ctx, &aot_mem); return;
      }
      goto L_089E3E48;
    }
L_089E3E48:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 5u, 0x089E4078u>(ctx, &aot_mem); return;
      }
      goto L_089E3E50;
    }
L_089E3E50:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4660));
    ctx.set_gpr(31, 0x089E3E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 241u, 0x089B9570u>(ctx, &aot_mem) && ctx.pc == 0x089E3E64u) goto L_089E3E64;
    return;
L_089E3E64:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4660));
    ctx.set_gpr(31, 0x089E3E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 241u, 0x089B9570u>(ctx, &aot_mem) && ctx.pc == 0x089E3E7Cu) goto L_089E3E7C;
    return;
L_089E3E7C:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3E98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3E98u) goto L_089E3E98;
    return;
L_089E3E98:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E3F00;
      }
      goto L_089E3EA4;
    }
L_089E3EA4:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3EF0;
      }
      goto L_089E3EB0;
    }
L_089E3EB0:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E3EE0;
      }
      goto L_089E3EC8;
    }
L_089E3EC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E3EE0;
      }
      goto L_089E3ED4;
    }
L_089E3ED4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089E3EEC;
      }
      goto L_089E3EE0;
    }
L_089E3EE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3EFC;
      }
      goto L_089E3EEC;
    }
L_089E3EEC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089E3EF0;
L_089E3EF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E3EB0;
      }
      goto L_089E3EF8;
    }
L_089E3EF8:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089E3EFC;
L_089E3EFC:
    ctx.set_gpr(17, ctx.gpr[3] & 255u);
    goto L_089E3F00;
L_089E3F00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(22, ctx.gpr[3] ^ ctx.gpr[4]);
    ctx.set_gpr(22, 0u < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3F3C;
      }
      goto L_089E3F18;
    }
L_089E3F18:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3F3C;
      }
      goto L_089E3F24;
    }
L_089E3F24:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3F38;
      }
      goto L_089E3F2C;
    }
L_089E3F2C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089E3F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 170u, 0x089BCEDCu>(ctx, &aot_mem) && ctx.pc == 0x089E3F38u) goto L_089E3F38;
    return;
L_089E3F38:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_089E3F3C;
L_089E3F3C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 5u, 0x089E4078u>(ctx, &aot_mem); return;
      }
      goto L_089E3F44;
    }
L_089E3F44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3F88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3F88u) goto L_089E3F88;
    return;
L_089E3F88:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3FC8;
      }
      goto L_089E3F90;
    }
L_089E3F90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3FB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3FB0u) goto L_089E3FB0;
    return;
L_089E3FB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E3FC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E3FC8u) goto L_089E3FC8;
    return;
L_089E3FC8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3FE0;
      }
      goto L_089E3FD0;
    }
L_089E3FD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E3FE4;
      }
      goto L_089E3FE0;
    }
L_089E3FE0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_089E3FE4;
L_089E3FE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = 0x089E4000u; return;
}

void recomp_unit_0119(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0119_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_119(Runtime &runtime) {
    runtime.register_generated_unit(119u, 0x089E0000u, 16384u, &recomp_unit_0119, &recomp_unit_0119_entry);
    runtime.register_function(0x089E0000u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0024u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E002Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E006Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0088u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0094u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E00FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0108u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E010Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0114u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0120u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0128u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E015Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0168u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0174u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0180u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0188u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E01FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0204u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0224u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0238u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0244u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0250u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E025Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0268u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0274u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E027Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0290u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E02F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0300u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E031Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0338u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0354u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0370u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0384u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0394u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E03A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E03ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E03B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E03C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E040Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0420u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E042Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0434u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0440u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E044Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0458u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E045Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E046Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0478u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0480u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E048Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0498u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E04FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0550u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E058Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0598u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E05E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E05F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0604u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0630u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E063Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E06B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E06BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E06D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0728u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0730u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E073Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0758u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0760u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0770u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0778u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0780u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E078Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E07D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0830u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0838u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0844u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0864u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0870u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0880u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0888u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0890u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E089Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E08FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0928u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0970u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E097Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0988u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0994u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E09F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0A98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AE4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0AF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B18u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0B94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0BFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C20u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0C94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CA0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0CFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0D9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0DF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E18u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0E84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0EACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0EC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0EC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0ED4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0ED8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0EF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0F90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FA0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E0FDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1000u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1018u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1044u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1060u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E107Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1090u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E10F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1180u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E118Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E11E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1218u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1248u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1330u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1358u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1368u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1378u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E13C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E13D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E13D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E13DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E13E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E13F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E13FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1414u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1418u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1430u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1438u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E144Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1458u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1484u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1488u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E14F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1500u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1508u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1514u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E152Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1530u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1548u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1550u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1564u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1570u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E159Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E15F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1600u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1608u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E160Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1618u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1620u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E162Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1644u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1648u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1660u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1668u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E167Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1688u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E16F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1700u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1704u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1754u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E175Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E176Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1784u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1794u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E17F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1800u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1824u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E187Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E18F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1910u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E191Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1928u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1944u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1950u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1964u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1988u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1994u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1998u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E19C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A50u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1A98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1AF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B6Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1B94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BA0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1BFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1C90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1CA0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1CD8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1CF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1D64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1E74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E1F84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2088u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2180u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2188u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E21F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2204u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2210u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E221Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2228u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2258u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E22E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E22ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E22F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E23FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2408u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E242Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2450u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2484u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2494u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24E0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24E8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E24F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2500u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E250Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2518u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2538u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E256Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2574u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2588u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2594u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25D0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E25FCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2608u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2620u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2674u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E26ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2750u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E275Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E276Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2788u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2790u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2798u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27CCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E27F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2810u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2814u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2828u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2830u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2844u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2850u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E287Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2880u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28C0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E28ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2948u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2954u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E296Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E297Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2990u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2998u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29ECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E29F8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2A9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AD8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2AF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2B94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BCCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2BF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C50u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2C8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2CFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D30u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2D80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2DDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E50u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E5Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2E80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2EB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2EE4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2F84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E2FF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3008u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3014u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3024u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3030u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3040u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E304Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E305Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3070u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3090u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3130u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3140u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3150u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E315Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E316Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E317Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3188u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3198u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31B8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E31D4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3214u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3220u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E322Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3248u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3260u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3268u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E327Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E328Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E32BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3308u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E336Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E340Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34ACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E34BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E364Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3654u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E365Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3670u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E367Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3680u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E368Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3690u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3698u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E36BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E36D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E36E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E36F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3704u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3710u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E371Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3720u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E372Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3734u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3744u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3750u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3754u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E375Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E39B4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3A9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3AA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3ABCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3AD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3B74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3BF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C50u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C84u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3C9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3CA8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3CB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3CD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3CF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3CFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D20u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D28u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3D58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DE4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3DF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E24u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E50u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3E98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3ED4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EF0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3EFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F18u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F24u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3F90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x089E3FE4u, &recomp_unit_0119, "recomp_unit_0119");
}
} // namespace psprecomp
