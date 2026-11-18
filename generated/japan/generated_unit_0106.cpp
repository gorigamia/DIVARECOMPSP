#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0106[4059] = {
    1, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0,
    0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122,
    0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 126, 127, 0, 0, 0, 0, 128, 0, 129, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 133,
    134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 155, 0, 156, 0, 0, 157,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 185, 0, 186,
    0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0,
    0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0,
    0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278,
    0, 0, 0, 0, 279, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0,
    0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 299,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0,
    343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0,
    0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0,
    379, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390,
    0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0,
    401, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0,
    426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0,
    0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0,
    0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 456, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 463,
    0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0,
    0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477,
    0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0,
    0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0,
    0, 0, 490, 0, 491, 0, 492, 493, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0,
    499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 502, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 512, 513, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 517, 0, 0, 0, 0, 518, 0, 519, 0,
    0, 520, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0,
    528, 0, 529, 530, 0, 0, 0, 531, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 535, 536, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0,
    0, 539, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 543, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0,
    0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0,
    551, 0, 0, 0, 552, 553, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0,
    0, 559, 0, 0, 560, 0, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 567, 0, 0, 0, 568, 0,
    0, 0, 569, 0, 570, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0,
    0, 583, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0,
    593, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 604,
    0, 605, 606, 607, 0, 0, 0, 0, 608, 0, 609, 0, 610, 0, 611, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 615,
    0, 616, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0,
    0, 624, 0, 625, 0, 0, 626, 0, 627, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 635, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0,
    0, 638, 0, 0, 639, 0, 0, 640, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 646,
    0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654,
    0, 0, 655, 0, 656, 0, 657, 0, 0, 658, 0, 0, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 664,
    0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 670, 0, 0, 671, 0, 0, 0, 0, 672, 0, 673, 0, 0,
    674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0,
    682, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0,
    687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 691, 0, 692, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 695, 0,
    696, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0,
    702, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 710, 0, 0, 711, 712, 0, 0, 0,
    713, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 717, 0, 718, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 721,
    0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0,
    0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    730, 0, 0, 0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 736, 0, 737, 0, 0, 738, 0, 0, 0, 0,
    0, 739, 740, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 746, 0, 747, 0, 0, 748, 0, 0,
    749, 0, 0, 0, 0, 750, 0, 0, 751, 0, 752, 0, 0, 753, 0, 0, 0, 754, 0, 755, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 0, 758,
    0, 0, 759, 0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 765,
    0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 768, 0, 0, 769, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0,
    773, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 0,
    780, 0, 0, 781, 782, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 785, 786, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0,
    0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 791, 0, 0, 792, 0, 0, 0, 793, 0, 794, 0,
    795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 798,
};
void recomp_unit_0106_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089AC000u;
        entry_id = (entry_delta < 16236u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0106[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089AC000;
    case 2u: goto L_089AC00C;
    case 3u: goto L_089AC010;
    case 4u: goto L_089AC02C;
    case 5u: goto L_089AC038;
    case 6u: goto L_089AC04C;
    case 7u: goto L_089AC058;
    case 8u: goto L_089AC060;
    case 9u: goto L_089AC08C;
    case 10u: goto L_089AC09C;
    case 11u: goto L_089AC0B0;
    case 12u: goto L_089AC0D0;
    case 13u: goto L_089AC0DC;
    case 14u: goto L_089AC0E4;
    case 15u: goto L_089AC100;
    case 16u: goto L_089AC110;
    case 17u: goto L_089AC11C;
    case 18u: goto L_089AC13C;
    case 19u: goto L_089AC14C;
    case 20u: goto L_089AC174;
    case 21u: goto L_089AC190;
    case 22u: goto L_089AC1A4;
    case 23u: goto L_089AC1CC;
    case 24u: goto L_089AC1D8;
    case 25u: goto L_089AC1EC;
    case 26u: goto L_089AC1F8;
    case 27u: goto L_089AC200;
    case 28u: goto L_089AC224;
    case 29u: goto L_089AC23C;
    case 30u: goto L_089AC250;
    case 31u: goto L_089AC25C;
    case 32u: goto L_089AC278;
    case 33u: goto L_089AC288;
    case 34u: goto L_089AC2B0;
    case 35u: goto L_089AC2CC;
    case 36u: goto L_089AC2EC;
    case 37u: goto L_089AC324;
    case 38u: goto L_089AC330;
    case 39u: goto L_089AC344;
    case 40u: goto L_089AC350;
    case 41u: goto L_089AC358;
    case 42u: goto L_089AC36C;
    case 43u: goto L_089AC390;
    case 44u: goto L_089AC39C;
    case 45u: goto L_089AC3A4;
    case 46u: goto L_089AC3C8;
    case 47u: goto L_089AC3E0;
    case 48u: goto L_089AC3F4;
    case 49u: goto L_089AC400;
    case 50u: goto L_089AC41C;
    case 51u: goto L_089AC42C;
    case 52u: goto L_089AC454;
    case 53u: goto L_089AC470;
    case 54u: goto L_089AC490;
    case 55u: goto L_089AC4A8;
    case 56u: goto L_089AC4B4;
    case 57u: goto L_089AC4C8;
    case 58u: goto L_089AC4D4;
    case 59u: goto L_089AC4DC;
    case 60u: goto L_089AC508;
    case 61u: goto L_089AC518;
    case 62u: goto L_089AC534;
    case 63u: goto L_089AC544;
    case 64u: goto L_089AC550;
    case 65u: goto L_089AC56C;
    case 66u: goto L_089AC57C;
    case 67u: goto L_089AC5A4;
    case 68u: goto L_089AC5C0;
    case 69u: goto L_089AC5E0;
    case 70u: goto L_089AC5F8;
    case 71u: goto L_089AC604;
    case 72u: goto L_089AC618;
    case 73u: goto L_089AC624;
    case 74u: goto L_089AC62C;
    case 75u: goto L_089AC650;
    case 76u: goto L_089AC668;
    case 77u: goto L_089AC680;
    case 78u: goto L_089AC698;
    case 79u: goto L_089AC6B0;
    case 80u: goto L_089AC6C4;
    case 81u: goto L_089AC6D0;
    case 82u: goto L_089AC6F4;
    case 83u: goto L_089AC704;
    case 84u: goto L_089AC72C;
    case 85u: goto L_089AC74C;
    case 86u: goto L_089AC764;
    case 87u: goto L_089AC770;
    case 88u: goto L_089AC778;
    case 89u: goto L_089AC798;
    case 90u: goto L_089AC7B0;
    case 91u: goto L_089AC7BC;
    case 92u: goto L_089AC7C4;
    case 93u: goto L_089AC7E0;
    case 94u: goto L_089AC808;
    case 95u: goto L_089AC834;
    case 96u: goto L_089AC840;
    case 97u: goto L_089AC854;
    case 98u: goto L_089AC860;
    case 99u: goto L_089AC868;
    case 100u: goto L_089AC88C;
    case 101u: goto L_089AC8A0;
    case 102u: goto L_089AC8BC;
    case 103u: goto L_089AC8CC;
    case 104u: goto L_089AC8E4;
    case 105u: goto L_089AC90C;
    case 106u: goto L_089AC91C;
    case 107u: goto L_089AC930;
    case 108u: goto L_089AC948;
    case 109u: goto L_089AC958;
    case 110u: goto L_089AC970;
    case 111u: goto L_089AC998;
    case 112u: goto L_089AC9A8;
    case 113u: goto L_089AC9BC;
    case 114u: goto L_089AC9D8;
    case 115u: goto L_089AC9E8;
    case 116u: goto L_089ACA00;
    case 117u: goto L_089ACA28;
    case 118u: goto L_089ACA38;
    case 119u: goto L_089ACA4C;
    case 120u: goto L_089ACA64;
    case 121u: goto L_089ACA70;
    case 122u: goto L_089ACA7C;
    case 123u: goto L_089ACA88;
    case 124u: goto L_089ACA90;
    case 125u: goto L_089ACAA4;
    case 126u: goto L_089ACAAC;
    case 127u: goto L_089ACAB0;
    case 128u: goto L_089ACAC4;
    case 129u: goto L_089ACACC;
    case 130u: goto L_089ACAD0;
    case 131u: goto L_089ACAE0;
    case 132u: goto L_089ACAF4;
    case 133u: goto L_089ACAFC;
    case 134u: goto L_089ACB00;
    case 135u: goto L_089ACB08;
    case 136u: goto L_089ACB2C;
    case 137u: goto L_089ACB44;
    case 138u: goto L_089ACB5C;
    case 139u: goto L_089ACB74;
    case 140u: goto L_089ACB8C;
    case 141u: goto L_089ACBA4;
    case 142u: goto L_089ACBB8;
    case 143u: goto L_089ACBC4;
    case 144u: goto L_089ACBE4;
    case 145u: goto L_089ACBF0;
    case 146u: goto L_089ACC0C;
    case 147u: goto L_089ACC2C;
    case 148u: goto L_089ACC54;
    case 149u: goto L_089ACC64;
    case 150u: goto L_089ACC74;
    case 151u: goto L_089ACCF4;
    case 152u: goto L_089ACD10;
    case 153u: goto L_089ACD58;
    case 154u: goto L_089ACD64;
    case 155u: goto L_089ACD68;
    case 156u: goto L_089ACD70;
    case 157u: goto L_089ACD7C;
    case 158u: goto L_089ACD8C;
    case 159u: goto L_089ACDA4;
    case 160u: goto L_089ACDB4;
    case 161u: goto L_089ACDBC;
    case 162u: goto L_089ACDD8;
    case 163u: goto L_089ACDF0;
    case 164u: goto L_089ACE04;
    case 165u: goto L_089ACE14;
    case 166u: goto L_089ACE38;
    case 167u: goto L_089ACE50;
    case 168u: goto L_089ACE68;
    case 169u: goto L_089ACE80;
    case 170u: goto L_089ACE98;
    case 171u: goto L_089ACEB0;
    case 172u: goto L_089ACEC4;
    case 173u: goto L_089ACED0;
    case 174u: goto L_089ACEF0;
    case 175u: goto L_089ACEFC;
    case 176u: goto L_089ACF18;
    case 177u: goto L_089ACF38;
    case 178u: goto L_089ACF60;
    case 179u: goto L_089ACF70;
    case 180u: goto L_089ACF80;
    case 181u: goto L_089AD000;
    case 182u: goto L_089AD01C;
    case 183u: goto L_089AD064;
    case 184u: goto L_089AD070;
    case 185u: goto L_089AD074;
    case 186u: goto L_089AD07C;
    case 187u: goto L_089AD088;
    case 188u: goto L_089AD098;
    case 189u: goto L_089AD0B0;
    case 190u: goto L_089AD0C0;
    case 191u: goto L_089AD0C8;
    case 192u: goto L_089AD0E4;
    case 193u: goto L_089AD0FC;
    case 194u: goto L_089AD110;
    case 195u: goto L_089AD120;
    case 196u: goto L_089AD144;
    case 197u: goto L_089AD15C;
    case 198u: goto L_089AD174;
    case 199u: goto L_089AD18C;
    case 200u: goto L_089AD1A4;
    case 201u: goto L_089AD1BC;
    case 202u: goto L_089AD1D0;
    case 203u: goto L_089AD1DC;
    case 204u: goto L_089AD1FC;
    case 205u: goto L_089AD208;
    case 206u: goto L_089AD224;
    case 207u: goto L_089AD244;
    case 208u: goto L_089AD26C;
    case 209u: goto L_089AD280;
    case 210u: goto L_089AD290;
    case 211u: goto L_089AD2A0;
    case 212u: goto L_089AD2B0;
    case 213u: goto L_089AD2C8;
    case 214u: goto L_089AD2D8;
    case 215u: goto L_089AD2E0;
    case 216u: goto L_089AD2FC;
    case 217u: goto L_089AD314;
    case 218u: goto L_089AD338;
    case 219u: goto L_089AD350;
    case 220u: goto L_089AD368;
    case 221u: goto L_089AD37C;
    case 222u: goto L_089AD388;
    case 223u: goto L_089AD3A8;
    case 224u: goto L_089AD3B4;
    case 225u: goto L_089AD3D0;
    case 226u: goto L_089AD3F0;
    case 227u: goto L_089AD418;
    case 228u: goto L_089AD434;
    case 229u: goto L_089AD440;
    case 230u: goto L_089AD45C;
    case 231u: goto L_089AD474;
    case 232u: goto L_089AD498;
    case 233u: goto L_089AD4B0;
    case 234u: goto L_089AD4C8;
    case 235u: goto L_089AD4E0;
    case 236u: goto L_089AD4F8;
    case 237u: goto L_089AD50C;
    case 238u: goto L_089AD518;
    case 239u: goto L_089AD538;
    case 240u: goto L_089AD548;
    case 241u: goto L_089AD574;
    case 242u: goto L_089AD58C;
    case 243u: goto L_089AD5CC;
    case 244u: goto L_089AD5D8;
    case 245u: goto L_089AD5E0;
    case 246u: goto L_089AD604;
    case 247u: goto L_089AD60C;
    case 248u: goto L_089AD628;
    case 249u: goto L_089AD640;
    case 250u: goto L_089AD658;
    case 251u: goto L_089AD69C;
    case 252u: goto L_089AD6A8;
    case 253u: goto L_089AD6B0;
    case 254u: goto L_089AD6CC;
    case 255u: goto L_089AD6E0;
    case 256u: goto L_089AD708;
    case 257u: goto L_089AD718;
    case 258u: goto L_089AD730;
    case 259u: goto L_089AD760;
    case 260u: goto L_089AD770;
    case 261u: goto L_089AD784;
    case 262u: goto L_089AD790;
    case 263u: goto L_089AD7A0;
    case 264u: goto L_089AD7B8;
    case 265u: goto L_089AD7E8;
    case 266u: goto L_089AD7F8;
    case 267u: goto L_089AD80C;
    case 268u: goto L_089AD818;
    case 269u: goto L_089AD828;
    case 270u: goto L_089AD840;
    case 271u: goto L_089AD870;
    case 272u: goto L_089AD880;
    case 273u: goto L_089AD894;
    case 274u: goto L_089AD8A8;
    case 275u: goto L_089AD8B4;
    case 276u: goto L_089AD8B8;
    case 277u: goto L_089AD8F0;
    case 278u: goto L_089AD8FC;
    case 279u: goto L_089AD910;
    case 280u: goto L_089AD91C;
    case 281u: goto L_089AD924;
    case 282u: goto L_089AD948;
    case 283u: goto L_089AD960;
    case 284u: goto L_089AD978;
    case 285u: goto L_089AD990;
    case 286u: goto L_089AD9A8;
    case 287u: goto L_089AD9BC;
    case 288u: goto L_089AD9C8;
    case 289u: goto L_089AD9E8;
    case 290u: goto L_089AD9F8;
    case 291u: goto L_089ADA20;
    case 292u: goto L_089ADA38;
    case 293u: goto L_089ADA78;
    case 294u: goto L_089ADA84;
    case 295u: goto L_089ADA8C;
    case 296u: goto L_089ADAA4;
    case 297u: goto L_089ADAE8;
    case 298u: goto L_089ADAF4;
    case 299u: goto L_089ADAFC;
    case 300u: goto L_089ADB20;
    case 301u: goto L_089ADB28;
    case 302u: goto L_089ADB44;
    case 303u: goto L_089ADB5C;
    case 304u: goto L_089ADB78;
    case 305u: goto L_089ADB9C;
    case 306u: goto L_089ADC14;
    case 307u: goto L_089ADC20;
    case 308u: goto L_089ADC34;
    case 309u: goto L_089ADC40;
    case 310u: goto L_089ADC48;
    case 311u: goto L_089ADC6C;
    case 312u: goto L_089ADC84;
    case 313u: goto L_089ADC9C;
    case 314u: goto L_089ADCB4;
    case 315u: goto L_089ADCCC;
    case 316u: goto L_089ADCE0;
    case 317u: goto L_089ADCEC;
    case 318u: goto L_089ADD0C;
    case 319u: goto L_089ADD1C;
    case 320u: goto L_089ADD48;
    case 321u: goto L_089ADD60;
    case 322u: goto L_089ADD94;
    case 323u: goto L_089ADDA0;
    case 324u: goto L_089ADDA8;
    case 325u: goto L_089ADDCC;
    case 326u: goto L_089ADDD4;
    case 327u: goto L_089ADDF0;
    case 328u: goto L_089ADE08;
    case 329u: goto L_089ADE24;
    case 330u: goto L_089ADE48;
    case 331u: goto L_089ADE70;
    case 332u: goto L_089ADE80;
    case 333u: goto L_089ADE98;
    case 334u: goto L_089ADEC0;
    case 335u: goto L_089ADED0;
    case 336u: goto L_089ADEE4;
    case 337u: goto L_089ADEF8;
    case 338u: goto L_089ADF08;
    case 339u: goto L_089ADF20;
    case 340u: goto L_089ADF48;
    case 341u: goto L_089ADF58;
    case 342u: goto L_089ADF6C;
    case 343u: goto L_089ADF80;
    case 344u: goto L_089ADF90;
    case 345u: goto L_089ADFA8;
    case 346u: goto L_089ADFD0;
    case 347u: goto L_089ADFE0;
    case 348u: goto L_089ADFF4;
    case 349u: goto L_089AE00C;
    case 350u: goto L_089AE018;
    case 351u: goto L_089AE02C;
    case 352u: goto L_089AE038;
    case 353u: goto L_089AE040;
    case 354u: goto L_089AE064;
    case 355u: goto L_089AE07C;
    case 356u: goto L_089AE094;
    case 357u: goto L_089AE0A8;
    case 358u: goto L_089AE0B4;
    case 359u: goto L_089AE0D4;
    case 360u: goto L_089AE0E4;
    case 361u: goto L_089AE10C;
    case 362u: goto L_089AE160;
    case 363u: goto L_089AE174;
    case 364u: goto L_089AE18C;
    case 365u: goto L_089AE1B0;
    case 366u: goto L_089AE1C0;
    case 367u: goto L_089AE1D4;
    case 368u: goto L_089AE1F0;
    case 369u: goto L_089AE214;
    case 370u: goto L_089AE224;
    case 371u: goto L_089AE238;
    case 372u: goto L_089AE254;
    case 373u: goto L_089AE278;
    case 374u: goto L_089AE288;
    case 375u: goto L_089AE29C;
    case 376u: goto L_089AE2B8;
    case 377u: goto L_089AE2DC;
    case 378u: goto L_089AE2EC;
    case 379u: goto L_089AE300;
    case 380u: goto L_089AE310;
    case 381u: goto L_089AE31C;
    case 382u: goto L_089AE330;
    case 383u: goto L_089AE340;
    case 384u: goto L_089AE374;
    case 385u: goto L_089AE38C;
    case 386u: goto L_089AE3B0;
    case 387u: goto L_089AE3C4;
    case 388u: goto L_089AE3E0;
    case 389u: goto L_089AE3F0;
    case 390u: goto L_089AE3FC;
    case 391u: goto L_089AE418;
    case 392u: goto L_089AE428;
    case 393u: goto L_089AE450;
    case 394u: goto L_089AE45C;
    case 395u: goto L_089AE480;
    case 396u: goto L_089AE490;
    case 397u: goto L_089AE4A8;
    case 398u: goto L_089AE4C8;
    case 399u: goto L_089AE4D8;
    case 400u: goto L_089AE4E4;
    case 401u: goto L_089AE500;
    case 402u: goto L_089AE508;
    case 403u: goto L_089AE514;
    case 404u: goto L_089AE524;
    case 405u: goto L_089AE54C;
    case 406u: goto L_089AE558;
    case 407u: goto L_089AE57C;
    case 408u: goto L_089AE58C;
    case 409u: goto L_089AE5A4;
    case 410u: goto L_089AE5C0;
    case 411u: goto L_089AE5D0;
    case 412u: goto L_089AE5DC;
    case 413u: goto L_089AE5F8;
    case 414u: goto L_089AE608;
    case 415u: goto L_089AE630;
    case 416u: goto L_089AE63C;
    case 417u: goto L_089AE660;
    case 418u: goto L_089AE670;
    case 419u: goto L_089AE688;
    case 420u: goto L_089AE6A4;
    case 421u: goto L_089AE6B4;
    case 422u: goto L_089AE6C0;
    case 423u: goto L_089AE6DC;
    case 424u: goto L_089AE6E4;
    case 425u: goto L_089AE6F0;
    case 426u: goto L_089AE700;
    case 427u: goto L_089AE728;
    case 428u: goto L_089AE734;
    case 429u: goto L_089AE758;
    case 430u: goto L_089AE768;
    case 431u: goto L_089AE780;
    case 432u: goto L_089AE79C;
    case 433u: goto L_089AE7AC;
    case 434u: goto L_089AE7B8;
    case 435u: goto L_089AE7D8;
    case 436u: goto L_089AE7E8;
    case 437u: goto L_089AE814;
    case 438u: goto L_089AE820;
    case 439u: goto L_089AE84C;
    case 440u: goto L_089AE85C;
    case 441u: goto L_089AE890;
    case 442u: goto L_089AE8C8;
    case 443u: goto L_089AE8D4;
    case 444u: goto L_089AE8E0;
    case 445u: goto L_089AE8E8;
    case 446u: goto L_089AE904;
    case 447u: goto L_089AE91C;
    case 448u: goto L_089AE934;
    case 449u: goto L_089AE94C;
    case 450u: goto L_089AE958;
    case 451u: goto L_089AE964;
    case 452u: goto L_089AE978;
    case 453u: goto L_089AE984;
    case 454u: goto L_089AE998;
    case 455u: goto L_089AE9A0;
    case 456u: goto L_089AE9A8;
    case 457u: goto L_089AE9AC;
    case 458u: goto L_089AE9B8;
    case 459u: goto L_089AE9C4;
    case 460u: goto L_089AE9D0;
    case 461u: goto L_089AE9D8;
    case 462u: goto L_089AE9EC;
    case 463u: goto L_089AE9FC;
    case 464u: goto L_089AEA08;
    case 465u: goto L_089AEA10;
    case 466u: goto L_089AEA28;
    case 467u: goto L_089AEA44;
    case 468u: goto L_089AEA5C;
    case 469u: goto L_089AEA68;
    case 470u: goto L_089AEA74;
    case 471u: goto L_089AEA90;
    case 472u: goto L_089AEA9C;
    case 473u: goto L_089AEAB8;
    case 474u: goto L_089AEAD0;
    case 475u: goto L_089AEAD4;
    case 476u: goto L_089AEAE0;
    case 477u: goto L_089AEAFC;
    case 478u: goto L_089AEB1C;
    case 479u: goto L_089AEB24;
    case 480u: goto L_089AEB38;
    case 481u: goto L_089AEB44;
    case 482u: goto L_089AEB54;
    case 483u: goto L_089AEB6C;
    case 484u: goto L_089AEB84;
    case 485u: goto L_089AEBC4;
    case 486u: goto L_089AEBD0;
    case 487u: goto L_089AEBDC;
    case 488u: goto L_089AEBE8;
    case 489u: goto L_089AEBF4;
    case 490u: goto L_089AEC08;
    case 491u: goto L_089AEC10;
    case 492u: goto L_089AEC18;
    case 493u: goto L_089AEC1C;
    case 494u: goto L_089AEC24;
    case 495u: goto L_089AEC30;
    case 496u: goto L_089AEC48;
    case 497u: goto L_089AEC54;
    case 498u: goto L_089AEC64;
    case 499u: goto L_089AEC80;
    case 500u: goto L_089AEC9C;
    case 501u: goto L_089AECA8;
    case 502u: goto L_089AECB0;
    case 503u: goto L_089AECB4;
    case 504u: goto L_089AECDC;
    case 505u: goto L_089AED24;
    case 506u: goto L_089AED3C;
    case 507u: goto L_089AED44;
    case 508u: goto L_089AED54;
    case 509u: goto L_089AED6C;
    case 510u: goto L_089AED98;
    case 511u: goto L_089AEDA0;
    case 512u: goto L_089AEDAC;
    case 513u: goto L_089AEDB0;
    case 514u: goto L_089AEDBC;
    case 515u: goto L_089AEDC8;
    case 516u: goto L_089AEDD4;
    case 517u: goto L_089AEDDC;
    case 518u: goto L_089AEDF0;
    case 519u: goto L_089AEDF8;
    case 520u: goto L_089AEE04;
    case 521u: goto L_089AEE08;
    case 522u: goto L_089AEE18;
    case 523u: goto L_089AEE28;
    case 524u: goto L_089AEE38;
    case 525u: goto L_089AEE54;
    case 526u: goto L_089AEE60;
    case 527u: goto L_089AEE70;
    case 528u: goto L_089AEE80;
    case 529u: goto L_089AEE88;
    case 530u: goto L_089AEE8C;
    case 531u: goto L_089AEE9C;
    case 532u: goto L_089AEEA4;
    case 533u: goto L_089AEEB0;
    case 534u: goto L_089AEEBC;
    case 535u: goto L_089AEEC8;
    case 536u: goto L_089AEECC;
    case 537u: goto L_089AEEE4;
    case 538u: goto L_089AEEF0;
    case 539u: goto L_089AEF04;
    case 540u: goto L_089AEF0C;
    case 541u: goto L_089AEF24;
    case 542u: goto L_089AEF30;
    case 543u: goto L_089AEF38;
    case 544u: goto L_089AEF3C;
    case 545u: goto L_089AEF6C;
    case 546u: goto L_089AEF88;
    case 547u: goto L_089AEF98;
    case 548u: goto L_089AEFAC;
    case 549u: goto L_089AEFD4;
    case 550u: goto L_089AEFF8;
    case 551u: goto L_089AF000;
    case 552u: goto L_089AF010;
    case 553u: goto L_089AF014;
    case 554u: goto L_089AF020;
    case 555u: goto L_089AF028;
    case 556u: goto L_089AF044;
    case 557u: goto L_089AF050;
    case 558u: goto L_089AF074;
    case 559u: goto L_089AF084;
    case 560u: goto L_089AF090;
    case 561u: goto L_089AF0A0;
    case 562u: goto L_089AF0A8;
    case 563u: goto L_089AF0B8;
    case 564u: goto L_089AF0C0;
    case 565u: goto L_089AF0D0;
    case 566u: goto L_089AF0E0;
    case 567u: goto L_089AF0E8;
    case 568u: goto L_089AF0F8;
    case 569u: goto L_089AF108;
    case 570u: goto L_089AF110;
    case 571u: goto L_089AF120;
    case 572u: goto L_089AF130;
    case 573u: goto L_089AF13C;
    case 574u: goto L_089AF144;
    case 575u: goto L_089AF150;
    case 576u: goto L_089AF160;
    case 577u: goto L_089AF188;
    case 578u: goto L_089AF1A8;
    case 579u: goto L_089AF1C8;
    case 580u: goto L_089AF1D4;
    case 581u: goto L_089AF1DC;
    case 582u: goto L_089AF1F8;
    case 583u: goto L_089AF204;
    case 584u: goto L_089AF210;
    case 585u: goto L_089AF21C;
    case 586u: goto L_089AF228;
    case 587u: goto L_089AF238;
    case 588u: goto L_089AF244;
    case 589u: goto L_089AF250;
    case 590u: goto L_089AF25C;
    case 591u: goto L_089AF268;
    case 592u: goto L_089AF274;
    case 593u: goto L_089AF280;
    case 594u: goto L_089AF288;
    case 595u: goto L_089AF294;
    case 596u: goto L_089AF2A0;
    case 597u: goto L_089AF2AC;
    case 598u: goto L_089AF2B8;
    case 599u: goto L_089AF2C4;
    case 600u: goto L_089AF2D0;
    case 601u: goto L_089AF2DC;
    case 602u: goto L_089AF2E8;
    case 603u: goto L_089AF2F4;
    case 604u: goto L_089AF2FC;
    case 605u: goto L_089AF304;
    case 606u: goto L_089AF308;
    case 607u: goto L_089AF30C;
    case 608u: goto L_089AF320;
    case 609u: goto L_089AF328;
    case 610u: goto L_089AF330;
    case 611u: goto L_089AF338;
    case 612u: goto L_089AF350;
    case 613u: goto L_089AF358;
    case 614u: goto L_089AF370;
    case 615u: goto L_089AF37C;
    case 616u: goto L_089AF384;
    case 617u: goto L_089AF388;
    case 618u: goto L_089AF39C;
    case 619u: goto L_089AF3BC;
    case 620u: goto L_089AF3C8;
    case 621u: goto L_089AF3DC;
    case 622u: goto L_089AF3EC;
    case 623u: goto L_089AF3F8;
    case 624u: goto L_089AF404;
    case 625u: goto L_089AF40C;
    case 626u: goto L_089AF418;
    case 627u: goto L_089AF420;
    case 628u: goto L_089AF42C;
    case 629u: goto L_089AF43C;
    case 630u: goto L_089AF454;
    case 631u: goto L_089AF45C;
    case 632u: goto L_089AF474;
    case 633u: goto L_089AF4C4;
    case 634u: goto L_089AF4CC;
    case 635u: goto L_089AF4D0;
    case 636u: goto L_089AF4F0;
    case 637u: goto L_089AF4F8;
    case 638u: goto L_089AF504;
    case 639u: goto L_089AF510;
    case 640u: goto L_089AF51C;
    case 641u: goto L_089AF520;
    case 642u: goto L_089AF54C;
    case 643u: goto L_089AF558;
    case 644u: goto L_089AF560;
    case 645u: goto L_089AF574;
    case 646u: goto L_089AF57C;
    case 647u: goto L_089AF588;
    case 648u: goto L_089AF598;
    case 649u: goto L_089AF5B0;
    case 650u: goto L_089AF5BC;
    case 651u: goto L_089AF5C4;
    case 652u: goto L_089AF5D4;
    case 653u: goto L_089AF5F0;
    case 654u: goto L_089AF5FC;
    case 655u: goto L_089AF608;
    case 656u: goto L_089AF610;
    case 657u: goto L_089AF618;
    case 658u: goto L_089AF624;
    case 659u: goto L_089AF638;
    case 660u: goto L_089AF640;
    case 661u: goto L_089AF648;
    case 662u: goto L_089AF658;
    case 663u: goto L_089AF670;
    case 664u: goto L_089AF67C;
    case 665u: goto L_089AF684;
    case 666u: goto L_089AF694;
    case 667u: goto L_089AF6AC;
    case 668u: goto L_089AF6B8;
    case 669u: goto L_089AF6C4;
    case 670u: goto L_089AF6CC;
    case 671u: goto L_089AF6D8;
    case 672u: goto L_089AF6EC;
    case 673u: goto L_089AF6F4;
    case 674u: goto L_089AF700;
    case 675u: goto L_089AF710;
    case 676u: goto L_089AF728;
    case 677u: goto L_089AF734;
    case 678u: goto L_089AF73C;
    case 679u: goto L_089AF74C;
    case 680u: goto L_089AF768;
    case 681u: goto L_089AF774;
    case 682u: goto L_089AF780;
    case 683u: goto L_089AF794;
    case 684u: goto L_089AF7CC;
    case 685u: goto L_089AF7D4;
    case 686u: goto L_089AF7E8;
    case 687u: goto L_089AF800;
    case 688u: goto L_089AF818;
    case 689u: goto L_089AF830;
    case 690u: goto L_089AF838;
    case 691u: goto L_089AF844;
    case 692u: goto L_089AF84C;
    case 693u: goto L_089AF85C;
    case 694u: goto L_089AF864;
    case 695u: goto L_089AF878;
    case 696u: goto L_089AF880;
    case 697u: goto L_089AF894;
    case 698u: goto L_089AF8A4;
    case 699u: goto L_089AF8B8;
    case 700u: goto L_089AF8D0;
    case 701u: goto L_089AF8E8;
    case 702u: goto L_089AF900;
    case 703u: goto L_089AF908;
    case 704u: goto L_089AF914;
    case 705u: goto L_089AF91C;
    case 706u: goto L_089AF92C;
    case 707u: goto L_089AF934;
    case 708u: goto L_089AF944;
    case 709u: goto L_089AF950;
    case 710u: goto L_089AF960;
    case 711u: goto L_089AF96C;
    case 712u: goto L_089AF970;
    case 713u: goto L_089AF980;
    case 714u: goto L_089AF990;
    case 715u: goto L_089AF9A4;
    case 716u: goto L_089AF9B8;
    case 717u: goto L_089AF9C0;
    case 718u: goto L_089AF9C8;
    case 719u: goto L_089AF9D0;
    case 720u: goto L_089AF9EC;
    case 721u: goto L_089AF9FC;
    case 722u: goto L_089AFA1C;
    case 723u: goto L_089AFA2C;
    case 724u: goto L_089AFA48;
    case 725u: goto L_089AFA58;
    case 726u: goto L_089AFA78;
    case 727u: goto L_089AFA88;
    case 728u: goto L_089AFAA4;
    case 729u: goto L_089AFAB4;
    case 730u: goto L_089AFB00;
    case 731u: goto L_089AFB10;
    case 732u: goto L_089AFB1C;
    case 733u: goto L_089AFB28;
    case 734u: goto L_089AFB38;
    case 735u: goto L_089AFB4C;
    case 736u: goto L_089AFB58;
    case 737u: goto L_089AFB60;
    case 738u: goto L_089AFB6C;
    case 739u: goto L_089AFB84;
    case 740u: goto L_089AFB88;
    case 741u: goto L_089AFB94;
    case 742u: goto L_089AFB9C;
    case 743u: goto L_089AFBB4;
    case 744u: goto L_089AFBC0;
    case 745u: goto L_089AFBD4;
    case 746u: goto L_089AFBE0;
    case 747u: goto L_089AFBE8;
    case 748u: goto L_089AFBF4;
    case 749u: goto L_089AFC00;
    case 750u: goto L_089AFC14;
    case 751u: goto L_089AFC20;
    case 752u: goto L_089AFC28;
    case 753u: goto L_089AFC34;
    case 754u: goto L_089AFC44;
    case 755u: goto L_089AFC4C;
    case 756u: goto L_089AFC58;
    case 757u: goto L_089AFC64;
    case 758u: goto L_089AFC7C;
    case 759u: goto L_089AFC88;
    case 760u: goto L_089AFC90;
    case 761u: goto L_089AFCA4;
    case 762u: goto L_089AFCC8;
    case 763u: goto L_089AFCD0;
    case 764u: goto L_089AFCE0;
    case 765u: goto L_089AFCFC;
    case 766u: goto L_089AFD0C;
    case 767u: goto L_089AFD1C;
    case 768u: goto L_089AFD28;
    case 769u: goto L_089AFD34;
    case 770u: goto L_089AFD38;
    case 771u: goto L_089AFD44;
    case 772u: goto L_089AFD6C;
    case 773u: goto L_089AFD80;
    case 774u: goto L_089AFD90;
    case 775u: goto L_089AFDA0;
    case 776u: goto L_089AFDAC;
    case 777u: goto L_089AFDC8;
    case 778u: goto L_089AFDD8;
    case 779u: goto L_089AFDF4;
    case 780u: goto L_089AFE00;
    case 781u: goto L_089AFE0C;
    case 782u: goto L_089AFE10;
    case 783u: goto L_089AFE34;
    case 784u: goto L_089AFE44;
    case 785u: goto L_089AFE50;
    case 786u: goto L_089AFE54;
    case 787u: goto L_089AFE78;
    case 788u: goto L_089AFE84;
    case 789u: goto L_089AFEA8;
    case 790u: goto L_089AFED0;
    case 791u: goto L_089AFED4;
    case 792u: goto L_089AFEE0;
    case 793u: goto L_089AFEF0;
    case 794u: goto L_089AFEF8;
    case 795u: goto L_089AFF00;
    case 796u: goto L_089AFF28;
    case 797u: goto L_089AFF4C;
    case 798u: goto L_089AFF68;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089AC000:
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC010;
      }
      goto L_089AC00C;
    }
L_089AC00C:
    ctx.set_gpr(25, ctx.gpr[13] + 0u);
    goto L_089AC010;
L_089AC010:
    ctx.set_gpr(24, ctx.gpr[25] << 2u);
    ctx.set_gpr(24, ctx.gpr[6] + ctx.gpr[24]);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-4), ctx.gpr[24]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    goto L_089AC02C;
L_089AC02C:
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 806u, 0x089ABFD0u>(ctx, &aot_mem); return;
      }
      goto L_089AC038;
    }
L_089AC038:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(14, ctx.gpr[14] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[3]);
    goto L_089AC04C;
L_089AC04C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 803u, 0x089ABF9Cu>(ctx, &aot_mem); return;
      }
      goto L_089AC058;
    }
L_089AC058:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC060:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089AC08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 660u, 0x089AB438u>(ctx, &aot_mem) && ctx.pc == 0x089AC08Cu) goto L_089AC08C;
    return;
L_089AC08C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC09C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC0D0;
      }
      goto L_089AC0B0;
    }
L_089AC0B0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, (ctx.gpr[3] >> 4u) & 0x0000000Fu);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] & 240u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089AC0D0;
L_089AC0D0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC0B0;
      }
      goto L_089AC0DC;
    }
L_089AC0DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC0E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16012));
    ctx.set_gpr(31, 0x089AC100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AC100u) goto L_089AC100;
    return;
L_089AC100:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC110:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC11C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x089AC13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC13Cu) goto L_089AC13C;
    return;
L_089AC13C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC14C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC174:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC1EC;
      }
      goto L_089AC190;
    }
L_089AC190:
    ctx.set_gpr(12, ctx.gpr[14] + 0u);
    ctx.set_gpr(11, ctx.gpr[15] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC1CC;
      }
      goto L_089AC1A4;
    }
L_089AC1A4:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] & 61440u);
    ctx.set_gpr(6, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, ctx.gpr[7] & 240u);
    ctx.set_gpr(3, ctx.gpr[3] >> 4u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089AC1CC;
L_089AC1CC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC1A4;
      }
      goto L_089AC1D8;
    }
L_089AC1D8:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(14, ctx.gpr[14] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[3]);
    goto L_089AC1EC;
L_089AC1EC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC190;
      }
      goto L_089AC1F8;
    }
L_089AC1F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC200:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15696));
    ctx.set_gpr(31, 0x089AC224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AC224u) goto L_089AC224;
    return;
L_089AC224:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15528));
    ctx.set_gpr(31, 0x089AC23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AC23Cu) goto L_089AC23C;
    return;
L_089AC23C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC250:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC25C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x089AC278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC278u) goto L_089AC278;
    return;
L_089AC278:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC288:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC2B0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC344;
      }
      goto L_089AC2CC;
    }
L_089AC2CC:
    ctx.set_gpr(10, ctx.gpr[6] << 1u);
    ctx.set_gpr(10, ctx.gpr[8] + ctx.gpr[10]);
    ctx.set_gpr(15, ctx.gpr[10] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[6]);
    ctx.set_gpr(14, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC324;
      }
      goto L_089AC2EC;
    }
L_089AC2EC:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[12] & 240u);
    ctx.set_gpr(11, ctx.gpr[10] << 8u);
    ctx.set_gpr(10, ctx.gpr[12] & 15u);
    ctx.set_gpr(12, ctx.gpr[10] << 4u);
    ctx.set_gpr(10, ctx.gpr[11] >> 4u);
    ctx.set_gpr(10, ctx.gpr[11] | ctx.gpr[10]);
    ctx.set_gpr(11, ctx.gpr[12] | ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[12] >> 4u);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    goto L_089AC324;
L_089AC324:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC2EC;
      }
      goto L_089AC330;
    }
L_089AC330:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    goto L_089AC344;
L_089AC344:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC2CC;
      }
      goto L_089AC350;
    }
L_089AC350:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC358:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC390;
      }
      goto L_089AC36C;
    }
L_089AC36C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[5] & 240u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 4u) & 0x000000FFu);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089AC390;
L_089AC390:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC36C;
      }
      goto L_089AC39C;
    }
L_089AC39C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC3A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15276));
    ctx.set_gpr(31, 0x089AC3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AC3C8u) goto L_089AC3C8;
    return;
L_089AC3C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15140));
    ctx.set_gpr(31, 0x089AC3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AC3E0u) goto L_089AC3E0;
    return;
L_089AC3E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC3F4:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC400:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089AC41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC41Cu) goto L_089AC41C;
    return;
L_089AC41C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC42C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC454:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC4C8;
      }
      goto L_089AC470;
    }
L_089AC470:
    ctx.set_gpr(3, ctx.gpr[7] << 1u);
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[13] + ctx.gpr[7]);
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC4A8;
      }
      goto L_089AC490;
    }
L_089AC490:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | 65280u);
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_089AC4A8;
L_089AC4A8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC490;
      }
      goto L_089AC4B4;
    }
L_089AC4B4:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[3]);
    goto L_089AC4C8;
L_089AC4C8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC470;
      }
      goto L_089AC4D4;
    }
L_089AC4D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC4DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089AC508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC508u) goto L_089AC508;
    return;
L_089AC508:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC518:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14940));
    ctx.set_gpr(31, 0x089AC534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AC534u) goto L_089AC534;
    return;
L_089AC534:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC544:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089AC56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC56Cu) goto L_089AC56C;
    return;
L_089AC56C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC57C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC5A4:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC618;
      }
      goto L_089AC5C0;
    }
L_089AC5C0:
    ctx.set_gpr(3, ctx.gpr[7] << 1u);
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[13] + ctx.gpr[7]);
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC5F8;
      }
      goto L_089AC5E0;
    }
L_089AC5E0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 8u);
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_089AC5F8;
L_089AC5F8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC5E0;
      }
      goto L_089AC604;
    }
L_089AC604:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[3]);
    goto L_089AC618;
L_089AC618:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC5C0;
      }
      goto L_089AC624;
    }
L_089AC624:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC62C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14396));
    ctx.set_gpr(31, 0x089AC650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AC650u) goto L_089AC650;
    return;
L_089AC650:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14232));
    ctx.set_gpr(31, 0x089AC668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AC668u) goto L_089AC668;
    return;
L_089AC668:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14548));
    ctx.set_gpr(31, 0x089AC680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AC680u) goto L_089AC680;
    return;
L_089AC680:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(105));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14472));
    ctx.set_gpr(31, 0x089AC698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AC698u) goto L_089AC698;
    return;
L_089AC698:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14472));
    ctx.set_gpr(31, 0x089AC6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AC6B0u) goto L_089AC6B0;
    return;
L_089AC6B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC6C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC6D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x089AC6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AC6F4u) goto L_089AC6F4;
    return;
L_089AC6F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC704:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC72C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC764;
      }
      goto L_089AC74C;
    }
L_089AC74C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    goto L_089AC764;
L_089AC764:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC74C;
      }
      goto L_089AC770;
    }
L_089AC770:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC778:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC7B0;
      }
      goto L_089AC798;
    }
L_089AC798:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    goto L_089AC7B0;
L_089AC7B0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC798;
      }
      goto L_089AC7BC;
    }
L_089AC7BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC7C4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC854;
      }
      goto L_089AC7E0;
    }
L_089AC7E0:
    ctx.set_gpr(8, ctx.gpr[10] << 2u);
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(13, ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(8, ctx.gpr[10] << 1u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(12, ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC834;
      }
      goto L_089AC808;
    }
L_089AC808:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-4));
    goto L_089AC834;
L_089AC834:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC808;
      }
      goto L_089AC840;
    }
L_089AC840:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    goto L_089AC854;
L_089AC854:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC7E0;
      }
      goto L_089AC860;
    }
L_089AC860:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AC868:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACA7C;
      }
      goto L_089AC88C;
    }
L_089AC88C:
    ctx.set_gpr(12, ctx.gpr[14] + 0u);
    ctx.set_gpr(11, ctx.gpr[15] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACA64;
      }
      goto L_089AC8A0;
    }
L_089AC8A0:
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AC8CC;
      }
      goto L_089AC8BC;
    }
L_089AC8BC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[25]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC8E4;
      }
      goto L_089AC8CC;
    }
L_089AC8CC:
    ctx.set_gpr(24, ctx.gpr[25] >> 1u);
    ctx.set_gpr(3, ctx.gpr[25] & 1u);
    ctx.set_gpr(24, ctx.gpr[24] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[24]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089AC8E4;
L_089AC8E4:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC91C;
      }
      goto L_089AC90C;
    }
L_089AC90C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC930;
      }
      goto L_089AC91C;
    }
L_089AC91C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(24, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[24] | ctx.gpr[3]);
    goto L_089AC930;
L_089AC930:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(24, 17020u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[24]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AC958;
      }
      goto L_089AC948;
    }
L_089AC948:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC970;
      }
      goto L_089AC958;
    }
L_089AC958:
    ctx.set_gpr(24, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(24, ctx.gpr[24] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[24]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089AC970;
L_089AC970:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(5, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AC9A8;
      }
      goto L_089AC998;
    }
L_089AC998:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AC9BC;
      }
      goto L_089AC9A8;
    }
L_089AC9A8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(24, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[24] | ctx.gpr[5]);
    goto L_089AC9BC;
L_089AC9BC:
    ctx.set_gpr(5, ctx.gpr[5] & 65535u);
    ctx.set_gpr(5, ctx.gpr[5] << 5u);
    ctx.set_gpr(24, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AC9E8;
      }
      goto L_089AC9D8;
    }
L_089AC9D8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACA00;
      }
      goto L_089AC9E8;
    }
L_089AC9E8:
    ctx.set_gpr(5, ctx.gpr[4] >> 1u);
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089ACA00;
L_089ACA00:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ACA38;
      }
      goto L_089ACA28;
    }
L_089ACA28:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACA4C;
      }
      goto L_089ACA38;
    }
L_089ACA38:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089ACA4C;
L_089ACA4C:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[24]);
    rt.memory().aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(3));
    goto L_089ACA64;
L_089ACA64:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC8A0;
      }
      goto L_089ACA70;
    }
L_089ACA70:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[14] + ctx.gpr[7]);
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[6]);
    goto L_089ACA7C;
L_089ACA7C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AC88C;
      }
      goto L_089ACA88;
    }
L_089ACA88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACA90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACAAC;
      }
      goto L_089ACAA4;
    }
L_089ACAA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACAB0;
      }
      goto L_089ACAAC;
    }
L_089ACAAC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089ACAB0;
L_089ACAB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACACC;
      }
      goto L_089ACAC4;
    }
L_089ACAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACAD0;
      }
      goto L_089ACACC;
    }
L_089ACACC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089ACAD0;
L_089ACAD0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACAE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACAFC;
      }
      goto L_089ACAF4;
    }
L_089ACAF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACB00;
      }
      goto L_089ACAFC;
    }
L_089ACAFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089ACB00;
L_089ACB00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACB08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12816));
    ctx.set_gpr(31, 0x089ACB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089ACB2Cu) goto L_089ACB2C;
    return;
L_089ACB2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13228));
    ctx.set_gpr(31, 0x089ACB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ACB44u) goto L_089ACB44;
    return;
L_089ACB44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(105));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12916));
    ctx.set_gpr(31, 0x089ACB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ACB5Cu) goto L_089ACB5C;
    return;
L_089ACB5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12916));
    ctx.set_gpr(31, 0x089ACB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ACB74u) goto L_089ACB74;
    return;
L_089ACB74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(103));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13228));
    ctx.set_gpr(31, 0x089ACB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ACB8Cu) goto L_089ACB8C;
    return;
L_089ACB8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(107));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13228));
    ctx.set_gpr(31, 0x089ACBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ACBA4u) goto L_089ACBA4;
    return;
L_089ACBA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACBB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACBC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089ACBE4u);
    // nop
    goto L_089ACAE0;
L_089ACBE4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089ACBF0u);
    // nop
    goto L_089ACA90;
L_089ACBF0:
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089ACC0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACC0Cu) goto L_089ACC0C;
    return;
L_089ACC0C:
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
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
L_089ACC2C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACC54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089ACC64u);
    // nop
    goto L_089ACA90;
L_089ACC64:
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD70;
      }
      goto L_089ACC74;
    }
L_089ACC74:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[6] & 31u);
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[6] & 2016u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] & 63488u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 11u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[6] & 31u);
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[6] & 2016u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] & 63488u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 11u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD68;
      }
      goto L_089ACCF4;
    }
L_089ACCF4:
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD58;
      }
      goto L_089ACD10;
    }
L_089ACD10:
    ctx.set_gpr(12, ctx.gpr[5] << 1u);
    ctx.set_gpr(11, ctx.gpr[3] >> (ctx.gpr[12] & 31u));
    ctx.set_gpr(9, 0u < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[9] ^ 1u);
    ctx.set_gpr(10, ctx.gpr[9] & 255u);
    ctx.set_gpr(9, ~(ctx.gpr[11] | 0u));
    ctx.set_gpr(10, ctx.gpr[10] & ctx.gpr[9]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 1u));
    ctx.set_gpr(9, ctx.gpr[9] ^ ctx.gpr[11]);
    ctx.set_gpr(9, ~(ctx.gpr[9] | 0u));
    ctx.set_gpr(9, ctx.gpr[4] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[10] | ctx.gpr[9]);
    ctx.set_gpr(10, ctx.gpr[9] & 1u);
    ctx.set_gpr(9, ctx.gpr[11] & 2u);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[12] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089ACD58;
L_089ACD58:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACD10;
      }
      goto L_089ACD64;
    }
L_089ACD64:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_089ACD68;
L_089ACD68:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    goto L_089ACD70;
L_089ACD70:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACC74;
      }
      goto L_089ACD7C;
    }
L_089ACD7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACD8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x089ACDA4u);
    // nop
    goto L_089ACA90;
L_089ACDA4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089ACDB4u);
    // nop
    goto L_089ACC54;
L_089ACDB4:
    ctx.set_gpr(31, 0x089ACDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x089ACDBCu) goto L_089ACDBC;
    return;
L_089ACDBC:
    ctx.set_gpr(6, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089ACDD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACDD8u) goto L_089ACDD8;
    return;
L_089ACDD8:
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
L_089ACDF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x089ACE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 488u, 0x089AA61Cu>(ctx, &aot_mem) && ctx.pc == 0x089ACE04u) goto L_089ACE04;
    return;
L_089ACE04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACE14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12036));
    ctx.set_gpr(31, 0x089ACE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089ACE38u) goto L_089ACE38;
    return;
L_089ACE38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12448));
    ctx.set_gpr(31, 0x089ACE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ACE50u) goto L_089ACE50;
    return;
L_089ACE50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(105));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12136));
    ctx.set_gpr(31, 0x089ACE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ACE68u) goto L_089ACE68;
    return;
L_089ACE68:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12136));
    ctx.set_gpr(31, 0x089ACE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ACE80u) goto L_089ACE80;
    return;
L_089ACE80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(103));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12448));
    ctx.set_gpr(31, 0x089ACE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ACE98u) goto L_089ACE98;
    return;
L_089ACE98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(107));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12448));
    ctx.set_gpr(31, 0x089ACEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ACEB0u) goto L_089ACEB0;
    return;
L_089ACEB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACEC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089ACEF0u);
    // nop
    goto L_089ACAE0;
L_089ACEF0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089ACEFCu);
    // nop
    goto L_089ACA90;
L_089ACEFC:
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089ACF18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ACF18u) goto L_089ACF18;
    return;
L_089ACF18:
    ctx.set_gpr(3, ctx.gpr[16] << 4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
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
L_089ACF38:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ACF60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089ACF70u);
    // nop
    goto L_089ACA90;
L_089ACF70:
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD07C;
      }
      goto L_089ACF80;
    }
L_089ACF80:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[6] & 31u);
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[6] & 2016u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] & 63488u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 11u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(3, ctx.gpr[6] & 31u);
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[6] & 2016u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] & 63488u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 11u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD074;
      }
      goto L_089AD000;
    }
L_089AD000:
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD064;
      }
      goto L_089AD01C;
    }
L_089AD01C:
    ctx.set_gpr(12, ctx.gpr[5] << 1u);
    ctx.set_gpr(11, ctx.gpr[3] >> (ctx.gpr[12] & 31u));
    ctx.set_gpr(9, 0u < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[9] ^ 1u);
    ctx.set_gpr(10, ctx.gpr[9] & 255u);
    ctx.set_gpr(9, ~(ctx.gpr[11] | 0u));
    ctx.set_gpr(10, ctx.gpr[10] & ctx.gpr[9]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 1u));
    ctx.set_gpr(9, ctx.gpr[9] ^ ctx.gpr[11]);
    ctx.set_gpr(9, ~(ctx.gpr[9] | 0u));
    ctx.set_gpr(9, ctx.gpr[4] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[10] | ctx.gpr[9]);
    ctx.set_gpr(10, ctx.gpr[9] & 1u);
    ctx.set_gpr(9, ctx.gpr[11] & 2u);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[12] & 31u));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089AD064;
L_089AD064:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD01C;
      }
      goto L_089AD070;
    }
L_089AD070:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_089AD074;
L_089AD074:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16));
    goto L_089AD07C;
L_089AD07C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ACF80;
      }
      goto L_089AD088;
    }
L_089AD088:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD098:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x089AD0B0u);
    // nop
    goto L_089ACA90;
L_089AD0B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089AD0C0u);
    // nop
    goto L_089ACF60;
L_089AD0C0:
    ctx.set_gpr(31, 0x089AD0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x089AD0C8u) goto L_089AD0C8;
    return;
L_089AD0C8:
    ctx.set_gpr(6, ctx.gpr[16] << 3u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AD0E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD0E4u) goto L_089AD0E4;
    return;
L_089AD0E4:
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
L_089AD0FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x089AD110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 488u, 0x089AA61Cu>(ctx, &aot_mem) && ctx.pc == 0x089AD110u) goto L_089AD110;
    return;
L_089AD110:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD120:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11668));
    ctx.set_gpr(31, 0x089AD144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AD144u) goto L_089AD144;
    return;
L_089AD144:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11632));
    ctx.set_gpr(31, 0x089AD15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD15Cu) goto L_089AD15C;
    return;
L_089AD15C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(105));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11600));
    ctx.set_gpr(31, 0x089AD174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD174u) goto L_089AD174;
    return;
L_089AD174:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11600));
    ctx.set_gpr(31, 0x089AD18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD18Cu) goto L_089AD18C;
    return;
L_089AD18C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(103));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11632));
    ctx.set_gpr(31, 0x089AD1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD1A4u) goto L_089AD1A4;
    return;
L_089AD1A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(107));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11632));
    ctx.set_gpr(31, 0x089AD1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD1BCu) goto L_089AD1BC;
    return;
L_089AD1BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD1D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089AD1FCu);
    // nop
    goto L_089ACAE0;
L_089AD1FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AD208u);
    // nop
    goto L_089ACA90;
L_089AD208:
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AD224u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD224u) goto L_089AD224;
    return;
L_089AD224:
    ctx.set_gpr(3, ctx.gpr[16] << 4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
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
L_089AD244:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD26C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089AD280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 488u, 0x089AA61Cu>(ctx, &aot_mem) && ctx.pc == 0x089AD280u) goto L_089AD280;
    return;
L_089AD280:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089AD2A0u);
    // nop
    goto L_089ACF60;
L_089AD2A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD2B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x089AD2C8u);
    // nop
    goto L_089ACA90;
L_089AD2C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089AD2D8u);
    // nop
    goto L_089AD290;
L_089AD2D8:
    ctx.set_gpr(31, 0x089AD2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x089AD2E0u) goto L_089AD2E0;
    return;
L_089AD2E0:
    ctx.set_gpr(6, ctx.gpr[16] << 3u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AD2FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD2FCu) goto L_089AD2FC;
    return;
L_089AD2FC:
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
L_089AD314:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12448));
    ctx.set_gpr(31, 0x089AD338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD338u) goto L_089AD338;
    return;
L_089AD338:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(105));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11240));
    ctx.set_gpr(31, 0x089AD350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD350u) goto L_089AD350;
    return;
L_089AD350:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11240));
    ctx.set_gpr(31, 0x089AD368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD368u) goto L_089AD368;
    return;
L_089AD368:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD37C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(44));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD388:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089AD3A8u);
    // nop
    goto L_089ACAE0;
L_089AD3A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AD3B4u);
    // nop
    goto L_089ACA90;
L_089AD3B4:
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AD3D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD3D0u) goto L_089AD3D0;
    return;
L_089AD3D0:
    ctx.set_gpr(3, ctx.gpr[16] << 4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
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
L_089AD3F0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089AD434u);
    // nop
    goto L_089ACA90;
L_089AD434:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AD440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x089AD440u) goto L_089AD440;
    return;
L_089AD440:
    ctx.set_gpr(6, ctx.gpr[16] << 3u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AD45Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD45Cu) goto L_089AD45C;
    return;
L_089AD45C:
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
L_089AD474:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10576));
    ctx.set_gpr(31, 0x089AD498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AD498u) goto L_089AD498;
    return;
L_089AD498:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10892));
    ctx.set_gpr(31, 0x089AD4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD4B0u) goto L_089AD4B0;
    return;
L_089AD4B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(105));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10784));
    ctx.set_gpr(31, 0x089AD4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD4C8u) goto L_089AD4C8;
    return;
L_089AD4C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10784));
    ctx.set_gpr(31, 0x089AD4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD4E0u) goto L_089AD4E0;
    return;
L_089AD4E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(107));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10688));
    ctx.set_gpr(31, 0x089AD4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD4F8u) goto L_089AD4F8;
    return;
L_089AD4F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD50C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD518:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089AD538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AD538u) goto L_089AD538;
    return;
L_089AD538:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD548:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD574:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD5CC;
      }
      goto L_089AD58C;
    }
L_089AD58C:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & 32768u);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[5] & 31u);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] & 992u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[5] & 31744u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 10u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_089AD5CC;
L_089AD5CC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD58C;
      }
      goto L_089AD5D8;
    }
L_089AD5D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD5E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(31, 0x089AD604u);
    // nop
    goto L_089AD574;
L_089AD604:
    ctx.set_gpr(31, 0x089AD60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x089AD60Cu) goto L_089AD60C;
    return;
L_089AD60C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AD628u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AD628u) goto L_089AD628;
    return;
L_089AD628:
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
L_089AD640:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD69C;
      }
      goto L_089AD658;
    }
L_089AD658:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & 32768u);
    ctx.set_gpr(4, (ctx.gpr[3] >> 15u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[5] & 31u);
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] & 992u);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[5] & 31744u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 9u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_089AD69C;
L_089AD69C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD658;
      }
      goto L_089AD6A8;
    }
L_089AD6A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD6B0:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(14, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD910;
      }
      goto L_089AD6CC;
    }
L_089AD6CC:
    ctx.set_gpr(13, ctx.gpr[15] + 0u);
    ctx.set_gpr(12, ctx.gpr[24] + 0u);
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD8F0;
      }
      goto L_089AD6E0;
    }
L_089AD6E0:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] & 32768u);
    ctx.set_gpr(8, (ctx.gpr[3] >> 15u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[6] & 31744u);
    ctx.set_gpr(7, (ctx.gpr[3] >> 10u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[6] & 992u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 5u) & 0x0000FFFFu);
    ctx.set_gpr(6, ctx.gpr[6] & 31u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AD718;
      }
      goto L_089AD708;
    }
L_089AD708:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD730;
      }
      goto L_089AD718;
    }
L_089AD718:
    ctx.set_gpr(25, ctx.gpr[6] >> 1u);
    ctx.set_gpr(6, ctx.gpr[6] & 1u);
    ctx.set_gpr(25, ctx.gpr[25] | ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[25]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089AD730;
L_089AD730:
    ctx.set_gpr(6, 16888u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(6, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(6, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD770;
      }
      goto L_089AD760;
    }
L_089AD760:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD784;
      }
      goto L_089AD770;
    }
L_089AD770:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(25, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[25] | ctx.gpr[6]);
    goto L_089AD784;
L_089AD784:
    ctx.set_gpr(6, ctx.gpr[6] & 65535u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AD7A0;
      }
      goto L_089AD790;
    }
L_089AD790:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD7B8;
      }
      goto L_089AD7A0;
    }
L_089AD7A0:
    ctx.set_gpr(25, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(25, ctx.gpr[25] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[25]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089AD7B8;
L_089AD7B8:
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD7F8;
      }
      goto L_089AD7E8;
    }
L_089AD7E8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD80C;
      }
      goto L_089AD7F8;
    }
L_089AD7F8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(25, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[25] | ctx.gpr[3]);
    goto L_089AD80C;
L_089AD80C:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_089AD828;
      }
      goto L_089AD818;
    }
L_089AD818:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD840;
      }
      goto L_089AD828;
    }
L_089AD828:
    ctx.set_gpr(25, ctx.gpr[7] >> 1u);
    ctx.set_gpr(7, ctx.gpr[7] & 1u);
    ctx.set_gpr(25, ctx.gpr[25] | ctx.gpr[7]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[25]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089AD840;
L_089AD840:
    ctx.set_gpr(7, 16888u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(7, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(7, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AD880;
      }
      goto L_089AD870;
    }
L_089AD870:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD894;
      }
      goto L_089AD880;
    }
L_089AD880:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(25, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[25] | ctx.gpr[7]);
    goto L_089AD894;
L_089AD894:
    ctx.set_gpr(25, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, ctx.gpr[8] & 65535u);
    ctx.set_gpr(7, ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD8B4;
      }
      goto L_089AD8A8;
    }
L_089AD8A8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AD8B8;
      }
      goto L_089AD8B4;
    }
L_089AD8B4:
    ctx.set_gpr(7, 0u + 0u);
    goto L_089AD8B8;
L_089AD8B8:
    ctx.set_gpr(7, ctx.gpr[7] & 65535u);
    ctx.set_gpr(8, ctx.gpr[7] << 24u);
    ctx.set_gpr(7, ctx.gpr[25] & 65535u);
    ctx.set_gpr(7, ctx.gpr[7] << 16u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 8u);
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[6] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    goto L_089AD8F0;
L_089AD8F0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD6E0;
      }
      goto L_089AD8FC;
    }
L_089AD8FC:
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(24, ctx.gpr[24] + ctx.gpr[3]);
    goto L_089AD910;
L_089AD910:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AD6CC;
      }
      goto L_089AD91C;
    }
L_089AD91C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD924:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9380));
    ctx.set_gpr(31, 0x089AD948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AD948u) goto L_089AD948;
    return;
L_089AD948:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9696));
    ctx.set_gpr(31, 0x089AD960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD960u) goto L_089AD960;
    return;
L_089AD960:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(107));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9588));
    ctx.set_gpr(31, 0x089AD978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD978u) goto L_089AD978;
    return;
L_089AD978:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(105));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9476));
    ctx.set_gpr(31, 0x089AD990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD990u) goto L_089AD990;
    return;
L_089AD990:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9476));
    ctx.set_gpr(31, 0x089AD9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AD9A8u) goto L_089AD9A8;
    return;
L_089AD9A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD9BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD9C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089AD9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AD9E8u) goto L_089AD9E8;
    return;
L_089AD9E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AD9F8:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADA20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADA78;
      }
      goto L_089ADA38;
    }
L_089ADA38:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & 61440u);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[5] & 15u);
    ctx.set_gpr(3, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] & 240u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[5] & 3840u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_089ADA78;
L_089ADA78:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADA38;
      }
      goto L_089ADA84;
    }
L_089ADA84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADA8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADAE8;
      }
      goto L_089ADAA4;
    }
L_089ADAA4:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & 61440u);
    ctx.set_gpr(4, (ctx.gpr[3] >> 12u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[5] & 15u);
    ctx.set_gpr(3, ctx.gpr[3] << 12u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] & 240u);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[5] & 3840u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 4u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_089ADAE8;
L_089ADAE8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADAA4;
      }
      goto L_089ADAF4;
    }
L_089ADAF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADAFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(31, 0x089ADB20u);
    // nop
    goto L_089ADA20;
L_089ADB20:
    ctx.set_gpr(31, 0x089ADB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x089ADB28u) goto L_089ADB28;
    return;
L_089ADB28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089ADB44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADB44u) goto L_089ADB44;
    return;
L_089ADB44:
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
L_089ADB5C:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADC34;
      }
      goto L_089ADB78;
    }
L_089ADB78:
    ctx.set_gpr(7, ctx.gpr[6] << 2u);
    ctx.set_gpr(7, ctx.gpr[11] + ctx.gpr[7]);
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(7, ctx.gpr[6] << 1u);
    ctx.set_gpr(7, ctx.gpr[12] + ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADC14;
      }
      goto L_089ADB9C;
    }
L_089ADB9C:
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[15] & 61440u);
    ctx.set_gpr(14, (ctx.gpr[13] >> 12u) & 0x0000FFFFu);
    ctx.set_gpr(13, ctx.gpr[15] & 3840u);
    ctx.set_gpr(25, (ctx.gpr[13] >> 8u) & 0x0000FFFFu);
    ctx.set_gpr(13, ctx.gpr[15] & 240u);
    ctx.set_gpr(24, (ctx.gpr[13] >> 4u) & 0x0000FFFFu);
    ctx.set_gpr(15, ctx.gpr[15] & 15u);
    ctx.set_gpr(13, ctx.gpr[14] << 4u);
    ctx.set_gpr(13, ctx.gpr[14] | ctx.gpr[13]);
    ctx.set_gpr(14, ctx.gpr[13] & 65535u);
    ctx.set_gpr(13, ctx.gpr[25] << 4u);
    ctx.set_gpr(13, ctx.gpr[25] | ctx.gpr[13]);
    ctx.set_gpr(25, ctx.gpr[13] & 65535u);
    ctx.set_gpr(13, ctx.gpr[24] << 4u);
    ctx.set_gpr(13, ctx.gpr[24] | ctx.gpr[13]);
    ctx.set_gpr(24, ctx.gpr[13] & 65535u);
    ctx.set_gpr(13, ctx.gpr[15] << 4u);
    ctx.set_gpr(13, ctx.gpr[15] | ctx.gpr[13]);
    ctx.set_gpr(15, ctx.gpr[13] & 65535u);
    ctx.set_gpr(14, ctx.gpr[14] << 24u);
    ctx.set_gpr(13, ctx.gpr[25] << 16u);
    ctx.set_gpr(14, ctx.gpr[14] | ctx.gpr[13]);
    ctx.set_gpr(13, ctx.gpr[24] << 8u);
    ctx.set_gpr(13, ctx.gpr[13] | ctx.gpr[14]);
    ctx.set_gpr(13, ctx.gpr[15] | ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2));
    goto L_089ADC14;
L_089ADC14:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADB9C;
      }
      goto L_089ADC20;
    }
L_089ADC20:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[7]);
    goto L_089ADC34;
L_089ADC34:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADB78;
      }
      goto L_089ADC40;
    }
L_089ADC40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADC48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8696));
    ctx.set_gpr(31, 0x089ADC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089ADC6Cu) goto L_089ADC6C;
    return;
L_089ADC6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8888));
    ctx.set_gpr(31, 0x089ADC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ADC84u) goto L_089ADC84;
    return;
L_089ADC84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(105));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8792));
    ctx.set_gpr(31, 0x089ADC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ADC9Cu) goto L_089ADC9C;
    return;
L_089ADC9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8792));
    ctx.set_gpr(31, 0x089ADCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ADCB4u) goto L_089ADCB4;
    return;
L_089ADCB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(103));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8792));
    ctx.set_gpr(31, 0x089ADCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089ADCCCu) goto L_089ADCCC;
    return;
L_089ADCCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADCE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADCEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x089ADD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089ADD0Cu) goto L_089ADD0C;
    return;
L_089ADD0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADD1C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADD48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADD94;
      }
      goto L_089ADD60;
    }
L_089ADD60:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & 31u);
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[5] & 2016u);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] & 63488u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 11u) & 0x0000FFFFu);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_089ADD94;
L_089ADD94:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADD60;
      }
      goto L_089ADDA0;
    }
L_089ADDA0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ADDA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(31, 0x089ADDCCu);
    // nop
    goto L_089ADD48;
L_089ADDCC:
    ctx.set_gpr(31, 0x089ADDD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x089ADDD4u) goto L_089ADDD4;
    return;
L_089ADDD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089ADDF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089ADDF0u) goto L_089ADDF0;
    return;
L_089ADDF0:
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
L_089ADE08:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE02C;
      }
      goto L_089ADE24;
    }
L_089ADE24:
    ctx.set_gpr(6, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[14] + ctx.gpr[3]);
    ctx.set_gpr(12, ctx.gpr[3] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[15] + ctx.gpr[6]);
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE00C;
      }
      goto L_089ADE48;
    }
L_089ADE48:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] & 63488u);
    ctx.set_gpr(25, (ctx.gpr[3] >> 11u) & 0x000000FFu);
    ctx.set_gpr(3, ctx.gpr[6] & 2016u);
    ctx.set_gpr(7, (ctx.gpr[3] >> 5u) & 0x000000FFu);
    ctx.set_gpr(6, ctx.gpr[6] & 31u);
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) < 0;
    // nop
      if (branch_taken) {
          goto L_089ADE80;
      }
      goto L_089ADE70;
    }
L_089ADE70:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[25]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE98;
      }
      goto L_089ADE80;
    }
L_089ADE80:
    ctx.set_gpr(24, ctx.gpr[25] >> 1u);
    ctx.set_gpr(3, ctx.gpr[25] & 1u);
    ctx.set_gpr(24, ctx.gpr[24] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[24]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089ADE98;
L_089ADE98:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ADED0;
      }
      goto L_089ADEC0;
    }
L_089ADEC0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADEE4;
      }
      goto L_089ADED0;
    }
L_089ADED0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(24, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[24] | ctx.gpr[3]);
    goto L_089ADEE4;
L_089ADEE4:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(24, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[24]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_089ADF08;
      }
      goto L_089ADEF8;
    }
L_089ADEF8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADF20;
      }
      goto L_089ADF08;
    }
L_089ADF08:
    ctx.set_gpr(24, ctx.gpr[7] >> 1u);
    ctx.set_gpr(7, ctx.gpr[7] & 1u);
    ctx.set_gpr(24, ctx.gpr[24] | ctx.gpr[7]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[24]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089ADF20;
L_089ADF20:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(7, 17020u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(7, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ADF58;
      }
      goto L_089ADF48;
    }
L_089ADF48:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADF6C;
      }
      goto L_089ADF58;
    }
L_089ADF58:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(24, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[24] | ctx.gpr[7]);
    goto L_089ADF6C;
L_089ADF6C:
    ctx.set_gpr(24, ctx.gpr[7] & 255u);
    ctx.set_gpr(7, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089ADF90;
      }
      goto L_089ADF80;
    }
L_089ADF80:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADFA8;
      }
      goto L_089ADF90;
    }
L_089ADF90:
    ctx.set_gpr(7, ctx.gpr[6] >> 1u);
    ctx.set_gpr(6, ctx.gpr[6] & 1u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089ADFA8;
L_089ADFA8:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(6, 16888u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(6, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ADFE0;
      }
      goto L_089ADFD0;
    }
L_089ADFD0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ADFF4;
      }
      goto L_089ADFE0;
    }
L_089ADFE0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[7] | ctx.gpr[6]);
    goto L_089ADFF4;
L_089ADFF4:
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[24]));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-2));
    goto L_089AE00C;
L_089AE00C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE48;
      }
      goto L_089AE018;
    }
L_089AE018:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(14, ctx.gpr[14] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[3]);
    goto L_089AE02C;
L_089AE02C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ADE24;
      }
      goto L_089AE038;
    }
L_089AE038:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE040:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7924));
    ctx.set_gpr(31, 0x089AE064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AE064u) goto L_089AE064;
    return;
L_089AE064:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(105));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7308));
    ctx.set_gpr(31, 0x089AE07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AE07Cu) goto L_089AE07C;
    return;
L_089AE07C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7308));
    ctx.set_gpr(31, 0x089AE094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AE094u) goto L_089AE094;
    return;
L_089AE094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE0A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(41));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE0B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089AE0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE0D4u) goto L_089AE0D4;
    return;
L_089AE0D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE0E4:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE10C:
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
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE330;
      }
      goto L_089AE160;
    }
L_089AE160:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    ctx.set_gpr(17, ctx.gpr[21] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE310;
      }
      goto L_089AE174;
    }
L_089AE174:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089AE18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 213u, 0x089E4C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE18Cu) goto L_089AE18C;
    return;
L_089AE18C:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AE1C0;
      }
      goto L_089AE1B0;
    }
L_089AE1B0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE1D4;
      }
      goto L_089AE1C0;
    }
L_089AE1C0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089AE1D4;
L_089AE1D4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x089AE1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 213u, 0x089E4C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE1F0u) goto L_089AE1F0;
    return;
L_089AE1F0:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AE224;
      }
      goto L_089AE214;
    }
L_089AE214:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE238;
      }
      goto L_089AE224;
    }
L_089AE224:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089AE238;
L_089AE238:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089AE254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 213u, 0x089E4C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE254u) goto L_089AE254;
    return;
L_089AE254:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AE288;
      }
      goto L_089AE278;
    }
L_089AE278:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE29C;
      }
      goto L_089AE288;
    }
L_089AE288:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089AE29C;
L_089AE29C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089AE2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 213u, 0x089E4C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE2B8u) goto L_089AE2B8;
    return;
L_089AE2B8:
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AE2EC;
      }
      goto L_089AE2DC;
    }
L_089AE2DC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE300;
      }
      goto L_089AE2EC;
    }
L_089AE2EC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089AE300;
L_089AE300:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_089AE310;
L_089AE310:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE174;
      }
      goto L_089AE31C;
    }
L_089AE31C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[3]);
    goto L_089AE330;
L_089AE330:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE160;
      }
      goto L_089AE340;
    }
L_089AE340:
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
L_089AE374:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089AE38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 328u, 0x088D9B14u>(ctx, &aot_mem) && ctx.pc == 0x089AE38Cu) goto L_089AE38C;
    return;
L_089AE38C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AE3B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE3B0u) goto L_089AE3B0;
    return;
L_089AE3B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE3C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7076));
    ctx.set_gpr(31, 0x089AE3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AE3E0u) goto L_089AE3E0;
    return;
L_089AE3E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE3F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE3FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089AE418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE418u) goto L_089AE418;
    return;
L_089AE418:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE428:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE450:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE45C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089AE480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 372u, 0x089A5978u>(ctx, &aot_mem) && ctx.pc == 0x089AE480u) goto L_089AE480;
    return;
L_089AE480:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089AE490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 241u, 0x089A1064u>(ctx, &aot_mem) && ctx.pc == 0x089AE490u) goto L_089AE490;
    return;
L_089AE490:
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
L_089AE4A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | 1u);
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6824));
    ctx.set_gpr(31, 0x089AE4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AE4C8u) goto L_089AE4C8;
    return;
L_089AE4C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE4D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE4E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AE508;
      }
      goto L_089AE500;
    }
L_089AE500:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_089AE508;
L_089AE508:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089AE514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE514u) goto L_089AE514;
    return;
L_089AE514:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE524:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE54C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE558:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089AE57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 372u, 0x089A5978u>(ctx, &aot_mem) && ctx.pc == 0x089AE57Cu) goto L_089AE57C;
    return;
L_089AE57C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089AE58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 241u, 0x089A1064u>(ctx, &aot_mem) && ctx.pc == 0x089AE58Cu) goto L_089AE58C;
    return;
L_089AE58C:
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
L_089AE5A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6596));
    ctx.set_gpr(31, 0x089AE5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AE5C0u) goto L_089AE5C0;
    return;
L_089AE5C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE5D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE5DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089AE5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE5F8u) goto L_089AE5F8;
    return;
L_089AE5F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE608:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE630:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE63C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089AE660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 372u, 0x089A5978u>(ctx, &aot_mem) && ctx.pc == 0x089AE660u) goto L_089AE660;
    return;
L_089AE660:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089AE670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 241u, 0x089A1064u>(ctx, &aot_mem) && ctx.pc == 0x089AE670u) goto L_089AE670;
    return;
L_089AE670:
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
L_089AE688:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(31, 0x089AE6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 513u, 0x089A6434u>(ctx, &aot_mem) && ctx.pc == 0x089AE6A4u) goto L_089AE6A4;
    return;
L_089AE6A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE6B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE6C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AE6E4;
      }
      goto L_089AE6DC;
    }
L_089AE6DC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_089AE6E4;
L_089AE6E4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089AE6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE6F0u) goto L_089AE6F0;
    return;
L_089AE6F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE700:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE728:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE734:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089AE758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 372u, 0x089A5978u>(ctx, &aot_mem) && ctx.pc == 0x089AE758u) goto L_089AE758;
    return;
L_089AE758:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089AE768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 241u, 0x089A1064u>(ctx, &aot_mem) && ctx.pc == 0x089AE768u) goto L_089AE768;
    return;
L_089AE768:
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
L_089AE780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(103));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6112));
    ctx.set_gpr(31, 0x089AE79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 594u, 0x089A6A24u>(ctx, &aot_mem) && ctx.pc == 0x089AE79Cu) goto L_089AE79C;
    return;
L_089AE79C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE7AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(21));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE7B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089AE7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 418u, 0x089A5D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE7D8u) goto L_089AE7D8;
    return;
L_089AE7D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE7E8:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE814:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AE820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE8D4;
      }
      goto L_089AE84C;
    }
L_089AE84C:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[6] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE890;
      }
      goto L_089AE85C;
    }
L_089AE85C:
    ctx.set_gpr(4, ctx.gpr[6] & 31744u);
    ctx.set_gpr(5, (ctx.gpr[4] >> 10u) & 0x0000FFFFu);
    ctx.set_gpr(4, ctx.gpr[6] & 992u);
    ctx.set_gpr(4, (ctx.gpr[4] >> 5u) & 0x0000FFFFu);
    ctx.set_gpr(4, ctx.gpr[4] << 5u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[6] & 31u);
    ctx.set_gpr(4, ctx.gpr[4] << 10u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] | 32768u);
    ctx.set_gpr(4, ctx.gpr[4] & 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE8C8;
      }
      goto L_089AE890;
    }
L_089AE890:
    ctx.set_gpr(4, ctx.gpr[6] & 3840u);
    ctx.set_gpr(5, (ctx.gpr[4] >> 8u) & 0x0000FFFFu);
    ctx.set_gpr(4, ctx.gpr[6] & 240u);
    ctx.set_gpr(4, (ctx.gpr[4] >> 4u) & 0x0000FFFFu);
    ctx.set_gpr(4, ctx.gpr[4] << 4u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[6] & 15u);
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[6] & 28672u);
    ctx.set_gpr(4, (ctx.gpr[4] >> 12u) & 0x0000FFFFu);
    ctx.set_gpr(4, ctx.gpr[4] << 12u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] & 65535u);
    goto L_089AE8C8;
L_089AE8C8:
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    goto L_089AE8D4;
L_089AE8D4:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AE84C;
      }
      goto L_089AE8E0;
    }
L_089AE8E0:
    ctx.set_gpr(31, 0x089AE8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x089AE8E8u) goto L_089AE8E8;
    return;
L_089AE8E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AE904u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AE904u) goto L_089AE904;
    return;
L_089AE904:
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
L_089AE91C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x089AE934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089AE934u) goto L_089AE934;
    return;
L_089AE934:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(31, 0x089AE94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 549u, 0x0895655Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE94Cu) goto L_089AE94C;
    return;
L_089AE94C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE964;
      }
      goto L_089AE958;
    }
L_089AE958:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089AE964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AE964u) goto L_089AE964;
    return;
L_089AE964:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29940));
    ctx.set_gpr(31, 0x089AE978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 890u, 0x08943EA0u>(ctx, &aot_mem) && ctx.pc == 0x089AE978u) goto L_089AE978;
    return;
L_089AE978:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE9A8;
      }
      goto L_089AE984;
    }
L_089AE984:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29332)));
    ctx.set_gpr(31, 0x089AE998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089AE998u) goto L_089AE998;
    return;
L_089AE998:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE9A8;
      }
      goto L_089AE9A0;
    }
L_089AE9A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE9AC;
      }
      goto L_089AE9A8;
    }
L_089AE9A8:
    ctx.set_gpr(17, 0u + 0u);
    goto L_089AE9AC;
L_089AE9AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE9C4;
      }
      goto L_089AE9B8;
    }
L_089AE9B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089AE9C4;
L_089AE9C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AE9D8;
      }
      goto L_089AE9D0;
    }
L_089AE9D0:
    ctx.set_gpr(31, 0x089AE9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AE9D8u) goto L_089AE9D8;
    return;
L_089AE9D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-14228));
    ctx.set_gpr(31, 0x089AE9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x089AE9ECu) goto L_089AE9EC;
    return;
L_089AE9EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089AE9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 247u, 0x08910FFCu>(ctx, &aot_mem) && ctx.pc == 0x089AE9FCu) goto L_089AE9FC;
    return;
L_089AE9FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEA10;
      }
      goto L_089AEA08;
    }
L_089AEA08:
    ctx.set_gpr(31, 0x089AEA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AEA10u) goto L_089AEA10;
    return;
L_089AEA10:
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
L_089AEA28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x089AEA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089AEA44u) goto L_089AEA44;
    return;
L_089AEA44:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(31, 0x089AEA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 549u, 0x0895655Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEA5Cu) goto L_089AEA5C;
    return;
L_089AEA5C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEA74;
      }
      goto L_089AEA68;
    }
L_089AEA68:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089AEA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AEA74u) goto L_089AEA74;
    return;
L_089AEA74:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32244)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089AEA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 443u, 0x08949ECCu>(ctx, &aot_mem) && ctx.pc == 0x089AEA90u) goto L_089AEA90;
    return;
L_089AEA90:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEAD4;
      }
      goto L_089AEA9C;
    }
L_089AEA9C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089AEAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 240u, 0x08910F60u>(ctx, &aot_mem) && ctx.pc == 0x089AEAB8u) goto L_089AEAB8;
    return;
L_089AEAB8:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32244)));
    ctx.set_gpr(31, 0x089AEAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 443u, 0x08949ECCu>(ctx, &aot_mem) && ctx.pc == 0x089AEAD0u) goto L_089AEAD0;
    return;
L_089AEAD0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_089AEAD4;
L_089AEAD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AEA9C;
      }
      goto L_089AEAE0;
    }
L_089AEAE0:
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
L_089AEAFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEB6C;
      }
      goto L_089AEB1C;
    }
L_089AEB1C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEB6C;
      }
      goto L_089AEB24;
    }
L_089AEB24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEB6C;
      }
      goto L_089AEB38;
    }
L_089AEB38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089AEB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089AEB44u) goto L_089AEB44;
    return;
L_089AEB44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AEB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 654u, 0x0895AC28u>(ctx, &aot_mem) && ctx.pc == 0x089AEB54u) goto L_089AEB54;
    return;
L_089AEB54:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-14232)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089AEB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 671u, 0x0895AD18u>(ctx, &aot_mem) && ctx.pc == 0x089AEB6Cu) goto L_089AEB6C;
    return;
L_089AEB6C:
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
L_089AEB84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AEBD0;
      }
      goto L_089AEBC4;
    }
L_089AEBC4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AECB4;
      }
      goto L_089AEBD0;
    }
L_089AEBD0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEBE8;
      }
      goto L_089AEBDC;
    }
L_089AEBDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089AEBE8;
L_089AEBE8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEC18;
      }
      goto L_089AEBF4;
    }
L_089AEBF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32120)));
    ctx.set_gpr(31, 0x089AEC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEC08u) goto L_089AEC08;
    return;
L_089AEC08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEC18;
      }
      goto L_089AEC10;
    }
L_089AEC10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEC1C;
      }
      goto L_089AEC18;
    }
L_089AEC18:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089AEC1C;
L_089AEC1C:
    ctx.set_gpr(31, 0x089AEC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x089AEC24u) goto L_089AEC24;
    return;
L_089AEC24:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEC9C;
      }
      goto L_089AEC30;
    }
L_089AEC30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089AEC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x089AEC48u) goto L_089AEC48;
    return;
L_089AEC48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AEC9C;
      }
      goto L_089AEC54;
    }
L_089AEC54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089AEC64u);
    // nop
    goto L_089AEAFC;
L_089AEC64:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089AEC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x089AEC80u) goto L_089AEC80;
    return;
L_089AEC80:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AEC9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEC9Cu) goto L_089AEC9C;
    return;
L_089AEC9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AECB0;
      }
      goto L_089AECA8;
    }
L_089AECA8:
    ctx.set_gpr(31, 0x089AECB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AECB0u) goto L_089AECB0;
    return;
L_089AECB0:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_089AECB4;
L_089AECB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AECDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-14232)));
    ctx.set_gpr(31, 0x089AED24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089AED24u) goto L_089AED24;
    return;
L_089AED24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-14232)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AED3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x089AED3Cu) goto L_089AED3C;
    return;
L_089AED3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AEF38;
      }
      goto L_089AED44;
    }
L_089AED44:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-14232)));
    ctx.set_gpr(31, 0x089AED54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089AED54u) goto L_089AED54;
    return;
L_089AED54:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEDB0;
      }
      goto L_089AED6C;
    }
L_089AED6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089AED98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089AED98u) goto L_089AED98;
    return;
L_089AED98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AEDAC;
      }
      goto L_089AEDA0;
    }
L_089AEDA0:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEF3C;
      }
      goto L_089AEDAC;
    }
L_089AEDAC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089AEDB0;
L_089AEDB0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AED6C;
      }
      goto L_089AEDBC;
    }
L_089AEDBC:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(31, 0x089AEDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x089AEDC8u) goto L_089AEDC8;
    return;
L_089AEDC8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEE9C;
      }
      goto L_089AEDD4;
    }
L_089AEDD4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEE04;
      }
      goto L_089AEDDC;
    }
L_089AEDDC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27416)));
    ctx.set_gpr(31, 0x089AEDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEDF0u) goto L_089AEDF0;
    return;
L_089AEDF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEE04;
      }
      goto L_089AEDF8;
    }
L_089AEDF8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEE08;
      }
      goto L_089AEE04;
    }
L_089AEE04:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089AEE08;
L_089AEE08:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089AEE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089AEE18u) goto L_089AEE18;
    return;
L_089AEE18:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32612));
    ctx.set_gpr(31, 0x089AEE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089AEE28u) goto L_089AEE28;
    return;
L_089AEE28:
    ctx.set_gpr(20, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089AEE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089AEE38u) goto L_089AEE38;
    return;
L_089AEE38:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AEE54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEE54u) goto L_089AEE54;
    return;
L_089AEE54:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEE88;
      }
      goto L_089AEE60;
    }
L_089AEE60:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089AEE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEE70u) goto L_089AEE70;
    return;
L_089AEE70:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32612));
    ctx.set_gpr(31, 0x089AEE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x089AEE80u) goto L_089AEE80;
    return;
L_089AEE80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEE8C;
      }
      goto L_089AEE88;
    }
L_089AEE88:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089AEE8C;
L_089AEE8C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089AEE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x089AEE9Cu) goto L_089AEE9C;
    return;
L_089AEE9C:
    ctx.set_gpr(31, 0x089AEEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 226u, 0x0893CE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEEA4u) goto L_089AEEA4;
    return;
L_089AEEA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089AEEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089AEEB0u) goto L_089AEEB0;
    return;
L_089AEEB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AEEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x089AEEBCu) goto L_089AEEBC;
    return;
L_089AEEBC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEECC;
      }
      goto L_089AEEC8;
    }
L_089AEEC8:
    ctx.set_gpr(17, ctx.gpr[20] + 0u);
    goto L_089AEECC;
L_089AEECC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AEEE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEEE4u) goto L_089AEEE4;
    return;
L_089AEEE4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEF04;
      }
      goto L_089AEEF0;
    }
L_089AEEF0:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089AEF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089AEF04u) goto L_089AEF04;
    return;
L_089AEF04:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEF24;
      }
      goto L_089AEF0C;
    }
L_089AEF0C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AEF24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEF24u) goto L_089AEF24;
    return;
L_089AEF24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AEF38;
      }
      goto L_089AEF30;
    }
L_089AEF30:
    ctx.set_gpr(31, 0x089AEF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AEF38u) goto L_089AEF38;
    return;
L_089AEF38:
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
    goto L_089AEF3C;
L_089AEF3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_089AEF6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x089AEF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 291u, 0x0894944Cu>(ctx, &aot_mem) && ctx.pc == 0x089AEF88u) goto L_089AEF88;
    return;
L_089AEF88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089AEF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x089AEF98u) goto L_089AEF98;
    return;
L_089AEF98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AEFAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x089AEFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x089AEFD4u) goto L_089AEFD4;
    return;
L_089AEFD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AEFF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AEFF8u) goto L_089AEFF8;
    return;
L_089AEFF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF014;
      }
      goto L_089AF000;
    }
L_089AF000:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089AF010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089AF010u) goto L_089AF010;
    return;
L_089AF010:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089AF014;
L_089AF014:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF028;
      }
      goto L_089AF020;
    }
L_089AF020:
    ctx.set_gpr(31, 0x089AF028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AF028u) goto L_089AF028;
    return;
L_089AF028:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089AF044:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF074;
      }
      goto L_089AF050;
    }
L_089AF050:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[3] & 15u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[7] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_089AF074;
L_089AF074:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF050;
      }
      goto L_089AF084;
    }
L_089AF084:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF0A0;
      }
      goto L_089AF090;
    }
L_089AF090:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089AF0A0;
L_089AF0A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF0A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF0C0;
      }
      goto L_089AF0B8;
    }
L_089AF0B8:
    ctx.set_gpr(31, 0x089AF0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF0C0u) goto L_089AF0C0;
    return;
L_089AF0C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF0D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF0E8;
      }
      goto L_089AF0E0;
    }
L_089AF0E0:
    ctx.set_gpr(31, 0x089AF0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF0E8u) goto L_089AF0E8;
    return;
L_089AF0E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF0F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF110;
      }
      goto L_089AF108;
    }
L_089AF108:
    ctx.set_gpr(31, 0x089AF110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF110u) goto L_089AF110;
    return;
L_089AF110:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF120:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AF150;
      }
      goto L_089AF130;
    }
L_089AF130:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089AF144;
      }
      goto L_089AF13C;
    }
L_089AF13C:
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_089AF144;
L_089AF144:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AF150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF150u) goto L_089AF150;
    return;
L_089AF150:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF160:
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF1C8;
      }
      goto L_089AF188;
    }
L_089AF188:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, (ctx.gpr[3] >> 4u) & 0x0000000Fu);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF1C8;
      }
      goto L_089AF1A8;
    }
L_089AF1A8:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, (ctx.gpr[7] >> 4u) & 0x0000000Fu);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[7] & 15u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_089AF1C8;
L_089AF1C8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF1A8;
      }
      goto L_089AF1D4;
    }
L_089AF1D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF2E8;
      }
      goto L_089AF1F8;
    }
L_089AF1F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF2DC;
      }
      goto L_089AF204;
    }
L_089AF204:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF2D0;
      }
      goto L_089AF210;
    }
L_089AF210:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF2C4;
      }
      goto L_089AF21C;
    }
L_089AF21C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF2B8;
      }
      goto L_089AF228;
    }
L_089AF228:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF2B8;
      }
      goto L_089AF238;
    }
L_089AF238:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF2B8;
      }
      goto L_089AF244;
    }
L_089AF244:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF2AC;
      }
      goto L_089AF250;
    }
L_089AF250:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF2AC;
      }
      goto L_089AF25C;
    }
L_089AF25C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF2A0;
      }
      goto L_089AF268;
    }
L_089AF268:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF294;
      }
      goto L_089AF274;
    }
L_089AF274:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF288;
      }
      goto L_089AF280;
    }
L_089AF280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF2F4;
      }
      goto L_089AF288;
    }
L_089AF288:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF30C;
      }
      goto L_089AF294;
    }
L_089AF294:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF30C;
      }
      goto L_089AF2A0;
    }
L_089AF2A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF30C;
      }
      goto L_089AF2AC;
    }
L_089AF2AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF30C;
      }
      goto L_089AF2B8;
    }
L_089AF2B8:
    ctx.set_gpr(2, 1u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF30C;
      }
      goto L_089AF2C4;
    }
L_089AF2C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF30C;
      }
      goto L_089AF2D0;
    }
L_089AF2D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF30C;
      }
      goto L_089AF2DC;
    }
L_089AF2DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF30C;
      }
      goto L_089AF2E8;
    }
L_089AF2E8:
    ctx.set_gpr(2, 1u << 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF30C;
      }
      goto L_089AF2F4;
    }
L_089AF2F4:
    ctx.set_gpr(31, 0x089AF2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089AF2FCu) goto L_089AF2FC;
    return;
L_089AF2FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF308;
      }
      goto L_089AF304;
    }
L_089AF304:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    goto L_089AF308;
L_089AF308:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_089AF30C;
L_089AF30C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF320:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF328:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF330:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF338:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089AF350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089AF350u) goto L_089AF350;
    return;
L_089AF350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF37C;
      }
      goto L_089AF358;
    }
L_089AF358:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AF37C;
      }
      goto L_089AF370;
    }
L_089AF370:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF388;
      }
      goto L_089AF37C;
    }
L_089AF37C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089AF358;
      }
      goto L_089AF384;
    }
L_089AF384:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089AF388;
L_089AF388:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF39C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF3C8;
      }
      goto L_089AF3BC;
    }
L_089AF3BC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF45C;
      }
      goto L_089AF3C8;
    }
L_089AF3C8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF3EC;
      }
      goto L_089AF3DC;
    }
L_089AF3DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF40C;
      }
      goto L_089AF3EC;
    }
L_089AF3EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF404;
      }
      goto L_089AF3F8;
    }
L_089AF3F8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF40C;
      }
      goto L_089AF404;
    }
L_089AF404:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] << 2u);
    goto L_089AF40C;
L_089AF40C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF43C;
      }
      goto L_089AF418;
    }
L_089AF418:
    ctx.set_gpr(31, 0x089AF420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089AF420u) goto L_089AF420;
    return;
L_089AF420:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089AF42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089AF42Cu) goto L_089AF42C;
    return;
L_089AF42C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AF43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089AF43Cu) goto L_089AF43C;
    return;
L_089AF43C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AF454u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF454u) goto L_089AF454;
    return;
L_089AF454:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_089AF45C;
L_089AF45C:
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
L_089AF474:
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
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(30, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF4CC;
      }
      goto L_089AF4C4;
    }
L_089AF4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF4D0;
      }
      goto L_089AF4CC;
    }
L_089AF4CC:
    ctx.set_gpr(16, ctx.gpr[22] + 0u);
    goto L_089AF4D0;
L_089AF4D0:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AF4F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF4F0u) goto L_089AF4F0;
    return;
L_089AF4F0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF504;
      }
      goto L_089AF4F8;
    }
L_089AF4F8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF520;
      }
      goto L_089AF504;
    }
L_089AF504:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF51C;
      }
      goto L_089AF510;
    }
L_089AF510:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF520;
      }
      goto L_089AF51C;
    }
L_089AF51C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    goto L_089AF520;
L_089AF520:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[30] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AF54Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF54Cu) goto L_089AF54C;
    return;
L_089AF54C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF610;
      }
      goto L_089AF558;
    }
L_089AF558:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF57C;
      }
      goto L_089AF560;
    }
L_089AF560:
    ctx.set_gpr(6, ctx.gpr[16] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089AF574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AF574u) goto L_089AF574;
    return;
L_089AF574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF5FC;
      }
      goto L_089AF57C;
    }
L_089AF57C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF5C4;
      }
      goto L_089AF588;
    }
L_089AF588:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF5B0;
      }
      goto L_089AF598;
    }
L_089AF598:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089AF5B0;
L_089AF5B0:
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF598;
      }
      goto L_089AF5BC;
    }
L_089AF5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF5FC;
      }
      goto L_089AF5C4;
    }
L_089AF5C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF5F0;
      }
      goto L_089AF5D4;
    }
L_089AF5D4:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089AF5F0;
L_089AF5F0:
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF5D4;
      }
      goto L_089AF5FC;
    }
L_089AF5FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089AF608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089AF608u) goto L_089AF608;
    return;
L_089AF608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF780;
      }
      goto L_089AF610;
    }
L_089AF610:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF6CC;
      }
      goto L_089AF618;
    }
L_089AF618:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF640;
      }
      goto L_089AF624;
    }
L_089AF624:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089AF638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AF638u) goto L_089AF638;
    return;
L_089AF638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF6B8;
      }
      goto L_089AF640;
    }
L_089AF640:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF684;
      }
      goto L_089AF648;
    }
L_089AF648:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF670;
      }
      goto L_089AF658;
    }
L_089AF658:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089AF670;
L_089AF670:
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF658;
      }
      goto L_089AF67C;
    }
L_089AF67C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF6B8;
      }
      goto L_089AF684;
    }
L_089AF684:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF6AC;
      }
      goto L_089AF694;
    }
L_089AF694:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089AF6AC;
L_089AF6AC:
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF694;
      }
      goto L_089AF6B8;
    }
L_089AF6B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089AF6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089AF6C4u) goto L_089AF6C4;
    return;
L_089AF6C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF780;
      }
      goto L_089AF6CC;
    }
L_089AF6CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF6F4;
      }
      goto L_089AF6D8;
    }
L_089AF6D8:
    ctx.set_gpr(6, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089AF6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089AF6ECu) goto L_089AF6EC;
    return;
L_089AF6EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF774;
      }
      goto L_089AF6F4;
    }
L_089AF6F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF73C;
      }
      goto L_089AF700;
    }
L_089AF700:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF728;
      }
      goto L_089AF710;
    }
L_089AF710:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089AF728;
L_089AF728:
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF710;
      }
      goto L_089AF734;
    }
L_089AF734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF774;
      }
      goto L_089AF73C;
    }
L_089AF73C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF768;
      }
      goto L_089AF74C;
    }
L_089AF74C:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089AF768;
L_089AF768:
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AF74C;
      }
      goto L_089AF774;
    }
L_089AF774:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089AF780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089AF780u) goto L_089AF780;
    return;
L_089AF780:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AF794u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF794u) goto L_089AF794;
    return;
L_089AF794:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF7CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF7D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF7E8:
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF800:
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AF880;
      }
      goto L_089AF830;
    }
L_089AF830:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF864;
      }
      goto L_089AF838;
    }
L_089AF838:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089AF84C;
      }
      goto L_089AF844;
    }
L_089AF844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF894;
      }
      goto L_089AF84C;
    }
L_089AF84C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AF85Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF85Cu) goto L_089AF85C;
    return;
L_089AF85C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF894;
      }
      goto L_089AF864;
    }
L_089AF864:
    ctx.set_gpr(6, ctx.gpr[6] & 65535u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AF878u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF878u) goto L_089AF878;
    return;
L_089AF878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF894;
      }
      goto L_089AF880;
    }
L_089AF880:
    ctx.set_gpr(6, ctx.gpr[6] & 255u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AF894u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF894u) goto L_089AF894;
    return;
L_089AF894:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF8A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF8B8:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF8D0:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF8E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF950;
      }
      goto L_089AF900;
    }
L_089AF900:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF934;
      }
      goto L_089AF908;
    }
L_089AF908:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089AF91C;
      }
      goto L_089AF914;
    }
L_089AF914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF96C;
      }
      goto L_089AF91C;
    }
L_089AF91C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AF92Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF92Cu) goto L_089AF92C;
    return;
L_089AF92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF970;
      }
      goto L_089AF934;
    }
L_089AF934:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AF944u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF944u) goto L_089AF944;
    return;
L_089AF944:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF970;
      }
      goto L_089AF950;
    }
L_089AF950:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AF960u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AF960u) goto L_089AF960;
    return;
L_089AF960:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AF970;
      }
      goto L_089AF96C;
    }
L_089AF96C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089AF970;
L_089AF970:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF990:
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF9A4:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF9B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF9C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF9C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF9D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31656));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089AF9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 499u, 0x0899EC00u>(ctx, &aot_mem) && ctx.pc == 0x089AF9ECu) goto L_089AF9EC;
    return;
L_089AF9EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AF9FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31656));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089AFA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 506u, 0x0899EC50u>(ctx, &aot_mem) && ctx.pc == 0x089AFA1Cu) goto L_089AFA1C;
    return;
L_089AFA1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFA2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31308));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089AFA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 499u, 0x0899EC00u>(ctx, &aot_mem) && ctx.pc == 0x089AFA48u) goto L_089AFA48;
    return;
L_089AFA48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFA58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31308));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x089AFA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 506u, 0x0899EC50u>(ctx, &aot_mem) && ctx.pc == 0x089AFA78u) goto L_089AFA78;
    return;
L_089AFA78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFA88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30816));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089AFAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089AFAA4u) goto L_089AFAA4;
    return;
L_089AFAA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFAB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089AFB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089AFB00u) goto L_089AFB00;
    return;
L_089AFB00:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFB38;
      }
      goto L_089AFB10;
    }
L_089AFB10:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089AFB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFB1Cu) goto L_089AFB1C;
    return;
L_089AFB1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AFB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 242u, 0x08991420u>(ctx, &aot_mem) && ctx.pc == 0x089AFB28u) goto L_089AFB28;
    return;
L_089AFB28:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AFB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFB38u) goto L_089AFB38;
    return;
L_089AFB38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089AFB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 841u, 0x08947E44u>(ctx, &aot_mem) && ctx.pc == 0x089AFB4Cu) goto L_089AFB4C;
    return;
L_089AFB4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFB60;
      }
      goto L_089AFB58;
    }
L_089AFB58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(180));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_089AFB60;
L_089AFB60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFB88;
      }
      goto L_089AFB6C;
    }
L_089AFB6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089AFB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x089AFB84u) goto L_089AFB84;
    return;
L_089AFB84:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_089AFB88;
L_089AFB88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFEF0;
      }
      goto L_089AFB94;
    }
L_089AFB94:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFEF0;
      }
      goto L_089AFB9C;
    }
L_089AFB9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089AFBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFBB4u) goto L_089AFBB4;
    return;
L_089AFBB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AFBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 421u, 0x0898E544u>(ctx, &aot_mem) && ctx.pc == 0x089AFBC0u) goto L_089AFBC0;
    return;
L_089AFBC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AFBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089AFBD4u) goto L_089AFBD4;
    return;
L_089AFBD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFBE8;
      }
      goto L_089AFBE0;
    }
L_089AFBE0:
    ctx.set_gpr(31, 0x089AFBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AFBE8u) goto L_089AFBE8;
    return;
L_089AFBE8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089AFBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFBF4u) goto L_089AFBF4;
    return;
L_089AFBF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AFC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 421u, 0x0898E544u>(ctx, &aot_mem) && ctx.pc == 0x089AFC00u) goto L_089AFC00;
    return;
L_089AFC00:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AFC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089AFC14u) goto L_089AFC14;
    return;
L_089AFC14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC28;
      }
      goto L_089AFC20;
    }
L_089AFC20:
    ctx.set_gpr(31, 0x089AFC28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AFC28u) goto L_089AFC28;
    return;
L_089AFC28:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFCA4;
      }
      goto L_089AFC34;
    }
L_089AFC34:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30816)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC90;
      }
      goto L_089AFC44;
    }
L_089AFC44:
    ctx.set_gpr(31, 0x089AFC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x089AFC4Cu) goto L_089AFC4C;
    return;
L_089AFC4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089AFC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089AFC58u) goto L_089AFC58;
    return;
L_089AFC58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AFC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 368u, 0x08991FC4u>(ctx, &aot_mem) && ctx.pc == 0x089AFC64u) goto L_089AFC64;
    return;
L_089AFC64:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30816));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AFC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089AFC7Cu) goto L_089AFC7C;
    return;
L_089AFC7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFC90;
      }
      goto L_089AFC88;
    }
L_089AFC88:
    ctx.set_gpr(31, 0x089AFC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089AFC90u) goto L_089AFC90;
    return;
L_089AFC90:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30816)));
    ctx.set_gpr(31, 0x089AFCA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089AFCA4u) goto L_089AFCA4;
    return;
L_089AFCA4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[2] | 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFCD0;
      }
      goto L_089AFCC8;
    }
L_089AFCC8:
    ctx.set_gpr(2, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_089AFCD0;
L_089AFCD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFCFC;
      }
      goto L_089AFCE0;
    }
L_089AFCE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 65520u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_089AFCFC;
L_089AFCFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFE84;
      }
      goto L_089AFD0C;
    }
L_089AFD0C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFD28;
      }
      goto L_089AFD1C;
    }
L_089AFD1C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFD38;
      }
      goto L_089AFD28;
    }
L_089AFD28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFD38;
      }
      goto L_089AFD34;
    }
L_089AFD34:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089AFD38;
L_089AFD38:
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFD6C;
      }
      goto L_089AFD44;
    }
L_089AFD44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 65487u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 20u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFD80;
      }
      goto L_089AFD6C;
    }
L_089AFD6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 65487u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_089AFD80;
L_089AFD80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFDA0;
      }
      goto L_089AFD90;
    }
L_089AFD90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 256u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_089AFDA0;
L_089AFDA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFDD8;
      }
      goto L_089AFDAC;
    }
L_089AFDAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31960));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AFDC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFDC8u) goto L_089AFDC8;
    return;
L_089AFDC8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089AFDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089AFDD8u) goto L_089AFDD8;
    return;
L_089AFDD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AFDF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFDF4u) goto L_089AFDF4;
    return;
L_089AFDF4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFE0C;
      }
      goto L_089AFE00;
    }
L_089AFE00:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFE10;
      }
      goto L_089AFE0C;
    }
L_089AFE0C:
    ctx.set_gpr(9, 0u + 0u);
    goto L_089AFE10;
L_089AFE10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AFE34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFE34u) goto L_089AFE34;
    return;
L_089AFE34:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFE50;
      }
      goto L_089AFE44;
    }
L_089AFE44:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFE54;
      }
      goto L_089AFE50;
    }
L_089AFE50:
    ctx.set_gpr(9, 0u + 0u);
    goto L_089AFE54;
L_089AFE54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AFE78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFE78u) goto L_089AFE78;
    return;
L_089AFE78:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AFED4;
      }
      goto L_089AFE84;
    }
L_089AFE84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AFEA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFEA8u) goto L_089AFEA8;
    return;
L_089AFEA8:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AFED0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFED0u) goto L_089AFED0;
    return;
L_089AFED0:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    goto L_089AFED4;
L_089AFED4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AFEF0;
      }
      goto L_089AFEE0;
    }
L_089AFEE0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089AFEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 236u, 0x089B172Cu>(ctx, &aot_mem) && ctx.pc == 0x089AFEF0u) goto L_089AFEF0;
    return;
L_089AFEF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089AFF00;
      }
      goto L_089AFEF8;
    }
L_089AFEF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089AFF00;
L_089AFF00:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089AFF28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089AFF4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AFF4Cu) goto L_089AFF4C;
    return;
L_089AFF4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AFF68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.pc = 0x089B0000u; return;
}

void recomp_unit_0106(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0106_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_106(Runtime &runtime) {
    runtime.register_generated_unit(106u, 0x089AC000u, 16384u, &recomp_unit_0106, &recomp_unit_0106_entry);
    runtime.register_function(0x089AC000u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC00Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC010u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC02Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC038u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC04Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC058u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC060u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC08Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC09Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC0E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC100u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC110u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC11Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC13Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC14Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC174u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC190u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC1F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC200u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC224u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC23Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC250u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC25Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC278u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC288u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC2ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC324u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC330u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC344u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC350u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC358u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC36Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC390u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC39Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC3F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC400u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC41Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC42Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC454u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC470u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC490u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC4DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC508u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC518u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC534u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC544u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC550u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC56Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC57Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC5A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC5C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC5E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC5F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC604u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC618u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC624u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC62Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC650u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC668u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC680u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC698u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC6F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC704u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC72Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC74Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC764u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC770u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC778u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC798u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC7E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC808u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC834u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC840u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC854u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC860u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC868u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC88Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC8E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC90Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC91Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC930u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC948u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC958u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC970u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC998u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AC9E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA70u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACA90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACACCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACAFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB2Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB74u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACB8Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBB8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBE4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACBF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC2Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACC74u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACCF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD68u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD70u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACD8Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDD8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACDF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE14u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE68u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACE98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACED0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACEFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF18u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF70u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ACF80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD000u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD01Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD064u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD070u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD074u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD07Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD088u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD098u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD0FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD110u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD120u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD144u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD15Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD174u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD18Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD1FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD208u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD224u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD244u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD26Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD280u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD290u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD2A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD2B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD2C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD2D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD2E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD2FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD314u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD338u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD350u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD368u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD37Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD388u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD3F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD418u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD434u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD440u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD45Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD474u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD498u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD4F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD50Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD518u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD538u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD548u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD574u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD58Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD5E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD604u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD60Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD628u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD640u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD658u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD69Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD6A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD6B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD6CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD6E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD708u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD718u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD730u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD760u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD770u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD784u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD790u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD7F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD80Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD818u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD828u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD840u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD870u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD880u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD894u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD8FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD910u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD91Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD924u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD948u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD960u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD978u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD990u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD9A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD9BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD9C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD9E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AD9F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA84u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADA8Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADAFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADB9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC14u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC40u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC84u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADC9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADCB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADCCCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADCE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADCECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADD94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDCCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADDF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE70u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADE98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEC0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADED0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEE4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADEF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADF90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089ADFF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE00Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE018u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE02Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE038u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE040u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE064u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE07Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE094u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE0E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE10Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE160u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE174u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE18Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE1F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE214u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE224u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE238u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE254u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE278u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE288u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE29Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE2ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE300u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE310u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE31Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE330u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE340u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE374u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE38Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE3FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE418u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE428u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE450u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE45Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE480u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE490u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE4E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE500u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE508u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE514u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE524u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE54Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE558u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE57Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE58Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE5F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE608u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE630u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE63Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE660u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE670u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE688u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6B4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6E4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE6F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE700u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE728u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE734u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE758u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE768u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE780u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE79Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE7E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE814u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE820u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE84Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE85Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE890u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE8E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE904u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE91Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE934u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE94Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE958u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE964u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE978u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE984u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE998u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AE9FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA5Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA68u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA74u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEA9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAB8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEAFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEB84u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBC4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEBF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC18u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEC9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AECDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED3Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AED98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDDCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEDF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE08u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE18u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE70u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE8Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEE9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEB0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEBCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEECCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEE4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEEF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF04u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF24u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF30u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF3Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEF98u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AEFF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF000u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF010u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF014u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF020u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF028u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF044u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF050u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF074u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF084u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF090u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0E0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF0F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF108u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF110u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF120u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF130u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF13Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF144u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF150u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF160u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF188u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1A8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF1F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF204u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF210u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF21Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF228u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF238u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF244u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF250u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF25Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF268u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF274u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF280u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF288u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF294u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2A0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF2FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF304u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF308u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF30Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF320u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF328u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF330u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF338u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF350u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF358u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF370u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF37Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF384u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF388u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF39Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3DCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF3F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF404u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF40Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF418u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF420u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF42Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF43Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF454u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF45Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF474u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF4F8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF504u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF510u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF51Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF520u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF54Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF558u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF560u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF574u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF57Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF588u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF598u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5B0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5BCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5F0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF5FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF608u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF610u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF618u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF624u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF638u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF640u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF648u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF658u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF670u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF67Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF684u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF694u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6ACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6C4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6D8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF6F4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF700u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF710u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF728u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF734u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF73Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF74Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF768u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF774u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF780u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF794u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7CCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7D4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF7E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF800u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF818u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF830u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF838u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF844u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF84Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF85Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF864u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF878u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF880u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF894u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF8E8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF900u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF908u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF914u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF91Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF92Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF934u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF944u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF950u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF960u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF96Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF970u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF980u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF990u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9A4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9B8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9C0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9C8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9D0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9ECu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AF9FCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA2Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA48u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFA88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFAA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFAB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB60u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB84u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB94u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFB9Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBB4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBC0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBD4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBE8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFBF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC14u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC20u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC58u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC64u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC7Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC88u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFC90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCA4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCD0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFCFCu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD1Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD38u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD6Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD80u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFD90u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDA0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDACu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDC8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDD8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFDF4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE0Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE10u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE34u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE44u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE50u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE54u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE78u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFE84u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFEA8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFED0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFED4u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFEE0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFEF0u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFEF8u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF00u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF28u, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF4Cu, &recomp_unit_0106, "recomp_unit_0106");
    runtime.register_function(0x089AFF68u, &recomp_unit_0106, "recomp_unit_0106");
}
} // namespace psprecomp
