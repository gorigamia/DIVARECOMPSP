#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0114[3874] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0,
    25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 72, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 96, 0, 0,
    97, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0,
    0, 112, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 121, 0, 0, 0, 0, 122, 0,
    0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134,
    135, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 143, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150,
    151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 170, 0, 171, 0, 0, 172, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 185, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 0,
    0, 0, 216, 0, 0, 0, 0, 217, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 235, 236, 0, 0, 237, 0, 238, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252,
    0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0,
    0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0,
    0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 285, 286, 0, 0, 0, 0, 0, 0, 287, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 292, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 309,
    0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0,
    0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338,
    0, 0, 339, 0, 340, 0, 341, 0, 0, 0, 342, 0, 0, 343, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0,
    0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0,
    0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 368, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 375, 376, 0, 0, 0, 377, 0, 0,
    0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384,
    0, 0, 385, 0, 386, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 391, 0, 392, 0, 393, 0, 0, 0, 394, 0,
    0, 395, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0,
    0, 0, 401, 0, 0, 402, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 407, 0, 408, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 416, 0, 417, 0, 418,
    0, 0, 0, 419, 0, 0, 420, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 427, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0,
    0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0,
    0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0,
    0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0,
    0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0,
    0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473,
    0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 0,
    480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0,
    0, 487, 0, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0,
    0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0,
    0, 0, 499, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 503, 504, 0, 0, 0, 505, 0, 0, 506, 507, 0, 508, 0, 0, 0, 0,
    0, 509, 510, 0, 0, 511, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 519, 0,
    520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 0, 529,
    0, 0, 0, 530, 0, 531, 0, 532, 0, 533, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0,
    0, 539, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 543, 544, 0, 0, 0, 545, 0, 0, 546, 547, 0, 548, 0, 0, 0, 0, 0,
    549, 550, 0, 0, 551, 0, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 556, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559,
    0, 0, 560, 0, 561, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 0, 567, 0, 568, 0, 569, 0, 570, 0,
    0, 0, 571, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 576, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0,
    0, 579, 580, 0, 0, 0, 581, 0, 0, 582, 583, 0, 584, 0, 0, 0, 0, 0, 585, 586, 0, 0, 587, 0, 0, 588, 0, 0, 0, 589, 0, 0,
    590, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 599, 0, 0, 0,
    600, 0, 0, 601, 0, 0, 602, 0, 0, 0, 603, 0, 604, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0,
    609, 0, 610, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0,
    616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 621, 0, 622, 623, 0, 0, 624, 0, 0, 625,
    0, 0, 626, 0, 627, 628, 0, 0, 629, 0, 630, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 0, 0,
    0, 638, 0, 0, 0, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 0, 0, 647,
    0, 648, 0, 649, 0, 650, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0,
    0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 670,
    0, 0, 0, 671, 0, 0, 0, 672, 0, 673, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0, 676, 677, 0, 0, 0, 678, 0, 0, 679, 680, 0,
    681, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 684, 0, 0, 685, 686, 0, 0, 0, 0, 687, 0, 688, 0, 0, 689, 0, 0, 0,
    0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 0,
    696, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703,
    0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 709, 0,
    0, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0,
    0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0,
    0, 727,
};
void recomp_unit_0114_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089CC000u;
        entry_id = (entry_delta < 15496u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0114[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089CC000;
    case 2u: goto L_089CC088;
    case 3u: goto L_089CC090;
    case 4u: goto L_089CC098;
    case 5u: goto L_089CC0A4;
    case 6u: goto L_089CC0E0;
    case 7u: goto L_089CC0F4;
    case 8u: goto L_089CC10C;
    case 9u: goto L_089CC11C;
    case 10u: goto L_089CC12C;
    case 11u: goto L_089CC134;
    case 12u: goto L_089CC168;
    case 13u: goto L_089CC1A4;
    case 14u: goto L_089CC1B0;
    case 15u: goto L_089CC1C0;
    case 16u: goto L_089CC1CC;
    case 17u: goto L_089CC1D8;
    case 18u: goto L_089CC1E0;
    case 19u: goto L_089CC200;
    case 20u: goto L_089CC224;
    case 21u: goto L_089CC22C;
    case 22u: goto L_089CC254;
    case 23u: goto L_089CC268;
    case 24u: goto L_089CC274;
    case 25u: goto L_089CC280;
    case 26u: goto L_089CC28C;
    case 27u: goto L_089CC294;
    case 28u: goto L_089CC2F8;
    case 29u: goto L_089CC370;
    case 30u: goto L_089CC3E8;
    case 31u: goto L_089CC408;
    case 32u: goto L_089CC418;
    case 33u: goto L_089CC430;
    case 34u: goto L_089CC454;
    case 35u: goto L_089CC464;
    case 36u: goto L_089CC47C;
    case 37u: goto L_089CC49C;
    case 38u: goto L_089CC4AC;
    case 39u: goto L_089CC4C4;
    case 40u: goto L_089CC4E0;
    case 41u: goto L_089CC4F0;
    case 42u: goto L_089CC508;
    case 43u: goto L_089CC520;
    case 44u: goto L_089CC540;
    case 45u: goto L_089CC550;
    case 46u: goto L_089CC55C;
    case 47u: goto L_089CC568;
    case 48u: goto L_089CC570;
    case 49u: goto L_089CC598;
    case 50u: goto L_089CC5C4;
    case 51u: goto L_089CC5CC;
    case 52u: goto L_089CC5F8;
    case 53u: goto L_089CC608;
    case 54u: goto L_089CC614;
    case 55u: goto L_089CC620;
    case 56u: goto L_089CC628;
    case 57u: goto L_089CC650;
    case 58u: goto L_089CC67C;
    case 59u: goto L_089CC684;
    case 60u: goto L_089CC6B0;
    case 61u: goto L_089CC6BC;
    case 62u: goto L_089CC6D8;
    case 63u: goto L_089CC714;
    case 64u: goto L_089CC748;
    case 65u: goto L_089CC750;
    case 66u: goto L_089CC760;
    case 67u: goto L_089CC784;
    case 68u: goto L_089CC798;
    case 69u: goto L_089CC7AC;
    case 70u: goto L_089CC7B8;
    case 71u: goto L_089CC7D0;
    case 72u: goto L_089CC7D4;
    case 73u: goto L_089CC7DC;
    case 74u: goto L_089CC7EC;
    case 75u: goto L_089CC7F8;
    case 76u: goto L_089CC814;
    case 77u: goto L_089CC820;
    case 78u: goto L_089CC8D0;
    case 79u: goto L_089CC8D8;
    case 80u: goto L_089CC8E8;
    case 81u: goto L_089CC910;
    case 82u: goto L_089CC91C;
    case 83u: goto L_089CC928;
    case 84u: goto L_089CC934;
    case 85u: goto L_089CC940;
    case 86u: goto L_089CC94C;
    case 87u: goto L_089CC958;
    case 88u: goto L_089CC96C;
    case 89u: goto L_089CC980;
    case 90u: goto L_089CC9A8;
    case 91u: goto L_089CC9B4;
    case 92u: goto L_089CCA0C;
    case 93u: goto L_089CCA18;
    case 94u: goto L_089CCA60;
    case 95u: goto L_089CCA70;
    case 96u: goto L_089CCA74;
    case 97u: goto L_089CCA80;
    case 98u: goto L_089CCA84;
    case 99u: goto L_089CCA94;
    case 100u: goto L_089CCAA0;
    case 101u: goto L_089CCAAC;
    case 102u: goto L_089CCAB4;
    case 103u: goto L_089CCAC4;
    case 104u: goto L_089CCACC;
    case 105u: goto L_089CCADC;
    case 106u: goto L_089CCAE8;
    case 107u: goto L_089CCAF4;
    case 108u: goto L_089CCB0C;
    case 109u: goto L_089CCB20;
    case 110u: goto L_089CCB64;
    case 111u: goto L_089CCB74;
    case 112u: goto L_089CCB84;
    case 113u: goto L_089CCB8C;
    case 114u: goto L_089CCB9C;
    case 115u: goto L_089CCBA4;
    case 116u: goto L_089CCBB4;
    case 117u: goto L_089CCBC0;
    case 118u: goto L_089CCBCC;
    case 119u: goto L_089CCBD8;
    case 120u: goto L_089CCBE0;
    case 121u: goto L_089CCBE4;
    case 122u: goto L_089CCBF8;
    case 123u: goto L_089CCC08;
    case 124u: goto L_089CCC18;
    case 125u: goto L_089CCC38;
    case 126u: goto L_089CCC60;
    case 127u: goto L_089CCC6C;
    case 128u: goto L_089CCC78;
    case 129u: goto L_089CCC84;
    case 130u: goto L_089CCCC0;
    case 131u: goto L_089CCCCC;
    case 132u: goto L_089CCCD0;
    case 133u: goto L_089CCCDC;
    case 134u: goto L_089CCCFC;
    case 135u: goto L_089CCD00;
    case 136u: goto L_089CCD0C;
    case 137u: goto L_089CCD14;
    case 138u: goto L_089CCD24;
    case 139u: goto L_089CCD3C;
    case 140u: goto L_089CCD60;
    case 141u: goto L_089CCD6C;
    case 142u: goto L_089CCD84;
    case 143u: goto L_089CCD98;
    case 144u: goto L_089CCD9C;
    case 145u: goto L_089CCDAC;
    case 146u: goto L_089CCDB8;
    case 147u: goto L_089CCDC4;
    case 148u: goto L_089CCDD0;
    case 149u: goto L_089CCDE8;
    case 150u: goto L_089CCDFC;
    case 151u: goto L_089CCE00;
    case 152u: goto L_089CCE10;
    case 153u: goto L_089CCE1C;
    case 154u: goto L_089CCE54;
    case 155u: goto L_089CCE9C;
    case 156u: goto L_089CCEB4;
    case 157u: goto L_089CCED0;
    case 158u: goto L_089CCEE0;
    case 159u: goto L_089CCEFC;
    case 160u: goto L_089CCF0C;
    case 161u: goto L_089CCF1C;
    case 162u: goto L_089CCF38;
    case 163u: goto L_089CCF50;
    case 164u: goto L_089CCF6C;
    case 165u: goto L_089CCFA8;
    case 166u: goto L_089CCFB4;
    case 167u: goto L_089CD004;
    case 168u: goto L_089CD0A0;
    case 169u: goto L_089CD0AC;
    case 170u: goto L_089CD0B0;
    case 171u: goto L_089CD0B8;
    case 172u: goto L_089CD0C4;
    case 173u: goto L_089CD0C8;
    case 174u: goto L_089CD0D0;
    case 175u: goto L_089CD108;
    case 176u: goto L_089CD14C;
    case 177u: goto L_089CD154;
    case 178u: goto L_089CD180;
    case 179u: goto L_089CD1A4;
    case 180u: goto L_089CD1AC;
    case 181u: goto L_089CD1B0;
    case 182u: goto L_089CD1C8;
    case 183u: goto L_089CD1DC;
    case 184u: goto L_089CD20C;
    case 185u: goto L_089CD214;
    case 186u: goto L_089CD218;
    case 187u: goto L_089CD228;
    case 188u: goto L_089CD258;
    case 189u: goto L_089CD268;
    case 190u: goto L_089CD274;
    case 191u: goto L_089CD284;
    case 192u: goto L_089CD2AC;
    case 193u: goto L_089CD2D0;
    case 194u: goto L_089CD2F4;
    case 195u: goto L_089CD318;
    case 196u: goto L_089CD33C;
    case 197u: goto L_089CD360;
    case 198u: goto L_089CD378;
    case 199u: goto L_089CD3EC;
    case 200u: goto L_089CD3F8;
    case 201u: goto L_089CD41C;
    case 202u: goto L_089CD424;
    case 203u: goto L_089CD43C;
    case 204u: goto L_089CD440;
    case 205u: goto L_089CD44C;
    case 206u: goto L_089CD4DC;
    case 207u: goto L_089CD4E8;
    case 208u: goto L_089CD4F8;
    case 209u: goto L_089CD510;
    case 210u: goto L_089CD540;
    case 211u: goto L_089CD54C;
    case 212u: goto L_089CD558;
    case 213u: goto L_089CD564;
    case 214u: goto L_089CD570;
    case 215u: goto L_089CD578;
    case 216u: goto L_089CD588;
    case 217u: goto L_089CD59C;
    case 218u: goto L_089CD5A0;
    case 219u: goto L_089CD5B8;
    case 220u: goto L_089CD5E8;
    case 221u: goto L_089CD664;
    case 222u: goto L_089CD674;
    case 223u: goto L_089CD6F8;
    case 224u: goto L_089CD70C;
    case 225u: goto L_089CD71C;
    case 226u: goto L_089CD864;
    case 227u: goto L_089CD878;
    case 228u: goto L_089CD888;
    case 229u: goto L_089CDA44;
    case 230u: goto L_089CDA50;
    case 231u: goto L_089CDA5C;
    case 232u: goto L_089CDA68;
    case 233u: goto L_089CDA74;
    case 234u: goto L_089CDAFC;
    case 235u: goto L_089CDB08;
    case 236u: goto L_089CDB0C;
    case 237u: goto L_089CDB18;
    case 238u: goto L_089CDB20;
    case 239u: goto L_089CDB24;
    case 240u: goto L_089CDB80;
    case 241u: goto L_089CDBC0;
    case 242u: goto L_089CDBDC;
    case 243u: goto L_089CDBE4;
    case 244u: goto L_089CDC08;
    case 245u: goto L_089CDC10;
    case 246u: goto L_089CDC1C;
    case 247u: goto L_089CDC24;
    case 248u: goto L_089CDC40;
    case 249u: goto L_089CDC54;
    case 250u: goto L_089CDC64;
    case 251u: goto L_089CDC70;
    case 252u: goto L_089CDC7C;
    case 253u: goto L_089CDC88;
    case 254u: goto L_089CDC94;
    case 255u: goto L_089CDCB4;
    case 256u: goto L_089CDCC0;
    case 257u: goto L_089CDCD8;
    case 258u: goto L_089CDCE4;
    case 259u: goto L_089CDCEC;
    case 260u: goto L_089CDD5C;
    case 261u: goto L_089CDD6C;
    case 262u: goto L_089CDD74;
    case 263u: goto L_089CDD8C;
    case 264u: goto L_089CDDA0;
    case 265u: goto L_089CDDB4;
    case 266u: goto L_089CDDB8;
    case 267u: goto L_089CDDF0;
    case 268u: goto L_089CDDF8;
    case 269u: goto L_089CDE04;
    case 270u: goto L_089CDE10;
    case 271u: goto L_089CDE20;
    case 272u: goto L_089CDE50;
    case 273u: goto L_089CDE80;
    case 274u: goto L_089CDEA8;
    case 275u: goto L_089CDEC0;
    case 276u: goto L_089CDEC8;
    case 277u: goto L_089CDEE0;
    case 278u: goto L_089CDEEC;
    case 279u: goto L_089CDF10;
    case 280u: goto L_089CDF20;
    case 281u: goto L_089CDF2C;
    case 282u: goto L_089CDF38;
    case 283u: goto L_089CDF44;
    case 284u: goto L_089CDF50;
    case 285u: goto L_089CDF8C;
    case 286u: goto L_089CDF90;
    case 287u: goto L_089CDFAC;
    case 288u: goto L_089CDFB0;
    case 289u: goto L_089CDFBC;
    case 290u: goto L_089CDFDC;
    case 291u: goto L_089CDFE4;
    case 292u: goto L_089CDFEC;
    case 293u: goto L_089CDFF0;
    case 294u: goto L_089CE048;
    case 295u: goto L_089CE05C;
    case 296u: goto L_089CE068;
    case 297u: goto L_089CE074;
    case 298u: goto L_089CE080;
    case 299u: goto L_089CE0BC;
    case 300u: goto L_089CE0C0;
    case 301u: goto L_089CE0DC;
    case 302u: goto L_089CE0F8;
    case 303u: goto L_089CE104;
    case 304u: goto L_089CE118;
    case 305u: goto L_089CE14C;
    case 306u: goto L_089CE158;
    case 307u: goto L_089CE168;
    case 308u: goto L_089CE170;
    case 309u: goto L_089CE17C;
    case 310u: goto L_089CE184;
    case 311u: goto L_089CE1A0;
    case 312u: goto L_089CE1B0;
    case 313u: goto L_089CE1D4;
    case 314u: goto L_089CE1E0;
    case 315u: goto L_089CE1F4;
    case 316u: goto L_089CE1F8;
    case 317u: goto L_089CE22C;
    case 318u: goto L_089CE234;
    case 319u: goto L_089CE23C;
    case 320u: goto L_089CE244;
    case 321u: goto L_089CE2C4;
    case 322u: goto L_089CE2CC;
    case 323u: goto L_089CE2F0;
    case 324u: goto L_089CE304;
    case 325u: goto L_089CE310;
    case 326u: goto L_089CE330;
    case 327u: goto L_089CE348;
    case 328u: goto L_089CE36C;
    case 329u: goto L_089CE378;
    case 330u: goto L_089CE388;
    case 331u: goto L_089CE390;
    case 332u: goto L_089CE3AC;
    case 333u: goto L_089CE3B8;
    case 334u: goto L_089CE3C0;
    case 335u: goto L_089CE3CC;
    case 336u: goto L_089CE3D4;
    case 337u: goto L_089CE3E8;
    case 338u: goto L_089CE3FC;
    case 339u: goto L_089CE408;
    case 340u: goto L_089CE410;
    case 341u: goto L_089CE418;
    case 342u: goto L_089CE428;
    case 343u: goto L_089CE434;
    case 344u: goto L_089CE438;
    case 345u: goto L_089CE444;
    case 346u: goto L_089CE468;
    case 347u: goto L_089CE488;
    case 348u: goto L_089CE4A4;
    case 349u: goto L_089CE4B8;
    case 350u: goto L_089CE4C4;
    case 351u: goto L_089CE4C8;
    case 352u: goto L_089CE4E4;
    case 353u: goto L_089CE508;
    case 354u: goto L_089CE514;
    case 355u: goto L_089CE524;
    case 356u: goto L_089CE52C;
    case 357u: goto L_089CE548;
    case 358u: goto L_089CE554;
    case 359u: goto L_089CE55C;
    case 360u: goto L_089CE568;
    case 361u: goto L_089CE570;
    case 362u: goto L_089CE584;
    case 363u: goto L_089CE598;
    case 364u: goto L_089CE5A4;
    case 365u: goto L_089CE5AC;
    case 366u: goto L_089CE5B4;
    case 367u: goto L_089CE5C4;
    case 368u: goto L_089CE5D0;
    case 369u: goto L_089CE5D4;
    case 370u: goto L_089CE5E0;
    case 371u: goto L_089CE604;
    case 372u: goto L_089CE624;
    case 373u: goto L_089CE640;
    case 374u: goto L_089CE654;
    case 375u: goto L_089CE660;
    case 376u: goto L_089CE664;
    case 377u: goto L_089CE674;
    case 378u: goto L_089CE684;
    case 379u: goto L_089CE698;
    case 380u: goto L_089CE6BC;
    case 381u: goto L_089CE6C8;
    case 382u: goto L_089CE6D8;
    case 383u: goto L_089CE6E0;
    case 384u: goto L_089CE6FC;
    case 385u: goto L_089CE708;
    case 386u: goto L_089CE710;
    case 387u: goto L_089CE71C;
    case 388u: goto L_089CE724;
    case 389u: goto L_089CE738;
    case 390u: goto L_089CE74C;
    case 391u: goto L_089CE758;
    case 392u: goto L_089CE760;
    case 393u: goto L_089CE768;
    case 394u: goto L_089CE778;
    case 395u: goto L_089CE784;
    case 396u: goto L_089CE788;
    case 397u: goto L_089CE794;
    case 398u: goto L_089CE7B8;
    case 399u: goto L_089CE7D8;
    case 400u: goto L_089CE7F4;
    case 401u: goto L_089CE808;
    case 402u: goto L_089CE814;
    case 403u: goto L_089CE818;
    case 404u: goto L_089CE82C;
    case 405u: goto L_089CE850;
    case 406u: goto L_089CE85C;
    case 407u: goto L_089CE86C;
    case 408u: goto L_089CE874;
    case 409u: goto L_089CE890;
    case 410u: goto L_089CE89C;
    case 411u: goto L_089CE8A4;
    case 412u: goto L_089CE8B0;
    case 413u: goto L_089CE8B8;
    case 414u: goto L_089CE8CC;
    case 415u: goto L_089CE8E0;
    case 416u: goto L_089CE8EC;
    case 417u: goto L_089CE8F4;
    case 418u: goto L_089CE8FC;
    case 419u: goto L_089CE90C;
    case 420u: goto L_089CE918;
    case 421u: goto L_089CE91C;
    case 422u: goto L_089CE928;
    case 423u: goto L_089CE94C;
    case 424u: goto L_089CE96C;
    case 425u: goto L_089CE988;
    case 426u: goto L_089CE99C;
    case 427u: goto L_089CE9A8;
    case 428u: goto L_089CE9AC;
    case 429u: goto L_089CE9B8;
    case 430u: goto L_089CE9DC;
    case 431u: goto L_089CE9E4;
    case 432u: goto L_089CEA08;
    case 433u: goto L_089CEA10;
    case 434u: goto L_089CEA34;
    case 435u: goto L_089CEA3C;
    case 436u: goto L_089CEA60;
    case 437u: goto L_089CEA68;
    case 438u: goto L_089CEA8C;
    case 439u: goto L_089CEA94;
    case 440u: goto L_089CEAB8;
    case 441u: goto L_089CEAC0;
    case 442u: goto L_089CEAE4;
    case 443u: goto L_089CEAEC;
    case 444u: goto L_089CEB10;
    case 445u: goto L_089CEB18;
    case 446u: goto L_089CEB3C;
    case 447u: goto L_089CEB44;
    case 448u: goto L_089CEB68;
    case 449u: goto L_089CEBB4;
    case 450u: goto L_089CEBC4;
    case 451u: goto L_089CEBE8;
    case 452u: goto L_089CEBF4;
    case 453u: goto L_089CEC14;
    case 454u: goto L_089CEC24;
    case 455u: goto L_089CEC3C;
    case 456u: goto L_089CEC4C;
    case 457u: goto L_089CEC58;
    case 458u: goto L_089CEC64;
    case 459u: goto L_089CEC74;
    case 460u: goto L_089CEC8C;
    case 461u: goto L_089CECA0;
    case 462u: goto L_089CECB4;
    case 463u: goto L_089CECD0;
    case 464u: goto L_089CECDC;
    case 465u: goto L_089CECE8;
    case 466u: goto L_089CECF8;
    case 467u: goto L_089CED10;
    case 468u: goto L_089CED24;
    case 469u: goto L_089CED38;
    case 470u: goto L_089CED54;
    case 471u: goto L_089CED60;
    case 472u: goto L_089CED6C;
    case 473u: goto L_089CED7C;
    case 474u: goto L_089CED94;
    case 475u: goto L_089CEDA8;
    case 476u: goto L_089CEDBC;
    case 477u: goto L_089CEDD8;
    case 478u: goto L_089CEDE4;
    case 479u: goto L_089CEDF0;
    case 480u: goto L_089CEE00;
    case 481u: goto L_089CEE18;
    case 482u: goto L_089CEE2C;
    case 483u: goto L_089CEE40;
    case 484u: goto L_089CEE5C;
    case 485u: goto L_089CEE68;
    case 486u: goto L_089CEE74;
    case 487u: goto L_089CEE84;
    case 488u: goto L_089CEE90;
    case 489u: goto L_089CEEA0;
    case 490u: goto L_089CEEAC;
    case 491u: goto L_089CEEBC;
    case 492u: goto L_089CEECC;
    case 493u: goto L_089CEEF8;
    case 494u: goto L_089CEF18;
    case 495u: goto L_089CEF40;
    case 496u: goto L_089CEF50;
    case 497u: goto L_089CEF60;
    case 498u: goto L_089CEF74;
    case 499u: goto L_089CEF88;
    case 500u: goto L_089CEF90;
    case 501u: goto L_089CEF9C;
    case 502u: goto L_089CEFB4;
    case 503u: goto L_089CEFC0;
    case 504u: goto L_089CEFC4;
    case 505u: goto L_089CEFD4;
    case 506u: goto L_089CEFE0;
    case 507u: goto L_089CEFE4;
    case 508u: goto L_089CEFEC;
    case 509u: goto L_089CF004;
    case 510u: goto L_089CF008;
    case 511u: goto L_089CF014;
    case 512u: goto L_089CF020;
    case 513u: goto L_089CF030;
    case 514u: goto L_089CF03C;
    case 515u: goto L_089CF048;
    case 516u: goto L_089CF058;
    case 517u: goto L_089CF064;
    case 518u: goto L_089CF06C;
    case 519u: goto L_089CF078;
    case 520u: goto L_089CF080;
    case 521u: goto L_089CF094;
    case 522u: goto L_089CF0A8;
    case 523u: goto L_089CF0B4;
    case 524u: goto L_089CF0BC;
    case 525u: goto L_089CF0C4;
    case 526u: goto L_089CF0D4;
    case 527u: goto L_089CF0E4;
    case 528u: goto L_089CF0F0;
    case 529u: goto L_089CF0FC;
    case 530u: goto L_089CF10C;
    case 531u: goto L_089CF114;
    case 532u: goto L_089CF11C;
    case 533u: goto L_089CF124;
    case 534u: goto L_089CF134;
    case 535u: goto L_089CF140;
    case 536u: goto L_089CF150;
    case 537u: goto L_089CF158;
    case 538u: goto L_089CF170;
    case 539u: goto L_089CF184;
    case 540u: goto L_089CF18C;
    case 541u: goto L_089CF198;
    case 542u: goto L_089CF1B0;
    case 543u: goto L_089CF1BC;
    case 544u: goto L_089CF1C0;
    case 545u: goto L_089CF1D0;
    case 546u: goto L_089CF1DC;
    case 547u: goto L_089CF1E0;
    case 548u: goto L_089CF1E8;
    case 549u: goto L_089CF200;
    case 550u: goto L_089CF204;
    case 551u: goto L_089CF210;
    case 552u: goto L_089CF21C;
    case 553u: goto L_089CF22C;
    case 554u: goto L_089CF238;
    case 555u: goto L_089CF240;
    case 556u: goto L_089CF24C;
    case 557u: goto L_089CF254;
    case 558u: goto L_089CF268;
    case 559u: goto L_089CF27C;
    case 560u: goto L_089CF288;
    case 561u: goto L_089CF290;
    case 562u: goto L_089CF298;
    case 563u: goto L_089CF2A8;
    case 564u: goto L_089CF2B8;
    case 565u: goto L_089CF2C4;
    case 566u: goto L_089CF2D0;
    case 567u: goto L_089CF2E0;
    case 568u: goto L_089CF2E8;
    case 569u: goto L_089CF2F0;
    case 570u: goto L_089CF2F8;
    case 571u: goto L_089CF308;
    case 572u: goto L_089CF314;
    case 573u: goto L_089CF324;
    case 574u: goto L_089CF338;
    case 575u: goto L_089CF34C;
    case 576u: goto L_089CF354;
    case 577u: goto L_089CF360;
    case 578u: goto L_089CF378;
    case 579u: goto L_089CF384;
    case 580u: goto L_089CF388;
    case 581u: goto L_089CF398;
    case 582u: goto L_089CF3A4;
    case 583u: goto L_089CF3A8;
    case 584u: goto L_089CF3B0;
    case 585u: goto L_089CF3C8;
    case 586u: goto L_089CF3CC;
    case 587u: goto L_089CF3D8;
    case 588u: goto L_089CF3E4;
    case 589u: goto L_089CF3F4;
    case 590u: goto L_089CF400;
    case 591u: goto L_089CF408;
    case 592u: goto L_089CF414;
    case 593u: goto L_089CF41C;
    case 594u: goto L_089CF430;
    case 595u: goto L_089CF444;
    case 596u: goto L_089CF450;
    case 597u: goto L_089CF458;
    case 598u: goto L_089CF460;
    case 599u: goto L_089CF470;
    case 600u: goto L_089CF480;
    case 601u: goto L_089CF48C;
    case 602u: goto L_089CF498;
    case 603u: goto L_089CF4A8;
    case 604u: goto L_089CF4B0;
    case 605u: goto L_089CF4B8;
    case 606u: goto L_089CF4C0;
    case 607u: goto L_089CF4D0;
    case 608u: goto L_089CF4DC;
    case 609u: goto L_089CF500;
    case 610u: goto L_089CF508;
    case 611u: goto L_089CF528;
    case 612u: goto L_089CF530;
    case 613u: goto L_089CF550;
    case 614u: goto L_089CF558;
    case 615u: goto L_089CF578;
    case 616u: goto L_089CF580;
    case 617u: goto L_089CF5A0;
    case 618u: goto L_089CF5A8;
    case 619u: goto L_089CF5BC;
    case 620u: goto L_089CF5CC;
    case 621u: goto L_089CF5D8;
    case 622u: goto L_089CF5E0;
    case 623u: goto L_089CF5E4;
    case 624u: goto L_089CF5F0;
    case 625u: goto L_089CF5FC;
    case 626u: goto L_089CF608;
    case 627u: goto L_089CF610;
    case 628u: goto L_089CF614;
    case 629u: goto L_089CF620;
    case 630u: goto L_089CF628;
    case 631u: goto L_089CF62C;
    case 632u: goto L_089CF638;
    case 633u: goto L_089CF648;
    case 634u: goto L_089CF654;
    case 635u: goto L_089CF65C;
    case 636u: goto L_089CF668;
    case 637u: goto L_089CF670;
    case 638u: goto L_089CF684;
    case 639u: goto L_089CF698;
    case 640u: goto L_089CF6A4;
    case 641u: goto L_089CF6AC;
    case 642u: goto L_089CF6B4;
    case 643u: goto L_089CF6C4;
    case 644u: goto L_089CF6D4;
    case 645u: goto L_089CF6E0;
    case 646u: goto L_089CF6EC;
    case 647u: goto L_089CF6FC;
    case 648u: goto L_089CF704;
    case 649u: goto L_089CF70C;
    case 650u: goto L_089CF714;
    case 651u: goto L_089CF724;
    case 652u: goto L_089CF730;
    case 653u: goto L_089CF748;
    case 654u: goto L_089CF754;
    case 655u: goto L_089CF76C;
    case 656u: goto L_089CF778;
    case 657u: goto L_089CF784;
    case 658u: goto L_089CF79C;
    case 659u: goto L_089CF7A8;
    case 660u: goto L_089CF7B4;
    case 661u: goto L_089CF7CC;
    case 662u: goto L_089CF7D8;
    case 663u: goto L_089CF7F4;
    case 664u: goto L_089CF82C;
    case 665u: goto L_089CF838;
    case 666u: goto L_089CF850;
    case 667u: goto L_089CF858;
    case 668u: goto L_089CF864;
    case 669u: goto L_089CF870;
    case 670u: goto L_089CF87C;
    case 671u: goto L_089CF88C;
    case 672u: goto L_089CF89C;
    case 673u: goto L_089CF8A4;
    case 674u: goto L_089CF8B0;
    case 675u: goto L_089CF8C8;
    case 676u: goto L_089CF8D4;
    case 677u: goto L_089CF8D8;
    case 678u: goto L_089CF8E8;
    case 679u: goto L_089CF8F4;
    case 680u: goto L_089CF8F8;
    case 681u: goto L_089CF900;
    case 682u: goto L_089CF920;
    case 683u: goto L_089CF92C;
    case 684u: goto L_089CF938;
    case 685u: goto L_089CF944;
    case 686u: goto L_089CF948;
    case 687u: goto L_089CF95C;
    case 688u: goto L_089CF964;
    case 689u: goto L_089CF970;
    case 690u: goto L_089CF988;
    case 691u: goto L_089CF9A4;
    case 692u: goto L_089CF9C0;
    case 693u: goto L_089CF9CC;
    case 694u: goto L_089CF9D8;
    case 695u: goto L_089CF9E0;
    case 696u: goto L_089CFA00;
    case 697u: goto L_089CFA0C;
    case 698u: goto L_089CFA2C;
    case 699u: goto L_089CFA38;
    case 700u: goto L_089CFA44;
    case 701u: goto L_089CFA64;
    case 702u: goto L_089CFA70;
    case 703u: goto L_089CFA7C;
    case 704u: goto L_089CFA9C;
    case 705u: goto L_089CFAA8;
    case 706u: goto L_089CFAC0;
    case 707u: goto L_089CFACC;
    case 708u: goto L_089CFAEC;
    case 709u: goto L_089CFAF8;
    case 710u: goto L_089CFB04;
    case 711u: goto L_089CFB24;
    case 712u: goto L_089CFB30;
    case 713u: goto L_089CFB3C;
    case 714u: goto L_089CFB5C;
    case 715u: goto L_089CFB6C;
    case 716u: goto L_089CFB88;
    case 717u: goto L_089CFB94;
    case 718u: goto L_089CFBAC;
    case 719u: goto L_089CFBBC;
    case 720u: goto L_089CFBD0;
    case 721u: goto L_089CFC00;
    case 722u: goto L_089CFC10;
    case 723u: goto L_089CFC34;
    case 724u: goto L_089CFC3C;
    case 725u: goto L_089CFC58;
    case 726u: goto L_089CFC6C;
    case 727u: goto L_089CFC84;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089CC000:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-29292));
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-29296));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CC088u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CC088u) goto L_089CC088;
    return;
L_089CC088:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC098;
      }
      goto L_089CC090;
    }
L_089CC090:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089CC098;
L_089CC098:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089CC0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 609u, 0x089CB8B8u>(ctx, &aot_mem) && ctx.pc == 0x089CC0A4u) goto L_089CC0A4;
    return;
L_089CC0A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(784)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(752)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(756)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(744)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(748)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CC0E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CC0E0u) goto L_089CC0E0;
    return;
L_089CC0E0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CC0F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 308u, 0x08A037E4u>(ctx, &aot_mem) && ctx.pc == 0x089CC0F4u) goto L_089CC0F4;
    return;
L_089CC0F4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(852)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CC10Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CC10Cu) goto L_089CC10C;
    return;
L_089CC10C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC134;
      }
      goto L_089CC11C;
    }
L_089CC11C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x089CC12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x089CC12Cu) goto L_089CC12C;
    return;
L_089CC12C:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(108));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    goto L_089CC134;
L_089CC134:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(180), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(176), ctx.gpr[3]);
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
L_089CC168:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC1B0;
      }
      goto L_089CC1A4;
    }
L_089CC1A4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC6BC;
      }
      goto L_089CC1B0;
    }
L_089CC1B0:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089CC22C;
      }
      goto L_089CC1C0;
    }
L_089CC1C0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CC200;
      }
      goto L_089CC1CC;
    }
L_089CC1CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC1E0;
      }
      goto L_089CC1D8;
    }
L_089CC1D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC254;
      }
      goto L_089CC1E0;
    }
L_089CC1E0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC254;
      }
      goto L_089CC200;
    }
L_089CC200:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-27480));
    ctx.set_gpr(31, 0x089CC224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 340u, 0x089FDE98u>(ctx, &aot_mem) && ctx.pc == 0x089CC224u) goto L_089CC224;
    return;
L_089CC224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC254;
      }
      goto L_089CC22C;
    }
L_089CC22C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-27480));
    ctx.set_gpr(31, 0x089CC254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 340u, 0x089FDE98u>(ctx, &aot_mem) && ctx.pc == 0x089CC254u) goto L_089CC254;
    return;
L_089CC254:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[2] >> 2u) & 0x00000007u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC3E8;
      }
      goto L_089CC268;
    }
L_089CC268:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC370;
      }
      goto L_089CC274;
    }
L_089CC274:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC2F8;
      }
      goto L_089CC280;
    }
L_089CC280:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC294;
      }
      goto L_089CC28C;
    }
L_089CC28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC520;
      }
      goto L_089CC294;
    }
L_089CC294:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, ctx.gpr[3] & 63488u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 11u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] & 2016u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] & 31u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC540;
      }
      goto L_089CC2F8;
    }
L_089CC2F8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 32768u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 15u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] & 31744u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 10u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] & 992u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] & 31u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC540;
      }
      goto L_089CC370;
    }
L_089CC370:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 61440u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 12u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] & 3840u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] & 240u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] & 15u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC540;
      }
      goto L_089CC3E8;
    }
L_089CC3E8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 24u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CC418;
      }
      goto L_089CC408;
    }
L_089CC408:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC430;
      }
      goto L_089CC418;
    }
L_089CC418:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089CC430;
L_089CC430:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CC464;
      }
      goto L_089CC454;
    }
L_089CC454:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC47C;
      }
      goto L_089CC464;
    }
L_089CC464:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089CC47C;
L_089CC47C:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[4] & 65280u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CC4AC;
      }
      goto L_089CC49C;
    }
L_089CC49C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC4C4;
      }
      goto L_089CC4AC;
    }
L_089CC4AC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089CC4C4;
L_089CC4C4:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CC4F0;
      }
      goto L_089CC4E0;
    }
L_089CC4E0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC508;
      }
      goto L_089CC4F0;
    }
L_089CC4F0:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089CC508;
L_089CC508:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC540;
      }
      goto L_089CC520;
    }
L_089CC520:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089CC540;
L_089CC540:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC5CC;
      }
      goto L_089CC550;
    }
L_089CC550:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC598;
      }
      goto L_089CC55C;
    }
L_089CC55C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC570;
      }
      goto L_089CC568;
    }
L_089CC568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC5F8;
      }
      goto L_089CC570;
    }
L_089CC570:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC5F8;
      }
      goto L_089CC598;
    }
L_089CC598:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18)));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-27480));
    ctx.set_gpr(31, 0x089CC5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 340u, 0x089FDE98u>(ctx, &aot_mem) && ctx.pc == 0x089CC5C4u) goto L_089CC5C4;
    return;
L_089CC5C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC5F8;
      }
      goto L_089CC5CC;
    }
L_089CC5CC:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18)));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-27480));
    ctx.set_gpr(31, 0x089CC5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 340u, 0x089FDE98u>(ctx, &aot_mem) && ctx.pc == 0x089CC5F8u) goto L_089CC5F8;
    return;
L_089CC5F8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(30)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC684;
      }
      goto L_089CC608;
    }
L_089CC608:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC650;
      }
      goto L_089CC614;
    }
L_089CC614:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC628;
      }
      goto L_089CC620;
    }
L_089CC620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC6B0;
      }
      goto L_089CC628;
    }
L_089CC628:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC6B0;
      }
      goto L_089CC650;
    }
L_089CC650:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-27480));
    ctx.set_gpr(31, 0x089CC67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 340u, 0x089FDE98u>(ctx, &aot_mem) && ctx.pc == 0x089CC67Cu) goto L_089CC67C;
    return;
L_089CC67C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC6B0;
      }
      goto L_089CC684;
    }
L_089CC684:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-27480));
    ctx.set_gpr(31, 0x089CC6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 340u, 0x089FDE98u>(ctx, &aot_mem) && ctx.pc == 0x089CC6B0u) goto L_089CC6B0;
    return;
L_089CC6B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089CC6BC;
L_089CC6BC:
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
L_089CC6D8:
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
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC750;
      }
      goto L_089CC714;
    }
L_089CC714:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CC748u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CC748u) goto L_089CC748;
    return;
L_089CC748:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089CC750;
L_089CC750:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC714;
      }
      goto L_089CC760;
    }
L_089CC760:
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
L_089CC784:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[2] >> 11u) & 0x00000003u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC7AC;
      }
      goto L_089CC798;
    }
L_089CC798:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC7D4;
      }
      goto L_089CC7AC;
    }
L_089CC7AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CC7D0;
      }
      goto L_089CC7B8;
    }
L_089CC7B8:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC7D4;
      }
      goto L_089CC7D0;
    }
L_089CC7D0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089CC7D4;
L_089CC7D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC7DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC8D0;
      }
      goto L_089CC7EC;
    }
L_089CC7EC:
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC814;
      }
      goto L_089CC7F8;
    }
L_089CC7F8:
    ctx.set_gpr(8, ctx.gpr[9] << 2u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_089CC814;
L_089CC814:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC7F8;
      }
      goto L_089CC820;
    }
L_089CC820:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC8D8;
      }
      goto L_089CC8D0;
    }
L_089CC8D0:
    ctx.set_gpr(31, 0x089CC8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x089CC8D8u) goto L_089CC8D8;
    return;
L_089CC8D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC8E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC91C;
      }
      goto L_089CC910;
    }
L_089CC910:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC18;
      }
      goto L_089CC91C;
    }
L_089CC91C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC08;
      }
      goto L_089CC928;
    }
L_089CC928:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC08;
      }
      goto L_089CC934;
    }
L_089CC934:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCADC;
      }
      goto L_089CC940;
    }
L_089CC940:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC96C;
      }
      goto L_089CC94C;
    }
L_089CC94C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC96C;
      }
      goto L_089CC958;
    }
L_089CC958:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC18;
      }
      goto L_089CC96C;
    }
L_089CC96C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCA84;
      }
      goto L_089CC980;
    }
L_089CC980:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x089CC9A8u);
    // nop
    goto L_089CC7DC;
L_089CC9A8:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCA74;
      }
      goto L_089CC9B4;
    }
L_089CC9B4:
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CCA18;
      }
      goto L_089CCA0C;
    }
L_089CCA0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_089CCA18;
L_089CCA18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CCA70;
      }
      goto L_089CCA60;
    }
L_089CCA60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(17, ctx.gpr[17] & ctx.gpr[2]);
    goto L_089CCA70;
L_089CCA70:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CCA74;
L_089CCA74:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC9B4;
      }
      goto L_089CCA80;
    }
L_089CCA80:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089CCA84;
L_089CCA84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC980;
      }
      goto L_089CCA94;
    }
L_089CCA94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(63));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CCAAC;
      }
      goto L_089CCAA0;
    }
L_089CCAA0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCACC;
      }
      goto L_089CCAAC;
    }
L_089CCAAC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CCAC4;
      }
      goto L_089CCAB4;
    }
L_089CCAB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCACC;
      }
      goto L_089CCAC4;
    }
L_089CCAC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    goto L_089CCACC;
L_089CCACC:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC18;
      }
      goto L_089CCADC;
    }
L_089CCADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC08;
      }
      goto L_089CCAE8;
    }
L_089CCAE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCB0C;
      }
      goto L_089CCAF4;
    }
L_089CCAF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC18;
      }
      goto L_089CCB0C;
    }
L_089CCB0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCBE4;
      }
      goto L_089CCB20;
    }
L_089CCB20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32512)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089CCB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x089CCB64u) goto L_089CCB64;
    return;
L_089CCB64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x089CCB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 697u, 0x089F7E44u>(ctx, &aot_mem) && ctx.pc == 0x089CCB74u) goto L_089CCB74;
    return;
L_089CCB74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089CCB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 96u, 0x089FC748u>(ctx, &aot_mem) && ctx.pc == 0x089CCB84u) goto L_089CCB84;
    return;
L_089CCB84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCBB4;
      }
      goto L_089CCB8C;
    }
L_089CCB8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089CCB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 320u, 0x089F95DCu>(ctx, &aot_mem) && ctx.pc == 0x089CCB9Cu) goto L_089CCB9C;
    return;
L_089CCB9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCBB4;
      }
      goto L_089CCBA4;
    }
L_089CCBA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089CCBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 320u, 0x089F95DCu>(ctx, &aot_mem) && ctx.pc == 0x089CCBB4u) goto L_089CCBB4;
    return;
L_089CCBB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CCBE0;
      }
      goto L_089CCBC0;
    }
L_089CCBC0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CCBD8;
      }
      goto L_089CCBCC;
    }
L_089CCBCC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCBE0;
      }
      goto L_089CCBD8;
    }
L_089CCBD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    goto L_089CCBE0;
L_089CCBE0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089CCBE4;
L_089CCBE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCB20;
      }
      goto L_089CCBF8;
    }
L_089CCBF8:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC18;
      }
      goto L_089CCC08;
    }
L_089CCC08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    goto L_089CCC18;
L_089CCC18:
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
L_089CCC38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(31, 0x089CCC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 769u, 0x08947830u>(ctx, &aot_mem) && ctx.pc == 0x089CCC60u) goto L_089CCC60;
    return;
L_089CCC60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCCFC;
      }
      goto L_089CCC6C;
    }
L_089CCC6C:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCCD0;
      }
      goto L_089CCC78;
    }
L_089CCC78:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCCC0;
      }
      goto L_089CCC84;
    }
L_089CCC84:
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[6] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089CCCC0;
L_089CCCC0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC84;
      }
      goto L_089CCCCC;
    }
L_089CCCCC:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089CCCD0;
L_089CCCD0:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC78;
      }
      goto L_089CCCDC;
    }
L_089CCCDC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCD00;
      }
      goto L_089CCCFC;
    }
L_089CCCFC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    goto L_089CCD00;
L_089CCD00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089CCD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x089CCD0Cu) goto L_089CCD0C;
    return;
L_089CCD0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCD24;
      }
      goto L_089CCD14;
    }
L_089CCD14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089CCD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 264u, 0x089F91F0u>(ctx, &aot_mem) && ctx.pc == 0x089CCD24u) goto L_089CCD24;
    return;
L_089CCD24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCD3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCDB8;
      }
      goto L_089CCD60;
    }
L_089CCD60:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCD9C;
      }
      goto L_089CCD6C;
    }
L_089CCD6C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCD98;
      }
      goto L_089CCD84;
    }
L_089CCD84:
    ctx.set_gpr(2, 49151u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CCD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CCD98u) goto L_089CCD98;
    return;
L_089CCD98:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089CCD9C;
L_089CCD9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCD6C;
      }
      goto L_089CCDAC;
    }
L_089CCDAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089CCDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CCDB8u) goto L_089CCDB8;
    return;
L_089CCDB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCE1C;
      }
      goto L_089CCDC4;
    }
L_089CCDC4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCE00;
      }
      goto L_089CCDD0;
    }
L_089CCDD0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCDFC;
      }
      goto L_089CCDE8;
    }
L_089CCDE8:
    ctx.set_gpr(2, 49151u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CCDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CCDFCu) goto L_089CCDFC;
    return;
L_089CCDFC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089CCE00;
L_089CCE00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCDD0;
      }
      goto L_089CCE10;
    }
L_089CCE10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x089CCE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CCE1Cu) goto L_089CCE1C;
    return;
L_089CCE1C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
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
L_089CCE54:
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
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CCE9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CCE9Cu) goto L_089CCE9C;
    return;
L_089CCE9C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089CCEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 138u, 0x089BCCF4u>(ctx, &aot_mem) && ctx.pc == 0x089CCEB4u) goto L_089CCEB4;
    return;
L_089CCEB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CCED0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CCED0u) goto L_089CCED0;
    return;
L_089CCED0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089CCEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 138u, 0x089BCCF4u>(ctx, &aot_mem) && ctx.pc == 0x089CCEE0u) goto L_089CCEE0;
    return;
L_089CCEE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CCEFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CCEFCu) goto L_089CCEFC;
    return;
L_089CCEFC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCFA8;
      }
      goto L_089CCF0C;
    }
L_089CCF0C:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089CCF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 138u, 0x089BCCF4u>(ctx, &aot_mem) && ctx.pc == 0x089CCF1Cu) goto L_089CCF1C;
    return;
L_089CCF1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CCF38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CCF38u) goto L_089CCF38;
    return;
L_089CCF38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089CCF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 138u, 0x089BCCF4u>(ctx, &aot_mem) && ctx.pc == 0x089CCF50u) goto L_089CCF50;
    return;
L_089CCF50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CCF6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CCF6Cu) goto L_089CCF6C;
    return;
L_089CCF6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 16384u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089CCFA8;
L_089CCFA8:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCF0C;
      }
      goto L_089CCFB4;
    }
L_089CCFB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[3]));
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
L_089CD004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[20] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[19] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 256u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, 4608u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 511u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, 1029u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0AC;
      }
      goto L_089CD0A0;
    }
L_089CD0A0:
    ctx.set_gpr(18, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0B0;
      }
      goto L_089CD0AC;
    }
L_089CD0AC:
    ctx.set_gpr(18, 0u + 0u);
    goto L_089CD0B0;
L_089CD0B0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0C4;
      }
      goto L_089CD0B8;
    }
L_089CD0B8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0C8;
      }
      goto L_089CD0C4;
    }
L_089CD0C4:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_089CD0C8;
L_089CD0C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD14C;
      }
      goto L_089CD0D0;
    }
L_089CD0D0:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(22, ctx.gpr[2] << 2u);
    ctx.set_gpr(16, ctx.gpr[22] + ctx.gpr[21]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089CD108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089CD108u) goto L_089CD108;
    return;
L_089CD108:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[17]);
    goto L_089CD14C;
L_089CD14C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0D0;
      }
      goto L_089CD154;
    }
L_089CD154:
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
L_089CD180:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD1B0;
      }
      goto L_089CD1A4;
    }
L_089CD1A4:
    ctx.set_gpr(31, 0x089CD1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CD1ACu) goto L_089CD1AC;
    return;
L_089CD1AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_089CD1B0;
L_089CD1B0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CD1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089CD1C8u) goto L_089CD1C8;
    return;
L_089CD1C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CD1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD218;
      }
      goto L_089CD20C;
    }
L_089CD20C:
    ctx.set_gpr(31, 0x089CD214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CD214u) goto L_089CD214;
    return;
L_089CD214:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_089CD218;
L_089CD218:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089CD228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 138u, 0x089BCCF4u>(ctx, &aot_mem) && ctx.pc == 0x089CD228u) goto L_089CD228;
    return;
L_089CD228:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CD258u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CD258u) goto L_089CD258;
    return;
L_089CD258:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089CD268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 138u, 0x089BCCF4u>(ctx, &aot_mem) && ctx.pc == 0x089CD268u) goto L_089CD268;
    return;
L_089CD268:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CD274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 587u, 0x089F7360u>(ctx, &aot_mem) && ctx.pc == 0x089CD274u) goto L_089CD274;
    return;
L_089CD274:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CD284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD284u) goto L_089CD284;
    return;
L_089CD284:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089CD2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD2ACu) goto L_089CD2AC;
    return;
L_089CD2AC:
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089CD2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD2D0u) goto L_089CD2D0;
    return;
L_089CD2D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089CD2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD2F4u) goto L_089CD2F4;
    return;
L_089CD2F4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089CD318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD318u) goto L_089CD318;
    return;
L_089CD318:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089CD33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD33Cu) goto L_089CD33C;
    return;
L_089CD33C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089CD360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CD360u) goto L_089CD360;
    return;
L_089CD360:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CD378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[29]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD4DC;
      }
      goto L_089CD3EC;
    }
L_089CD3EC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD440;
      }
      goto L_089CD3F8;
    }
L_089CD3F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[22]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CD41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 749u, 0x089FBB34u>(ctx, &aot_mem) && ctx.pc == 0x089CD41Cu) goto L_089CD41C;
    return;
L_089CD41C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD43C;
      }
      goto L_089CD424;
    }
L_089CD424:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[22]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089CD43C;
L_089CD43C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089CD440;
L_089CD440:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD3F8;
      }
      goto L_089CD44C;
    }
L_089CD44C:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089CD4DC;
L_089CD4DC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD3EC;
      }
      goto L_089CD4E8;
    }
L_089CD4E8:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD510;
      }
      goto L_089CD4F8;
    }
L_089CD4F8:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD4F8;
      }
      goto L_089CD510;
    }
L_089CD510:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[7] & 273u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[7] & 546u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[7] & 1092u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[7] & 2184u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(273));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CD564;
      }
      goto L_089CD540;
    }
L_089CD540:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(546));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CD564;
      }
      goto L_089CD54C;
    }
L_089CD54C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1092));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CD564;
      }
      goto L_089CD558;
    }
L_089CD558:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2184));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CD570;
      }
      goto L_089CD564;
    }
L_089CD564:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB24;
      }
      goto L_089CD570;
    }
L_089CD570:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB20;
      }
      goto L_089CD578;
    }
L_089CD578:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB0C;
      }
      goto L_089CD588;
    }
L_089CD588:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(560)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB08;
      }
      goto L_089CD59C;
    }
L_089CD59C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_089CD5A0;
L_089CD5A0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    // nop
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD5A0;
      }
      goto L_089CD5B8;
    }
L_089CD5B8:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(9, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA50;
      }
      goto L_089CD5E8;
    }
L_089CD5E8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[6] << 2u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[11] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[9] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.fpr[6] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[6] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CD6F8;
      }
      goto L_089CD664;
    }
L_089CD664:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CD6F8;
      }
      goto L_089CD674;
    }
L_089CD674:
    ctx.set_gpr(7, ctx.gpr[3] << 1u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[29]);
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA44;
      }
      goto L_089CD6F8;
    }
L_089CD6F8:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[6] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CD864;
      }
      goto L_089CD70C;
    }
L_089CD70C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CD864;
      }
      goto L_089CD71C;
    }
L_089CD71C:
    ctx.fpr[1] = ctx.fpr[6] - ctx.fpr[2];
    ctx.fpr[12] = ctx.fpr[6] / ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpr_bits(2) ^ 0x80000000u);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[19] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[27] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(24, 0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(19, 0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(18, 0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(17, 0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(16, 0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[27]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(11, 0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(10, 0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(9, 0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(8, 0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[11] = ctx.fpr[23] + ctx.fpr[11];
    ctx.fpr[10] = ctx.fpr[22] + ctx.fpr[10];
    ctx.fpr[9] = ctx.fpr[21] + ctx.fpr[9];
    ctx.fpr[8] = ctx.fpr[20] + ctx.fpr[8];
    ctx.fpr[7] = ctx.fpr[19] + ctx.fpr[7];
    ctx.fpr[6] = ctx.fpr[18] + ctx.fpr[6];
    ctx.fpr[5] = ctx.fpr[17] + ctx.fpr[5];
    ctx.fpr[4] = ctx.fpr[16] + ctx.fpr[4];
    ctx.fpr[3] = ctx.fpr[15] + ctx.fpr[3];
    ctx.fpr[2] = ctx.fpr[14] + ctx.fpr[2];
    ctx.fpr[1] = ctx.fpr[13] + ctx.fpr[1];
    ctx.set_gpr(7, ctx.gpr[3] << 1u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[29]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA44;
      }
      goto L_089CD864;
    }
L_089CD864:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[6]) || std::isnan(ctx.fpr[0])) || ctx.fpr[6] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CDA44;
      }
      goto L_089CD878;
    }
L_089CD878:
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CDA44;
      }
      goto L_089CD888;
    }
L_089CD888:
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[6];
    ctx.set_fpr_bits(0, ctx.fpr_bits(6) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[2] / ctx.fpr[1];
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    ctx.fpr[30] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(48)));
    ctx.fpr[29] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[27] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(19, 0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(18, 0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[29]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(17, 0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(16, 0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[27]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(31, 0x7FC00000u); else ctx.fpr[31] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(31, 0x7FC00000u); else ctx.fpr[31] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(31, 0x7FC00000u); else ctx.fpr[31] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(11, 0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(10, 0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(9, 0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(8, 0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(30, 0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[11] + ctx.fpr[20];
    ctx.fpr[10] = ctx.fpr[10] + ctx.fpr[19];
    ctx.fpr[9] = ctx.fpr[9] + ctx.fpr[18];
    ctx.fpr[8] = ctx.fpr[8] + ctx.fpr[17];
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[16];
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[15];
    ctx.fpr[11] = ctx.fpr[5] + ctx.fpr[14];
    ctx.fpr[5] = ctx.fpr[4] + ctx.fpr[13];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[4] = ctx.fpr[3] + ctx.fpr[4];
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[3] = ctx.fpr[2] + ctx.fpr[3];
    ctx.set_fpr_bits(2, ctx.fpr_bits(31));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = ctx.fpr[30] + ctx.fpr[12];
    ctx.set_gpr(7, ctx.gpr[3] << 1u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[29]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(92));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[8] << 1u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[29]);
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[29]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    goto L_089CDA44;
L_089CDA44:
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CDA50;
L_089CDA50:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD5E8;
      }
      goto L_089CDA5C;
    }
L_089CDA5C:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB18;
      }
      goto L_089CDA68;
    }
L_089CDA68:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDAFC;
      }
      goto L_089CDA74;
    }
L_089CDA74:
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[29]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CDAFC;
L_089CDAFC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDA74;
      }
      goto L_089CDB08;
    }
L_089CDB08:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089CDB0C;
L_089CDB0C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD588;
      }
      goto L_089CDB18;
    }
L_089CDB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB24;
      }
      goto L_089CDB20;
    }
L_089CDB20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_089CDB24;
L_089CDB24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[31] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[30] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[29] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[27] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(576));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CDB80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-576));
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
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDBE4;
      }
      goto L_089CDBC0;
    }
L_089CDBC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CDBDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CDBDCu) goto L_089CDBDC;
    return;
L_089CDBDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC40;
      }
      goto L_089CDBE4;
    }
L_089CDBE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(204), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CDC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 613u, 0x089CB934u>(ctx, &aot_mem) && ctx.pc == 0x089CDC08u) goto L_089CDC08;
    return;
L_089CDC08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC24;
      }
      goto L_089CDC10;
    }
L_089CDC10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CDC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 609u, 0x089CB8B8u>(ctx, &aot_mem) && ctx.pc == 0x089CDC1Cu) goto L_089CDC1C;
    return;
L_089CDC1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC40;
      }
      goto L_089CDC24;
    }
L_089CDC24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_089CDC40;
L_089CDC40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CDC54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CDC54u) goto L_089CDC54;
    return;
L_089CDC54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(217)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC7C;
      }
      goto L_089CDC64;
    }
L_089CDC64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC7C;
      }
      goto L_089CDC70;
    }
L_089CDC70:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE1F8;
      }
      goto L_089CDC7C;
    }
L_089CDC7C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CDC94;
      }
      goto L_089CDC88;
    }
L_089CDC88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CE1D4;
      }
      goto L_089CDC94;
    }
L_089CDC94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCC0;
      }
      goto L_089CDCB4;
    }
L_089CDCB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089CDCC0;
L_089CDCC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CDCD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CDCD8u) goto L_089CDCD8;
    return;
L_089CDCD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDCEC;
      }
      goto L_089CDCE4;
    }
L_089CDCE4:
    ctx.set_gpr(31, 0x089CDCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089CDCECu) goto L_089CDCEC;
    return;
L_089CDCEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] & 6144u);
    ctx.set_gpr(2, 0u < ctx.gpr[4] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29296));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29292));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[30] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD6C;
      }
      goto L_089CDD5C;
    }
L_089CDD5C:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD74;
      }
      goto L_089CDD6C;
    }
L_089CDD6C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, 0u + 0u);
    goto L_089CDD74;
L_089CDD74:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(22, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE1A0;
      }
      goto L_089CDD8C;
    }
L_089CDD8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE0F8;
      }
      goto L_089CDDA0;
    }
L_089CDDA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDDB8;
      }
      goto L_089CDDB4;
    }
L_089CDDB4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    goto L_089CDDB8;
L_089CDDB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CDDF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CDDF0u) goto L_089CDDF0;
    return;
L_089CDDF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDE04;
      }
      goto L_089CDDF8;
    }
L_089CDDF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE1F8;
      }
      goto L_089CDE04;
    }
L_089CDE04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDEA8;
      }
      goto L_089CDE10;
    }
L_089CDE10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089CDE20u);
    // nop
    goto L_089CC784;
L_089CDE20:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CDE50u);
    // nop
    goto L_089CC784;
L_089CDE50:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CDE80u);
    // nop
    goto L_089CC784;
L_089CDE80:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDEC0;
      }
      goto L_089CDEA8;
    }
L_089CDEA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(104));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[2]);
    goto L_089CDEC0;
L_089CDEC0:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_089CDEC8;
L_089CDEC8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(564));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDEC8;
      }
      goto L_089CDEE0;
    }
L_089CDEE0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE048;
      }
      goto L_089CDEEC;
    }
L_089CDEEC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(564));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CDF10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CDF10u) goto L_089CDF10;
    return;
L_089CDF10:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDF2C;
      }
      goto L_089CDF20;
    }
L_089CDF20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDFE4;
      }
      goto L_089CDF2C;
    }
L_089CDF2C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDFB0;
      }
      goto L_089CDF38;
    }
L_089CDF38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDF90;
      }
      goto L_089CDF44;
    }
L_089CDF44:
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDF90;
      }
      goto L_089CDF50;
    }
L_089CDF50:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CDF8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CDF8Cu) goto L_089CDF8C;
    return;
L_089CDF8C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089CDF90;
L_089CDF90:
    ctx.set_gpr(3, ctx.gpr[22] - ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CDFACu);
    // nop
    goto L_089CE22C;
L_089CDFAC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    goto L_089CDFB0;
L_089CDFB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDFF0;
      }
      goto L_089CDFBC;
    }
L_089CDFBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CDFDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CDFDCu) goto L_089CDFDC;
    return;
L_089CDFDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDFF0;
      }
      goto L_089CDFE4;
    }
L_089CDFE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CDFF0;
      }
      goto L_089CDFEC;
    }
L_089CDFEC:
    ctx.set_gpr(16, ctx.gpr[22] + 0u);
    goto L_089CDFF0;
L_089CDFF0:
    ctx.set_gpr(2, ctx.gpr[30] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[30]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[30]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[22] + ctx.gpr[30]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_089CE048;
L_089CE048:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDEEC;
      }
      goto L_089CE05C;
    }
L_089CE05C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE0C0;
      }
      goto L_089CE068;
    }
L_089CE068:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE0C0;
      }
      goto L_089CE074;
    }
L_089CE074:
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE0C0;
      }
      goto L_089CE080;
    }
L_089CE080:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CE0BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE0BCu) goto L_089CE0BC;
    return;
L_089CE0BC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089CE0C0;
L_089CE0C0:
    ctx.set_gpr(3, ctx.gpr[22] - ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CE0DCu);
    // nop
    goto L_089CE22C;
L_089CE0DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[2]);
    goto L_089CE0F8;
L_089CE0F8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDDA0;
      }
      goto L_089CE104;
    }
L_089CE104:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE158;
      }
      goto L_089CE118;
    }
L_089CE118:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CE14Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE14Cu) goto L_089CE14C;
    return;
L_089CE14C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE1A0;
      }
      goto L_089CE158;
    }
L_089CE158:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(217)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE1A0;
      }
      goto L_089CE168;
    }
L_089CE168:
    ctx.set_gpr(31, 0x089CE170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 603u, 0x089CB840u>(ctx, &aot_mem) && ctx.pc == 0x089CE170u) goto L_089CE170;
    return;
L_089CE170:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CE17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 613u, 0x089CB934u>(ctx, &aot_mem) && ctx.pc == 0x089CE17Cu) goto L_089CE17C;
    return;
L_089CE17C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE1A0;
      }
      goto L_089CE184;
    }
L_089CE184:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    goto L_089CE1A0;
L_089CE1A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDD8C;
      }
      goto L_089CE1B0;
    }
L_089CE1B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 2816u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE1F8;
      }
      goto L_089CE1D4;
    }
L_089CE1D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CE1F4;
      }
      goto L_089CE1E0;
    }
L_089CE1E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE1F8;
      }
      goto L_089CE1F4;
    }
L_089CE1F4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089CE1F8;
L_089CE1F8:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(576));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE22C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CE23C;
      }
      goto L_089CE234;
    }
L_089CE234:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE244;
      }
      goto L_089CE23C;
    }
L_089CE23C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE2C4;
      }
      goto L_089CE244;
    }
L_089CE244:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[8] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(5, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[8] << 8u);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(3, 256u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 4608u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 1024u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_089CE2C4;
L_089CE2C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE2CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089CE2F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 103u, 0x089BCA48u>(ctx, &aot_mem) && ctx.pc == 0x089CE2F0u) goto L_089CE2F0;
    return;
L_089CE2F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32169), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CE304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 127u, 0x089E0A48u>(ctx, &aot_mem) && ctx.pc == 0x089CE304u) goto L_089CE304;
    return;
L_089CE304:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CE310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 565u, 0x089D30DCu>(ctx, &aot_mem) && ctx.pc == 0x089CE310u) goto L_089CE310;
    return;
L_089CE310:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13044));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x089CE330u);
    // nop
    ctx.pc = 0x08B0DD44u;
    return;
L_089CE330:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(376), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CE348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CE348u) goto L_089CE348;
    return;
L_089CE348:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13024));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CE36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089CE36Cu) goto L_089CE36C;
    return;
L_089CE36C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CE378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x089BCDF4u>(ctx, &aot_mem) && ctx.pc == 0x089CE378u) goto L_089CE378;
    return;
L_089CE378:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CE388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem) && ctx.pc == 0x089CE388u) goto L_089CE388;
    return;
L_089CE388:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE4C8;
      }
      goto L_089CE390;
    }
L_089CE390:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE3D4;
      }
      goto L_089CE3AC;
    }
L_089CE3AC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089CE3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089CE3B8u) goto L_089CE3B8;
    return;
L_089CE3B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE3CC;
      }
      goto L_089CE3C0;
    }
L_089CE3C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CE3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089CE3CCu) goto L_089CE3CC;
    return;
L_089CE3CC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089CE3D4;
L_089CE3D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CE3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089CE3E8u) goto L_089CE3E8;
    return;
L_089CE3E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE410;
      }
      goto L_089CE3FC;
    }
L_089CE3FC:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089CE408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE408u) goto L_089CE408;
    return;
L_089CE408:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CE410;
L_089CE410:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE428;
      }
      goto L_089CE418;
    }
L_089CE418:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CE428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CE428u) goto L_089CE428;
    return;
L_089CE428:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE438;
      }
      goto L_089CE434;
    }
L_089CE434:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_089CE438;
L_089CE438:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089CE444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089CE444u) goto L_089CE444;
    return;
L_089CE444:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CE468u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE468u) goto L_089CE468;
    return;
L_089CE468:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CE488u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE488u) goto L_089CE488;
    return;
L_089CE488:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[18]));
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE4B8;
      }
      goto L_089CE4A4;
    }
L_089CE4A4:
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CE4B8;
L_089CE4B8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE4A4;
      }
      goto L_089CE4C4;
    }
L_089CE4C4:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_089CE4C8;
L_089CE4C8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(396), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CE4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CE4E4u) goto L_089CE4E4;
    return;
L_089CE4E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13000));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CE508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089CE508u) goto L_089CE508;
    return;
L_089CE508:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CE514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089CE514u) goto L_089CE514;
    return;
L_089CE514:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CE524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem) && ctx.pc == 0x089CE524u) goto L_089CE524;
    return;
L_089CE524:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE664;
      }
      goto L_089CE52C;
    }
L_089CE52C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE570;
      }
      goto L_089CE548;
    }
L_089CE548:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089CE554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089CE554u) goto L_089CE554;
    return;
L_089CE554:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE568;
      }
      goto L_089CE55C;
    }
L_089CE55C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CE568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089CE568u) goto L_089CE568;
    return;
L_089CE568:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089CE570;
L_089CE570:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CE584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089CE584u) goto L_089CE584;
    return;
L_089CE584:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE5AC;
      }
      goto L_089CE598;
    }
L_089CE598:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089CE5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE5A4u) goto L_089CE5A4;
    return;
L_089CE5A4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CE5AC;
L_089CE5AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE5C4;
      }
      goto L_089CE5B4;
    }
L_089CE5B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CE5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CE5C4u) goto L_089CE5C4;
    return;
L_089CE5C4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE5D4;
      }
      goto L_089CE5D0;
    }
L_089CE5D0:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_089CE5D4;
L_089CE5D4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089CE5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089CE5E0u) goto L_089CE5E0;
    return;
L_089CE5E0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CE604u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE604u) goto L_089CE604;
    return;
L_089CE604:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CE624u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE624u) goto L_089CE624;
    return;
L_089CE624:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[18]));
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE654;
      }
      goto L_089CE640;
    }
L_089CE640:
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CE654;
L_089CE654:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE640;
      }
      goto L_089CE660;
    }
L_089CE660:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_089CE664;
L_089CE664:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CE674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE674u) goto L_089CE674;
    return;
L_089CE674:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CE684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem) && ctx.pc == 0x089CE684u) goto L_089CE684;
    return;
L_089CE684:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CE698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CE698u) goto L_089CE698;
    return;
L_089CE698:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12972));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CE6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089CE6BCu) goto L_089CE6BC;
    return;
L_089CE6BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CE6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089CE6C8u) goto L_089CE6C8;
    return;
L_089CE6C8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CE6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem) && ctx.pc == 0x089CE6D8u) goto L_089CE6D8;
    return;
L_089CE6D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE818;
      }
      goto L_089CE6E0;
    }
L_089CE6E0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE724;
      }
      goto L_089CE6FC;
    }
L_089CE6FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089CE708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089CE708u) goto L_089CE708;
    return;
L_089CE708:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE71C;
      }
      goto L_089CE710;
    }
L_089CE710:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CE71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089CE71Cu) goto L_089CE71C;
    return;
L_089CE71C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089CE724;
L_089CE724:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CE738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089CE738u) goto L_089CE738;
    return;
L_089CE738:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE760;
      }
      goto L_089CE74C;
    }
L_089CE74C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089CE758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE758u) goto L_089CE758;
    return;
L_089CE758:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CE760;
L_089CE760:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE778;
      }
      goto L_089CE768;
    }
L_089CE768:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CE778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CE778u) goto L_089CE778;
    return;
L_089CE778:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE788;
      }
      goto L_089CE784;
    }
L_089CE784:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_089CE788;
L_089CE788:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089CE794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089CE794u) goto L_089CE794;
    return;
L_089CE794:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CE7B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE7B8u) goto L_089CE7B8;
    return;
L_089CE7B8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CE7D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE7D8u) goto L_089CE7D8;
    return;
L_089CE7D8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[18]));
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE808;
      }
      goto L_089CE7F4;
    }
L_089CE7F4:
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CE808;
L_089CE808:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE7F4;
      }
      goto L_089CE814;
    }
L_089CE814:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_089CE818;
L_089CE818:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(428), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CE82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CE82Cu) goto L_089CE82C;
    return;
L_089CE82C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12940));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CE850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089CE850u) goto L_089CE850;
    return;
L_089CE850:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CE85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089CE85Cu) goto L_089CE85C;
    return;
L_089CE85C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CE86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem) && ctx.pc == 0x089CE86Cu) goto L_089CE86C;
    return;
L_089CE86C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE9AC;
      }
      goto L_089CE874;
    }
L_089CE874:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE8B8;
      }
      goto L_089CE890;
    }
L_089CE890:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089CE89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089CE89Cu) goto L_089CE89C;
    return;
L_089CE89C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE8B0;
      }
      goto L_089CE8A4;
    }
L_089CE8A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CE8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089CE8B0u) goto L_089CE8B0;
    return;
L_089CE8B0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089CE8B8;
L_089CE8B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CE8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089CE8CCu) goto L_089CE8CC;
    return;
L_089CE8CC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE8F4;
      }
      goto L_089CE8E0;
    }
L_089CE8E0:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089CE8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CE8ECu) goto L_089CE8EC;
    return;
L_089CE8EC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CE8F4;
L_089CE8F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE90C;
      }
      goto L_089CE8FC;
    }
L_089CE8FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CE90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CE90Cu) goto L_089CE90C;
    return;
L_089CE90C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE91C;
      }
      goto L_089CE918;
    }
L_089CE918:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_089CE91C;
L_089CE91C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089CE928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089CE928u) goto L_089CE928;
    return;
L_089CE928:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(108));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CE94Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE94Cu) goto L_089CE94C;
    return;
L_089CE94C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CE96Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CE96Cu) goto L_089CE96C;
    return;
L_089CE96C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[18]));
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE99C;
      }
      goto L_089CE988;
    }
L_089CE988:
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CE99C;
L_089CE99C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE988;
      }
      goto L_089CE9A8;
    }
L_089CE9A8:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_089CE9AC;
L_089CE9AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CE9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CE9B8u) goto L_089CE9B8;
    return;
L_089CE9B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12908));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(840));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CE9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x089CE9DCu) goto L_089CE9DC;
    return;
L_089CE9DC:
    ctx.set_gpr(31, 0x089CE9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CE9E4u) goto L_089CE9E4;
    return;
L_089CE9E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12876));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(476));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CEA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x089CEA08u) goto L_089CEA08;
    return;
L_089CEA08:
    ctx.set_gpr(31, 0x089CEA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CEA10u) goto L_089CEA10;
    return;
L_089CEA10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12860));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(477));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(477)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CEA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x089CEA34u) goto L_089CEA34;
    return;
L_089CEA34:
    ctx.set_gpr(31, 0x089CEA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CEA3Cu) goto L_089CEA3C;
    return;
L_089CEA3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12848));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(478));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(478)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CEA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x089CEA60u) goto L_089CEA60;
    return;
L_089CEA60:
    ctx.set_gpr(31, 0x089CEA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CEA68u) goto L_089CEA68;
    return;
L_089CEA68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12828));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(484));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CEA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089CEA8Cu) goto L_089CEA8C;
    return;
L_089CEA8C:
    ctx.set_gpr(31, 0x089CEA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CEA94u) goto L_089CEA94;
    return;
L_089CEA94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12800));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(504));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CEAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089CEAB8u) goto L_089CEAB8;
    return;
L_089CEAB8:
    ctx.set_gpr(31, 0x089CEAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CEAC0u) goto L_089CEAC0;
    return;
L_089CEAC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12764));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(480));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CEAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089CEAE4u) goto L_089CEAE4;
    return;
L_089CEAE4:
    ctx.set_gpr(31, 0x089CEAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CEAECu) goto L_089CEAEC;
    return;
L_089CEAEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12744));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(900));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CEB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089CEB10u) goto L_089CEB10;
    return;
L_089CEB10:
    ctx.set_gpr(31, 0x089CEB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CEB18u) goto L_089CEB18;
    return;
L_089CEB18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12708));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(904));
    ctx.set_gpr(8, 4u << 16u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CEB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089CEB3Cu) goto L_089CEB3C;
    return;
L_089CEB3C:
    ctx.set_gpr(31, 0x089CEB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CEB44u) goto L_089CEB44;
    return;
L_089CEB44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12672));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(908));
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CEB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089CEB68u) goto L_089CEB68;
    return;
L_089CEB68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(480)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28640)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28636)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28640), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28636), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(492), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CEBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 498u, 0x089D2C00u>(ctx, &aot_mem) && ctx.pc == 0x089CEBB4u) goto L_089CEBB4;
    return;
L_089CEBB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(556)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CEBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089CEBC4u) goto L_089CEBC4;
    return;
L_089CEBC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12636));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(556));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089CEBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 576u, 0x08A7B4F8u>(ctx, &aot_mem) && ctx.pc == 0x089CEBE8u) goto L_089CEBE8;
    return;
L_089CEBE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CEBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089CEBF4u) goto L_089CEBF4;
    return;
L_089CEBF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(556)));
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CEC14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CEC14u) goto L_089CEC14;
    return;
L_089CEC14:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(568), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEC3C;
      }
      goto L_089CEC24;
    }
L_089CEC24:
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CEC3C;
L_089CEC3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(556)));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CEC24;
      }
      goto L_089CEC4C;
    }
L_089CEC4C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CEC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089CEC58u) goto L_089CEC58;
    return;
L_089CEC58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CEC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 557u, 0x08A73498u>(ctx, &aot_mem) && ctx.pc == 0x089CEC64u) goto L_089CEC64;
    return;
L_089CEC64:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(800));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CEC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089CEC74u) goto L_089CEC74;
    return;
L_089CEC74:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CECA0;
      }
      goto L_089CEC8C;
    }
L_089CEC8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CECB4;
      }
      goto L_089CECA0;
    }
L_089CECA0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089CECB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089CECB4u) goto L_089CECB4;
    return;
L_089CECB4:
    ctx.set_gpr(3, ctx.gpr[18] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(31, 0x089CECD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089CECD0u) goto L_089CECD0;
    return;
L_089CECD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CECDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089CECDCu) goto L_089CECDC;
    return;
L_089CECDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CECE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 557u, 0x08A73498u>(ctx, &aot_mem) && ctx.pc == 0x089CECE8u) goto L_089CECE8;
    return;
L_089CECE8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(804));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CECF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089CECF8u) goto L_089CECF8;
    return;
L_089CECF8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CED24;
      }
      goto L_089CED10;
    }
L_089CED10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CED38;
      }
      goto L_089CED24;
    }
L_089CED24:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089CED38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089CED38u) goto L_089CED38;
    return;
L_089CED38:
    ctx.set_gpr(3, ctx.gpr[18] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(31, 0x089CED54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089CED54u) goto L_089CED54;
    return;
L_089CED54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CED60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089CED60u) goto L_089CED60;
    return;
L_089CED60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CED6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 557u, 0x08A73498u>(ctx, &aot_mem) && ctx.pc == 0x089CED6Cu) goto L_089CED6C;
    return;
L_089CED6C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(808));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CED7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089CED7Cu) goto L_089CED7C;
    return;
L_089CED7C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEDA8;
      }
      goto L_089CED94;
    }
L_089CED94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEDBC;
      }
      goto L_089CEDA8;
    }
L_089CEDA8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089CEDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089CEDBCu) goto L_089CEDBC;
    return;
L_089CEDBC:
    ctx.set_gpr(3, ctx.gpr[18] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(31, 0x089CEDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089CEDD8u) goto L_089CEDD8;
    return;
L_089CEDD8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CEDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089CEDE4u) goto L_089CEDE4;
    return;
L_089CEDE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CEDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 557u, 0x08A73498u>(ctx, &aot_mem) && ctx.pc == 0x089CEDF0u) goto L_089CEDF0;
    return;
L_089CEDF0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(812));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CEE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089CEE00u) goto L_089CEE00;
    return;
L_089CEE00:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(812)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEE2C;
      }
      goto L_089CEE18;
    }
L_089CEE18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEE40;
      }
      goto L_089CEE2C;
    }
L_089CEE2C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089CEE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089CEE40u) goto L_089CEE40;
    return;
L_089CEE40:
    ctx.set_gpr(3, ctx.gpr[18] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(31, 0x089CEE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089CEE5Cu) goto L_089CEE5C;
    return;
L_089CEE5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CEE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089CEE68u) goto L_089CEE68;
    return;
L_089CEE68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CEE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 102u, 0x08A709ACu>(ctx, &aot_mem) && ctx.pc == 0x089CEE74u) goto L_089CEE74;
    return;
L_089CEE74:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(820));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CEE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089CEE84u) goto L_089CEE84;
    return;
L_089CEE84:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEEA0;
      }
      goto L_089CEE90;
    }
L_089CEE90:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(444), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CEEA0;
L_089CEEA0:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CEE90;
      }
      goto L_089CEEAC;
    }
L_089CEEAC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CEEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089CEEBCu) goto L_089CEEBC;
    return;
L_089CEEBC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CEECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089CEECCu) goto L_089CEECC;
    return;
L_089CEECC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(572), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(576), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(580), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CEEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 134u, 0x089C8EB4u>(ctx, &aot_mem) && ctx.pc == 0x089CEEF8u) goto L_089CEEF8;
    return;
L_089CEEF8:
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
L_089CEF18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27364));
    ctx.set_gpr(31, 0x089CEF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 602u, 0x089CB790u>(ctx, &aot_mem) && ctx.pc == 0x089CEF40u) goto L_089CEF40;
    return;
L_089CEF40:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27128));
    ctx.set_gpr(31, 0x089CEF50u);
    // nop
    goto L_089CCD3C;
L_089CEF50:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27404));
    ctx.set_gpr(31, 0x089CEF60u);
    // nop
    goto L_089CD180;
L_089CEF60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF008;
      }
      goto L_089CEF74;
    }
L_089CEF74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEFE0;
      }
      goto L_089CEF88;
    }
L_089CEF88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CEFE0;
      }
      goto L_089CEF90;
    }
L_089CEF90:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEFC4;
      }
      goto L_089CEF9C;
    }
L_089CEF9C:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CEFC0;
      }
      goto L_089CEFB4;
    }
L_089CEFB4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEFE4;
      }
      goto L_089CEFC0;
    }
L_089CEFC0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089CEFC4;
L_089CEFC4:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CEF9C;
      }
      goto L_089CEFD4;
    }
L_089CEFD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEFE4;
      }
      goto L_089CEFE0;
    }
L_089CEFE0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089CEFE4;
L_089CEFE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF004;
      }
      goto L_089CEFEC;
    }
L_089CEFEC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(304)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CF004u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CF004u) goto L_089CF004;
    return;
L_089CF004:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_089CF008;
L_089CF008:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEF74;
      }
      goto L_089CF014;
    }
L_089CF014:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF030;
      }
      goto L_089CF020;
    }
L_089CF020:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(444), 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089CF030;
L_089CF030:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF020;
      }
      goto L_089CF03C;
    }
L_089CF03C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF140;
      }
      goto L_089CF048;
    }
L_089CF048:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF080;
      }
      goto L_089CF058;
    }
L_089CF058:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089CF064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089CF064u) goto L_089CF064;
    return;
L_089CF064:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF078;
      }
      goto L_089CF06C;
    }
L_089CF06C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CF078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089CF078u) goto L_089CF078;
    return;
L_089CF078:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089CF080;
L_089CF080:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CF094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089CF094u) goto L_089CF094;
    return;
L_089CF094:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF0BC;
      }
      goto L_089CF0A8;
    }
L_089CF0A8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089CF0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF0B4u) goto L_089CF0B4;
    return;
L_089CF0B4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CF0BC;
L_089CF0BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF0D4;
      }
      goto L_089CF0C4;
    }
L_089CF0C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CF0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CF0D4u) goto L_089CF0D4;
    return;
L_089CF0D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089CF0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CF0E4u) goto L_089CF0E4;
    return;
L_089CF0E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089CF0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CF0F0u) goto L_089CF0F0;
    return;
L_089CF0F0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF134;
      }
      goto L_089CF0FC;
    }
L_089CF0FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF11C;
      }
      goto L_089CF10C;
    }
L_089CF10C:
    ctx.set_gpr(31, 0x089CF114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF114u) goto L_089CF114;
    return;
L_089CF114:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CF11C;
L_089CF11C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF134;
      }
      goto L_089CF124;
    }
L_089CF124:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CF134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CF134u) goto L_089CF134;
    return;
L_089CF134:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089CF140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem) && ctx.pc == 0x089CF140u) goto L_089CF140;
    return;
L_089CF140:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF158;
      }
      goto L_089CF150;
    }
L_089CF150:
    ctx.set_gpr(31, 0x089CF158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem) && ctx.pc == 0x089CF158u) goto L_089CF158;
    return;
L_089CF158:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF204;
      }
      goto L_089CF170;
    }
L_089CF170:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF1DC;
      }
      goto L_089CF184;
    }
L_089CF184:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CF1DC;
      }
      goto L_089CF18C;
    }
L_089CF18C:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF1C0;
      }
      goto L_089CF198;
    }
L_089CF198:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CF1BC;
      }
      goto L_089CF1B0;
    }
L_089CF1B0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF1E0;
      }
      goto L_089CF1BC;
    }
L_089CF1BC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089CF1C0;
L_089CF1C0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF198;
      }
      goto L_089CF1D0;
    }
L_089CF1D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF1E0;
      }
      goto L_089CF1DC;
    }
L_089CF1DC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089CF1E0;
L_089CF1E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF200;
      }
      goto L_089CF1E8;
    }
L_089CF1E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(796)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CF200u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CF200u) goto L_089CF200;
    return;
L_089CF200:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_089CF204;
L_089CF204:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF170;
      }
      goto L_089CF210;
    }
L_089CF210:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF314;
      }
      goto L_089CF21C;
    }
L_089CF21C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF254;
      }
      goto L_089CF22C;
    }
L_089CF22C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089CF238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089CF238u) goto L_089CF238;
    return;
L_089CF238:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF24C;
      }
      goto L_089CF240;
    }
L_089CF240:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CF24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089CF24Cu) goto L_089CF24C;
    return;
L_089CF24C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089CF254;
L_089CF254:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CF268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089CF268u) goto L_089CF268;
    return;
L_089CF268:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF290;
      }
      goto L_089CF27C;
    }
L_089CF27C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089CF288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF288u) goto L_089CF288;
    return;
L_089CF288:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CF290;
L_089CF290:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF2A8;
      }
      goto L_089CF298;
    }
L_089CF298:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CF2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CF2A8u) goto L_089CF2A8;
    return;
L_089CF2A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089CF2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CF2B8u) goto L_089CF2B8;
    return;
L_089CF2B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089CF2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CF2C4u) goto L_089CF2C4;
    return;
L_089CF2C4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF308;
      }
      goto L_089CF2D0;
    }
L_089CF2D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF2F0;
      }
      goto L_089CF2E0;
    }
L_089CF2E0:
    ctx.set_gpr(31, 0x089CF2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF2E8u) goto L_089CF2E8;
    return;
L_089CF2E8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CF2F0;
L_089CF2F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF308;
      }
      goto L_089CF2F8;
    }
L_089CF2F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CF308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CF308u) goto L_089CF308;
    return;
L_089CF308:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089CF314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem) && ctx.pc == 0x089CF314u) goto L_089CF314;
    return;
L_089CF314:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(428), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CF324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 218u, 0x089E1330u>(ctx, &aot_mem) && ctx.pc == 0x089CF324u) goto L_089CF324;
    return;
L_089CF324:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF3CC;
      }
      goto L_089CF338;
    }
L_089CF338:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF3A4;
      }
      goto L_089CF34C;
    }
L_089CF34C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CF3A4;
      }
      goto L_089CF354;
    }
L_089CF354:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF388;
      }
      goto L_089CF360;
    }
L_089CF360:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CF384;
      }
      goto L_089CF378;
    }
L_089CF378:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF3A8;
      }
      goto L_089CF384;
    }
L_089CF384:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089CF388;
L_089CF388:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF360;
      }
      goto L_089CF398;
    }
L_089CF398:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF3A8;
      }
      goto L_089CF3A4;
    }
L_089CF3A4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089CF3A8;
L_089CF3A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF3C8;
      }
      goto L_089CF3B0;
    }
L_089CF3B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CF3C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CF3C8u) goto L_089CF3C8;
    return;
L_089CF3C8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_089CF3CC;
L_089CF3CC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF338;
      }
      goto L_089CF3D8;
    }
L_089CF3D8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF4DC;
      }
      goto L_089CF3E4;
    }
L_089CF3E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF41C;
      }
      goto L_089CF3F4;
    }
L_089CF3F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089CF400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089CF400u) goto L_089CF400;
    return;
L_089CF400:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF414;
      }
      goto L_089CF408;
    }
L_089CF408:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CF414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089CF414u) goto L_089CF414;
    return;
L_089CF414:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089CF41C;
L_089CF41C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CF430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089CF430u) goto L_089CF430;
    return;
L_089CF430:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF458;
      }
      goto L_089CF444;
    }
L_089CF444:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089CF450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF450u) goto L_089CF450;
    return;
L_089CF450:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CF458;
L_089CF458:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF470;
      }
      goto L_089CF460;
    }
L_089CF460:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CF470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CF470u) goto L_089CF470;
    return;
L_089CF470:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089CF480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CF480u) goto L_089CF480;
    return;
L_089CF480:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089CF48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CF48Cu) goto L_089CF48C;
    return;
L_089CF48C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF4D0;
      }
      goto L_089CF498;
    }
L_089CF498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF4B8;
      }
      goto L_089CF4A8;
    }
L_089CF4A8:
    ctx.set_gpr(31, 0x089CF4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF4B0u) goto L_089CF4B0;
    return;
L_089CF4B0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CF4B8;
L_089CF4B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF4D0;
      }
      goto L_089CF4C0;
    }
L_089CF4C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CF4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CF4D0u) goto L_089CF4D0;
    return;
L_089CF4D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089CF4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem) && ctx.pc == 0x089CF4DCu) goto L_089CF4DC;
    return;
L_089CF4DC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF508;
      }
      goto L_089CF500;
    }
L_089CF500:
    ctx.set_gpr(31, 0x089CF508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089CF508u) goto L_089CF508;
    return;
L_089CF508:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF530;
      }
      goto L_089CF528;
    }
L_089CF528:
    ctx.set_gpr(31, 0x089CF530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089CF530u) goto L_089CF530;
    return;
L_089CF530:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF558;
      }
      goto L_089CF550;
    }
L_089CF550:
    ctx.set_gpr(31, 0x089CF558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089CF558u) goto L_089CF558;
    return;
L_089CF558:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(812)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF580;
      }
      goto L_089CF578;
    }
L_089CF578:
    ctx.set_gpr(31, 0x089CF580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089CF580u) goto L_089CF580;
    return;
L_089CF580:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF5A8;
      }
      goto L_089CF5A0;
    }
L_089CF5A0:
    ctx.set_gpr(31, 0x089CF5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089CF5A8u) goto L_089CF5A8;
    return;
L_089CF5A8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CF5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 724u, 0x08806DE8u>(ctx, &aot_mem) && ctx.pc == 0x089CF5BCu) goto L_089CF5BC;
    return;
L_089CF5BC:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13048)));
    ctx.set_gpr(31, 0x089CF5CCu);
    // nop
    ctx.pc = 0x08B0DEECu;
    return;
L_089CF5CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF5E4;
      }
      goto L_089CF5D8;
    }
L_089CF5D8:
    ctx.set_gpr(31, 0x089CF5E0u);
    // nop
    ctx.pc = 0x08B0DD94u;
    return;
L_089CF5E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), 0u);
    goto L_089CF5E4;
L_089CF5E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CF5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 504u, 0x089D2CD0u>(ctx, &aot_mem) && ctx.pc == 0x089CF5F0u) goto L_089CF5F0;
    return;
L_089CF5F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CF5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 467u, 0x089D29E0u>(ctx, &aot_mem) && ctx.pc == 0x089CF5FCu) goto L_089CF5FC;
    return;
L_089CF5FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF614;
      }
      goto L_089CF608;
    }
L_089CF608:
    ctx.set_gpr(31, 0x089CF610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CF610u) goto L_089CF610;
    return;
L_089CF610:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(568), 0u);
    goto L_089CF614;
L_089CF614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(896)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF62C;
      }
      goto L_089CF620;
    }
L_089CF620:
    ctx.set_gpr(31, 0x089CF628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CF628u) goto L_089CF628;
    return;
L_089CF628:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(896), 0u);
    goto L_089CF62C;
L_089CF62C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF730;
      }
      goto L_089CF638;
    }
L_089CF638:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF670;
      }
      goto L_089CF648;
    }
L_089CF648:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089CF654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089CF654u) goto L_089CF654;
    return;
L_089CF654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF668;
      }
      goto L_089CF65C;
    }
L_089CF65C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CF668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089CF668u) goto L_089CF668;
    return;
L_089CF668:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089CF670;
L_089CF670:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089CF684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089CF684u) goto L_089CF684;
    return;
L_089CF684:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF6AC;
      }
      goto L_089CF698;
    }
L_089CF698:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089CF6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF6A4u) goto L_089CF6A4;
    return;
L_089CF6A4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CF6AC;
L_089CF6AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF6C4;
      }
      goto L_089CF6B4;
    }
L_089CF6B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CF6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CF6C4u) goto L_089CF6C4;
    return;
L_089CF6C4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089CF6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CF6D4u) goto L_089CF6D4;
    return;
L_089CF6D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089CF6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CF6E0u) goto L_089CF6E0;
    return;
L_089CF6E0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF724;
      }
      goto L_089CF6EC;
    }
L_089CF6EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF70C;
      }
      goto L_089CF6FC;
    }
L_089CF6FC:
    ctx.set_gpr(31, 0x089CF704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF704u) goto L_089CF704;
    return;
L_089CF704:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089CF70C;
L_089CF70C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF724;
      }
      goto L_089CF714;
    }
L_089CF714:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089CF724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089CF724u) goto L_089CF724;
    return;
L_089CF724:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089CF730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem) && ctx.pc == 0x089CF730u) goto L_089CF730;
    return;
L_089CF730:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(396), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28632), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(540)));
    ctx.set_gpr(31, 0x089CF748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF748u) goto L_089CF748;
    return;
L_089CF748:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CF754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089CF754u) goto L_089CF754;
    return;
L_089CF754:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CF76Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CF76Cu) goto L_089CF76C;
    return;
L_089CF76C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.set_gpr(31, 0x089CF778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF778u) goto L_089CF778;
    return;
L_089CF778:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CF784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089CF784u) goto L_089CF784;
    return;
L_089CF784:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CF79Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CF79Cu) goto L_089CF79C;
    return;
L_089CF79C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(31, 0x089CF7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089CF7A8u) goto L_089CF7A8;
    return;
L_089CF7A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CF7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089CF7B4u) goto L_089CF7B4;
    return;
L_089CF7B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CF7CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CF7CCu) goto L_089CF7CC;
    return;
L_089CF7CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CF7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 116u, 0x089BCB94u>(ctx, &aot_mem) && ctx.pc == 0x089CF7D8u) goto L_089CF7D8;
    return;
L_089CF7D8:
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
L_089CF7F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28632), ctx.gpr[16]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1060)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CF82Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CF82Cu) goto L_089CF82C;
    return;
L_089CF82C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CF850;
      }
      goto L_089CF838;
    }
L_089CF838:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    goto L_089CF850;
L_089CF850:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF87C;
      }
      goto L_089CF858;
    }
L_089CF858:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF95C;
      }
      goto L_089CF864;
    }
L_089CF864:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CF95C;
      }
      goto L_089CF870;
    }
L_089CF870:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CF95C;
      }
      goto L_089CF87C;
    }
L_089CF87C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF948;
      }
      goto L_089CF88C;
    }
L_089CF88C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF8F4;
      }
      goto L_089CF89C;
    }
L_089CF89C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CF8F4;
      }
      goto L_089CF8A4;
    }
L_089CF8A4:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF8D8;
      }
      goto L_089CF8B0;
    }
L_089CF8B0:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CF8D4;
      }
      goto L_089CF8C8;
    }
L_089CF8C8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF8F8;
      }
      goto L_089CF8D4;
    }
L_089CF8D4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089CF8D8;
L_089CF8D8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF8B0;
      }
      goto L_089CF8E8;
    }
L_089CF8E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF8F8;
      }
      goto L_089CF8F4;
    }
L_089CF8F4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089CF8F8;
L_089CF8F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF944;
      }
      goto L_089CF900;
    }
L_089CF900:
    ctx.set_gpr(2, ctx.gpr[6] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF938;
      }
      goto L_089CF920;
    }
L_089CF920:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CF938;
      }
      goto L_089CF92C;
    }
L_089CF92C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CF944;
      }
      goto L_089CF938;
    }
L_089CF938:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF95C;
      }
      goto L_089CF944;
    }
L_089CF944:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089CF948;
L_089CF948:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF88C;
      }
      goto L_089CF95C;
    }
L_089CF95C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF970;
      }
      goto L_089CF964;
    }
L_089CF964:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 10u, 0x089D013Cu>(ctx, &aot_mem); return;
      }
      goto L_089CF970;
    }
L_089CF970:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CF988u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CF988u) goto L_089CF988;
    return;
L_089CF988:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CF9A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CF9A4u) goto L_089CF9A4;
    return;
L_089CF9A4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CF9C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CF9C0u) goto L_089CF9C0;
    return;
L_089CF9C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CF9E0;
      }
      goto L_089CF9CC;
    }
L_089CF9CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CF9E0;
      }
      goto L_089CF9D8;
    }
L_089CF9D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_089CFAA8;
      }
      goto L_089CF9E0;
    }
L_089CF9E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(392), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CFA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089CFA00u) goto L_089CFA00;
    return;
L_089CFA00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CFA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089CFA0Cu) goto L_089CFA0C;
    return;
L_089CFA0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 8u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] | 32768u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CFA2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CFA2Cu) goto L_089CFA2C;
    return;
L_089CFA2C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(540), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CFA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089CFA38u) goto L_089CFA38;
    return;
L_089CFA38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CFA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089CFA44u) goto L_089CFA44;
    return;
L_089CFA44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 8u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] | 32768u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CFA64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CFA64u) goto L_089CFA64;
    return;
L_089CFA64:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(544), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CFA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089CFA70u) goto L_089CFA70;
    return;
L_089CFA70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CFA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089CFA7Cu) goto L_089CFA7C;
    return;
L_089CFA7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 4u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] | 16384u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CFA9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CFA9Cu) goto L_089CFA9C;
    return;
L_089CFA9C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(548), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFBBC;
      }
      goto L_089CFAA8;
    }
L_089CFAA8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(392), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(31, 0x089CFAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089CFAC0u) goto L_089CFAC0;
    return;
L_089CFAC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CFACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089CFACCu) goto L_089CFACC;
    return;
L_089CFACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 4u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] | 16384u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CFAECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CFAECu) goto L_089CFAEC;
    return;
L_089CFAEC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(540), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CFAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089CFAF8u) goto L_089CFAF8;
    return;
L_089CFAF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CFB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089CFB04u) goto L_089CFB04;
    return;
L_089CFB04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 4u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] | 16384u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CFB24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CFB24u) goto L_089CFB24;
    return;
L_089CFB24:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(544), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CFB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089CFB30u) goto L_089CFB30;
    return;
L_089CFB30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089CFB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089CFB3Cu) goto L_089CFB3C;
    return;
L_089CFB3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 4u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] | 16384u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CFB5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CFB5Cu) goto L_089CFB5C;
    return;
L_089CFB5C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(548), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CFB88;
      }
      goto L_089CFB6C;
    }
L_089CFB6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(392), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFBBC;
      }
      goto L_089CFB88;
    }
L_089CFB88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CFBAC;
      }
      goto L_089CFB94;
    }
L_089CFB94:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(392), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFBBC;
      }
      goto L_089CFBAC;
    }
L_089CFBAC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(392), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    goto L_089CFBBC;
L_089CFBBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(31, 0x089CFBD0u);
    // nop
    ctx.pc = 0x08B0DF14u;
    return;
L_089CFBD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(540)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(532), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(536), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CFC10;
      }
      goto L_089CFC00;
    }
L_089CFC00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(540)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(544), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(528)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(532), ctx.gpr[2]);
    goto L_089CFC10;
L_089CFC10:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(664), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(480));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(668), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(272));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(672), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089CFC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 449u, 0x089D2760u>(ctx, &aot_mem) && ctx.pc == 0x089CFC34u) goto L_089CFC34;
    return;
L_089CFC34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(492)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(488), ctx.gpr[4]);
    goto L_089CFC3C;
L_089CFC3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(496), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(488)));
    // nop
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CFC3C;
      }
      goto L_089CFC58;
    }
L_089CFC58:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x089CFC6Cu);
    // nop
    ctx.pc = 0x08B0DF1Cu;
    return;
L_089CFC6C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089CFC84u);
    // nop
    ctx.pc = 0x08B0DF24u;
    return;
L_089CFC84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(528)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27848)));
    ctx.set_gpr(3, ctx.gpr[4] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(5, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27848), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27432)));
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(-27844)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2048));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-27844), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27842), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(2, 8192u << 16u);
    ctx.set_gpr(2, ctx.gpr[8] | ctx.gpr[2]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27432), ctx.gpr[2]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-27632)));
    ctx.set_gpr(7, ctx.gpr[7] & 3u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-27632), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(6, 4u << 16u);
    ctx.set_gpr(9, ctx.gpr[7] | ctx.gpr[6]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27424), ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(536)));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-27840)));
    ctx.set_gpr(7, ctx.gpr[8] << 8u);
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27840), ctx.gpr[7]);
    ctx.set_gpr(6, 16384u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] | ctx.gpr[6]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(-27836)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-27836), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27834), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] | ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27432), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(28928));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-28168), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[2] | 4096u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(30592));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-28164), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[4] | 8192u);
    ctx.set_gpr(3, 17264u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28208)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28208), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] | 4u);
    ctx.set_gpr(3, 49928u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28204)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28204), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] | 8u);
    ctx.set_gpr(7, 17664u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28196)));
    ctx.set_gpr(6, (ctx.gpr[7] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28196), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] | 32u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28192)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28192), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] | 64u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32767));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28200)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28200), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] | 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32767));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28188)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28188), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] | 128u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(-28388)));
    ctx.set_gpr(8, 0u & 1023u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1024));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[8]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-28388), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28388)));
    ctx.set_gpr(6, ctx.gpr[8] << 10u);
    ctx.set_gpr(2, 65520u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | 1023u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28388), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27448)));
    ctx.set_gpr(4, 32u << 16u);
    ctx.set_gpr(13, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(-28384)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(479));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[7]);
    ctx.set_gpr(10, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-28384), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28384)));
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(2, ctx.gpr[1] | 15360u);
    ctx.set_gpr(10, ctx.gpr[10] & ctx.gpr[5]);
    ctx.set_gpr(11, ctx.gpr[10] | ctx.gpr[2]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-28384), ctx.gpr[11]);
    ctx.set_gpr(12, 64u << 16u);
    ctx.set_gpr(11, ctx.gpr[13] | ctx.gpr[12]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-27448), ctx.gpr[11]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(-27616), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(11, ctx.gpr[9] | ctx.gpr[12]);
    ctx.set_gpr(10, 0u | 65535u);
    ctx.set_gpr(9, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(-27612), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(9, 128u << 16u);
    ctx.set_gpr(10, ctx.gpr[11] | ctx.gpr[9]);
    ctx.set_gpr(9, 2246u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(-27624)));
    ctx.set_gpr(9, ctx.gpr[9] & ctx.gpr[7]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[8]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-27624), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-27624)));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[5]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[6]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27624), ctx.gpr[8]);
    ctx.set_gpr(6, 16u << 16u);
    ctx.set_gpr(8, ctx.gpr[10] | ctx.gpr[6]);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(-27620)));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(-27620), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27620)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27620), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[8] | ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27424), ctx.gpr[3]);
    ctx.set_gpr(2, 2205u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8128));
    ctx.pc = 0x089D0000u; return;
}

void recomp_unit_0114(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0114_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_114(Runtime &runtime) {
    runtime.register_generated_unit(114u, 0x089CC000u, 16384u, &recomp_unit_0114, &recomp_unit_0114_entry);
    runtime.register_function(0x089CC000u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC088u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC090u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC098u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC10Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC11Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC12Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC134u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC168u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC200u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC224u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC22Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC254u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC268u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC274u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC280u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC28Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC294u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC370u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC3E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC408u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC418u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC430u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC454u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC464u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC47Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC49Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC508u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC520u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC540u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC550u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC55Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC568u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC570u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC598u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC608u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC614u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC620u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC628u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC650u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC67Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC684u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC714u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC748u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC750u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC760u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC784u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC798u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC814u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC820u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC910u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC91Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC928u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC934u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC940u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC94Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC958u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC96Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC980u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCACCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCADCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBA4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCED0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD004u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD108u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD14Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD154u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD180u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD20Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD214u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD218u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD228u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD258u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD268u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD274u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD284u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD318u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD33Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD360u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD378u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD3F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD41Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD424u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD43Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD440u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD44Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD510u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD540u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD54Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD558u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD564u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD570u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD578u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD588u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD59Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD664u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD674u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD70Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD71Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD864u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD878u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD888u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDDF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE048u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE05Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE068u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE074u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE080u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE104u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE118u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE14Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE158u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE168u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE170u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE17Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE184u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE22Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE234u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE23Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE244u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE304u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE310u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE330u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE348u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE36Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE378u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE388u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE390u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE408u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE410u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE418u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE428u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE434u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE438u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE444u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE468u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE488u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE508u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE514u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE524u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE52Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE548u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE554u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE55Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE568u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE570u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE584u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE598u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE604u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE624u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE640u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE654u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE660u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE664u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE674u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE684u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE698u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE708u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE710u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE71Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE724u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE738u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE74Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE758u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE760u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE768u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE778u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE784u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE788u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE794u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE808u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE814u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE818u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE82Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE850u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE85Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE86Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE874u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE890u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE89Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE90Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE918u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE91Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE928u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE94Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE96Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE988u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE99Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE9A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE9ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE9B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE9DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE9E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEAB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEAC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEAE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEAECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEEA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEEACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEEBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEECCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEEF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEFECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF004u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF008u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF014u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF020u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF030u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF03Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF048u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF058u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF064u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF06Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF078u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF080u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF094u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF0FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF10Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF114u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF11Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF124u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF134u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF140u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF150u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF158u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF170u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF184u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF18Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF198u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF200u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF204u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF210u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF21Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF22Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF238u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF240u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF24Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF254u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF268u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF27Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF288u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF290u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF298u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF308u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF314u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF324u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF338u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF34Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF354u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF360u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF378u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF384u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF388u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF398u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF400u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF408u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF414u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF41Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF430u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF444u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF450u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF458u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF460u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF470u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF480u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF48Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF498u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF500u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF508u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF528u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF530u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF550u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF558u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF578u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF580u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF5FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF608u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF610u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF614u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF620u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF628u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF62Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF638u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF648u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF654u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF65Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF668u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF670u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF684u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF698u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF704u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF70Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF714u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF724u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF730u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF748u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF754u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF76Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF778u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF784u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF79Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF82Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF838u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF850u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF858u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF864u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF870u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF87Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF88Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF89Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF900u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF920u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF92Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF938u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF944u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF948u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF95Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF964u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF970u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF988u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFACCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFC84u, &recomp_unit_0114, "recomp_unit_0114");
}
} // namespace psprecomp
