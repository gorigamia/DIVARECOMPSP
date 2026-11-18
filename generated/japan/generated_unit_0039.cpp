#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0039[4091] = {
    1, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 22, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 27, 0,
    28, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    35, 36, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 41, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 50, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0,
    53, 0, 0, 0, 0, 54, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75,
    0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    80, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 91, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 0,
    0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0,
    103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 108, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0,
    114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0,
    121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 128, 0, 129, 0, 130, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0,
    148, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0,
    157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 162, 163, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0,
    0, 175, 176, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 185, 186, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194,
    0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230, 231, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 240, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0,
    0, 0, 0, 244, 245, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 258, 259, 0, 260, 0, 261, 0,
    262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0,
    271, 0, 272, 0, 0, 273, 274, 0, 275, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 283, 284, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 296,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 306, 0, 0, 307, 0, 0, 0, 0, 308, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 315, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 0,
    0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 324, 325, 326, 327, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0,
    0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    0, 337, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 345, 0, 346, 0,
    0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 353, 0, 354, 0, 0,
    0, 0, 0, 0, 0, 355, 356, 0, 0, 357, 0, 358, 0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 364, 0,
    365, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 370, 0, 0, 371, 0, 372, 0, 0, 373, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 380, 0, 0, 381, 382,
    0, 383, 0, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 389, 0, 390, 0, 391, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 399, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 408, 0, 409, 0, 410, 0, 0,
    0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0,
    420, 421, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 425, 426, 0, 427, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 436, 0, 0, 437, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 439, 440, 0, 441, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0,
    0, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 455, 456, 0, 0, 457, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 463, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0,
    0, 0, 0, 468, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 475, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 476, 477, 0, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 483, 484, 0, 0, 485,
    0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0, 0, 490, 491, 0, 0, 0, 492, 0, 0, 493, 0, 494,
    0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 500, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 503, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0,
    0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 0, 510, 511, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0,
    0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 517, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 523,
    0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 537,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0,
    545, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551,
    0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0,
    558, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564,
    0, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0,
    571, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 577,
    0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0,
    584, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 0,
    590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0,
    597, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0,
    603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0,
    610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 0, 614, 0, 0, 615, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640,
    0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 642, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646,
    0, 0, 0, 0, 647, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 654, 0, 655,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 664, 0,
    0, 665, 0, 0, 0, 0, 666, 0, 667, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 670, 0, 671, 0, 0, 672, 0, 673,
};
void recomp_unit_0039_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A0000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0039[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A0000;
    case 2u: goto L_088A0004;
    case 3u: goto L_088A0018;
    case 4u: goto L_088A0020;
    case 5u: goto L_088A004C;
    case 6u: goto L_088A0060;
    case 7u: goto L_088A0068;
    case 8u: goto L_088A0084;
    case 9u: goto L_088A0094;
    case 10u: goto L_088A00A0;
    case 11u: goto L_088A00C4;
    case 12u: goto L_088A00D4;
    case 13u: goto L_088A00DC;
    case 14u: goto L_088A00F4;
    case 15u: goto L_088A0120;
    case 16u: goto L_088A0134;
    case 17u: goto L_088A013C;
    case 18u: goto L_088A015C;
    case 19u: goto L_088A017C;
    case 20u: goto L_088A0190;
    case 21u: goto L_088A01B0;
    case 22u: goto L_088A01B4;
    case 23u: goto L_088A01BC;
    case 24u: goto L_088A01D8;
    case 25u: goto L_088A01E0;
    case 26u: goto L_088A01F4;
    case 27u: goto L_088A01F8;
    case 28u: goto L_088A0200;
    case 29u: goto L_088A0208;
    case 30u: goto L_088A0210;
    case 31u: goto L_088A0224;
    case 32u: goto L_088A022C;
    case 33u: goto L_088A024C;
    case 34u: goto L_088A0260;
    case 35u: goto L_088A0280;
    case 36u: goto L_088A0284;
    case 37u: goto L_088A028C;
    case 38u: goto L_088A02A8;
    case 39u: goto L_088A02B0;
    case 40u: goto L_088A02C4;
    case 41u: goto L_088A02C8;
    case 42u: goto L_088A02D0;
    case 43u: goto L_088A02D8;
    case 44u: goto L_088A02E0;
    case 45u: goto L_088A02F4;
    case 46u: goto L_088A02FC;
    case 47u: goto L_088A031C;
    case 48u: goto L_088A0330;
    case 49u: goto L_088A0350;
    case 50u: goto L_088A0354;
    case 51u: goto L_088A035C;
    case 52u: goto L_088A0378;
    case 53u: goto L_088A0380;
    case 54u: goto L_088A0394;
    case 55u: goto L_088A0398;
    case 56u: goto L_088A03A0;
    case 57u: goto L_088A03A8;
    case 58u: goto L_088A03B0;
    case 59u: goto L_088A03C4;
    case 60u: goto L_088A05B4;
    case 61u: goto L_088A05D8;
    case 62u: goto L_088A05E0;
    case 63u: goto L_088A05F0;
    case 64u: goto L_088A0600;
    case 65u: goto L_088A0610;
    case 66u: goto L_088A0620;
    case 67u: goto L_088A0630;
    case 68u: goto L_088A0640;
    case 69u: goto L_088A0650;
    case 70u: goto L_088A0660;
    case 71u: goto L_088A066C;
    case 72u: goto L_088A06C8;
    case 73u: goto L_088A06DC;
    case 74u: goto L_088A06F0;
    case 75u: goto L_088A06FC;
    case 76u: goto L_088A0708;
    case 77u: goto L_088A0710;
    case 78u: goto L_088A0754;
    case 79u: goto L_088A077C;
    case 80u: goto L_088A0780;
    case 81u: goto L_088A078C;
    case 82u: goto L_088A0794;
    case 83u: goto L_088A07A4;
    case 84u: goto L_088A07B0;
    case 85u: goto L_088A07B8;
    case 86u: goto L_088A07F8;
    case 87u: goto L_088A0824;
    case 88u: goto L_088A0838;
    case 89u: goto L_088A0844;
    case 90u: goto L_088A084C;
    case 91u: goto L_088A0850;
    case 92u: goto L_088A0858;
    case 93u: goto L_088A0860;
    case 94u: goto L_088A0874;
    case 95u: goto L_088A0884;
    case 96u: goto L_088A0898;
    case 97u: goto L_088A08AC;
    case 98u: goto L_088A08B4;
    case 99u: goto L_088A08D0;
    case 100u: goto L_088A08DC;
    case 101u: goto L_088A08E8;
    case 102u: goto L_088A08F4;
    case 103u: goto L_088A0900;
    case 104u: goto L_088A0908;
    case 105u: goto L_088A0910;
    case 106u: goto L_088A0930;
    case 107u: goto L_088A0938;
    case 108u: goto L_088A093C;
    case 109u: goto L_088A094C;
    case 110u: goto L_088A0954;
    case 111u: goto L_088A0960;
    case 112u: goto L_088A096C;
    case 113u: goto L_088A0978;
    case 114u: goto L_088A0980;
    case 115u: goto L_088A0988;
    case 116u: goto L_088A09A0;
    case 117u: goto L_088A09B8;
    case 118u: goto L_088A09C0;
    case 119u: goto L_088A09E4;
    case 120u: goto L_088A09F8;
    case 121u: goto L_088A0A00;
    case 122u: goto L_088A0A18;
    case 123u: goto L_088A0A28;
    case 124u: goto L_088A0A30;
    case 125u: goto L_088A0A3C;
    case 126u: goto L_088A0A50;
    case 127u: goto L_088A0A64;
    case 128u: goto L_088A0A68;
    case 129u: goto L_088A0A70;
    case 130u: goto L_088A0A78;
    case 131u: goto L_088A0A8C;
    case 132u: goto L_088A0AA0;
    case 133u: goto L_088A0AA8;
    case 134u: goto L_088A0AC4;
    case 135u: goto L_088A0AD0;
    case 136u: goto L_088A0ADC;
    case 137u: goto L_088A0AE8;
    case 138u: goto L_088A0AF4;
    case 139u: goto L_088A0AFC;
    case 140u: goto L_088A0B08;
    case 141u: goto L_088A0B30;
    case 142u: goto L_088A0B3C;
    case 143u: goto L_088A0B48;
    case 144u: goto L_088A0B4C;
    case 145u: goto L_088A0B5C;
    case 146u: goto L_088A0B64;
    case 147u: goto L_088A0B6C;
    case 148u: goto L_088A0B80;
    case 149u: goto L_088A0B88;
    case 150u: goto L_088A0B98;
    case 151u: goto L_088A0BA4;
    case 152u: goto L_088A0BAC;
    case 153u: goto L_088A0BB4;
    case 154u: goto L_088A0BDC;
    case 155u: goto L_088A0BE8;
    case 156u: goto L_088A0BF8;
    case 157u: goto L_088A0C00;
    case 158u: goto L_088A0C08;
    case 159u: goto L_088A0C1C;
    case 160u: goto L_088A0C30;
    case 161u: goto L_088A0C3C;
    case 162u: goto L_088A0C44;
    case 163u: goto L_088A0C48;
    case 164u: goto L_088A0C50;
    case 165u: goto L_088A0C58;
    case 166u: goto L_088A0C6C;
    case 167u: goto L_088A0C7C;
    case 168u: goto L_088A0C90;
    case 169u: goto L_088A0CA4;
    case 170u: goto L_088A0CAC;
    case 171u: goto L_088A0CD0;
    case 172u: goto L_088A0CDC;
    case 173u: goto L_088A0CE4;
    case 174u: goto L_088A0CF0;
    case 175u: goto L_088A0D04;
    case 176u: goto L_088A0D08;
    case 177u: goto L_088A0D10;
    case 178u: goto L_088A0D28;
    case 179u: goto L_088A0D30;
    case 180u: goto L_088A0D3C;
    case 181u: goto L_088A0D48;
    case 182u: goto L_088A0D50;
    case 183u: goto L_088A0D5C;
    case 184u: goto L_088A0D70;
    case 185u: goto L_088A0D84;
    case 186u: goto L_088A0D88;
    case 187u: goto L_088A0D90;
    case 188u: goto L_088A0D98;
    case 189u: goto L_088A0DAC;
    case 190u: goto L_088A0DC0;
    case 191u: goto L_088A0DC8;
    case 192u: goto L_088A0DDC;
    case 193u: goto L_088A0DE8;
    case 194u: goto L_088A0DFC;
    case 195u: goto L_088A0E04;
    case 196u: goto L_088A0E1C;
    case 197u: goto L_088A0E28;
    case 198u: goto L_088A0E38;
    case 199u: goto L_088A0E40;
    case 200u: goto L_088A0E48;
    case 201u: goto L_088A0E58;
    case 202u: goto L_088A0E7C;
    case 203u: goto L_088A0E84;
    case 204u: goto L_088A0E8C;
    case 205u: goto L_088A0E98;
    case 206u: goto L_088A0EA0;
    case 207u: goto L_088A0EA8;
    case 208u: goto L_088A0ED0;
    case 209u: goto L_088A0EE4;
    case 210u: goto L_088A0EEC;
    case 211u: goto L_088A0EFC;
    case 212u: goto L_088A0F0C;
    case 213u: goto L_088A0F1C;
    case 214u: goto L_088A0F2C;
    case 215u: goto L_088A0F3C;
    case 216u: goto L_088A0F4C;
    case 217u: goto L_088A0F5C;
    case 218u: goto L_088A0F6C;
    case 219u: goto L_088A0F78;
    case 220u: goto L_088A0FE0;
    case 221u: goto L_088A0FE8;
    case 222u: goto L_088A1008;
    case 223u: goto L_088A1020;
    case 224u: goto L_088A1034;
    case 225u: goto L_088A1050;
    case 226u: goto L_088A1084;
    case 227u: goto L_088A108C;
    case 228u: goto L_088A10A0;
    case 229u: goto L_088A10A8;
    case 230u: goto L_088A10BC;
    case 231u: goto L_088A10C0;
    case 232u: goto L_088A10C8;
    case 233u: goto L_088A10D0;
    case 234u: goto L_088A10D8;
    case 235u: goto L_088A10EC;
    case 236u: goto L_088A10F4;
    case 237u: goto L_088A1114;
    case 238u: goto L_088A1128;
    case 239u: goto L_088A1148;
    case 240u: goto L_088A114C;
    case 241u: goto L_088A1154;
    case 242u: goto L_088A1170;
    case 243u: goto L_088A1178;
    case 244u: goto L_088A118C;
    case 245u: goto L_088A1190;
    case 246u: goto L_088A1198;
    case 247u: goto L_088A11A0;
    case 248u: goto L_088A11A8;
    case 249u: goto L_088A11BC;
    case 250u: goto L_088A11C4;
    case 251u: goto L_088A11EC;
    case 252u: goto L_088A1200;
    case 253u: goto L_088A121C;
    case 254u: goto L_088A1224;
    case 255u: goto L_088A122C;
    case 256u: goto L_088A1248;
    case 257u: goto L_088A1250;
    case 258u: goto L_088A1264;
    case 259u: goto L_088A1268;
    case 260u: goto L_088A1270;
    case 261u: goto L_088A1278;
    case 262u: goto L_088A1280;
    case 263u: goto L_088A1294;
    case 264u: goto L_088A129C;
    case 265u: goto L_088A12B0;
    case 266u: goto L_088A12B8;
    case 267u: goto L_088A12C0;
    case 268u: goto L_088A12D0;
    case 269u: goto L_088A12EC;
    case 270u: goto L_088A12F4;
    case 271u: goto L_088A1300;
    case 272u: goto L_088A1308;
    case 273u: goto L_088A1314;
    case 274u: goto L_088A1318;
    case 275u: goto L_088A1320;
    case 276u: goto L_088A1338;
    case 277u: goto L_088A1340;
    case 278u: goto L_088A1348;
    case 279u: goto L_088A1358;
    case 280u: goto L_088A1368;
    case 281u: goto L_088A1370;
    case 282u: goto L_088A1388;
    case 283u: goto L_088A139C;
    case 284u: goto L_088A13A0;
    case 285u: goto L_088A13A8;
    case 286u: goto L_088A13B0;
    case 287u: goto L_088A13C0;
    case 288u: goto L_088A13D4;
    case 289u: goto L_088A13DC;
    case 290u: goto L_088A1408;
    case 291u: goto L_088A141C;
    case 292u: goto L_088A1424;
    case 293u: goto L_088A1440;
    case 294u: goto L_088A1464;
    case 295u: goto L_088A1474;
    case 296u: goto L_088A147C;
    case 297u: goto L_088A1494;
    case 298u: goto L_088A14B8;
    case 299u: goto L_088A14C8;
    case 300u: goto L_088A14D0;
    case 301u: goto L_088A14E8;
    case 302u: goto L_088A1514;
    case 303u: goto L_088A1528;
    case 304u: goto L_088A1530;
    case 305u: goto L_088A16F4;
    case 306u: goto L_088A1704;
    case 307u: goto L_088A1710;
    case 308u: goto L_088A1724;
    case 309u: goto L_088A1728;
    case 310u: goto L_088A1750;
    case 311u: goto L_088A1778;
    case 312u: goto L_088A1784;
    case 313u: goto L_088A179C;
    case 314u: goto L_088A17B0;
    case 315u: goto L_088A17B4;
    case 316u: goto L_088A17BC;
    case 317u: goto L_088A17C4;
    case 318u: goto L_088A17D8;
    case 319u: goto L_088A17EC;
    case 320u: goto L_088A17F4;
    case 321u: goto L_088A180C;
    case 322u: goto L_088A1818;
    case 323u: goto L_088A1820;
    case 324u: goto L_088A182C;
    case 325u: goto L_088A1830;
    case 326u: goto L_088A1834;
    case 327u: goto L_088A1838;
    case 328u: goto L_088A1848;
    case 329u: goto L_088A1850;
    case 330u: goto L_088A1858;
    case 331u: goto L_088A186C;
    case 332u: goto L_088A1884;
    case 333u: goto L_088A18A4;
    case 334u: goto L_088A18B4;
    case 335u: goto L_088A18C8;
    case 336u: goto L_088A18EC;
    case 337u: goto L_088A1904;
    case 338u: goto L_088A1910;
    case 339u: goto L_088A1918;
    case 340u: goto L_088A1920;
    case 341u: goto L_088A1928;
    case 342u: goto L_088A1940;
    case 343u: goto L_088A1950;
    case 344u: goto L_088A1964;
    case 345u: goto L_088A1970;
    case 346u: goto L_088A1978;
    case 347u: goto L_088A1984;
    case 348u: goto L_088A1990;
    case 349u: goto L_088A19A8;
    case 350u: goto L_088A19B8;
    case 351u: goto L_088A19D4;
    case 352u: goto L_088A19E8;
    case 353u: goto L_088A19EC;
    case 354u: goto L_088A19F4;
    case 355u: goto L_088A1A14;
    case 356u: goto L_088A1A18;
    case 357u: goto L_088A1A24;
    case 358u: goto L_088A1A2C;
    case 359u: goto L_088A1A38;
    case 360u: goto L_088A1A40;
    case 361u: goto L_088A1A48;
    case 362u: goto L_088A1A60;
    case 363u: goto L_088A1A74;
    case 364u: goto L_088A1A78;
    case 365u: goto L_088A1A80;
    case 366u: goto L_088A1A88;
    case 367u: goto L_088A1A9C;
    case 368u: goto L_088A1AB0;
    case 369u: goto L_088A1AB8;
    case 370u: goto L_088A1ACC;
    case 371u: goto L_088A1AD8;
    case 372u: goto L_088A1AE0;
    case 373u: goto L_088A1AEC;
    case 374u: goto L_088A1AF8;
    case 375u: goto L_088A1B24;
    case 376u: goto L_088A1B34;
    case 377u: goto L_088A1B38;
    case 378u: goto L_088A1B40;
    case 379u: goto L_088A1B68;
    case 380u: goto L_088A1B6C;
    case 381u: goto L_088A1B78;
    case 382u: goto L_088A1B7C;
    case 383u: goto L_088A1B84;
    case 384u: goto L_088A1B90;
    case 385u: goto L_088A1B98;
    case 386u: goto L_088A1BA8;
    case 387u: goto L_088A1BC0;
    case 388u: goto L_088A1BD4;
    case 389u: goto L_088A1BD8;
    case 390u: goto L_088A1BE0;
    case 391u: goto L_088A1BE8;
    case 392u: goto L_088A1BFC;
    case 393u: goto L_088A1C10;
    case 394u: goto L_088A1C18;
    case 395u: goto L_088A1C28;
    case 396u: goto L_088A1C34;
    case 397u: goto L_088A1C40;
    case 398u: goto L_088A1C4C;
    case 399u: goto L_088A1C50;
    case 400u: goto L_088A1C64;
    case 401u: goto L_088A1C6C;
    case 402u: goto L_088A1C74;
    case 403u: goto L_088A1C88;
    case 404u: goto L_088A1CB0;
    case 405u: goto L_088A1CBC;
    case 406u: goto L_088A1CD0;
    case 407u: goto L_088A1CDC;
    case 408u: goto L_088A1CE4;
    case 409u: goto L_088A1CEC;
    case 410u: goto L_088A1CF4;
    case 411u: goto L_088A1D0C;
    case 412u: goto L_088A1D1C;
    case 413u: goto L_088A1D40;
    case 414u: goto L_088A1D4C;
    case 415u: goto L_088A1D58;
    case 416u: goto L_088A1D60;
    case 417u: goto L_088A2290;
    case 418u: goto L_088A22D8;
    case 419u: goto L_088A22EC;
    case 420u: goto L_088A2300;
    case 421u: goto L_088A2304;
    case 422u: goto L_088A2314;
    case 423u: goto L_088A231C;
    case 424u: goto L_088A2324;
    case 425u: goto L_088A233C;
    case 426u: goto L_088A2340;
    case 427u: goto L_088A2348;
    case 428u: goto L_088A2350;
    case 429u: goto L_088A2360;
    case 430u: goto L_088A2368;
    case 431u: goto L_088A237C;
    case 432u: goto L_088A239C;
    case 433u: goto L_088A23B8;
    case 434u: goto L_088A23D0;
    case 435u: goto L_088A23DC;
    case 436u: goto L_088A23E4;
    case 437u: goto L_088A23F0;
    case 438u: goto L_088A2404;
    case 439u: goto L_088A241C;
    case 440u: goto L_088A2420;
    case 441u: goto L_088A2428;
    case 442u: goto L_088A2430;
    case 443u: goto L_088A2440;
    case 444u: goto L_088A2448;
    case 445u: goto L_088A25BC;
    case 446u: goto L_088A25DC;
    case 447u: goto L_088A25F8;
    case 448u: goto L_088A2610;
    case 449u: goto L_088A261C;
    case 450u: goto L_088A2624;
    case 451u: goto L_088A2630;
    case 452u: goto L_088A2870;
    case 453u: goto L_088A28A4;
    case 454u: goto L_088A28AC;
    case 455u: goto L_088A28C0;
    case 456u: goto L_088A28C4;
    case 457u: goto L_088A28D0;
    case 458u: goto L_088A28D4;
    case 459u: goto L_088A28DC;
    case 460u: goto L_088A28E4;
    case 461u: goto L_088A2A6C;
    case 462u: goto L_088A2AA4;
    case 463u: goto L_088A2AA8;
    case 464u: goto L_088A2ABC;
    case 465u: goto L_088A2AC8;
    case 466u: goto L_088A2AE4;
    case 467u: goto L_088A2AF8;
    case 468u: goto L_088A2B0C;
    case 469u: goto L_088A2B14;
    case 470u: goto L_088A2B20;
    case 471u: goto L_088A2B40;
    case 472u: goto L_088A2B48;
    case 473u: goto L_088A2B58;
    case 474u: goto L_088A2B60;
    case 475u: goto L_088A2B74;
    case 476u: goto L_088A2B9C;
    case 477u: goto L_088A2BA0;
    case 478u: goto L_088A2BAC;
    case 479u: goto L_088A2BB8;
    case 480u: goto L_088A2BC0;
    case 481u: goto L_088A2BC8;
    case 482u: goto L_088A2BDC;
    case 483u: goto L_088A2BEC;
    case 484u: goto L_088A2BF0;
    case 485u: goto L_088A2BFC;
    case 486u: goto L_088A2C18;
    case 487u: goto L_088A2C2C;
    case 488u: goto L_088A2C40;
    case 489u: goto L_088A2C48;
    case 490u: goto L_088A2C54;
    case 491u: goto L_088A2C58;
    case 492u: goto L_088A2C68;
    case 493u: goto L_088A2C74;
    case 494u: goto L_088A2C7C;
    case 495u: goto L_088A2C94;
    case 496u: goto L_088A2C9C;
    case 497u: goto L_088A2CD4;
    case 498u: goto L_088A2CDC;
    case 499u: goto L_088A2CEC;
    case 500u: goto L_088A2CF4;
    case 501u: goto L_088A2E10;
    case 502u: goto L_088A2E50;
    case 503u: goto L_088A2E54;
    case 504u: goto L_088A2E6C;
    case 505u: goto L_088A2E78;
    case 506u: goto L_088A2E94;
    case 507u: goto L_088A2EA8;
    case 508u: goto L_088A2EBC;
    case 509u: goto L_088A2EC4;
    case 510u: goto L_088A2ED0;
    case 511u: goto L_088A2ED4;
    case 512u: goto L_088A2EF0;
    case 513u: goto L_088A2EF8;
    case 514u: goto L_088A2F08;
    case 515u: goto L_088A2F10;
    case 516u: goto L_088A3068;
    case 517u: goto L_088A3094;
    case 518u: goto L_088A3098;
    case 519u: goto L_088A30B0;
    case 520u: goto L_088A30CC;
    case 521u: goto L_088A30E0;
    case 522u: goto L_088A30F4;
    case 523u: goto L_088A30FC;
    case 524u: goto L_088A3108;
    case 525u: goto L_088A3120;
    case 526u: goto L_088A3128;
    case 527u: goto L_088A3138;
    case 528u: goto L_088A3140;
    case 529u: goto L_088A3154;
    case 530u: goto L_088A3168;
    case 531u: goto L_088A3388;
    case 532u: goto L_088A33C0;
    case 533u: goto L_088A33CC;
    case 534u: goto L_088A33D8;
    case 535u: goto L_088A33E4;
    case 536u: goto L_088A33F0;
    case 537u: goto L_088A33FC;
    case 538u: goto L_088A342C;
    case 539u: goto L_088A3438;
    case 540u: goto L_088A3444;
    case 541u: goto L_088A3450;
    case 542u: goto L_088A345C;
    case 543u: goto L_088A3468;
    case 544u: goto L_088A3474;
    case 545u: goto L_088A3480;
    case 546u: goto L_088A348C;
    case 547u: goto L_088A3498;
    case 548u: goto L_088A34A4;
    case 549u: goto L_088A34B0;
    case 550u: goto L_088A34BC;
    case 551u: goto L_088A34FC;
    case 552u: goto L_088A3508;
    case 553u: goto L_088A3514;
    case 554u: goto L_088A3524;
    case 555u: goto L_088A3530;
    case 556u: goto L_088A3568;
    case 557u: goto L_088A3574;
    case 558u: goto L_088A3580;
    case 559u: goto L_088A358C;
    case 560u: goto L_088A3598;
    case 561u: goto L_088A35A4;
    case 562u: goto L_088A35B0;
    case 563u: goto L_088A35F0;
    case 564u: goto L_088A35FC;
    case 565u: goto L_088A3608;
    case 566u: goto L_088A3618;
    case 567u: goto L_088A3624;
    case 568u: goto L_088A365C;
    case 569u: goto L_088A3668;
    case 570u: goto L_088A3674;
    case 571u: goto L_088A3680;
    case 572u: goto L_088A368C;
    case 573u: goto L_088A3698;
    case 574u: goto L_088A36A4;
    case 575u: goto L_088A36E4;
    case 576u: goto L_088A36F0;
    case 577u: goto L_088A36FC;
    case 578u: goto L_088A370C;
    case 579u: goto L_088A3718;
    case 580u: goto L_088A3750;
    case 581u: goto L_088A375C;
    case 582u: goto L_088A3768;
    case 583u: goto L_088A3774;
    case 584u: goto L_088A3780;
    case 585u: goto L_088A378C;
    case 586u: goto L_088A3798;
    case 587u: goto L_088A37D8;
    case 588u: goto L_088A37E4;
    case 589u: goto L_088A37F0;
    case 590u: goto L_088A3800;
    case 591u: goto L_088A380C;
    case 592u: goto L_088A3844;
    case 593u: goto L_088A3850;
    case 594u: goto L_088A385C;
    case 595u: goto L_088A3868;
    case 596u: goto L_088A3874;
    case 597u: goto L_088A3880;
    case 598u: goto L_088A388C;
    case 599u: goto L_088A38CC;
    case 600u: goto L_088A38D8;
    case 601u: goto L_088A38E4;
    case 602u: goto L_088A38F4;
    case 603u: goto L_088A3900;
    case 604u: goto L_088A3938;
    case 605u: goto L_088A3944;
    case 606u: goto L_088A3950;
    case 607u: goto L_088A395C;
    case 608u: goto L_088A3968;
    case 609u: goto L_088A3974;
    case 610u: goto L_088A3980;
    case 611u: goto L_088A39C0;
    case 612u: goto L_088A39CC;
    case 613u: goto L_088A39D8;
    case 614u: goto L_088A39E8;
    case 615u: goto L_088A39F4;
    case 616u: goto L_088A3A2C;
    case 617u: goto L_088A3A38;
    case 618u: goto L_088A3A44;
    case 619u: goto L_088A3A50;
    case 620u: goto L_088A3A5C;
    case 621u: goto L_088A3A68;
    case 622u: goto L_088A3A74;
    case 623u: goto L_088A3AB4;
    case 624u: goto L_088A3AC0;
    case 625u: goto L_088A3ACC;
    case 626u: goto L_088A3ADC;
    case 627u: goto L_088A3AE8;
    case 628u: goto L_088A3B20;
    case 629u: goto L_088A3B2C;
    case 630u: goto L_088A3B38;
    case 631u: goto L_088A3B44;
    case 632u: goto L_088A3B50;
    case 633u: goto L_088A3B5C;
    case 634u: goto L_088A3B90;
    case 635u: goto L_088A3BCC;
    case 636u: goto L_088A3C2C;
    case 637u: goto L_088A3C3C;
    case 638u: goto L_088A3C8C;
    case 639u: goto L_088A3CF4;
    case 640u: goto L_088A3CFC;
    case 641u: goto L_088A3D20;
    case 642u: goto L_088A3D30;
    case 643u: goto L_088A3D34;
    case 644u: goto L_088A3D50;
    case 645u: goto L_088A3D6C;
    case 646u: goto L_088A3D7C;
    case 647u: goto L_088A3D90;
    case 648u: goto L_088A3D98;
    case 649u: goto L_088A3DA4;
    case 650u: goto L_088A3DC0;
    case 651u: goto L_088A3DC8;
    case 652u: goto L_088A3DD8;
    case 653u: goto L_088A3DE0;
    case 654u: goto L_088A3DF4;
    case 655u: goto L_088A3DFC;
    case 656u: goto L_088A3EC8;
    case 657u: goto L_088A3EDC;
    case 658u: goto L_088A3F10;
    case 659u: goto L_088A3F24;
    case 660u: goto L_088A3F38;
    case 661u: goto L_088A3F4C;
    case 662u: goto L_088A3F60;
    case 663u: goto L_088A3F74;
    case 664u: goto L_088A3F78;
    case 665u: goto L_088A3F84;
    case 666u: goto L_088A3F98;
    case 667u: goto L_088A3FA0;
    case 668u: goto L_088A3FA8;
    case 669u: goto L_088A3FBC;
    case 670u: goto L_088A3FCC;
    case 671u: goto L_088A3FD4;
    case 672u: goto L_088A3FE0;
    case 673u: goto L_088A3FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A0000:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A0004;
L_088A0004:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x088A0018u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A0018u) goto L_088A0018;
    return;
L_088A0018:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 791u, 0x0889FFE4u>(ctx, &aot_mem); return;
L_088A0020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A004Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A004Cu) goto L_088A004C;
    return;
L_088A004C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088A0060u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_088A06DC;
L_088A0060:
    ctx.set_gpr(31, 0x088A0068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A0068u) goto L_088A0068;
    return;
L_088A0068:
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
L_088A0084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A0094u);
    // nop
    goto L_088A08B4;
L_088A0094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A00A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A00C4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A00C4u) goto L_088A00C4;
    return;
L_088A00C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088A00D4u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_088A0AA8;
L_088A00D4:
    ctx.set_gpr(31, 0x088A00DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A00DCu) goto L_088A00DC;
    return;
L_088A00DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A00F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A0120u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A0120u) goto L_088A0120;
    return;
L_088A0120:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088A0134u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_088A0CAC;
L_088A0134:
    ctx.set_gpr(31, 0x088A013Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A013Cu) goto L_088A013C;
    return;
L_088A013C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_088A015C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A017Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A017Cu) goto L_088A017C;
    return;
L_088A017C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29636));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_088A0208;
      }
      goto L_088A0190;
    }
L_088A0190:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29648));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_088A01D8;
      }
      goto L_088A01B0;
    }
L_088A01B0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_088A01B4;
L_088A01B4:
    ctx.set_gpr(31, 0x088A01BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A01BCu) goto L_088A01BC;
    return;
L_088A01BC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A01D8:
    ctx.set_gpr(31, 0x088A01E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A01E0u) goto L_088A01E0;
    return;
L_088A01E0:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29376));
    ctx.set_gpr(31, 0x088A01F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A01F4u) goto L_088A01F4;
    return;
L_088A01F4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088A01F8;
L_088A01F8:
    ctx.set_gpr(31, 0x088A0200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0200u) goto L_088A0200;
    return;
L_088A0200:
    // nop
    goto L_088A01B4;
L_088A0208:
    ctx.set_gpr(31, 0x088A0210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0210u) goto L_088A0210;
    return;
L_088A0210:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x088A0224u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A0224u) goto L_088A0224;
    return;
L_088A0224:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A01F8;
L_088A022C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A024Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A024Cu) goto L_088A024C;
    return;
L_088A024C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29660));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_088A02D8;
      }
      goto L_088A0260;
    }
L_088A0260:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29672));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_088A02A8;
      }
      goto L_088A0280;
    }
L_088A0280:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_088A0284;
L_088A0284:
    ctx.set_gpr(31, 0x088A028Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A028Cu) goto L_088A028C;
    return;
L_088A028C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A02A8:
    ctx.set_gpr(31, 0x088A02B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A02B0u) goto L_088A02B0;
    return;
L_088A02B0:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29376));
    ctx.set_gpr(31, 0x088A02C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A02C4u) goto L_088A02C4;
    return;
L_088A02C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088A02C8;
L_088A02C8:
    ctx.set_gpr(31, 0x088A02D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A02D0u) goto L_088A02D0;
    return;
L_088A02D0:
    // nop
    goto L_088A0284;
L_088A02D8:
    ctx.set_gpr(31, 0x088A02E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A02E0u) goto L_088A02E0;
    return;
L_088A02E0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x088A02F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A02F4u) goto L_088A02F4;
    return;
L_088A02F4:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A02C8;
L_088A02FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A031Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A031Cu) goto L_088A031C;
    return;
L_088A031C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29684));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_088A03A8;
      }
      goto L_088A0330;
    }
L_088A0330:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29696));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_088A0378;
      }
      goto L_088A0350;
    }
L_088A0350:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_088A0354;
L_088A0354:
    ctx.set_gpr(31, 0x088A035Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A035Cu) goto L_088A035C;
    return;
L_088A035C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0378:
    ctx.set_gpr(31, 0x088A0380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0380u) goto L_088A0380;
    return;
L_088A0380:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29376));
    ctx.set_gpr(31, 0x088A0394u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A0394u) goto L_088A0394;
    return;
L_088A0394:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088A0398;
L_088A0398:
    ctx.set_gpr(31, 0x088A03A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A03A0u) goto L_088A03A0;
    return;
L_088A03A0:
    // nop
    goto L_088A0354;
L_088A03A8:
    ctx.set_gpr(31, 0x088A03B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A03B0u) goto L_088A03B0;
    return;
L_088A03B0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x088A03C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A03C4u) goto L_088A03C4;
    return;
L_088A03C4:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A0398;
L_088A05B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(-16624));
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_088A05D8;
L_088A05D8:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088A0660;
      }
      goto L_088A05E0;
    }
L_088A05E0:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088A0660;
      }
      goto L_088A05F0;
    }
L_088A05F0:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088A0660;
      }
      goto L_088A0600;
    }
L_088A0600:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088A0660;
      }
      goto L_088A0610;
    }
L_088A0610:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088A0660;
      }
      goto L_088A0620;
    }
L_088A0620:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088A0660;
      }
      goto L_088A0630;
    }
L_088A0630:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088A0660;
      }
      goto L_088A0640;
    }
L_088A0640:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088A0660;
      }
      goto L_088A0650;
    }
L_088A0650:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    if (ctx.gpr[24] != 0u) {
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_088A05D8;
    }
    goto L_088A0660;
L_088A0660:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(256));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_088A06C8;
      }
      goto L_088A066C;
    }
L_088A066C:
    ctx.set_gpr(11, ctx.gpr[4] << 3u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[4]);
    ctx.set_gpr(9, ctx.gpr[10] << 3u);
    ctx.set_gpr(16, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(25, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.set_gpr(5, 2186u << 16u);
    ctx.set_gpr(8, ctx.gpr[25] + static_cast<std::uint32_t>(5004));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-1928));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(29336));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(31, 0x088A06C8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 698u, 0x0889F7B0u>(ctx, &aot_mem) && ctx.pc == 0x088A06C8u) goto L_088A06C8;
    return;
L_088A06C8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A06DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A0884;
      }
      goto L_088A06F0;
    }
L_088A06F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(64));
        goto L_088A0860;
    }
    goto L_088A06FC;
L_088A06FC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[9] == 0u) {
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(128));
        goto L_088A0824;
    }
    goto L_088A0708;
L_088A0708:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A078C;
      }
      goto L_088A0710;
    }
L_088A0710:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[9] - ctx.gpr[13]);
    ctx.set_gpr(10, ctx.gpr[4] + ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[6] : ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[25] + ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[15]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(16, ctx.gpr[24] + ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (ctx.gpr[15] == 0u) {
    ctx.pc = 0x088A0750u; rt.stop("Allegrex BREAK code 7 at 0x088A0750"); return;
        goto L_088A0754;
    }
    goto L_088A0754;
L_088A0754:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(14, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(11, ctx.gpr[12] - ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    goto L_088A077C;
L_088A077C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    goto L_088A0780;
L_088A0780:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A078C:
    if (ctx.gpr[5] == ctx.gpr[14]) {
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_088A07B8;
    }
    goto L_088A0794;
L_088A0794:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_088A077C;
      }
      goto L_088A07A4;
    }
L_088A07A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A07B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A07B0u) goto L_088A07B0;
    return;
L_088A07B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    goto L_088A0780;
L_088A07B8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(15, ctx.gpr[9] - ctx.gpr[24]);
    ctx.set_gpr(13, ctx.gpr[15] + ctx.gpr[16]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[13] : ctx.gpr[14]);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[6] : ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    if (ctx.gpr[9] == 0u) {
    ctx.pc = 0x088A07F4u; rt.stop("Allegrex BREAK code 7 at 0x088A07F4"); return;
        goto L_088A07F8;
    }
    goto L_088A07F8;
L_088A07F8:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[24] - ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[15] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    goto L_088A077C;
L_088A0824:
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(29756));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088A0838u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0838u) goto L_088A0838;
    return;
L_088A0838:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(29768));
    goto L_088A0844;
L_088A0844:
    ctx.set_gpr(31, 0x088A084Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A084Cu) goto L_088A084C;
    return;
L_088A084C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088A0850;
L_088A0850:
    ctx.set_gpr(31, 0x088A0858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0858u) goto L_088A0858;
    return;
L_088A0858:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    goto L_088A0780;
L_088A0860:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29792));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A0874u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0874u) goto L_088A0874;
    return;
L_088A0874:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29376));
    goto L_088A0844;
L_088A0884:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29804));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x088A0898u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0898u) goto L_088A0898;
    return;
L_088A0898:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x088A08ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A08ACu) goto L_088A08AC;
    return;
L_088A08AC:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A0850;
L_088A08B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088A0A78;
      }
      goto L_088A08D0;
    }
L_088A08D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
        goto L_088A0A3C;
    }
    goto L_088A08DC;
L_088A08DC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[7]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
        goto L_088A093C;
    }
    goto L_088A08E8;
L_088A08E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
        goto L_088A093C;
    }
    goto L_088A08F4;
L_088A08F4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
        goto L_088A0980;
    }
    goto L_088A0900;
L_088A0900:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A094C;
      }
      goto L_088A0908;
    }
L_088A0908:
    ctx.set_gpr(31, 0x088A0910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A0910u) goto L_088A0910;
    return;
L_088A0910:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(7, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, ctx.gpr[6] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    goto L_088A0930;
L_088A0930:
    ctx.set_gpr(31, 0x088A0938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A0938u) goto L_088A0938;
    return;
L_088A0938:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_088A093C;
L_088A093C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A094C:
    ctx.set_gpr(31, 0x088A0954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A0954u) goto L_088A0954;
    return;
L_088A0954:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(31, 0x088A0960u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A0960u) goto L_088A0960;
    return;
L_088A0960:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
        goto L_088A093C;
    }
    goto L_088A096C;
L_088A096C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A0978u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A0978u) goto L_088A0978;
    return;
L_088A0978:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_088A093C;
L_088A0980:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
        goto L_088A0A28;
    }
    goto L_088A0988;
L_088A0988:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[8]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_088A0A00;
    }
    goto L_088A09A0;
L_088A09A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(13, ctx.gpr[3] - ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[7]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(15, ctx.gpr[5] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A09E4;
      }
      goto L_088A09B8;
    }
L_088A09B8:
    ctx.set_gpr(31, 0x088A09C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A09C0u) goto L_088A09C0;
    return;
L_088A09C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[24] + ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    goto L_088A0930;
L_088A09E4:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[15] : ctx.gpr[7]);
    ctx.set_gpr(14, ctx.gpr[5] - ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[14]);
    ctx.set_gpr(31, 0x088A09F8u);
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088A09F8u) goto L_088A09F8;
    return;
L_088A09F8:
    // nop
    goto L_088A09B8;
L_088A0A00:
    ctx.set_gpr(11, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[11] : ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[10] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(31, 0x088A0A18u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088A0A18u) goto L_088A0A18;
    return;
L_088A0A18:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_088A09A0;
L_088A0A28:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A0A30u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A0A30u) goto L_088A0A30;
    return;
L_088A0A30:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088A0988;
L_088A0A3C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29816));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A0A50u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0A50u) goto L_088A0A50;
    return;
L_088A0A50:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29376));
    ctx.set_gpr(31, 0x088A0A64u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A0A64u) goto L_088A0A64;
    return;
L_088A0A64:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088A0A68;
L_088A0A68:
    ctx.set_gpr(31, 0x088A0A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0A70u) goto L_088A0A70;
    return;
L_088A0A70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_088A093C;
L_088A0A78:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29828));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x088A0A8Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0A8Cu) goto L_088A0A8C;
    return;
L_088A0A8C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x088A0AA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A0AA0u) goto L_088A0AA0;
    return;
L_088A0AA0:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A0A68;
L_088A0AA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088A0C7C;
      }
      goto L_088A0AC4;
    }
L_088A0AC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(64));
        goto L_088A0C58;
    }
    goto L_088A0AD0;
L_088A0AD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(128));
        goto L_088A0C1C;
    }
    goto L_088A0ADC;
L_088A0ADC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[7]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
        goto L_088A0B4C;
    }
    goto L_088A0AE8;
L_088A0AE8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
        goto L_088A0B4C;
    }
    goto L_088A0AF4;
L_088A0AF4:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
        goto L_088A0B80;
    }
    goto L_088A0AFC;
L_088A0AFC:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x088A0B04u; rt.stop("Allegrex BREAK code 7 at 0x088A0B04"); return;
        goto L_088A0B08;
    }
    goto L_088A0B08;
L_088A0B08:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[4]);
    ctx.set_gpr(10, ctx.gpr[12] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(9, ctx.gpr[6] - ctx.gpr[11]);
    ctx.set_gpr(5, ctx.hi);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(6, ctx.hi);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
        goto L_088A0B6C;
    }
    goto L_088A0B30;
L_088A0B30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
        goto L_088A0B5C;
    }
    goto L_088A0B3C;
L_088A0B3C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, ctx.gpr[25] - ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    goto L_088A0B48;
L_088A0B48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    goto L_088A0B4C;
L_088A0B4C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0B5C:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A0B64u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A0B64u) goto L_088A0B64;
    return;
L_088A0B64:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_088A0B3C;
L_088A0B6C:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    goto L_088A0B64;
L_088A0B80:
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_088A0BAC;
    }
    goto L_088A0B88;
L_088A0B88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_088A0B48;
      }
      goto L_088A0B98;
    }
L_088A0B98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A0BA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A0BA4u) goto L_088A0BA4;
    return;
L_088A0BA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    goto L_088A0B4C;
L_088A0BAC:
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x088A0BB0u; rt.stop("Allegrex BREAK code 7 at 0x088A0BB0"); return;
        goto L_088A0BB4;
    }
    goto L_088A0BB4;
L_088A0BB4:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[10] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(8, ctx.gpr[6] - ctx.gpr[9]);
    ctx.set_gpr(5, ctx.hi);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.hi);
    if (ctx.gpr[5] == ctx.gpr[4]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
        goto L_088A0C08;
    }
    goto L_088A0BDC;
L_088A0BDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
        goto L_088A0BF8;
    }
    goto L_088A0BE8;
L_088A0BE8:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(12, ctx.gpr[13] - ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[12]);
    goto L_088A0B48;
L_088A0BF8:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A0C00u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A0C00u) goto L_088A0C00;
    return;
L_088A0C00:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_088A0BE8;
L_088A0C08:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_088A0C00;
L_088A0C1C:
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(29840));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088A0C30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0C30u) goto L_088A0C30;
    return;
L_088A0C30:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(29768));
    goto L_088A0C3C;
L_088A0C3C:
    ctx.set_gpr(31, 0x088A0C44u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A0C44u) goto L_088A0C44;
    return;
L_088A0C44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088A0C48;
L_088A0C48:
    ctx.set_gpr(31, 0x088A0C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0C50u) goto L_088A0C50;
    return;
L_088A0C50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    goto L_088A0B4C;
L_088A0C58:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29852));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A0C6Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0C6Cu) goto L_088A0C6C;
    return;
L_088A0C6C:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29376));
    goto L_088A0C3C;
L_088A0C7C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29864));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x088A0C90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0C90u) goto L_088A0C90;
    return;
L_088A0C90:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x088A0CA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A0CA4u) goto L_088A0CA4;
    return;
L_088A0CA4:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A0C48;
L_088A0CAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A0D98;
      }
      goto L_088A0CD0;
    }
L_088A0CD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
        goto L_088A0D5C;
    }
    goto L_088A0CDC;
L_088A0CDC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A0D28;
      }
      goto L_088A0CE4;
    }
L_088A0CE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    goto L_088A0CF0;
L_088A0CF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(9, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[4]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? ctx.gpr[8] : ctx.gpr[5]);
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[17] : ctx.gpr[7]);
    goto L_088A0D04;
L_088A0D04:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088A0D08;
L_088A0D08:
    ctx.set_gpr(10, ctx.gpr[16] ^ ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088A0D10;
L_088A0D10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0D28:
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_088A0D50;
    }
    goto L_088A0D30;
L_088A0D30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_088A0D04;
      }
      goto L_088A0D3C;
    }
L_088A0D3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A0D48u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A0D48u) goto L_088A0D48;
    return;
L_088A0D48:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088A0D08;
L_088A0D50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    goto L_088A0CF0;
L_088A0D5C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29876));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A0D70u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0D70u) goto L_088A0D70;
    return;
L_088A0D70:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29376));
    ctx.set_gpr(31, 0x088A0D84u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A0D84u) goto L_088A0D84;
    return;
L_088A0D84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088A0D88;
L_088A0D88:
    ctx.set_gpr(31, 0x088A0D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0D90u) goto L_088A0D90;
    return;
L_088A0D90:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088A0D10;
L_088A0D98:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29888));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A0DACu);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A0DACu) goto L_088A0DAC;
    return;
L_088A0DAC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x088A0DC0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A0DC0u) goto L_088A0DC0;
    return;
L_088A0DC0:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A0D88;
L_088A0DC8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A0DDCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(29916));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0DDCu) goto L_088A0DDC;
    return;
L_088A0DDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0DE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A0DFCu);
    ctx.set_gpr(16, 2245u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 485u, 0x0889E98Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0DFCu) goto L_088A0DFC;
    return;
L_088A0DFC:
    ctx.set_gpr(31, 0x088A0E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A0E04u) goto L_088A0E04;
    return;
L_088A0E04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17924)));
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1808));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3072));
      if (branch_taken) {
          goto L_088A0E38;
      }
      goto L_088A0E1C;
    }
L_088A0E1C:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088A0E28u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17924), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A0E28u) goto L_088A0E28;
    return;
L_088A0E28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0E38:
    ctx.set_gpr(31, 0x088A0E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088A0E40u) goto L_088A0E40;
    return;
L_088A0E40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17924)));
    goto L_088A0E1C;
L_088A0E48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A0E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A0E58u) goto L_088A0E58;
    return;
L_088A0E58:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(17924)));
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3072));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1808));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(17924), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088A0E98;
      }
      goto L_088A0E7C;
    }
L_088A0E7C:
    ctx.set_gpr(31, 0x088A0E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A0E84u) goto L_088A0E84;
    return;
L_088A0E84:
    ctx.set_gpr(31, 0x088A0E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 488u, 0x0889E9BCu>(ctx, &aot_mem) && ctx.pc == 0x088A0E8Cu) goto L_088A0E8C;
    return;
L_088A0E8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A0E98:
    ctx.set_gpr(31, 0x088A0EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088A0EA0u) goto L_088A0EA0;
    return;
L_088A0EA0:
    // nop
    goto L_088A0E7C;
L_088A0EA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A0ED0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A0ED0u) goto L_088A0ED0;
    return;
L_088A0ED0:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(1808));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_088A0EE4;
L_088A0EE4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088A0F6C;
      }
      goto L_088A0EEC;
    }
L_088A0EEC:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088A0F6C;
      }
      goto L_088A0EFC;
    }
L_088A0EFC:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088A0F6C;
      }
      goto L_088A0F0C;
    }
L_088A0F0C:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088A0F6C;
      }
      goto L_088A0F1C;
    }
L_088A0F1C:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088A0F6C;
      }
      goto L_088A0F2C;
    }
L_088A0F2C:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088A0F6C;
      }
      goto L_088A0F3C;
    }
L_088A0F3C:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088A0F6C;
      }
      goto L_088A0F4C;
    }
L_088A0F4C:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088A0F6C;
      }
      goto L_088A0F5C;
    }
L_088A0F5C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_088A0EE4;
    }
    goto L_088A0F6C;
L_088A0F6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_088A0FE0;
      }
      goto L_088A0F78;
    }
L_088A0F78:
    ctx.set_gpr(11, ctx.gpr[4] << 1u);
    ctx.set_gpr(5, ctx.gpr[11] + ctx.gpr[4]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[10] >> 28u);
    ctx.set_gpr(9, ctx.gpr[5] << 4u);
    ctx.set_gpr(15, ctx.gpr[9] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(8, 2227u << 16u);
    ctx.set_gpr(25, 2225u << 16u);
    ctx.set_gpr(17, 2186u << 16u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(5052));
    rt.memory().aot_store8(ctx.gpr[15] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(3528));
    ctx.set_gpr(18, ctx.gpr[25] + static_cast<std::uint32_t>(29900));
    rt.memory().aot_store8(ctx.gpr[15] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(4, ctx.gpr[15] + 0u);
    ctx.set_gpr(16, ctx.gpr[15] + 0u);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(16), ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(31, 0x088A0FE0u);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(44), ctx.gpr[15]);
    goto L_088A16F4;
L_088A0FE0:
    ctx.set_gpr(31, 0x088A0FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A0FE8u) goto L_088A0FE8;
    return;
L_088A0FE8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_088A1008:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A1020u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A1020u) goto L_088A1020;
    return;
L_088A1020:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29928));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088A10D0;
      }
      goto L_088A1034;
    }
L_088A1034:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29940));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_088A10A0;
      }
      goto L_088A1050;
    }
L_088A1050:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_088A1084;
L_088A1084:
    ctx.set_gpr(31, 0x088A108Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A108Cu) goto L_088A108C;
    return;
L_088A108C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A10A0:
    ctx.set_gpr(31, 0x088A10A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A10A8u) goto L_088A10A8;
    return;
L_088A10A8:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29952));
    ctx.set_gpr(31, 0x088A10BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A10BCu) goto L_088A10BC;
    return;
L_088A10BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088A10C0;
L_088A10C0:
    ctx.set_gpr(31, 0x088A10C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A10C8u) goto L_088A10C8;
    return;
L_088A10C8:
    // nop
    goto L_088A1084;
L_088A10D0:
    ctx.set_gpr(31, 0x088A10D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A10D8u) goto L_088A10D8;
    return;
L_088A10D8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29984));
    ctx.set_gpr(31, 0x088A10ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A10ECu) goto L_088A10EC;
    return;
L_088A10EC:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A10C0;
L_088A10F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A1114u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A1114u) goto L_088A1114;
    return;
L_088A1114:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(30012));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_088A11A0;
      }
      goto L_088A1128;
    }
L_088A1128:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(30024));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_088A1170;
      }
      goto L_088A1148;
    }
L_088A1148:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088A114C;
L_088A114C:
    ctx.set_gpr(31, 0x088A1154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A1154u) goto L_088A1154;
    return;
L_088A1154:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A1170:
    ctx.set_gpr(31, 0x088A1178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1178u) goto L_088A1178;
    return;
L_088A1178:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29952));
    ctx.set_gpr(31, 0x088A118Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A118Cu) goto L_088A118C;
    return;
L_088A118C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088A1190;
L_088A1190:
    ctx.set_gpr(31, 0x088A1198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1198u) goto L_088A1198;
    return;
L_088A1198:
    // nop
    goto L_088A114C;
L_088A11A0:
    ctx.set_gpr(31, 0x088A11A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A11A8u) goto L_088A11A8;
    return;
L_088A11A8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29984));
    ctx.set_gpr(31, 0x088A11BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A11BCu) goto L_088A11BC;
    return;
L_088A11BC:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A1190;
L_088A11C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A11ECu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A11ECu) goto L_088A11EC;
    return;
L_088A11EC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(30036));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088A1278;
      }
      goto L_088A1200;
    }
L_088A1200:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(30048));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_088A1248;
      }
      goto L_088A121C;
    }
L_088A121C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    goto L_088A1224;
L_088A1224:
    ctx.set_gpr(31, 0x088A122Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A122Cu) goto L_088A122C;
    return;
L_088A122C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A1248:
    ctx.set_gpr(31, 0x088A1250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1250u) goto L_088A1250;
    return;
L_088A1250:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29952));
    ctx.set_gpr(31, 0x088A1264u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A1264u) goto L_088A1264;
    return;
L_088A1264:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088A1268;
L_088A1268:
    ctx.set_gpr(31, 0x088A1270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1270u) goto L_088A1270;
    return;
L_088A1270:
    // nop
    goto L_088A1224;
L_088A1278:
    ctx.set_gpr(31, 0x088A1280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1280u) goto L_088A1280;
    return;
L_088A1280:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29984));
    ctx.set_gpr(31, 0x088A1294u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A1294u) goto L_088A1294;
    return;
L_088A1294:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A1268;
L_088A129C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A12B0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A12B0u) goto L_088A12B0;
    return;
L_088A12B0:
    ctx.set_gpr(31, 0x088A12B8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088A16F4;
L_088A12B8:
    ctx.set_gpr(31, 0x088A12C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A12C0u) goto L_088A12C0;
    return;
L_088A12C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A12D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A12ECu);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A12ECu) goto L_088A12EC;
    return;
L_088A12EC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_088A13B0;
      }
      goto L_088A12F4;
    }
L_088A12F4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_088A1370;
      }
      goto L_088A1300;
    }
L_088A1300:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(8, ctx.gpr[17] << 2u);
      if (branch_taken) {
          goto L_088A1348;
      }
      goto L_088A1308;
    }
L_088A1308:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_088A1338;
    }
    goto L_088A1314;
L_088A1314:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088A1318;
L_088A1318:
    ctx.set_gpr(31, 0x088A1320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A1320u) goto L_088A1320;
    return;
L_088A1320:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A1338:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A1340u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A1340u) goto L_088A1340;
    return;
L_088A1340:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088A1318;
L_088A1348:
    ctx.set_gpr(7, ctx.gpr[16] + ctx.gpr[8]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_088A1368;
      }
      goto L_088A1358;
    }
L_088A1358:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_088A1358;
      }
      goto L_088A1368;
    }
L_088A1368:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_088A1318;
L_088A1370:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(30072));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A1388u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1388u) goto L_088A1388;
    return;
L_088A1388:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29952));
    ctx.set_gpr(31, 0x088A139Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A139Cu) goto L_088A139C;
    return;
L_088A139C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088A13A0;
L_088A13A0:
    ctx.set_gpr(31, 0x088A13A8u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A13A8u) goto L_088A13A8;
    return;
L_088A13A8:
    // nop
    goto L_088A1318;
L_088A13B0:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(30060));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A13C0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A13C0u) goto L_088A13C0;
    return;
L_088A13C0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29984));
    ctx.set_gpr(31, 0x088A13D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A13D4u) goto L_088A13D4;
    return;
L_088A13D4:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A13A0;
L_088A13DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A1408u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A1408u) goto L_088A1408;
    return;
L_088A1408:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088A141Cu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_088A17F4;
L_088A141C:
    ctx.set_gpr(31, 0x088A1424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A1424u) goto L_088A1424;
    return;
L_088A1424:
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
L_088A1440:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A1464u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A1464u) goto L_088A1464;
    return;
L_088A1464:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088A1474u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_088A1950;
L_088A1474:
    ctx.set_gpr(31, 0x088A147Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A147Cu) goto L_088A147C;
    return;
L_088A147C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A1494:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A14B8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A14B8u) goto L_088A14B8;
    return;
L_088A14B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088A14C8u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_088A1AB8;
L_088A14C8:
    ctx.set_gpr(31, 0x088A14D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A14D0u) goto L_088A14D0;
    return;
L_088A14D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A14E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088A1514u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E9E4u>(ctx, &aot_mem) && ctx.pc == 0x088A1514u) goto L_088A1514;
    return;
L_088A1514:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088A1528u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_088A1C18;
L_088A1528:
    ctx.set_gpr(31, 0x088A1530u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 493u, 0x0889EA00u>(ctx, &aot_mem) && ctx.pc == 0x088A1530u) goto L_088A1530;
    return;
L_088A1530:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_088A16F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A17C4;
      }
      goto L_088A1704;
    }
L_088A1704:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_088A1784;
      }
      goto L_088A1710;
    }
L_088A1710:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088A1750;
      }
      goto L_088A1724;
    }
L_088A1724:
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    goto L_088A1728;
L_088A1728:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(5, ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_088A1728;
      }
      goto L_088A1750;
    }
L_088A1750:
    ctx.set_gpr(14, ctx.gpr[6] << 4u);
    ctx.set_gpr(6, ctx.gpr[14] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_088A1778;
L_088A1778:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A1784:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(30132));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A179Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A179Cu) goto L_088A179C;
    return;
L_088A179C:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29952));
    ctx.set_gpr(31, 0x088A17B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A17B0u) goto L_088A17B0;
    return;
L_088A17B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088A17B4;
L_088A17B4:
    ctx.set_gpr(31, 0x088A17BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A17BCu) goto L_088A17BC;
    return;
L_088A17BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_088A1778;
L_088A17C4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(30144));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x088A17D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A17D8u) goto L_088A17D8;
    return;
L_088A17D8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29984));
    ctx.set_gpr(31, 0x088A17ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A17ECu) goto L_088A17EC;
    return;
L_088A17EC:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A17B4;
L_088A17F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A1928;
      }
      goto L_088A180C;
    }
L_088A180C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(7, ctx.gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_088A18EC;
      }
      goto L_088A1818;
    }
L_088A1818:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(9, ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_088A1858;
      }
      goto L_088A1820;
    }
L_088A1820:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
        goto L_088A1848;
    }
    goto L_088A182C;
L_088A182C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_088A1830;
L_088A1830:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_088A1834;
L_088A1834:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    goto L_088A1838;
L_088A1838:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A1848:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A1850u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A1850u) goto L_088A1850;
    return;
L_088A1850:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_088A1830;
L_088A1858:
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[16] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
        goto L_088A1830;
    }
    goto L_088A186C;
L_088A186C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088A18A4;
      }
      goto L_088A1884;
    }
L_088A1884:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    goto L_088A1834;
L_088A18A4:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5))))));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[13] != ctx.gpr[12]) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
        goto L_088A1830;
    }
    goto L_088A18B4;
L_088A18B4:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x088A18C8u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    goto L_088A1D1C;
L_088A18C8:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[15]);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[14]);
    goto L_088A1834;
L_088A18EC:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(30156));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A1904u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1904u) goto L_088A1904;
    return;
L_088A1904:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29952));
    goto L_088A1910;
L_088A1910:
    ctx.set_gpr(31, 0x088A1918u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A1918u) goto L_088A1918;
    return;
L_088A1918:
    ctx.set_gpr(31, 0x088A1920u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1920u) goto L_088A1920;
    return;
L_088A1920:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    goto L_088A1838;
L_088A1928:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(30168));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088A1940u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1940u) goto L_088A1940;
    return;
L_088A1940:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29984));
    goto L_088A1910;
L_088A1950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A1A88;
      }
      goto L_088A1964;
    }
L_088A1964:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(8, ctx.gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_088A1A48;
      }
      goto L_088A1970;
    }
L_088A1970:
    if (ctx.gpr[8] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
        goto L_088A1A24;
    }
    goto L_088A1978;
L_088A1978:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_088A1A18;
    }
    goto L_088A1984;
L_088A1984:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_088A1A18;
    }
    goto L_088A1990;
L_088A1990:
    ctx.set_gpr(12, ctx.gpr[5] << 2u);
    ctx.set_gpr(11, ctx.gpr[7] + ctx.gpr[12]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(5, ctx.gpr[11] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088A19B8;
      }
      goto L_088A19A8;
    }
L_088A19A8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_088A19A8;
      }
      goto L_088A19B8;
    }
L_088A19B8:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5))))));
    ctx.set_gpr(16, 0u < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(24, ctx.gpr[25] ^ 1u);
    ctx.set_gpr(15, ctx.gpr[24] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(14, ctx.gpr[15] & ctx.gpr[16]);
    if (ctx.gpr[14] == 0u) {
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
        goto L_088A19EC;
    }
    goto L_088A19D4;
L_088A19D4:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[3]);
    if (ctx.gpr[10] == ctx.gpr[9]) {
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[4]);
        goto L_088A1A40;
    }
    goto L_088A19E8;
L_088A19E8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    goto L_088A19EC;
L_088A19EC:
    if (ctx.gpr[8] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
        goto L_088A1A24;
    }
    goto L_088A19F4;
L_088A19F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_088A1A14;
L_088A1A14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_088A1A18;
L_088A1A18:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A1A24:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_088A1A18;
    }
    goto L_088A1A2C;
L_088A1A2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A1A38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A1A38u) goto L_088A1A38;
    return;
L_088A1A38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_088A1A18;
L_088A1A40:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_088A1A14;
L_088A1A48:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(30180));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A1A60u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1A60u) goto L_088A1A60;
    return;
L_088A1A60:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29952));
    ctx.set_gpr(31, 0x088A1A74u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A1A74u) goto L_088A1A74;
    return;
L_088A1A74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088A1A78;
L_088A1A78:
    ctx.set_gpr(31, 0x088A1A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1A80u) goto L_088A1A80;
    return;
L_088A1A80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_088A1A18;
L_088A1A88:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(30192));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x088A1A9Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1A9Cu) goto L_088A1A9C;
    return;
L_088A1A9C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29984));
    ctx.set_gpr(31, 0x088A1AB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A1AB0u) goto L_088A1AB0;
    return;
L_088A1AB0:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A1A78;
L_088A1AB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A1BE8;
      }
      goto L_088A1ACC;
    }
L_088A1ACC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(8, ctx.gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_088A1BA8;
      }
      goto L_088A1AD8;
    }
L_088A1AD8:
    if (ctx.gpr[8] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
        goto L_088A1B7C;
    }
    goto L_088A1AE0;
L_088A1AE0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[9]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_088A1B6C;
    }
    goto L_088A1AEC;
L_088A1AEC:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[10] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_088A1B6C;
    }
    goto L_088A1AF8;
L_088A1AF8:
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5))))));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(14, ctx.gpr[15] ^ 1u);
    ctx.set_gpr(12, ctx.gpr[14] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(13, 0u < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[12] & ctx.gpr[13]);
    if (ctx.gpr[11] == 0u) {
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
        goto L_088A1B38;
    }
    goto L_088A1B24;
L_088A1B24:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, ctx.gpr[10] + ctx.gpr[9]);
    if (ctx.gpr[25] == ctx.gpr[24]) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
        goto L_088A1B98;
    }
    goto L_088A1B34;
L_088A1B34:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    goto L_088A1B38;
L_088A1B38:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A1B78;
      }
      goto L_088A1B40;
    }
L_088A1B40:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    goto L_088A1B68;
L_088A1B68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_088A1B6C;
L_088A1B6C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A1B78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    goto L_088A1B7C;
L_088A1B7C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_088A1B6C;
    }
    goto L_088A1B84;
L_088A1B84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A1B90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A1B90u) goto L_088A1B90;
    return;
L_088A1B90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_088A1B6C;
L_088A1B98:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_088A1B68;
L_088A1BA8:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(30204));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A1BC0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1BC0u) goto L_088A1BC0;
    return;
L_088A1BC0:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29952));
    ctx.set_gpr(31, 0x088A1BD4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A1BD4u) goto L_088A1BD4;
    return;
L_088A1BD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088A1BD8;
L_088A1BD8:
    ctx.set_gpr(31, 0x088A1BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1BE0u) goto L_088A1BE0;
    return;
L_088A1BE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_088A1B6C;
L_088A1BE8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(30216));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x088A1BFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1BFCu) goto L_088A1BFC;
    return;
L_088A1BFC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29984));
    ctx.set_gpr(31, 0x088A1C10u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A1C10u) goto L_088A1C10;
    return;
L_088A1C10:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_088A1BD8;
L_088A1C18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A1CF4;
      }
      goto L_088A1C28;
    }
L_088A1C28:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(80));
        goto L_088A1CBC;
    }
    goto L_088A1C34;
L_088A1C34:
    ctx.set_gpr(8, ctx.gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088A1C74;
      }
      goto L_088A1C40;
    }
L_088A1C40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
        goto L_088A1C64;
    }
    goto L_088A1C4C;
L_088A1C4C:
    ctx.set_gpr(8, 0u + 0u);
    goto L_088A1C50;
L_088A1C50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A1C64:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A1C6Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A1C6Cu) goto L_088A1C6C;
    return;
L_088A1C6C:
    ctx.set_gpr(8, 0u + 0u);
    goto L_088A1C50;
L_088A1C74:
    ctx.set_gpr(10, ctx.gpr[5] << 2u);
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_088A1C50;
      }
      goto L_088A1C88;
    }
L_088A1C88:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5))))));
    ctx.set_gpr(8, ctx.gpr[12] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[7];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A1C50;
      }
      goto L_088A1CB0;
    }
L_088A1CB0:
    ctx.set_gpr(14, ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.set_gpr(8, ctx.gpr[14] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088A1C50;
L_088A1CBC:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(30228));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A1CD0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1CD0u) goto L_088A1CD0;
    return;
L_088A1CD0:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29952));
    goto L_088A1CDC;
L_088A1CDC:
    ctx.set_gpr(31, 0x088A1CE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x088A1CE4u) goto L_088A1CE4;
    return;
L_088A1CE4:
    ctx.set_gpr(31, 0x088A1CECu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 495u, 0x0889EA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1CECu) goto L_088A1CEC;
    return;
L_088A1CEC:
    ctx.set_gpr(8, 0u + 0u);
    goto L_088A1C50;
L_088A1CF4:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(30240));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088A1D0Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x088A1D0Cu) goto L_088A1D0C;
    return;
L_088A1D0C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29984));
    goto L_088A1CDC;
L_088A1D1C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_088A1D4C;
    }
    goto L_088A1D40;
L_088A1D40:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_088A1D4C;
L_088A1D4C:
    ctx.set_gpr(4, ctx.gpr[5] - ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A1D60;
      }
      goto L_088A1D58;
    }
L_088A1D58:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A1D60:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(4880));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.set_gpr(31, 0x088A22D8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088A22D8u) goto L_088A22D8;
    return;
L_088A22D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088A22ECu);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 645u, 0x0888F2ACu>(ctx, &aot_mem) && ctx.pc == 0x088A22ECu) goto L_088A22EC;
    return;
L_088A22EC:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18596)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(18596));
      if (branch_taken) {
          goto L_088A2314;
      }
      goto L_088A2300;
    }
L_088A2300:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088A2304;
L_088A2304:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2314:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A231Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A231Cu) goto L_088A231C;
    return;
L_088A231C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088A2304;
L_088A2324:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17940)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(17940));
      if (branch_taken) {
          goto L_088A2348;
      }
      goto L_088A233C;
    }
L_088A233C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088A2340;
L_088A2340:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2348:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088A2350u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2350u) goto L_088A2350;
    return;
L_088A2350:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A2368;
      }
      goto L_088A2360;
    }
L_088A2360:
    ctx.set_gpr(5, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17936), ctx.gpr[6]);
    goto L_088A2368;
L_088A2368:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17932), ctx.gpr[7]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088A2340;
L_088A237C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088A23F0;
      }
      goto L_088A239C;
    }
L_088A239C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17932), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
      if (branch_taken) {
          goto L_088A23E4;
      }
      goto L_088A23B8;
    }
L_088A23B8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(30300));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A23DC;
      }
      goto L_088A23D0;
    }
L_088A23D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(31, 0x088A23DCu);
    // nop
    goto L_088A2290;
L_088A23DC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17936), 0u);
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
    goto L_088A23E4;
L_088A23E4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    jump_target = ctx.gpr[6];
    ctx.set_gpr(31, 0x088A23F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A23F0u) goto L_088A23F0;
    return;
L_088A23F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2404:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17940)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(17940));
      if (branch_taken) {
          goto L_088A2428;
      }
      goto L_088A241C;
    }
L_088A241C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088A2420;
L_088A2420:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2428:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088A2430u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2430u) goto L_088A2430;
    return;
L_088A2430:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088A2448;
      }
      goto L_088A2440;
    }
L_088A2440:
    ctx.set_gpr(5, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17936), ctx.gpr[6]);
    goto L_088A2448;
L_088A2448:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17932), ctx.gpr[7]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088A2420;
L_088A25BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088A2630;
      }
      goto L_088A25DC;
    }
L_088A25DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17932), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
      if (branch_taken) {
          goto L_088A2624;
      }
      goto L_088A25F8;
    }
L_088A25F8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(30300));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088A261C;
      }
      goto L_088A2610;
    }
L_088A2610:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(31, 0x088A261Cu);
    // nop
    goto L_088A2290;
L_088A261C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17936), 0u);
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
    goto L_088A2624;
L_088A2624:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    jump_target = ctx.gpr[6];
    ctx.set_gpr(31, 0x088A2630u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2630u) goto L_088A2630;
    return;
L_088A2630:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2870:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(16, ctx.gpr[5] + static_cast<std::uint32_t>(4880));
    ctx.set_gpr(9, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(18596));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(127));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088A28E4;
      }
      goto L_088A28A4;
    }
L_088A28A4:
    ctx.set_gpr(31, 0x088A28ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 639u, 0x0888F250u>(ctx, &aot_mem) && ctx.pc == 0x088A28ACu) goto L_088A28AC;
    return;
L_088A28AC:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18596)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(18596));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088A28D0;
      }
      goto L_088A28C0;
    }
L_088A28C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088A28C4;
L_088A28C4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A28D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_088A28D4;
L_088A28D4:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A28DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A28DCu) goto L_088A28DC;
    return;
L_088A28DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088A28C4;
L_088A28E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(18596)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + 0u);
    goto L_088A28D4;
L_088A2A6C:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(17940)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(17940));
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088A2B40;
      }
      goto L_088A2AA4;
    }
L_088A2AA4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088A2AA8;
L_088A2AA8:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088A2ABCu);
    ctx.set_gpr(16, 2245u << 16u);
    goto L_088A3EC8;
L_088A2ABC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088A2B20;
      }
      goto L_088A2AC8;
    }
L_088A2AC8:
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(2, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(17932), ctx.gpr[2]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
      if (branch_taken) {
          goto L_088A2B14;
      }
      goto L_088A2AE4;
    }
L_088A2AE4:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_088A2B0C;
      }
      goto L_088A2AF8;
    }
L_088A2AF8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(14, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[14] + static_cast<std::uint32_t>(30300));
    ctx.set_gpr(31, 0x088A2B0Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088A2290;
L_088A2B0C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17936), 0u);
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
    goto L_088A2B14;
L_088A2B14:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    jump_target = ctx.gpr[15];
    ctx.set_gpr(31, 0x088A2B20u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2B20u) goto L_088A2B20;
    return;
L_088A2B20:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_088A2B40:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088A2B48u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2B48u) goto L_088A2B48;
    return;
L_088A2B48:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A2B60;
      }
      goto L_088A2B58;
    }
L_088A2B58:
    ctx.set_gpr(5, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17936), ctx.gpr[6]);
    goto L_088A2B60;
L_088A2B60:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17932), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088A2AA8;
L_088A2B74:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17940)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(17940));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088A2CD4;
      }
      goto L_088A2B9C;
    }
L_088A2B9C:
    ctx.set_gpr(9, 2225u << 16u);
    goto L_088A2BA0;
L_088A2BA0:
    ctx.set_gpr(4, ctx.gpr[16] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(30372));
      if (branch_taken) {
          goto L_088A2BC0;
      }
      goto L_088A2BAC;
    }
L_088A2BAC:
    ctx.set_gpr(10, ctx.gpr[17] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(11, ctx.gpr[16] << 1u);
      if (branch_taken) {
          goto L_088A2C9C;
      }
      goto L_088A2BB8;
    }
L_088A2BB8:
    ctx.set_gpr(11, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[11] + static_cast<std::uint32_t>(30404));
    goto L_088A2BC0;
L_088A2BC0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(17, 2248u << 16u);
      if (branch_taken) {
          goto L_088A2C7C;
      }
      goto L_088A2BC8;
    }
L_088A2BC8:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(4880));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x088A2BDCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(127));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 639u, 0x0888F250u>(ctx, &aot_mem) && ctx.pc == 0x088A2BDCu) goto L_088A2BDC;
    return;
L_088A2BDC:
    ctx.set_gpr(15, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(18596)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[15] + static_cast<std::uint32_t>(18596));
      if (branch_taken) {
          goto L_088A2C68;
      }
      goto L_088A2BEC;
    }
L_088A2BEC:
    ctx.set_gpr(16, 2245u << 16u);
    goto L_088A2BF0;
L_088A2BF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088A2C58;
      }
      goto L_088A2BFC;
    }
L_088A2BFC:
    ctx.set_gpr(13, 2245u << 16u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(14, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(17932), ctx.gpr[14]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
      if (branch_taken) {
          goto L_088A2C48;
      }
      goto L_088A2C18;
    }
L_088A2C18:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[25] == ctx.gpr[24];
    // nop
      if (branch_taken) {
          goto L_088A2C40;
      }
      goto L_088A2C2C;
    }
L_088A2C2C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(30300));
    ctx.set_gpr(31, 0x088A2C40u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088A2290;
L_088A2C40:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17936), 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
    goto L_088A2C48;
L_088A2C48:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x088A2C54u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2C54u) goto L_088A2C54;
    return;
L_088A2C54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088A2C58;
L_088A2C58:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2C68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A2C74u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2C74u) goto L_088A2C74;
    return;
L_088A2C74:
    ctx.set_gpr(16, 2245u << 16u);
    goto L_088A2BF0;
L_088A2C7C:
    ctx.set_gpr(14, 2245u << 16u);
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(18596));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(18596)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[12];
    ctx.set_gpr(31, 0x088A2C94u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2C94u) goto L_088A2C94;
    return;
L_088A2C94:
    ctx.set_gpr(16, 2245u << 16u);
    goto L_088A2BF0;
L_088A2C9C:
    ctx.set_gpr(4, ctx.gpr[17] << 3u);
    ctx.set_gpr(9, ctx.gpr[11] + ctx.gpr[16]);
    ctx.set_gpr(10, ctx.gpr[4] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[10] << 3u);
    ctx.set_gpr(8, ctx.gpr[9] << 2u);
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(17956));
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(25, ctx.gpr[6] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_088A2BEC;
L_088A2CD4:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088A2CDCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2CDCu) goto L_088A2CDC;
    return;
L_088A2CDC:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A2CF4;
      }
      goto L_088A2CEC;
    }
L_088A2CEC:
    ctx.set_gpr(5, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17936), ctx.gpr[6]);
    goto L_088A2CF4;
L_088A2CF4:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17932), ctx.gpr[7]);
    ctx.set_gpr(9, 2225u << 16u);
    goto L_088A2BA0;
L_088A2E10:
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(17940)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(17940));
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088A2EF0;
      }
      goto L_088A2E50;
    }
L_088A2E50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088A2E54;
L_088A2E54:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088A2E6Cu);
    ctx.set_gpr(16, 2245u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 12u, 0x088A4058u>(ctx, &aot_mem) && ctx.pc == 0x088A2E6Cu) goto L_088A2E6C;
    return;
L_088A2E6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A2ED4;
      }
      goto L_088A2E78;
    }
L_088A2E78:
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(2, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(17932), ctx.gpr[2]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
      if (branch_taken) {
          goto L_088A2EC4;
      }
      goto L_088A2E94;
    }
L_088A2E94:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_088A2EBC;
      }
      goto L_088A2EA8;
    }
L_088A2EA8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(14, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[14] + static_cast<std::uint32_t>(30300));
    ctx.set_gpr(31, 0x088A2EBCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088A2290;
L_088A2EBC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17936), 0u);
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
    goto L_088A2EC4;
L_088A2EC4:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    jump_target = ctx.gpr[15];
    ctx.set_gpr(31, 0x088A2ED0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2ED0u) goto L_088A2ED0;
    return;
L_088A2ED0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088A2ED4;
L_088A2ED4:
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
L_088A2EF0:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088A2EF8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2EF8u) goto L_088A2EF8;
    return;
L_088A2EF8:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A2F10;
      }
      goto L_088A2F08;
    }
L_088A2F08:
    ctx.set_gpr(5, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17936), ctx.gpr[6]);
    goto L_088A2F10;
L_088A2F10:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17932), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088A2E54;
L_088A3068:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17940)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(17940));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A3120;
      }
      goto L_088A3094;
    }
L_088A3094:
    ctx.set_gpr(16, 2245u << 16u);
    goto L_088A3098;
L_088A3098:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(18596));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18596), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088A3108;
      }
      goto L_088A30B0;
    }
L_088A30B0:
    ctx.set_gpr(11, 2245u << 16u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(17932), ctx.gpr[12]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(24, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
      if (branch_taken) {
          goto L_088A30FC;
      }
      goto L_088A30CC;
    }
L_088A30CC:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088A30F4;
      }
      goto L_088A30E0;
    }
L_088A30E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(18, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(30300));
    ctx.set_gpr(31, 0x088A30F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088A2290;
L_088A30F4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17936), 0u);
    ctx.set_gpr(24, ctx.gpr[16] + static_cast<std::uint32_t>(17948));
    goto L_088A30FC;
L_088A30FC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17948)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x088A3108u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3108u) goto L_088A3108;
    return;
L_088A3108:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3120:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088A3128u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3128u) goto L_088A3128;
    return;
L_088A3128:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A3140;
      }
      goto L_088A3138;
    }
L_088A3138:
    ctx.set_gpr(5, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17936), ctx.gpr[6]);
    goto L_088A3140;
L_088A3140:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17932), ctx.gpr[7]);
    ctx.set_gpr(16, 2245u << 16u);
    goto L_088A3098;
L_088A3154:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(17940));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17940), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3168:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(17948));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17948), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3388:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17956)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(17956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088A34A4;
      }
      goto L_088A33C0;
    }
L_088A33C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A348C;
      }
      goto L_088A33CC;
    }
L_088A33CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088A3474;
      }
      goto L_088A33D8;
    }
L_088A33D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088A345C;
      }
      goto L_088A33E4;
    }
L_088A33E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088A3444;
      }
      goto L_088A33F0;
    }
L_088A33F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088A342C;
      }
      goto L_088A33FC;
    }
L_088A33FC:
    ctx.set_gpr(5, 2248u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5040)));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5040), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A342C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), ctx.gpr[19]);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088A3438u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3438u) goto L_088A3438;
    return;
L_088A3438:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), 0u);
    ctx.set_gpr(17, ctx.gpr[17] | ctx.gpr[2]);
    goto L_088A33FC;
L_088A3444:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), ctx.gpr[19]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3450u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3450u) goto L_088A3450;
    return;
L_088A3450:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), 0u);
    ctx.set_gpr(17, ctx.gpr[17] | ctx.gpr[2]);
    goto L_088A33F0;
L_088A345C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), ctx.gpr[19]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3468u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3468u) goto L_088A3468;
    return;
L_088A3468:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), 0u);
    ctx.set_gpr(17, ctx.gpr[17] | ctx.gpr[2]);
    goto L_088A33E4;
L_088A3474:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), ctx.gpr[19]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3480u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3480u) goto L_088A3480;
    return;
L_088A3480:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), 0u);
    ctx.set_gpr(17, ctx.gpr[17] | ctx.gpr[2]);
    goto L_088A33D8;
L_088A348C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), ctx.gpr[19]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3498u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3498u) goto L_088A3498;
    return;
L_088A3498:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), 0u);
    ctx.set_gpr(17, ctx.gpr[17] | ctx.gpr[2]);
    goto L_088A33CC;
L_088A34A4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), ctx.gpr[19]);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088A34B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A34B0u) goto L_088A34B0;
    return;
L_088A34B0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5008), 0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_088A33C0;
L_088A34BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(17956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(5008));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088A34FC;
L_088A34FC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088A3598;
      }
      goto L_088A3508;
    }
L_088A3508:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A3580;
      }
      goto L_088A3514;
    }
L_088A3514:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_088A3568;
      }
      goto L_088A3524;
    }
L_088A3524:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088A34FC;
    }
    goto L_088A3530;
L_088A3530:
    ctx.set_gpr(8, 2248u << 16u);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(5040));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3568:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3574u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3574u) goto L_088A3574;
    return;
L_088A3574:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A3524;
L_088A3580:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A358Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A358Cu) goto L_088A358C;
    return;
L_088A358C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A3514;
L_088A3598:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A35A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A35A4u) goto L_088A35A4;
    return;
L_088A35A4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A3508;
L_088A35B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(17956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(5008));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088A35F0;
L_088A35F0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088A368C;
      }
      goto L_088A35FC;
    }
L_088A35FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A3674;
      }
      goto L_088A3608;
    }
L_088A3608:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_088A365C;
      }
      goto L_088A3618;
    }
L_088A3618:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088A35F0;
    }
    goto L_088A3624;
L_088A3624:
    ctx.set_gpr(8, 2248u << 16u);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(5040));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A365C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3668u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3668u) goto L_088A3668;
    return;
L_088A3668:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A3618;
L_088A3674:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3680u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3680u) goto L_088A3680;
    return;
L_088A3680:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A3608;
L_088A368C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3698u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3698u) goto L_088A3698;
    return;
L_088A3698:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A35FC;
L_088A36A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(17956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(5008));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088A36E4;
L_088A36E4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088A3780;
      }
      goto L_088A36F0;
    }
L_088A36F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A3768;
      }
      goto L_088A36FC;
    }
L_088A36FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_088A3750;
      }
      goto L_088A370C;
    }
L_088A370C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088A36E4;
    }
    goto L_088A3718;
L_088A3718:
    ctx.set_gpr(8, 2248u << 16u);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(5040));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3750:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A375Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A375Cu) goto L_088A375C;
    return;
L_088A375C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A370C;
L_088A3768:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3774u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3774u) goto L_088A3774;
    return;
L_088A3774:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A36FC;
L_088A3780:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A378Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A378Cu) goto L_088A378C;
    return;
L_088A378C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A36F0;
L_088A3798:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(17956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(5008));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088A37D8;
L_088A37D8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088A3874;
      }
      goto L_088A37E4;
    }
L_088A37E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A385C;
      }
      goto L_088A37F0;
    }
L_088A37F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_088A3844;
      }
      goto L_088A3800;
    }
L_088A3800:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088A37D8;
    }
    goto L_088A380C;
L_088A380C:
    ctx.set_gpr(8, 2248u << 16u);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(5040));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3844:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3850u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3850u) goto L_088A3850;
    return;
L_088A3850:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A3800;
L_088A385C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3868u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3868u) goto L_088A3868;
    return;
L_088A3868:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A37F0;
L_088A3874:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3880u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3880u) goto L_088A3880;
    return;
L_088A3880:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A37E4;
L_088A388C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(17956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(5008));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088A38CC;
L_088A38CC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088A3968;
      }
      goto L_088A38D8;
    }
L_088A38D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A3950;
      }
      goto L_088A38E4;
    }
L_088A38E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_088A3938;
      }
      goto L_088A38F4;
    }
L_088A38F4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088A38CC;
    }
    goto L_088A3900;
L_088A3900:
    ctx.set_gpr(8, 2248u << 16u);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(5040));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3938:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3944u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3944u) goto L_088A3944;
    return;
L_088A3944:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A38F4;
L_088A3950:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A395Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A395Cu) goto L_088A395C;
    return;
L_088A395C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A38E4;
L_088A3968:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3974u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3974u) goto L_088A3974;
    return;
L_088A3974:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A38D8;
L_088A3980:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(17956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(5008));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088A39C0;
L_088A39C0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088A3A5C;
      }
      goto L_088A39CC;
    }
L_088A39CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A3A44;
      }
      goto L_088A39D8;
    }
L_088A39D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_088A3A2C;
      }
      goto L_088A39E8;
    }
L_088A39E8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088A39C0;
    }
    goto L_088A39F4;
L_088A39F4:
    ctx.set_gpr(8, 2248u << 16u);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(5040));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3A2C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3A38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3A38u) goto L_088A3A38;
    return;
L_088A3A38:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A39E8;
L_088A3A44:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3A50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3A50u) goto L_088A3A50;
    return;
L_088A3A50:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A39D8;
L_088A3A5C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3A68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3A68u) goto L_088A3A68;
    return;
L_088A3A68:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A39CC;
L_088A3A74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(17956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(5008));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(504));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088A3AB4;
L_088A3AB4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088A3B50;
      }
      goto L_088A3AC0;
    }
L_088A3AC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A3B38;
      }
      goto L_088A3ACC;
    }
L_088A3ACC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_088A3B20;
      }
      goto L_088A3ADC;
    }
L_088A3ADC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088A3AB4;
    }
    goto L_088A3AE8;
L_088A3AE8:
    ctx.set_gpr(8, 2248u << 16u);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(5040));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3B20:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3B2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3B2Cu) goto L_088A3B2C;
    return;
L_088A3B2C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A3ADC;
L_088A3B38:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3B44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3B44u) goto L_088A3B44;
    return;
L_088A3B44:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A3ACC;
L_088A3B50:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3B5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3B5Cu) goto L_088A3B5C;
    return;
L_088A3B5C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[2]);
    goto L_088A3AC0;
L_088A3B90:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17928)));
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(6, 2248u << 16u);
    ctx.set_gpr(12, 2248u << 16u);
    ctx.set_gpr(11, ctx.gpr[7] + static_cast<std::uint32_t>(17940));
    ctx.set_gpr(13, ctx.gpr[8] + static_cast<std::uint32_t>(17948));
    ctx.set_gpr(14, ctx.gpr[9] + static_cast<std::uint32_t>(18608));
    ctx.set_gpr(15, ctx.gpr[10] + static_cast<std::uint32_t>(18616));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(5008));
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(4, ctx.gpr[12] + static_cast<std::uint32_t>(5040));
      if (branch_taken) {
          goto L_088A3C2C;
      }
      goto L_088A3BCC;
    }
L_088A3BCC:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(17940), 0u);
    ctx.set_gpr(7, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(5008), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(17948), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(18608), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(18616), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(18604), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(5040), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    goto L_088A3C2C;
L_088A3C2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17928)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17928), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3C3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(17928)));
    ctx.set_gpr(9, 2248u << 16u);
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17928), ctx.gpr[4]);
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(11, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(17928)));
    ctx.set_gpr(13, 2245u << 16u);
    ctx.set_gpr(25, 2248u << 16u);
    ctx.set_gpr(14, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(5008));
    ctx.set_gpr(5, ctx.gpr[25] + static_cast<std::uint32_t>(5040));
    ctx.set_gpr(6, ctx.gpr[10] + static_cast<std::uint32_t>(17940));
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(17948));
    ctx.set_gpr(12, ctx.gpr[11] + static_cast<std::uint32_t>(18608));
    ctx.set_gpr(15, ctx.gpr[13] + static_cast<std::uint32_t>(18616));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(24, ctx.gpr[14] + static_cast<std::uint32_t>(18596));
      if (branch_taken) {
          goto L_088A3CF4;
      }
      goto L_088A3C8C;
    }
L_088A3C8C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(5008), 0u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(17940), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(17948), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(18608), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(18616), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(5040), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(18604), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(18596), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    goto L_088A3CF4;
L_088A3CF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3CFC:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(18604)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088A3DF4;
      }
      goto L_088A3D20;
    }
L_088A3D20:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17940)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(17940));
      if (branch_taken) {
          goto L_088A3DC0;
      }
      goto L_088A3D30;
    }
L_088A3D30:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088A3D34;
L_088A3D34:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17948)));
    ctx.set_gpr(10, ctx.gpr[11] ^ 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(16, 0u < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A3DA4;
      }
      goto L_088A3D50;
    }
L_088A3D50:
    ctx.set_gpr(13, 2245u << 16u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(2, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(17932), ctx.gpr[2]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(17948));
      if (branch_taken) {
          goto L_088A3D98;
      }
      goto L_088A3D6C;
    }
L_088A3D6C:
    ctx.set_gpr(18, 2245u << 16u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17936)));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A3D90;
      }
      goto L_088A3D7C;
    }
L_088A3D7C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17936)));
    ctx.set_gpr(24, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[24] + static_cast<std::uint32_t>(30300));
    ctx.set_gpr(31, 0x088A3D90u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_088A2290;
L_088A3D90:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(17936), 0u);
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(17948));
    goto L_088A3D98;
L_088A3D98:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17948)));
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x088A3DA4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3DA4u) goto L_088A3DA4;
    return;
L_088A3DA4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3DC0:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088A3DC8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3DC8u) goto L_088A3DC8;
    return;
L_088A3DC8:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088A3DE0;
      }
      goto L_088A3DD8;
    }
L_088A3DD8:
    ctx.set_gpr(5, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17936), ctx.gpr[6]);
    goto L_088A3DE0;
L_088A3DE0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17932)));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17932), ctx.gpr[7]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088A3D34;
L_088A3DF4:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3DFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3DFCu) goto L_088A3DFC;
    return;
L_088A3DFC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088A3DA4;
L_088A3EC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 11u, 0x088A404Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3EDC;
    }
L_088A3EDC:
    ctx.set_gpr(11, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, ctx.gpr[11] + ctx.gpr[4]);
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(17956));
    ctx.set_gpr(8, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(11, ctx.gpr[4] + static_cast<std::uint32_t>(30528));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 10u, 0x088A4044u>(ctx, &aot_mem); return;
      }
      goto L_088A3F10;
    }
L_088A3F10:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 9u, 0x088A403Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3F24;
    }
L_088A3F24:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 8u, 0x088A4034u>(ctx, &aot_mem); return;
      }
      goto L_088A3F38;
    }
L_088A3F38:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 7u, 0x088A402Cu>(ctx, &aot_mem); return;
      }
      goto L_088A3F4C;
    }
L_088A3F4C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 6u, 0x088A4024u>(ctx, &aot_mem); return;
      }
      goto L_088A3F60;
    }
L_088A3F60:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 2u, 0x088A4008u>(ctx, &aot_mem); return;
      }
      goto L_088A3F74;
    }
L_088A3F74:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(6));
    goto L_088A3F78;
L_088A3F78:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[5];
    ctx.set_gpr(3, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_088A3F98;
      }
      goto L_088A3F84;
    }
L_088A3F84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A3F98:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(30536));
    goto L_088A3FA0;
L_088A3FA0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, 2248u << 16u);
      if (branch_taken) {
          goto L_088A3FE8;
      }
      goto L_088A3FA8;
    }
L_088A3FA8:
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x088A3FBCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(127));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 639u, 0x0888F250u>(ctx, &aot_mem) && ctx.pc == 0x088A3FBCu) goto L_088A3FBC;
    return;
L_088A3FBC:
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(18596)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[12] + static_cast<std::uint32_t>(18596));
      if (branch_taken) {
          goto L_088A3FD4;
      }
      goto L_088A3FCC;
    }
L_088A3FCC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_088A3F84;
L_088A3FD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088A3FE0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3FE0u) goto L_088A3FE0;
    return;
L_088A3FE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_088A3F84;
L_088A3FE8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(18596));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(18596)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088A4000u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0039(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0039_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_39(Runtime &runtime) {
    runtime.register_generated_unit(39u, 0x088A0000u, 16384u, &recomp_unit_0039, &recomp_unit_0039_entry);
    runtime.register_function(0x088A0000u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0004u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0018u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0020u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A004Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0060u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0068u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0084u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0094u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0120u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0134u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A013Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A015Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A017Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0190u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01E0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01F8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0200u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0208u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0210u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0224u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A022Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A024Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0260u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0280u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0284u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A028Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02E0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A031Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0330u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0350u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0354u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A035Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0378u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0380u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0394u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0398u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A03A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A03A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A03B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A03C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A05B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A05D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A05E0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A05F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0600u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0610u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0620u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0630u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0640u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0650u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0660u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A066Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A06C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A06DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A06F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A06FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0708u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0710u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0754u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A077Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0780u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A078Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0794u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A07A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A07B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A07B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A07F8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0824u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0838u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0844u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A084Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0850u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0858u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0860u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0874u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0884u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0898u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A08ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A08B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A08D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A08DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A08E8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A08F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0900u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0908u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0910u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0930u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0938u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A093Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A094Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0954u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0960u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A096Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0978u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0980u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0988u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09F8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A00u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A28u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A70u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A78u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A8Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0AA0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0AA8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0AC4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0AD0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0ADCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0AE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0AF4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0AFCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B08u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B4Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B80u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B88u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B98u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0BA4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0BACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0BB4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0BDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0BE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0BF8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C00u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C08u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C1Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C44u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C58u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C90u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0CA4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0CACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0CD0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0CDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0CE4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0CF0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D04u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D08u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D10u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D28u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D70u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D84u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D88u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D90u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D98u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0DACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0DC0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0DC8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0DDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0DE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0DFCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E04u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E1Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E28u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E58u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E84u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E8Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E98u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0EA0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0EA8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0ED0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0EE4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0EECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0EFCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F0Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F1Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F4Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F78u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0FE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0FE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1008u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1020u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1034u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1050u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1084u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A108Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1114u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1128u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1148u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A114Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1154u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1170u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1178u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A118Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1190u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1198u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1200u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A121Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1224u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A122Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1248u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1250u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1264u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1268u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1270u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1278u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1280u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1294u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A129Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1300u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1308u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1314u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1318u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1320u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1338u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1340u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1348u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1358u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1368u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1370u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1388u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A139Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1408u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A141Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1424u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1440u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1464u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1474u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A147Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1494u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A14B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A14C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A14D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A14E8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1514u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1528u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1530u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A16F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1704u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1710u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1724u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1728u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1750u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1778u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1784u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A179Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A180Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1818u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1820u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A182Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1830u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1834u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1838u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1848u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1850u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1858u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A186Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1884u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1904u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1910u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1918u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1920u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1928u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1940u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1950u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1964u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1970u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1978u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1984u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1990u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A19A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A19B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A19D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A19E8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A19ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A19F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A14u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A24u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A60u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A78u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A80u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A88u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A9Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1AB0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1AB8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1ACCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1AD8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1AE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1AECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1AF8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B24u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B34u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B78u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B84u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B90u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B98u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BA8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BC0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BD4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BD8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BFCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C10u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C28u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C34u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C4Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C88u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1CB0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1CBCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1CD0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1CDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1CE4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1CECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1CF4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D0Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D1Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D4Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D58u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D60u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2290u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A22D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A22ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2300u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2304u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2314u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A231Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2324u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A233Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2340u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2348u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2350u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2360u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2368u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A237Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A239Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A23B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A23D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A23DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A23E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A23F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2404u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A241Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2420u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2428u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2430u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2440u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2448u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A25BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A25DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A25F8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2610u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A261Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2624u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2630u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2870u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2AA4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2AA8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2ABCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2AC8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2AE4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2AF8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B0Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B14u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B20u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B58u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B60u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B9Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BA0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BB8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BC0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BC8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BF0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BFCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C54u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C58u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C94u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C9Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2CD4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2CDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2CECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2CF4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E10u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E54u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E78u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E94u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2EA8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2EBCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2EC4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2ED0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2ED4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2EF0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2EF8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F08u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F10u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3068u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3094u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3098u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A30B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A30CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A30E0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A30F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A30FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3108u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3120u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3128u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3138u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3140u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3154u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3168u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3388u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A342Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3438u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3444u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3450u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A345Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3468u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3474u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3480u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A348Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3498u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A34A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A34B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A34BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A34FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3508u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3514u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3524u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3530u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3568u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3574u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3580u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A358Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3598u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A35A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A35B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A35F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A35FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3608u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3618u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3624u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A365Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3668u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3674u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3680u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A368Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3698u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A36A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A36E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A36F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A36FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A370Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3718u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3750u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A375Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3768u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3774u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3780u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A378Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3798u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A37D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A37E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A37F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3800u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A380Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3844u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3850u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A385Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3868u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3874u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3880u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A388Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A38CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A38D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A38E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A38F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3900u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3938u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3944u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3950u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A395Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3968u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3974u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3980u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39E8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A44u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3AB4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3AC0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3ACCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3ADCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3AE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B20u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B44u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B90u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3BCCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3C2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3C3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3C8Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3CF4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3CFCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D20u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D34u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D90u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D98u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3DA4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3DC0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3DC8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3DD8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3DE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3DF4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3DFCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3EC8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3EDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F10u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F24u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F4Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F60u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F78u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F84u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F98u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FA0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FA8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FBCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FCCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FD4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FE8u, &recomp_unit_0039, "recomp_unit_0039");
}
} // namespace psprecomp
