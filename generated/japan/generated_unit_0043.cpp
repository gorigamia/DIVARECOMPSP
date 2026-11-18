#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0043[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 21,
    0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 102, 0, 0, 103,
    0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 177, 0,
    178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0,
    240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0,
    0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0,
    0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 277,
    0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    302, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320,
    0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0,
    0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 336, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0,
    0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0,
    0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 391,
    0, 0, 392, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 416, 0,
    417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423,
    0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 427, 0, 428, 0, 0, 429, 0, 430, 0, 0,
    431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0,
    0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 462,
    0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0,
    483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0,
    0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 493,
    0, 0, 494, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0,
    501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0,
    0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511,
    0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0,
    0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0,
    0, 525, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0,
    531, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534,
    0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546,
    0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0,
    0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0,
    0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0,
    0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0,
    0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0,
    0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0,
    0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0,
    0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0,
    0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0,
    0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0,
    0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0,
    626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0,
    630, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0,
    0, 0, 636, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0,
    652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 657, 0,
    0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0,
    0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0,
    0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0,
    0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0,
    0, 0, 0, 0, 683, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689,
};
void recomp_unit_0043_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0043[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B0000;
    case 2u: goto L_088B0008;
    case 3u: goto L_088B0024;
    case 4u: goto L_088B003C;
    case 5u: goto L_088B004C;
    case 6u: goto L_088B005C;
    case 7u: goto L_088B00B0;
    case 8u: goto L_088B00C0;
    case 9u: goto L_088B00D0;
    case 10u: goto L_088B00E0;
    case 11u: goto L_088B0108;
    case 12u: goto L_088B0124;
    case 13u: goto L_088B0134;
    case 14u: goto L_088B014C;
    case 15u: goto L_088B0168;
    case 16u: goto L_088B0180;
    case 17u: goto L_088B01B4;
    case 18u: goto L_088B01D0;
    case 19u: goto L_088B01E8;
    case 20u: goto L_088B01F0;
    case 21u: goto L_088B01FC;
    case 22u: goto L_088B0208;
    case 23u: goto L_088B0210;
    case 24u: goto L_088B0228;
    case 25u: goto L_088B0240;
    case 26u: goto L_088B0254;
    case 27u: goto L_088B025C;
    case 28u: goto L_088B0274;
    case 29u: goto L_088B0288;
    case 30u: goto L_088B029C;
    case 31u: goto L_088B02B8;
    case 32u: goto L_088B02D0;
    case 33u: goto L_088B02E0;
    case 34u: goto L_088B02F0;
    case 35u: goto L_088B034C;
    case 36u: goto L_088B035C;
    case 37u: goto L_088B036C;
    case 38u: goto L_088B037C;
    case 39u: goto L_088B03A4;
    case 40u: goto L_088B03C0;
    case 41u: goto L_088B03D0;
    case 42u: goto L_088B03DC;
    case 43u: goto L_088B03F4;
    case 44u: goto L_088B0428;
    case 45u: goto L_088B0444;
    case 46u: goto L_088B045C;
    case 47u: goto L_088B0470;
    case 48u: goto L_088B0484;
    case 49u: goto L_088B049C;
    case 50u: goto L_088B04B0;
    case 51u: goto L_088B04B8;
    case 52u: goto L_088B04D0;
    case 53u: goto L_088B04E4;
    case 54u: goto L_088B04F8;
    case 55u: goto L_088B0514;
    case 56u: goto L_088B052C;
    case 57u: goto L_088B053C;
    case 58u: goto L_088B054C;
    case 59u: goto L_088B05A8;
    case 60u: goto L_088B05B8;
    case 61u: goto L_088B05C8;
    case 62u: goto L_088B05D8;
    case 63u: goto L_088B05FC;
    case 64u: goto L_088B0618;
    case 65u: goto L_088B0628;
    case 66u: goto L_088B065C;
    case 67u: goto L_088B066C;
    case 68u: goto L_088B0684;
    case 69u: goto L_088B0694;
    case 70u: goto L_088B06A4;
    case 71u: goto L_088B06B4;
    case 72u: goto L_088B06C4;
    case 73u: goto L_088B06DC;
    case 74u: goto L_088B06F0;
    case 75u: goto L_088B0704;
    case 76u: goto L_088B071C;
    case 77u: goto L_088B0730;
    case 78u: goto L_088B0738;
    case 79u: goto L_088B0750;
    case 80u: goto L_088B0764;
    case 81u: goto L_088B0778;
    case 82u: goto L_088B0794;
    case 83u: goto L_088B07AC;
    case 84u: goto L_088B07BC;
    case 85u: goto L_088B07CC;
    case 86u: goto L_088B0828;
    case 87u: goto L_088B0838;
    case 88u: goto L_088B0848;
    case 89u: goto L_088B0858;
    case 90u: goto L_088B087C;
    case 91u: goto L_088B0898;
    case 92u: goto L_088B08A8;
    case 93u: goto L_088B08DC;
    case 94u: goto L_088B08EC;
    case 95u: goto L_088B0904;
    case 96u: goto L_088B0914;
    case 97u: goto L_088B0924;
    case 98u: goto L_088B0934;
    case 99u: goto L_088B0944;
    case 100u: goto L_088B095C;
    case 101u: goto L_088B0964;
    case 102u: goto L_088B0970;
    case 103u: goto L_088B097C;
    case 104u: goto L_088B0984;
    case 105u: goto L_088B099C;
    case 106u: goto L_088B09B4;
    case 107u: goto L_088B09C8;
    case 108u: goto L_088B09D0;
    case 109u: goto L_088B09E8;
    case 110u: goto L_088B09FC;
    case 111u: goto L_088B0A14;
    case 112u: goto L_088B0A1C;
    case 113u: goto L_088B0A38;
    case 114u: goto L_088B0A50;
    case 115u: goto L_088B0A60;
    case 116u: goto L_088B0A70;
    case 117u: goto L_088B0AC4;
    case 118u: goto L_088B0AD4;
    case 119u: goto L_088B0AE4;
    case 120u: goto L_088B0AF4;
    case 121u: goto L_088B0B1C;
    case 122u: goto L_088B0B38;
    case 123u: goto L_088B0B48;
    case 124u: goto L_088B0BA0;
    case 125u: goto L_088B0BB0;
    case 126u: goto L_088B0BC0;
    case 127u: goto L_088B0BD0;
    case 128u: goto L_088B0BE0;
    case 129u: goto L_088B0BF0;
    case 130u: goto L_088B0C0C;
    case 131u: goto L_088B0C1C;
    case 132u: goto L_088B0C44;
    case 133u: goto L_088B0C60;
    case 134u: goto L_088B0C78;
    case 135u: goto L_088B0C8C;
    case 136u: goto L_088B0C94;
    case 137u: goto L_088B0CAC;
    case 138u: goto L_088B0CC0;
    case 139u: goto L_088B0CD4;
    case 140u: goto L_088B0CF0;
    case 141u: goto L_088B0D08;
    case 142u: goto L_088B0D18;
    case 143u: goto L_088B0D28;
    case 144u: goto L_088B0D7C;
    case 145u: goto L_088B0D8C;
    case 146u: goto L_088B0D9C;
    case 147u: goto L_088B0DAC;
    case 148u: goto L_088B0DC4;
    case 149u: goto L_088B0DD8;
    case 150u: goto L_088B0DE0;
    case 151u: goto L_088B0DF8;
    case 152u: goto L_088B0E10;
    case 153u: goto L_088B0E2C;
    case 154u: goto L_088B0E50;
    case 155u: goto L_088B0E58;
    case 156u: goto L_088B0E74;
    case 157u: goto L_088B0E8C;
    case 158u: goto L_088B0EA4;
    case 159u: goto L_088B0EB4;
    case 160u: goto L_088B0EC4;
    case 161u: goto L_088B0F20;
    case 162u: goto L_088B0F30;
    case 163u: goto L_088B0F40;
    case 164u: goto L_088B0F50;
    case 165u: goto L_088B0F78;
    case 166u: goto L_088B0F94;
    case 167u: goto L_088B0FA4;
    case 168u: goto L_088B0FB0;
    case 169u: goto L_088B0FE4;
    case 170u: goto L_088B1000;
    case 171u: goto L_088B1018;
    case 172u: goto L_088B102C;
    case 173u: goto L_088B1040;
    case 174u: goto L_088B1058;
    case 175u: goto L_088B1060;
    case 176u: goto L_088B106C;
    case 177u: goto L_088B1078;
    case 178u: goto L_088B1080;
    case 179u: goto L_088B1098;
    case 180u: goto L_088B10B0;
    case 181u: goto L_088B10C4;
    case 182u: goto L_088B10CC;
    case 183u: goto L_088B10E4;
    case 184u: goto L_088B10F8;
    case 185u: goto L_088B110C;
    case 186u: goto L_088B1128;
    case 187u: goto L_088B1140;
    case 188u: goto L_088B1150;
    case 189u: goto L_088B1160;
    case 190u: goto L_088B11BC;
    case 191u: goto L_088B11CC;
    case 192u: goto L_088B11DC;
    case 193u: goto L_088B11EC;
    case 194u: goto L_088B1214;
    case 195u: goto L_088B1230;
    case 196u: goto L_088B1240;
    case 197u: goto L_088B1258;
    case 198u: goto L_088B1274;
    case 199u: goto L_088B1290;
    case 200u: goto L_088B12AC;
    case 201u: goto L_088B12C8;
    case 202u: goto L_088B12E4;
    case 203u: goto L_088B12F4;
    case 204u: goto L_088B1304;
    case 205u: goto L_088B131C;
    case 206u: goto L_088B1350;
    case 207u: goto L_088B136C;
    case 208u: goto L_088B137C;
    case 209u: goto L_088B138C;
    case 210u: goto L_088B13A4;
    case 211u: goto L_088B13B8;
    case 212u: goto L_088B13C0;
    case 213u: goto L_088B13D8;
    case 214u: goto L_088B13EC;
    case 215u: goto L_088B1400;
    case 216u: goto L_088B141C;
    case 217u: goto L_088B1434;
    case 218u: goto L_088B1444;
    case 219u: goto L_088B1454;
    case 220u: goto L_088B14B0;
    case 221u: goto L_088B14C0;
    case 222u: goto L_088B14D0;
    case 223u: goto L_088B14E0;
    case 224u: goto L_088B1508;
    case 225u: goto L_088B1524;
    case 226u: goto L_088B1534;
    case 227u: goto L_088B154C;
    case 228u: goto L_088B1568;
    case 229u: goto L_088B1584;
    case 230u: goto L_088B15A0;
    case 231u: goto L_088B15BC;
    case 232u: goto L_088B15D8;
    case 233u: goto L_088B15E8;
    case 234u: goto L_088B1610;
    case 235u: goto L_088B162C;
    case 236u: goto L_088B163C;
    case 237u: goto L_088B164C;
    case 238u: goto L_088B1664;
    case 239u: goto L_088B1678;
    case 240u: goto L_088B1680;
    case 241u: goto L_088B1698;
    case 242u: goto L_088B16AC;
    case 243u: goto L_088B16C0;
    case 244u: goto L_088B16DC;
    case 245u: goto L_088B16F4;
    case 246u: goto L_088B1704;
    case 247u: goto L_088B1714;
    case 248u: goto L_088B1768;
    case 249u: goto L_088B1778;
    case 250u: goto L_088B1788;
    case 251u: goto L_088B1798;
    case 252u: goto L_088B17C0;
    case 253u: goto L_088B17DC;
    case 254u: goto L_088B17EC;
    case 255u: goto L_088B1804;
    case 256u: goto L_088B1820;
    case 257u: goto L_088B1838;
    case 258u: goto L_088B186C;
    case 259u: goto L_088B1888;
    case 260u: goto L_088B18A0;
    case 261u: goto L_088B18A8;
    case 262u: goto L_088B18B4;
    case 263u: goto L_088B18C0;
    case 264u: goto L_088B18C8;
    case 265u: goto L_088B18E0;
    case 266u: goto L_088B18F8;
    case 267u: goto L_088B190C;
    case 268u: goto L_088B1914;
    case 269u: goto L_088B192C;
    case 270u: goto L_088B1944;
    case 271u: goto L_088B1984;
    case 272u: goto L_088B198C;
    case 273u: goto L_088B19C0;
    case 274u: goto L_088B19D8;
    case 275u: goto L_088B19E4;
    case 276u: goto L_088B19F0;
    case 277u: goto L_088B19FC;
    case 278u: goto L_088B1A14;
    case 279u: goto L_088B1A2C;
    case 280u: goto L_088B1A3C;
    case 281u: goto L_088B1A4C;
    case 282u: goto L_088B1AA8;
    case 283u: goto L_088B1AB8;
    case 284u: goto L_088B1AC8;
    case 285u: goto L_088B1AD8;
    case 286u: goto L_088B1AE8;
    case 287u: goto L_088B1B10;
    case 288u: goto L_088B1B2C;
    case 289u: goto L_088B1B3C;
    case 290u: goto L_088B1B48;
    case 291u: goto L_088B1B64;
    case 292u: goto L_088B1B7C;
    case 293u: goto L_088B1BB0;
    case 294u: goto L_088B1BCC;
    case 295u: goto L_088B1BE4;
    case 296u: goto L_088B1C08;
    case 297u: goto L_088B1C10;
    case 298u: goto L_088B1C28;
    case 299u: goto L_088B1C40;
    case 300u: goto L_088B1C54;
    case 301u: goto L_088B1C68;
    case 302u: goto L_088B1C80;
    case 303u: goto L_088B1C88;
    case 304u: goto L_088B1C94;
    case 305u: goto L_088B1CA0;
    case 306u: goto L_088B1CA8;
    case 307u: goto L_088B1CC0;
    case 308u: goto L_088B1CD8;
    case 309u: goto L_088B1CEC;
    case 310u: goto L_088B1CF4;
    case 311u: goto L_088B1D0C;
    case 312u: goto L_088B1D20;
    case 313u: goto L_088B1D34;
    case 314u: goto L_088B1D50;
    case 315u: goto L_088B1D68;
    case 316u: goto L_088B1D78;
    case 317u: goto L_088B1D88;
    case 318u: goto L_088B1DDC;
    case 319u: goto L_088B1DEC;
    case 320u: goto L_088B1DFC;
    case 321u: goto L_088B1E0C;
    case 322u: goto L_088B1E34;
    case 323u: goto L_088B1E50;
    case 324u: goto L_088B1E60;
    case 325u: goto L_088B1E78;
    case 326u: goto L_088B1E94;
    case 327u: goto L_088B1EC8;
    case 328u: goto L_088B1EE4;
    case 329u: goto L_088B1EFC;
    case 330u: goto L_088B1F10;
    case 331u: goto L_088B1F18;
    case 332u: goto L_088B1F30;
    case 333u: goto L_088B1F48;
    case 334u: goto L_088B1F64;
    case 335u: goto L_088B1F8C;
    case 336u: goto L_088B1F98;
    case 337u: goto L_088B1FA0;
    case 338u: goto L_088B1FA8;
    case 339u: goto L_088B1FB8;
    case 340u: goto L_088B1FD0;
    case 341u: goto L_088B1FE8;
    case 342u: goto L_088B2000;
    case 343u: goto L_088B2010;
    case 344u: goto L_088B2020;
    case 345u: goto L_088B2074;
    case 346u: goto L_088B2084;
    case 347u: goto L_088B2094;
    case 348u: goto L_088B20A4;
    case 349u: goto L_088B20B4;
    case 350u: goto L_088B20D8;
    case 351u: goto L_088B20F4;
    case 352u: goto L_088B2104;
    case 353u: goto L_088B2114;
    case 354u: goto L_088B213C;
    case 355u: goto L_088B2154;
    case 356u: goto L_088B216C;
    case 357u: goto L_088B2180;
    case 358u: goto L_088B2194;
    case 359u: goto L_088B21AC;
    case 360u: goto L_088B21B4;
    case 361u: goto L_088B21C0;
    case 362u: goto L_088B21CC;
    case 363u: goto L_088B21D4;
    case 364u: goto L_088B21EC;
    case 365u: goto L_088B2204;
    case 366u: goto L_088B2218;
    case 367u: goto L_088B2220;
    case 368u: goto L_088B2238;
    case 369u: goto L_088B2250;
    case 370u: goto L_088B2268;
    case 371u: goto L_088B228C;
    case 372u: goto L_088B2294;
    case 373u: goto L_088B22AC;
    case 374u: goto L_088B22C4;
    case 375u: goto L_088B22D4;
    case 376u: goto L_088B22E4;
    case 377u: goto L_088B2348;
    case 378u: goto L_088B2358;
    case 379u: goto L_088B2368;
    case 380u: goto L_088B2378;
    case 381u: goto L_088B23A0;
    case 382u: goto L_088B23BC;
    case 383u: goto L_088B23CC;
    case 384u: goto L_088B23D8;
    case 385u: goto L_088B23EC;
    case 386u: goto L_088B2420;
    case 387u: goto L_088B243C;
    case 388u: goto L_088B244C;
    case 389u: goto L_088B245C;
    case 390u: goto L_088B2474;
    case 391u: goto L_088B247C;
    case 392u: goto L_088B2488;
    case 393u: goto L_088B2494;
    case 394u: goto L_088B249C;
    case 395u: goto L_088B24B4;
    case 396u: goto L_088B24CC;
    case 397u: goto L_088B24E0;
    case 398u: goto L_088B24E8;
    case 399u: goto L_088B2500;
    case 400u: goto L_088B2514;
    case 401u: goto L_088B2528;
    case 402u: goto L_088B2544;
    case 403u: goto L_088B255C;
    case 404u: goto L_088B256C;
    case 405u: goto L_088B257C;
    case 406u: goto L_088B25D0;
    case 407u: goto L_088B25E0;
    case 408u: goto L_088B25F0;
    case 409u: goto L_088B2600;
    case 410u: goto L_088B2618;
    case 411u: goto L_088B262C;
    case 412u: goto L_088B2640;
    case 413u: goto L_088B2658;
    case 414u: goto L_088B2660;
    case 415u: goto L_088B266C;
    case 416u: goto L_088B2678;
    case 417u: goto L_088B2680;
    case 418u: goto L_088B2698;
    case 419u: goto L_088B26B0;
    case 420u: goto L_088B26C4;
    case 421u: goto L_088B26CC;
    case 422u: goto L_088B26E4;
    case 423u: goto L_088B26FC;
    case 424u: goto L_088B2720;
    case 425u: goto L_088B2744;
    case 426u: goto L_088B274C;
    case 427u: goto L_088B2758;
    case 428u: goto L_088B2760;
    case 429u: goto L_088B276C;
    case 430u: goto L_088B2774;
    case 431u: goto L_088B2780;
    case 432u: goto L_088B2788;
    case 433u: goto L_088B27A0;
    case 434u: goto L_088B27B8;
    case 435u: goto L_088B27C8;
    case 436u: goto L_088B27D8;
    case 437u: goto L_088B2834;
    case 438u: goto L_088B2844;
    case 439u: goto L_088B2854;
    case 440u: goto L_088B2864;
    case 441u: goto L_088B288C;
    case 442u: goto L_088B28A8;
    case 443u: goto L_088B28B8;
    case 444u: goto L_088B28D0;
    case 445u: goto L_088B28EC;
    case 446u: goto L_088B2904;
    case 447u: goto L_088B2920;
    case 448u: goto L_088B2938;
    case 449u: goto L_088B2954;
    case 450u: goto L_088B296C;
    case 451u: goto L_088B2988;
    case 452u: goto L_088B299C;
    case 453u: goto L_088B29C4;
    case 454u: goto L_088B29DC;
    case 455u: goto L_088B29F8;
    case 456u: goto L_088B2A10;
    case 457u: goto L_088B2A2C;
    case 458u: goto L_088B2A38;
    case 459u: goto L_088B2A4C;
    case 460u: goto L_088B2A58;
    case 461u: goto L_088B2A6C;
    case 462u: goto L_088B2A7C;
    case 463u: goto L_088B2A8C;
    case 464u: goto L_088B2A98;
    case 465u: goto L_088B2AB4;
    case 466u: goto L_088B2AC0;
    case 467u: goto L_088B2AEC;
    case 468u: goto L_088B2B18;
    case 469u: goto L_088B2B34;
    case 470u: goto L_088B2B4C;
    case 471u: goto L_088B2B60;
    case 472u: goto L_088B2B68;
    case 473u: goto L_088B2B80;
    case 474u: goto L_088B2B94;
    case 475u: goto L_088B2BA8;
    case 476u: goto L_088B2BC4;
    case 477u: goto L_088B2BDC;
    case 478u: goto L_088B2BEC;
    case 479u: goto L_088B2BFC;
    case 480u: goto L_088B2C50;
    case 481u: goto L_088B2C60;
    case 482u: goto L_088B2C70;
    case 483u: goto L_088B2C80;
    case 484u: goto L_088B2CA8;
    case 485u: goto L_088B2CC4;
    case 486u: goto L_088B2CD4;
    case 487u: goto L_088B2CE4;
    case 488u: goto L_088B2CF4;
    case 489u: goto L_088B2D0C;
    case 490u: goto L_088B2D40;
    case 491u: goto L_088B2D5C;
    case 492u: goto L_088B2D74;
    case 493u: goto L_088B2D7C;
    case 494u: goto L_088B2D88;
    case 495u: goto L_088B2D94;
    case 496u: goto L_088B2D9C;
    case 497u: goto L_088B2DB4;
    case 498u: goto L_088B2DCC;
    case 499u: goto L_088B2DE0;
    case 500u: goto L_088B2DE8;
    case 501u: goto L_088B2E00;
    case 502u: goto L_088B2E14;
    case 503u: goto L_088B2E2C;
    case 504u: goto L_088B2E34;
    case 505u: goto L_088B2E50;
    case 506u: goto L_088B2E68;
    case 507u: goto L_088B2E78;
    case 508u: goto L_088B2E88;
    case 509u: goto L_088B2EDC;
    case 510u: goto L_088B2EEC;
    case 511u: goto L_088B2EFC;
    case 512u: goto L_088B2F0C;
    case 513u: goto L_088B2F34;
    case 514u: goto L_088B2F50;
    case 515u: goto L_088B2F60;
    case 516u: goto L_088B2FB8;
    case 517u: goto L_088B2FC8;
    case 518u: goto L_088B2FD8;
    case 519u: goto L_088B2FE8;
    case 520u: goto L_088B2FF8;
    case 521u: goto L_088B3008;
    case 522u: goto L_088B303C;
    case 523u: goto L_088B3058;
    case 524u: goto L_088B3070;
    case 525u: goto L_088B3084;
    case 526u: goto L_088B308C;
    case 527u: goto L_088B30A4;
    case 528u: goto L_088B30B8;
    case 529u: goto L_088B30CC;
    case 530u: goto L_088B30E8;
    case 531u: goto L_088B3100;
    case 532u: goto L_088B3110;
    case 533u: goto L_088B3120;
    case 534u: goto L_088B317C;
    case 535u: goto L_088B318C;
    case 536u: goto L_088B319C;
    case 537u: goto L_088B31AC;
    case 538u: goto L_088B31D0;
    case 539u: goto L_088B31EC;
    case 540u: goto L_088B3214;
    case 541u: goto L_088B3224;
    case 542u: goto L_088B323C;
    case 543u: goto L_088B324C;
    case 544u: goto L_088B325C;
    case 545u: goto L_088B326C;
    case 546u: goto L_088B327C;
    case 547u: goto L_088B3294;
    case 548u: goto L_088B32A8;
    case 549u: goto L_088B32B0;
    case 550u: goto L_088B32C8;
    case 551u: goto L_088B32E0;
    case 552u: goto L_088B32F8;
    case 553u: goto L_088B331C;
    case 554u: goto L_088B3334;
    case 555u: goto L_088B334C;
    case 556u: goto L_088B335C;
    case 557u: goto L_088B336C;
    case 558u: goto L_088B33C0;
    case 559u: goto L_088B33D0;
    case 560u: goto L_088B33E0;
    case 561u: goto L_088B33F0;
    case 562u: goto L_088B3418;
    case 563u: goto L_088B3434;
    case 564u: goto L_088B3444;
    case 565u: goto L_088B345C;
    case 566u: goto L_088B3478;
    case 567u: goto L_088B3490;
    case 568u: goto L_088B34C4;
    case 569u: goto L_088B34E0;
    case 570u: goto L_088B34F8;
    case 571u: goto L_088B350C;
    case 572u: goto L_088B3520;
    case 573u: goto L_088B3538;
    case 574u: goto L_088B3540;
    case 575u: goto L_088B354C;
    case 576u: goto L_088B3558;
    case 577u: goto L_088B3560;
    case 578u: goto L_088B3578;
    case 579u: goto L_088B3590;
    case 580u: goto L_088B35A4;
    case 581u: goto L_088B35AC;
    case 582u: goto L_088B35C4;
    case 583u: goto L_088B35D8;
    case 584u: goto L_088B35EC;
    case 585u: goto L_088B3608;
    case 586u: goto L_088B3620;
    case 587u: goto L_088B3630;
    case 588u: goto L_088B3640;
    case 589u: goto L_088B3694;
    case 590u: goto L_088B36A4;
    case 591u: goto L_088B36B4;
    case 592u: goto L_088B36C4;
    case 593u: goto L_088B36E8;
    case 594u: goto L_088B3704;
    case 595u: goto L_088B372C;
    case 596u: goto L_088B3744;
    case 597u: goto L_088B375C;
    case 598u: goto L_088B3770;
    case 599u: goto L_088B3784;
    case 600u: goto L_088B379C;
    case 601u: goto L_088B37B0;
    case 602u: goto L_088B37B8;
    case 603u: goto L_088B37D0;
    case 604u: goto L_088B37E4;
    case 605u: goto L_088B37F8;
    case 606u: goto L_088B3814;
    case 607u: goto L_088B382C;
    case 608u: goto L_088B383C;
    case 609u: goto L_088B384C;
    case 610u: goto L_088B38A0;
    case 611u: goto L_088B38B0;
    case 612u: goto L_088B38C0;
    case 613u: goto L_088B38D0;
    case 614u: goto L_088B38F8;
    case 615u: goto L_088B3914;
    case 616u: goto L_088B3924;
    case 617u: goto L_088B393C;
    case 618u: goto L_088B3958;
    case 619u: goto L_088B3968;
    case 620u: goto L_088B3978;
    case 621u: goto L_088B3988;
    case 622u: goto L_088B3998;
    case 623u: goto L_088B39B0;
    case 624u: goto L_088B39CC;
    case 625u: goto L_088B39E4;
    case 626u: goto L_088B3A00;
    case 627u: goto L_088B3A18;
    case 628u: goto L_088B3A4C;
    case 629u: goto L_088B3A68;
    case 630u: goto L_088B3A80;
    case 631u: goto L_088B3A94;
    case 632u: goto L_088B3A9C;
    case 633u: goto L_088B3AB4;
    case 634u: goto L_088B3ACC;
    case 635u: goto L_088B3AE4;
    case 636u: goto L_088B3B08;
    case 637u: goto L_088B3B10;
    case 638u: goto L_088B3B28;
    case 639u: goto L_088B3B40;
    case 640u: goto L_088B3B50;
    case 641u: goto L_088B3B60;
    case 642u: goto L_088B3BBC;
    case 643u: goto L_088B3BCC;
    case 644u: goto L_088B3BDC;
    case 645u: goto L_088B3BEC;
    case 646u: goto L_088B3BFC;
    case 647u: goto L_088B3C24;
    case 648u: goto L_088B3C40;
    case 649u: goto L_088B3C50;
    case 650u: goto L_088B3C5C;
    case 651u: goto L_088B3C70;
    case 652u: goto L_088B3C80;
    case 653u: goto L_088B3CA8;
    case 654u: goto L_088B3CC4;
    case 655u: goto L_088B3CDC;
    case 656u: goto L_088B3CF0;
    case 657u: goto L_088B3CF8;
    case 658u: goto L_088B3D10;
    case 659u: goto L_088B3D28;
    case 660u: goto L_088B3D40;
    case 661u: goto L_088B3D64;
    case 662u: goto L_088B3D6C;
    case 663u: goto L_088B3D84;
    case 664u: goto L_088B3D9C;
    case 665u: goto L_088B3DAC;
    case 666u: goto L_088B3DBC;
    case 667u: goto L_088B3E18;
    case 668u: goto L_088B3E28;
    case 669u: goto L_088B3E38;
    case 670u: goto L_088B3E48;
    case 671u: goto L_088B3E70;
    case 672u: goto L_088B3E8C;
    case 673u: goto L_088B3E9C;
    case 674u: goto L_088B3EB4;
    case 675u: goto L_088B3ED0;
    case 676u: goto L_088B3EDC;
    case 677u: goto L_088B3EF0;
    case 678u: goto L_088B3F08;
    case 679u: goto L_088B3F24;
    case 680u: goto L_088B3F34;
    case 681u: goto L_088B3F5C;
    case 682u: goto L_088B3F78;
    case 683u: goto L_088B3F90;
    case 684u: goto L_088B3FA4;
    case 685u: goto L_088B3FAC;
    case 686u: goto L_088B3FC4;
    case 687u: goto L_088B3FDC;
    case 688u: goto L_088B3FEC;
    case 689u: goto L_088B3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B0000:
    ctx.set_gpr(31, 0x088B0008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B0008u) goto L_088B0008;
    return;
L_088B0008:
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
L_088B0024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x088B003Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B003Cu) goto L_088B003C;
    return;
L_088B003C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B004C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B005Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B005Cu) goto L_088B005C;
    return;
L_088B005C:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23768));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7452));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(31, 0x088B00B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B00B0u) goto L_088B00B0;
    return;
L_088B00B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B00C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B00D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 976u, 0x088AFF94u>(ctx, &aot_mem) && ctx.pc == 0x088B00D0u) goto L_088B00D0;
    return;
L_088B00D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B00E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23768)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B0108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B0108u) goto L_088B0108;
    return;
L_088B0108:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7472));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088B0124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B0124u) goto L_088B0124;
    return;
L_088B0124:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B0134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0134u) goto L_088B0134;
    return;
L_088B0134:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7520));
    ctx.set_gpr(31, 0x088B014Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B014Cu) goto L_088B014C;
    return;
L_088B014C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19568));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B0168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0168u) goto L_088B0168;
    return;
L_088B0168:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7524));
    ctx.set_gpr(31, 0x088B0180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B0180u) goto L_088B0180;
    return;
L_088B0180:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19568));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7496));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7504));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7512));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B01B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B01B4u) goto L_088B01B4;
    return;
L_088B01B4:
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
L_088B01D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23780)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0210;
      }
      goto L_088B01E8;
    }
L_088B01E8:
    ctx.set_gpr(31, 0x088B01F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088B01F0u) goto L_088B01F0;
    return;
L_088B01F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088B01FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088B01FCu) goto L_088B01FC;
    return;
L_088B01FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B0208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088B0208u) goto L_088B0208;
    return;
L_088B0208:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23780), ctx.gpr[2]);
    goto L_088B0210;
L_088B0210:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23780)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23780)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0254;
      }
      goto L_088B0240;
    }
L_088B0240:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B025C;
      }
      goto L_088B0254;
    }
L_088B0254:
    ctx.set_gpr(31, 0x088B025Cu);
    // nop
    goto L_088B02B8;
L_088B025C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23780)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0274:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B0288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B0288u) goto L_088B0288;
    return;
L_088B0288:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B029Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B029Cu) goto L_088B029C;
    return;
L_088B029C:
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
L_088B02B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(736));
    ctx.set_gpr(31, 0x088B02D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B02D0u) goto L_088B02D0;
    return;
L_088B02D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B02E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B02F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B02F0u) goto L_088B02F0;
    return;
L_088B02F0:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(892));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7528));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23780));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(860));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7536));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(628));
    ctx.set_gpr(31, 0x088B034Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B034Cu) goto L_088B034C;
    return;
L_088B034C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B035C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B036Cu);
    // nop
    goto L_088B0228;
L_088B036C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B037C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23780)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B03A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B03A4u) goto L_088B03A4;
    return;
L_088B03A4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7556));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088B03C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B03C0u) goto L_088B03C0;
    return;
L_088B03C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B03D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B03D0u) goto L_088B03D0;
    return;
L_088B03D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B03DCu);
    // nop
    goto L_088B2640;
L_088B03DC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B03F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B03F4u) goto L_088B03F4;
    return;
L_088B03F4:
    ctx.set_gpr(3, 2189u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8056));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7576));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7584));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7592));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B0428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0428u) goto L_088B0428;
    return;
L_088B0428:
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
L_088B0444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088B045Cu);
    // nop
    goto L_088B0514;
L_088B045C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23792)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B0470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088B0470u) goto L_088B0470;
    return;
L_088B0470:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23792)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B04B0;
      }
      goto L_088B049C;
    }
L_088B049C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B04B8;
      }
      goto L_088B04B0;
    }
L_088B04B0:
    ctx.set_gpr(31, 0x088B04B8u);
    // nop
    goto L_088B0514;
L_088B04B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23792)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B04D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B04E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B04E4u) goto L_088B04E4;
    return;
L_088B04E4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32544));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B04F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B04F8u) goto L_088B04F8;
    return;
L_088B04F8:
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
L_088B0514:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1340));
    ctx.set_gpr(31, 0x088B052Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B052Cu) goto L_088B052C;
    return;
L_088B052C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B053C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B054Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B054Cu) goto L_088B054C;
    return;
L_088B054C:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1668));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23792));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1464));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7600));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1232));
    ctx.set_gpr(31, 0x088B05A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B05A8u) goto L_088B05A8;
    return;
L_088B05A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B05B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B05C8u);
    // nop
    goto L_088B0484;
L_088B05C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B05D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23792)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B05FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B05FCu) goto L_088B05FC;
    return;
L_088B05FC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7620));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088B0618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B0618u) goto L_088B0618;
    return;
L_088B0618:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B0628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0628u) goto L_088B0628;
    return;
L_088B0628:
    ctx.set_gpr(3, 2189u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7536));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7628));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7636));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7644));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B065Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B065Cu) goto L_088B065C;
    return;
L_088B065C:
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1700));
    ctx.set_gpr(31, 0x088B066Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088B066Cu) goto L_088B066C;
    return;
L_088B066C:
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
L_088B0684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B0694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 395u, 0x088D1D80u>(ctx, &aot_mem) && ctx.pc == 0x088B0694u) goto L_088B0694;
    return;
L_088B0694:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B06A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B06B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 396u, 0x088D1D88u>(ctx, &aot_mem) && ctx.pc == 0x088B06B4u) goto L_088B06B4;
    return;
L_088B06B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B06C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088B06DCu);
    // nop
    goto L_088B0794;
L_088B06DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23804)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B06F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088B06F0u) goto L_088B06F0;
    return;
L_088B06F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0704:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23804)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0730;
      }
      goto L_088B071C;
    }
L_088B071C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0738;
      }
      goto L_088B0730;
    }
L_088B0730:
    ctx.set_gpr(31, 0x088B0738u);
    // nop
    goto L_088B0794;
L_088B0738:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23804)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B0764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B0764u) goto L_088B0764;
    return;
L_088B0764:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32404));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B0778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B0778u) goto L_088B0778;
    return;
L_088B0778:
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
L_088B0794:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1980));
    ctx.set_gpr(31, 0x088B07ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B07ACu) goto L_088B07AC;
    return;
L_088B07AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B07BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B07CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B07CCu) goto L_088B07CC;
    return;
L_088B07CC:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2136));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2308));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23804));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2104));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7652));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1872));
    ctx.set_gpr(31, 0x088B0828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B0828u) goto L_088B0828;
    return;
L_088B0828:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B0848u);
    // nop
    goto L_088B0704;
L_088B0848:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23804)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B087Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B087Cu) goto L_088B087C;
    return;
L_088B087C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7680));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088B0898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B0898u) goto L_088B0898;
    return;
L_088B0898:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B08A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B08A8u) goto L_088B08A8;
    return;
L_088B08A8:
    ctx.set_gpr(3, 2189u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7060));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7688));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7696));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7704));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B08DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B08DCu) goto L_088B08DC;
    return;
L_088B08DC:
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2340));
    ctx.set_gpr(31, 0x088B08ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088B08ECu) goto L_088B08EC;
    return;
L_088B08EC:
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
L_088B0904:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B0914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 373u, 0x088D1BA4u>(ctx, &aot_mem) && ctx.pc == 0x088B0914u) goto L_088B0914;
    return;
L_088B0914:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0924:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B0934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 374u, 0x088D1BACu>(ctx, &aot_mem) && ctx.pc == 0x088B0934u) goto L_088B0934;
    return;
L_088B0934:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0984;
      }
      goto L_088B095C;
    }
L_088B095C:
    ctx.set_gpr(31, 0x088B0964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088B0964u) goto L_088B0964;
    return;
L_088B0964:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088B0970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088B0970u) goto L_088B0970;
    return;
L_088B0970:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B097Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088B097Cu) goto L_088B097C;
    return;
L_088B097C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23816), ctx.gpr[2]);
    goto L_088B0984;
L_088B0984:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B099C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B09C8;
      }
      goto L_088B09B4;
    }
L_088B09B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B09D0;
      }
      goto L_088B09C8;
    }
L_088B09C8:
    ctx.set_gpr(31, 0x088B09D0u);
    // nop
    goto L_088B0A38;
L_088B09D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B09E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B09FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B09FCu) goto L_088B09FC;
    return;
L_088B09FC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32264));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088B0A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x088B0A14u) goto L_088B0A14;
    return;
L_088B0A14:
    ctx.set_gpr(31, 0x088B0A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B0A1Cu) goto L_088B0A1C;
    return;
L_088B0A1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0A38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2656));
    ctx.set_gpr(31, 0x088B0A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B0A50u) goto L_088B0A50;
    return;
L_088B0A50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B0A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B0A70u) goto L_088B0A70;
    return;
L_088B0A70:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2804));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23816));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2772));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7712));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(84));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2536));
    ctx.set_gpr(31, 0x088B0AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B0AC4u) goto L_088B0AC4;
    return;
L_088B0AC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0AD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B0AE4u);
    // nop
    goto L_088B099C;
L_088B0AE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0AF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B0B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B0B1Cu) goto L_088B0B1C;
    return;
L_088B0B1C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7732));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088B0B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B0B38u) goto L_088B0B38;
    return;
L_088B0B38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B0B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0B48u) goto L_088B0B48;
    return;
L_088B0B48:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
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
    ctx.set_gpr(31, 0x088B0BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088B0BA0u) goto L_088B0BA0;
    return;
L_088B0BA0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088B0BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088B0BB0u) goto L_088B0BB0;
    return;
L_088B0BB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088B0BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088B0BC0u) goto L_088B0BC0;
    return;
L_088B0BC0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088B0BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088B0BD0u) goto L_088B0BD0;
    return;
L_088B0BD0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x088B0BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x088B0BE0u) goto L_088B0BE0;
    return;
L_088B0BE0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B0BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0BF0u) goto L_088B0BF0;
    return;
L_088B0BF0:
    ctx.set_gpr(3, 2189u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(6544));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B0C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0C0Cu) goto L_088B0C0C;
    return;
L_088B0C0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088B0C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 58u, 0x08958488u>(ctx, &aot_mem) && ctx.pc == 0x088B0C1Cu) goto L_088B0C1C;
    return;
L_088B0C1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7784));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7800));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7816));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B0C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0C44u) goto L_088B0C44;
    return;
L_088B0C44:
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
L_088B0C60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23836)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0C8C;
      }
      goto L_088B0C78;
    }
L_088B0C78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0C94;
      }
      goto L_088B0C8C;
    }
L_088B0C8C:
    ctx.set_gpr(31, 0x088B0C94u);
    // nop
    goto L_088B0CF0;
L_088B0C94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23836)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0CAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B0CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088B0CC0u) goto L_088B0CC0;
    return;
L_088B0CC0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15784));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B0CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B0CD4u) goto L_088B0CD4;
    return;
L_088B0CD4:
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
L_088B0CF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3352));
    ctx.set_gpr(31, 0x088B0D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B0D08u) goto L_088B0D08;
    return;
L_088B0D08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0D18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B0D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B0D28u) goto L_088B0D28;
    return;
L_088B0D28:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7832));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23836));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(3468));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7840));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(3244));
    ctx.set_gpr(31, 0x088B0D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B0D7Cu) goto L_088B0D7C;
    return;
L_088B0D7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0D8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B0D9Cu);
    // nop
    goto L_088B0C60;
L_088B0D9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0DAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23840)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0DD8;
      }
      goto L_088B0DC4;
    }
L_088B0DC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0DE0;
      }
      goto L_088B0DD8;
    }
L_088B0DD8:
    ctx.set_gpr(31, 0x088B0DE0u);
    // nop
    goto L_088B0E8C;
L_088B0DE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23840)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0DF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088B0E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B0E10u) goto L_088B0E10;
    return;
L_088B0E10:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088B0E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B0E2Cu) goto L_088B0E2C;
    return;
L_088B0E2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0E58;
      }
      goto L_088B0E50;
    }
L_088B0E50:
    ctx.set_gpr(31, 0x088B0E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088B0E58u) goto L_088B0E58;
    return;
L_088B0E58:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088B0E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088B0E74u) goto L_088B0E74;
    return;
L_088B0E74:
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
L_088B0E8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3764));
    ctx.set_gpr(31, 0x088B0EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B0EA4u) goto L_088B0EA4;
    return;
L_088B0EA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0EB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B0EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B0EC4u) goto L_088B0EC4;
    return;
L_088B0EC4:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3920));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7864));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23840));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(3888));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7872));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(3576));
    ctx.set_gpr(31, 0x088B0F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B0F20u) goto L_088B0F20;
    return;
L_088B0F20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0F30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B0F40u);
    // nop
    goto L_088B0DAC;
L_088B0F40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0F50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23840)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B0F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B0F78u) goto L_088B0F78;
    return;
L_088B0F78:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7888));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088B0F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B0F94u) goto L_088B0F94;
    return;
L_088B0F94:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B0FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0FA4u) goto L_088B0FA4;
    return;
L_088B0FA4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B0FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 390u, 0x088C236Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0FB0u) goto L_088B0FB0;
    return;
L_088B0FB0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7908));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7912));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7916));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B0FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0FE4u) goto L_088B0FE4;
    return;
L_088B0FE4:
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
L_088B1000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088B1018u);
    // nop
    goto L_088B1128;
L_088B1018:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23848)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B102Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088B102Cu) goto L_088B102C;
    return;
L_088B102C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1040:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23848)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1080;
      }
      goto L_088B1058;
    }
L_088B1058:
    ctx.set_gpr(31, 0x088B1060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088B1060u) goto L_088B1060;
    return;
L_088B1060:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088B106Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088B106Cu) goto L_088B106C;
    return;
L_088B106C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B1078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088B1078u) goto L_088B1078;
    return;
L_088B1078:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23848), ctx.gpr[2]);
    goto L_088B1080;
L_088B1080:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23848)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1098:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23848)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B10C4;
      }
      goto L_088B10B0;
    }
L_088B10B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B10CC;
      }
      goto L_088B10C4;
    }
L_088B10C4:
    ctx.set_gpr(31, 0x088B10CCu);
    // nop
    goto L_088B1128;
L_088B10CC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23848)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B10E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088B10F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B10F8u) goto L_088B10F8;
    return;
L_088B10F8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32016));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B110Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B110Cu) goto L_088B110C;
    return;
L_088B110C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1128:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4432));
    ctx.set_gpr(31, 0x088B1140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B1140u) goto L_088B1140;
    return;
L_088B1140:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1150:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B1160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B1160u) goto L_088B1160;
    return;
L_088B1160:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4588));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4972));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23848));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4556));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7920));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4324));
    ctx.set_gpr(31, 0x088B11BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B11BCu) goto L_088B11BC;
    return;
L_088B11BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B11CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B11DCu);
    // nop
    goto L_088B1098;
L_088B11DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B11EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23848)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B1214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B1214u) goto L_088B1214;
    return;
L_088B1214:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7944));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088B1230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B1230u) goto L_088B1230;
    return;
L_088B1230:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B1240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1240u) goto L_088B1240;
    return;
L_088B1240:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8100));
    ctx.set_gpr(31, 0x088B1258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B1258u) goto L_088B1258;
    return;
L_088B1258:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24480));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B1274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1274u) goto L_088B1274;
    return;
L_088B1274:
    ctx.set_gpr(3, 2189u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3720));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B1290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1290u) goto L_088B1290;
    return;
L_088B1290:
    ctx.set_gpr(3, 2201u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7616));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B12ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B12ACu) goto L_088B12AC;
    return;
L_088B12AC:
    ctx.set_gpr(3, 2201u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7616));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B12C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B12C8u) goto L_088B12C8;
    return;
L_088B12C8:
    ctx.set_gpr(3, 2201u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7524));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B12E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B12E4u) goto L_088B12E4;
    return;
L_088B12E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088B12F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x088B12F4u) goto L_088B12F4;
    return;
L_088B12F4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B1304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1304u) goto L_088B1304;
    return;
L_088B1304:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8104));
    ctx.set_gpr(31, 0x088B131Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B131Cu) goto L_088B131C;
    return;
L_088B131C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7432));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8016));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8044));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8072));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B1350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1350u) goto L_088B1350;
    return;
L_088B1350:
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
L_088B136C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B137Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 196u, 0x088D0EFCu>(ctx, &aot_mem) && ctx.pc == 0x088B137Cu) goto L_088B137C;
    return;
L_088B137C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B138C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23880)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B13B8;
      }
      goto L_088B13A4;
    }
L_088B13A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B13C0;
      }
      goto L_088B13B8;
    }
L_088B13B8:
    ctx.set_gpr(31, 0x088B13C0u);
    // nop
    goto L_088B141C;
L_088B13C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23880)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B13D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B13ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B13ECu) goto L_088B13EC;
    return;
L_088B13EC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31864));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B1400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B1400u) goto L_088B1400;
    return;
L_088B1400:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B141C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5188));
    ctx.set_gpr(31, 0x088B1434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B1434u) goto L_088B1434;
    return;
L_088B1434:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B1454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B1454u) goto L_088B1454;
    return;
L_088B1454:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5344));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5676));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23880));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(5312));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8108));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(5080));
    ctx.set_gpr(31, 0x088B14B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B14B0u) goto L_088B14B0;
    return;
L_088B14B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B14C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B14D0u);
    // nop
    goto L_088B138C;
L_088B14D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B14E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23880)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B1508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B1508u) goto L_088B1508;
    return;
L_088B1508:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8136));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088B1524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B1524u) goto L_088B1524;
    return;
L_088B1524:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B1534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1534u) goto L_088B1534;
    return;
L_088B1534:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8232));
    ctx.set_gpr(31, 0x088B154Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B154Cu) goto L_088B154C;
    return;
L_088B154C:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24480));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B1568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1568u) goto L_088B1568;
    return;
L_088B1568:
    ctx.set_gpr(3, 2189u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2764));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B1584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1584u) goto L_088B1584;
    return;
L_088B1584:
    ctx.set_gpr(3, 2201u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7616));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B15A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B15A0u) goto L_088B15A0;
    return;
L_088B15A0:
    ctx.set_gpr(3, 2201u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7616));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B15BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B15BCu) goto L_088B15BC;
    return;
L_088B15BC:
    ctx.set_gpr(3, 2201u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7524));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B15D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B15D8u) goto L_088B15D8;
    return;
L_088B15D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088B15E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x088B15E8u) goto L_088B15E8;
    return;
L_088B15E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8160));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8184));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8208));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B1610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1610u) goto L_088B1610;
    return;
L_088B1610:
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
L_088B162C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B163Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 150u, 0x088D0B40u>(ctx, &aot_mem) && ctx.pc == 0x088B163Cu) goto L_088B163C;
    return;
L_088B163C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B164C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23908)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1678;
      }
      goto L_088B1664;
    }
L_088B1664:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1680;
      }
      goto L_088B1678;
    }
L_088B1678:
    ctx.set_gpr(31, 0x088B1680u);
    // nop
    goto L_088B16DC;
L_088B1680:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23908)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1698:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B16ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B16ACu) goto L_088B16AC;
    return;
L_088B16AC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B16C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B16C0u) goto L_088B16C0;
    return;
L_088B16C0:
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
L_088B16DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5892));
    ctx.set_gpr(31, 0x088B16F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B16F4u) goto L_088B16F4;
    return;
L_088B16F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1704:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B1714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B1714u) goto L_088B1714;
    return;
L_088B1714:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23908));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(6008));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8236));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(5784));
    ctx.set_gpr(31, 0x088B1768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B1768u) goto L_088B1768;
    return;
L_088B1768:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B1788u);
    // nop
    goto L_088B164C;
L_088B1788:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1798:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23908)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B17C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B17C0u) goto L_088B17C0;
    return;
L_088B17C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8256));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088B17DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B17DCu) goto L_088B17DC;
    return;
L_088B17DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B17ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B17ECu) goto L_088B17EC;
    return;
L_088B17EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8332));
    ctx.set_gpr(31, 0x088B1804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B1804u) goto L_088B1804;
    return;
L_088B1804:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19660));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B1820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1820u) goto L_088B1820;
    return;
L_088B1820:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8336));
    ctx.set_gpr(31, 0x088B1838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B1838u) goto L_088B1838;
    return;
L_088B1838:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19660));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8308));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8316));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8324));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B186Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B186Cu) goto L_088B186C;
    return;
L_088B186C:
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
L_088B1888:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23920)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B18C8;
      }
      goto L_088B18A0;
    }
L_088B18A0:
    ctx.set_gpr(31, 0x088B18A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088B18A8u) goto L_088B18A8;
    return;
L_088B18A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088B18B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088B18B4u) goto L_088B18B4;
    return;
L_088B18B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B18C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088B18C0u) goto L_088B18C0;
    return;
L_088B18C0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23920), ctx.gpr[2]);
    goto L_088B18C8;
L_088B18C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23920)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B18E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23920)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B190C;
      }
      goto L_088B18F8;
    }
L_088B18F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1914;
      }
      goto L_088B190C;
    }
L_088B190C:
    ctx.set_gpr(31, 0x088B1914u);
    // nop
    goto L_088B1A14;
L_088B1914:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23920)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B192C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088B1944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B1944u) goto L_088B1944;
    return;
L_088B1944:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31584));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2368));
    ctx.set_gpr(6, 2180u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11300));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088B1984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x088B1984u) goto L_088B1984;
    return;
L_088B1984:
    ctx.set_gpr(31, 0x088B198Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B198Cu) goto L_088B198C;
    return;
L_088B198C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31584));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11300));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088B19C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x088B19C0u) goto L_088B19C0;
    return;
L_088B19C0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30988));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x088B19D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088B19D8u) goto L_088B19D8;
    return;
L_088B19D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x088B19E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088B19E4u) goto L_088B19E4;
    return;
L_088B19E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x088B19F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088B19F0u) goto L_088B19F0;
    return;
L_088B19F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x088B19FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088B19FCu) goto L_088B19FC;
    return;
L_088B19FC:
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
L_088B1A14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6716));
    ctx.set_gpr(31, 0x088B1A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B1A2Cu) goto L_088B1A2C;
    return;
L_088B1A2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1A3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B1A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B1A4Cu) goto L_088B1A4C;
    return;
L_088B1A4C:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6888));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23920));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10184));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6872));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(6840));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8348));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(6444));
    ctx.set_gpr(31, 0x088B1AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B1AA8u) goto L_088B1AA8;
    return;
L_088B1AA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1AB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B1AC8u);
    // nop
    goto L_088B18E0;
L_088B1AC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1AD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23984)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1AE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23920)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B1B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B1B10u) goto L_088B1B10;
    return;
L_088B1B10:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8368));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088B1B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B1B2Cu) goto L_088B1B2C;
    return;
L_088B1B2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B1B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1B3Cu) goto L_088B1B3C;
    return;
L_088B1B3C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B1B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 260u, 0x089957D0u>(ctx, &aot_mem) && ctx.pc == 0x088B1B48u) goto L_088B1B48;
    return;
L_088B1B48:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B1B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1B64u) goto L_088B1B64;
    return;
L_088B1B64:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8448));
    ctx.set_gpr(31, 0x088B1B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B1B7Cu) goto L_088B1B7C;
    return;
L_088B1B7C:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7116));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8412));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8424));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8436));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B1BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1BB0u) goto L_088B1BB0;
    return;
L_088B1BB0:
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
L_088B1BCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23936)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1C10;
      }
      goto L_088B1BE4;
    }
L_088B1BE4:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8508));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8484));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8496));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088B1C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088B1C08u) goto L_088B1C08;
    return;
L_088B1C08:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23936), ctx.gpr[2]);
    goto L_088B1C10;
L_088B1C10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23936)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1C28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088B1C40u);
    // nop
    goto L_088B1D50;
L_088B1C40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23940)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B1C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088B1C54u) goto L_088B1C54;
    return;
L_088B1C54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1C68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23940)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1CA8;
      }
      goto L_088B1C80;
    }
L_088B1C80:
    ctx.set_gpr(31, 0x088B1C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088B1C88u) goto L_088B1C88;
    return;
L_088B1C88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088B1C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088B1C94u) goto L_088B1C94;
    return;
L_088B1C94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B1CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088B1CA0u) goto L_088B1CA0;
    return;
L_088B1CA0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23940), ctx.gpr[2]);
    goto L_088B1CA8;
L_088B1CA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23940)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1CC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23940)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1CEC;
      }
      goto L_088B1CD8;
    }
L_088B1CD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1CF4;
      }
      goto L_088B1CEC;
    }
L_088B1CEC:
    ctx.set_gpr(31, 0x088B1CF4u);
    // nop
    goto L_088B1D50;
L_088B1CF4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23940)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1D0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088B1D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B1D20u) goto L_088B1D20;
    return;
L_088B1D20:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31420));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B1D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B1D34u) goto L_088B1D34;
    return;
L_088B1D34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1D50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7544));
    ctx.set_gpr(31, 0x088B1D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B1D68u) goto L_088B1D68;
    return;
L_088B1D68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1D78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B1D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B1D88u) goto L_088B1D88;
    return;
L_088B1D88:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7692));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23940));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(7660));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8520));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(7436));
    ctx.set_gpr(31, 0x088B1DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B1DDCu) goto L_088B1DDC;
    return;
L_088B1DDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1DEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B1DFCu);
    // nop
    goto L_088B1CC0;
L_088B1DFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1E0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23940)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B1E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B1E34u) goto L_088B1E34;
    return;
L_088B1E34:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8548));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088B1E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B1E50u) goto L_088B1E50;
    return;
L_088B1E50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B1E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1E60u) goto L_088B1E60;
    return;
L_088B1E60:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8612));
    ctx.set_gpr(31, 0x088B1E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B1E78u) goto L_088B1E78;
    return;
L_088B1E78:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19016));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B1E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1E94u) goto L_088B1E94;
    return;
L_088B1E94:
    ctx.set_gpr(3, 2189u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1828));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8576));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8588));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8600));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B1EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1EC8u) goto L_088B1EC8;
    return;
L_088B1EC8:
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
L_088B1EE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23956)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1F10;
      }
      goto L_088B1EFC;
    }
L_088B1EFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1F18;
      }
      goto L_088B1F10;
    }
L_088B1F10:
    ctx.set_gpr(31, 0x088B1F18u);
    // nop
    goto L_088B1FE8;
L_088B1F18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23956)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1F30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088B1F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B1F48u) goto L_088B1F48;
    return;
L_088B1F48:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31276));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088B1F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B1F64u) goto L_088B1F64;
    return;
L_088B1F64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31276));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1FA0;
      }
      goto L_088B1F8C;
    }
L_088B1F8C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088B1F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1F98u) goto L_088B1F98;
    return;
L_088B1F98:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088B1FA0;
L_088B1FA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1FB8;
      }
      goto L_088B1FA8;
    }
L_088B1FA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088B1FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088B1FB8u) goto L_088B1FB8;
    return;
L_088B1FB8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31132));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x088B1FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1FD0u) goto L_088B1FD0;
    return;
L_088B1FD0:
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
L_088B1FE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8208));
    ctx.set_gpr(31, 0x088B2000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B2000u) goto L_088B2000;
    return;
L_088B2000:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2010:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B2020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B2020u) goto L_088B2020;
    return;
L_088B2020:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8372));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23956));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8916));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8356));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8324));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8616));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(7984));
    ctx.set_gpr(31, 0x088B2074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B2074u) goto L_088B2074;
    return;
L_088B2074:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B2094u);
    // nop
    goto L_088B1EE4;
L_088B2094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B20A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23968)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B20B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23956)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B20D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B20D8u) goto L_088B20D8;
    return;
L_088B20D8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8640));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088B20F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B20F4u) goto L_088B20F4;
    return;
L_088B20F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B2104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2104u) goto L_088B2104;
    return;
L_088B2104:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32748));
    ctx.set_gpr(31, 0x088B2114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088B2114u) goto L_088B2114;
    return;
L_088B2114:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8676));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8684));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8692));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B213Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B213Cu) goto L_088B213C;
    return;
L_088B213C:
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
L_088B2154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088B216Cu);
    // nop
    goto L_088B22AC;
L_088B216C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23968)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088B2180u) goto L_088B2180;
    return;
L_088B2180:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2194:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23968)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B21D4;
      }
      goto L_088B21AC;
    }
L_088B21AC:
    ctx.set_gpr(31, 0x088B21B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088B21B4u) goto L_088B21B4;
    return;
L_088B21B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088B21C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088B21C0u) goto L_088B21C0;
    return;
L_088B21C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B21CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088B21CCu) goto L_088B21CC;
    return;
L_088B21CC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23968), ctx.gpr[2]);
    goto L_088B21D4;
L_088B21D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23968)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B21EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23968)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2218;
      }
      goto L_088B2204;
    }
L_088B2204:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2220;
      }
      goto L_088B2218;
    }
L_088B2218:
    ctx.set_gpr(31, 0x088B2220u);
    // nop
    goto L_088B22AC;
L_088B2220:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23968)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B2250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B2250u) goto L_088B2250;
    return;
L_088B2250:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31132));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088B2268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B2268u) goto L_088B2268;
    return;
L_088B2268:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31132));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2294;
      }
      goto L_088B228C;
    }
L_088B228C:
    ctx.set_gpr(31, 0x088B2294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088B2294u) goto L_088B2294;
    return;
L_088B2294:
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
L_088B22AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8916));
    ctx.set_gpr(31, 0x088B22C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B22C4u) goto L_088B22C4;
    return;
L_088B22C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B22D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B22E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B22E4u) goto L_088B22E4;
    return;
L_088B22E4:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9080));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9276));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8700));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23968));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9048));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8708));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(8760));
    ctx.set_gpr(31, 0x088B2348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B2348u) goto L_088B2348;
    return;
L_088B2348:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B2368u);
    // nop
    goto L_088B21EC;
L_088B2368:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23968)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B23A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B23A0u) goto L_088B23A0;
    return;
L_088B23A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8728));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088B23BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B23BCu) goto L_088B23BC;
    return;
L_088B23BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B23CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B23CCu) goto L_088B23CC;
    return;
L_088B23CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B23D8u);
    // nop
    goto L_088B2640;
L_088B23D8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B23ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B23ECu) goto L_088B23EC;
    return;
L_088B23EC:
    ctx.set_gpr(3, 2189u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1228));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8736));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8744));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8752));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B2420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2420u) goto L_088B2420;
    return;
L_088B2420:
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
L_088B243C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B244Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 73u, 0x088D0540u>(ctx, &aot_mem) && ctx.pc == 0x088B244Cu) goto L_088B244C;
    return;
L_088B244C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B245C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23980)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B249C;
      }
      goto L_088B2474;
    }
L_088B2474:
    ctx.set_gpr(31, 0x088B247Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088B247Cu) goto L_088B247C;
    return;
L_088B247C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088B2488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088B2488u) goto L_088B2488;
    return;
L_088B2488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B2494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088B2494u) goto L_088B2494;
    return;
L_088B2494:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23980), ctx.gpr[2]);
    goto L_088B249C;
L_088B249C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23980)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B24B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23980)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B24E0;
      }
      goto L_088B24CC;
    }
L_088B24CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B24E8;
      }
      goto L_088B24E0;
    }
L_088B24E0:
    ctx.set_gpr(31, 0x088B24E8u);
    // nop
    goto L_088B2544;
L_088B24E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23980)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B2514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088B2514u) goto L_088B2514;
    return;
L_088B2514:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15888));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B2528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B2528u) goto L_088B2528;
    return;
L_088B2528:
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
L_088B2544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9580));
    ctx.set_gpr(31, 0x088B255Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B255Cu) goto L_088B255C;
    return;
L_088B255C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B256C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B257Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B257Cu) goto L_088B257C;
    return;
L_088B257C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8760));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23980));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9696));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8768));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(9472));
    ctx.set_gpr(31, 0x088B25D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B25D0u) goto L_088B25D0;
    return;
L_088B25D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B25E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B25F0u);
    // nop
    goto L_088B24B4;
L_088B25F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2600:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088B2618u);
    // nop
    goto L_088B27A0;
L_088B2618:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23984)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B262Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088B262Cu) goto L_088B262C;
    return;
L_088B262C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2640:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23984)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2680;
      }
      goto L_088B2658;
    }
L_088B2658:
    ctx.set_gpr(31, 0x088B2660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088B2660u) goto L_088B2660;
    return;
L_088B2660:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088B266Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088B266Cu) goto L_088B266C;
    return;
L_088B266C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B2678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088B2678u) goto L_088B2678;
    return;
L_088B2678:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23984), ctx.gpr[2]);
    goto L_088B2680;
L_088B2680:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23984)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2698:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23984)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B26C4;
      }
      goto L_088B26B0;
    }
L_088B26B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B26CC;
      }
      goto L_088B26C4;
    }
L_088B26C4:
    ctx.set_gpr(31, 0x088B26CCu);
    // nop
    goto L_088B27A0;
L_088B26CC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23984)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B26E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088B26FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B26FCu) goto L_088B26FC;
    return;
L_088B26FC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30988));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(31, 0x088B2720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B2720u) goto L_088B2720;
    return;
L_088B2720:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30988));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B274C;
      }
      goto L_088B2744;
    }
L_088B2744:
    ctx.set_gpr(31, 0x088B274Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088B274Cu) goto L_088B274C;
    return;
L_088B274C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2760;
      }
      goto L_088B2758;
    }
L_088B2758:
    ctx.set_gpr(31, 0x088B2760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088B2760u) goto L_088B2760;
    return;
L_088B2760:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2774;
      }
      goto L_088B276C;
    }
L_088B276C:
    ctx.set_gpr(31, 0x088B2774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088B2774u) goto L_088B2774;
    return;
L_088B2774:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2788;
      }
      goto L_088B2780;
    }
L_088B2780:
    ctx.set_gpr(31, 0x088B2788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088B2788u) goto L_088B2788;
    return;
L_088B2788:
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
L_088B27A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10184));
    ctx.set_gpr(31, 0x088B27B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B27B8u) goto L_088B27B8;
    return;
L_088B27B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B27C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B27D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B27D8u) goto L_088B27D8;
    return;
L_088B27D8:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8788));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23984));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(10308));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8808));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(72));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(9956));
    ctx.set_gpr(31, 0x088B2834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B2834u) goto L_088B2834;
    return;
L_088B2834:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B2854u);
    // nop
    goto L_088B2698;
L_088B2854:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2864:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23984)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B288Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B288Cu) goto L_088B288C;
    return;
L_088B288C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8824));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x088B28A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B28A8u) goto L_088B28A8;
    return;
L_088B28A8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B28B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B28B8u) goto L_088B28B8;
    return;
L_088B28B8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9208));
    ctx.set_gpr(31, 0x088B28D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B28D0u) goto L_088B28D0;
    return;
L_088B28D0:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19660));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B28ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B28ECu) goto L_088B28EC;
    return;
L_088B28EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9212));
    ctx.set_gpr(31, 0x088B2904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B2904u) goto L_088B2904;
    return;
L_088B2904:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19660));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2920u) goto L_088B2920;
    return;
L_088B2920:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9216));
    ctx.set_gpr(31, 0x088B2938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B2938u) goto L_088B2938;
    return;
L_088B2938:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19568));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2954u) goto L_088B2954;
    return;
L_088B2954:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9220));
    ctx.set_gpr(31, 0x088B296Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B296Cu) goto L_088B296C;
    return;
L_088B296C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19568));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2988u) goto L_088B2988;
    return;
L_088B2988:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088B299Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088B299Cu) goto L_088B299C;
    return;
L_088B299C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B29C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B29C4u) goto L_088B29C4;
    return;
L_088B29C4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9224));
    ctx.set_gpr(31, 0x088B29DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B29DCu) goto L_088B29DC;
    return;
L_088B29DC:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19384));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B29F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B29F8u) goto L_088B29F8;
    return;
L_088B29F8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9228));
    ctx.set_gpr(31, 0x088B2A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B2A10u) goto L_088B2A10;
    return;
L_088B2A10:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19476));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2A2Cu) goto L_088B2A2C;
    return;
L_088B2A2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B2A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 260u, 0x089957D0u>(ctx, &aot_mem) && ctx.pc == 0x088B2A38u) goto L_088B2A38;
    return;
L_088B2A38:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2A4Cu) goto L_088B2A4C;
    return;
L_088B2A4C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B2A58u);
    // nop
    goto L_088B01D0;
L_088B2A58:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2A6Cu) goto L_088B2A6C;
    return;
L_088B2A6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088B2A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088B2A7Cu) goto L_088B2A7C;
    return;
L_088B2A7C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2A8Cu) goto L_088B2A8C;
    return;
L_088B2A8C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B2A98u);
    // nop
    goto L_088B245C;
L_088B2A98:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2AB4u) goto L_088B2AB4;
    return;
L_088B2AB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B2AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 54u, 0x0898C4FCu>(ctx, &aot_mem) && ctx.pc == 0x088B2AC0u) goto L_088B2AC0;
    return;
L_088B2AC0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2AECu) goto L_088B2AEC;
    return;
L_088B2AEC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9028));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9088));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9148));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B2B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2B18u) goto L_088B2B18;
    return;
L_088B2B18:
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
L_088B2B34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24048)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2B60;
      }
      goto L_088B2B4C;
    }
L_088B2B4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2B68;
      }
      goto L_088B2B60;
    }
L_088B2B60:
    ctx.set_gpr(31, 0x088B2B68u);
    // nop
    goto L_088B2BC4;
L_088B2B68:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24048)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2B80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B2B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B2B94u) goto L_088B2B94;
    return;
L_088B2B94:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30824));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B2BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B2BA8u) goto L_088B2BA8;
    return;
L_088B2BA8:
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
L_088B2BC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11244));
    ctx.set_gpr(31, 0x088B2BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B2BDCu) goto L_088B2BDC;
    return;
L_088B2BDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2BEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B2BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B2BFCu) goto L_088B2BFC;
    return;
L_088B2BFC:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11392));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24048));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(11360));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9232));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(11136));
    ctx.set_gpr(31, 0x088B2C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B2C50u) goto L_088B2C50;
    return;
L_088B2C50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2C60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B2C70u);
    // nop
    goto L_088B2B34;
L_088B2C70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2C80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24048)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B2CA8u) goto L_088B2CA8;
    return;
L_088B2CA8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9260));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088B2CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B2CC4u) goto L_088B2CC4;
    return;
L_088B2CC4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B2CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2CD4u) goto L_088B2CD4;
    return;
L_088B2CD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088B2CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088B2CE4u) goto L_088B2CE4;
    return;
L_088B2CE4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2CF4u) goto L_088B2CF4;
    return;
L_088B2CF4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9292));
    ctx.set_gpr(31, 0x088B2D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B2D0Cu) goto L_088B2D0C;
    return;
L_088B2D0C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19568));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9268));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9276));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9284));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B2D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2D40u) goto L_088B2D40;
    return;
L_088B2D40:
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
L_088B2D5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24060)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2D9C;
      }
      goto L_088B2D74;
    }
L_088B2D74:
    ctx.set_gpr(31, 0x088B2D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088B2D7Cu) goto L_088B2D7C;
    return;
L_088B2D7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088B2D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088B2D88u) goto L_088B2D88;
    return;
L_088B2D88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B2D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088B2D94u) goto L_088B2D94;
    return;
L_088B2D94:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24060), ctx.gpr[2]);
    goto L_088B2D9C;
L_088B2D9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24060)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24060)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2DE0;
      }
      goto L_088B2DCC;
    }
L_088B2DCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2DE8;
      }
      goto L_088B2DE0;
    }
L_088B2DE0:
    ctx.set_gpr(31, 0x088B2DE8u);
    // nop
    goto L_088B2E50;
L_088B2DE8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24060)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2E00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088B2E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B2E14u) goto L_088B2E14;
    return;
L_088B2E14:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B2E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x088B2E2Cu) goto L_088B2E2C;
    return;
L_088B2E2C:
    ctx.set_gpr(31, 0x088B2E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B2E34u) goto L_088B2E34;
    return;
L_088B2E34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2E50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11896));
    ctx.set_gpr(31, 0x088B2E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B2E68u) goto L_088B2E68;
    return;
L_088B2E68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2E78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B2E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B2E88u) goto L_088B2E88;
    return;
L_088B2E88:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12044));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24060));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(12012));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9296));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(11776));
    ctx.set_gpr(31, 0x088B2EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B2EDCu) goto L_088B2EDC;
    return;
L_088B2EDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2EEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B2EFCu);
    // nop
    goto L_088B2DB4;
L_088B2EFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2F0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24060)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B2F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B2F34u) goto L_088B2F34;
    return;
L_088B2F34:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9316));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088B2F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B2F50u) goto L_088B2F50;
    return;
L_088B2F50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B2F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2F60u) goto L_088B2F60;
    return;
L_088B2F60:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
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
    ctx.set_gpr(31, 0x088B2FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088B2FB8u) goto L_088B2FB8;
    return;
L_088B2FB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088B2FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088B2FC8u) goto L_088B2FC8;
    return;
L_088B2FC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088B2FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088B2FD8u) goto L_088B2FD8;
    return;
L_088B2FD8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088B2FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x088B2FE8u) goto L_088B2FE8;
    return;
L_088B2FE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x088B2FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x088B2FF8u) goto L_088B2FF8;
    return;
L_088B2FF8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B3008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3008u) goto L_088B3008;
    return;
L_088B3008:
    ctx.set_gpr(3, 2189u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1592));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9324));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9332));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9340));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B303Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B303Cu) goto L_088B303C;
    return;
L_088B303C:
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
L_088B3058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24072)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3084;
      }
      goto L_088B3070;
    }
L_088B3070:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B308C;
      }
      goto L_088B3084;
    }
L_088B3084:
    ctx.set_gpr(31, 0x088B308Cu);
    // nop
    goto L_088B30E8;
L_088B308C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24072)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B30A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088B30B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B30B8u) goto L_088B30B8;
    return;
L_088B30B8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30544));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B30CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B30CCu) goto L_088B30CC;
    return;
L_088B30CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B30E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12560));
    ctx.set_gpr(31, 0x088B3100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B3100u) goto L_088B3100;
    return;
L_088B3100:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B3120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B3120u) goto L_088B3120;
    return;
L_088B3120:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12716));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12860));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24072));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(12684));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9348));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12452));
    ctx.set_gpr(31, 0x088B317Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B317Cu) goto L_088B317C;
    return;
L_088B317C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B318C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B319Cu);
    // nop
    goto L_088B3058;
L_088B319C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B31AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24072)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B31D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B31D0u) goto L_088B31D0;
    return;
L_088B31D0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9372));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088B31ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B31ECu) goto L_088B31EC;
    return;
L_088B31EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9376));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9380));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9384));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B3214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3214u) goto L_088B3214;
    return;
L_088B3214:
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12892));
    ctx.set_gpr(31, 0x088B3224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088B3224u) goto L_088B3224;
    return;
L_088B3224:
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
L_088B323C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B324Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 117u, 0x088C4C30u>(ctx, &aot_mem) && ctx.pc == 0x088B324Cu) goto L_088B324C;
    return;
L_088B324C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B325C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B326Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 115u, 0x088C4C04u>(ctx, &aot_mem) && ctx.pc == 0x088B326Cu) goto L_088B326C;
    return;
L_088B326C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B327C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24080)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B32A8;
      }
      goto L_088B3294;
    }
L_088B3294:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B32B0;
      }
      goto L_088B32A8;
    }
L_088B32A8:
    ctx.set_gpr(31, 0x088B32B0u);
    // nop
    goto L_088B3334;
L_088B32B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24080)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B32C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088B32E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B32E0u) goto L_088B32E0;
    return;
L_088B32E0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30404));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B32F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B32F8u) goto L_088B32F8;
    return;
L_088B32F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31132));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x088B331Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088B331Cu) goto L_088B331C;
    return;
L_088B331C:
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
L_088B3334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13148));
    ctx.set_gpr(31, 0x088B334Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B334Cu) goto L_088B334C;
    return;
L_088B334C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B335C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B336Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B336Cu) goto L_088B336C;
    return;
L_088B336C:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24080));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8916));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8356));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13264));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9388));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(13000));
    ctx.set_gpr(31, 0x088B33C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B33C0u) goto L_088B33C0;
    return;
L_088B33C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B33D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B33E0u);
    // nop
    goto L_088B327C;
L_088B33E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B33F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24080)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B3418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B3418u) goto L_088B3418;
    return;
L_088B3418:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9412));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088B3434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B3434u) goto L_088B3434;
    return;
L_088B3434:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B3444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3444u) goto L_088B3444;
    return;
L_088B3444:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9540));
    ctx.set_gpr(31, 0x088B345Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B345Cu) goto L_088B345C;
    return;
L_088B345C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19568));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B3478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3478u) goto L_088B3478;
    return;
L_088B3478:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9544));
    ctx.set_gpr(31, 0x088B3490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B3490u) goto L_088B3490;
    return;
L_088B3490:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19568));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9468));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9492));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9516));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B34C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B34C4u) goto L_088B34C4;
    return;
L_088B34C4:
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
L_088B34E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088B34F8u);
    // nop
    goto L_088B3608;
L_088B34F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24108)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B350Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088B350Cu) goto L_088B350C;
    return;
L_088B350C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3520:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24108)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B3560;
      }
      goto L_088B3538;
    }
L_088B3538:
    ctx.set_gpr(31, 0x088B3540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088B3540u) goto L_088B3540;
    return;
L_088B3540:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088B354Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088B354Cu) goto L_088B354C;
    return;
L_088B354C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B3558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088B3558u) goto L_088B3558;
    return;
L_088B3558:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24108), ctx.gpr[2]);
    goto L_088B3560;
L_088B3560:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24108)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24108)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B35A4;
      }
      goto L_088B3590;
    }
L_088B3590:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B35AC;
      }
      goto L_088B35A4;
    }
L_088B35A4:
    ctx.set_gpr(31, 0x088B35ACu);
    // nop
    goto L_088B3608;
L_088B35AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24108)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B35C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088B35D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B35D8u) goto L_088B35D8;
    return;
L_088B35D8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30260));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B35ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B35ECu) goto L_088B35EC;
    return;
L_088B35EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3608:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13872));
    ctx.set_gpr(31, 0x088B3620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B3620u) goto L_088B3620;
    return;
L_088B3620:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3630:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B3640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B3640u) goto L_088B3640;
    return;
L_088B3640:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14020));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24108));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13988));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9548));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(13764));
    ctx.set_gpr(31, 0x088B3694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B3694u) goto L_088B3694;
    return;
L_088B3694:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B36A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B36B4u);
    // nop
    goto L_088B3578;
L_088B36B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B36C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24108)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B36E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B36E8u) goto L_088B36E8;
    return;
L_088B36E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9568));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088B3704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B3704u) goto L_088B3704;
    return;
L_088B3704:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9572));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9576));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9580));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B372Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B372Cu) goto L_088B372C;
    return;
L_088B372C:
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
L_088B3744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088B375Cu);
    // nop
    goto L_088B3814;
L_088B375C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24116)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B3770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088B3770u) goto L_088B3770;
    return;
L_088B3770:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3784:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24116)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B37B0;
      }
      goto L_088B379C;
    }
L_088B379C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B37B8;
      }
      goto L_088B37B0;
    }
L_088B37B0:
    ctx.set_gpr(31, 0x088B37B8u);
    // nop
    goto L_088B3814;
L_088B37B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24116)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B37D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088B37E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B37E4u) goto L_088B37E4;
    return;
L_088B37E4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30120));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088B37F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B37F8u) goto L_088B37F8;
    return;
L_088B37F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14396));
    ctx.set_gpr(31, 0x088B382Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B382Cu) goto L_088B382C;
    return;
L_088B382C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B383C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B384Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B384Cu) goto L_088B384C;
    return;
L_088B384C:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14544));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24116));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14512));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9584));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14288));
    ctx.set_gpr(31, 0x088B38A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B38A0u) goto L_088B38A0;
    return;
L_088B38A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B38B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B38C0u);
    // nop
    goto L_088B3784;
L_088B38C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B38D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24116)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B38F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B38F8u) goto L_088B38F8;
    return;
L_088B38F8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9608));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088B3914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B3914u) goto L_088B3914;
    return;
L_088B3914:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B3924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3924u) goto L_088B3924;
    return;
L_088B3924:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9812));
    ctx.set_gpr(31, 0x088B393Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B393Cu) goto L_088B393C;
    return;
L_088B393C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18188));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B3958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3958u) goto L_088B3958;
    return;
L_088B3958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088B3968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088B3968u) goto L_088B3968;
    return;
L_088B3968:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B3978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3978u) goto L_088B3978;
    return;
L_088B3978:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088B3988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088B3988u) goto L_088B3988;
    return;
L_088B3988:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B3998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3998u) goto L_088B3998;
    return;
L_088B3998:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9816));
    ctx.set_gpr(31, 0x088B39B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B39B0u) goto L_088B39B0;
    return;
L_088B39B0:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18096));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B39CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B39CCu) goto L_088B39CC;
    return;
L_088B39CC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9820));
    ctx.set_gpr(31, 0x088B39E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B39E4u) goto L_088B39E4;
    return;
L_088B39E4:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18096));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B3A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3A00u) goto L_088B3A00;
    return;
L_088B3A00:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9824));
    ctx.set_gpr(31, 0x088B3A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B3A18u) goto L_088B3A18;
    return;
L_088B3A18:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18096));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9728));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9756));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9784));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B3A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3A4Cu) goto L_088B3A4C;
    return;
L_088B3A4C:
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
L_088B3A68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24148)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3A94;
      }
      goto L_088B3A80;
    }
L_088B3A80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B3A9C;
      }
      goto L_088B3A94;
    }
L_088B3A94:
    ctx.set_gpr(31, 0x088B3A9Cu);
    // nop
    goto L_088B3B28;
L_088B3A9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24148)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3AB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088B3ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B3ACCu) goto L_088B3ACC;
    return;
L_088B3ACC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(31, 0x088B3AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B3AE4u) goto L_088B3AE4;
    return;
L_088B3AE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3B10;
      }
      goto L_088B3B08;
    }
L_088B3B08:
    ctx.set_gpr(31, 0x088B3B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088B3B10u) goto L_088B3B10;
    return;
L_088B3B10:
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
L_088B3B28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(31, 0x088B3B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B3B40u) goto L_088B3B40;
    return;
L_088B3B40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3B50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B3B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B3B60u) goto L_088B3B60;
    return;
L_088B3B60:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15356));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9828));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24148));
    ctx.set_gpr(6, 2188u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7008));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(15340));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(15308));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9836));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(15028));
    ctx.set_gpr(31, 0x088B3BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B3BBCu) goto L_088B3BBC;
    return;
L_088B3BBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3BCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B3BDCu);
    // nop
    goto L_088B3A68;
L_088B3BDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3BEC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25184)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3BFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24148)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B3C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B3C24u) goto L_088B3C24;
    return;
L_088B3C24:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9852));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088B3C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B3C40u) goto L_088B3C40;
    return;
L_088B3C40:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B3C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3C50u) goto L_088B3C50;
    return;
L_088B3C50:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B3C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 591u, 0x0898F498u>(ctx, &aot_mem) && ctx.pc == 0x088B3C5Cu) goto L_088B3C5C;
    return;
L_088B3C5C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088B3C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3C70u) goto L_088B3C70;
    return;
L_088B3C70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088B3C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088B3C80u) goto L_088B3C80;
    return;
L_088B3C80:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9900));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9912));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9924));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B3CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3CA8u) goto L_088B3CA8;
    return;
L_088B3CA8:
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
L_088B3CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24164)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3CF0;
      }
      goto L_088B3CDC;
    }
L_088B3CDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B3CF8;
      }
      goto L_088B3CF0;
    }
L_088B3CF0:
    ctx.set_gpr(31, 0x088B3CF8u);
    // nop
    goto L_088B3D84;
L_088B3CF8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24164)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3D10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088B3D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088B3D28u) goto L_088B3D28;
    return;
L_088B3D28:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29820));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(31, 0x088B3D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B3D40u) goto L_088B3D40;
    return;
L_088B3D40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29820));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3D6C;
      }
      goto L_088B3D64;
    }
L_088B3D64:
    ctx.set_gpr(31, 0x088B3D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088B3D6Cu) goto L_088B3D6C;
    return;
L_088B3D6C:
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
L_088B3D84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15788));
    ctx.set_gpr(31, 0x088B3D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B3D9Cu) goto L_088B3D9C;
    return;
L_088B3D9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3DAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B3DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B3DBCu) goto L_088B3DBC;
    return;
L_088B3DBC:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15944));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9936));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24164));
    ctx.set_gpr(6, 2188u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7008));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(15340));
    ctx.set_gpr(8, 2187u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(15912));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9944));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2187u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(15632));
    ctx.set_gpr(31, 0x088B3E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088B3E18u) goto L_088B3E18;
    return;
L_088B3E18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3E28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B3E38u);
    // nop
    goto L_088B3CC4;
L_088B3E38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3E48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24164)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B3E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088B3E70u) goto L_088B3E70;
    return;
L_088B3E70:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9960));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088B3E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088B3E8Cu) goto L_088B3E8C;
    return;
L_088B3E8C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B3E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3E9Cu) goto L_088B3E9C;
    return;
L_088B3E9C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10120));
    ctx.set_gpr(31, 0x088B3EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B3EB4u) goto L_088B3EB4;
    return;
L_088B3EB4:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17728));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B3ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3ED0u) goto L_088B3ED0;
    return;
L_088B3ED0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088B3EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 424u, 0x0898E584u>(ctx, &aot_mem) && ctx.pc == 0x088B3EDCu) goto L_088B3EDC;
    return;
L_088B3EDC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B3EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3EF0u) goto L_088B3EF0;
    return;
L_088B3EF0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10124));
    ctx.set_gpr(31, 0x088B3F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088B3F08u) goto L_088B3F08;
    return;
L_088B3F08:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17636));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088B3F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3F24u) goto L_088B3F24;
    return;
L_088B3F24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088B3F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088B3F34u) goto L_088B3F34;
    return;
L_088B3F34:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10048));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10072));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(10096));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088B3F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3F5Cu) goto L_088B3F5C;
    return;
L_088B3F5C:
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
L_088B3F78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24192)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3FA4;
      }
      goto L_088B3F90;
    }
L_088B3F90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B3FAC;
      }
      goto L_088B3FA4;
    }
L_088B3FA4:
    ctx.set_gpr(31, 0x088B3FACu);
    // nop
    goto L_088B3FC4;
L_088B3FAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24192)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3FC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2187u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16364));
    ctx.set_gpr(31, 0x088B3FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088B3FDCu) goto L_088B3FDC;
    return;
L_088B3FDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3FEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088B3FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B3FFCu) goto L_088B3FFC;
    return;
L_088B3FFC:
    ctx.set_gpr(2, 2187u << 16u);
    ctx.pc = 0x088B4000u; return;
}

void recomp_unit_0043(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0043_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_43(Runtime &runtime) {
    runtime.register_generated_unit(43u, 0x088B0000u, 16384u, &recomp_unit_0043, &recomp_unit_0043_entry);
    runtime.register_function(0x088B0000u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0008u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0024u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B003Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B004Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B005Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0108u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0124u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0134u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B014Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0168u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0180u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0208u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0210u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0228u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0240u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0254u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B025Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0274u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0288u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B029Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B034Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B035Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B036Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B037Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B03A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B03C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B03D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B03DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B03F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0428u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0444u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B045Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0470u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0484u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B049Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0514u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B052Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B053Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B054Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0618u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0628u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B065Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B066Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0684u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0694u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B06A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B06B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B06C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B06DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B06F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0704u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B071Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0730u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0738u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0750u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0764u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0778u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0794u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B07ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B07BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B07CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0828u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0838u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0848u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0858u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B087Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0898u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B08A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B08DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B08ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0904u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0914u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0924u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0934u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0944u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B095Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0964u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0970u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B097Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0984u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B099Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A14u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0AC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0AD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0AE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0AF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0B1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0B38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0B48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0BA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0BB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0BC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0BD0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0BE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0BF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E2Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1000u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1018u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B102Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1040u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1058u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1060u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B106Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1078u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1080u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1098u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B110Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1128u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1140u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1150u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1160u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1214u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1230u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1240u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1258u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1274u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1290u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1304u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B131Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1350u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B136Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B137Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B138Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1400u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B141Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1434u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1444u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1454u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1508u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1524u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1534u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B154Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1568u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1584u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1610u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B162Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B163Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B164Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1664u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1678u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1680u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1698u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B16ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B16C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B16DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B16F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1704u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1714u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1768u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1778u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1788u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1798u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1804u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1820u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1838u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B186Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1888u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B190Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1914u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B192Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1944u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1984u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B198Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A14u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A2Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A3Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A4Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AB8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B2Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B3Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BCCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FB8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FD0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2000u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2010u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2020u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2074u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2084u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2094u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2104u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2114u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B213Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2154u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B216Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2180u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2194u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B21ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B21B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B21C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B21CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B21D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B21ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2204u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2218u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2220u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2238u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2250u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2268u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B228Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2294u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2348u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2358u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2368u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2378u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2420u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B243Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B244Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B245Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2474u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B247Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2488u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2494u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B249Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2500u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2514u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2528u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2544u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B255Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B256Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B257Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2600u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2618u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B262Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2640u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2658u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2660u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B266Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2678u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2680u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2698u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2720u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2744u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B274Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2758u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2760u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B276Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2774u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2780u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2788u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2834u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2844u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2854u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2864u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B288Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2904u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2920u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2938u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2954u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B296Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2988u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B299Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A2Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A4Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B4Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DCCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E14u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E2Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2EDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2EECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2EFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FB8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3008u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B303Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3058u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3070u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3084u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B308Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3100u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3110u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3120u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B317Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B318Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B319Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3214u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3224u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B323Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B324Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B325Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B326Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B327Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3294u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B331Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3334u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B334Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B335Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B336Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3418u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3434u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3444u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B345Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3478u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3490u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B34C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B34E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B34F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B350Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3520u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3538u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3540u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B354Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3558u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3560u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3578u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3590u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3608u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3620u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3630u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3640u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3694u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3704u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B372Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3744u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B375Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3770u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3784u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B379Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3814u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B382Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B383Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B384Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B38A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B38B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B38C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B38D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B38F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3914u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3924u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B393Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3958u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3968u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3978u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3988u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3998u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A4Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3ACCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BCCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C24u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3DACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3DBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3E18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3E28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3E38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3E48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3E70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3E8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3E9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3EB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3ED0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3EDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3EF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F24u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FFCu, &recomp_unit_0043, "recomp_unit_0043");
}
} // namespace psprecomp
