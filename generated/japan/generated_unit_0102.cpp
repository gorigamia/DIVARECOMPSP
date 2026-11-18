#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0102[4095] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0,
    0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0,
    0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0,
    70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0,
    89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0,
    174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0,
    188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0,
    0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0,
    225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 234, 0,
    0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 245, 0, 246, 0,
    0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 257, 0, 258, 0,
    0, 259, 0, 0, 260, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0,
    0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 300,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 336,
    0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 378, 0, 0,
    0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 388, 0, 389, 0, 0, 0, 0,
    0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398,
    0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413,
    0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0,
    0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 427, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0,
    0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446,
    0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0,
    0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0,
    0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0,
    0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0,
    480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0,
    485, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0,
    0, 0, 491, 0, 0, 0, 0, 0, 492, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 496, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0,
    499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 503, 0, 0, 504, 505, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 509,
    0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0,
    0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 528, 529, 0, 0, 0, 0, 0, 0, 0, 530,
    0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 536, 537, 0, 0,
    538, 0, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 545, 546, 0, 0, 0, 0, 547,
    0, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 558,
    0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567,
    0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 574, 0, 0, 575, 0, 576, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0,
    0, 581, 0, 0, 582, 0, 0, 0, 0, 583, 0, 584, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0,
    0, 0, 0, 589, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0,
    596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 600, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0,
    0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0,
    610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 615, 0,
    616, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 620, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0,
    0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0,
    0, 0, 0, 632, 0, 633, 0, 0, 634, 0, 635, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639,
    0, 0, 0, 640, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0,
    645, 0, 646, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0,
    0, 0, 653, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 659, 0, 0, 0, 0, 0, 660,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0,
    665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 671, 0,
    0, 0, 672, 0, 0, 673, 0, 0, 0, 674, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0,
    0, 0, 679, 0, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 685,
    0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0,
    692, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 696, 0, 697, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0,
    701, 0, 0, 702, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 709,
    0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 713, 0, 714, 0, 0, 0, 715, 0, 716, 0, 717, 0, 0, 718, 0, 0,
    0, 719, 0, 0, 720, 0, 721, 0, 0, 722, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 732,
    0, 733, 0, 0, 734, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 738, 0, 739, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0,
    0, 0, 0, 0, 742, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 746, 747, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 750, 0,
    0, 0, 0, 751, 0, 752, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0,
    0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 763, 0, 764, 0, 0, 765, 0, 0, 766,
    0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0,
    772, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 777, 0, 778, 0, 0, 0, 0,
    0, 779, 0, 0, 780, 0, 0, 0, 0, 781, 0, 782, 0, 783, 0, 0, 0, 0, 0, 784, 0, 0, 785, 0, 0, 0, 786, 0, 787, 0, 0, 0,
    0, 788, 0, 789, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 792, 0, 0, 793, 0, 794, 0, 0, 795, 0, 796, 797, 0, 0, 0, 0,
    798, 0, 0, 799, 0, 0, 800, 0, 0, 801, 0, 802, 0, 0, 0, 803, 0, 0, 0, 0, 0, 804, 805, 0, 806, 0, 0, 0, 0, 0, 807,
};
void recomp_unit_0102_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0899C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0102[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0899C000;
    case 2u: goto L_0899C008;
    case 3u: goto L_0899C024;
    case 4u: goto L_0899C040;
    case 5u: goto L_0899C054;
    case 6u: goto L_0899C068;
    case 7u: goto L_0899C07C;
    case 8u: goto L_0899C090;
    case 9u: goto L_0899C0A4;
    case 10u: goto L_0899C0B8;
    case 11u: goto L_0899C0C8;
    case 12u: goto L_0899C0D8;
    case 13u: goto L_0899C0E8;
    case 14u: goto L_0899C0F8;
    case 15u: goto L_0899C108;
    case 16u: goto L_0899C118;
    case 17u: goto L_0899C130;
    case 18u: goto L_0899C14C;
    case 19u: goto L_0899C164;
    case 20u: goto L_0899C180;
    case 21u: goto L_0899C198;
    case 22u: goto L_0899C1B4;
    case 23u: goto L_0899C1CC;
    case 24u: goto L_0899C1E8;
    case 25u: goto L_0899C1F8;
    case 26u: goto L_0899C208;
    case 27u: goto L_0899C220;
    case 28u: goto L_0899C23C;
    case 29u: goto L_0899C254;
    case 30u: goto L_0899C270;
    case 31u: goto L_0899C280;
    case 32u: goto L_0899C290;
    case 33u: goto L_0899C2A4;
    case 34u: goto L_0899C2B4;
    case 35u: goto L_0899C2C4;
    case 36u: goto L_0899C2D4;
    case 37u: goto L_0899C2E4;
    case 38u: goto L_0899C2F4;
    case 39u: goto L_0899C304;
    case 40u: goto L_0899C314;
    case 41u: goto L_0899C324;
    case 42u: goto L_0899C334;
    case 43u: goto L_0899C344;
    case 44u: goto L_0899C354;
    case 45u: goto L_0899C36C;
    case 46u: goto L_0899C388;
    case 47u: goto L_0899C3A0;
    case 48u: goto L_0899C3BC;
    case 49u: goto L_0899C3D4;
    case 50u: goto L_0899C3F0;
    case 51u: goto L_0899C400;
    case 52u: goto L_0899C410;
    case 53u: goto L_0899C428;
    case 54u: goto L_0899C438;
    case 55u: goto L_0899C450;
    case 56u: goto L_0899C460;
    case 57u: goto L_0899C47C;
    case 58u: goto L_0899C48C;
    case 59u: goto L_0899C4A8;
    case 60u: goto L_0899C4B8;
    case 61u: goto L_0899C4D0;
    case 62u: goto L_0899C4EC;
    case 63u: goto L_0899C504;
    case 64u: goto L_0899C520;
    case 65u: goto L_0899C52C;
    case 66u: goto L_0899C540;
    case 67u: goto L_0899C54C;
    case 68u: goto L_0899C560;
    case 69u: goto L_0899C56C;
    case 70u: goto L_0899C580;
    case 71u: goto L_0899C58C;
    case 72u: goto L_0899C5A0;
    case 73u: goto L_0899C5AC;
    case 74u: goto L_0899C5C0;
    case 75u: goto L_0899C5CC;
    case 76u: goto L_0899C5E0;
    case 77u: goto L_0899C5F8;
    case 78u: goto L_0899C614;
    case 79u: goto L_0899C628;
    case 80u: goto L_0899C63C;
    case 81u: goto L_0899C650;
    case 82u: goto L_0899C66C;
    case 83u: goto L_0899C684;
    case 84u: goto L_0899C6A0;
    case 85u: goto L_0899C6B4;
    case 86u: goto L_0899C6C0;
    case 87u: goto L_0899C6DC;
    case 88u: goto L_0899C6F0;
    case 89u: goto L_0899C700;
    case 90u: goto L_0899C710;
    case 91u: goto L_0899C728;
    case 92u: goto L_0899C744;
    case 93u: goto L_0899C754;
    case 94u: goto L_0899C764;
    case 95u: goto L_0899C774;
    case 96u: goto L_0899C784;
    case 97u: goto L_0899C79C;
    case 98u: goto L_0899C7BC;
    case 99u: goto L_0899C7D0;
    case 100u: goto L_0899C7FC;
    case 101u: goto L_0899C82C;
    case 102u: goto L_0899C844;
    case 103u: goto L_0899C868;
    case 104u: goto L_0899C870;
    case 105u: goto L_0899C888;
    case 106u: goto L_0899C8A0;
    case 107u: goto L_0899C8C4;
    case 108u: goto L_0899C8CC;
    case 109u: goto L_0899C8E4;
    case 110u: goto L_0899C8FC;
    case 111u: goto L_0899C920;
    case 112u: goto L_0899C928;
    case 113u: goto L_0899C940;
    case 114u: goto L_0899C958;
    case 115u: goto L_0899C97C;
    case 116u: goto L_0899C984;
    case 117u: goto L_0899C99C;
    case 118u: goto L_0899C9B4;
    case 119u: goto L_0899C9D8;
    case 120u: goto L_0899C9E0;
    case 121u: goto L_0899C9F8;
    case 122u: goto L_0899CA10;
    case 123u: goto L_0899CA24;
    case 124u: goto L_0899CA2C;
    case 125u: goto L_0899CA44;
    case 126u: goto L_0899CA5C;
    case 127u: goto L_0899CA80;
    case 128u: goto L_0899CAA4;
    case 129u: goto L_0899CAB0;
    case 130u: goto L_0899CABC;
    case 131u: goto L_0899CAD8;
    case 132u: goto L_0899CAF0;
    case 133u: goto L_0899CB08;
    case 134u: goto L_0899CB18;
    case 135u: goto L_0899CB28;
    case 136u: goto L_0899CB7C;
    case 137u: goto L_0899CB8C;
    case 138u: goto L_0899CB9C;
    case 139u: goto L_0899CBB8;
    case 140u: goto L_0899CBD0;
    case 141u: goto L_0899CBE4;
    case 142u: goto L_0899CBEC;
    case 143u: goto L_0899CC04;
    case 144u: goto L_0899CC1C;
    case 145u: goto L_0899CC3C;
    case 146u: goto L_0899CC60;
    case 147u: goto L_0899CC68;
    case 148u: goto L_0899CC80;
    case 149u: goto L_0899CC9C;
    case 150u: goto L_0899CCB4;
    case 151u: goto L_0899CCCC;
    case 152u: goto L_0899CCDC;
    case 153u: goto L_0899CCEC;
    case 154u: goto L_0899CD50;
    case 155u: goto L_0899CD60;
    case 156u: goto L_0899CD70;
    case 157u: goto L_0899CD98;
    case 158u: goto L_0899CDB4;
    case 159u: goto L_0899CDC4;
    case 160u: goto L_0899CDDC;
    case 161u: goto L_0899CDE8;
    case 162u: goto L_0899CDFC;
    case 163u: goto L_0899CE14;
    case 164u: goto L_0899CE28;
    case 165u: goto L_0899CE3C;
    case 166u: goto L_0899CE58;
    case 167u: goto L_0899CE68;
    case 168u: goto L_0899CE80;
    case 169u: goto L_0899CE90;
    case 170u: goto L_0899CEB0;
    case 171u: goto L_0899CEC0;
    case 172u: goto L_0899CEDC;
    case 173u: goto L_0899CEEC;
    case 174u: goto L_0899CF00;
    case 175u: goto L_0899CF0C;
    case 176u: goto L_0899CF38;
    case 177u: goto L_0899CF54;
    case 178u: goto L_0899CF64;
    case 179u: goto L_0899CF74;
    case 180u: goto L_0899CF8C;
    case 181u: goto L_0899CF94;
    case 182u: goto L_0899CFA0;
    case 183u: goto L_0899CFAC;
    case 184u: goto L_0899CFB4;
    case 185u: goto L_0899CFCC;
    case 186u: goto L_0899CFE4;
    case 187u: goto L_0899CFF8;
    case 188u: goto L_0899D000;
    case 189u: goto L_0899D018;
    case 190u: goto L_0899D030;
    case 191u: goto L_0899D04C;
    case 192u: goto L_0899D070;
    case 193u: goto L_0899D088;
    case 194u: goto L_0899D0A0;
    case 195u: goto L_0899D0B0;
    case 196u: goto L_0899D0C0;
    case 197u: goto L_0899D114;
    case 198u: goto L_0899D124;
    case 199u: goto L_0899D134;
    case 200u: goto L_0899D15C;
    case 201u: goto L_0899D178;
    case 202u: goto L_0899D188;
    case 203u: goto L_0899D1A0;
    case 204u: goto L_0899D1B4;
    case 205u: goto L_0899D1C4;
    case 206u: goto L_0899D1D8;
    case 207u: goto L_0899D1E8;
    case 208u: goto L_0899D1F4;
    case 209u: goto L_0899D208;
    case 210u: goto L_0899D214;
    case 211u: goto L_0899D240;
    case 212u: goto L_0899D270;
    case 213u: goto L_0899D288;
    case 214u: goto L_0899D29C;
    case 215u: goto L_0899D2A4;
    case 216u: goto L_0899D2BC;
    case 217u: goto L_0899D2D4;
    case 218u: goto L_0899D2E8;
    case 219u: goto L_0899D310;
    case 220u: goto L_0899D328;
    case 221u: goto L_0899D348;
    case 222u: goto L_0899D360;
    case 223u: goto L_0899D36C;
    case 224u: goto L_0899D374;
    case 225u: goto L_0899D380;
    case 226u: goto L_0899D390;
    case 227u: goto L_0899D3A8;
    case 228u: goto L_0899D3AC;
    case 229u: goto L_0899D3B4;
    case 230u: goto L_0899D3CC;
    case 231u: goto L_0899D3D8;
    case 232u: goto L_0899D3E4;
    case 233u: goto L_0899D3F0;
    case 234u: goto L_0899D3F8;
    case 235u: goto L_0899D404;
    case 236u: goto L_0899D410;
    case 237u: goto L_0899D418;
    case 238u: goto L_0899D424;
    case 239u: goto L_0899D430;
    case 240u: goto L_0899D438;
    case 241u: goto L_0899D444;
    case 242u: goto L_0899D450;
    case 243u: goto L_0899D458;
    case 244u: goto L_0899D464;
    case 245u: goto L_0899D470;
    case 246u: goto L_0899D478;
    case 247u: goto L_0899D484;
    case 248u: goto L_0899D490;
    case 249u: goto L_0899D498;
    case 250u: goto L_0899D4A4;
    case 251u: goto L_0899D4B0;
    case 252u: goto L_0899D4B8;
    case 253u: goto L_0899D4C4;
    case 254u: goto L_0899D4D0;
    case 255u: goto L_0899D4D8;
    case 256u: goto L_0899D4E4;
    case 257u: goto L_0899D4F0;
    case 258u: goto L_0899D4F8;
    case 259u: goto L_0899D504;
    case 260u: goto L_0899D510;
    case 261u: goto L_0899D518;
    case 262u: goto L_0899D524;
    case 263u: goto L_0899D530;
    case 264u: goto L_0899D54C;
    case 265u: goto L_0899D564;
    case 266u: goto L_0899D5B8;
    case 267u: goto L_0899D5D0;
    case 268u: goto L_0899D5E0;
    case 269u: goto L_0899D5F0;
    case 270u: goto L_0899D63C;
    case 271u: goto L_0899D64C;
    case 272u: goto L_0899D65C;
    case 273u: goto L_0899D674;
    case 274u: goto L_0899D688;
    case 275u: goto L_0899D690;
    case 276u: goto L_0899D6A8;
    case 277u: goto L_0899D6C4;
    case 278u: goto L_0899D6E0;
    case 279u: goto L_0899D6EC;
    case 280u: goto L_0899D6F8;
    case 281u: goto L_0899D704;
    case 282u: goto L_0899D710;
    case 283u: goto L_0899D728;
    case 284u: goto L_0899D74C;
    case 285u: goto L_0899D758;
    case 286u: goto L_0899D774;
    case 287u: goto L_0899D78C;
    case 288u: goto L_0899D7A4;
    case 289u: goto L_0899D7D0;
    case 290u: goto L_0899D7E8;
    case 291u: goto L_0899D7F8;
    case 292u: goto L_0899D808;
    case 293u: goto L_0899D864;
    case 294u: goto L_0899D874;
    case 295u: goto L_0899D884;
    case 296u: goto L_0899D8AC;
    case 297u: goto L_0899D8C8;
    case 298u: goto L_0899D8D8;
    case 299u: goto L_0899D8E4;
    case 300u: goto L_0899D8FC;
    case 301u: goto L_0899D908;
    case 302u: goto L_0899D930;
    case 303u: goto L_0899D940;
    case 304u: goto L_0899D950;
    case 305u: goto L_0899D964;
    case 306u: goto L_0899D978;
    case 307u: goto L_0899D98C;
    case 308u: goto L_0899D9B8;
    case 309u: goto L_0899D9D4;
    case 310u: goto L_0899D9EC;
    case 311u: goto L_0899DA00;
    case 312u: goto L_0899DA08;
    case 313u: goto L_0899DA20;
    case 314u: goto L_0899DA38;
    case 315u: goto L_0899DA4C;
    case 316u: goto L_0899DA74;
    case 317u: goto L_0899DA8C;
    case 318u: goto L_0899DAA4;
    case 319u: goto L_0899DAB4;
    case 320u: goto L_0899DAC4;
    case 321u: goto L_0899DB20;
    case 322u: goto L_0899DB30;
    case 323u: goto L_0899DB40;
    case 324u: goto L_0899DB68;
    case 325u: goto L_0899DB84;
    case 326u: goto L_0899DB94;
    case 327u: goto L_0899DBA0;
    case 328u: goto L_0899DBD0;
    case 329u: goto L_0899DBEC;
    case 330u: goto L_0899DC04;
    case 331u: goto L_0899DC28;
    case 332u: goto L_0899DC30;
    case 333u: goto L_0899DC48;
    case 334u: goto L_0899DC60;
    case 335u: goto L_0899DC74;
    case 336u: goto L_0899DC7C;
    case 337u: goto L_0899DC94;
    case 338u: goto L_0899DCAC;
    case 339u: goto L_0899DCC4;
    case 340u: goto L_0899DCE8;
    case 341u: goto L_0899DD00;
    case 342u: goto L_0899DD18;
    case 343u: goto L_0899DD28;
    case 344u: goto L_0899DD38;
    case 345u: goto L_0899DD84;
    case 346u: goto L_0899DD94;
    case 347u: goto L_0899DDA4;
    case 348u: goto L_0899DDBC;
    case 349u: goto L_0899DDD0;
    case 350u: goto L_0899DDD8;
    case 351u: goto L_0899DDF0;
    case 352u: goto L_0899DE04;
    case 353u: goto L_0899DE18;
    case 354u: goto L_0899DE34;
    case 355u: goto L_0899DE4C;
    case 356u: goto L_0899DE5C;
    case 357u: goto L_0899DE6C;
    case 358u: goto L_0899DEB8;
    case 359u: goto L_0899DEC8;
    case 360u: goto L_0899DED8;
    case 361u: goto L_0899DEE8;
    case 362u: goto L_0899DF00;
    case 363u: goto L_0899DF14;
    case 364u: goto L_0899DF1C;
    case 365u: goto L_0899DF34;
    case 366u: goto L_0899DF48;
    case 367u: goto L_0899DF5C;
    case 368u: goto L_0899DF78;
    case 369u: goto L_0899DF90;
    case 370u: goto L_0899DFA0;
    case 371u: goto L_0899DFB0;
    case 372u: goto L_0899E004;
    case 373u: goto L_0899E014;
    case 374u: goto L_0899E024;
    case 375u: goto L_0899E040;
    case 376u: goto L_0899E058;
    case 377u: goto L_0899E06C;
    case 378u: goto L_0899E074;
    case 379u: goto L_0899E08C;
    case 380u: goto L_0899E0A4;
    case 381u: goto L_0899E0C0;
    case 382u: goto L_0899E0E8;
    case 383u: goto L_0899E100;
    case 384u: goto L_0899E120;
    case 385u: goto L_0899E138;
    case 386u: goto L_0899E148;
    case 387u: goto L_0899E160;
    case 388u: goto L_0899E164;
    case 389u: goto L_0899E16C;
    case 390u: goto L_0899E184;
    case 391u: goto L_0899E190;
    case 392u: goto L_0899E19C;
    case 393u: goto L_0899E1A8;
    case 394u: goto L_0899E1B0;
    case 395u: goto L_0899E1BC;
    case 396u: goto L_0899E1C8;
    case 397u: goto L_0899E1E4;
    case 398u: goto L_0899E1FC;
    case 399u: goto L_0899E20C;
    case 400u: goto L_0899E21C;
    case 401u: goto L_0899E270;
    case 402u: goto L_0899E280;
    case 403u: goto L_0899E290;
    case 404u: goto L_0899E2AC;
    case 405u: goto L_0899E2C4;
    case 406u: goto L_0899E2D8;
    case 407u: goto L_0899E2E0;
    case 408u: goto L_0899E2F8;
    case 409u: goto L_0899E310;
    case 410u: goto L_0899E324;
    case 411u: goto L_0899E34C;
    case 412u: goto L_0899E364;
    case 413u: goto L_0899E37C;
    case 414u: goto L_0899E38C;
    case 415u: goto L_0899E39C;
    case 416u: goto L_0899E3F8;
    case 417u: goto L_0899E408;
    case 418u: goto L_0899E418;
    case 419u: goto L_0899E440;
    case 420u: goto L_0899E45C;
    case 421u: goto L_0899E46C;
    case 422u: goto L_0899E478;
    case 423u: goto L_0899E4A8;
    case 424u: goto L_0899E4C4;
    case 425u: goto L_0899E4DC;
    case 426u: goto L_0899E4F0;
    case 427u: goto L_0899E4F8;
    case 428u: goto L_0899E510;
    case 429u: goto L_0899E528;
    case 430u: goto L_0899E53C;
    case 431u: goto L_0899E564;
    case 432u: goto L_0899E57C;
    case 433u: goto L_0899E594;
    case 434u: goto L_0899E5A4;
    case 435u: goto L_0899E5B4;
    case 436u: goto L_0899E610;
    case 437u: goto L_0899E620;
    case 438u: goto L_0899E630;
    case 439u: goto L_0899E658;
    case 440u: goto L_0899E674;
    case 441u: goto L_0899E684;
    case 442u: goto L_0899E690;
    case 443u: goto L_0899E6A8;
    case 444u: goto L_0899E6B8;
    case 445u: goto L_0899E6E0;
    case 446u: goto L_0899E6FC;
    case 447u: goto L_0899E714;
    case 448u: goto L_0899E728;
    case 449u: goto L_0899E730;
    case 450u: goto L_0899E748;
    case 451u: goto L_0899E760;
    case 452u: goto L_0899E774;
    case 453u: goto L_0899E79C;
    case 454u: goto L_0899E7B4;
    case 455u: goto L_0899E7CC;
    case 456u: goto L_0899E7DC;
    case 457u: goto L_0899E7EC;
    case 458u: goto L_0899E848;
    case 459u: goto L_0899E858;
    case 460u: goto L_0899E868;
    case 461u: goto L_0899E890;
    case 462u: goto L_0899E8AC;
    case 463u: goto L_0899E8BC;
    case 464u: goto L_0899E8C8;
    case 465u: goto L_0899E8F8;
    case 466u: goto L_0899E914;
    case 467u: goto L_0899E92C;
    case 468u: goto L_0899E940;
    case 469u: goto L_0899E948;
    case 470u: goto L_0899E960;
    case 471u: goto L_0899E978;
    case 472u: goto L_0899E99C;
    case 473u: goto L_0899E9C4;
    case 474u: goto L_0899E9DC;
    case 475u: goto L_0899E9F4;
    case 476u: goto L_0899EA04;
    case 477u: goto L_0899EA14;
    case 478u: goto L_0899EA60;
    case 479u: goto L_0899EA70;
    case 480u: goto L_0899EA80;
    case 481u: goto L_0899EA90;
    case 482u: goto L_0899EAA0;
    case 483u: goto L_0899EAD0;
    case 484u: goto L_0899EAF4;
    case 485u: goto L_0899EB00;
    case 486u: goto L_0899EB24;
    case 487u: goto L_0899EB3C;
    case 488u: goto L_0899EB44;
    case 489u: goto L_0899EB58;
    case 490u: goto L_0899EB78;
    case 491u: goto L_0899EB88;
    case 492u: goto L_0899EBA0;
    case 493u: goto L_0899EBA4;
    case 494u: goto L_0899EBAC;
    case 495u: goto L_0899EBC4;
    case 496u: goto L_0899EBD0;
    case 497u: goto L_0899EBD4;
    case 498u: goto L_0899EBE0;
    case 499u: goto L_0899EC00;
    case 500u: goto L_0899EC0C;
    case 501u: goto L_0899EC28;
    case 502u: goto L_0899EC34;
    case 503u: goto L_0899EC38;
    case 504u: goto L_0899EC44;
    case 505u: goto L_0899EC48;
    case 506u: goto L_0899EC50;
    case 507u: goto L_0899EC5C;
    case 508u: goto L_0899EC68;
    case 509u: goto L_0899EC7C;
    case 510u: goto L_0899EC84;
    case 511u: goto L_0899EC94;
    case 512u: goto L_0899ECAC;
    case 513u: goto L_0899ECC4;
    case 514u: goto L_0899ECD4;
    case 515u: goto L_0899ED04;
    case 516u: goto L_0899ED10;
    case 517u: goto L_0899ED1C;
    case 518u: goto L_0899ED28;
    case 519u: goto L_0899ED34;
    case 520u: goto L_0899ED40;
    case 521u: goto L_0899ED4C;
    case 522u: goto L_0899ED58;
    case 523u: goto L_0899ED78;
    case 524u: goto L_0899ED9C;
    case 525u: goto L_0899EDA8;
    case 526u: goto L_0899EDBC;
    case 527u: goto L_0899EDC4;
    case 528u: goto L_0899EDD8;
    case 529u: goto L_0899EDDC;
    case 530u: goto L_0899EDFC;
    case 531u: goto L_0899EE14;
    case 532u: goto L_0899EE28;
    case 533u: goto L_0899EE3C;
    case 534u: goto L_0899EE4C;
    case 535u: goto L_0899EE5C;
    case 536u: goto L_0899EE70;
    case 537u: goto L_0899EE74;
    case 538u: goto L_0899EE80;
    case 539u: goto L_0899EE90;
    case 540u: goto L_0899EE9C;
    case 541u: goto L_0899EEA8;
    case 542u: goto L_0899EEB0;
    case 543u: goto L_0899EECC;
    case 544u: goto L_0899EED4;
    case 545u: goto L_0899EEE4;
    case 546u: goto L_0899EEE8;
    case 547u: goto L_0899EEFC;
    case 548u: goto L_0899EF0C;
    case 549u: goto L_0899EF14;
    case 550u: goto L_0899EF20;
    case 551u: goto L_0899EF2C;
    case 552u: goto L_0899EF38;
    case 553u: goto L_0899EF44;
    case 554u: goto L_0899EF50;
    case 555u: goto L_0899EF5C;
    case 556u: goto L_0899EF68;
    case 557u: goto L_0899EF74;
    case 558u: goto L_0899EF7C;
    case 559u: goto L_0899EF84;
    case 560u: goto L_0899EF90;
    case 561u: goto L_0899EF9C;
    case 562u: goto L_0899EFAC;
    case 563u: goto L_0899EFBC;
    case 564u: goto L_0899EFCC;
    case 565u: goto L_0899EFDC;
    case 566u: goto L_0899EFEC;
    case 567u: goto L_0899EFFC;
    case 568u: goto L_0899F00C;
    case 569u: goto L_0899F01C;
    case 570u: goto L_0899F02C;
    case 571u: goto L_0899F044;
    case 572u: goto L_0899F054;
    case 573u: goto L_0899F05C;
    case 574u: goto L_0899F08C;
    case 575u: goto L_0899F098;
    case 576u: goto L_0899F0A0;
    case 577u: goto L_0899F0A4;
    case 578u: goto L_0899F0D4;
    case 579u: goto L_0899F0DC;
    case 580u: goto L_0899F0E8;
    case 581u: goto L_0899F104;
    case 582u: goto L_0899F110;
    case 583u: goto L_0899F124;
    case 584u: goto L_0899F12C;
    case 585u: goto L_0899F130;
    case 586u: goto L_0899F154;
    case 587u: goto L_0899F170;
    case 588u: goto L_0899F178;
    case 589u: goto L_0899F18C;
    case 590u: goto L_0899F190;
    case 591u: goto L_0899F1A4;
    case 592u: goto L_0899F1B8;
    case 593u: goto L_0899F1C8;
    case 594u: goto L_0899F1E4;
    case 595u: goto L_0899F1F4;
    case 596u: goto L_0899F200;
    case 597u: goto L_0899F20C;
    case 598u: goto L_0899F214;
    case 599u: goto L_0899F230;
    case 600u: goto L_0899F238;
    case 601u: goto L_0899F23C;
    case 602u: goto L_0899F250;
    case 603u: goto L_0899F270;
    case 604u: goto L_0899F278;
    case 605u: goto L_0899F288;
    case 606u: goto L_0899F2A0;
    case 607u: goto L_0899F2B0;
    case 608u: goto L_0899F2C0;
    case 609u: goto L_0899F2E4;
    case 610u: goto L_0899F300;
    case 611u: goto L_0899F318;
    case 612u: goto L_0899F330;
    case 613u: goto L_0899F358;
    case 614u: goto L_0899F364;
    case 615u: goto L_0899F378;
    case 616u: goto L_0899F380;
    case 617u: goto L_0899F394;
    case 618u: goto L_0899F39C;
    case 619u: goto L_0899F3AC;
    case 620u: goto L_0899F3B4;
    case 621u: goto L_0899F3B8;
    case 622u: goto L_0899F3D4;
    case 623u: goto L_0899F3F8;
    case 624u: goto L_0899F404;
    case 625u: goto L_0899F410;
    case 626u: goto L_0899F41C;
    case 627u: goto L_0899F428;
    case 628u: goto L_0899F448;
    case 629u: goto L_0899F450;
    case 630u: goto L_0899F45C;
    case 631u: goto L_0899F468;
    case 632u: goto L_0899F48C;
    case 633u: goto L_0899F494;
    case 634u: goto L_0899F4A0;
    case 635u: goto L_0899F4A8;
    case 636u: goto L_0899F4B4;
    case 637u: goto L_0899F4C8;
    case 638u: goto L_0899F4DC;
    case 639u: goto L_0899F4FC;
    case 640u: goto L_0899F50C;
    case 641u: goto L_0899F518;
    case 642u: goto L_0899F524;
    case 643u: goto L_0899F540;
    case 644u: goto L_0899F574;
    case 645u: goto L_0899F580;
    case 646u: goto L_0899F588;
    case 647u: goto L_0899F58C;
    case 648u: goto L_0899F5A8;
    case 649u: goto L_0899F5C4;
    case 650u: goto L_0899F5D0;
    case 651u: goto L_0899F5E4;
    case 652u: goto L_0899F5EC;
    case 653u: goto L_0899F608;
    case 654u: goto L_0899F614;
    case 655u: goto L_0899F620;
    case 656u: goto L_0899F638;
    case 657u: goto L_0899F654;
    case 658u: goto L_0899F660;
    case 659u: goto L_0899F664;
    case 660u: goto L_0899F67C;
    case 661u: goto L_0899F6BC;
    case 662u: goto L_0899F6C4;
    case 663u: goto L_0899F6E0;
    case 664u: goto L_0899F6F0;
    case 665u: goto L_0899F700;
    case 666u: goto L_0899F714;
    case 667u: goto L_0899F730;
    case 668u: goto L_0899F740;
    case 669u: goto L_0899F758;
    case 670u: goto L_0899F770;
    case 671u: goto L_0899F778;
    case 672u: goto L_0899F788;
    case 673u: goto L_0899F794;
    case 674u: goto L_0899F7A4;
    case 675u: goto L_0899F7A8;
    case 676u: goto L_0899F7C8;
    case 677u: goto L_0899F7E0;
    case 678u: goto L_0899F7F4;
    case 679u: goto L_0899F808;
    case 680u: goto L_0899F814;
    case 681u: goto L_0899F830;
    case 682u: goto L_0899F840;
    case 683u: goto L_0899F860;
    case 684u: goto L_0899F870;
    case 685u: goto L_0899F87C;
    case 686u: goto L_0899F894;
    case 687u: goto L_0899F8A0;
    case 688u: goto L_0899F8BC;
    case 689u: goto L_0899F8CC;
    case 690u: goto L_0899F8DC;
    case 691u: goto L_0899F8E8;
    case 692u: goto L_0899F900;
    case 693u: goto L_0899F920;
    case 694u: goto L_0899F92C;
    case 695u: goto L_0899F938;
    case 696u: goto L_0899F940;
    case 697u: goto L_0899F948;
    case 698u: goto L_0899F954;
    case 699u: goto L_0899F968;
    case 700u: goto L_0899F978;
    case 701u: goto L_0899F980;
    case 702u: goto L_0899F98C;
    case 703u: goto L_0899F990;
    case 704u: goto L_0899F9A4;
    case 705u: goto L_0899F9C4;
    case 706u: goto L_0899F9D0;
    case 707u: goto L_0899F9DC;
    case 708u: goto L_0899F9F0;
    case 709u: goto L_0899F9FC;
    case 710u: goto L_0899FA10;
    case 711u: goto L_0899FA2C;
    case 712u: goto L_0899FA3C;
    case 713u: goto L_0899FA40;
    case 714u: goto L_0899FA48;
    case 715u: goto L_0899FA58;
    case 716u: goto L_0899FA60;
    case 717u: goto L_0899FA68;
    case 718u: goto L_0899FA74;
    case 719u: goto L_0899FA84;
    case 720u: goto L_0899FA90;
    case 721u: goto L_0899FA98;
    case 722u: goto L_0899FAA4;
    case 723u: goto L_0899FAAC;
    case 724u: goto L_0899FAC0;
    case 725u: goto L_0899FAD0;
    case 726u: goto L_0899FAD8;
    case 727u: goto L_0899FAF4;
    case 728u: goto L_0899FB34;
    case 729u: goto L_0899FB40;
    case 730u: goto L_0899FB4C;
    case 731u: goto L_0899FB70;
    case 732u: goto L_0899FB7C;
    case 733u: goto L_0899FB84;
    case 734u: goto L_0899FB90;
    case 735u: goto L_0899FB98;
    case 736u: goto L_0899FBAC;
    case 737u: goto L_0899FBC0;
    case 738u: goto L_0899FBCC;
    case 739u: goto L_0899FBD4;
    case 740u: goto L_0899FBDC;
    case 741u: goto L_0899FBEC;
    case 742u: goto L_0899FC10;
    case 743u: goto L_0899FC18;
    case 744u: goto L_0899FC24;
    case 745u: goto L_0899FC30;
    case 746u: goto L_0899FC48;
    case 747u: goto L_0899FC4C;
    case 748u: goto L_0899FC58;
    case 749u: goto L_0899FC70;
    case 750u: goto L_0899FC78;
    case 751u: goto L_0899FC8C;
    case 752u: goto L_0899FC94;
    case 753u: goto L_0899FCAC;
    case 754u: goto L_0899FCB4;
    case 755u: goto L_0899FCCC;
    case 756u: goto L_0899FCD4;
    case 757u: goto L_0899FCE8;
    case 758u: goto L_0899FCF4;
    case 759u: goto L_0899FD08;
    case 760u: goto L_0899FD18;
    case 761u: goto L_0899FD38;
    case 762u: goto L_0899FD40;
    case 763u: goto L_0899FD5C;
    case 764u: goto L_0899FD64;
    case 765u: goto L_0899FD70;
    case 766u: goto L_0899FD7C;
    case 767u: goto L_0899FD94;
    case 768u: goto L_0899FDA0;
    case 769u: goto L_0899FDAC;
    case 770u: goto L_0899FDC8;
    case 771u: goto L_0899FDE8;
    case 772u: goto L_0899FE00;
    case 773u: goto L_0899FE20;
    case 774u: goto L_0899FE38;
    case 775u: goto L_0899FE48;
    case 776u: goto L_0899FE60;
    case 777u: goto L_0899FE64;
    case 778u: goto L_0899FE6C;
    case 779u: goto L_0899FE84;
    case 780u: goto L_0899FE90;
    case 781u: goto L_0899FEA4;
    case 782u: goto L_0899FEAC;
    case 783u: goto L_0899FEB4;
    case 784u: goto L_0899FECC;
    case 785u: goto L_0899FED8;
    case 786u: goto L_0899FEE8;
    case 787u: goto L_0899FEF0;
    case 788u: goto L_0899FF04;
    case 789u: goto L_0899FF0C;
    case 790u: goto L_0899FF24;
    case 791u: goto L_0899FF2C;
    case 792u: goto L_0899FF40;
    case 793u: goto L_0899FF4C;
    case 794u: goto L_0899FF54;
    case 795u: goto L_0899FF60;
    case 796u: goto L_0899FF68;
    case 797u: goto L_0899FF6C;
    case 798u: goto L_0899FF80;
    case 799u: goto L_0899FF8C;
    case 800u: goto L_0899FF98;
    case 801u: goto L_0899FFA4;
    case 802u: goto L_0899FFAC;
    case 803u: goto L_0899FFBC;
    case 804u: goto L_0899FFD4;
    case 805u: goto L_0899FFD8;
    case 806u: goto L_0899FFE0;
    case 807u: goto L_0899FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0899C000:
    ctx.set_gpr(31, 0x0899C008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C008u) goto L_0899C008;
    return;
L_0899C008:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(37));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C024u) goto L_0899C024;
    return;
L_0899C024:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(38));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C040u) goto L_0899C040;
    return;
L_0899C040:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(39));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C054u) goto L_0899C054;
    return;
L_0899C054:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899C068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0899C068u) goto L_0899C068;
    return;
L_0899C068:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C07Cu) goto L_0899C07C;
    return;
L_0899C07C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(41));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C090u) goto L_0899C090;
    return;
L_0899C090:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(42));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C0A4u) goto L_0899C0A4;
    return;
L_0899C0A4:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C0B8u) goto L_0899C0B8;
    return;
L_0899C0B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899C0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0899C0C8u) goto L_0899C0C8;
    return;
L_0899C0C8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(46));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C0D8u) goto L_0899C0D8;
    return;
L_0899C0D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899C0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x0899C0E8u) goto L_0899C0E8;
    return;
L_0899C0E8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(47));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C0F8u) goto L_0899C0F8;
    return;
L_0899C0F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899C108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x0899C108u) goto L_0899C108;
    return;
L_0899C108:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(53));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C118u) goto L_0899C118;
    return;
L_0899C118:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20788));
    ctx.set_gpr(31, 0x0899C130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C130u) goto L_0899C130;
    return;
L_0899C130:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18188));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(54));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C14Cu) goto L_0899C14C;
    return;
L_0899C14C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20784));
    ctx.set_gpr(31, 0x0899C164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C164u) goto L_0899C164;
    return;
L_0899C164:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18096));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(55));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C180u) goto L_0899C180;
    return;
L_0899C180:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20780));
    ctx.set_gpr(31, 0x0899C198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C198u) goto L_0899C198;
    return;
L_0899C198:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18096));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C1B4u) goto L_0899C1B4;
    return;
L_0899C1B4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20776));
    ctx.set_gpr(31, 0x0899C1CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C1CCu) goto L_0899C1CC;
    return;
L_0899C1CC:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18096));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C1E8u) goto L_0899C1E8;
    return;
L_0899C1E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899C1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0899C1F8u) goto L_0899C1F8;
    return;
L_0899C1F8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C208u) goto L_0899C208;
    return;
L_0899C208:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20772));
    ctx.set_gpr(31, 0x0899C220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C220u) goto L_0899C220;
    return;
L_0899C220:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18740));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C23Cu) goto L_0899C23C;
    return;
L_0899C23C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20768));
    ctx.set_gpr(31, 0x0899C254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C254u) goto L_0899C254;
    return;
L_0899C254:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18464));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(73));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C270u) goto L_0899C270;
    return;
L_0899C270:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899C280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0899C280u) goto L_0899C280;
    return;
L_0899C280:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(74));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C290u) goto L_0899C290;
    return;
L_0899C290:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899C2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0899C2A4u) goto L_0899C2A4;
    return;
L_0899C2A4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(75));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C2B4u) goto L_0899C2B4;
    return;
L_0899C2B4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899C2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0899C2C4u) goto L_0899C2C4;
    return;
L_0899C2C4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C2D4u) goto L_0899C2D4;
    return;
L_0899C2D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899C2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0899C2E4u) goto L_0899C2E4;
    return;
L_0899C2E4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C2F4u) goto L_0899C2F4;
    return;
L_0899C2F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899C304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0899C304u) goto L_0899C304;
    return;
L_0899C304:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(82));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C314u) goto L_0899C314;
    return;
L_0899C314:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899C324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0899C324u) goto L_0899C324;
    return;
L_0899C324:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(83));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C334u) goto L_0899C334;
    return;
L_0899C334:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899C344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0899C344u) goto L_0899C344;
    return;
L_0899C344:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C354u) goto L_0899C354;
    return;
L_0899C354:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20764));
    ctx.set_gpr(31, 0x0899C36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C36Cu) goto L_0899C36C;
    return;
L_0899C36C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18648));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(85));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C388u) goto L_0899C388;
    return;
L_0899C388:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20760));
    ctx.set_gpr(31, 0x0899C3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C3A0u) goto L_0899C3A0;
    return;
L_0899C3A0:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14292));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(86));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C3BCu) goto L_0899C3BC;
    return;
L_0899C3BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20756));
    ctx.set_gpr(31, 0x0899C3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C3D4u) goto L_0899C3D4;
    return;
L_0899C3D4:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14200));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C3F0u) goto L_0899C3F0;
    return;
L_0899C3F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32500)));
    ctx.set_gpr(31, 0x0899C400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0899C400u) goto L_0899C400;
    return;
L_0899C400:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(90));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C410u) goto L_0899C410;
    return;
L_0899C410:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0899C428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 200u, 0x089FD1A4u>(ctx, &aot_mem) && ctx.pc == 0x0899C428u) goto L_0899C428;
    return;
L_0899C428:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(91));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C438u) goto L_0899C438;
    return;
L_0899C438:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0899C450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 200u, 0x089FD1A4u>(ctx, &aot_mem) && ctx.pc == 0x0899C450u) goto L_0899C450;
    return;
L_0899C450:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C460u) goto L_0899C460;
    return;
L_0899C460:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x0899C47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C47Cu) goto L_0899C47C;
    return;
L_0899C47C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(93));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C48Cu) goto L_0899C48C;
    return;
L_0899C48C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899C4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C4A8u) goto L_0899C4A8;
    return;
L_0899C4A8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C4B8u) goto L_0899C4B8;
    return;
L_0899C4B8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20752));
    ctx.set_gpr(31, 0x0899C4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C4D0u) goto L_0899C4D0;
    return;
L_0899C4D0:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18924));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(97));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C4ECu) goto L_0899C4EC;
    return;
L_0899C4EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20748));
    ctx.set_gpr(31, 0x0899C504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C504u) goto L_0899C504;
    return;
L_0899C504:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18924));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(98));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C520u) goto L_0899C520;
    return;
L_0899C520:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899C52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 560u, 0x08A734D8u>(ctx, &aot_mem) && ctx.pc == 0x0899C52Cu) goto L_0899C52C;
    return;
L_0899C52C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(99));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C540u) goto L_0899C540;
    return;
L_0899C540:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899C54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 560u, 0x08A734D8u>(ctx, &aot_mem) && ctx.pc == 0x0899C54Cu) goto L_0899C54C;
    return;
L_0899C54C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C560u) goto L_0899C560;
    return;
L_0899C560:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899C56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 560u, 0x08A734D8u>(ctx, &aot_mem) && ctx.pc == 0x0899C56Cu) goto L_0899C56C;
    return;
L_0899C56C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(101));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C580u) goto L_0899C580;
    return;
L_0899C580:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899C58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 560u, 0x08A734D8u>(ctx, &aot_mem) && ctx.pc == 0x0899C58Cu) goto L_0899C58C;
    return;
L_0899C58C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(102));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C5A0u) goto L_0899C5A0;
    return;
L_0899C5A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899C5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 344u, 0x089F28B4u>(ctx, &aot_mem) && ctx.pc == 0x0899C5ACu) goto L_0899C5AC;
    return;
L_0899C5AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C5C0u) goto L_0899C5C0;
    return;
L_0899C5C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899C5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 105u, 0x08A709ECu>(ctx, &aot_mem) && ctx.pc == 0x0899C5CCu) goto L_0899C5CC;
    return;
L_0899C5CC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(106));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C5E0u) goto L_0899C5E0;
    return;
L_0899C5E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20744));
    ctx.set_gpr(31, 0x0899C5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C5F8u) goto L_0899C5F8;
    return;
L_0899C5F8:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18832));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C614u) goto L_0899C614;
    return;
L_0899C614:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899C628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x0899C628u) goto L_0899C628;
    return;
L_0899C628:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C63Cu) goto L_0899C63C;
    return;
L_0899C63C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(109));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C650u) goto L_0899C650;
    return;
L_0899C650:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(110));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C66Cu) goto L_0899C66C;
    return;
L_0899C66C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20740));
    ctx.set_gpr(31, 0x0899C684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C684u) goto L_0899C684;
    return;
L_0899C684:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14108));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(111));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C6A0u) goto L_0899C6A0;
    return;
L_0899C6A0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C6B4u) goto L_0899C6B4;
    return;
L_0899C6B4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899C6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 590u, 0x089F73A0u>(ctx, &aot_mem) && ctx.pc == 0x0899C6C0u) goto L_0899C6C0;
    return;
L_0899C6C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(113));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C6DCu) goto L_0899C6DC;
    return;
L_0899C6DC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(114));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C6F0u) goto L_0899C6F0;
    return;
L_0899C6F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0899C700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x0899C700u) goto L_0899C700;
    return;
L_0899C700:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(115));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C710u) goto L_0899C710;
    return;
L_0899C710:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20736));
    ctx.set_gpr(31, 0x0899C728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C728u) goto L_0899C728;
    return;
L_0899C728:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14016));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C744u) goto L_0899C744;
    return;
L_0899C744:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32496)));
    ctx.set_gpr(31, 0x0899C754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0899C754u) goto L_0899C754;
    return;
L_0899C754:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(117));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C764u) goto L_0899C764;
    return;
L_0899C764:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899C774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0899C774u) goto L_0899C774;
    return;
L_0899C774:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(119));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C784u) goto L_0899C784;
    return;
L_0899C784:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20732));
    ctx.set_gpr(31, 0x0899C79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0899C79Cu) goto L_0899C79C;
    return;
L_0899C79C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13924));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C7BCu) goto L_0899C7BC;
    return;
L_0899C7BC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899C7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C7D0u) goto L_0899C7D0;
    return;
L_0899C7D0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22292));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21792));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-21292));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899C7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C7FCu) goto L_0899C7FC;
    return;
L_0899C7FC:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14784));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-31612)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C82C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31108)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899C870;
      }
      goto L_0899C844;
    }
L_0899C844:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20508));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20548));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20528));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0899C868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0899C868u) goto L_0899C868;
    return;
L_0899C868:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31108), ctx.gpr[2]);
    goto L_0899C870;
L_0899C870:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31108)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C888:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31104)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899C8CC;
      }
      goto L_0899C8A0;
    }
L_0899C8A0:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20380));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20428));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20404));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0899C8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0899C8C4u) goto L_0899C8C4;
    return;
L_0899C8C4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31104), ctx.gpr[2]);
    goto L_0899C8CC;
L_0899C8CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31104)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C8E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31100)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899C928;
      }
      goto L_0899C8FC;
    }
L_0899C8FC:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20268));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20284));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20276));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0899C920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0899C920u) goto L_0899C920;
    return;
L_0899C920:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31100), ctx.gpr[2]);
    goto L_0899C928;
L_0899C928:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31100)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C940:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31096)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899C984;
      }
      goto L_0899C958;
    }
L_0899C958:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20140));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20164));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20152));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0899C97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0899C97Cu) goto L_0899C97C;
    return;
L_0899C97C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31096), ctx.gpr[2]);
    goto L_0899C984;
L_0899C984:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31096)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C99C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31092)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899C9E0;
      }
      goto L_0899C9B4;
    }
L_0899C9B4:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20012));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20028));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20020));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0899C9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0899C9D8u) goto L_0899C9D8;
    return;
L_0899C9D8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31092), ctx.gpr[2]);
    goto L_0899C9E0;
L_0899C9E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31092)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C9F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31088)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899CA24;
      }
      goto L_0899CA10;
    }
L_0899CA10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899CA2C;
      }
      goto L_0899CA24;
    }
L_0899CA24:
    ctx.set_gpr(31, 0x0899CA2Cu);
    // nop
    goto L_0899CAF0;
L_0899CA2C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31088)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CA44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899CA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899CA5Cu) goto L_0899CA5C;
    return;
L_0899CA5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899CA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899CA80u) goto L_0899CA80;
    return;
L_0899CA80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26872));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0899CAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CAA4u) goto L_0899CAA4;
    return;
L_0899CAA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0899CAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CAB0u) goto L_0899CAB0;
    return;
L_0899CAB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x0899CABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CABCu) goto L_0899CABC;
    return;
L_0899CABC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0899CAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x0899CAD8u) goto L_0899CAD8;
    return;
L_0899CAD8:
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
L_0899CAF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13544));
    ctx.set_gpr(31, 0x0899CB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899CB08u) goto L_0899CB08;
    return;
L_0899CB08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CB18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899CB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899CB28u) goto L_0899CB28;
    return;
L_0899CB28:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13412));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31088));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8484));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-13428));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8060));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-19972));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-13756));
    ctx.set_gpr(31, 0x0899CB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899CB7Cu) goto L_0899CB7C;
    return;
L_0899CB7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CB8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32724)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CB9C:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8352));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-31088)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CBB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31084)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899CBE4;
      }
      goto L_0899CBD0;
    }
L_0899CBD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899CBEC;
      }
      goto L_0899CBE4;
    }
L_0899CBE4:
    ctx.set_gpr(31, 0x0899CBECu);
    // nop
    goto L_0899CCB4;
L_0899CBEC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31084)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CC04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899CC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899CC1Cu) goto L_0899CC1C;
    return;
L_0899CC1C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21868));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    ctx.set_gpr(31, 0x0899CC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899CC3Cu) goto L_0899CC3C;
    return;
L_0899CC3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21868));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899CC68;
      }
      goto L_0899CC60;
    }
L_0899CC60:
    ctx.set_gpr(31, 0x0899CC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899CC68u) goto L_0899CC68;
    return;
L_0899CC68:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26760));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0899CC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CC80u) goto L_0899CC80;
    return;
L_0899CC80:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0899CC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x0899CC9Cu) goto L_0899CC9C;
    return;
L_0899CC9C:
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
L_0899CCB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13092));
    ctx.set_gpr(31, 0x0899CCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899CCCCu) goto L_0899CCCC;
    return;
L_0899CCCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CCDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899CCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899CCECu) goto L_0899CCEC;
    return;
L_0899CCEC:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12944));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12460));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19952));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31084));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9700));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-12960));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-9160));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-19944));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(136));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-13308));
    ctx.set_gpr(31, 0x0899CD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899CD50u) goto L_0899CD50;
    return;
L_0899CD50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CD60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32688)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CD70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31084)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899CD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899CD98u) goto L_0899CD98;
    return;
L_0899CD98:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19924));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x0899CDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899CDB4u) goto L_0899CDB4;
    return;
L_0899CDB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899CDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CDC4u) goto L_0899CDC4;
    return;
L_0899CDC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899CDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CDDCu) goto L_0899CDDC;
    return;
L_0899CDDC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899CDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x0899CDE8u) goto L_0899CDE8;
    return;
L_0899CDE8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899CDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CDFCu) goto L_0899CDFC;
    return;
L_0899CDFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899CE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CE14u) goto L_0899CE14;
    return;
L_0899CE14:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0899CE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0899CE28u) goto L_0899CE28;
    return;
L_0899CE28:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899CE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CE3Cu) goto L_0899CE3C;
    return;
L_0899CE3C:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0899CE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 200u, 0x089FD1A4u>(ctx, &aot_mem) && ctx.pc == 0x0899CE58u) goto L_0899CE58;
    return;
L_0899CE58:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899CE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CE68u) goto L_0899CE68;
    return;
L_0899CE68:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0899CE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 200u, 0x089FD1A4u>(ctx, &aot_mem) && ctx.pc == 0x0899CE80u) goto L_0899CE80;
    return;
L_0899CE80:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899CE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CE90u) goto L_0899CE90;
    return;
L_0899CE90:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x0899CEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CEB0u) goto L_0899CEB0;
    return;
L_0899CEB0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899CEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CEC0u) goto L_0899CEC0;
    return;
L_0899CEC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899CEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CEDCu) goto L_0899CEDC;
    return;
L_0899CEDC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899CEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CEECu) goto L_0899CEEC;
    return;
L_0899CEEC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899CF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CF00u) goto L_0899CF00;
    return;
L_0899CF00:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899CF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 344u, 0x089F28B4u>(ctx, &aot_mem) && ctx.pc == 0x0899CF0Cu) goto L_0899CF0C;
    return;
L_0899CF0C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19624));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19552));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-19480));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899CF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CF38u) goto L_0899CF38;
    return;
L_0899CF38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899CF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 632u, 0x089D6F30u>(ctx, &aot_mem) && ctx.pc == 0x0899CF64u) goto L_0899CF64;
    return;
L_0899CF64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CF74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31008)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899CFB4;
      }
      goto L_0899CF8C;
    }
L_0899CF8C:
    ctx.set_gpr(31, 0x0899CF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0899CF94u) goto L_0899CF94;
    return;
L_0899CF94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899CFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899CFA0u) goto L_0899CFA0;
    return;
L_0899CFA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899CFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0899CFACu) goto L_0899CFAC;
    return;
L_0899CFAC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-31008), ctx.gpr[2]);
    goto L_0899CFB4;
L_0899CFB4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31008)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CFCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31008)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899CFF8;
      }
      goto L_0899CFE4;
    }
L_0899CFE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899D000;
      }
      goto L_0899CFF8;
    }
L_0899CFF8:
    ctx.set_gpr(31, 0x0899D000u);
    // nop
    goto L_0899D088;
L_0899D000:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31008)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D018:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899D030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899D030u) goto L_0899D030;
    return;
L_0899D030:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22084));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899D04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899D04Cu) goto L_0899D04C;
    return;
L_0899D04C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26976));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0899D070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D070u) goto L_0899D070;
    return;
L_0899D070:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D088:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12112));
    ctx.set_gpr(31, 0x0899D0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899D0A0u) goto L_0899D0A0;
    return;
L_0899D0A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D0B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899D0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899D0C0u) goto L_0899D0C0;
    return;
L_0899D0C0:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31008));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-7484));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-11996));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-6908));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-19408));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-12264));
    ctx.set_gpr(31, 0x0899D114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899D114u) goto L_0899D114;
    return;
L_0899D114:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D124:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32744)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31008)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899D15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899D15Cu) goto L_0899D15C;
    return;
L_0899D15C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19388));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x0899D178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899D178u) goto L_0899D178;
    return;
L_0899D178:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899D188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D188u) goto L_0899D188;
    return;
L_0899D188:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899D1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D1A0u) goto L_0899D1A0;
    return;
L_0899D1A0:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899D1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0899D1B4u) goto L_0899D1B4;
    return;
L_0899D1B4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899D1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D1C4u) goto L_0899D1C4;
    return;
L_0899D1C4:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899D1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0899D1D8u) goto L_0899D1D8;
    return;
L_0899D1D8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899D1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D1E8u) goto L_0899D1E8;
    return;
L_0899D1E8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899D1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x0899D1F4u) goto L_0899D1F4;
    return;
L_0899D1F4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899D208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D208u) goto L_0899D208;
    return;
L_0899D208:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899D214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x0899D214u) goto L_0899D214;
    return;
L_0899D214:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19320));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19276));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-19232));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899D240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D240u) goto L_0899D240;
    return;
L_0899D240:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7356));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-31008)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
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
L_0899D270:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30960)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D29C;
      }
      goto L_0899D288;
    }
L_0899D288:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899D2A4;
      }
      goto L_0899D29C;
    }
L_0899D29C:
    ctx.set_gpr(31, 0x0899D2A4u);
    // nop
    goto L_0899D5B8;
L_0899D2A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30960)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D2BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899D2D4u);
    // nop
    goto L_0899D54C;
L_0899D2D4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22348));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899D2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899D2E8u) goto L_0899D2E8;
    return;
L_0899D2E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0899D310u);
    // nop
    goto L_0899D328;
L_0899D310:
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
L_0899D328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D530;
      }
      goto L_0899D348;
    }
L_0899D348:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2304));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D374;
      }
      goto L_0899D360;
    }
L_0899D360:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D374;
      }
      goto L_0899D36C;
    }
L_0899D36C:
    ctx.set_gpr(31, 0x0899D374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899D374u) goto L_0899D374;
    return;
L_0899D374:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D3D8;
      }
      goto L_0899D380;
    }
L_0899D380:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D3AC;
      }
      goto L_0899D390;
    }
L_0899D390:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D3AC;
      }
      goto L_0899D3A8;
    }
L_0899D3A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0899D3AC;
L_0899D3AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D3D8;
      }
      goto L_0899D3B4;
    }
L_0899D3B4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899D3D8;
      }
      goto L_0899D3CC;
    }
L_0899D3CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899D3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D3D8u) goto L_0899D3D8;
    return;
L_0899D3D8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D3F8;
      }
      goto L_0899D3E4;
    }
L_0899D3E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D3F8;
      }
      goto L_0899D3F0;
    }
L_0899D3F0:
    ctx.set_gpr(31, 0x0899D3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899D3F8u) goto L_0899D3F8;
    return;
L_0899D3F8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D418;
      }
      goto L_0899D404;
    }
L_0899D404:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D418;
      }
      goto L_0899D410;
    }
L_0899D410:
    ctx.set_gpr(31, 0x0899D418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899D418u) goto L_0899D418;
    return;
L_0899D418:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D438;
      }
      goto L_0899D424;
    }
L_0899D424:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D438;
      }
      goto L_0899D430;
    }
L_0899D430:
    ctx.set_gpr(31, 0x0899D438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899D438u) goto L_0899D438;
    return;
L_0899D438:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D458;
      }
      goto L_0899D444;
    }
L_0899D444:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D458;
      }
      goto L_0899D450;
    }
L_0899D450:
    ctx.set_gpr(31, 0x0899D458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899D458u) goto L_0899D458;
    return;
L_0899D458:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D478;
      }
      goto L_0899D464;
    }
L_0899D464:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D478;
      }
      goto L_0899D470;
    }
L_0899D470:
    ctx.set_gpr(31, 0x0899D478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899D478u) goto L_0899D478;
    return;
L_0899D478:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D498;
      }
      goto L_0899D484;
    }
L_0899D484:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D498;
      }
      goto L_0899D490;
    }
L_0899D490:
    ctx.set_gpr(31, 0x0899D498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899D498u) goto L_0899D498;
    return;
L_0899D498:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D4B8;
      }
      goto L_0899D4A4;
    }
L_0899D4A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D4B8;
      }
      goto L_0899D4B0;
    }
L_0899D4B0:
    ctx.set_gpr(31, 0x0899D4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899D4B8u) goto L_0899D4B8;
    return;
L_0899D4B8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D4D8;
      }
      goto L_0899D4C4;
    }
L_0899D4C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D4D8;
      }
      goto L_0899D4D0;
    }
L_0899D4D0:
    ctx.set_gpr(31, 0x0899D4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899D4D8u) goto L_0899D4D8;
    return;
L_0899D4D8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D4F8;
      }
      goto L_0899D4E4;
    }
L_0899D4E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D4F8;
      }
      goto L_0899D4F0;
    }
L_0899D4F0:
    ctx.set_gpr(31, 0x0899D4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899D4F8u) goto L_0899D4F8;
    return;
L_0899D4F8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D518;
      }
      goto L_0899D504;
    }
L_0899D504:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D518;
      }
      goto L_0899D510;
    }
L_0899D510:
    ctx.set_gpr(31, 0x0899D518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899D518u) goto L_0899D518;
    return;
L_0899D518:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0899D530;
      }
      goto L_0899D524;
    }
L_0899D524:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899D530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x0899D530u) goto L_0899D530;
    return;
L_0899D530:
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
L_0899D54C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0899D564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899D564u) goto L_0899D564;
    return;
L_0899D564:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2304));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
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
L_0899D5B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10784));
    ctx.set_gpr(31, 0x0899D5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899D5D0u) goto L_0899D5D0;
    return;
L_0899D5D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D5E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899D5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899D5F0u) goto L_0899D5F0;
    return;
L_0899D5F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30960));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5372));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-10676));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5012));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-19188));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(72));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-11588));
    ctx.set_gpr(31, 0x0899D63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899D63Cu) goto L_0899D63C;
    return;
L_0899D63C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D64C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32736)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D65C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30956)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D688;
      }
      goto L_0899D674;
    }
L_0899D674:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899D690;
      }
      goto L_0899D688;
    }
L_0899D688:
    ctx.set_gpr(31, 0x0899D690u);
    // nop
    goto L_0899D7D0;
L_0899D690:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30956)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D6A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-448));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899D6C4u);
    // nop
    goto L_0899D78C;
L_0899D6C4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28076));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0899D6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0899D6E0u) goto L_0899D6E0;
    return;
L_0899D6E0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x0899D6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0899D6ECu) goto L_0899D6EC;
    return;
L_0899D6EC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0899D6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0899D6F8u) goto L_0899D6F8;
    return;
L_0899D6F8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x0899D704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0899D704u) goto L_0899D704;
    return;
L_0899D704:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(296));
    ctx.set_gpr(31, 0x0899D710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0899D710u) goto L_0899D710;
    return;
L_0899D710:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(392), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21660));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899D728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899D728u) goto L_0899D728;
    return;
L_0899D728:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28076));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.set_gpr(31, 0x0899D74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D74Cu) goto L_0899D74C;
    return;
L_0899D74C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0899D758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D758u) goto L_0899D758;
    return;
L_0899D758:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0899D774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 36u, 0x089902BCu>(ctx, &aot_mem) && ctx.pc == 0x0899D774u) goto L_0899D774;
    return;
L_0899D774:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D78C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0899D7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899D7A4u) goto L_0899D7A4;
    return;
L_0899D7A4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1196));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
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
L_0899D7D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10248));
    ctx.set_gpr(31, 0x0899D7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899D7E8u) goto L_0899D7E8;
    return;
L_0899D7E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D7F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899D808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899D808u) goto L_0899D808;
    return;
L_0899D808:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10108));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19168));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30956));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(900));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-10124));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1704));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-19160));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(424));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-10584));
    ctx.set_gpr(31, 0x0899D864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899D864u) goto L_0899D864;
    return;
L_0899D864:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D874:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32636)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D884:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30956)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899D8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899D8ACu) goto L_0899D8AC;
    return;
L_0899D8AC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19140));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0899D8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899D8C8u) goto L_0899D8C8;
    return;
L_0899D8C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899D8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D8D8u) goto L_0899D8D8;
    return;
L_0899D8D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899D8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 645u, 0x0899B6F4u>(ctx, &aot_mem) && ctx.pc == 0x0899D8E4u) goto L_0899D8E4;
    return;
L_0899D8E4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899D8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D8FCu) goto L_0899D8FC;
    return;
L_0899D8FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899D908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 559u, 0x089F3B10u>(ctx, &aot_mem) && ctx.pc == 0x0899D908u) goto L_0899D908;
    return;
L_0899D908:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899D930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D930u) goto L_0899D930;
    return;
L_0899D930:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899D940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0899D940u) goto L_0899D940;
    return;
L_0899D940:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899D950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D950u) goto L_0899D950;
    return;
L_0899D950:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899D964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D964u) goto L_0899D964;
    return;
L_0899D964:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0899D978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0899D978u) goto L_0899D978;
    return;
L_0899D978:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899D98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D98Cu) goto L_0899D98C;
    return;
L_0899D98C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19044));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19020));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-18996));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899D9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D9B8u) goto L_0899D9B8;
    return;
L_0899D9B8:
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
L_0899D9D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30928)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DA00;
      }
      goto L_0899D9EC;
    }
L_0899D9EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899DA08;
      }
      goto L_0899DA00;
    }
L_0899DA00:
    ctx.set_gpr(31, 0x0899DA08u);
    // nop
    goto L_0899DA8C;
L_0899DA08:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30928)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DA20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899DA38u);
    // nop
    goto L_0899D78C;
L_0899DA38:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22488));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899DA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899DA4Cu) goto L_0899DA4C;
    return;
L_0899DA4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0899DA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 36u, 0x089902BCu>(ctx, &aot_mem) && ctx.pc == 0x0899DA74u) goto L_0899DA74;
    return;
L_0899DA74:
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
L_0899DA8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9548));
    ctx.set_gpr(31, 0x0899DAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899DAA4u) goto L_0899DAA4;
    return;
L_0899DAA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DAB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899DAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899DAC4u) goto L_0899DAC4;
    return;
L_0899DAC4:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9408));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18972));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30928));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7228));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9424));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(7400));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18964));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-9696));
    ctx.set_gpr(31, 0x0899DB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899DB20u) goto L_0899DB20;
    return;
L_0899DB20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DB30:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32316)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DB40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30928)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899DB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899DB68u) goto L_0899DB68;
    return;
L_0899DB68:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18940));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899DB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899DB84u) goto L_0899DB84;
    return;
L_0899DB84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899DB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899DB94u) goto L_0899DB94;
    return;
L_0899DB94:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899DBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 645u, 0x0899B6F4u>(ctx, &aot_mem) && ctx.pc == 0x0899DBA0u) goto L_0899DBA0;
    return;
L_0899DBA0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18936));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18932));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-18928));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899DBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899DBD0u) goto L_0899DBD0;
    return;
L_0899DBD0:
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
L_0899DBEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30920)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899DC30;
      }
      goto L_0899DC04;
    }
L_0899DC04:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18268));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18364));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18316));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0899DC28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0899DC28u) goto L_0899DC28;
    return;
L_0899DC28:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30920), ctx.gpr[2]);
    goto L_0899DC30;
L_0899DC30:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30920)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DC48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30916)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DC74;
      }
      goto L_0899DC60;
    }
L_0899DC60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899DC7C;
      }
      goto L_0899DC74;
    }
L_0899DC74:
    ctx.set_gpr(31, 0x0899DC7Cu);
    // nop
    goto L_0899DD00;
L_0899DC7C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30916)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DC94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0899DCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899DCACu) goto L_0899DCAC;
    return;
L_0899DCAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899DCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899DCC4u) goto L_0899DCC4;
    return;
L_0899DCC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0899DCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0899DCE8u) goto L_0899DCE8;
    return;
L_0899DCE8:
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
L_0899DD00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8920));
    ctx.set_gpr(31, 0x0899DD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899DD18u) goto L_0899DD18;
    return;
L_0899DD18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DD28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899DD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899DD38u) goto L_0899DD38;
    return;
L_0899DD38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30916));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8400));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8812));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8864));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18244));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-9068));
    ctx.set_gpr(31, 0x0899DD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899DD84u) goto L_0899DD84;
    return;
L_0899DD84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DD94:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32292)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DDA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30912)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DDD0;
      }
      goto L_0899DDBC;
    }
L_0899DDBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899DDD8;
      }
      goto L_0899DDD0;
    }
L_0899DDD0:
    ctx.set_gpr(31, 0x0899DDD8u);
    // nop
    goto L_0899DE34;
L_0899DDD8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30912)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DDF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899DE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899DE04u) goto L_0899DE04;
    return;
L_0899DE04:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32668));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899DE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899DE18u) goto L_0899DE18;
    return;
L_0899DE18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DE34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8612));
    ctx.set_gpr(31, 0x0899DE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899DE4Cu) goto L_0899DE4C;
    return;
L_0899DE4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DE5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899DE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899DE6Cu) goto L_0899DE6C;
    return;
L_0899DE6C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30912));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8504));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18228));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8720));
    ctx.set_gpr(31, 0x0899DEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899DEB8u) goto L_0899DEB8;
    return;
L_0899DEB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DEC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899DED8u);
    // nop
    goto L_0899DDA4;
L_0899DED8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DEE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30908)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DF14;
      }
      goto L_0899DF00;
    }
L_0899DF00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899DF1C;
      }
      goto L_0899DF14;
    }
L_0899DF14:
    ctx.set_gpr(31, 0x0899DF1Cu);
    // nop
    goto L_0899DF78;
L_0899DF1C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30908)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DF34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899DF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899DF48u) goto L_0899DF48;
    return;
L_0899DF48:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22620));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899DF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899DF5Cu) goto L_0899DF5C;
    return;
L_0899DF5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DF78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8288));
    ctx.set_gpr(31, 0x0899DF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899DF90u) goto L_0899DF90;
    return;
L_0899DF90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DFA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899DFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899DFB0u) goto L_0899DFB0;
    return;
L_0899DFB0:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8156));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30908));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9328));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8172));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9516));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18212));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8396));
    ctx.set_gpr(31, 0x0899E004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899E004u) goto L_0899E004;
    return;
L_0899E004:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E014:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32264)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E024:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9440));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-30908)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E040:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30904)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E06C;
      }
      goto L_0899E058;
    }
L_0899E058:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E074;
      }
      goto L_0899E06C;
    }
L_0899E06C:
    ctx.set_gpr(31, 0x0899E074u);
    // nop
    goto L_0899E1E4;
L_0899E074:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30904)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E08C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0899E0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899E0A4u) goto L_0899E0A4;
    return;
L_0899E0A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22772));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899E0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899E0C0u) goto L_0899E0C0;
    return;
L_0899E0C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32692));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0899E0E8u);
    // nop
    goto L_0899E100;
L_0899E0E8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E100:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E1C8;
      }
      goto L_0899E120;
    }
L_0899E120:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31732));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(88));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E190;
      }
      goto L_0899E138;
    }
L_0899E138:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E164;
      }
      goto L_0899E148;
    }
L_0899E148:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E164;
      }
      goto L_0899E160;
    }
L_0899E160:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0899E164;
L_0899E164:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E190;
      }
      goto L_0899E16C;
    }
L_0899E16C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E190;
      }
      goto L_0899E184;
    }
L_0899E184:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899E190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E190u) goto L_0899E190;
    return;
L_0899E190:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E1B0;
      }
      goto L_0899E19C;
    }
L_0899E19C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E1B0;
      }
      goto L_0899E1A8;
    }
L_0899E1A8:
    ctx.set_gpr(31, 0x0899E1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899E1B0u) goto L_0899E1B0;
    return;
L_0899E1B0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0899E1C8;
      }
      goto L_0899E1BC;
    }
L_0899E1BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899E1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x0899E1C8u) goto L_0899E1C8;
    return;
L_0899E1C8:
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
L_0899E1E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7668));
    ctx.set_gpr(31, 0x0899E1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899E1FCu) goto L_0899E1FC;
    return;
L_0899E1FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E20C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899E21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899E21Cu) goto L_0899E21C;
    return;
L_0899E21C:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7536));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30904));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23696));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-7552));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(23392));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18192));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8052));
    ctx.set_gpr(31, 0x0899E270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899E270u) goto L_0899E270;
    return;
L_0899E270:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E280:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32028)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E290:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22812));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-30904)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E2AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30900)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E2D8;
      }
      goto L_0899E2C4;
    }
L_0899E2C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E2E0;
      }
      goto L_0899E2D8;
    }
L_0899E2D8:
    ctx.set_gpr(31, 0x0899E2E0u);
    // nop
    goto L_0899E364;
L_0899E2E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30900)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E2F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0899E310u);
    // nop
    goto L_0899D78C;
L_0899E310:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23196));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899E324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899E324u) goto L_0899E324;
    return;
L_0899E324:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0899E34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 36u, 0x089902BCu>(ctx, &aot_mem) && ctx.pc == 0x0899E34Cu) goto L_0899E34C;
    return;
L_0899E34C:
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
L_0899E364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7284));
    ctx.set_gpr(31, 0x0899E37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899E37Cu) goto L_0899E37C;
    return;
L_0899E37C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E38C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899E39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899E39Cu) goto L_0899E39C;
    return;
L_0899E39C:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18180));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30900));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30556));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-7160));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-30384));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18172));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7432));
    ctx.set_gpr(31, 0x0899E3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899E3F8u) goto L_0899E3F8;
    return;
L_0899E3F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E408:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31856)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30900)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899E440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899E440u) goto L_0899E440;
    return;
L_0899E440:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18156));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899E45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899E45Cu) goto L_0899E45C;
    return;
L_0899E45C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899E46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E46Cu) goto L_0899E46C;
    return;
L_0899E46C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899E478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 645u, 0x0899B6F4u>(ctx, &aot_mem) && ctx.pc == 0x0899E478u) goto L_0899E478;
    return;
L_0899E478:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18152));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18148));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-18144));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899E4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E4A8u) goto L_0899E4A8;
    return;
L_0899E4A8:
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
L_0899E4C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30892)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E4F0;
      }
      goto L_0899E4DC;
    }
L_0899E4DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E4F8;
      }
      goto L_0899E4F0;
    }
L_0899E4F0:
    ctx.set_gpr(31, 0x0899E4F8u);
    // nop
    goto L_0899E57C;
L_0899E4F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30892)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E510:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899E528u);
    // nop
    goto L_0899D78C;
L_0899E528:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22948));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899E53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899E53Cu) goto L_0899E53C;
    return;
L_0899E53C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0899E564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 36u, 0x089902BCu>(ctx, &aot_mem) && ctx.pc == 0x0899E564u) goto L_0899E564;
    return;
L_0899E564:
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
L_0899E57C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6748));
    ctx.set_gpr(31, 0x0899E594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899E594u) goto L_0899E594;
    return;
L_0899E594:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E5A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899E5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899E5B4u) goto L_0899E5B4;
    return;
L_0899E5B4:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6608));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18140));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30892));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30236));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6624));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29944));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18132));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-6896));
    ctx.set_gpr(31, 0x0899E610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899E610u) goto L_0899E610;
    return;
L_0899E610:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E620:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31852)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E630:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30892)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899E658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899E658u) goto L_0899E658;
    return;
L_0899E658:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18116));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0899E674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899E674u) goto L_0899E674;
    return;
L_0899E674:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899E684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E684u) goto L_0899E684;
    return;
L_0899E684:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899E690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 645u, 0x0899B6F4u>(ctx, &aot_mem) && ctx.pc == 0x0899E690u) goto L_0899E690;
    return;
L_0899E690:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899E6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E6A8u) goto L_0899E6A8;
    return;
L_0899E6A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899E6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x0899E6B8u) goto L_0899E6B8;
    return;
L_0899E6B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18092));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18084));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-18076));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899E6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E6E0u) goto L_0899E6E0;
    return;
L_0899E6E0:
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
L_0899E6FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30880)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E728;
      }
      goto L_0899E714;
    }
L_0899E714:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E730;
      }
      goto L_0899E728;
    }
L_0899E728:
    ctx.set_gpr(31, 0x0899E730u);
    // nop
    goto L_0899E7B4;
L_0899E730:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30880)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E748:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0899E760u);
    // nop
    goto L_0899D78C;
L_0899E760:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23072));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899E774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899E774u) goto L_0899E774;
    return;
L_0899E774:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0899E79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 36u, 0x089902BCu>(ctx, &aot_mem) && ctx.pc == 0x0899E79Cu) goto L_0899E79C;
    return;
L_0899E79C:
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
L_0899E7B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6180));
    ctx.set_gpr(31, 0x0899E7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899E7CCu) goto L_0899E7CC;
    return;
L_0899E7CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E7DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899E7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899E7ECu) goto L_0899E7EC;
    return;
L_0899E7EC:
    ctx.set_gpr(2, 2202u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18068));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30880));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26496));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6056));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-26144));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18060));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-6328));
    ctx.set_gpr(31, 0x0899E848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899E848u) goto L_0899E848;
    return;
L_0899E848:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E858:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31784)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30880)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899E890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899E890u) goto L_0899E890;
    return;
L_0899E890:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18036));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899E8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0899E8ACu) goto L_0899E8AC;
    return;
L_0899E8AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899E8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E8BCu) goto L_0899E8BC;
    return;
L_0899E8BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899E8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 645u, 0x0899B6F4u>(ctx, &aot_mem) && ctx.pc == 0x0899E8C8u) goto L_0899E8C8;
    return;
L_0899E8C8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18032));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18028));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-18024));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899E8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E8F8u) goto L_0899E8F8;
    return;
L_0899E8F8:
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
L_0899E914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30872)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E940;
      }
      goto L_0899E92C;
    }
L_0899E92C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E948;
      }
      goto L_0899E940;
    }
L_0899E940:
    ctx.set_gpr(31, 0x0899E948u);
    // nop
    goto L_0899E9DC;
L_0899E948:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30872)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E960:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899E978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0899E978u) goto L_0899E978;
    return;
L_0899E978:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32508));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0899E99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0899E99Cu) goto L_0899E99C;
    return;
L_0899E99C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32600));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0899E9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 120u, 0x088E49A0u>(ctx, &aot_mem) && ctx.pc == 0x0899E9C4u) goto L_0899E9C4;
    return;
L_0899E9C4:
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
L_0899E9DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2202u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5628));
    ctx.set_gpr(31, 0x0899E9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0899E9F4u) goto L_0899E9F4;
    return;
L_0899E9F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EA04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899EA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0899EA14u) goto L_0899EA14;
    return;
L_0899EA14:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30872));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-25996));
    ctx.set_gpr(7, 2202u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5488));
    ctx.set_gpr(8, 2202u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5520));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18020));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, 2202u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-5792));
    ctx.set_gpr(31, 0x0899EA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0899EA60u) goto L_0899EA60;
    return;
L_0899EA60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EA70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899EA80u);
    // nop
    goto L_0899E914;
L_0899EA80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EA90:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31776)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EAA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-18000));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    goto L_0899EAD0;
L_0899EAD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0899EAD0;
      }
      goto L_0899EAF4;
    }
L_0899EAF4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EBD4;
      }
      goto L_0899EB00;
    }
L_0899EB00:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899EB24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899EB24u) goto L_0899EB24;
    return;
L_0899EB24:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17888));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899EB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0899EB3Cu) goto L_0899EB3C;
    return;
L_0899EB3C:
    ctx.set_gpr(31, 0x0899EB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 679u, 0x0898B054u>(ctx, &aot_mem) && ctx.pc == 0x0899EB44u) goto L_0899EB44;
    return;
L_0899EB44:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899EB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 387u, 0x08941BFCu>(ctx, &aot_mem) && ctx.pc == 0x0899EB58u) goto L_0899EB58;
    return;
L_0899EB58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0899EB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 617u, 0x089128D0u>(ctx, &aot_mem) && ctx.pc == 0x0899EB78u) goto L_0899EB78;
    return;
L_0899EB78:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EBA4;
      }
      goto L_0899EB88;
    }
L_0899EB88:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EBA4;
      }
      goto L_0899EBA0;
    }
L_0899EBA0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0899EBA4;
L_0899EBA4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EBD0;
      }
      goto L_0899EBAC;
    }
L_0899EBAC:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EBD0;
      }
      goto L_0899EBC4;
    }
L_0899EBC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899EBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EBD0u) goto L_0899EBD0;
    return;
L_0899EBD0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0899EBD4;
L_0899EBD4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EB00;
      }
      goto L_0899EBE0;
    }
L_0899EBE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EC00:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EC38;
      }
      goto L_0899EC0C;
    }
L_0899EC0C:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899EC34;
      }
      goto L_0899EC28;
    }
L_0899EC28:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EC48;
      }
      goto L_0899EC34;
    }
L_0899EC34:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_0899EC38;
L_0899EC38:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EC0C;
      }
      goto L_0899EC44;
    }
L_0899EC44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0899EC48;
L_0899EC48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EC50:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EC68;
      }
      goto L_0899EC5C;
    }
L_0899EC5C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EC7C;
      }
      goto L_0899EC68;
    }
L_0899EC68:
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    goto L_0899EC7C;
L_0899EC7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EC84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899EC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0899EC94u) goto L_0899EC94;
    return;
L_0899EC94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17884));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899ECACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 590u, 0x0895680Cu>(ctx, &aot_mem) && ctx.pc == 0x0899ECACu) goto L_0899ECAC;
    return;
L_0899ECAC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31804)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17884));
    ctx.set_gpr(31, 0x0899ECC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 246u, 0x089411E8u>(ctx, &aot_mem) && ctx.pc == 0x0899ECC4u) goto L_0899ECC4;
    return;
L_0899ECC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899ECD4:
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
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899ED40;
      }
      goto L_0899ED04;
    }
L_0899ED04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899ED40;
      }
      goto L_0899ED10;
    }
L_0899ED10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899ED40;
      }
      goto L_0899ED1C;
    }
L_0899ED1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899ED40;
      }
      goto L_0899ED28;
    }
L_0899ED28:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899ED34u);
    // nop
    goto L_0899F2C0;
L_0899ED34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EDDC;
      }
      goto L_0899ED40;
    }
L_0899ED40:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899ED58;
      }
      goto L_0899ED4C;
    }
L_0899ED4C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0899ED58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0899ED58u) goto L_0899ED58;
    return;
L_0899ED58:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0899ED78u);
    // nop
    goto L_0899EEFC;
L_0899ED78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0899ED9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x0894806Cu>(ctx, &aot_mem) && ctx.pc == 0x0899ED9Cu) goto L_0899ED9C;
    return;
L_0899ED9C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EDC4;
      }
      goto L_0899EDA8;
    }
L_0899EDA8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899EDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0899EDBCu) goto L_0899EDBC;
    return;
L_0899EDBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EDD8;
      }
      goto L_0899EDC4;
    }
L_0899EDC4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0899EDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0899EDD8u) goto L_0899EDD8;
    return;
L_0899EDD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0899EDDC;
L_0899EDDC:
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
L_0899EDFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899EE14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899EE14u) goto L_0899EE14;
    return;
L_0899EE14:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EE28:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0899EE9C;
      }
      goto L_0899EE3C;
    }
L_0899EE3C:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EE80;
      }
      goto L_0899EE4C;
    }
L_0899EE4C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EE70;
      }
      goto L_0899EE5C;
    }
L_0899EE5C:
    ctx.set_gpr(2, ctx.gpr[3] & 255u);
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EE74;
      }
      goto L_0899EE70;
    }
L_0899EE70:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    goto L_0899EE74;
L_0899EE74:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_0899EE80;
L_0899EE80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EE4C;
      }
      goto L_0899EE90;
    }
L_0899EE90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EEA8;
      }
      goto L_0899EE9C;
    }
L_0899EE9C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0899EEA8;
      }
      goto L_0899EEA8;
    }
L_0899EEA8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EEB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EEE4;
      }
      goto L_0899EECC;
    }
L_0899EECC:
    ctx.set_gpr(31, 0x0899EED4u);
    // nop
    goto L_0899EE28;
L_0899EED4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EEE8;
      }
      goto L_0899EEE4;
    }
L_0899EEE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0899EEE8;
L_0899EEE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EEFC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0899F01C;
      }
      goto L_0899EF0C;
    }
L_0899EF0C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899F00C;
      }
      goto L_0899EF14;
    }
L_0899EF14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899EFFC;
      }
      goto L_0899EF20;
    }
L_0899EF20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899EFEC;
      }
      goto L_0899EF2C;
    }
L_0899EF2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899EFDC;
      }
      goto L_0899EF38;
    }
L_0899EF38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899EFCC;
      }
      goto L_0899EF44;
    }
L_0899EF44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899EFBC;
      }
      goto L_0899EF50;
    }
L_0899EF50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899EFAC;
      }
      goto L_0899EF5C;
    }
L_0899EF5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899EF9C;
      }
      goto L_0899EF68;
    }
L_0899EF68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899EF90;
      }
      goto L_0899EF74;
    }
L_0899EF74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EF84;
      }
      goto L_0899EF7C;
    }
L_0899EF7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F02C;
      }
      goto L_0899EF84;
    }
L_0899EF84:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F044;
      }
      goto L_0899EF90;
    }
L_0899EF90:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F044;
      }
      goto L_0899EF9C;
    }
L_0899EF9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F044;
      }
      goto L_0899EFAC;
    }
L_0899EFAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F044;
      }
      goto L_0899EFBC;
    }
L_0899EFBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F044;
      }
      goto L_0899EFCC;
    }
L_0899EFCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F044;
      }
      goto L_0899EFDC;
    }
L_0899EFDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F044;
      }
      goto L_0899EFEC;
    }
L_0899EFEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F044;
      }
      goto L_0899EFFC;
    }
L_0899EFFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F044;
      }
      goto L_0899F00C;
    }
L_0899F00C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F044;
      }
      goto L_0899F01C;
    }
L_0899F01C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F044;
      }
      goto L_0899F02C;
    }
L_0899F02C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F054;
      }
      goto L_0899F044;
    }
L_0899F044:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0899F054;
L_0899F054:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F05C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0899F130;
      }
      goto L_0899F08C;
    }
L_0899F08C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F0A4;
      }
      goto L_0899F098;
    }
L_0899F098:
    ctx.set_gpr(31, 0x0899F0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0899F0A0u) goto L_0899F0A0;
    return;
L_0899F0A0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), 0u);
    goto L_0899F0A4;
L_0899F0A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(29)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F130;
      }
      goto L_0899F0D4;
    }
L_0899F0D4:
    ctx.set_gpr(31, 0x0899F0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 230u, 0x0893CEBCu>(ctx, &aot_mem) && ctx.pc == 0x0899F0DCu) goto L_0899F0DC;
    return;
L_0899F0DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899F0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899F0E8u) goto L_0899F0E8;
    return;
L_0899F0E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899F104u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899F104u) goto L_0899F104;
    return;
L_0899F104:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F12C;
      }
      goto L_0899F110;
    }
L_0899F110:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0899F124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0899F124u) goto L_0899F124;
    return;
L_0899F124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F130;
      }
      goto L_0899F12C;
    }
L_0899F12C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0899F130;
L_0899F130:
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
L_0899F154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F18C;
      }
      goto L_0899F170;
    }
L_0899F170:
    ctx.set_gpr(31, 0x0899F178u);
    // nop
    goto L_0899F1A4;
L_0899F178:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F190;
      }
      goto L_0899F18C;
    }
L_0899F18C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0899F190;
L_0899F190:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F1A4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0899F200;
      }
      goto L_0899F1B8;
    }
L_0899F1B8:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F1E4;
      }
      goto L_0899F1C8;
    }
L_0899F1C8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_0899F1E4;
L_0899F1E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F1C8;
      }
      goto L_0899F1F4;
    }
L_0899F1F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F20C;
      }
      goto L_0899F200;
    }
L_0899F200:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0899F20C;
      }
      goto L_0899F20C;
    }
L_0899F20C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F214:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F23C;
      }
      goto L_0899F230;
    }
L_0899F230:
    ctx.set_gpr(31, 0x0899F238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x0899F238u) goto L_0899F238;
    return;
L_0899F238:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_0899F23C;
L_0899F23C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F278;
      }
      goto L_0899F270;
    }
L_0899F270:
    ctx.set_gpr(31, 0x0899F278u);
    // nop
    goto L_0899F214;
L_0899F278:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899F288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x0899F288u) goto L_0899F288;
    return;
L_0899F288:
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
L_0899F2A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0899F2B0u);
    // nop
    goto L_0899F214;
L_0899F2B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F2C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0899F318;
      }
      goto L_0899F2E4;
    }
L_0899F2E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0899F300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 15u, 0x08948168u>(ctx, &aot_mem) && ctx.pc == 0x0899F300u) goto L_0899F300;
    return;
L_0899F300:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_0899F318;
L_0899F318:
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
L_0899F330:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899F358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 611u, 0x089AF338u>(ctx, &aot_mem) && ctx.pc == 0x0899F358u) goto L_0899F358;
    return;
L_0899F358:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F3B4;
      }
      goto L_0899F364;
    }
L_0899F364:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17872));
    ctx.set_gpr(31, 0x0899F378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0899F378u) goto L_0899F378;
    return;
L_0899F378:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F39C;
      }
      goto L_0899F380;
    }
L_0899F380:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17864));
    ctx.set_gpr(31, 0x0899F394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0899F394u) goto L_0899F394;
    return;
L_0899F394:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F3B4;
      }
      goto L_0899F39C;
    }
L_0899F39C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899F3ACu);
    // nop
    goto L_0899F3D4;
L_0899F3AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F3B8;
      }
      goto L_0899F3B4;
    }
L_0899F3B4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0899F3B8;
L_0899F3B8:
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
L_0899F3D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0899F3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F3F8u) goto L_0899F3F8;
    return;
L_0899F3F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899F404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899F404u) goto L_0899F404;
    return;
L_0899F404:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899F410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x0899F410u) goto L_0899F410;
    return;
L_0899F410:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F428;
      }
      goto L_0899F41C;
    }
L_0899F41C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0899F428;
L_0899F428:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F450;
      }
      goto L_0899F448;
    }
L_0899F448:
    ctx.set_gpr(31, 0x0899F450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0899F450u) goto L_0899F450;
    return;
L_0899F450:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F468;
      }
      goto L_0899F45C;
    }
L_0899F45C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899F468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0899F468u) goto L_0899F468;
    return;
L_0899F468:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17856));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899F48Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899F48Cu) goto L_0899F48C;
    return;
L_0899F48C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F4B4;
      }
      goto L_0899F494;
    }
L_0899F494:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F4A8;
      }
      goto L_0899F4A0;
    }
L_0899F4A0:
    ctx.set_gpr(31, 0x0899F4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899F4A8u) goto L_0899F4A8;
    return;
L_0899F4A8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F58C;
      }
      goto L_0899F4B4;
    }
L_0899F4B4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0899F4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x0894806Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F4C8u) goto L_0899F4C8;
    return;
L_0899F4C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F50C;
      }
      goto L_0899F4DC;
    }
L_0899F4DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899F4FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899F4FCu) goto L_0899F4FC;
    return;
L_0899F4FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0899F50C;
L_0899F50C:
    ctx.set_gpr(2, ctx.gpr[18] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F4DC;
      }
      goto L_0899F518;
    }
L_0899F518:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F540;
      }
      goto L_0899F524;
    }
L_0899F524:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0899F540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0899F540u) goto L_0899F540;
    return;
L_0899F540:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(256));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899F574u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899F574u) goto L_0899F574;
    return;
L_0899F574:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F588;
      }
      goto L_0899F580;
    }
L_0899F580:
    ctx.set_gpr(31, 0x0899F588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899F588u) goto L_0899F588;
    return;
L_0899F588:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0899F58C;
L_0899F58C:
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
L_0899F5A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0899F5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F5C4u) goto L_0899F5C4;
    return;
L_0899F5C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899F5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x0899F5D0u) goto L_0899F5D0;
    return;
L_0899F5D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899F5E4u);
    // nop
    goto L_0899F67C;
L_0899F5E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F620;
      }
      goto L_0899F5EC;
    }
L_0899F5EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F614;
      }
      goto L_0899F608;
    }
L_0899F608:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899F614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0899F614u) goto L_0899F614;
    return;
L_0899F614:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F664;
      }
      goto L_0899F620;
    }
L_0899F620:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899F638u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899F638u) goto L_0899F638;
    return;
L_0899F638:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F660;
      }
      goto L_0899F654;
    }
L_0899F654:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899F660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0899F660u) goto L_0899F660;
    return;
L_0899F660:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0899F664;
L_0899F664:
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
L_0899F67C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899F6BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899F6BCu) goto L_0899F6BC;
    return;
L_0899F6BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F7A4;
      }
      goto L_0899F6C4;
    }
L_0899F6C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(31, 0x0899F6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0899F6E0u) goto L_0899F6E0;
    return;
L_0899F6E0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32612));
    ctx.set_gpr(31, 0x0899F6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0899F6F0u) goto L_0899F6F0;
    return;
L_0899F6F0:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0899F700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0899F700u) goto L_0899F700;
    return;
L_0899F700:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0899F714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x0899F714u) goto L_0899F714;
    return;
L_0899F714:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899F730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F730u) goto L_0899F730;
    return;
L_0899F730:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32612));
    ctx.set_gpr(31, 0x0899F740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0899F740u) goto L_0899F740;
    return;
L_0899F740:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899F758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0899F758u) goto L_0899F758;
    return;
L_0899F758:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899F770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899F770u) goto L_0899F770;
    return;
L_0899F770:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F794;
      }
      goto L_0899F778;
    }
L_0899F778:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899F788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0899F788u) goto L_0899F788;
    return;
L_0899F788:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F7A8;
      }
      goto L_0899F794;
    }
L_0899F794:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899F7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0899F7A4u) goto L_0899F7A4;
    return;
L_0899F7A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0899F7A8;
L_0899F7A8:
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
L_0899F7C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0899F7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 149u, 0x0891CAECu>(ctx, &aot_mem) && ctx.pc == 0x0899F7E0u) goto L_0899F7E0;
    return;
L_0899F7E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32544));
    ctx.set_gpr(31, 0x0899F7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 74u, 0x0891C560u>(ctx, &aot_mem) && ctx.pc == 0x0899F7F4u) goto L_0899F7F4;
    return;
L_0899F7F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F808:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32192));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x0899F830u);
    // nop
    goto L_0899EC00;
L_0899F830:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F840:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32192));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x0899F860u);
    // nop
    goto L_0899EC50;
L_0899F860:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F870:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F87C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(47) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F8E8;
      }
      goto L_0899F894;
    }
L_0899F894:
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(47) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F8DC;
      }
      goto L_0899F8A0;
    }
L_0899F8A0:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-31844));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F8BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26800)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F990;
      }
      goto L_0899F8CC;
    }
L_0899F8CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26844)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F990;
      }
      goto L_0899F8DC;
    }
L_0899F8DC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F990;
      }
      goto L_0899F8E8;
    }
L_0899F8E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(47));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F98C;
      }
      goto L_0899F900;
    }
L_0899F900:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-47));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F92C;
      }
      goto L_0899F920;
    }
L_0899F920:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0899F92C;
L_0899F92C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F954;
      }
      goto L_0899F938;
    }
L_0899F938:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F948;
      }
      goto L_0899F940;
    }
L_0899F940:
    ctx.set_gpr(31, 0x0899F948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899F948u) goto L_0899F948;
    return;
L_0899F948:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F990;
      }
      goto L_0899F954;
    }
L_0899F954:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899F968u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899F968u) goto L_0899F968;
    return;
L_0899F968:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F980;
      }
      goto L_0899F978;
    }
L_0899F978:
    ctx.set_gpr(31, 0x0899F980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899F980u) goto L_0899F980;
    return;
L_0899F980:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F990;
      }
      goto L_0899F98C;
    }
L_0899F98C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0899F990;
L_0899F990:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F9A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0899F9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 218u, 0x0893CDFCu>(ctx, &aot_mem) && ctx.pc == 0x0899F9C4u) goto L_0899F9C4;
    return;
L_0899F9C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899F9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0899F9D0u) goto L_0899F9D0;
    return;
L_0899F9D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899F9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0899F9DCu) goto L_0899F9DC;
    return;
L_0899F9DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899F9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x0899F9F0u) goto L_0899F9F0;
    return;
L_0899F9F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0899F9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 593u, 0x0895A828u>(ctx, &aot_mem) && ctx.pc == 0x0899F9FCu) goto L_0899F9FC;
    return;
L_0899F9FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FA40;
      }
      goto L_0899FA10;
    }
L_0899FA10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(95));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899FA3C;
      }
      goto L_0899FA2C;
    }
L_0899FA2C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899FA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 689u, 0x0895AE84u>(ctx, &aot_mem) && ctx.pc == 0x0899FA3Cu) goto L_0899FA3C;
    return;
L_0899FA3C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_0899FA40;
L_0899FA40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0899FA10;
      }
      goto L_0899FA48;
    }
L_0899FA48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899FA60;
      }
      goto L_0899FA58;
    }
L_0899FA58:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0899FA60;
L_0899FA60:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899FA74;
      }
      goto L_0899FA68;
    }
L_0899FA68:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FAC0;
      }
      goto L_0899FA74;
    }
L_0899FA74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899FAAC;
      }
      goto L_0899FA84;
    }
L_0899FA84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899FA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0899FA90u) goto L_0899FA90;
    return;
L_0899FA90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FAA4;
      }
      goto L_0899FA98;
    }
L_0899FA98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899FAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0899FAA4u) goto L_0899FAA4;
    return;
L_0899FAA4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0899FAAC;
L_0899FAAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899FAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0899FAC0u) goto L_0899FAC0;
    return;
L_0899FAC0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FAD8;
      }
      goto L_0899FAD0;
    }
L_0899FAD0:
    ctx.set_gpr(31, 0x0899FAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899FAD8u) goto L_0899FAD8;
    return;
L_0899FAD8:
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
L_0899FAF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0899FB34u);
    // nop
    goto L_0899F9A4;
L_0899FB34:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0899FB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FB40u) goto L_0899FB40;
    return;
L_0899FB40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899FB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 534u, 0x08996F70u>(ctx, &aot_mem) && ctx.pc == 0x0899FB4Cu) goto L_0899FB4C;
    return;
L_0899FB4C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899FB98;
      }
      goto L_0899FB70;
    }
L_0899FB70:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0899FB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0899FB7Cu) goto L_0899FB7C;
    return;
L_0899FB7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FB90;
      }
      goto L_0899FB84;
    }
L_0899FB84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899FB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0899FB90u) goto L_0899FB90;
    return;
L_0899FB90:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0899FB98;
L_0899FB98:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899FBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0899FBACu) goto L_0899FBAC;
    return;
L_0899FBAC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FBD4;
      }
      goto L_0899FBC0;
    }
L_0899FBC0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0899FBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FBCCu) goto L_0899FBCC;
    return;
L_0899FBCC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0899FBD4;
L_0899FBD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FBEC;
      }
      goto L_0899FBDC;
    }
L_0899FBDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0899FBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0899FBECu) goto L_0899FBEC;
    return;
L_0899FBEC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17848));
    ctx.set_gpr(31, 0x0899FC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x0899FC10u) goto L_0899FC10;
    return;
L_0899FC10:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0899FC24;
      }
      goto L_0899FC18;
    }
L_0899FC18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_0899FC24;
L_0899FC24:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FC4C;
      }
      goto L_0899FC30;
    }
L_0899FC30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899FC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0899FC48u) goto L_0899FC48;
    return;
L_0899FC48:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0899FC4C;
L_0899FC4C:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899FC30;
      }
      goto L_0899FC58;
    }
L_0899FC58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0899FC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x0899FC70u) goto L_0899FC70;
    return;
L_0899FC70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0899FC94;
      }
      goto L_0899FC78;
    }
L_0899FC78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x0899FC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0899FC8Cu) goto L_0899FC8C;
    return;
L_0899FC8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FCE8;
      }
      goto L_0899FC94;
    }
L_0899FC94:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FCB4;
      }
      goto L_0899FCAC;
    }
L_0899FCAC:
    ctx.set_gpr(31, 0x0899FCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x0899FCB4u) goto L_0899FCB4;
    return;
L_0899FCB4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FCD4;
      }
      goto L_0899FCCC;
    }
L_0899FCCC:
    ctx.set_gpr(31, 0x0899FCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899FCD4u) goto L_0899FCD4;
    return;
L_0899FCD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0899FCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FCE8u) goto L_0899FCE8;
    return;
L_0899FCE8:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FF6C;
      }
      goto L_0899FCF4;
    }
L_0899FCF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899FD08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899FD08u) goto L_0899FD08;
    return;
L_0899FD08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0899FD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FD18u) goto L_0899FD18;
    return;
L_0899FD18:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26800)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899FD38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899FD38u) goto L_0899FD38;
    return;
L_0899FD38:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899FD64;
      }
      goto L_0899FD40;
    }
L_0899FD40:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26844)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899FD5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899FD5Cu) goto L_0899FD5C;
    return;
L_0899FD5C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899FF68;
      }
      goto L_0899FD64;
    }
L_0899FD64:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0899FD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FD70u) goto L_0899FD70;
    return;
L_0899FD70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899FD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 585u, 0x089973E0u>(ctx, &aot_mem) && ctx.pc == 0x0899FD7Cu) goto L_0899FD7C;
    return;
L_0899FD7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0899FD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0899FD94u) goto L_0899FD94;
    return;
L_0899FD94:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0899FDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FDA0u) goto L_0899FDA0;
    return;
L_0899FDA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899FDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0899FDACu) goto L_0899FDAC;
    return;
L_0899FDAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899FDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x0899FDC8u) goto L_0899FDC8;
    return;
L_0899FDC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(79));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0899FDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FDE8u) goto L_0899FDE8;
    return;
L_0899FDE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0899FE00u);
    // nop
    goto L_0899F9A4;
L_0899FE00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0899FE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0899FE20u) goto L_0899FE20;
    return;
L_0899FE20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899FE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FE38u) goto L_0899FE38;
    return;
L_0899FE38:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FE64;
      }
      goto L_0899FE48;
    }
L_0899FE48:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FE64;
      }
      goto L_0899FE60;
    }
L_0899FE60:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0899FE64;
L_0899FE64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FE90;
      }
      goto L_0899FE6C;
    }
L_0899FE6C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899FE90;
      }
      goto L_0899FE84;
    }
L_0899FE84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0899FE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FE90u) goto L_0899FE90;
    return;
L_0899FE90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899FEAC;
      }
      goto L_0899FEA4;
    }
L_0899FEA4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0899FEAC;
L_0899FEAC:
    ctx.set_gpr(31, 0x0899FEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x0899FEB4u) goto L_0899FEB4;
    return;
L_0899FEB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(340)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0899FECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x0899FECCu) goto L_0899FECC;
    return;
L_0899FECC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0899FEF0;
      }
      goto L_0899FED8;
    }
L_0899FED8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(31, 0x0899FEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0899FEE8u) goto L_0899FEE8;
    return;
L_0899FEE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FF40;
      }
      goto L_0899FEF0;
    }
L_0899FEF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(340)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FF0C;
      }
      goto L_0899FF04;
    }
L_0899FF04:
    ctx.set_gpr(31, 0x0899FF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x0899FF0Cu) goto L_0899FF0C;
    return;
L_0899FF0C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FF2C;
      }
      goto L_0899FF24;
    }
L_0899FF24:
    ctx.set_gpr(31, 0x0899FF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899FF2Cu) goto L_0899FF2C;
    return;
L_0899FF2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0899FF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FF40u) goto L_0899FF40;
    return;
L_0899FF40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FF54;
      }
      goto L_0899FF4C;
    }
L_0899FF4C:
    ctx.set_gpr(31, 0x0899FF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899FF54u) goto L_0899FF54;
    return;
L_0899FF54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FF68;
      }
      goto L_0899FF60;
    }
L_0899FF60:
    ctx.set_gpr(31, 0x0899FF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899FF68u) goto L_0899FF68;
    return;
L_0899FF68:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0899FF6C;
L_0899FF6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0899FF80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899FF80u) goto L_0899FF80;
    return;
L_0899FF80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0899FF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0899FF8Cu) goto L_0899FF8C;
    return;
L_0899FF8C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899FCF4;
      }
      goto L_0899FF98;
    }
L_0899FF98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FFAC;
      }
      goto L_0899FFA4;
    }
L_0899FFA4:
    ctx.set_gpr(31, 0x0899FFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0899FFACu) goto L_0899FFAC;
    return;
L_0899FFAC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FFD8;
      }
      goto L_0899FFBC;
    }
L_0899FFBC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FFD8;
      }
      goto L_0899FFD4;
    }
L_0899FFD4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0899FFD8;
L_0899FFD8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A0004u>(ctx, &aot_mem); return;
      }
      goto L_0899FFE0;
    }
L_0899FFE0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A0004u>(ctx, &aot_mem); return;
      }
      goto L_0899FFF8;
    }
L_0899FFF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A0004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0102(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0102_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_102(Runtime &runtime) {
    runtime.register_generated_unit(102u, 0x0899C000u, 16384u, &recomp_unit_0102, &recomp_unit_0102_entry);
    runtime.register_function(0x0899C000u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C008u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C024u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C040u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C054u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C068u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C07Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C090u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C0A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C0B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C0C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C0D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C0E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C0F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C108u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C118u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C130u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C14Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C164u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C180u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C198u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C1B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C1CCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C1E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C1F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C208u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C220u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C23Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C254u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C270u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C280u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C290u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C2A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C2B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C2C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C2D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C2E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C2F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C304u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C314u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C324u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C334u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C344u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C354u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C36Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C388u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C3A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C3BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C3D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C3F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C400u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C410u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C428u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C438u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C450u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C460u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C47Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C48Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C4A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C4B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C4D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C4ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C504u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C520u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C52Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C540u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C54Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C560u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C56Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C580u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C58Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C5A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C5ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C5C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C5CCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C5E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C5F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C614u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C628u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C63Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C650u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C66Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C684u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C6A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C6B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C6C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C6DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C6F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C700u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C710u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C728u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C744u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C754u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C764u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C774u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C784u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C79Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C7BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C7D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C7FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C82Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C844u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C868u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C870u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C888u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C8A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C8C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C8CCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C8E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C8FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C920u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C928u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C940u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C958u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C97Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C984u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C99Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C9B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C9D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C9E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C9F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CA10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CA24u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CA2Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CA44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CA5Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CA80u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CAA4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CAB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CABCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CAD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CAF0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CB08u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CB18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CB28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CB7Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CB8Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CB9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CBB8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CBD0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CBE4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CBECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC1Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC3Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC60u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC80u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CCB4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CCCCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CCDCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CCECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CD50u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CD60u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CD70u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CD98u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CDB4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CDC4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CDDCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CDE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CDFCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE3Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE80u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CEB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CEC0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CEDCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CEECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF54u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF64u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF74u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF8Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CFA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CFACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CFB4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CFCCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CFE4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CFF8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D000u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D018u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D030u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D04Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D070u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D088u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D0A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D0B0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D0C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D114u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D124u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D134u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D15Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D178u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D188u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D1A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D1B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D1C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D1D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D1E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D1F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D208u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D214u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D240u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D270u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D288u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D29Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D2A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D2BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D2D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D2E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D310u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D328u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D348u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D360u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D36Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D374u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D380u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D390u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3CCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D404u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D410u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D418u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D424u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D430u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D438u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D444u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D450u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D458u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D464u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D470u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D478u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D484u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D490u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D498u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4B0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D504u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D510u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D518u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D524u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D530u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D54Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D564u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D5B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D5D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D5E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D5F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D63Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D64Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D65Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D674u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D688u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D690u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D6A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D6C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D6E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D6ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D6F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D704u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D710u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D728u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D74Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D758u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D774u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D78Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D7A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D7D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D7E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D7F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D808u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D864u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D874u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D884u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D908u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D930u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D940u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D950u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D964u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D978u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D98Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D9B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D9D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D9ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA08u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA20u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA74u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA8Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DAA4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DAB4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DAC4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB20u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB30u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB40u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DBA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DBD0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DBECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC30u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC48u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC60u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC74u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC7Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DCACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DCC4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DCE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DDA4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DDBCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DDD0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DDD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DDF0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE5Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE6Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DEB8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DEC8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DED8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DEE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DF00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DF14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DF1Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DF34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DF48u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DF5Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DF78u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DF90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DFA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DFB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E004u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E014u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E024u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E040u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E058u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E06Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E074u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E08Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E0A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E0C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E0E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E100u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E120u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E138u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E148u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E160u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E164u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E16Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E184u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E190u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E19Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1B0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E20Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E21Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E270u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E280u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E290u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E310u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E324u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E34Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E364u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E37Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E38Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E39Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E3F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E408u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E418u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E440u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E45Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E46Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E478u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E4A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E4C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E4DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E4F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E4F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E510u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E528u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E53Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E564u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E57Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E594u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E5A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E5B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E610u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E620u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E630u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E658u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E674u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E684u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E690u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E6A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E6B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E6E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E6FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E714u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E728u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E730u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E748u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E760u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E774u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E79Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E7B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E7CCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E7DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E7ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E848u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E858u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E868u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E890u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E8ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E8BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E8C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E8F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E914u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E92Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E940u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E948u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E960u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E978u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E99Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E9C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E9DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E9F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EA04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EA14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EA60u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EA70u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EA80u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EA90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EAA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EAD0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EAF4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB24u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB3Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB78u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB88u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBA4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBC4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBD0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBD4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBE0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC48u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC50u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC5Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC7Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ECACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ECC4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ECD4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED1Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED40u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED78u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDA8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDBCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDC4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDDCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDFCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE3Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE5Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE70u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE74u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE80u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEA8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EECCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EED4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEE4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEFCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF20u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF2Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF50u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF5Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF74u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF7Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EFACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EFBCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EFCCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EFDCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EFECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EFFCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F00Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F01Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F02Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F044u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F054u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F05Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F08Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F098u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F0A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F0A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F0D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F0DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F0E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F104u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F110u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F124u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F12Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F130u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F154u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F170u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F178u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F18Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F190u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F1A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F1B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F1C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F1E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F1F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F200u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F20Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F214u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F230u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F238u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F23Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F250u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F270u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F278u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F288u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F2A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F2B0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F2C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F2E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F300u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F318u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F330u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F358u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F364u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F378u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F380u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F394u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F39Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F404u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F410u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F41Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F428u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F448u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F450u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F45Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F468u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F48Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F494u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F4A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F4A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F4B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F4C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F4DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F4FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F50Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F518u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F524u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F540u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F574u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F580u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F588u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F58Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F5A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F5C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F5D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F5E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F5ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F608u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F614u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F620u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F638u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F654u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F660u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F664u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F67Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F6BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F6C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F6E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F6F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F700u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F714u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F730u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F740u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F758u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F770u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F778u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F788u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F794u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F7A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F7A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F7C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F7E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F7F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F808u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F814u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F830u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F840u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F860u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F870u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F87Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F894u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8CCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F900u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F920u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F92Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F938u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F940u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F948u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F954u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F968u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F978u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F980u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F98Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F990u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F9A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F9C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F9D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F9DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F9F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F9FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA2Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA3Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA40u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA48u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA60u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA74u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA98u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAA4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAC0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAD0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAF4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB40u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB70u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB7Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB98u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FBACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FBC0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FBCCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FBD4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FBDCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FBECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC24u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC30u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC48u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC70u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC78u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC8Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCB4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCCCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCD4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCF4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD08u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD40u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD5Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD64u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD70u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD7Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FDA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FDACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FDC8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FDE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE20u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE48u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE60u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE64u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE6Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FEA4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FEACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FEB4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FECCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FED8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FEE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FEF0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF24u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF2Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF40u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF54u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF60u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF6Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF80u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF8Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF98u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFA4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFBCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFD4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFE0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFF8u, &recomp_unit_0102, "recomp_unit_0102");
}
} // namespace psprecomp
