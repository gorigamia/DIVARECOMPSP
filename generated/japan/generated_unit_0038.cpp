#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0038[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 28, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0,
    0, 0, 33, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 65, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 96, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 102, 0, 0, 0, 103,
    104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 110, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 116, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 126, 127, 0, 128, 0, 129, 0, 0, 130, 0, 0, 131, 0, 132, 133, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0, 138, 139,
    0, 140, 0, 141, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154,
    0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 175,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190,
    0, 0, 0, 0, 0, 0, 191, 192, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 207, 0, 208, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0,
    214, 0, 215, 0, 0, 0, 216, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0,
    0, 223, 0, 0, 224, 0, 0, 225, 226, 227, 0, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 240, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 262, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 287, 288, 0,
    0, 0, 0, 289, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 294, 295, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 299, 0,
    300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306,
    307, 0, 308, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 314, 0, 315, 316, 0, 317, 318, 0, 319, 320, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 322, 0, 0, 323, 0, 324, 0, 325, 0, 0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 330, 0, 0, 331, 0, 332, 0, 0, 333, 0, 334, 0,
    335, 0, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0,
    0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 353,
    0, 354, 0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 367, 368, 0, 369, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 375, 376, 0, 0, 0, 377, 0, 0,
    0, 0, 0, 0, 378, 0, 379, 0, 380, 381, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0,
    0, 0, 0, 0, 389, 0, 390, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 396, 397, 398, 0, 0, 399,
    0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 402, 403, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 409,
    0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0,
    0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 423, 0, 424, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 0,
    435, 0, 436, 0, 437, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 449, 0,
    450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 455,
    0, 456, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0,
    0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0,
    0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 480, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0,
    0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 489, 490, 0, 491, 0, 0, 0, 492, 0, 0,
    493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 0,
    0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 510,
    0, 0, 511, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0,
    0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0,
    0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 536,
    537, 0, 538, 0, 539, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0,
    0, 0, 545, 546, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 550, 551, 0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 555,
    0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 0, 0, 0,
    0, 0, 562, 0, 563, 0, 0, 0, 0, 564, 565, 0, 566, 0, 567, 0, 568, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0,
    0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 574, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 578, 579, 0, 580, 0, 581,
    0, 582, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 589, 0, 0, 590, 0, 591, 0,
    0, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 597, 0, 598, 0, 599, 0, 0, 0, 600, 0, 0,
    0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0,
    0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 612,
    0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 621, 0, 622, 623, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0,
    0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 632, 0, 633, 0, 634,
    0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 637, 0, 0, 0, 638, 0, 0, 639, 0, 0, 640, 0, 0, 641, 0, 642, 0, 0, 643, 0, 0,
    0, 644, 645, 646, 0, 647, 0, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 652, 0, 653, 0, 654, 0, 0, 0, 0, 655, 0,
    0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 0, 0, 663, 0, 0, 664, 0, 665, 666, 0,
    0, 667, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673, 674,
    0, 675, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 682, 0, 0, 683,
    0, 0, 684, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 693, 0, 694, 0,
    695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 703, 0, 0, 0, 0, 704, 705, 0, 706, 0, 707, 0, 708, 0, 0, 0, 0, 709, 0, 710, 0,
    0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 717, 0, 718, 0, 719, 0,
    0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 722, 0, 723, 0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 727,
    0, 0, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 735, 736, 0, 737, 0, 738, 0,
    0, 0, 0, 739, 0, 0, 0, 740, 0, 741, 0, 742, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746,
    0, 0, 0, 0, 0, 0, 0, 747, 748, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 752, 753, 0, 754, 0, 755, 0, 756,
    0, 0, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0,
    763, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 767, 0, 768, 0, 769, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772,
    0, 0, 0, 0, 773, 0, 774, 0, 775, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 779, 0, 780, 0, 781, 782, 0, 783,
    0, 0, 0, 0, 0, 784, 0, 785, 0, 786, 0, 787, 0, 788, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 790, 791, 0, 792, 0, 793,
};
void recomp_unit_0038_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0889C000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0038[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889C000;
    case 2u: goto L_0889C02C;
    case 3u: goto L_0889C030;
    case 4u: goto L_0889C038;
    case 5u: goto L_0889C040;
    case 6u: goto L_0889C488;
    case 7u: goto L_0889C494;
    case 8u: goto L_0889C4A4;
    case 9u: goto L_0889C4A8;
    case 10u: goto L_0889C4B0;
    case 11u: goto L_0889C4B8;
    case 12u: goto L_0889C50C;
    case 13u: goto L_0889C524;
    case 14u: goto L_0889C530;
    case 15u: goto L_0889C538;
    case 16u: goto L_0889C558;
    case 17u: goto L_0889C56C;
    case 18u: goto L_0889C57C;
    case 19u: goto L_0889C58C;
    case 20u: goto L_0889C5A4;
    case 21u: goto L_0889C5BC;
    case 22u: goto L_0889C5D4;
    case 23u: goto L_0889C5EC;
    case 24u: goto L_0889C604;
    case 25u: goto L_0889C61C;
    case 26u: goto L_0889C634;
    case 27u: goto L_0889C644;
    case 28u: goto L_0889C648;
    case 29u: goto L_0889C650;
    case 30u: goto L_0889C664;
    case 31u: goto L_0889C66C;
    case 32u: goto L_0889C678;
    case 33u: goto L_0889C688;
    case 34u: goto L_0889C690;
    case 35u: goto L_0889C698;
    case 36u: goto L_0889C6A4;
    case 37u: goto L_0889C6AC;
    case 38u: goto L_0889C6B4;
    case 39u: goto L_0889C6BC;
    case 40u: goto L_0889C6C8;
    case 41u: goto L_0889C6D0;
    case 42u: goto L_0889C6D8;
    case 43u: goto L_0889C6E0;
    case 44u: goto L_0889C6E8;
    case 45u: goto L_0889C708;
    case 46u: goto L_0889C710;
    case 47u: goto L_0889C760;
    case 48u: goto L_0889C784;
    case 49u: goto L_0889C788;
    case 50u: goto L_0889C7B0;
    case 51u: goto L_0889C7B4;
    case 52u: goto L_0889C7C4;
    case 53u: goto L_0889C7CC;
    case 54u: goto L_0889C7D4;
    case 55u: goto L_0889C7F4;
    case 56u: goto L_0889C80C;
    case 57u: goto L_0889C818;
    case 58u: goto L_0889C820;
    case 59u: goto L_0889C86C;
    case 60u: goto L_0889C8BC;
    case 61u: goto L_0889C9E4;
    case 62u: goto L_0889CA08;
    case 63u: goto L_0889CA10;
    case 64u: goto L_0889CA18;
    case 65u: goto L_0889CA2C;
    case 66u: goto L_0889CA30;
    case 67u: goto L_0889CA50;
    case 68u: goto L_0889CA5C;
    case 69u: goto L_0889CA60;
    case 70u: goto L_0889CA84;
    case 71u: goto L_0889CAA0;
    case 72u: goto L_0889CAB8;
    case 73u: goto L_0889CAD4;
    case 74u: goto L_0889CAE0;
    case 75u: goto L_0889CAE8;
    case 76u: goto L_0889CB18;
    case 77u: goto L_0889CB20;
    case 78u: goto L_0889CB28;
    case 79u: goto L_0889CB30;
    case 80u: goto L_0889CB34;
    case 81u: goto L_0889CB54;
    case 82u: goto L_0889CB5C;
    case 83u: goto L_0889CB7C;
    case 84u: goto L_0889CB84;
    case 85u: goto L_0889CBD4;
    case 86u: goto L_0889CBE4;
    case 87u: goto L_0889CBF8;
    case 88u: goto L_0889CC04;
    case 89u: goto L_0889CC24;
    case 90u: goto L_0889CC2C;
    case 91u: goto L_0889CC30;
    case 92u: goto L_0889CC80;
    case 93u: goto L_0889CC84;
    case 94u: goto L_0889CC90;
    case 95u: goto L_0889CCB8;
    case 96u: goto L_0889CCBC;
    case 97u: goto L_0889CCC8;
    case 98u: goto L_0889CCD0;
    case 99u: goto L_0889CCD8;
    case 100u: goto L_0889CCE0;
    case 101u: goto L_0889CCE8;
    case 102u: goto L_0889CCEC;
    case 103u: goto L_0889CCFC;
    case 104u: goto L_0889CD00;
    case 105u: goto L_0889CD08;
    case 106u: goto L_0889CD10;
    case 107u: goto L_0889CD18;
    case 108u: goto L_0889CD20;
    case 109u: goto L_0889CD28;
    case 110u: goto L_0889CD2C;
    case 111u: goto L_0889CD3C;
    case 112u: goto L_0889CD44;
    case 113u: goto L_0889CD4C;
    case 114u: goto L_0889CD54;
    case 115u: goto L_0889CD5C;
    case 116u: goto L_0889CD60;
    case 117u: goto L_0889CD70;
    case 118u: goto L_0889CD90;
    case 119u: goto L_0889CD9C;
    case 120u: goto L_0889CDB0;
    case 121u: goto L_0889CDB8;
    case 122u: goto L_0889CDBC;
    case 123u: goto L_0889CDE0;
    case 124u: goto L_0889CDE8;
    case 125u: goto L_0889CDF8;
    case 126u: goto L_0889CE10;
    case 127u: goto L_0889CE14;
    case 128u: goto L_0889CE1C;
    case 129u: goto L_0889CE24;
    case 130u: goto L_0889CE30;
    case 131u: goto L_0889CE3C;
    case 132u: goto L_0889CE44;
    case 133u: goto L_0889CE48;
    case 134u: goto L_0889CE50;
    case 135u: goto L_0889CE58;
    case 136u: goto L_0889CE64;
    case 137u: goto L_0889CE70;
    case 138u: goto L_0889CE78;
    case 139u: goto L_0889CE7C;
    case 140u: goto L_0889CE84;
    case 141u: goto L_0889CE8C;
    case 142u: goto L_0889CE98;
    case 143u: goto L_0889CEA4;
    case 144u: goto L_0889CEAC;
    case 145u: goto L_0889CEB4;
    case 146u: goto L_0889CEBC;
    case 147u: goto L_0889CEC4;
    case 148u: goto L_0889CECC;
    case 149u: goto L_0889CED4;
    case 150u: goto L_0889CEDC;
    case 151u: goto L_0889CEE4;
    case 152u: goto L_0889CEEC;
    case 153u: goto L_0889CEF4;
    case 154u: goto L_0889CEFC;
    case 155u: goto L_0889CF04;
    case 156u: goto L_0889CF14;
    case 157u: goto L_0889CF2C;
    case 158u: goto L_0889CF50;
    case 159u: goto L_0889CF64;
    case 160u: goto L_0889CF6C;
    case 161u: goto L_0889CF7C;
    case 162u: goto L_0889CF94;
    case 163u: goto L_0889CFB8;
    case 164u: goto L_0889CFCC;
    case 165u: goto L_0889CFD4;
    case 166u: goto L_0889CFDC;
    case 167u: goto L_0889CFE4;
    case 168u: goto L_0889D034;
    case 169u: goto L_0889D048;
    case 170u: goto L_0889D050;
    case 171u: goto L_0889D058;
    case 172u: goto L_0889D060;
    case 173u: goto L_0889D068;
    case 174u: goto L_0889D070;
    case 175u: goto L_0889D07C;
    case 176u: goto L_0889D094;
    case 177u: goto L_0889D0A4;
    case 178u: goto L_0889D0AC;
    case 179u: goto L_0889D0B4;
    case 180u: goto L_0889D0BC;
    case 181u: goto L_0889D0C4;
    case 182u: goto L_0889D0CC;
    case 183u: goto L_0889D0F4;
    case 184u: goto L_0889D110;
    case 185u: goto L_0889D118;
    case 186u: goto L_0889D12C;
    case 187u: goto L_0889D154;
    case 188u: goto L_0889D16C;
    case 189u: goto L_0889D174;
    case 190u: goto L_0889D17C;
    case 191u: goto L_0889D198;
    case 192u: goto L_0889D19C;
    case 193u: goto L_0889D1A4;
    case 194u: goto L_0889D1AC;
    case 195u: goto L_0889D1C0;
    case 196u: goto L_0889D1C8;
    case 197u: goto L_0889D1D0;
    case 198u: goto L_0889D1FC;
    case 199u: goto L_0889D210;
    case 200u: goto L_0889D218;
    case 201u: goto L_0889D22C;
    case 202u: goto L_0889D260;
    case 203u: goto L_0889D27C;
    case 204u: goto L_0889D290;
    case 205u: goto L_0889D29C;
    case 206u: goto L_0889D2AC;
    case 207u: goto L_0889D2B0;
    case 208u: goto L_0889D2B8;
    case 209u: goto L_0889D2BC;
    case 210u: goto L_0889D2C8;
    case 211u: goto L_0889D2D8;
    case 212u: goto L_0889D2E8;
    case 213u: goto L_0889D2F0;
    case 214u: goto L_0889D300;
    case 215u: goto L_0889D308;
    case 216u: goto L_0889D318;
    case 217u: goto L_0889D31C;
    case 218u: goto L_0889D338;
    case 219u: goto L_0889D350;
    case 220u: goto L_0889D35C;
    case 221u: goto L_0889D364;
    case 222u: goto L_0889D370;
    case 223u: goto L_0889D384;
    case 224u: goto L_0889D390;
    case 225u: goto L_0889D39C;
    case 226u: goto L_0889D3A0;
    case 227u: goto L_0889D3A4;
    case 228u: goto L_0889D3B4;
    case 229u: goto L_0889D3BC;
    case 230u: goto L_0889D3C4;
    case 231u: goto L_0889D3CC;
    case 232u: goto L_0889D3D8;
    case 233u: goto L_0889D3E0;
    case 234u: goto L_0889D3E8;
    case 235u: goto L_0889D3F0;
    case 236u: goto L_0889D3F8;
    case 237u: goto L_0889D404;
    case 238u: goto L_0889D420;
    case 239u: goto L_0889D430;
    case 240u: goto L_0889D434;
    case 241u: goto L_0889D448;
    case 242u: goto L_0889D450;
    case 243u: goto L_0889D460;
    case 244u: goto L_0889D468;
    case 245u: goto L_0889D488;
    case 246u: goto L_0889D4A8;
    case 247u: goto L_0889D4C4;
    case 248u: goto L_0889D4D4;
    case 249u: goto L_0889D4D8;
    case 250u: goto L_0889D4EC;
    case 251u: goto L_0889D504;
    case 252u: goto L_0889D50C;
    case 253u: goto L_0889D514;
    case 254u: goto L_0889D51C;
    case 255u: goto L_0889D524;
    case 256u: goto L_0889D544;
    case 257u: goto L_0889D54C;
    case 258u: goto L_0889D570;
    case 259u: goto L_0889D57C;
    case 260u: goto L_0889D59C;
    case 261u: goto L_0889D5A4;
    case 262u: goto L_0889D5B0;
    case 263u: goto L_0889D5B4;
    case 264u: goto L_0889D5D8;
    case 265u: goto L_0889D5F4;
    case 266u: goto L_0889D608;
    case 267u: goto L_0889D610;
    case 268u: goto L_0889D624;
    case 269u: goto L_0889D62C;
    case 270u: goto L_0889D644;
    case 271u: goto L_0889D64C;
    case 272u: goto L_0889D654;
    case 273u: goto L_0889D65C;
    case 274u: goto L_0889D664;
    case 275u: goto L_0889D6AC;
    case 276u: goto L_0889D6B8;
    case 277u: goto L_0889D6C0;
    case 278u: goto L_0889D6CC;
    case 279u: goto L_0889D6E0;
    case 280u: goto L_0889D6F0;
    case 281u: goto L_0889D718;
    case 282u: goto L_0889D724;
    case 283u: goto L_0889D72C;
    case 284u: goto L_0889D734;
    case 285u: goto L_0889D75C;
    case 286u: goto L_0889D76C;
    case 287u: goto L_0889D774;
    case 288u: goto L_0889D778;
    case 289u: goto L_0889D78C;
    case 290u: goto L_0889D794;
    case 291u: goto L_0889D7A0;
    case 292u: goto L_0889D7AC;
    case 293u: goto L_0889D7B8;
    case 294u: goto L_0889D7C0;
    case 295u: goto L_0889D7C4;
    case 296u: goto L_0889D7E0;
    case 297u: goto L_0889D7E8;
    case 298u: goto L_0889D7F0;
    case 299u: goto L_0889D7F8;
    case 300u: goto L_0889D800;
    case 301u: goto L_0889D818;
    case 302u: goto L_0889D834;
    case 303u: goto L_0889D83C;
    case 304u: goto L_0889D850;
    case 305u: goto L_0889D858;
    case 306u: goto L_0889D87C;
    case 307u: goto L_0889D880;
    case 308u: goto L_0889D888;
    case 309u: goto L_0889D890;
    case 310u: goto L_0889D8A4;
    case 311u: goto L_0889D900;
    case 312u: goto L_0889D928;
    case 313u: goto L_0889D934;
    case 314u: goto L_0889D938;
    case 315u: goto L_0889D940;
    case 316u: goto L_0889D944;
    case 317u: goto L_0889D94C;
    case 318u: goto L_0889D950;
    case 319u: goto L_0889D958;
    case 320u: goto L_0889D95C;
    case 321u: goto L_0889D968;
    case 322u: goto L_0889D984;
    case 323u: goto L_0889D990;
    case 324u: goto L_0889D998;
    case 325u: goto L_0889D9A0;
    case 326u: goto L_0889D9AC;
    case 327u: goto L_0889D9B4;
    case 328u: goto L_0889D9C0;
    case 329u: goto L_0889D9C8;
    case 330u: goto L_0889D9D0;
    case 331u: goto L_0889D9DC;
    case 332u: goto L_0889D9E4;
    case 333u: goto L_0889D9F0;
    case 334u: goto L_0889D9F8;
    case 335u: goto L_0889DA00;
    case 336u: goto L_0889DA0C;
    case 337u: goto L_0889DA14;
    case 338u: goto L_0889DA1C;
    case 339u: goto L_0889DA24;
    case 340u: goto L_0889DA2C;
    case 341u: goto L_0889DA38;
    case 342u: goto L_0889DA40;
    case 343u: goto L_0889DA64;
    case 344u: goto L_0889DA78;
    case 345u: goto L_0889DA88;
    case 346u: goto L_0889DA98;
    case 347u: goto L_0889DAA8;
    case 348u: goto L_0889DAB8;
    case 349u: goto L_0889DAC8;
    case 350u: goto L_0889DAD8;
    case 351u: goto L_0889DAEC;
    case 352u: goto L_0889DAF4;
    case 353u: goto L_0889DAFC;
    case 354u: goto L_0889DB04;
    case 355u: goto L_0889DB0C;
    case 356u: goto L_0889DB18;
    case 357u: goto L_0889DB24;
    case 358u: goto L_0889DB30;
    case 359u: goto L_0889DB3C;
    case 360u: goto L_0889DB68;
    case 361u: goto L_0889DB7C;
    case 362u: goto L_0889DBAC;
    case 363u: goto L_0889DBB4;
    case 364u: goto L_0889DBC8;
    case 365u: goto L_0889DBD4;
    case 366u: goto L_0889DBE4;
    case 367u: goto L_0889DBEC;
    case 368u: goto L_0889DBF0;
    case 369u: goto L_0889DBF8;
    case 370u: goto L_0889DC20;
    case 371u: goto L_0889DC30;
    case 372u: goto L_0889DC4C;
    case 373u: goto L_0889DC54;
    case 374u: goto L_0889DC5C;
    case 375u: goto L_0889DC60;
    case 376u: goto L_0889DC64;
    case 377u: goto L_0889DC74;
    case 378u: goto L_0889DC90;
    case 379u: goto L_0889DC98;
    case 380u: goto L_0889DCA0;
    case 381u: goto L_0889DCA4;
    case 382u: goto L_0889DCA8;
    case 383u: goto L_0889DCB8;
    case 384u: goto L_0889DCD0;
    case 385u: goto L_0889DCDC;
    case 386u: goto L_0889DCE8;
    case 387u: goto L_0889DCF0;
    case 388u: goto L_0889DCF8;
    case 389u: goto L_0889DD10;
    case 390u: goto L_0889DD18;
    case 391u: goto L_0889DD1C;
    case 392u: goto L_0889DD30;
    case 393u: goto L_0889DD44;
    case 394u: goto L_0889DD50;
    case 395u: goto L_0889DD60;
    case 396u: goto L_0889DD68;
    case 397u: goto L_0889DD6C;
    case 398u: goto L_0889DD70;
    case 399u: goto L_0889DD7C;
    case 400u: goto L_0889DD98;
    case 401u: goto L_0889DDA0;
    case 402u: goto L_0889DDA8;
    case 403u: goto L_0889DDAC;
    case 404u: goto L_0889DDB0;
    case 405u: goto L_0889DDC0;
    case 406u: goto L_0889DDE0;
    case 407u: goto L_0889DDE8;
    case 408u: goto L_0889DDF8;
    case 409u: goto L_0889DDFC;
    case 410u: goto L_0889DE10;
    case 411u: goto L_0889DE18;
    case 412u: goto L_0889DE20;
    case 413u: goto L_0889DE2C;
    case 414u: goto L_0889DE34;
    case 415u: goto L_0889DE3C;
    case 416u: goto L_0889DE44;
    case 417u: goto L_0889DE4C;
    case 418u: goto L_0889DE74;
    case 419u: goto L_0889DE8C;
    case 420u: goto L_0889DE94;
    case 421u: goto L_0889DE9C;
    case 422u: goto L_0889DEC8;
    case 423u: goto L_0889DECC;
    case 424u: goto L_0889DED4;
    case 425u: goto L_0889DEDC;
    case 426u: goto L_0889DEE4;
    case 427u: goto L_0889DF18;
    case 428u: goto L_0889DF28;
    case 429u: goto L_0889DF34;
    case 430u: goto L_0889DF40;
    case 431u: goto L_0889DF4C;
    case 432u: goto L_0889DF58;
    case 433u: goto L_0889DF64;
    case 434u: goto L_0889DF70;
    case 435u: goto L_0889DF80;
    case 436u: goto L_0889DF88;
    case 437u: goto L_0889DF90;
    case 438u: goto L_0889DF94;
    case 439u: goto L_0889DF9C;
    case 440u: goto L_0889DFA4;
    case 441u: goto L_0889DFAC;
    case 442u: goto L_0889DFB4;
    case 443u: goto L_0889DFBC;
    case 444u: goto L_0889DFC4;
    case 445u: goto L_0889DFCC;
    case 446u: goto L_0889DFD4;
    case 447u: goto L_0889DFDC;
    case 448u: goto L_0889DFF0;
    case 449u: goto L_0889DFF8;
    case 450u: goto L_0889E000;
    case 451u: goto L_0889E018;
    case 452u: goto L_0889E030;
    case 453u: goto L_0889E06C;
    case 454u: goto L_0889E074;
    case 455u: goto L_0889E07C;
    case 456u: goto L_0889E084;
    case 457u: goto L_0889E08C;
    case 458u: goto L_0889E0A0;
    case 459u: goto L_0889E0B0;
    case 460u: goto L_0889E0B8;
    case 461u: goto L_0889E0BC;
    case 462u: goto L_0889E0C4;
    case 463u: goto L_0889E1DC;
    case 464u: goto L_0889E1E4;
    case 465u: goto L_0889E3F4;
    case 466u: goto L_0889E3FC;
    case 467u: goto L_0889E570;
    case 468u: goto L_0889E578;
    case 469u: goto L_0889E748;
    case 470u: goto L_0889E750;
    case 471u: goto L_0889E868;
    case 472u: goto L_0889E870;
    case 473u: goto L_0889E88C;
    case 474u: goto L_0889E8A8;
    case 475u: goto L_0889E8C4;
    case 476u: goto L_0889E8E0;
    case 477u: goto L_0889E8F4;
    case 478u: goto L_0889E918;
    case 479u: goto L_0889E928;
    case 480u: goto L_0889E92C;
    case 481u: goto L_0889E938;
    case 482u: goto L_0889E944;
    case 483u: goto L_0889E964;
    case 484u: goto L_0889E978;
    case 485u: goto L_0889E98C;
    case 486u: goto L_0889E9AC;
    case 487u: goto L_0889E9B4;
    case 488u: goto L_0889E9BC;
    case 489u: goto L_0889E9D8;
    case 490u: goto L_0889E9DC;
    case 491u: goto L_0889E9E4;
    case 492u: goto L_0889E9F4;
    case 493u: goto L_0889EA00;
    case 494u: goto L_0889EA10;
    case 495u: goto L_0889EA1C;
    case 496u: goto L_0889EA2C;
    case 497u: goto L_0889EA38;
    case 498u: goto L_0889EA4C;
    case 499u: goto L_0889EA58;
    case 500u: goto L_0889EA6C;
    case 501u: goto L_0889EA74;
    case 502u: goto L_0889EA8C;
    case 503u: goto L_0889EA98;
    case 504u: goto L_0889EAA8;
    case 505u: goto L_0889EAB0;
    case 506u: goto L_0889EAB8;
    case 507u: goto L_0889EAC8;
    case 508u: goto L_0889EAEC;
    case 509u: goto L_0889EAF4;
    case 510u: goto L_0889EAFC;
    case 511u: goto L_0889EB08;
    case 512u: goto L_0889EB10;
    case 513u: goto L_0889EB18;
    case 514u: goto L_0889EB38;
    case 515u: goto L_0889EB4C;
    case 516u: goto L_0889EB54;
    case 517u: goto L_0889EB64;
    case 518u: goto L_0889EB74;
    case 519u: goto L_0889EB84;
    case 520u: goto L_0889EB94;
    case 521u: goto L_0889EBA4;
    case 522u: goto L_0889EBB4;
    case 523u: goto L_0889EBC4;
    case 524u: goto L_0889EBD4;
    case 525u: goto L_0889EBE0;
    case 526u: goto L_0889EC34;
    case 527u: goto L_0889EC3C;
    case 528u: goto L_0889EC58;
    case 529u: goto L_0889EC70;
    case 530u: goto L_0889EC84;
    case 531u: goto L_0889ECA0;
    case 532u: goto L_0889ECC4;
    case 533u: goto L_0889ECCC;
    case 534u: goto L_0889ECE0;
    case 535u: goto L_0889ECE8;
    case 536u: goto L_0889ECFC;
    case 537u: goto L_0889ED00;
    case 538u: goto L_0889ED08;
    case 539u: goto L_0889ED10;
    case 540u: goto L_0889ED18;
    case 541u: goto L_0889ED2C;
    case 542u: goto L_0889ED34;
    case 543u: goto L_0889ED54;
    case 544u: goto L_0889ED68;
    case 545u: goto L_0889ED88;
    case 546u: goto L_0889ED8C;
    case 547u: goto L_0889ED94;
    case 548u: goto L_0889EDB0;
    case 549u: goto L_0889EDB8;
    case 550u: goto L_0889EDCC;
    case 551u: goto L_0889EDD0;
    case 552u: goto L_0889EDD8;
    case 553u: goto L_0889EDE0;
    case 554u: goto L_0889EDE8;
    case 555u: goto L_0889EDFC;
    case 556u: goto L_0889EE04;
    case 557u: goto L_0889EE2C;
    case 558u: goto L_0889EE40;
    case 559u: goto L_0889EE5C;
    case 560u: goto L_0889EE64;
    case 561u: goto L_0889EE6C;
    case 562u: goto L_0889EE88;
    case 563u: goto L_0889EE90;
    case 564u: goto L_0889EEA4;
    case 565u: goto L_0889EEA8;
    case 566u: goto L_0889EEB0;
    case 567u: goto L_0889EEB8;
    case 568u: goto L_0889EEC0;
    case 569u: goto L_0889EED4;
    case 570u: goto L_0889EEDC;
    case 571u: goto L_0889EEF4;
    case 572u: goto L_0889EF08;
    case 573u: goto L_0889EF24;
    case 574u: goto L_0889EF30;
    case 575u: goto L_0889EF38;
    case 576u: goto L_0889EF4C;
    case 577u: goto L_0889EF54;
    case 578u: goto L_0889EF68;
    case 579u: goto L_0889EF6C;
    case 580u: goto L_0889EF74;
    case 581u: goto L_0889EF7C;
    case 582u: goto L_0889EF84;
    case 583u: goto L_0889EF98;
    case 584u: goto L_0889EFA0;
    case 585u: goto L_0889EFC0;
    case 586u: goto L_0889EFC8;
    case 587u: goto L_0889EFD4;
    case 588u: goto L_0889EFDC;
    case 589u: goto L_0889EFE4;
    case 590u: goto L_0889EFF0;
    case 591u: goto L_0889EFF8;
    case 592u: goto L_0889F014;
    case 593u: goto L_0889F01C;
    case 594u: goto L_0889F024;
    case 595u: goto L_0889F03C;
    case 596u: goto L_0889F050;
    case 597u: goto L_0889F054;
    case 598u: goto L_0889F05C;
    case 599u: goto L_0889F064;
    case 600u: goto L_0889F074;
    case 601u: goto L_0889F088;
    case 602u: goto L_0889F090;
    case 603u: goto L_0889F0BC;
    case 604u: goto L_0889F0D0;
    case 605u: goto L_0889F0D8;
    case 606u: goto L_0889F0F4;
    case 607u: goto L_0889F118;
    case 608u: goto L_0889F128;
    case 609u: goto L_0889F130;
    case 610u: goto L_0889F148;
    case 611u: goto L_0889F16C;
    case 612u: goto L_0889F17C;
    case 613u: goto L_0889F184;
    case 614u: goto L_0889F19C;
    case 615u: goto L_0889F1C8;
    case 616u: goto L_0889F1DC;
    case 617u: goto L_0889F1E4;
    case 618u: goto L_0889F3A4;
    case 619u: goto L_0889F3B4;
    case 620u: goto L_0889F3C0;
    case 621u: goto L_0889F3C8;
    case 622u: goto L_0889F3D0;
    case 623u: goto L_0889F3D4;
    case 624u: goto L_0889F3E0;
    case 625u: goto L_0889F3E8;
    case 626u: goto L_0889F3F8;
    case 627u: goto L_0889F404;
    case 628u: goto L_0889F40C;
    case 629u: goto L_0889F440;
    case 630u: goto L_0889F454;
    case 631u: goto L_0889F468;
    case 632u: goto L_0889F46C;
    case 633u: goto L_0889F474;
    case 634u: goto L_0889F47C;
    case 635u: goto L_0889F490;
    case 636u: goto L_0889F4A4;
    case 637u: goto L_0889F4AC;
    case 638u: goto L_0889F4BC;
    case 639u: goto L_0889F4C8;
    case 640u: goto L_0889F4D4;
    case 641u: goto L_0889F4E0;
    case 642u: goto L_0889F4E8;
    case 643u: goto L_0889F4F4;
    case 644u: goto L_0889F504;
    case 645u: goto L_0889F508;
    case 646u: goto L_0889F50C;
    case 647u: goto L_0889F514;
    case 648u: goto L_0889F520;
    case 649u: goto L_0889F528;
    case 650u: goto L_0889F53C;
    case 651u: goto L_0889F550;
    case 652u: goto L_0889F554;
    case 653u: goto L_0889F55C;
    case 654u: goto L_0889F564;
    case 655u: goto L_0889F578;
    case 656u: goto L_0889F58C;
    case 657u: goto L_0889F594;
    case 658u: goto L_0889F5A8;
    case 659u: goto L_0889F5B4;
    case 660u: goto L_0889F5C0;
    case 661u: goto L_0889F5CC;
    case 662u: goto L_0889F5D4;
    case 663u: goto L_0889F5E0;
    case 664u: goto L_0889F5EC;
    case 665u: goto L_0889F5F4;
    case 666u: goto L_0889F5F8;
    case 667u: goto L_0889F604;
    case 668u: goto L_0889F60C;
    case 669u: goto L_0889F614;
    case 670u: goto L_0889F648;
    case 671u: goto L_0889F650;
    case 672u: goto L_0889F664;
    case 673u: goto L_0889F678;
    case 674u: goto L_0889F67C;
    case 675u: goto L_0889F684;
    case 676u: goto L_0889F68C;
    case 677u: goto L_0889F6A0;
    case 678u: goto L_0889F6B4;
    case 679u: goto L_0889F6BC;
    case 680u: goto L_0889F6DC;
    case 681u: goto L_0889F6E8;
    case 682u: goto L_0889F6F0;
    case 683u: goto L_0889F6FC;
    case 684u: goto L_0889F708;
    case 685u: goto L_0889F70C;
    case 686u: goto L_0889F714;
    case 687u: goto L_0889F72C;
    case 688u: goto L_0889F734;
    case 689u: goto L_0889F73C;
    case 690u: goto L_0889F744;
    case 691u: goto L_0889F758;
    case 692u: goto L_0889F76C;
    case 693u: goto L_0889F770;
    case 694u: goto L_0889F778;
    case 695u: goto L_0889F780;
    case 696u: goto L_0889F794;
    case 697u: goto L_0889F7A8;
    case 698u: goto L_0889F7B0;
    case 699u: goto L_0889F7D4;
    case 700u: goto L_0889F7F0;
    case 701u: goto L_0889F818;
    case 702u: goto L_0889F824;
    case 703u: goto L_0889F82C;
    case 704u: goto L_0889F840;
    case 705u: goto L_0889F844;
    case 706u: goto L_0889F84C;
    case 707u: goto L_0889F854;
    case 708u: goto L_0889F85C;
    case 709u: goto L_0889F870;
    case 710u: goto L_0889F878;
    case 711u: goto L_0889F88C;
    case 712u: goto L_0889F898;
    case 713u: goto L_0889F8AC;
    case 714u: goto L_0889F8B4;
    case 715u: goto L_0889F8CC;
    case 716u: goto L_0889F8D8;
    case 717u: goto L_0889F8E8;
    case 718u: goto L_0889F8F0;
    case 719u: goto L_0889F8F8;
    case 720u: goto L_0889F908;
    case 721u: goto L_0889F92C;
    case 722u: goto L_0889F934;
    case 723u: goto L_0889F93C;
    case 724u: goto L_0889F948;
    case 725u: goto L_0889F950;
    case 726u: goto L_0889F958;
    case 727u: goto L_0889F97C;
    case 728u: goto L_0889F98C;
    case 729u: goto L_0889F994;
    case 730u: goto L_0889FB80;
    case 731u: goto L_0889FB98;
    case 732u: goto L_0889FBAC;
    case 733u: goto L_0889FBC8;
    case 734u: goto L_0889FBD0;
    case 735u: goto L_0889FBE4;
    case 736u: goto L_0889FBE8;
    case 737u: goto L_0889FBF0;
    case 738u: goto L_0889FBF8;
    case 739u: goto L_0889FC0C;
    case 740u: goto L_0889FC1C;
    case 741u: goto L_0889FC24;
    case 742u: goto L_0889FC2C;
    case 743u: goto L_0889FC40;
    case 744u: goto L_0889FC48;
    case 745u: goto L_0889FC68;
    case 746u: goto L_0889FC7C;
    case 747u: goto L_0889FC9C;
    case 748u: goto L_0889FCA0;
    case 749u: goto L_0889FCA8;
    case 750u: goto L_0889FCC4;
    case 751u: goto L_0889FCCC;
    case 752u: goto L_0889FCE0;
    case 753u: goto L_0889FCE4;
    case 754u: goto L_0889FCEC;
    case 755u: goto L_0889FCF4;
    case 756u: goto L_0889FCFC;
    case 757u: goto L_0889FD10;
    case 758u: goto L_0889FD18;
    case 759u: goto L_0889FD40;
    case 760u: goto L_0889FD54;
    case 761u: goto L_0889FD70;
    case 762u: goto L_0889FD78;
    case 763u: goto L_0889FD80;
    case 764u: goto L_0889FD9C;
    case 765u: goto L_0889FDA4;
    case 766u: goto L_0889FDB8;
    case 767u: goto L_0889FDBC;
    case 768u: goto L_0889FDC4;
    case 769u: goto L_0889FDCC;
    case 770u: goto L_0889FDD4;
    case 771u: goto L_0889FDE8;
    case 772u: goto L_0889FEFC;
    case 773u: goto L_0889FF10;
    case 774u: goto L_0889FF18;
    case 775u: goto L_0889FF20;
    case 776u: goto L_0889FF30;
    case 777u: goto L_0889FF4C;
    case 778u: goto L_0889FF54;
    case 779u: goto L_0889FF60;
    case 780u: goto L_0889FF68;
    case 781u: goto L_0889FF70;
    case 782u: goto L_0889FF74;
    case 783u: goto L_0889FF7C;
    case 784u: goto L_0889FF94;
    case 785u: goto L_0889FF9C;
    case 786u: goto L_0889FFA4;
    case 787u: goto L_0889FFAC;
    case 788u: goto L_0889FFB4;
    case 789u: goto L_0889FFCC;
    case 790u: goto L_0889FFE0;
    case 791u: goto L_0889FFE4;
    case 792u: goto L_0889FFEC;
    case 793u: goto L_0889FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0889C000:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(13056)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(13060));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(408));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(13056), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0889C038;
      }
      goto L_0889C02C;
    }
L_0889C02C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889C030;
L_0889C030:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C038:
    ctx.set_gpr(31, 0x0889C040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889C040u) goto L_0889C040;
    return;
L_0889C040:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889C030;
L_0889C488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889C4A4;
      }
      goto L_0889C494;
    }
L_0889C494:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C4B0;
      }
      goto L_0889C4A4;
    }
L_0889C4A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889C4A8;
L_0889C4A8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C4B0:
    ctx.set_gpr(31, 0x0889C4B8u);
    // nop
    goto L_0889C710;
L_0889C4B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889C4A8;
L_0889C50C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(408));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0889C538;
      }
      goto L_0889C524;
    }
L_0889C524:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[7] != 0u) {
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_0889C530;
    }
    goto L_0889C530;
L_0889C530:
    ctx.set_gpr(31, 0x0889C538u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889C538u) goto L_0889C538;
    return;
L_0889C538:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C558:
    ctx.set_gpr(7, ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[7] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0889C648;
      }
      goto L_0889C56C;
    }
L_0889C56C:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0889C57C;
L_0889C57C:
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889C650;
      }
      goto L_0889C58C;
    }
L_0889C58C:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889C650;
      }
      goto L_0889C5A4;
    }
L_0889C5A4:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889C650;
      }
      goto L_0889C5BC;
    }
L_0889C5BC:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889C650;
      }
      goto L_0889C5D4;
    }
L_0889C5D4:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889C650;
      }
      goto L_0889C5EC;
    }
L_0889C5EC:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889C650;
      }
      goto L_0889C604;
    }
L_0889C604:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889C650;
      }
      goto L_0889C61C;
    }
L_0889C61C:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889C650;
      }
      goto L_0889C634;
    }
L_0889C634:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    if (ctx.gpr[25] != 0u) {
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_0889C57C;
    }
    goto L_0889C644;
L_0889C644:
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
    goto L_0889C648;
L_0889C648:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C650:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0889C644;
L_0889C664:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
      if (branch_taken) {
          goto L_0889C688;
      }
      goto L_0889C66C;
    }
L_0889C66C:
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_0889C688;
      }
      goto L_0889C678;
    }
L_0889C678:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0889C688;
L_0889C688:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C690:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C6AC;
      }
      goto L_0889C698;
    }
L_0889C698:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_0889C6A4;
    }
    goto L_0889C6A4;
L_0889C6A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0889C6AC;
L_0889C6AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C6B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C6C8;
      }
      goto L_0889C6BC;
    }
L_0889C6BC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_0889C6C8;
    }
    goto L_0889C6C8;
L_0889C6C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C6D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
      if (branch_taken) {
          goto L_0889C708;
      }
      goto L_0889C6D8;
    }
L_0889C6D8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(8, ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_0889C708;
      }
      goto L_0889C6E0;
    }
L_0889C6E0:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
      if (branch_taken) {
          goto L_0889C708;
      }
      goto L_0889C6E8;
    }
L_0889C6E8:
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[7] : ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[6]) > static_cast<std::int32_t>(ctx.gpr[8]) ? ctx.gpr[6] : ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    goto L_0889C708;
L_0889C708:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[30]);
    ctx.set_gpr(30, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[23]);
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[22]);
    ctx.set_gpr(22, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[21]);
    ctx.set_gpr(21, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[30] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[20]);
    ctx.set_gpr(31, 0x0889C760u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[19]);
    goto L_0889CFD4;
L_0889C760:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(18, ctx.gpr[22] << 3u);
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(512));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0889CF6C;
      }
      goto L_0889C784;
    }
L_0889C784:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0889C788;
L_0889C788:
    ctx.set_gpr(19, ctx.gpr[22] << 3u);
    ctx.set_gpr(13, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(18, ctx.gpr[13] + ctx.gpr[19]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(20, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0889CF04;
      }
      goto L_0889C7B0;
    }
L_0889C7B0:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(2));
    goto L_0889C7B4;
L_0889C7B4:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[21]) < 32 ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0889C760;
      }
      goto L_0889C7C4;
    }
L_0889C7C4:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_0889CBD4;
      }
      goto L_0889C7CC;
    }
L_0889C7CC:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[19] << 2u);
    goto L_0889C7D4;
L_0889C7D4:
    ctx.set_gpr(9, ctx.gpr[16] + ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[22];
    ctx.set_gpr(31, 0x0889C7F4u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C7F4u) goto L_0889C7F4;
    return;
L_0889C7F4:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 6u));
    ctx.set_gpr(17, 0u - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[17] & 3u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889C8BC;
      }
      goto L_0889C80C;
    }
L_0889C80C:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889C86C;
      }
      goto L_0889C818;
    }
L_0889C818:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CB84;
      }
      goto L_0889C820;
    }
L_0889C820:
    // PSP CACHE is a no-op in coherent host memory.
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    goto L_0889C86C;
L_0889C86C:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889C9E4;
      }
      goto L_0889C8BC;
    }
L_0889C8BC:
    // PSP CACHE is a no-op in coherent host memory.
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(12, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(128));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(56), 0u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.set_gpr(11, ctx.gpr[4] + static_cast<std::uint32_t>(192));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), 0u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(256));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(52), 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_0889C8BC;
      }
      goto L_0889C9E4;
    }
L_0889C9E4:
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x0889CA08u);
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CA08u) goto L_0889CA08;
    return;
L_0889CA08:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(16, ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_0889C7D4;
      }
      goto L_0889CA10;
    }
L_0889CA10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_0889CAE0;
      }
      goto L_0889CA18;
    }
L_0889CA18:
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(3, ctx.gpr[20] & 3u);
      if (branch_taken) {
          goto L_0889CB18;
      }
      goto L_0889CA2C;
    }
L_0889CA2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0889CA30;
L_0889CA30:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x0889CA50u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CA50u) goto L_0889CA50;
    return;
L_0889CA50:
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CAE0;
      }
      goto L_0889CA5C;
    }
L_0889CA5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0889CA60;
L_0889CA60:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(21, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(30, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x0889CA84u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CA84u) goto L_0889CA84;
    return;
L_0889CA84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0889CAA0u);
    ctx.set_gpr(16, ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CAA0u) goto L_0889CAA0;
    return;
L_0889CAA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[15];
    ctx.set_gpr(31, 0x0889CAB8u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CAB8u) goto L_0889CAB8;
    return;
L_0889CAB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[23];
    ctx.set_gpr(31, 0x0889CAD4u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CAD4u) goto L_0889CAD4;
    return;
L_0889CAD4:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0889CA60;
    }
    goto L_0889CAE0;
L_0889CAE0:
    ctx.set_gpr(31, 0x0889CAE8u);
    ctx.set_gpr(4, 0u + 0u);
    goto L_0889CFDC;
L_0889CAE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CB18:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889CA5C;
      }
      goto L_0889CB20;
    }
L_0889CB20:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(21, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889CA2C;
      }
      goto L_0889CB28;
    }
L_0889CB28:
    if (ctx.gpr[21] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_0889CB5C;
    }
    goto L_0889CB30;
L_0889CB30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0889CB34;
L_0889CB34:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x0889CB54u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CB54u) goto L_0889CB54;
    return;
L_0889CB54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0889CA30;
L_0889CB5C:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x0889CB7Cu);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CB7Cu) goto L_0889CB7C;
    return;
L_0889CB7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0889CB34;
L_0889CB84:
    // PSP CACHE is a no-op in coherent host memory.
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    goto L_0889C820;
L_0889CBD4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[29]);
    ctx.set_gpr(16, ctx.gpr[30] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), 0u);
    goto L_0889CBE4;
L_0889CBE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x0889CBF8u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CBF8u) goto L_0889CBF8;
    return;
L_0889CBF8:
    ctx.set_gpr(30, static_cast<std::int32_t>(ctx.gpr[2]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
      if (branch_taken) {
          goto L_0889CDBC;
      }
      goto L_0889CC04;
    }
L_0889CC04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.set_gpr(25, 2245u << 16u);
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[24];
    ctx.set_gpr(4, ctx.gpr[25] + static_cast<std::uint32_t>(13504));
      if (branch_taken) {
          goto L_0889CEF4;
      }
      goto L_0889CC24;
    }
L_0889CC24:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0889CEBC;
      }
      goto L_0889CC2C;
    }
L_0889CC2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    goto L_0889CC30;
L_0889CC30:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889CC30;
      }
      goto L_0889CC80;
    }
L_0889CC80:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_0889CC84;
L_0889CC84:
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
      if (branch_taken) {
          goto L_0889CD70;
      }
      goto L_0889CC90;
    }
L_0889CC90:
    ctx.set_gpr(21, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[21] & 1u);
    ctx.set_gpr(23, ctx.gpr[7] + static_cast<std::uint32_t>(13504));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(17, ctx.gpr[10] + static_cast<std::uint32_t>(408));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_0889CEAC;
      }
      goto L_0889CCB8;
    }
L_0889CCB8:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    goto L_0889CCBC;
L_0889CCBC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[21];
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
      if (branch_taken) {
          goto L_0889CE98;
      }
      goto L_0889CCC8;
    }
L_0889CCC8:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_0889CCEC;
    }
    goto L_0889CCD0;
L_0889CCD0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[30];
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889CE8C;
      }
      goto L_0889CCD8;
    }
L_0889CCD8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[12];
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
      if (branch_taken) {
          goto L_0889CE78;
      }
      goto L_0889CCE0;
    }
L_0889CCE0:
    ctx.set_gpr(31, 0x0889CCE8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    goto L_0889E578;
L_0889CCE8:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0889CCEC;
L_0889CCEC:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0889CD70;
      }
      goto L_0889CCFC;
    }
L_0889CCFC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0889CD00;
L_0889CD00:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[21];
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889CE64;
      }
      goto L_0889CD08;
    }
L_0889CD08:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
        goto L_0889CD2C;
    }
    goto L_0889CD10;
L_0889CD10:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[30];
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889CE58;
      }
      goto L_0889CD18;
    }
L_0889CD18:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[13];
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
      if (branch_taken) {
          goto L_0889CE44;
      }
      goto L_0889CD20;
    }
L_0889CD20:
    ctx.set_gpr(31, 0x0889CD28u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    goto L_0889E578;
L_0889CD28:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_0889CD2C;
L_0889CD2C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[21];
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889CE30;
      }
      goto L_0889CD3C;
    }
L_0889CD3C:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(2));
        goto L_0889CD60;
    }
    goto L_0889CD44;
L_0889CD44:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[30];
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889CE24;
      }
      goto L_0889CD4C;
    }
L_0889CD4C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[14];
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
      if (branch_taken) {
          goto L_0889CE10;
      }
      goto L_0889CD54;
    }
L_0889CD54:
    ctx.set_gpr(31, 0x0889CD5Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    goto L_0889E578;
L_0889CD5C:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(2));
    goto L_0889CD60;
L_0889CD60:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0889CCFC;
      }
      goto L_0889CD70;
    }
L_0889CD70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[30];
    ctx.set_gpr(31, 0x0889CD90u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(512));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CD90u) goto L_0889CD90;
    return;
L_0889CD90:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889CDE8;
      }
      goto L_0889CD9C;
    }
L_0889CD9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(28)));
    goto L_0889CDB0;
L_0889CDB0:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0889CDB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CDB8u) goto L_0889CDB8;
    return;
L_0889CDB8:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    goto L_0889CDBC;
L_0889CDBC:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[17]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889CBE4;
      }
      goto L_0889CDE0;
    }
L_0889CDE0:
    // nop
    goto L_0889CA10;
L_0889CDE8:
    ctx.set_gpr(25, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[25] + static_cast<std::uint32_t>(13504));
    ctx.set_gpr(31, 0x0889CDF8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 889u, 0x0889B9A4u>(ctx, &aot_mem) && ctx.pc == 0x0889CDF8u) goto L_0889CDF8;
    return;
L_0889CDF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(32)));
    goto L_0889CDB0;
L_0889CE10:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_0889CE14;
L_0889CE14:
    ctx.set_gpr(31, 0x0889CE1Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 908u, 0x0889BD24u>(ctx, &aot_mem) && ctx.pc == 0x0889CE1Cu) goto L_0889CE1C;
    return;
L_0889CE1C:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(2));
    goto L_0889CD60;
L_0889CE24:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_0889CE14;
L_0889CE30:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0889CE3Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    goto L_0889E1E4;
L_0889CE3C:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(2));
    goto L_0889CD60;
L_0889CE44:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_0889CE48;
L_0889CE48:
    ctx.set_gpr(31, 0x0889CE50u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 908u, 0x0889BD24u>(ctx, &aot_mem) && ctx.pc == 0x0889CE50u) goto L_0889CE50;
    return;
L_0889CE50:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_0889CD2C;
L_0889CE58:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_0889CE48;
L_0889CE64:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0889CE70u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    goto L_0889E1E4;
L_0889CE70:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_0889CD2C;
L_0889CE78:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_0889CE7C;
L_0889CE7C:
    ctx.set_gpr(31, 0x0889CE84u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 908u, 0x0889BD24u>(ctx, &aot_mem) && ctx.pc == 0x0889CE84u) goto L_0889CE84;
    return;
L_0889CE84:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0889CCEC;
L_0889CE8C:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_0889CE7C;
L_0889CE98:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0889CEA4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    goto L_0889E1E4;
L_0889CEA4:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0889CCEC;
L_0889CEAC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0889CD00;
    }
    goto L_0889CEB4;
L_0889CEB4:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    goto L_0889CCBC;
L_0889CEBC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889CEEC;
      }
      goto L_0889CEC4;
    }
L_0889CEC4:
    if (ctx.gpr[6] == ctx.gpr[8]) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
        goto L_0889CEDC;
    }
    goto L_0889CECC;
L_0889CECC:
    ctx.set_gpr(31, 0x0889CED4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    goto L_0889E3FC;
L_0889CED4:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_0889CC84;
L_0889CEDC:
    ctx.set_gpr(31, 0x0889CEE4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 910u, 0x0889BE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CEE4u) goto L_0889CEE4;
    return;
L_0889CEE4:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_0889CC84;
L_0889CEEC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_0889CEDC;
L_0889CEF4:
    ctx.set_gpr(31, 0x0889CEFCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    goto L_0889E0C4;
L_0889CEFC:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_0889CC84;
L_0889CF04:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[24];
    ctx.set_gpr(31, 0x0889CF14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CF14u) goto L_0889CF14;
    return;
L_0889CF14:
    ctx.set_gpr(7, ctx.gpr[19] + ctx.gpr[29]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[15]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889CF50;
      }
      goto L_0889CF2C;
    }
L_0889CF2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
    goto L_0889C7B0;
L_0889CF50:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x0889CF64u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CF64u) goto L_0889CF64;
    return;
L_0889CF64:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(2));
    goto L_0889C7B4;
L_0889CF6C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x0889CF7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CF7Cu) goto L_0889CF7C;
    return;
L_0889CF7C:
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[29]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889CFB8;
      }
      goto L_0889CF94;
    }
L_0889CF94:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(400), ctx.gpr[12]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    goto L_0889C784;
L_0889CFB8:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x0889CFCCu);
    ctx.set_gpr(4, ctx.gpr[11] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889CFCCu) goto L_0889CFCC;
    return;
L_0889CFCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0889C788;
L_0889CFD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CFDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CFE4:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17620), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D034:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(17604)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889D070;
      }
      goto L_0889D048;
    }
L_0889D048:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17604), ctx.gpr[4]);
    goto L_0889D050;
L_0889D050:
    ctx.set_gpr(31, 0x0889D058u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(256));
    ctx.pc = 0x08B0DFA4u;
    return;
L_0889D058:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0889D070;
      }
      goto L_0889D060;
    }
L_0889D060:
    ctx.set_gpr(31, 0x0889D068u);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_0889D068:
    // nop
    goto L_0889D050;
L_0889D070:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D07C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17604)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889D0A4;
      }
      goto L_0889D094;
    }
L_0889D094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D0A4:
    ctx.set_gpr(31, 0x0889D0ACu);
    // nop
    ctx.pc = 0x08B0DFC4u;
    return;
L_0889D0AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_0889D0C4;
      }
      goto L_0889D0B4;
    }
L_0889D0B4:
    ctx.set_gpr(31, 0x0889D0BCu);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_0889D0BC:
    // nop
    goto L_0889D0A4;
L_0889D0C4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17604), 0u);
    goto L_0889D094;
L_0889D0CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17600)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-19328), 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17600)));
      if (branch_taken) {
          goto L_0889D110;
      }
      goto L_0889D0F4;
    }
L_0889D0F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17600), ctx.gpr[8]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D110:
    ctx.set_gpr(31, 0x0889D118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 892u, 0x0889BBCCu>(ctx, &aot_mem) && ctx.pc == 0x0889D118u) goto L_0889D118;
    return;
L_0889D118:
    ctx.set_gpr(6, 2248u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(-23680));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889D12Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4352));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889D12Cu) goto L_0889D12C;
    return;
L_0889D12C:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4904)));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(7, 2186u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(28828));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(-10652));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0889D154u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16384));
    ctx.pc = 0x08B0DDE4u;
    return;
L_0889D154:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-19328), ctx.gpr[2]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28844));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-19328)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) >= 0) {
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17600)));
        goto L_0889D0F4;
    }
    goto L_0889D16C;
L_0889D16C:
    ctx.set_gpr(31, 0x0889D174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 902u, 0x0889BCCCu>(ctx, &aot_mem) && ctx.pc == 0x0889D174u) goto L_0889D174;
    return;
L_0889D174:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17600)));
    goto L_0889D0F4;
L_0889D17C:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17600)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17600), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889D1A4;
      }
      goto L_0889D198;
    }
L_0889D198:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889D19C;
L_0889D19C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D1A4:
    ctx.set_gpr(31, 0x0889D1ACu);
    // nop
    goto L_0889D734;
L_0889D1AC:
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-23680));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889D1C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4352));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889D1C0u) goto L_0889D1C0;
    return;
L_0889D1C0:
    ctx.set_gpr(31, 0x0889D1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 895u, 0x0889BBECu>(ctx, &aot_mem) && ctx.pc == 0x0889D1C8u) goto L_0889D1C8;
    return;
L_0889D1C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889D19C;
L_0889D1D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 2248u << 16u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-23680))))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(-23680));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889D260;
      }
      goto L_0889D1FC;
    }
L_0889D1FC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0889D260;
      }
      goto L_0889D210;
    }
L_0889D210:
    ctx.set_gpr(31, 0x0889D218u);
    // nop
    goto L_0889F958;
L_0889D218:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1152));
    ctx.set_gpr(31, 0x0889D22Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_0889F958;
L_0889D22C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(2176));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3200));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4224), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-23680), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4228), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_0889D260;
L_0889D260:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D27C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889D2C8;
      }
      goto L_0889D290;
    }
L_0889D290:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_0889D29C;
    }
    goto L_0889D29C;
L_0889D29C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0889D2F0;
      }
      goto L_0889D2AC;
    }
L_0889D2AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0889D2B0;
L_0889D2B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0889D2D8;
      }
      goto L_0889D2B8;
    }
L_0889D2B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0889D2BC;
L_0889D2BC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889D2C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4352));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889D2C8u) goto L_0889D2C8;
    return;
L_0889D2C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D2D8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[6];
    ctx.set_gpr(31, 0x0889D2E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D2E8u) goto L_0889D2E8;
    return;
L_0889D2E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0889D2BC;
L_0889D2F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x0889D300u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D300u) goto L_0889D300;
    return;
L_0889D300:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0889D2B0;
L_0889D308:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0889D31C;
      }
      goto L_0889D318;
    }
L_0889D318:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_0889D31C;
L_0889D31C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D338:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889D3A4;
      }
      goto L_0889D350;
    }
L_0889D350:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_0889D35C;
    }
    goto L_0889D35C;
L_0889D35C:
    ctx.set_gpr(31, 0x0889D364u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 79u, 0x088A453Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D364u) goto L_0889D364;
    return;
L_0889D364:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(31, 0x0889D370u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 67u, 0x088A4464u>(ctx, &aot_mem) && ctx.pc == 0x0889D370u) goto L_0889D370;
    return;
L_0889D370:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-19328)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_0889D39C;
      }
      goto L_0889D384;
    }
L_0889D384:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-19328)));
    ctx.set_gpr(31, 0x0889D390u);
    // nop
    ctx.pc = 0x08B0DD7Cu;
    return;
L_0889D390:
    ctx.set_gpr(3, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28892));
      if (branch_taken) {
          goto L_0889D3B4;
      }
      goto L_0889D39C;
    }
L_0889D39C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0889D3A0;
L_0889D3A0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0889D3A4;
L_0889D3A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D3B4:
    ctx.set_gpr(31, 0x0889D3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 902u, 0x0889BCCCu>(ctx, &aot_mem) && ctx.pc == 0x0889D3BCu) goto L_0889D3BC;
    return;
L_0889D3BC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0889D3A0;
L_0889D3C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D3D8;
      }
      goto L_0889D3CC;
    }
L_0889D3CC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_0889D3D8;
    }
    goto L_0889D3D8;
L_0889D3D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D3E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D3F0;
      }
      goto L_0889D3E8;
    }
L_0889D3E8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_0889D3F0;
L_0889D3F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D3F8:
    ctx.set_gpr(3, 2227u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4904), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D404:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0889D430;
      }
      goto L_0889D420;
    }
L_0889D420:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889D448;
      }
      goto L_0889D430;
    }
L_0889D430:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0889D434;
L_0889D434:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D448:
    ctx.set_gpr(31, 0x0889D450u);
    // nop
    ctx.pc = 0x08B0DDBCu;
    return;
L_0889D450:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D654;
      }
      goto L_0889D460;
    }
L_0889D460:
    ctx.set_gpr(31, 0x0889D468u);
    // nop
    ctx.pc = 0x08B0DDBCu;
    return;
L_0889D468:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17612)));
    ctx.set_gpr(12, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[12]);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0889D488u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(17612), ctx.gpr[5]);
    goto L_0889CFD4;
L_0889D488:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x0889D4A8u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D4A8u) goto L_0889D4A8;
    return;
L_0889D4A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x0889D4C4u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D4C4u) goto L_0889D4C4;
    return;
L_0889D4C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(512));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0889D51C;
      }
      goto L_0889D4D4;
    }
L_0889D4D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0889D4D8;
L_0889D4D8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[15];
    ctx.set_gpr(31, 0x0889D4ECu);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D4ECu) goto L_0889D4EC;
    return;
L_0889D4EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x0889D504u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D504u) goto L_0889D504;
    return;
L_0889D504:
    ctx.set_gpr(31, 0x0889D50Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
    ctx.pc = 0x08B0DD34u;
    return;
L_0889D50C:
    ctx.set_gpr(31, 0x0889D514u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0889CFDC;
L_0889D514:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0889D434;
L_0889D51C:
    if (ctx.gpr[13] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_0889D4D8;
    }
    goto L_0889D524;
L_0889D524:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[9] << 2u);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4224)));
    ctx.set_gpr(31, 0x0889D544u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    goto L_0889E750;
L_0889D544:
    ctx.set_gpr(31, 0x0889D54Cu);
    // nop
    ctx.pc = 0x08B0DDBCu;
    return;
L_0889D54C:
    ctx.set_gpr(14, 2245u << 16u);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(17616)));
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17620)));
    ctx.set_gpr(25, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(15, ctx.gpr[24] + ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(17616), ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(10, 2245u << 16u);
      if (branch_taken) {
          goto L_0889D62C;
      }
      goto L_0889D570;
    }
L_0889D570:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(17604)));
    if (ctx.gpr[18] != 0u) {
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
        goto L_0889D610;
    }
    goto L_0889D57C;
L_0889D57C:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(6, ctx.gpr[7] << 2u);
    ctx.set_gpr(11, ctx.gpr[6] + ctx.gpr[16]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4224)));
    ctx.set_gpr(31, 0x0889D59Cu);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 73u, 0x088A44D4u>(ctx, &aot_mem) && ctx.pc == 0x0889D59Cu) goto L_0889D59C;
    return;
L_0889D59C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889D430;
      }
      goto L_0889D5A4;
    }
L_0889D5A4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[14];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0889D434;
      }
      goto L_0889D5B0;
    }
L_0889D5B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0889D5B4;
L_0889D5B4:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17608)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(17608), ctx.gpr[7]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x0889D5D8u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D5D8u) goto L_0889D5D8;
    return;
L_0889D5D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x0889D5F4u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D5F4u) goto L_0889D5F4;
    return;
L_0889D5F4:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[17];
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0889D50C;
      }
      goto L_0889D608;
    }
L_0889D608:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_0889D50C;
L_0889D610:
    ctx.set_gpr(4, 0u | 32768u);
    ctx.set_gpr(5, ctx.gpr[13] << 2u);
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x0889D624u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4224)));
    ctx.pc = 0x08B0DFBCu;
    return;
L_0889D624:
    // nop
    goto L_0889D59C;
L_0889D62C:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(24, ctx.gpr[25] << 2u);
    ctx.set_gpr(15, ctx.gpr[24] + ctx.gpr[16]);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0889D644u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(4224)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D644u) goto L_0889D644;
    return;
L_0889D644:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_0889D5B4;
    }
    goto L_0889D64C;
L_0889D64C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0889D434;
L_0889D654:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0889D65Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D65Cu) goto L_0889D65C;
    return;
L_0889D65C:
    // nop
    goto L_0889D460;
L_0889D664:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 2248u << 16u);
    ctx.set_gpr(3, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-19324), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-19316), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(-23680));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1))))));
    goto L_0889D6AC;
L_0889D6AC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1000));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(-23680));
      if (branch_taken) {
          goto L_0889D718;
      }
      goto L_0889D6B8;
    }
L_0889D6B8:
    ctx.set_gpr(31, 0x0889D6C0u);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_0889D6C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19324)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, 2248u << 16u);
      if (branch_taken) {
          goto L_0889D6E0;
      }
      goto L_0889D6CC;
    }
L_0889D6CC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19316)));
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-19316), ctx.gpr[4]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1))))));
    goto L_0889D6AC;
L_0889D6E0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0889D6F0u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19320), ctx.gpr[2]);
    ctx.pc = 0x08B0DE84u;
    return;
L_0889D6F0:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_0889D718:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-23680))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[21];
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0889D6C0;
      }
      goto L_0889D724;
    }
L_0889D724:
    ctx.set_gpr(31, 0x0889D72Cu);
    // nop
    goto L_0889D404;
L_0889D72C:
    // nop
    goto L_0889D6C0;
L_0889D734:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 2248u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19328)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889D774;
      }
      goto L_0889D75C;
    }
L_0889D75C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19328)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889D76Cu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DD7Cu;
    return;
L_0889D76C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0889D7F0;
      }
      goto L_0889D774;
    }
L_0889D774:
    ctx.set_gpr(19, 2248u << 16u);
    goto L_0889D778;
L_0889D778:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-19320), 0u);
    ctx.set_gpr(18, 2248u << 16u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
    goto L_0889D78C;
L_0889D78C:
    ctx.set_gpr(31, 0x0889D794u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-19324), ctx.gpr[17]);
    ctx.pc = 0x08B0DD34u;
    return;
L_0889D794:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-19320)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_0889D78C;
      }
      goto L_0889D7A0;
    }
L_0889D7A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19328)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0889D7C4;
      }
      goto L_0889D7AC;
    }
L_0889D7AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19328)));
    ctx.set_gpr(31, 0x0889D7B8u);
    // nop
    ctx.pc = 0x08B0DE74u;
    return;
L_0889D7B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, 2225u << 16u);
      if (branch_taken) {
          goto L_0889D7E0;
      }
      goto L_0889D7C0;
    }
L_0889D7C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0889D7C4;
L_0889D7C4:
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
L_0889D7E0:
    ctx.set_gpr(31, 0x0889D7E8u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(28936));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 902u, 0x0889BCCCu>(ctx, &aot_mem) && ctx.pc == 0x0889D7E8u) goto L_0889D7E8;
    return;
L_0889D7E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0889D7C4;
L_0889D7F0:
    ctx.set_gpr(31, 0x0889D7F8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28892));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 902u, 0x0889BCCCu>(ctx, &aot_mem) && ctx.pc == 0x0889D7F8u) goto L_0889D7F8;
    return;
L_0889D7F8:
    ctx.set_gpr(19, 2248u << 16u);
    goto L_0889D778;
L_0889D800:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17624)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889D834;
      }
      goto L_0889D818;
    }
L_0889D818:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17624)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17624), ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D834:
    ctx.set_gpr(31, 0x0889D83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 31u, 0x08894244u>(ctx, &aot_mem) && ctx.pc == 0x0889D83Cu) goto L_0889D83C;
    return;
L_0889D83C:
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-19312));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889D850u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889D850u) goto L_0889D850;
    return;
L_0889D850:
    // nop
    goto L_0889D818;
L_0889D858:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17624)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17624), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17624)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D888;
      }
      goto L_0889D87C;
    }
L_0889D87C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889D880;
L_0889D880:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D888:
    ctx.set_gpr(31, 0x0889D890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 36u, 0x088942A4u>(ctx, &aot_mem) && ctx.pc == 0x0889D890u) goto L_0889D890;
    return;
L_0889D890:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-19312));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889D8A4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889D8A4u) goto L_0889D8A4;
    return;
L_0889D8A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889D880;
L_0889D900:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(3, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-19312));
    goto L_0889D928;
L_0889D928:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[3] == ctx.gpr[18]) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
        goto L_0889DA14;
    }
    goto L_0889D934;
L_0889D934:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    goto L_0889D938;
L_0889D938:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0889D9E4;
      }
      goto L_0889D940;
    }
L_0889D940:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80))))));
    goto L_0889D944;
L_0889D944:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[18];
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889D9B4;
      }
      goto L_0889D94C;
    }
L_0889D94C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(120))))));
    goto L_0889D950;
L_0889D950:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[18];
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_0889D984;
      }
      goto L_0889D958;
    }
L_0889D958:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_0889D95C;
L_0889D95C:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_0889D928;
      }
      goto L_0889D968;
    }
L_0889D968:
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
L_0889D984:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[9] != ctx.gpr[3]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
        goto L_0889D95C;
    }
    goto L_0889D990;
L_0889D990:
    ctx.set_gpr(31, 0x0889D998u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 97u, 0x08894778u>(ctx, &aot_mem) && ctx.pc == 0x0889D998u) goto L_0889D998;
    return;
L_0889D998:
    ctx.set_gpr(31, 0x0889D9A0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 113u, 0x088948B0u>(ctx, &aot_mem) && ctx.pc == 0x0889D9A0u) goto L_0889D9A0;
    return;
L_0889D9A0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0889D9ACu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 118u, 0x088948E8u>(ctx, &aot_mem) && ctx.pc == 0x0889D9ACu) goto L_0889D9AC;
    return;
L_0889D9AC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_0889D958;
L_0889D9B4:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[8] != ctx.gpr[18]) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(120))))));
        goto L_0889D950;
    }
    goto L_0889D9C0;
L_0889D9C0:
    ctx.set_gpr(31, 0x0889D9C8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 97u, 0x08894778u>(ctx, &aot_mem) && ctx.pc == 0x0889D9C8u) goto L_0889D9C8;
    return;
L_0889D9C8:
    ctx.set_gpr(31, 0x0889D9D0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 113u, 0x088948B0u>(ctx, &aot_mem) && ctx.pc == 0x0889D9D0u) goto L_0889D9D0;
    return;
L_0889D9D0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0889D9DCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 118u, 0x088948E8u>(ctx, &aot_mem) && ctx.pc == 0x0889D9DCu) goto L_0889D9DC;
    return;
L_0889D9DC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_0889D94C;
L_0889D9E4:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[6] != ctx.gpr[18]) {
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80))))));
        goto L_0889D944;
    }
    goto L_0889D9F0;
L_0889D9F0:
    ctx.set_gpr(31, 0x0889D9F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 97u, 0x08894778u>(ctx, &aot_mem) && ctx.pc == 0x0889D9F8u) goto L_0889D9F8;
    return;
L_0889D9F8:
    ctx.set_gpr(31, 0x0889DA00u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 113u, 0x088948B0u>(ctx, &aot_mem) && ctx.pc == 0x0889DA00u) goto L_0889DA00;
    return;
L_0889DA00:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0889DA0Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 118u, 0x088948E8u>(ctx, &aot_mem) && ctx.pc == 0x0889DA0Cu) goto L_0889DA0C;
    return;
L_0889DA0C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_0889D940;
L_0889DA14:
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
        goto L_0889D938;
    }
    goto L_0889DA1C;
L_0889DA1C:
    ctx.set_gpr(31, 0x0889DA24u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 97u, 0x08894778u>(ctx, &aot_mem) && ctx.pc == 0x0889DA24u) goto L_0889DA24;
    return;
L_0889DA24:
    ctx.set_gpr(31, 0x0889DA2Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 113u, 0x088948B0u>(ctx, &aot_mem) && ctx.pc == 0x0889DA2Cu) goto L_0889DA2C;
    return;
L_0889DA2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x0889DA38u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 118u, 0x088948E8u>(ctx, &aot_mem) && ctx.pc == 0x0889DA38u) goto L_0889DA38;
    return;
L_0889DA38:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_0889D934;
L_0889DA40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-19312));
    ctx.set_gpr(6, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_0889DA64;
L_0889DA64:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0889DBAC;
      }
      goto L_0889DA78;
    }
L_0889DA78:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0889DBAC;
      }
      goto L_0889DA88;
    }
L_0889DA88:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0889DBAC;
      }
      goto L_0889DA98;
    }
L_0889DA98:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0889DBAC;
      }
      goto L_0889DAA8;
    }
L_0889DAA8:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0889DBAC;
      }
      goto L_0889DAB8;
    }
L_0889DAB8:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0889DBAC;
      }
      goto L_0889DAC8;
    }
L_0889DAC8:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0889DBAC;
      }
      goto L_0889DAD8;
    }
L_0889DAD8:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0889DBAC;
      }
      goto L_0889DAEC;
    }
L_0889DAEC:
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_0889DA64;
    }
    goto L_0889DAF4;
L_0889DAF4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0889DB68;
      }
      goto L_0889DAFC;
    }
L_0889DAFC:
    ctx.set_gpr(31, 0x0889DB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 41u, 0x088942DCu>(ctx, &aot_mem) && ctx.pc == 0x0889DB04u) goto L_0889DB04;
    return;
L_0889DB04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889DB7C;
      }
      goto L_0889DB0C;
    }
L_0889DB0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0889DB18u);
    ctx.set_gpr(5, 0u | 44100u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 279u, 0x088927E4u>(ctx, &aot_mem) && ctx.pc == 0x0889DB18u) goto L_0889DB18;
    return;
L_0889DB18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x0889DB24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 289u, 0x0889285Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DB24u) goto L_0889DB24;
    return;
L_0889DB24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x0889DB30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 299u, 0x088928D4u>(ctx, &aot_mem) && ctx.pc == 0x0889DB30u) goto L_0889DB30;
    return;
L_0889DB30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x0889DB3Cu);
    ctx.set_gpr(5, 0u | 44100u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 269u, 0x0889276Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DB3Cu) goto L_0889DB3C;
    return;
L_0889DB3C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 0u | 44100u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    goto L_0889DB68;
L_0889DB68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DB7C:
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_0889DB68;
L_0889DBAC:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_0889DAF4;
L_0889DBB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889DC20;
      }
      goto L_0889DBC8;
    }
L_0889DBC8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DBF0;
      }
      goto L_0889DBD4;
    }
L_0889DBD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_0889DBF0;
    }
    goto L_0889DBE4;
L_0889DBE4:
    ctx.set_gpr(31, 0x0889DBECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 72u, 0x08894498u>(ctx, &aot_mem) && ctx.pc == 0x0889DBECu) goto L_0889DBEC;
    return;
L_0889DBEC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0889DBF0;
L_0889DBF0:
    ctx.set_gpr(31, 0x0889DBF8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 54u, 0x088943C0u>(ctx, &aot_mem) && ctx.pc == 0x0889DBF8u) goto L_0889DBF8;
    return;
L_0889DBF8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_0889DC20;
L_0889DC20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DC30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889DC60;
      }
      goto L_0889DC4C;
    }
L_0889DC4C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0889DC64;
      }
      goto L_0889DC54;
    }
L_0889DC54:
    ctx.set_gpr(31, 0x0889DC5Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 77u, 0x088944D8u>(ctx, &aot_mem) && ctx.pc == 0x0889DC5Cu) goto L_0889DC5C;
    return;
L_0889DC5C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_0889DC60;
L_0889DC60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0889DC64;
L_0889DC64:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DC74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889DCA4;
      }
      goto L_0889DC90;
    }
L_0889DC90:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0889DCA8;
      }
      goto L_0889DC98;
    }
L_0889DC98:
    ctx.set_gpr(31, 0x0889DCA0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 87u, 0x08894550u>(ctx, &aot_mem) && ctx.pc == 0x0889DCA0u) goto L_0889DCA0;
    return;
L_0889DCA0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    goto L_0889DCA4;
L_0889DCA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0889DCA8;
L_0889DCA8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DCB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0889DD1C;
      }
      goto L_0889DCD0;
    }
L_0889DCD0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0889DCF8;
      }
      goto L_0889DCDC;
    }
L_0889DCDC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[4]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_0889DCF8;
    }
    goto L_0889DCE8;
L_0889DCE8:
    ctx.set_gpr(31, 0x0889DCF0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 72u, 0x08894498u>(ctx, &aot_mem) && ctx.pc == 0x0889DCF0u) goto L_0889DCF0;
    return;
L_0889DCF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0889DCF8;
L_0889DCF8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_0889DD18;
      }
      goto L_0889DD10;
    }
L_0889DD10:
    ctx.set_gpr(31, 0x0889DD18u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 62u, 0x08894428u>(ctx, &aot_mem) && ctx.pc == 0x0889DD18u) goto L_0889DD18;
    return;
L_0889DD18:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_0889DD1C;
L_0889DD1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DD30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889DD6C;
      }
      goto L_0889DD44;
    }
L_0889DD44:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0889DD70;
      }
      goto L_0889DD50;
    }
L_0889DD50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_0889DD70;
    }
    goto L_0889DD60;
L_0889DD60:
    ctx.set_gpr(31, 0x0889DD68u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 72u, 0x08894498u>(ctx, &aot_mem) && ctx.pc == 0x0889DD68u) goto L_0889DD68;
    return;
L_0889DD68:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0889DD6C;
L_0889DD6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0889DD70;
L_0889DD70:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DD7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889DDAC;
      }
      goto L_0889DD98;
    }
L_0889DD98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0889DDB0;
      }
      goto L_0889DDA0;
    }
L_0889DDA0:
    ctx.set_gpr(31, 0x0889DDA8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 269u, 0x0889276Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DDA8u) goto L_0889DDA8;
    return;
L_0889DDA8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    goto L_0889DDAC;
L_0889DDAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0889DDB0;
L_0889DDB0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DDC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0889DDF8;
      }
      goto L_0889DDE0;
    }
L_0889DDE0:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
        goto L_0889DE20;
    }
    goto L_0889DDE8;
L_0889DDE8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889DE10;
      }
      goto L_0889DDF8;
    }
L_0889DDF8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    goto L_0889DDFC;
L_0889DDFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DE10:
    ctx.set_gpr(31, 0x0889DE18u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 62u, 0x08894428u>(ctx, &aot_mem) && ctx.pc == 0x0889DE18u) goto L_0889DE18;
    return;
L_0889DE18:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    goto L_0889DDFC;
L_0889DE20:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[6] != ctx.gpr[5]) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
        goto L_0889DDFC;
    }
    goto L_0889DE2C;
L_0889DE2C:
    ctx.set_gpr(31, 0x0889DE34u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 72u, 0x08894498u>(ctx, &aot_mem) && ctx.pc == 0x0889DE34u) goto L_0889DE34;
    return;
L_0889DE34:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    goto L_0889DDFC;
L_0889DE3C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DE44:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DE4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17628)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-18032));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_0889DE8C;
      }
      goto L_0889DE74;
    }
L_0889DE74:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17628), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DE8C:
    ctx.set_gpr(31, 0x0889DE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889DE94u) goto L_0889DE94;
    return;
L_0889DE94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17628)));
    goto L_0889DE74;
L_0889DE9C:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(17628)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-18032));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(17628), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0889DED4;
      }
      goto L_0889DEC8;
    }
L_0889DEC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889DECC;
L_0889DECC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DED4:
    ctx.set_gpr(31, 0x0889DEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889DEDCu) goto L_0889DEDC;
    return;
L_0889DEDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889DECC;
L_0889DEE4:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-18032));
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(13, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(11, ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_0889DF18;
L_0889DF18:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889DFC4;
      }
      goto L_0889DF28;
    }
L_0889DF28:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[24] == 0u) {
    ctx.set_gpr(13, ctx.gpr[6] + 0u);
        goto L_0889DF94;
    }
    goto L_0889DF34;
L_0889DF34:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889DFBC;
      }
      goto L_0889DF40;
    }
L_0889DF40:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889DFB4;
      }
      goto L_0889DF4C;
    }
L_0889DF4C:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889DFAC;
      }
      goto L_0889DF58;
    }
L_0889DF58:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889DFA4;
      }
      goto L_0889DF64;
    }
L_0889DF64:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889DF9C;
      }
      goto L_0889DF70;
    }
L_0889DF70:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889DF90;
      }
      goto L_0889DF80;
    }
L_0889DF80:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889DF18;
      }
      goto L_0889DF88;
    }
L_0889DF88:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[13] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DF90:
    ctx.set_gpr(13, ctx.gpr[12] + 0u);
    goto L_0889DF94;
L_0889DF94:
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    goto L_0889DF88;
L_0889DF9C:
    ctx.set_gpr(13, ctx.gpr[11] + 0u);
    goto L_0889DF94;
L_0889DFA4:
    ctx.set_gpr(13, ctx.gpr[10] + 0u);
    goto L_0889DF94;
L_0889DFAC:
    ctx.set_gpr(13, ctx.gpr[9] + 0u);
    goto L_0889DF94;
L_0889DFB4:
    ctx.set_gpr(13, ctx.gpr[8] + 0u);
    goto L_0889DF94;
L_0889DFBC:
    ctx.set_gpr(13, ctx.gpr[7] + 0u);
    goto L_0889DF94;
L_0889DFC4:
    ctx.set_gpr(13, ctx.gpr[3] + 0u);
    goto L_0889DF94;
L_0889DFCC:
    if (ctx.gpr[4] != 0u) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
        goto L_0889DFD4;
    }
    goto L_0889DFD4;
L_0889DFD4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DFDC:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E06C;
      }
      goto L_0889DFF0;
    }
L_0889DFF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889E06C;
      }
      goto L_0889DFF8;
    }
L_0889DFF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_0889E06C;
      }
      goto L_0889E000;
    }
L_0889E000:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(-18032));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(8, ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_0889E074;
      }
      goto L_0889E018;
    }
L_0889E018:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1024));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0889E06C;
      }
      goto L_0889E030;
    }
L_0889E030:
    ctx.set_gpr(8, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(24, ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(25, ctx.gpr[5] + static_cast<std::uint32_t>(2048));
    ctx.set_gpr(15, ctx.gpr[5] + static_cast<std::uint32_t>(3072));
    ctx.set_gpr(14, ctx.gpr[24] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(6, ctx.gpr[14] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
      if (branch_taken) {
          goto L_0889E030;
      }
      goto L_0889E06C;
    }
L_0889E06C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E074:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889E030;
      }
      goto L_0889E07C;
    }
L_0889E07C:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889E018;
      }
      goto L_0889E084;
    }
L_0889E084:
    if (ctx.gpr[12] != 0u) {
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_0889E0A0;
    }
    goto L_0889E08C;
L_0889E08C:
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0889E0A0;
L_0889E0A0:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_0889E018;
L_0889E0B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0889E0BC;
      }
      goto L_0889E0B8;
    }
L_0889E0B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0889E0BC;
L_0889E0BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E0C4:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[1]);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(32))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(34))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(38))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(46))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(50))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(58))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(1, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(62))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[1]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0889E0C4;
      }
      goto L_0889E1DC;
    }
L_0889E1DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E1E4:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(32))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(34))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(38))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(46))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(50))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[1]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[1]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(58))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[1]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(62))))));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(1, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(1, ctx.gpr[1] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[1]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0889E1E4;
      }
      goto L_0889E3F4;
    }
L_0889E3F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E3FC:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    // nop
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(10, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(9, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    // nop
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(10, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(9, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    // nop
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(10, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(9, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26))))));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    // nop
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(10, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(9, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889E3FC;
      }
      goto L_0889E570;
    }
L_0889E570:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E578:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30))))));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889E578;
      }
      goto L_0889E748;
    }
L_0889E748:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E750:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(10)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(22)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(26)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0889E750;
      }
      goto L_0889E868;
    }
L_0889E868:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E870:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(17640));
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889E88Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889E88Cu) goto L_0889E88C;
    return;
L_0889E88C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17632), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17636), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8A8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(17640));
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889E8C4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889E8C4u) goto L_0889E8C4;
    return;
L_0889E8C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17632), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17636), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8E0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17632), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17636), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(17640));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889E918u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0889E918u) goto L_0889E918;
    return;
L_0889E918:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(17632)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0889E938;
      }
      goto L_0889E928;
    }
L_0889E928:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0889E92C;
L_0889E92C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E938:
    ctx.set_gpr(6, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0889E944u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17636)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889E944u) goto L_0889E944;
    return;
L_0889E944:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0889E92C;
L_0889E964:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17896)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17896), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E978:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17896)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17896), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E98C:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17912)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17912), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17912)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(6, 2245u << 16u);
      if (branch_taken) {
          goto L_0889E9B4;
      }
      goto L_0889E9AC;
    }
L_0889E9AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E9B4:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(17904), 0u);
    goto L_0889E9AC;
L_0889E9BC:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17912)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17912), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17912)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(3, 2245u << 16u);
      if (branch_taken) {
          goto L_0889E9DC;
      }
      goto L_0889E9D8;
    }
L_0889E9D8:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17904), 0u);
    goto L_0889E9DC;
L_0889E9DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E9E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889E9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x0889E9F4u) goto L_0889E9F4;
    return;
L_0889E9F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EA00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889EA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EA10u) goto L_0889EA10;
    return;
L_0889EA10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EA1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889EA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 452u, 0x088A2870u>(ctx, &aot_mem) && ctx.pc == 0x0889EA2Cu) goto L_0889EA2C;
    return;
L_0889EA2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EA38:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889EA4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(29000));
    goto L_0889EA1C;
L_0889EA4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EA58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889EA6Cu);
    ctx.set_gpr(16, 2245u << 16u);
    goto L_0889E98C;
L_0889EA6C:
    ctx.set_gpr(31, 0x0889EA74u);
    // nop
    goto L_0889E9E4;
L_0889EA74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17916)));
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-17776));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1152));
      if (branch_taken) {
          goto L_0889EAA8;
      }
      goto L_0889EA8C;
    }
L_0889EA8C:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0889EA98u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17916), ctx.gpr[3]);
    goto L_0889EA00;
L_0889EA98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EAA8:
    ctx.set_gpr(31, 0x0889EAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889EAB0u) goto L_0889EAB0;
    return;
L_0889EAB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17916)));
    goto L_0889EA8C;
L_0889EAB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889EAC8u);
    // nop
    goto L_0889E9E4;
L_0889EAC8:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(17916)));
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1152));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-17776));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(17916), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0889EB08;
      }
      goto L_0889EAEC;
    }
L_0889EAEC:
    ctx.set_gpr(31, 0x0889EAF4u);
    // nop
    goto L_0889EA00;
L_0889EAF4:
    ctx.set_gpr(31, 0x0889EAFCu);
    // nop
    goto L_0889E9BC;
L_0889EAFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EB08:
    ctx.set_gpr(31, 0x0889EB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889EB10u) goto L_0889EB10;
    return;
L_0889EB10:
    // nop
    goto L_0889EAEC;
L_0889EB18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889EB38u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    goto L_0889E9E4;
L_0889EB38:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-17776));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_0889EB4C;
L_0889EB4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0889EBD4;
      }
      goto L_0889EB54;
    }
L_0889EB54:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0889EBD4;
      }
      goto L_0889EB64;
    }
L_0889EB64:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0889EBD4;
      }
      goto L_0889EB74;
    }
L_0889EB74:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0889EBD4;
      }
      goto L_0889EB84;
    }
L_0889EB84:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0889EBD4;
      }
      goto L_0889EB94;
    }
L_0889EB94:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0889EBD4;
      }
      goto L_0889EBA4;
    }
L_0889EBA4:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0889EBD4;
      }
      goto L_0889EBB4;
    }
L_0889EBB4:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0889EBD4;
      }
      goto L_0889EBC4;
    }
L_0889EBC4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_0889EB4C;
    }
    goto L_0889EBD4;
L_0889EBD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0889EC34;
      }
      goto L_0889EBE0;
    }
L_0889EBE0:
    ctx.set_gpr(9, ctx.gpr[5] << 3u);
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[8] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(25, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.set_gpr(6, 2186u << 16u);
    ctx.set_gpr(18, 2225u << 16u);
    ctx.set_gpr(24, ctx.gpr[25] + static_cast<std::uint32_t>(4908));
    ctx.set_gpr(15, ctx.gpr[18] + static_cast<std::uint32_t>(28984));
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(-5576));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_0889EC34;
L_0889EC34:
    ctx.set_gpr(31, 0x0889EC3Cu);
    // nop
    goto L_0889EA00;
L_0889EC3C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0889EC58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889EC70u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    goto L_0889E9E4;
L_0889EC70:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29012));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889ED10;
      }
      goto L_0889EC84;
    }
L_0889EC84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29024));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0889ECE0;
      }
      goto L_0889ECA0;
    }
L_0889ECA0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_0889ECC4;
L_0889ECC4:
    ctx.set_gpr(31, 0x0889ECCCu);
    // nop
    goto L_0889EA00;
L_0889ECCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889ECE0:
    ctx.set_gpr(31, 0x0889ECE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889ECE8u) goto L_0889ECE8;
    return;
L_0889ECE8:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29036));
    ctx.set_gpr(31, 0x0889ECFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889ECFCu) goto L_0889ECFC;
    return;
L_0889ECFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889ED00;
L_0889ED00:
    ctx.set_gpr(31, 0x0889ED08u);
    // nop
    goto L_0889EA1C;
L_0889ED08:
    // nop
    goto L_0889ECC4;
L_0889ED10:
    ctx.set_gpr(31, 0x0889ED18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889ED18u) goto L_0889ED18;
    return;
L_0889ED18:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29068));
    ctx.set_gpr(31, 0x0889ED2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889ED2Cu) goto L_0889ED2C;
    return;
L_0889ED2C:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889ED00;
L_0889ED34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889ED54u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    goto L_0889E9E4;
L_0889ED54:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29096));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0889EDE0;
      }
      goto L_0889ED68;
    }
L_0889ED68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29108));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0889EDB0;
      }
      goto L_0889ED88;
    }
L_0889ED88:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0889ED8C;
L_0889ED8C:
    ctx.set_gpr(31, 0x0889ED94u);
    // nop
    goto L_0889EA00;
L_0889ED94:
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
L_0889EDB0:
    ctx.set_gpr(31, 0x0889EDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889EDB8u) goto L_0889EDB8;
    return;
L_0889EDB8:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29036));
    ctx.set_gpr(31, 0x0889EDCCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889EDCCu) goto L_0889EDCC;
    return;
L_0889EDCC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889EDD0;
L_0889EDD0:
    ctx.set_gpr(31, 0x0889EDD8u);
    // nop
    goto L_0889EA1C;
L_0889EDD8:
    // nop
    goto L_0889ED8C;
L_0889EDE0:
    ctx.set_gpr(31, 0x0889EDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889EDE8u) goto L_0889EDE8;
    return;
L_0889EDE8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29068));
    ctx.set_gpr(31, 0x0889EDFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889EDFCu) goto L_0889EDFC;
    return;
L_0889EDFC:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889EDD0;
L_0889EE04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889EE2Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    goto L_0889E9E4;
L_0889EE2C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29120));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889EEB8;
      }
      goto L_0889EE40;
    }
L_0889EE40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29132));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0889EE88;
      }
      goto L_0889EE5C;
    }
L_0889EE5C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    goto L_0889EE64;
L_0889EE64:
    ctx.set_gpr(31, 0x0889EE6Cu);
    // nop
    goto L_0889EA00;
L_0889EE6C:
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
L_0889EE88:
    ctx.set_gpr(31, 0x0889EE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889EE90u) goto L_0889EE90;
    return;
L_0889EE90:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29036));
    ctx.set_gpr(31, 0x0889EEA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889EEA4u) goto L_0889EEA4;
    return;
L_0889EEA4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889EEA8;
L_0889EEA8:
    ctx.set_gpr(31, 0x0889EEB0u);
    // nop
    goto L_0889EA1C;
L_0889EEB0:
    // nop
    goto L_0889EE64;
L_0889EEB8:
    ctx.set_gpr(31, 0x0889EEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889EEC0u) goto L_0889EEC0;
    return;
L_0889EEC0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29068));
    ctx.set_gpr(31, 0x0889EED4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889EED4u) goto L_0889EED4;
    return;
L_0889EED4:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889EEA8;
L_0889EEDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889EEF4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    goto L_0889E9E4;
L_0889EEF4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29144));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889EF7C;
      }
      goto L_0889EF08;
    }
L_0889EF08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29156));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0889EF4C;
      }
      goto L_0889EF24;
    }
L_0889EF24:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_0889EF30;
L_0889EF30:
    ctx.set_gpr(31, 0x0889EF38u);
    // nop
    goto L_0889EA00;
L_0889EF38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EF4C:
    ctx.set_gpr(31, 0x0889EF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889EF54u) goto L_0889EF54;
    return;
L_0889EF54:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29036));
    ctx.set_gpr(31, 0x0889EF68u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889EF68u) goto L_0889EF68;
    return;
L_0889EF68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889EF6C;
L_0889EF6C:
    ctx.set_gpr(31, 0x0889EF74u);
    // nop
    goto L_0889EA1C;
L_0889EF74:
    // nop
    goto L_0889EF30;
L_0889EF7C:
    ctx.set_gpr(31, 0x0889EF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889EF84u) goto L_0889EF84;
    return;
L_0889EF84:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29068));
    ctx.set_gpr(31, 0x0889EF98u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889EF98u) goto L_0889EF98;
    return;
L_0889EF98:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889EF6C;
L_0889EFA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889EFC0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    goto L_0889E9E4;
L_0889EFC0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0889F064;
      }
      goto L_0889EFC8;
    }
L_0889EFC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889F024;
      }
      goto L_0889EFD4;
    }
L_0889EFD4:
    if (ctx.gpr[17] == ctx.gpr[6]) {
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_0889EFF0;
    }
    goto L_0889EFDC;
L_0889EFDC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0889EFF0;
      }
      goto L_0889EFE4;
    }
L_0889EFE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_0889F014;
    }
    goto L_0889EFF0;
L_0889EFF0:
    ctx.set_gpr(31, 0x0889EFF8u);
    // nop
    goto L_0889EA00;
L_0889EFF8:
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
L_0889F014:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0889F01Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F01Cu) goto L_0889F01C;
    return;
L_0889F01C:
    ctx.set_gpr(18, 0u + 0u);
    goto L_0889EFF0;
L_0889F024:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29180));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0889F03Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F03Cu) goto L_0889F03C;
    return;
L_0889F03C:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29036));
    ctx.set_gpr(31, 0x0889F050u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F050u) goto L_0889F050;
    return;
L_0889F050:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889F054;
L_0889F054:
    ctx.set_gpr(31, 0x0889F05Cu);
    ctx.set_gpr(18, 0u + 0u);
    goto L_0889EA1C;
L_0889F05C:
    // nop
    goto L_0889EFF0;
L_0889F064:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29168));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0889F074u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F074u) goto L_0889F074;
    return;
L_0889F074:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29068));
    ctx.set_gpr(31, 0x0889F088u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F088u) goto L_0889F088;
    return;
L_0889F088:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889F054;
L_0889F090:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889F0BCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0889E9E4;
L_0889F0BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0889F0D0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_0889F3A4;
L_0889F0D0:
    ctx.set_gpr(31, 0x0889F0D8u);
    // nop
    goto L_0889EA00;
L_0889F0D8:
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
L_0889F0F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889F118u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0889E9E4;
L_0889F118:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0889F128u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_0889F4AC;
L_0889F128:
    ctx.set_gpr(31, 0x0889F130u);
    // nop
    goto L_0889EA00;
L_0889F130:
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
L_0889F148:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889F16Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0889E9E4;
L_0889F16C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0889F17Cu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_0889F594;
L_0889F17C:
    ctx.set_gpr(31, 0x0889F184u);
    // nop
    goto L_0889EA00;
L_0889F184:
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
L_0889F19C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889F1C8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0889E9E4;
L_0889F1C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0889F1DCu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    goto L_0889F6BC;
L_0889F1DC:
    ctx.set_gpr(31, 0x0889F1E4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0889EA00;
L_0889F1E4:
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
L_0889F3A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889F47C;
      }
      goto L_0889F3B4;
    }
L_0889F3B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(64));
        goto L_0889F440;
    }
    goto L_0889F3C0;
L_0889F3C0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889F3E0;
      }
      goto L_0889F3C8;
    }
L_0889F3C8:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    goto L_0889F3D0;
L_0889F3D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0889F3D4;
L_0889F3D4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F3E0:
    if (ctx.gpr[5] == ctx.gpr[9]) {
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0889F40C;
    }
    goto L_0889F3E8;
L_0889F3E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_0889F3D0;
      }
      goto L_0889F3F8;
    }
L_0889F3F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0889F404u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F404u) goto L_0889F404;
    return;
L_0889F404:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0889F3D4;
L_0889F40C:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[24]) ? ctx.gpr[6] : ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(15, ctx.gpr[14] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[15]);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.set_gpr(6, ctx.gpr[10] - ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_0889F3D0;
L_0889F440:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29240));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0889F454u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F454u) goto L_0889F454;
    return;
L_0889F454:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29036));
    ctx.set_gpr(31, 0x0889F468u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F468u) goto L_0889F468;
    return;
L_0889F468:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0889F46C;
L_0889F46C:
    ctx.set_gpr(31, 0x0889F474u);
    // nop
    goto L_0889EA1C;
L_0889F474:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0889F3D4;
L_0889F47C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29252));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x0889F490u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F490u) goto L_0889F490;
    return;
L_0889F490:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29068));
    ctx.set_gpr(31, 0x0889F4A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F4A4u) goto L_0889F4A4;
    return;
L_0889F4A4:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889F46C;
L_0889F4AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889F564;
      }
      goto L_0889F4BC;
    }
L_0889F4BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(64));
        goto L_0889F528;
    }
    goto L_0889F4C8;
L_0889F4C8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[7]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_0889F508;
    }
    goto L_0889F4D4;
L_0889F4D4:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_0889F508;
      }
      goto L_0889F4E0;
    }
L_0889F4E0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F508;
      }
      goto L_0889F4E8;
    }
L_0889F4E8:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0889F50C;
      }
      goto L_0889F4F4;
    }
L_0889F4F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_0889F514;
      }
      goto L_0889F504;
    }
L_0889F504:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0889F508;
L_0889F508:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    goto L_0889F50C;
L_0889F50C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F514:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0889F520u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F520u) goto L_0889F520;
    return;
L_0889F520:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0889F508;
L_0889F528:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29264));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0889F53Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F53Cu) goto L_0889F53C;
    return;
L_0889F53C:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29036));
    ctx.set_gpr(31, 0x0889F550u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F550u) goto L_0889F550;
    return;
L_0889F550:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0889F554;
L_0889F554:
    ctx.set_gpr(31, 0x0889F55Cu);
    // nop
    goto L_0889EA1C;
L_0889F55C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0889F508;
L_0889F564:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29276));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x0889F578u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F578u) goto L_0889F578;
    return;
L_0889F578:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29068));
    ctx.set_gpr(31, 0x0889F58Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F58Cu) goto L_0889F58C;
    return;
L_0889F58C:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889F554;
L_0889F594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889F68C;
      }
      goto L_0889F5A8;
    }
L_0889F5A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(64));
        goto L_0889F650;
    }
    goto L_0889F5B4;
L_0889F5B4:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[8]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_0889F5F8;
    }
    goto L_0889F5C0;
L_0889F5C0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_0889F5F8;
    }
    goto L_0889F5CC;
L_0889F5CC:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
        goto L_0889F5EC;
    }
    goto L_0889F5D4;
L_0889F5D4:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[10]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0889F614;
    }
    goto L_0889F5E0;
L_0889F5E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    goto L_0889F5EC;
L_0889F5EC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
        goto L_0889F604;
    }
    goto L_0889F5F4;
L_0889F5F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0889F5F8;
L_0889F5F8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F604:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0889F60Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F60Cu) goto L_0889F60C;
    return;
L_0889F60C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0889F5F8;
L_0889F614:
    ctx.set_gpr(25, 0u + 0u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(24, ctx.gpr[2] - ctx.gpr[8]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[24]) > static_cast<std::int32_t>(ctx.gpr[25]) ? ctx.gpr[24] : ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[15] + ctx.gpr[16]);
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[13] : ctx.gpr[14]);
    ctx.set_gpr(6, ctx.gpr[9] - ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
      if (branch_taken) {
          goto L_0889F5F4;
      }
      goto L_0889F648;
    }
L_0889F648:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    goto L_0889F5EC;
L_0889F650:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29288));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0889F664u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F664u) goto L_0889F664;
    return;
L_0889F664:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29036));
    ctx.set_gpr(31, 0x0889F678u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F678u) goto L_0889F678;
    return;
L_0889F678:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0889F67C;
L_0889F67C:
    ctx.set_gpr(31, 0x0889F684u);
    // nop
    goto L_0889EA1C;
L_0889F684:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0889F5F8;
L_0889F68C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29300));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x0889F6A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F6A0u) goto L_0889F6A0;
    return;
L_0889F6A0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29068));
    ctx.set_gpr(31, 0x0889F6B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F6B4u) goto L_0889F6B4;
    return;
L_0889F6B4:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889F67C;
L_0889F6BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889F780;
      }
      goto L_0889F6DC;
    }
L_0889F6DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
        goto L_0889F744;
    }
    goto L_0889F6E8;
L_0889F6E8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0889F708;
      }
      goto L_0889F6F0;
    }
L_0889F6F0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0889F73C;
    }
    goto L_0889F6FC;
L_0889F6FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_0889F72C;
    }
    goto L_0889F708;
L_0889F708:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0889F70C;
L_0889F70C:
    ctx.set_gpr(8, ctx.gpr[16] ^ ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0889F714;
L_0889F714:
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
L_0889F72C:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0889F734u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889F734u) goto L_0889F734;
    return;
L_0889F734:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0889F70C;
L_0889F73C:
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[18] : ctx.gpr[7]);
    goto L_0889F708;
L_0889F744:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29312));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0889F758u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F758u) goto L_0889F758;
    return;
L_0889F758:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29036));
    ctx.set_gpr(31, 0x0889F76Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F76Cu) goto L_0889F76C;
    return;
L_0889F76C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889F770;
L_0889F770:
    ctx.set_gpr(31, 0x0889F778u);
    // nop
    goto L_0889EA1C;
L_0889F778:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0889F714;
L_0889F780:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29324));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0889F794u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F794u) goto L_0889F794;
    return;
L_0889F794:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29068));
    ctx.set_gpr(31, 0x0889F7A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F7A8u) goto L_0889F7A8;
    return;
L_0889F7A8:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889F770;
L_0889F7B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29352));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0889F854;
      }
      goto L_0889F7D4;
    }
L_0889F7D4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29364));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0889F824;
      }
      goto L_0889F7F0;
    }
L_0889F7F0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0889F818;
L_0889F818:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F824:
    ctx.set_gpr(31, 0x0889F82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F82Cu) goto L_0889F82C;
    return;
L_0889F82C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(29376));
    ctx.set_gpr(31, 0x0889F840u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F840u) goto L_0889F840;
    return;
L_0889F840:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0889F844;
L_0889F844:
    ctx.set_gpr(31, 0x0889F84Cu);
    // nop
    goto L_0889EA1C;
L_0889F84C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0889F818;
L_0889F854:
    ctx.set_gpr(31, 0x0889F85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889F85Cu) goto L_0889F85C;
    return;
L_0889F85C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x0889F870u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889F870u) goto L_0889F870;
    return;
L_0889F870:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889F844;
L_0889F878:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889F88Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(29436));
    goto L_0889EA1C;
L_0889F88C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F898:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889F8ACu);
    ctx.set_gpr(16, 2245u << 16u);
    goto L_0889E98C;
L_0889F8AC:
    ctx.set_gpr(31, 0x0889F8B4u);
    // nop
    goto L_0889E9E4;
L_0889F8B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17920)));
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-16624));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18432));
      if (branch_taken) {
          goto L_0889F8E8;
      }
      goto L_0889F8CC;
    }
L_0889F8CC:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0889F8D8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17920), ctx.gpr[3]);
    goto L_0889EA00;
L_0889F8D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F8E8:
    ctx.set_gpr(31, 0x0889F8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889F8F0u) goto L_0889F8F0;
    return;
L_0889F8F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17920)));
    goto L_0889F8CC;
L_0889F8F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889F908u);
    // nop
    goto L_0889E9E4;
L_0889F908:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(17920)));
    ctx.set_gpr(2, 2248u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18432));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-16624));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(17920), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0889F948;
      }
      goto L_0889F92C;
    }
L_0889F92C:
    ctx.set_gpr(31, 0x0889F934u);
    // nop
    goto L_0889EA00;
L_0889F934:
    ctx.set_gpr(31, 0x0889F93Cu);
    // nop
    goto L_0889E9BC;
L_0889F93C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F948:
    ctx.set_gpr(31, 0x0889F950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889F950u) goto L_0889F950;
    return;
L_0889F950:
    // nop
    goto L_0889F92C;
L_0889F958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889F97Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0889E9E4;
L_0889F97C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0889F98Cu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 60u, 0x088A05B4u>(ctx, &aot_mem) && ctx.pc == 0x0889F98Cu) goto L_0889F98C;
    return;
L_0889F98C:
    ctx.set_gpr(31, 0x0889F994u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0889EA00;
L_0889F994:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_0889FB80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889FB98u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    goto L_0889E9E4;
L_0889FB98:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29516));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889FC24;
      }
      goto L_0889FBAC;
    }
L_0889FBAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29528));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0889FC0C;
      }
      goto L_0889FBC8;
    }
L_0889FBC8:
    ctx.set_gpr(31, 0x0889FBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889FBD0u) goto L_0889FBD0;
    return;
L_0889FBD0:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29376));
    ctx.set_gpr(31, 0x0889FBE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889FBE4u) goto L_0889FBE4;
    return;
L_0889FBE4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889FBE8;
L_0889FBE8:
    ctx.set_gpr(31, 0x0889FBF0u);
    // nop
    goto L_0889EA1C;
L_0889FBF0:
    ctx.set_gpr(31, 0x0889FBF8u);
    // nop
    goto L_0889EA00;
L_0889FBF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FC0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889FC1Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889FC1Cu) goto L_0889FC1C;
    return;
L_0889FC1C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_0889FBF0;
L_0889FC24:
    ctx.set_gpr(31, 0x0889FC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889FC2Cu) goto L_0889FC2C;
    return;
L_0889FC2C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x0889FC40u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889FC40u) goto L_0889FC40;
    return;
L_0889FC40:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889FBE8;
L_0889FC48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889FC68u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    goto L_0889E9E4;
L_0889FC68:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29540));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0889FCF4;
      }
      goto L_0889FC7C;
    }
L_0889FC7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29552));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0889FCC4;
      }
      goto L_0889FC9C;
    }
L_0889FC9C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0889FCA0;
L_0889FCA0:
    ctx.set_gpr(31, 0x0889FCA8u);
    // nop
    goto L_0889EA00;
L_0889FCA8:
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
L_0889FCC4:
    ctx.set_gpr(31, 0x0889FCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889FCCCu) goto L_0889FCCC;
    return;
L_0889FCCC:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29376));
    ctx.set_gpr(31, 0x0889FCE0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889FCE0u) goto L_0889FCE0;
    return;
L_0889FCE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889FCE4;
L_0889FCE4:
    ctx.set_gpr(31, 0x0889FCECu);
    // nop
    goto L_0889EA1C;
L_0889FCEC:
    // nop
    goto L_0889FCA0;
L_0889FCF4:
    ctx.set_gpr(31, 0x0889FCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889FCFCu) goto L_0889FCFC;
    return;
L_0889FCFC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x0889FD10u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889FD10u) goto L_0889FD10;
    return;
L_0889FD10:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889FCE4;
L_0889FD18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889FD40u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    goto L_0889E9E4;
L_0889FD40:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29564));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889FDCC;
      }
      goto L_0889FD54;
    }
L_0889FD54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29576));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0889FD9C;
      }
      goto L_0889FD70;
    }
L_0889FD70:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    goto L_0889FD78;
L_0889FD78:
    ctx.set_gpr(31, 0x0889FD80u);
    // nop
    goto L_0889EA00;
L_0889FD80:
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
L_0889FD9C:
    ctx.set_gpr(31, 0x0889FDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889FDA4u) goto L_0889FDA4;
    return;
L_0889FDA4:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29376));
    ctx.set_gpr(31, 0x0889FDB8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889FDB8u) goto L_0889FDB8;
    return;
L_0889FDB8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889FDBC;
L_0889FDBC:
    ctx.set_gpr(31, 0x0889FDC4u);
    // nop
    goto L_0889EA1C;
L_0889FDC4:
    // nop
    goto L_0889FD78;
L_0889FDCC:
    ctx.set_gpr(31, 0x0889FDD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889FDD4u) goto L_0889FDD4;
    return;
L_0889FDD4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29408));
    ctx.set_gpr(31, 0x0889FDE8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889FDE8u) goto L_0889FDE8;
    return;
L_0889FDE8:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0889FDBC;
L_0889FEFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889FF10u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0889E9E4;
L_0889FF10:
    ctx.set_gpr(31, 0x0889FF18u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0889F7B0;
L_0889FF18:
    ctx.set_gpr(31, 0x0889FF20u);
    // nop
    goto L_0889EA00;
L_0889FF20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889FF30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889FF4Cu);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    goto L_0889E9E4;
L_0889FF4C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0889FFF4;
      }
      goto L_0889FF54;
    }
L_0889FF54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889FFB4;
      }
      goto L_0889FF60;
    }
L_0889FF60:
    if (ctx.gpr[17] == ctx.gpr[6]) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_0889FF74;
    }
    goto L_0889FF68;
L_0889FF68:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_0889FF94;
    }
    goto L_0889FF70;
L_0889FF70:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0889FF74;
L_0889FF74:
    ctx.set_gpr(31, 0x0889FF7Cu);
    // nop
    goto L_0889EA00;
L_0889FF7C:
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
L_0889FF94:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
        goto L_0889FFA4;
    }
    goto L_0889FF9C;
L_0889FF9C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0889FF74;
L_0889FFA4:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0889FFACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889FFACu) goto L_0889FFAC;
    return;
L_0889FFAC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0889FF74;
L_0889FFB4:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(29624));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0889FFCCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x0889FFCCu) goto L_0889FFCC;
    return;
L_0889FFCC:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(29376));
    ctx.set_gpr(31, 0x0889FFE0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 641u, 0x0888F270u>(ctx, &aot_mem) && ctx.pc == 0x0889FFE0u) goto L_0889FFE0;
    return;
L_0889FFE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889FFE4;
L_0889FFE4:
    ctx.set_gpr(31, 0x0889FFECu);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0889EA1C;
L_0889FFEC:
    // nop
    goto L_0889FF74;
L_0889FFF4:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(29612));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088A0004u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0038(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0038_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_38(Runtime &runtime) {
    runtime.register_generated_unit(38u, 0x0889C000u, 16384u, &recomp_unit_0038, &recomp_unit_0038_entry);
    runtime.register_function(0x0889C000u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C02Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C030u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C038u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C040u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C488u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C494u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C50Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C524u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C530u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C538u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C558u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C56Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C57Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C58Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C604u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C61Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C634u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C644u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C648u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C650u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C664u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C66Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C678u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C688u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C690u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C698u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C708u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C710u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C760u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C784u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C788u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C80Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C818u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C820u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C86Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CECCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CED4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D034u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D048u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D050u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D058u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D060u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D068u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D070u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D07Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D094u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D110u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D118u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D12Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D154u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D16Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D174u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D17Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D198u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D19Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D210u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D218u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D22Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D260u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D27Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D290u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D29Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D300u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D308u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D318u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D31Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D338u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D350u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D35Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D364u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D370u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D384u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D390u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D39Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D404u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D420u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D430u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D434u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D448u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D450u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D460u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D468u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D488u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D504u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D50Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D514u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D51Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D524u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D544u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D54Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D570u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D57Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D59Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D608u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D610u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D624u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D62Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D644u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D64Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D654u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D65Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D664u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D718u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D724u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D72Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D734u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D75Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D76Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D774u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D778u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D78Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D794u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D800u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D818u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D834u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D83Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D850u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D858u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D87Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D880u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D888u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D890u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D900u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D928u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D934u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D938u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D940u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D944u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D94Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D950u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D958u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D95Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D968u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D984u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D990u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D998u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DECCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DED4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E000u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E018u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E030u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E06Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E074u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E07Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E084u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E08Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E570u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E578u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E748u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E750u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E868u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E870u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E88Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E918u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E928u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E92Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E938u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E944u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E964u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E978u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E98Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EED4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F014u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F01Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F024u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F03Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F050u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F054u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F05Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F064u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F074u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F088u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F090u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F0F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F118u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F128u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F130u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F148u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F16Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F17Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F184u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F19Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F1C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F1DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F1E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F404u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F40Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F440u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F454u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F468u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F46Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F474u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F47Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F490u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F504u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F508u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F50Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F514u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F520u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F528u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F53Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F550u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F554u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F55Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F564u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F578u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F58Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F594u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F604u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F60Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F614u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F648u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F650u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F664u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F678u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F67Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F684u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F68Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F708u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F70Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F714u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F72Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F734u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F73Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F744u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F758u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F76Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F770u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F778u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F780u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F794u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F818u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F824u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F82Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F840u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F844u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F84Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F854u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F85Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F870u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F878u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F88Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F898u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F908u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F92Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F934u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F93Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F948u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F950u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F958u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F97Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F98Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F994u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFF4u, &recomp_unit_0038, "recomp_unit_0038");
}
} // namespace psprecomp
