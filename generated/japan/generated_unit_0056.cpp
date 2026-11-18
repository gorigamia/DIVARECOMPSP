#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0056[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0,
    0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0,
    0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 102,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107,
    0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 135,
    0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 0,
    183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 200, 0, 201, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 0,
    0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304,
    0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 316,
    0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0,
    0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 347, 0, 348, 0, 0,
    0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357,
    0, 0, 358, 0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 368,
    0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0,
    0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0,
    0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0,
    0, 432, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0,
    0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0,
    0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0,
    0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0,
    472, 0, 473, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 0,
    0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0,
    491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0,
    0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0,
    516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 523, 0, 0, 524, 0,
    525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0,
    0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541,
    0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 546, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 549,
    0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0,
    0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0,
    0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0,
    0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0,
    0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0,
    0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603,
    0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0,
    0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0,
    0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 621,
    0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631,
    0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0,
    642, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0,
    0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666,
    0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0,
    673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677,
    0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 681, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0,
    685, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0,
    0, 0, 0, 691, 0, 692, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 698, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0,
    0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 0,
    707, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0,
    712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 715, 0, 0, 716, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0,
    0, 720, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726,
    0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735,
    0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 0, 0, 0,
    740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0,
    0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 756,
};
void recomp_unit_0056_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E4000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0056[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E4000;
    case 2u: goto L_088E4050;
    case 3u: goto L_088E4060;
    case 4u: goto L_088E4070;
    case 5u: goto L_088E4080;
    case 6u: goto L_088E4098;
    case 7u: goto L_088E40A0;
    case 8u: goto L_088E40AC;
    case 9u: goto L_088E40B8;
    case 10u: goto L_088E40C0;
    case 11u: goto L_088E40D8;
    case 12u: goto L_088E40F0;
    case 13u: goto L_088E4104;
    case 14u: goto L_088E410C;
    case 15u: goto L_088E4124;
    case 16u: goto L_088E413C;
    case 17u: goto L_088E414C;
    case 18u: goto L_088E415C;
    case 19u: goto L_088E41B4;
    case 20u: goto L_088E41C4;
    case 21u: goto L_088E41D4;
    case 22u: goto L_088E41E4;
    case 23u: goto L_088E420C;
    case 24u: goto L_088E4228;
    case 25u: goto L_088E4238;
    case 26u: goto L_088E4244;
    case 27u: goto L_088E4260;
    case 28u: goto L_088E426C;
    case 29u: goto L_088E4288;
    case 30u: goto L_088E4294;
    case 31u: goto L_088E42A8;
    case 32u: goto L_088E42B4;
    case 33u: goto L_088E42D0;
    case 34u: goto L_088E42DC;
    case 35u: goto L_088E42F8;
    case 36u: goto L_088E4304;
    case 37u: goto L_088E4320;
    case 38u: goto L_088E432C;
    case 39u: goto L_088E4348;
    case 40u: goto L_088E4354;
    case 41u: goto L_088E4370;
    case 42u: goto L_088E4380;
    case 43u: goto L_088E4390;
    case 44u: goto L_088E439C;
    case 45u: goto L_088E43B8;
    case 46u: goto L_088E43C4;
    case 47u: goto L_088E43E0;
    case 48u: goto L_088E43EC;
    case 49u: goto L_088E4418;
    case 50u: goto L_088E4434;
    case 51u: goto L_088E444C;
    case 52u: goto L_088E4454;
    case 53u: goto L_088E4460;
    case 54u: goto L_088E446C;
    case 55u: goto L_088E4474;
    case 56u: goto L_088E448C;
    case 57u: goto L_088E44A4;
    case 58u: goto L_088E44B8;
    case 59u: goto L_088E44C0;
    case 60u: goto L_088E44D8;
    case 61u: goto L_088E44F0;
    case 62u: goto L_088E4500;
    case 63u: goto L_088E4510;
    case 64u: goto L_088E4568;
    case 65u: goto L_088E4578;
    case 66u: goto L_088E4588;
    case 67u: goto L_088E4598;
    case 68u: goto L_088E45C0;
    case 69u: goto L_088E45DC;
    case 70u: goto L_088E45EC;
    case 71u: goto L_088E45F8;
    case 72u: goto L_088E4630;
    case 73u: goto L_088E464C;
    case 74u: goto L_088E4664;
    case 75u: goto L_088E466C;
    case 76u: goto L_088E4678;
    case 77u: goto L_088E4684;
    case 78u: goto L_088E468C;
    case 79u: goto L_088E46A4;
    case 80u: goto L_088E46BC;
    case 81u: goto L_088E46D0;
    case 82u: goto L_088E46D8;
    case 83u: goto L_088E46F0;
    case 84u: goto L_088E4704;
    case 85u: goto L_088E4718;
    case 86u: goto L_088E4734;
    case 87u: goto L_088E474C;
    case 88u: goto L_088E475C;
    case 89u: goto L_088E476C;
    case 90u: goto L_088E47C0;
    case 91u: goto L_088E47D0;
    case 92u: goto L_088E47E0;
    case 93u: goto L_088E47F0;
    case 94u: goto L_088E4808;
    case 95u: goto L_088E4810;
    case 96u: goto L_088E481C;
    case 97u: goto L_088E4828;
    case 98u: goto L_088E4830;
    case 99u: goto L_088E4848;
    case 100u: goto L_088E4860;
    case 101u: goto L_088E4874;
    case 102u: goto L_088E487C;
    case 103u: goto L_088E4894;
    case 104u: goto L_088E48AC;
    case 105u: goto L_088E48D0;
    case 106u: goto L_088E48F4;
    case 107u: goto L_088E48FC;
    case 108u: goto L_088E490C;
    case 109u: goto L_088E4918;
    case 110u: goto L_088E4920;
    case 111u: goto L_088E4928;
    case 112u: goto L_088E4938;
    case 113u: goto L_088E4944;
    case 114u: goto L_088E494C;
    case 115u: goto L_088E495C;
    case 116u: goto L_088E4968;
    case 117u: goto L_088E4970;
    case 118u: goto L_088E4978;
    case 119u: goto L_088E4988;
    case 120u: goto L_088E49A0;
    case 121u: goto L_088E49C0;
    case 122u: goto L_088E49D8;
    case 123u: goto L_088E49E4;
    case 124u: goto L_088E49EC;
    case 125u: goto L_088E49F8;
    case 126u: goto L_088E4A08;
    case 127u: goto L_088E4A20;
    case 128u: goto L_088E4A24;
    case 129u: goto L_088E4A2C;
    case 130u: goto L_088E4A44;
    case 131u: goto L_088E4A50;
    case 132u: goto L_088E4A5C;
    case 133u: goto L_088E4A68;
    case 134u: goto L_088E4A70;
    case 135u: goto L_088E4A7C;
    case 136u: goto L_088E4A8C;
    case 137u: goto L_088E4AA4;
    case 138u: goto L_088E4AA8;
    case 139u: goto L_088E4AB0;
    case 140u: goto L_088E4AC8;
    case 141u: goto L_088E4AD4;
    case 142u: goto L_088E4AE0;
    case 143u: goto L_088E4AEC;
    case 144u: goto L_088E4B08;
    case 145u: goto L_088E4B20;
    case 146u: goto L_088E4B30;
    case 147u: goto L_088E4B40;
    case 148u: goto L_088E4B9C;
    case 149u: goto L_088E4BAC;
    case 150u: goto L_088E4BBC;
    case 151u: goto L_088E4BCC;
    case 152u: goto L_088E4BF4;
    case 153u: goto L_088E4C10;
    case 154u: goto L_088E4C20;
    case 155u: goto L_088E4C2C;
    case 156u: goto L_088E4C48;
    case 157u: goto L_088E4C54;
    case 158u: goto L_088E4C88;
    case 159u: goto L_088E4CA4;
    case 160u: goto L_088E4CBC;
    case 161u: goto L_088E4CC4;
    case 162u: goto L_088E4CD0;
    case 163u: goto L_088E4CDC;
    case 164u: goto L_088E4CE4;
    case 165u: goto L_088E4CFC;
    case 166u: goto L_088E4D14;
    case 167u: goto L_088E4D28;
    case 168u: goto L_088E4D30;
    case 169u: goto L_088E4D48;
    case 170u: goto L_088E4D5C;
    case 171u: goto L_088E4D70;
    case 172u: goto L_088E4D8C;
    case 173u: goto L_088E4DA4;
    case 174u: goto L_088E4DB4;
    case 175u: goto L_088E4DC4;
    case 176u: goto L_088E4E18;
    case 177u: goto L_088E4E28;
    case 178u: goto L_088E4E38;
    case 179u: goto L_088E4E48;
    case 180u: goto L_088E4E60;
    case 181u: goto L_088E4E68;
    case 182u: goto L_088E4E74;
    case 183u: goto L_088E4E80;
    case 184u: goto L_088E4E88;
    case 185u: goto L_088E4EA0;
    case 186u: goto L_088E4EB8;
    case 187u: goto L_088E4ECC;
    case 188u: goto L_088E4ED4;
    case 189u: goto L_088E4EEC;
    case 190u: goto L_088E4F00;
    case 191u: goto L_088E4F14;
    case 192u: goto L_088E4F30;
    case 193u: goto L_088E4F48;
    case 194u: goto L_088E4F58;
    case 195u: goto L_088E4F68;
    case 196u: goto L_088E4FBC;
    case 197u: goto L_088E4FCC;
    case 198u: goto L_088E4FDC;
    case 199u: goto L_088E4FEC;
    case 200u: goto L_088E5004;
    case 201u: goto L_088E500C;
    case 202u: goto L_088E5018;
    case 203u: goto L_088E5024;
    case 204u: goto L_088E502C;
    case 205u: goto L_088E5044;
    case 206u: goto L_088E505C;
    case 207u: goto L_088E5070;
    case 208u: goto L_088E5078;
    case 209u: goto L_088E5090;
    case 210u: goto L_088E50A8;
    case 211u: goto L_088E50B8;
    case 212u: goto L_088E50C8;
    case 213u: goto L_088E5120;
    case 214u: goto L_088E5130;
    case 215u: goto L_088E5140;
    case 216u: goto L_088E5150;
    case 217u: goto L_088E5178;
    case 218u: goto L_088E5194;
    case 219u: goto L_088E51A4;
    case 220u: goto L_088E51B0;
    case 221u: goto L_088E51CC;
    case 222u: goto L_088E51D8;
    case 223u: goto L_088E51F0;
    case 224u: goto L_088E5200;
    case 225u: goto L_088E5210;
    case 226u: goto L_088E5220;
    case 227u: goto L_088E5230;
    case 228u: goto L_088E5240;
    case 229u: goto L_088E5250;
    case 230u: goto L_088E5260;
    case 231u: goto L_088E5270;
    case 232u: goto L_088E527C;
    case 233u: goto L_088E5298;
    case 234u: goto L_088E52A4;
    case 235u: goto L_088E52D8;
    case 236u: goto L_088E52F4;
    case 237u: goto L_088E530C;
    case 238u: goto L_088E5320;
    case 239u: goto L_088E5334;
    case 240u: goto L_088E534C;
    case 241u: goto L_088E5360;
    case 242u: goto L_088E5368;
    case 243u: goto L_088E5380;
    case 244u: goto L_088E5398;
    case 245u: goto L_088E53B4;
    case 246u: goto L_088E53D8;
    case 247u: goto L_088E53E0;
    case 248u: goto L_088E53EC;
    case 249u: goto L_088E53F4;
    case 250u: goto L_088E540C;
    case 251u: goto L_088E5424;
    case 252u: goto L_088E5434;
    case 253u: goto L_088E5444;
    case 254u: goto L_088E54A0;
    case 255u: goto L_088E54B0;
    case 256u: goto L_088E54C0;
    case 257u: goto L_088E54D0;
    case 258u: goto L_088E54F8;
    case 259u: goto L_088E5514;
    case 260u: goto L_088E5524;
    case 261u: goto L_088E5530;
    case 262u: goto L_088E554C;
    case 263u: goto L_088E5558;
    case 264u: goto L_088E5584;
    case 265u: goto L_088E55A0;
    case 266u: goto L_088E55B8;
    case 267u: goto L_088E55C0;
    case 268u: goto L_088E55CC;
    case 269u: goto L_088E55D8;
    case 270u: goto L_088E55E0;
    case 271u: goto L_088E55F8;
    case 272u: goto L_088E5610;
    case 273u: goto L_088E5624;
    case 274u: goto L_088E562C;
    case 275u: goto L_088E5644;
    case 276u: goto L_088E5658;
    case 277u: goto L_088E566C;
    case 278u: goto L_088E5688;
    case 279u: goto L_088E56A0;
    case 280u: goto L_088E56B0;
    case 281u: goto L_088E56C0;
    case 282u: goto L_088E5714;
    case 283u: goto L_088E5724;
    case 284u: goto L_088E5734;
    case 285u: goto L_088E5744;
    case 286u: goto L_088E575C;
    case 287u: goto L_088E5770;
    case 288u: goto L_088E5778;
    case 289u: goto L_088E5790;
    case 290u: goto L_088E57A8;
    case 291u: goto L_088E57B8;
    case 292u: goto L_088E57C8;
    case 293u: goto L_088E5820;
    case 294u: goto L_088E5830;
    case 295u: goto L_088E5840;
    case 296u: goto L_088E5850;
    case 297u: goto L_088E5878;
    case 298u: goto L_088E5894;
    case 299u: goto L_088E58A4;
    case 300u: goto L_088E58B0;
    case 301u: goto L_088E58CC;
    case 302u: goto L_088E58DC;
    case 303u: goto L_088E58EC;
    case 304u: goto L_088E58FC;
    case 305u: goto L_088E590C;
    case 306u: goto L_088E591C;
    case 307u: goto L_088E592C;
    case 308u: goto L_088E5938;
    case 309u: goto L_088E596C;
    case 310u: goto L_088E5988;
    case 311u: goto L_088E59A0;
    case 312u: goto L_088E59B4;
    case 313u: goto L_088E59C8;
    case 314u: goto L_088E59E0;
    case 315u: goto L_088E59F4;
    case 316u: goto L_088E59FC;
    case 317u: goto L_088E5A14;
    case 318u: goto L_088E5A28;
    case 319u: goto L_088E5A3C;
    case 320u: goto L_088E5A58;
    case 321u: goto L_088E5A70;
    case 322u: goto L_088E5A80;
    case 323u: goto L_088E5A90;
    case 324u: goto L_088E5AE4;
    case 325u: goto L_088E5AF4;
    case 326u: goto L_088E5B04;
    case 327u: goto L_088E5B14;
    case 328u: goto L_088E5B38;
    case 329u: goto L_088E5B54;
    case 330u: goto L_088E5B7C;
    case 331u: goto L_088E5B94;
    case 332u: goto L_088E5BAC;
    case 333u: goto L_088E5BC0;
    case 334u: goto L_088E5BC8;
    case 335u: goto L_088E5BE0;
    case 336u: goto L_088E5BF8;
    case 337u: goto L_088E5C28;
    case 338u: goto L_088E5C50;
    case 339u: goto L_088E5C68;
    case 340u: goto L_088E5C88;
    case 341u: goto L_088E5CA0;
    case 342u: goto L_088E5CAC;
    case 343u: goto L_088E5CB4;
    case 344u: goto L_088E5CC0;
    case 345u: goto L_088E5CD0;
    case 346u: goto L_088E5CE8;
    case 347u: goto L_088E5CEC;
    case 348u: goto L_088E5CF4;
    case 349u: goto L_088E5D0C;
    case 350u: goto L_088E5D18;
    case 351u: goto L_088E5D24;
    case 352u: goto L_088E5D34;
    case 353u: goto L_088E5D4C;
    case 354u: goto L_088E5D50;
    case 355u: goto L_088E5D58;
    case 356u: goto L_088E5D70;
    case 357u: goto L_088E5D7C;
    case 358u: goto L_088E5D88;
    case 359u: goto L_088E5D94;
    case 360u: goto L_088E5D9C;
    case 361u: goto L_088E5DA4;
    case 362u: goto L_088E5DBC;
    case 363u: goto L_088E5DC8;
    case 364u: goto L_088E5DD0;
    case 365u: goto L_088E5DDC;
    case 366u: goto L_088E5DE8;
    case 367u: goto L_088E5DF0;
    case 368u: goto L_088E5DFC;
    case 369u: goto L_088E5E08;
    case 370u: goto L_088E5E10;
    case 371u: goto L_088E5E1C;
    case 372u: goto L_088E5E28;
    case 373u: goto L_088E5E44;
    case 374u: goto L_088E5E5C;
    case 375u: goto L_088E5E6C;
    case 376u: goto L_088E5E7C;
    case 377u: goto L_088E5ED0;
    case 378u: goto L_088E5EE0;
    case 379u: goto L_088E5EF0;
    case 380u: goto L_088E5F00;
    case 381u: goto L_088E5F10;
    case 382u: goto L_088E5F34;
    case 383u: goto L_088E5F50;
    case 384u: goto L_088E5F60;
    case 385u: goto L_088E5F70;
    case 386u: goto L_088E5F98;
    case 387u: goto L_088E5FC4;
    case 388u: goto L_088E5FD4;
    case 389u: goto L_088E5FE4;
    case 390u: goto L_088E5FFC;
    case 391u: goto L_088E6010;
    case 392u: goto L_088E6018;
    case 393u: goto L_088E6030;
    case 394u: goto L_088E6048;
    case 395u: goto L_088E6078;
    case 396u: goto L_088E60A0;
    case 397u: goto L_088E60B8;
    case 398u: goto L_088E60D0;
    case 399u: goto L_088E60E0;
    case 400u: goto L_088E60F0;
    case 401u: goto L_088E6144;
    case 402u: goto L_088E6154;
    case 403u: goto L_088E6164;
    case 404u: goto L_088E6174;
    case 405u: goto L_088E6198;
    case 406u: goto L_088E61B4;
    case 407u: goto L_088E61DC;
    case 408u: goto L_088E6208;
    case 409u: goto L_088E6218;
    case 410u: goto L_088E6228;
    case 411u: goto L_088E6240;
    case 412u: goto L_088E624C;
    case 413u: goto L_088E6254;
    case 414u: goto L_088E6268;
    case 415u: goto L_088E6274;
    case 416u: goto L_088E6288;
    case 417u: goto L_088E6294;
    case 418u: goto L_088E62A4;
    case 419u: goto L_088E62A8;
    case 420u: goto L_088E62BC;
    case 421u: goto L_088E62D4;
    case 422u: goto L_088E62EC;
    case 423u: goto L_088E630C;
    case 424u: goto L_088E6318;
    case 425u: goto L_088E6320;
    case 426u: goto L_088E6330;
    case 427u: goto L_088E6338;
    case 428u: goto L_088E6340;
    case 429u: goto L_088E6354;
    case 430u: goto L_088E635C;
    case 431u: goto L_088E636C;
    case 432u: goto L_088E6384;
    case 433u: goto L_088E639C;
    case 434u: goto L_088E63A4;
    case 435u: goto L_088E63B0;
    case 436u: goto L_088E63BC;
    case 437u: goto L_088E63C4;
    case 438u: goto L_088E63DC;
    case 439u: goto L_088E63F4;
    case 440u: goto L_088E6408;
    case 441u: goto L_088E6410;
    case 442u: goto L_088E6428;
    case 443u: goto L_088E6440;
    case 444u: goto L_088E6448;
    case 445u: goto L_088E646C;
    case 446u: goto L_088E6474;
    case 447u: goto L_088E648C;
    case 448u: goto L_088E6498;
    case 449u: goto L_088E64B0;
    case 450u: goto L_088E64C8;
    case 451u: goto L_088E64D8;
    case 452u: goto L_088E653C;
    case 453u: goto L_088E654C;
    case 454u: goto L_088E655C;
    case 455u: goto L_088E656C;
    case 456u: goto L_088E657C;
    case 457u: goto L_088E65A4;
    case 458u: goto L_088E65C0;
    case 459u: goto L_088E65D0;
    case 460u: goto L_088E65DC;
    case 461u: goto L_088E65F8;
    case 462u: goto L_088E6608;
    case 463u: goto L_088E6618;
    case 464u: goto L_088E6624;
    case 465u: goto L_088E663C;
    case 466u: goto L_088E6648;
    case 467u: goto L_088E6678;
    case 468u: goto L_088E66A8;
    case 469u: goto L_088E66C0;
    case 470u: goto L_088E66D4;
    case 471u: goto L_088E66E8;
    case 472u: goto L_088E6700;
    case 473u: goto L_088E6708;
    case 474u: goto L_088E6714;
    case 475u: goto L_088E6720;
    case 476u: goto L_088E6728;
    case 477u: goto L_088E6740;
    case 478u: goto L_088E6758;
    case 479u: goto L_088E676C;
    case 480u: goto L_088E6774;
    case 481u: goto L_088E678C;
    case 482u: goto L_088E67A4;
    case 483u: goto L_088E67B4;
    case 484u: goto L_088E67C4;
    case 485u: goto L_088E6814;
    case 486u: goto L_088E6824;
    case 487u: goto L_088E6834;
    case 488u: goto L_088E6844;
    case 489u: goto L_088E6860;
    case 490u: goto L_088E6870;
    case 491u: goto L_088E6880;
    case 492u: goto L_088E6898;
    case 493u: goto L_088E68AC;
    case 494u: goto L_088E68C0;
    case 495u: goto L_088E68D8;
    case 496u: goto L_088E68EC;
    case 497u: goto L_088E68F4;
    case 498u: goto L_088E690C;
    case 499u: goto L_088E6924;
    case 500u: goto L_088E6934;
    case 501u: goto L_088E6944;
    case 502u: goto L_088E69A4;
    case 503u: goto L_088E69B4;
    case 504u: goto L_088E69C4;
    case 505u: goto L_088E69D4;
    case 506u: goto L_088E6A0C;
    case 507u: goto L_088E6A28;
    case 508u: goto L_088E6A38;
    case 509u: goto L_088E6A44;
    case 510u: goto L_088E6A60;
    case 511u: goto L_088E6A6C;
    case 512u: goto L_088E6AA0;
    case 513u: goto L_088E6AC4;
    case 514u: goto L_088E6AE0;
    case 515u: goto L_088E6AF0;
    case 516u: goto L_088E6B00;
    case 517u: goto L_088E6B10;
    case 518u: goto L_088E6B20;
    case 519u: goto L_088E6B30;
    case 520u: goto L_088E6B40;
    case 521u: goto L_088E6B58;
    case 522u: goto L_088E6B60;
    case 523u: goto L_088E6B6C;
    case 524u: goto L_088E6B78;
    case 525u: goto L_088E6B80;
    case 526u: goto L_088E6B98;
    case 527u: goto L_088E6BB0;
    case 528u: goto L_088E6BC4;
    case 529u: goto L_088E6BCC;
    case 530u: goto L_088E6BE4;
    case 531u: goto L_088E6BF8;
    case 532u: goto L_088E6C0C;
    case 533u: goto L_088E6C28;
    case 534u: goto L_088E6C40;
    case 535u: goto L_088E6C50;
    case 536u: goto L_088E6C60;
    case 537u: goto L_088E6CB4;
    case 538u: goto L_088E6CC4;
    case 539u: goto L_088E6CD4;
    case 540u: goto L_088E6CE4;
    case 541u: goto L_088E6CFC;
    case 542u: goto L_088E6D10;
    case 543u: goto L_088E6D24;
    case 544u: goto L_088E6D3C;
    case 545u: goto L_088E6D44;
    case 546u: goto L_088E6D50;
    case 547u: goto L_088E6D5C;
    case 548u: goto L_088E6D64;
    case 549u: goto L_088E6D7C;
    case 550u: goto L_088E6D94;
    case 551u: goto L_088E6DA8;
    case 552u: goto L_088E6DB0;
    case 553u: goto L_088E6DC8;
    case 554u: goto L_088E6DDC;
    case 555u: goto L_088E6DF0;
    case 556u: goto L_088E6E0C;
    case 557u: goto L_088E6E24;
    case 558u: goto L_088E6E34;
    case 559u: goto L_088E6E44;
    case 560u: goto L_088E6E98;
    case 561u: goto L_088E6EA8;
    case 562u: goto L_088E6EB8;
    case 563u: goto L_088E6EC8;
    case 564u: goto L_088E6EE0;
    case 565u: goto L_088E6EF4;
    case 566u: goto L_088E6F08;
    case 567u: goto L_088E6F20;
    case 568u: goto L_088E6F28;
    case 569u: goto L_088E6F34;
    case 570u: goto L_088E6F40;
    case 571u: goto L_088E6F48;
    case 572u: goto L_088E6F60;
    case 573u: goto L_088E6F78;
    case 574u: goto L_088E6F8C;
    case 575u: goto L_088E6F94;
    case 576u: goto L_088E6FAC;
    case 577u: goto L_088E6FC4;
    case 578u: goto L_088E6FD4;
    case 579u: goto L_088E6FE4;
    case 580u: goto L_088E703C;
    case 581u: goto L_088E704C;
    case 582u: goto L_088E705C;
    case 583u: goto L_088E706C;
    case 584u: goto L_088E7094;
    case 585u: goto L_088E70B0;
    case 586u: goto L_088E70C0;
    case 587u: goto L_088E70D8;
    case 588u: goto L_088E70F4;
    case 589u: goto L_088E710C;
    case 590u: goto L_088E7128;
    case 591u: goto L_088E7140;
    case 592u: goto L_088E715C;
    case 593u: goto L_088E7174;
    case 594u: goto L_088E7190;
    case 595u: goto L_088E71A0;
    case 596u: goto L_088E71B0;
    case 597u: goto L_088E71BC;
    case 598u: goto L_088E71F0;
    case 599u: goto L_088E7220;
    case 600u: goto L_088E7230;
    case 601u: goto L_088E7240;
    case 602u: goto L_088E7258;
    case 603u: goto L_088E727C;
    case 604u: goto L_088E7284;
    case 605u: goto L_088E729C;
    case 606u: goto L_088E72B4;
    case 607u: goto L_088E72D8;
    case 608u: goto L_088E72E0;
    case 609u: goto L_088E72F8;
    case 610u: goto L_088E7310;
    case 611u: goto L_088E7334;
    case 612u: goto L_088E733C;
    case 613u: goto L_088E7354;
    case 614u: goto L_088E736C;
    case 615u: goto L_088E7390;
    case 616u: goto L_088E7398;
    case 617u: goto L_088E73B0;
    case 618u: goto L_088E73C8;
    case 619u: goto L_088E73DC;
    case 620u: goto L_088E73E4;
    case 621u: goto L_088E73FC;
    case 622u: goto L_088E7410;
    case 623u: goto L_088E7424;
    case 624u: goto L_088E7440;
    case 625u: goto L_088E7458;
    case 626u: goto L_088E7468;
    case 627u: goto L_088E7478;
    case 628u: goto L_088E74CC;
    case 629u: goto L_088E74DC;
    case 630u: goto L_088E74EC;
    case 631u: goto L_088E74FC;
    case 632u: goto L_088E7520;
    case 633u: goto L_088E753C;
    case 634u: goto L_088E754C;
    case 635u: goto L_088E755C;
    case 636u: goto L_088E7584;
    case 637u: goto L_088E759C;
    case 638u: goto L_088E75B4;
    case 639u: goto L_088E75C8;
    case 640u: goto L_088E75D0;
    case 641u: goto L_088E75E8;
    case 642u: goto L_088E7600;
    case 643u: goto L_088E7624;
    case 644u: goto L_088E7648;
    case 645u: goto L_088E7650;
    case 646u: goto L_088E765C;
    case 647u: goto L_088E7664;
    case 648u: goto L_088E7670;
    case 649u: goto L_088E7678;
    case 650u: goto L_088E7684;
    case 651u: goto L_088E768C;
    case 652u: goto L_088E76A4;
    case 653u: goto L_088E76BC;
    case 654u: goto L_088E76CC;
    case 655u: goto L_088E76DC;
    case 656u: goto L_088E7738;
    case 657u: goto L_088E7748;
    case 658u: goto L_088E7758;
    case 659u: goto L_088E7768;
    case 660u: goto L_088E7790;
    case 661u: goto L_088E77AC;
    case 662u: goto L_088E77BC;
    case 663u: goto L_088E77CC;
    case 664u: goto L_088E77DC;
    case 665u: goto L_088E77EC;
    case 666u: goto L_088E77FC;
    case 667u: goto L_088E7808;
    case 668u: goto L_088E7824;
    case 669u: goto L_088E7830;
    case 670u: goto L_088E784C;
    case 671u: goto L_088E7858;
    case 672u: goto L_088E7874;
    case 673u: goto L_088E7880;
    case 674u: goto L_088E78B4;
    case 675u: goto L_088E78D0;
    case 676u: goto L_088E78E8;
    case 677u: goto L_088E78FC;
    case 678u: goto L_088E7910;
    case 679u: goto L_088E7928;
    case 680u: goto L_088E7930;
    case 681u: goto L_088E793C;
    case 682u: goto L_088E7948;
    case 683u: goto L_088E7950;
    case 684u: goto L_088E7968;
    case 685u: goto L_088E7980;
    case 686u: goto L_088E7994;
    case 687u: goto L_088E799C;
    case 688u: goto L_088E79B4;
    case 689u: goto L_088E79CC;
    case 690u: goto L_088E79E8;
    case 691u: goto L_088E7A0C;
    case 692u: goto L_088E7A14;
    case 693u: goto L_088E7A20;
    case 694u: goto L_088E7A28;
    case 695u: goto L_088E7A40;
    case 696u: goto L_088E7A58;
    case 697u: goto L_088E7A68;
    case 698u: goto L_088E7A78;
    case 699u: goto L_088E7AD4;
    case 700u: goto L_088E7AE4;
    case 701u: goto L_088E7AF4;
    case 702u: goto L_088E7B04;
    case 703u: goto L_088E7B2C;
    case 704u: goto L_088E7B48;
    case 705u: goto L_088E7B58;
    case 706u: goto L_088E7B64;
    case 707u: goto L_088E7B80;
    case 708u: goto L_088E7B8C;
    case 709u: goto L_088E7BB8;
    case 710u: goto L_088E7BD4;
    case 711u: goto L_088E7BEC;
    case 712u: goto L_088E7C00;
    case 713u: goto L_088E7C14;
    case 714u: goto L_088E7C2C;
    case 715u: goto L_088E7C34;
    case 716u: goto L_088E7C40;
    case 717u: goto L_088E7C4C;
    case 718u: goto L_088E7C54;
    case 719u: goto L_088E7C6C;
    case 720u: goto L_088E7C84;
    case 721u: goto L_088E7C98;
    case 722u: goto L_088E7CA0;
    case 723u: goto L_088E7CB8;
    case 724u: goto L_088E7CCC;
    case 725u: goto L_088E7CE0;
    case 726u: goto L_088E7CFC;
    case 727u: goto L_088E7D14;
    case 728u: goto L_088E7D24;
    case 729u: goto L_088E7D34;
    case 730u: goto L_088E7D88;
    case 731u: goto L_088E7D98;
    case 732u: goto L_088E7DA8;
    case 733u: goto L_088E7DB8;
    case 734u: goto L_088E7DE8;
    case 735u: goto L_088E7DFC;
    case 736u: goto L_088E7E18;
    case 737u: goto L_088E7E44;
    case 738u: goto L_088E7E60;
    case 739u: goto L_088E7E6C;
    case 740u: goto L_088E7E80;
    case 741u: goto L_088E7E94;
    case 742u: goto L_088E7EB0;
    case 743u: goto L_088E7EDC;
    case 744u: goto L_088E7EF8;
    case 745u: goto L_088E7F04;
    case 746u: goto L_088E7F18;
    case 747u: goto L_088E7F2C;
    case 748u: goto L_088E7F48;
    case 749u: goto L_088E7F54;
    case 750u: goto L_088E7F84;
    case 751u: goto L_088E7FA0;
    case 752u: goto L_088E7FAC;
    case 753u: goto L_088E7FC8;
    case 754u: goto L_088E7FE0;
    case 755u: goto L_088E7FF4;
    case 756u: goto L_088E7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E4000:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31476));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27948));
    ctx.set_gpr(6, 2189u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25516));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(26096));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(16480));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31484));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(16256));
    ctx.set_gpr(31, 0x088E4050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E4050u) goto L_088E4050;
    return;
L_088E4050:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4060:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E4070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 808u, 0x088E3F34u>(ctx, &aot_mem) && ctx.pc == 0x088E4070u) goto L_088E4070;
    return;
L_088E4070:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4080:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27952)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E40C0;
      }
      goto L_088E4098;
    }
L_088E4098:
    ctx.set_gpr(31, 0x088E40A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E40A0u) goto L_088E40A0;
    return;
L_088E40A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E40ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E40ACu) goto L_088E40AC;
    return;
L_088E40AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E40B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E40B8u) goto L_088E40B8;
    return;
L_088E40B8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27952), ctx.gpr[2]);
    goto L_088E40C0;
L_088E40C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27952)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E40D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27952)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4104;
      }
      goto L_088E40F0;
    }
L_088E40F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E410C;
      }
      goto L_088E4104;
    }
L_088E4104:
    ctx.set_gpr(31, 0x088E410Cu);
    // nop
    goto L_088E4124;
L_088E410C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27952)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4124:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16716));
    ctx.set_gpr(31, 0x088E413Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E413Cu) goto L_088E413C;
    return;
L_088E413C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E414C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E415Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E415Cu) goto L_088E415C;
    return;
L_088E415C:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16868));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31508));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27952));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(16836));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31552));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(68));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088E41B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E41B4u) goto L_088E41B4;
    return;
L_088E41B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E41C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E41D4u);
    // nop
    goto L_088E40D8;
L_088E41D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E41E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27952)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E420Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E420Cu) goto L_088E420C;
    return;
L_088E420C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31568));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x088E4228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E4228u) goto L_088E4228;
    return;
L_088E4228:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E4238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4238u) goto L_088E4238;
    return;
L_088E4238:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E4244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 802u, 0x088E3EDCu>(ctx, &aot_mem) && ctx.pc == 0x088E4244u) goto L_088E4244;
    return;
L_088E4244:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E4260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4260u) goto L_088E4260;
    return;
L_088E4260:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E426Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 802u, 0x088E3EDCu>(ctx, &aot_mem) && ctx.pc == 0x088E426Cu) goto L_088E426C;
    return;
L_088E426C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E4288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4288u) goto L_088E4288;
    return;
L_088E4288:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E4294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 779u, 0x088E3CC4u>(ctx, &aot_mem) && ctx.pc == 0x088E4294u) goto L_088E4294;
    return;
L_088E4294:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E42A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E42A8u) goto L_088E42A8;
    return;
L_088E42A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E42B4u);
    // nop
    goto L_088E7C14;
L_088E42B4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E42D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E42D0u) goto L_088E42D0;
    return;
L_088E42D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E42DCu);
    // nop
    goto L_088E464C;
L_088E42DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E42F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E42F8u) goto L_088E42F8;
    return;
L_088E42F8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E4304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 709u, 0x088E36B8u>(ctx, &aot_mem) && ctx.pc == 0x088E4304u) goto L_088E4304;
    return;
L_088E4304:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E4320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4320u) goto L_088E4320;
    return;
L_088E4320:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E432Cu);
    // nop
    goto L_088E4CA4;
L_088E432C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E4348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4348u) goto L_088E4348;
    return;
L_088E4348:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E4354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 391u, 0x088F6074u>(ctx, &aot_mem) && ctx.pc == 0x088E4354u) goto L_088E4354;
    return;
L_088E4354:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E4370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4370u) goto L_088E4370;
    return;
L_088E4370:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E4380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088E4380u) goto L_088E4380;
    return;
L_088E4380:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E4390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4390u) goto L_088E4390;
    return;
L_088E4390:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E439Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 729u, 0x088E385Cu>(ctx, &aot_mem) && ctx.pc == 0x088E439Cu) goto L_088E439C;
    return;
L_088E439C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E43B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E43B8u) goto L_088E43B8;
    return;
L_088E43B8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E43C4u);
    // nop
    goto L_088E4E48;
L_088E43C4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E43E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E43E0u) goto L_088E43E0;
    return;
L_088E43E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E43ECu);
    // nop
    goto L_088E47F0;
L_088E43EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31956));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32016));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32076));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E4418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4418u) goto L_088E4418;
    return;
L_088E4418:
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
L_088E4434:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28016)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4474;
      }
      goto L_088E444C;
    }
L_088E444C:
    ctx.set_gpr(31, 0x088E4454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E4454u) goto L_088E4454;
    return;
L_088E4454:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E4460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E4460u) goto L_088E4460;
    return;
L_088E4460:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E446Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E446Cu) goto L_088E446C;
    return;
L_088E446C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28016), ctx.gpr[2]);
    goto L_088E4474;
L_088E4474:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28016)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E448C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28016)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E44B8;
      }
      goto L_088E44A4;
    }
L_088E44A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E44C0;
      }
      goto L_088E44B8;
    }
L_088E44B8:
    ctx.set_gpr(31, 0x088E44C0u);
    // nop
    goto L_088E44D8;
L_088E44C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28016)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E44D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(17664));
    ctx.set_gpr(31, 0x088E44F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E44F0u) goto L_088E44F0;
    return;
L_088E44F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E4510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E4510u) goto L_088E4510;
    return;
L_088E4510:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32136));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28016));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(17784));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(32144));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088E4568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E4568u) goto L_088E4568;
    return;
L_088E4568:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E4588u);
    // nop
    goto L_088E448C;
L_088E4588:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28016)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E45C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E45C0u) goto L_088E45C0;
    return;
L_088E45C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32160));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E45DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E45DCu) goto L_088E45DC;
    return;
L_088E45DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E45ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E45ECu) goto L_088E45EC;
    return;
L_088E45EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E45F8u);
    // nop
    goto L_088E4080;
L_088E45F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32164));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32168));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32172));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E4630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4630u) goto L_088E4630;
    return;
L_088E4630:
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
L_088E464C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28024)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E468C;
      }
      goto L_088E4664;
    }
L_088E4664:
    ctx.set_gpr(31, 0x088E466Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E466Cu) goto L_088E466C;
    return;
L_088E466C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E4678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E4678u) goto L_088E4678;
    return;
L_088E4678:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E4684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E4684u) goto L_088E4684;
    return;
L_088E4684:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28024), ctx.gpr[2]);
    goto L_088E468C;
L_088E468C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28024)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E46A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28024)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E46D0;
      }
      goto L_088E46BC;
    }
L_088E46BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E46D8;
      }
      goto L_088E46D0;
    }
L_088E46D0:
    ctx.set_gpr(31, 0x088E46D8u);
    // nop
    goto L_088E4734;
L_088E46D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28024)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E46F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E4704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088E4704u) goto L_088E4704;
    return;
L_088E4704:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13712));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E4718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E4718u) goto L_088E4718;
    return;
L_088E4718:
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
L_088E4734:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(18268));
    ctx.set_gpr(31, 0x088E474Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E474Cu) goto L_088E474C;
    return;
L_088E474C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E475C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E476Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E476Cu) goto L_088E476C;
    return;
L_088E476C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28024));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(18384));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(32184));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(18160));
    ctx.set_gpr(31, 0x088E47C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E47C0u) goto L_088E47C0;
    return;
L_088E47C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E47D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E47E0u);
    // nop
    goto L_088E46A4;
L_088E47E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E47F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28028)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4830;
      }
      goto L_088E4808;
    }
L_088E4808:
    ctx.set_gpr(31, 0x088E4810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E4810u) goto L_088E4810;
    return;
L_088E4810:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E481Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E481Cu) goto L_088E481C;
    return;
L_088E481C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E4828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E4828u) goto L_088E4828;
    return;
L_088E4828:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28028), ctx.gpr[2]);
    goto L_088E4830;
L_088E4830:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28028)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4848:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28028)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4874;
      }
      goto L_088E4860;
    }
L_088E4860:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E487C;
      }
      goto L_088E4874;
    }
L_088E4874:
    ctx.set_gpr(31, 0x088E487Cu);
    // nop
    goto L_088E4B08;
L_088E487C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28028)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E48ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E48ACu) goto L_088E48AC;
    return;
L_088E48AC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13620));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(31, 0x088E48D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E48D0u) goto L_088E48D0;
    return;
L_088E48D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13620));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E48FC;
      }
      goto L_088E48F4;
    }
L_088E48F4:
    ctx.set_gpr(31, 0x088E48FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E48FCu) goto L_088E48FC;
    return;
L_088E48FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4920;
      }
      goto L_088E490C;
    }
L_088E490C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088E4918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4918u) goto L_088E4918;
    return;
L_088E4918:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088E4920;
L_088E4920:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4938;
      }
      goto L_088E4928;
    }
L_088E4928:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088E4938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088E4938u) goto L_088E4938;
    return;
L_088E4938:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E494C;
      }
      goto L_088E4944;
    }
L_088E4944:
    ctx.set_gpr(31, 0x088E494Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E494Cu) goto L_088E494C;
    return;
L_088E494C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4970;
      }
      goto L_088E495C;
    }
L_088E495C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088E4968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4968u) goto L_088E4968;
    return;
L_088E4968:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088E4970;
L_088E4970:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4988;
      }
      goto L_088E4978;
    }
L_088E4978:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088E4988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088E4988u) goto L_088E4988;
    return;
L_088E4988:
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
L_088E49A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4AEC;
      }
      goto L_088E49C0;
    }
L_088E49C0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13620));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E49EC;
      }
      goto L_088E49D8;
    }
L_088E49D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E49EC;
      }
      goto L_088E49E4;
    }
L_088E49E4:
    ctx.set_gpr(31, 0x088E49ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E49ECu) goto L_088E49EC;
    return;
L_088E49EC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4A50;
      }
      goto L_088E49F8;
    }
L_088E49F8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4A24;
      }
      goto L_088E4A08;
    }
L_088E4A08:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4A24;
      }
      goto L_088E4A20;
    }
L_088E4A20:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E4A24;
L_088E4A24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4A50;
      }
      goto L_088E4A2C;
    }
L_088E4A2C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4A50;
      }
      goto L_088E4A44;
    }
L_088E4A44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E4A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4A50u) goto L_088E4A50;
    return;
L_088E4A50:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4A70;
      }
      goto L_088E4A5C;
    }
L_088E4A5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4A70;
      }
      goto L_088E4A68;
    }
L_088E4A68:
    ctx.set_gpr(31, 0x088E4A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E4A70u) goto L_088E4A70;
    return;
L_088E4A70:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4AD4;
      }
      goto L_088E4A7C;
    }
L_088E4A7C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4AA8;
      }
      goto L_088E4A8C;
    }
L_088E4A8C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4AA8;
      }
      goto L_088E4AA4;
    }
L_088E4AA4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E4AA8;
L_088E4AA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4AD4;
      }
      goto L_088E4AB0;
    }
L_088E4AB0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4AD4;
      }
      goto L_088E4AC8;
    }
L_088E4AC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E4AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4AD4u) goto L_088E4AD4;
    return;
L_088E4AD4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E4AEC;
      }
      goto L_088E4AE0;
    }
L_088E4AE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E4AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x088E4AECu) goto L_088E4AEC;
    return;
L_088E4AEC:
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
L_088E4B08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(19248));
    ctx.set_gpr(31, 0x088E4B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E4B20u) goto L_088E4B20;
    return;
L_088E4B20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4B30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E4B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E4B40u) goto L_088E4B40;
    return;
L_088E4B40:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19404));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28028));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(19372));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(32216));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(18580));
    ctx.set_gpr(31, 0x088E4B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E4B9Cu) goto L_088E4B9C;
    return;
L_088E4B9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4BAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E4BBCu);
    // nop
    goto L_088E4848;
L_088E4BBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4BCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28028)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E4BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E4BF4u) goto L_088E4BF4;
    return;
L_088E4BF4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32224));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088E4C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E4C10u) goto L_088E4C10;
    return;
L_088E4C10:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E4C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4C20u) goto L_088E4C20;
    return;
L_088E4C20:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E4C2Cu);
    // nop
    goto L_088E7C14;
L_088E4C2C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E4C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4C48u) goto L_088E4C48;
    return;
L_088E4C48:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E4C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4C54u) goto L_088E4C54;
    return;
L_088E4C54:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32356));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32388));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32420));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E4C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E4C88u) goto L_088E4C88;
    return;
L_088E4C88:
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
L_088E4CA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28064)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4CE4;
      }
      goto L_088E4CBC;
    }
L_088E4CBC:
    ctx.set_gpr(31, 0x088E4CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E4CC4u) goto L_088E4CC4;
    return;
L_088E4CC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E4CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E4CD0u) goto L_088E4CD0;
    return;
L_088E4CD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E4CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E4CDCu) goto L_088E4CDC;
    return;
L_088E4CDC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28064), ctx.gpr[2]);
    goto L_088E4CE4;
L_088E4CE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28064)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4CFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28064)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4D28;
      }
      goto L_088E4D14;
    }
L_088E4D14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4D30;
      }
      goto L_088E4D28;
    }
L_088E4D28:
    ctx.set_gpr(31, 0x088E4D30u);
    // nop
    goto L_088E4D8C;
L_088E4D30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28064)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4D48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E4D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088E4D5Cu) goto L_088E4D5C;
    return;
L_088E4D5C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13516));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E4D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E4D70u) goto L_088E4D70;
    return;
L_088E4D70:
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
L_088E4D8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(19892));
    ctx.set_gpr(31, 0x088E4DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E4DA4u) goto L_088E4DA4;
    return;
L_088E4DA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E4DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E4DC4u) goto L_088E4DC4;
    return;
L_088E4DC4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32452));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28064));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(20008));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(32460));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(19784));
    ctx.set_gpr(31, 0x088E4E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E4E18u) goto L_088E4E18;
    return;
L_088E4E18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4E28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E4E38u);
    // nop
    goto L_088E4CFC;
L_088E4E38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4E48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28068)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4E88;
      }
      goto L_088E4E60;
    }
L_088E4E60:
    ctx.set_gpr(31, 0x088E4E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E4E68u) goto L_088E4E68;
    return;
L_088E4E68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E4E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E4E74u) goto L_088E4E74;
    return;
L_088E4E74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E4E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E4E80u) goto L_088E4E80;
    return;
L_088E4E80:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28068), ctx.gpr[2]);
    goto L_088E4E88;
L_088E4E88:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28068)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4EA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28068)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E4ECC;
      }
      goto L_088E4EB8;
    }
L_088E4EB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E4ED4;
      }
      goto L_088E4ECC;
    }
L_088E4ECC:
    ctx.set_gpr(31, 0x088E4ED4u);
    // nop
    goto L_088E4F30;
L_088E4ED4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28068)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4EEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E4F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x088E4F00u) goto L_088E4F00;
    return;
L_088E4F00:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13412));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E4F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E4F14u) goto L_088E4F14;
    return;
L_088E4F14:
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
L_088E4F30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20312));
    ctx.set_gpr(31, 0x088E4F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E4F48u) goto L_088E4F48;
    return;
L_088E4F48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4F58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E4F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E4F68u) goto L_088E4F68;
    return;
L_088E4F68:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32472));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28068));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(20428));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(32480));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(20204));
    ctx.set_gpr(31, 0x088E4FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E4FBCu) goto L_088E4FBC;
    return;
L_088E4FBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4FCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E4FDCu);
    // nop
    goto L_088E4EA0;
L_088E4FDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E4FEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28072)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E502C;
      }
      goto L_088E5004;
    }
L_088E5004:
    ctx.set_gpr(31, 0x088E500Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E500Cu) goto L_088E500C;
    return;
L_088E500C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E5018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E5018u) goto L_088E5018;
    return;
L_088E5018:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E5024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E5024u) goto L_088E5024;
    return;
L_088E5024:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28072), ctx.gpr[2]);
    goto L_088E502C;
L_088E502C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28072)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5044:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28072)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5070;
      }
      goto L_088E505C;
    }
L_088E505C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5078;
      }
      goto L_088E5070;
    }
L_088E5070:
    ctx.set_gpr(31, 0x088E5078u);
    // nop
    goto L_088E5090;
L_088E5078:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28072)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5090:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20664));
    ctx.set_gpr(31, 0x088E50A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E50A8u) goto L_088E50A8;
    return;
L_088E50A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E50B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E50C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E50C8u) goto L_088E50C8;
    return;
L_088E50C8:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28072));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(20784));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(32512));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088E5120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E5120u) goto L_088E5120;
    return;
L_088E5120:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E5140u);
    // nop
    goto L_088E5044;
L_088E5140:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5150:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28072)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E5178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E5178u) goto L_088E5178;
    return;
L_088E5178:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32524));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x088E5194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E5194u) goto L_088E5194;
    return;
L_088E5194:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E51A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E51A4u) goto L_088E51A4;
    return;
L_088E51A4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E51B0u);
    // nop
    goto L_088E55A0;
L_088E51B0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E51CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E51CCu) goto L_088E51CC;
    return;
L_088E51CC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E51D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 479u, 0x088E2444u>(ctx, &aot_mem) && ctx.pc == 0x088E51D8u) goto L_088E51D8;
    return;
L_088E51D8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E51F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E51F0u) goto L_088E51F0;
    return;
L_088E51F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088E5200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088E5200u) goto L_088E5200;
    return;
L_088E5200:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E5210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5210u) goto L_088E5210;
    return;
L_088E5210:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088E5220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088E5220u) goto L_088E5220;
    return;
L_088E5220:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E5230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5230u) goto L_088E5230;
    return;
L_088E5230:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E5240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088E5240u) goto L_088E5240;
    return;
L_088E5240:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E5250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5250u) goto L_088E5250;
    return;
L_088E5250:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E5260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088E5260u) goto L_088E5260;
    return;
L_088E5260:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E5270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5270u) goto L_088E5270;
    return;
L_088E5270:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E527Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 545u, 0x088D5FA4u>(ctx, &aot_mem) && ctx.pc == 0x088E527Cu) goto L_088E527C;
    return;
L_088E527C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E5298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5298u) goto L_088E5298;
    return;
L_088E5298:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E52A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 540u, 0x088F6D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E52A4u) goto L_088E52A4;
    return;
L_088E52A4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32696));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32748));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-32736));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E52D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E52D8u) goto L_088E52D8;
    return;
L_088E52D8:
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
L_088E52F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E530Cu);
    // nop
    goto L_088E540C;
L_088E530C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28128)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E5320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E5320u) goto L_088E5320;
    return;
L_088E5320:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28128)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5360;
      }
      goto L_088E534C;
    }
L_088E534C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5368;
      }
      goto L_088E5360;
    }
L_088E5360:
    ctx.set_gpr(31, 0x088E5368u);
    // nop
    goto L_088E540C;
L_088E5368:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28128)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5380:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E5398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E5398u) goto L_088E5398;
    return;
L_088E5398:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13320));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088E53B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E53B4u) goto L_088E53B4;
    return;
L_088E53B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13320));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E53E0;
      }
      goto L_088E53D8;
    }
L_088E53D8:
    ctx.set_gpr(31, 0x088E53E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E53E0u) goto L_088E53E0;
    return;
L_088E53E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E53F4;
      }
      goto L_088E53EC;
    }
L_088E53EC:
    ctx.set_gpr(31, 0x088E53F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E53F4u) goto L_088E53F4;
    return;
L_088E53F4:
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
L_088E540C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21556));
    ctx.set_gpr(31, 0x088E5424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E5424u) goto L_088E5424;
    return;
L_088E5424:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5434:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E5444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E5444u) goto L_088E5444;
    return;
L_088E5444:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21712));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28128));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(21680));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32672));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(21376));
    ctx.set_gpr(31, 0x088E54A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E54A0u) goto L_088E54A0;
    return;
L_088E54A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E54B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E54C0u);
    // nop
    goto L_088E5334;
L_088E54C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E54D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28128)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E54F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E54F8u) goto L_088E54F8;
    return;
L_088E54F8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32660));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088E5514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E5514u) goto L_088E5514;
    return;
L_088E5514:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E5524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5524u) goto L_088E5524;
    return;
L_088E5524:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E5530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 584u, 0x088E2CC4u>(ctx, &aot_mem) && ctx.pc == 0x088E5530u) goto L_088E5530;
    return;
L_088E5530:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E554Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E554Cu) goto L_088E554C;
    return;
L_088E554C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E5558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 518u, 0x088E2788u>(ctx, &aot_mem) && ctx.pc == 0x088E5558u) goto L_088E5558;
    return;
L_088E5558:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32588));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32568));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-32548));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E5584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5584u) goto L_088E5584;
    return;
L_088E5584:
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
L_088E55A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28152)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E55E0;
      }
      goto L_088E55B8;
    }
L_088E55B8:
    ctx.set_gpr(31, 0x088E55C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E55C0u) goto L_088E55C0;
    return;
L_088E55C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E55CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E55CCu) goto L_088E55CC;
    return;
L_088E55CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E55D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E55D8u) goto L_088E55D8;
    return;
L_088E55D8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28152), ctx.gpr[2]);
    goto L_088E55E0;
L_088E55E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28152)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E55F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28152)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5624;
      }
      goto L_088E5610;
    }
L_088E5610:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E562C;
      }
      goto L_088E5624;
    }
L_088E5624:
    ctx.set_gpr(31, 0x088E562Cu);
    // nop
    goto L_088E5688;
L_088E562C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28152)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5644:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E5658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088E5658u) goto L_088E5658;
    return;
L_088E5658:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13216));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E566Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E566Cu) goto L_088E566C;
    return;
L_088E566C:
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
L_088E5688:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22192));
    ctx.set_gpr(31, 0x088E56A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E56A0u) goto L_088E56A0;
    return;
L_088E56A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E56B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E56C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E56C0u) goto L_088E56C0;
    return;
L_088E56C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32528));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28152));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(22308));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32520));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(22084));
    ctx.set_gpr(31, 0x088E5714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E5714u) goto L_088E5714;
    return;
L_088E5714:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5724:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E5734u);
    // nop
    goto L_088E55F8;
L_088E5734:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28156)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5770;
      }
      goto L_088E575C;
    }
L_088E575C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5778;
      }
      goto L_088E5770;
    }
L_088E5770:
    ctx.set_gpr(31, 0x088E5778u);
    // nop
    goto L_088E5790;
L_088E5778:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28156)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5790:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22456));
    ctx.set_gpr(31, 0x088E57A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E57A8u) goto L_088E57A8;
    return;
L_088E57A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E57B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E57C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E57C8u) goto L_088E57C8;
    return;
L_088E57C8:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22608));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32508));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28156));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20664));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(22576));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32496));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088E5820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E5820u) goto L_088E5820;
    return;
L_088E5820:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E5840u);
    // nop
    goto L_088E5744;
L_088E5840:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5850:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28156)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E5878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E5878u) goto L_088E5878;
    return;
L_088E5878:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32480));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088E5894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E5894u) goto L_088E5894;
    return;
L_088E5894:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E58A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E58A4u) goto L_088E58A4;
    return;
L_088E58A4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E58B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECA9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E58B0u) goto L_088E58B0;
    return;
L_088E58B0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E58CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E58CCu) goto L_088E58CC;
    return;
L_088E58CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088E58DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088E58DCu) goto L_088E58DC;
    return;
L_088E58DC:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E58ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E58ECu) goto L_088E58EC;
    return;
L_088E58EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088E58FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088E58FCu) goto L_088E58FC;
    return;
L_088E58FC:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E590Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E590Cu) goto L_088E590C;
    return;
L_088E590C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E591Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088E591Cu) goto L_088E591C;
    return;
L_088E591C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E592Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E592Cu) goto L_088E592C;
    return;
L_088E592C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E5938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 518u, 0x088E2788u>(ctx, &aot_mem) && ctx.pc == 0x088E5938u) goto L_088E5938;
    return;
L_088E5938:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32324));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32292));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-32260));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E596Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E596Cu) goto L_088E596C;
    return;
L_088E596C:
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
L_088E5988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E59A0u);
    // nop
    goto L_088E5A58;
L_088E59A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28192)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E59B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E59B4u) goto L_088E59B4;
    return;
L_088E59B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E59C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28192)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E59F4;
      }
      goto L_088E59E0;
    }
L_088E59E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E59FC;
      }
      goto L_088E59F4;
    }
L_088E59F4:
    ctx.set_gpr(31, 0x088E59FCu);
    // nop
    goto L_088E5A58;
L_088E59FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28192)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5A14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E5A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E5A28u) goto L_088E5A28;
    return;
L_088E5A28:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E5A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E5A3Cu) goto L_088E5A3C;
    return;
L_088E5A3C:
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
L_088E5A58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23168));
    ctx.set_gpr(31, 0x088E5A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E5A70u) goto L_088E5A70;
    return;
L_088E5A70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5A80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E5A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E5A90u) goto L_088E5A90;
    return;
L_088E5A90:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23316));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28192));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(23284));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32228));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(23060));
    ctx.set_gpr(31, 0x088E5AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E5AE4u) goto L_088E5AE4;
    return;
L_088E5AE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5AF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E5B04u);
    // nop
    goto L_088E59C8;
L_088E5B04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5B14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28192)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E5B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E5B38u) goto L_088E5B38;
    return;
L_088E5B38:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32204));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088E5B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E5B54u) goto L_088E5B54;
    return;
L_088E5B54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32176));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32168));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-32160));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E5B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5B7Cu) goto L_088E5B7C;
    return;
L_088E5B7C:
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
L_088E5B94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5BC0;
      }
      goto L_088E5BAC;
    }
L_088E5BAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5BC8;
      }
      goto L_088E5BC0;
    }
L_088E5BC0:
    ctx.set_gpr(31, 0x088E5BC8u);
    // nop
    goto L_088E5E44;
L_088E5BC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28204)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5BE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E5BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E5BF8u) goto L_088E5BF8;
    return;
L_088E5BF8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E5C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E5C28u) goto L_088E5C28;
    return;
L_088E5C28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088E5C50u);
    // nop
    goto L_088E5C68;
L_088E5C50:
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
L_088E5C68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5E28;
      }
      goto L_088E5C88;
    }
L_088E5C88:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2824));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5CB4;
      }
      goto L_088E5CA0;
    }
L_088E5CA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5CB4;
      }
      goto L_088E5CAC;
    }
L_088E5CAC:
    ctx.set_gpr(31, 0x088E5CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E5CB4u) goto L_088E5CB4;
    return;
L_088E5CB4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D18;
      }
      goto L_088E5CC0;
    }
L_088E5CC0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5CEC;
      }
      goto L_088E5CD0;
    }
L_088E5CD0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5CEC;
      }
      goto L_088E5CE8;
    }
L_088E5CE8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E5CEC;
L_088E5CEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D18;
      }
      goto L_088E5CF4;
    }
L_088E5CF4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D18;
      }
      goto L_088E5D0C;
    }
L_088E5D0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E5D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5D18u) goto L_088E5D18;
    return;
L_088E5D18:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D7C;
      }
      goto L_088E5D24;
    }
L_088E5D24:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D50;
      }
      goto L_088E5D34;
    }
L_088E5D34:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D50;
      }
      goto L_088E5D4C;
    }
L_088E5D4C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088E5D50;
L_088E5D50:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D7C;
      }
      goto L_088E5D58;
    }
L_088E5D58:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D7C;
      }
      goto L_088E5D70;
    }
L_088E5D70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E5D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5D7Cu) goto L_088E5D7C;
    return;
L_088E5D7C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D9C;
      }
      goto L_088E5D88;
    }
L_088E5D88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5D9C;
      }
      goto L_088E5D94;
    }
L_088E5D94:
    ctx.set_gpr(31, 0x088E5D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E5D9Cu) goto L_088E5D9C;
    return;
L_088E5D9C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5E10;
      }
      goto L_088E5DA4;
    }
L_088E5DA4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3008));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5DD0;
      }
      goto L_088E5DBC;
    }
L_088E5DBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5DD0;
      }
      goto L_088E5DC8;
    }
L_088E5DC8:
    ctx.set_gpr(31, 0x088E5DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E5DD0u) goto L_088E5DD0;
    return;
L_088E5DD0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5DF0;
      }
      goto L_088E5DDC;
    }
L_088E5DDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5DF0;
      }
      goto L_088E5DE8;
    }
L_088E5DE8:
    ctx.set_gpr(31, 0x088E5DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E5DF0u) goto L_088E5DF0;
    return;
L_088E5DF0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5E10;
      }
      goto L_088E5DFC;
    }
L_088E5DFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E5E10;
      }
      goto L_088E5E08;
    }
L_088E5E08:
    ctx.set_gpr(31, 0x088E5E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E5E10u) goto L_088E5E10;
    return;
L_088E5E10:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E5E28;
      }
      goto L_088E5E1C;
    }
L_088E5E1C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E5E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x088E5E28u) goto L_088E5E28;
    return;
L_088E5E28:
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
L_088E5E44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24172));
    ctx.set_gpr(31, 0x088E5E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E5E5Cu) goto L_088E5E5C;
    return;
L_088E5E5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5E6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E5E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E5E7Cu) goto L_088E5E7C;
    return;
L_088E5E7C:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28204));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22456));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24320));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(24288));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32152));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(23520));
    ctx.set_gpr(31, 0x088E5ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E5ED0u) goto L_088E5ED0;
    return;
L_088E5ED0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5EE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E5EF0u);
    // nop
    goto L_088E5B94;
L_088E5EF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5F00:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28156)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5F10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28204)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E5F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E5F34u) goto L_088E5F34;
    return;
L_088E5F34:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32124));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E5F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E5F50u) goto L_088E5F50;
    return;
L_088E5F50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E5F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5F60u) goto L_088E5F60;
    return;
L_088E5F60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E5F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088E5F70u) goto L_088E5F70;
    return;
L_088E5F70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32104));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32100));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-32096));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E5F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E5F98u) goto L_088E5F98;
    return;
L_088E5F98:
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24516));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28204)));
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
L_088E5FC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E5FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 18u, 0x088FC1DCu>(ctx, &aot_mem) && ctx.pc == 0x088E5FD4u) goto L_088E5FD4;
    return;
L_088E5FD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E5FE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28212)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6010;
      }
      goto L_088E5FFC;
    }
L_088E5FFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6018;
      }
      goto L_088E6010;
    }
L_088E6010:
    ctx.set_gpr(31, 0x088E6018u);
    // nop
    goto L_088E60B8;
L_088E6018:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28212)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E6048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E6048u) goto L_088E6048;
    return;
L_088E6048:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2444));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E6078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E6078u) goto L_088E6078;
    return;
L_088E6078:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2444));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088E60A0u);
    // nop
    goto L_088E5C68;
L_088E60A0:
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
L_088E60B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24800));
    ctx.set_gpr(31, 0x088E60D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E60D0u) goto L_088E60D0;
    return;
L_088E60D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E60E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E60F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E60F0u) goto L_088E60F0;
    return;
L_088E60F0:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24948));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28212));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22456));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(24320));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(24916));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32092));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(24624));
    ctx.set_gpr(31, 0x088E6144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E6144u) goto L_088E6144;
    return;
L_088E6144:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6164u);
    // nop
    goto L_088E5FE4;
L_088E6164:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6174:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28212)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E6198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E6198u) goto L_088E6198;
    return;
L_088E6198:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32064));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E61B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E61B4u) goto L_088E61B4;
    return;
L_088E61B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32044));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32040));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-32036));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E61DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E61DCu) goto L_088E61DC;
    return;
L_088E61DC:
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25096));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28212)));
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
L_088E6208:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 48u, 0x088FC4D4u>(ctx, &aot_mem) && ctx.pc == 0x088E6218u) goto L_088E6218;
    return;
L_088E6218:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E6240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E6240u) goto L_088E6240;
    return;
L_088E6240:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6274;
      }
      goto L_088E624C;
    }
L_088E624C:
    ctx.set_gpr(31, 0x088E6254u);
    // nop
    goto L_088E64B0;
L_088E6254:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28220)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E6268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E6268u) goto L_088E6268;
    return;
L_088E6268:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E62D4;
      }
      goto L_088E6274;
    }
L_088E6274:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E6288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6288u) goto L_088E6288;
    return;
L_088E6288:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E62A8;
      }
      goto L_088E6294;
    }
L_088E6294:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E62A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 475u, 0x08902674u>(ctx, &aot_mem) && ctx.pc == 0x088E62A4u) goto L_088E62A4;
    return;
L_088E62A4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088E62A8;
L_088E62A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088E62BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E62BCu) goto L_088E62BC;
    return;
L_088E62BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088E62D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E62D4u) goto L_088E62D4;
    return;
L_088E62D4:
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
L_088E62EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088E630Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E630Cu) goto L_088E630C;
    return;
L_088E630C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6338;
      }
      goto L_088E6318;
    }
L_088E6318:
    ctx.set_gpr(31, 0x088E6320u);
    // nop
    goto L_088E64B0;
L_088E6320:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E6330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088E6330u) goto L_088E6330;
    return;
L_088E6330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E636C;
      }
      goto L_088E6338;
    }
L_088E6338:
    ctx.set_gpr(31, 0x088E6340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x088E6340u) goto L_088E6340;
    return;
L_088E6340:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E6354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6354u) goto L_088E6354;
    return;
L_088E6354:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E636C;
      }
      goto L_088E635C;
    }
L_088E635C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E636Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 479u, 0x089026C8u>(ctx, &aot_mem) && ctx.pc == 0x088E636Cu) goto L_088E636C;
    return;
L_088E636C:
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
L_088E6384:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28220)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E63C4;
      }
      goto L_088E639C;
    }
L_088E639C:
    ctx.set_gpr(31, 0x088E63A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E63A4u) goto L_088E63A4;
    return;
L_088E63A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E63B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E63B0u) goto L_088E63B0;
    return;
L_088E63B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E63BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E63BCu) goto L_088E63BC;
    return;
L_088E63BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28220), ctx.gpr[2]);
    goto L_088E63C4;
L_088E63C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28220)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E63DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6408;
      }
      goto L_088E63F4;
    }
L_088E63F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6410;
      }
      goto L_088E6408;
    }
L_088E6408:
    ctx.set_gpr(31, 0x088E6410u);
    // nop
    goto L_088E64B0;
L_088E6410:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28220)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E6440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 473u, 0x08902634u>(ctx, &aot_mem) && ctx.pc == 0x088E6440u) goto L_088E6440;
    return;
L_088E6440:
    ctx.set_gpr(31, 0x088E6448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E6448u) goto L_088E6448;
    return;
L_088E6448:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12592));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6474;
      }
      goto L_088E646C;
    }
L_088E646C:
    ctx.set_gpr(31, 0x088E6474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E6474u) goto L_088E6474;
    return;
L_088E6474:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(31, 0x088E648Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088E648Cu) goto L_088E648C;
    return;
L_088E648C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x088E6498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6498u) goto L_088E6498;
    return;
L_088E6498:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E64B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25816));
    ctx.set_gpr(31, 0x088E64C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E64C8u) goto L_088E64C8;
    return;
L_088E64C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E64D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32032));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28220));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1288));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25964));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(25932));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32024));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(232));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(25640));
    ctx.set_gpr(31, 0x088E653Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E653Cu) goto L_088E653C;
    return;
L_088E653C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E654C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E655Cu);
    // nop
    goto L_088E63DC;
L_088E655C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E656C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27200)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E657C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28220)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E65A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E65A4u) goto L_088E65A4;
    return;
L_088E65A4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32004));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088E65C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E65C0u) goto L_088E65C0;
    return;
L_088E65C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E65D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E65D0u) goto L_088E65D0;
    return;
L_088E65D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E65DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E65DCu) goto L_088E65DC;
    return;
L_088E65DC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E65F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E65F8u) goto L_088E65F8;
    return;
L_088E65F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088E6608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088E6608u) goto L_088E6608;
    return;
L_088E6608:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E6618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6618u) goto L_088E6618;
    return;
L_088E6618:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E6624u);
    // nop
    goto L_088E6384;
L_088E6624:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E663Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E663Cu) goto L_088E663C;
    return;
L_088E663C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E6648u);
    // nop
    goto L_088E6384;
L_088E6648:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31892));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31872));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-31852));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E6678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6678u) goto L_088E6678;
    return;
L_088E6678:
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1176));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28220)));
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
L_088E66A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E66C0u);
    // nop
    goto L_088E678C;
L_088E66C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28244)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E66D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E66D4u) goto L_088E66D4;
    return;
L_088E66D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E66E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28244)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6728;
      }
      goto L_088E6700;
    }
L_088E6700:
    ctx.set_gpr(31, 0x088E6708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E6708u) goto L_088E6708;
    return;
L_088E6708:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E6714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6714u) goto L_088E6714;
    return;
L_088E6714:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E6720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E6720u) goto L_088E6720;
    return;
L_088E6720:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28244), ctx.gpr[2]);
    goto L_088E6728;
L_088E6728:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28244)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28244)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E676C;
      }
      goto L_088E6758;
    }
L_088E6758:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6774;
      }
      goto L_088E676C;
    }
L_088E676C:
    ctx.set_gpr(31, 0x088E6774u);
    // nop
    goto L_088E678C;
L_088E6774:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28244)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E678C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26548));
    ctx.set_gpr(31, 0x088E67A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E67A4u) goto L_088E67A4;
    return;
L_088E67A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E67B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E67C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E67C4u) goto L_088E67C4;
    return;
L_088E67C4:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26692));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28244));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(26660));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-31832));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088E6814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E6814u) goto L_088E6814;
    return;
L_088E6814:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6824:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6834u);
    // nop
    goto L_088E6740;
L_088E6834:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6844:
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26720));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28244)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6860:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 17u, 0x088F0170u>(ctx, &aot_mem) && ctx.pc == 0x088E6870u) goto L_088E6870;
    return;
L_088E6870:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6880:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E6898u);
    // nop
    goto L_088E690C;
L_088E6898:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28248)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E68ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E68ACu) goto L_088E68AC;
    return;
L_088E68AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E68C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28248)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E68EC;
      }
      goto L_088E68D8;
    }
L_088E68D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E68F4;
      }
      goto L_088E68EC;
    }
L_088E68EC:
    ctx.set_gpr(31, 0x088E68F4u);
    // nop
    goto L_088E690C;
L_088E68F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28248)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E690C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26932));
    ctx.set_gpr(31, 0x088E6924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E6924u) goto L_088E6924;
    return;
L_088E6924:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6934:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E6944u) goto L_088E6944;
    return;
L_088E6944:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27092));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27392));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31824));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28248));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(27060));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-31812));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088E69A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E69A4u) goto L_088E69A4;
    return;
L_088E69A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E69B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E69C4u);
    // nop
    goto L_088E68C0;
L_088E69C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E69D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28248)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28248)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E6A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E6A0Cu) goto L_088E6A0C;
    return;
L_088E6A0C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31796));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088E6A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E6A28u) goto L_088E6A28;
    return;
L_088E6A28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E6A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6A38u) goto L_088E6A38;
    return;
L_088E6A38:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E6A44u);
    // nop
    goto L_088E6D24;
L_088E6A44:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E6A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6A60u) goto L_088E6A60;
    return;
L_088E6A60:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E6A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 389u, 0x088E9D38u>(ctx, &aot_mem) && ctx.pc == 0x088E6A6Cu) goto L_088E6A6C;
    return;
L_088E6A6C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31768));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31760));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-31752));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E6AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6AA0u) goto L_088E6AA0;
    return;
L_088E6AA0:
    ctx.set_gpr(3, 2190u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(27360));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28248)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27424));
    ctx.set_gpr(31, 0x088E6AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088E6AC4u) goto L_088E6AC4;
    return;
L_088E6AC4:
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
L_088E6AE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 604u, 0x088FB518u>(ctx, &aot_mem) && ctx.pc == 0x088E6AF0u) goto L_088E6AF0;
    return;
L_088E6AF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6B00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 582u, 0x0895E6D8u>(ctx, &aot_mem) && ctx.pc == 0x088E6B10u) goto L_088E6B10;
    return;
L_088E6B10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6B20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 593u, 0x0895E788u>(ctx, &aot_mem) && ctx.pc == 0x088E6B30u) goto L_088E6B30;
    return;
L_088E6B30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6B40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28260)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6B80;
      }
      goto L_088E6B58;
    }
L_088E6B58:
    ctx.set_gpr(31, 0x088E6B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E6B60u) goto L_088E6B60;
    return;
L_088E6B60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E6B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6B6Cu) goto L_088E6B6C;
    return;
L_088E6B6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E6B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E6B78u) goto L_088E6B78;
    return;
L_088E6B78:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28260), ctx.gpr[2]);
    goto L_088E6B80;
L_088E6B80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28260)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6B98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28260)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6BC4;
      }
      goto L_088E6BB0;
    }
L_088E6BB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6BCC;
      }
      goto L_088E6BC4;
    }
L_088E6BC4:
    ctx.set_gpr(31, 0x088E6BCCu);
    // nop
    goto L_088E6C28;
L_088E6BCC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28260)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6BE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E6BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088E6BF8u) goto L_088E6BF8;
    return;
L_088E6BF8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12488));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E6C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E6C0Cu) goto L_088E6C0C;
    return;
L_088E6C0C:
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
L_088E6C28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27728));
    ctx.set_gpr(31, 0x088E6C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E6C40u) goto L_088E6C40;
    return;
L_088E6C40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E6C60u) goto L_088E6C60;
    return;
L_088E6C60:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31744));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28260));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(27844));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-31736));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(27620));
    ctx.set_gpr(31, 0x088E6CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E6CB4u) goto L_088E6CB4;
    return;
L_088E6CB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6CD4u);
    // nop
    goto L_088E6B98;
L_088E6CD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6CE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E6CFCu);
    // nop
    goto L_088E6E0C;
L_088E6CFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28264)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E6D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E6D10u) goto L_088E6D10;
    return;
L_088E6D10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6D24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28264)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6D64;
      }
      goto L_088E6D3C;
    }
L_088E6D3C:
    ctx.set_gpr(31, 0x088E6D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E6D44u) goto L_088E6D44;
    return;
L_088E6D44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E6D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6D50u) goto L_088E6D50;
    return;
L_088E6D50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E6D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E6D5Cu) goto L_088E6D5C;
    return;
L_088E6D5C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28264), ctx.gpr[2]);
    goto L_088E6D64;
L_088E6D64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28264)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6D7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28264)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6DA8;
      }
      goto L_088E6D94;
    }
L_088E6D94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6DB0;
      }
      goto L_088E6DA8;
    }
L_088E6DA8:
    ctx.set_gpr(31, 0x088E6DB0u);
    // nop
    goto L_088E6E0C;
L_088E6DB0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28264)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6DC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E6DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088E6DDCu) goto L_088E6DDC;
    return;
L_088E6DDC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E6DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E6DF0u) goto L_088E6DF0;
    return;
L_088E6DF0:
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
L_088E6E0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28212));
    ctx.set_gpr(31, 0x088E6E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E6E24u) goto L_088E6E24;
    return;
L_088E6E24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6E34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E6E44u) goto L_088E6E44;
    return;
L_088E6E44:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28264));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11416));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13108));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(28328));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-31712));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(28104));
    ctx.set_gpr(31, 0x088E6E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E6E98u) goto L_088E6E98;
    return;
L_088E6E98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6EA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6EB8u);
    // nop
    goto L_088E6D7C;
L_088E6EB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6EC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E6EE0u);
    // nop
    goto L_088E6FAC;
L_088E6EE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28268)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E6EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E6EF4u) goto L_088E6EF4;
    return;
L_088E6EF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6F08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28268)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6F48;
      }
      goto L_088E6F20;
    }
L_088E6F20:
    ctx.set_gpr(31, 0x088E6F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E6F28u) goto L_088E6F28;
    return;
L_088E6F28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E6F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E6F34u) goto L_088E6F34;
    return;
L_088E6F34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E6F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E6F40u) goto L_088E6F40;
    return;
L_088E6F40:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28268), ctx.gpr[2]);
    goto L_088E6F48;
L_088E6F48:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28268)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6F60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28268)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6F8C;
      }
      goto L_088E6F78;
    }
L_088E6F78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6F94;
      }
      goto L_088E6F8C;
    }
L_088E6F8C:
    ctx.set_gpr(31, 0x088E6F94u);
    // nop
    goto L_088E6FAC;
L_088E6F94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28268)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6FAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28628));
    ctx.set_gpr(31, 0x088E6FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E6FC4u) goto L_088E6FC4;
    return;
L_088E6FC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6FD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E6FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E6FE4u) goto L_088E6FE4;
    return;
L_088E6FE4:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28780));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28268));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(28748));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-31676));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(84));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088E703Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E703Cu) goto L_088E703C;
    return;
L_088E703C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E704C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E705Cu);
    // nop
    goto L_088E6F60;
L_088E705C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E706C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28268)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E7094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E7094u) goto L_088E7094;
    return;
L_088E7094:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31664));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088E70B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E70B0u) goto L_088E70B0;
    return;
L_088E70B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E70C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E70C0u) goto L_088E70C0;
    return;
L_088E70C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31336));
    ctx.set_gpr(31, 0x088E70D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088E70D8u) goto L_088E70D8;
    return;
L_088E70D8:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29524));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E70F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E70F4u) goto L_088E70F4;
    return;
L_088E70F4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31332));
    ctx.set_gpr(31, 0x088E710Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088E710Cu) goto L_088E710C;
    return;
L_088E710C:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29248));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E7128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7128u) goto L_088E7128;
    return;
L_088E7128:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31328));
    ctx.set_gpr(31, 0x088E7140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088E7140u) goto L_088E7140;
    return;
L_088E7140:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29340));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E715Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E715Cu) goto L_088E715C;
    return;
L_088E715C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31324));
    ctx.set_gpr(31, 0x088E7174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088E7174u) goto L_088E7174;
    return;
L_088E7174:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29432));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E7190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7190u) goto L_088E7190;
    return;
L_088E7190:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x088E71A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088E71A0u) goto L_088E71A0;
    return;
L_088E71A0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E71B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E71B0u) goto L_088E71B0;
    return;
L_088E71B0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E71BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 515u, 0x088EEBF0u>(ctx, &aot_mem) && ctx.pc == 0x088E71BCu) goto L_088E71BC;
    return;
L_088E71BC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31480));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31432));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-31384));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E71F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E71F0u) goto L_088E71F0;
    return;
L_088E71F0:
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29216));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28268)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_088E7220:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E7230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 618u, 0x088FB670u>(ctx, &aot_mem) && ctx.pc == 0x088E7230u) goto L_088E7230;
    return;
L_088E7230:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7240:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28320)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7284;
      }
      goto L_088E7258;
    }
L_088E7258:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31288));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31304));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31296));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088E727Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088E727Cu) goto L_088E727C;
    return;
L_088E727C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28320), ctx.gpr[2]);
    goto L_088E7284;
L_088E7284:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28320)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E729C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28324)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E72E0;
      }
      goto L_088E72B4;
    }
L_088E72B4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31224));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31248));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31236));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088E72D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088E72D8u) goto L_088E72D8;
    return;
L_088E72D8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28324), ctx.gpr[2]);
    goto L_088E72E0;
L_088E72E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28324)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E72F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28328)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E733C;
      }
      goto L_088E7310;
    }
L_088E7310:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31264));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31192));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31184));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088E7334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088E7334u) goto L_088E7334;
    return;
L_088E7334:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28328), ctx.gpr[2]);
    goto L_088E733C;
L_088E733C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28328)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7354:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28332)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7398;
      }
      goto L_088E736C;
    }
L_088E736C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31096));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31136));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31116));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088E7390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088E7390u) goto L_088E7390;
    return;
L_088E7390:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28332), ctx.gpr[2]);
    goto L_088E7398;
L_088E7398:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28332)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E73B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28336)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E73DC;
      }
      goto L_088E73C8;
    }
L_088E73C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E73E4;
      }
      goto L_088E73DC;
    }
L_088E73DC:
    ctx.set_gpr(31, 0x088E73E4u);
    // nop
    goto L_088E7440;
L_088E73E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28336)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E73FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088E7410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E7410u) goto L_088E7410;
    return;
L_088E7410:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18168));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E7424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E7424u) goto L_088E7424;
    return;
L_088E7424:
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
L_088E7440:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(31, 0x088E7458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E7458u) goto L_088E7458;
    return;
L_088E7458:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7468:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E7478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E7478u) goto L_088E7478;
    return;
L_088E7478:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29948));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28336));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(29916));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-31084));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(29692));
    ctx.set_gpr(31, 0x088E74CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E74CCu) goto L_088E74CC;
    return;
L_088E74CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E74DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E74ECu);
    // nop
    goto L_088E73B0;
L_088E74EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E74FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28336)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E7520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E7520u) goto L_088E7520;
    return;
L_088E7520:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31068));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088E753Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E753Cu) goto L_088E753C;
    return;
L_088E753C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E754Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E754Cu) goto L_088E754C;
    return;
L_088E754C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(50));
    ctx.set_gpr(31, 0x088E755Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088E755Cu) goto L_088E755C;
    return;
L_088E755C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-31012));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31000));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30988));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7584u) goto L_088E7584;
    return;
L_088E7584:
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
L_088E759C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28352)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E75C8;
      }
      goto L_088E75B4;
    }
L_088E75B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E75D0;
      }
      goto L_088E75C8;
    }
L_088E75C8:
    ctx.set_gpr(31, 0x088E75D0u);
    // nop
    goto L_088E76A4;
L_088E75D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28352)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E75E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088E7600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E7600u) goto L_088E7600;
    return;
L_088E7600:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9036));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x088E7624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E7624u) goto L_088E7624;
    return;
L_088E7624:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9036));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7650;
      }
      goto L_088E7648;
    }
L_088E7648:
    ctx.set_gpr(31, 0x088E7650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E7650u) goto L_088E7650;
    return;
L_088E7650:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7664;
      }
      goto L_088E765C;
    }
L_088E765C:
    ctx.set_gpr(31, 0x088E7664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E7664u) goto L_088E7664;
    return;
L_088E7664:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7678;
      }
      goto L_088E7670;
    }
L_088E7670:
    ctx.set_gpr(31, 0x088E7678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E7678u) goto L_088E7678;
    return;
L_088E7678:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E768C;
      }
      goto L_088E7684;
    }
L_088E7684:
    ctx.set_gpr(31, 0x088E768Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E768Cu) goto L_088E768C;
    return;
L_088E768C:
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
L_088E76A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30412));
    ctx.set_gpr(31, 0x088E76BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E76BCu) goto L_088E76BC;
    return;
L_088E76BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E76CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E76DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E76DCu) goto L_088E76DC;
    return;
L_088E76DC:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30568));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30976));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28352));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(30536));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-30960));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(30184));
    ctx.set_gpr(31, 0x088E7738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E7738u) goto L_088E7738;
    return;
L_088E7738:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7748:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E7758u);
    // nop
    goto L_088E759C;
L_088E7758:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28352)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E7790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E7790u) goto L_088E7790;
    return;
L_088E7790:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30944));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088E77ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E77ACu) goto L_088E77AC;
    return;
L_088E77AC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E77BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E77BCu) goto L_088E77BC;
    return;
L_088E77BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088E77CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088E77CCu) goto L_088E77CC;
    return;
L_088E77CC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E77DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E77DCu) goto L_088E77DC;
    return;
L_088E77DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088E77ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088E77ECu) goto L_088E77EC;
    return;
L_088E77EC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E77FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E77FCu) goto L_088E77FC;
    return;
L_088E77FC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E7808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 633u, 0x088F7580u>(ctx, &aot_mem) && ctx.pc == 0x088E7808u) goto L_088E7808;
    return;
L_088E7808:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E7824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7824u) goto L_088E7824;
    return;
L_088E7824:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E7830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 519u, 0x088F6BA0u>(ctx, &aot_mem) && ctx.pc == 0x088E7830u) goto L_088E7830;
    return;
L_088E7830:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E784Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E784Cu) goto L_088E784C;
    return;
L_088E784C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E7858u);
    // nop
    goto L_088E7910;
L_088E7858:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E7874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7874u) goto L_088E7874;
    return;
L_088E7874:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E7880u);
    // nop
    goto L_088E7910;
L_088E7880:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30788));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30752));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30716));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E78B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E78B4u) goto L_088E78B4;
    return;
L_088E78B4:
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
L_088E78D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E78E8u);
    // nop
    goto L_088E7A40;
L_088E78E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28392)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E78FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E78FCu) goto L_088E78FC;
    return;
L_088E78FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28392)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7950;
      }
      goto L_088E7928;
    }
L_088E7928:
    ctx.set_gpr(31, 0x088E7930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E7930u) goto L_088E7930;
    return;
L_088E7930:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E793Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E793Cu) goto L_088E793C;
    return;
L_088E793C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E7948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E7948u) goto L_088E7948;
    return;
L_088E7948:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28392), ctx.gpr[2]);
    goto L_088E7950;
L_088E7950:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28392)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28392)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7994;
      }
      goto L_088E7980;
    }
L_088E7980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E799C;
      }
      goto L_088E7994;
    }
L_088E7994:
    ctx.set_gpr(31, 0x088E799Cu);
    // nop
    goto L_088E7A40;
L_088E799C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28392)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E79B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088E79CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E79CCu) goto L_088E79CC;
    return;
L_088E79CC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8648));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088E79E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E79E8u) goto L_088E79E8;
    return;
L_088E79E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8648));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7A14;
      }
      goto L_088E7A0C;
    }
L_088E7A0C:
    ctx.set_gpr(31, 0x088E7A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E7A14u) goto L_088E7A14;
    return;
L_088E7A14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7A28;
      }
      goto L_088E7A20;
    }
L_088E7A20:
    ctx.set_gpr(31, 0x088E7A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088E7A28u) goto L_088E7A28;
    return;
L_088E7A28:
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
L_088E7A40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31336));
    ctx.set_gpr(31, 0x088E7A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E7A58u) goto L_088E7A58;
    return;
L_088E7A58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7A68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E7A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E7A78u) goto L_088E7A78;
    return;
L_088E7A78:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30680));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28392));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(31460));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-30668));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(31156));
    ctx.set_gpr(31, 0x088E7AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E7AD4u) goto L_088E7AD4;
    return;
L_088E7AD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7AE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E7AF4u);
    // nop
    goto L_088E7968;
L_088E7AF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7B04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28392)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088E7B2Cu) goto L_088E7B2C;
    return;
L_088E7B2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30652));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088E7B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088E7B48u) goto L_088E7B48;
    return;
L_088E7B48:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7B58u) goto L_088E7B58;
    return;
L_088E7B58:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E7B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 464u, 0x088F66F8u>(ctx, &aot_mem) && ctx.pc == 0x088E7B64u) goto L_088E7B64;
    return;
L_088E7B64:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7B80u) goto L_088E7B80;
    return;
L_088E7B80:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E7B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 519u, 0x088F6BA0u>(ctx, &aot_mem) && ctx.pc == 0x088E7B8Cu) goto L_088E7B8C;
    return;
L_088E7B8C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-30624));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-30608));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30592));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088E7BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7BB8u) goto L_088E7BB8;
    return;
L_088E7BB8:
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
L_088E7BD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088E7BECu);
    // nop
    goto L_088E7CFC;
L_088E7BEC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28412)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088E7C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088E7C00u) goto L_088E7C00;
    return;
L_088E7C00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7C14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28412)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7C54;
      }
      goto L_088E7C2C;
    }
L_088E7C2C:
    ctx.set_gpr(31, 0x088E7C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088E7C34u) goto L_088E7C34;
    return;
L_088E7C34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088E7C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088E7C40u) goto L_088E7C40;
    return;
L_088E7C40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E7C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088E7C4Cu) goto L_088E7C4C;
    return;
L_088E7C4C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28412), ctx.gpr[2]);
    goto L_088E7C54;
L_088E7C54:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28412)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7C6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28412)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7C98;
      }
      goto L_088E7C84;
    }
L_088E7C84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7CA0;
      }
      goto L_088E7C98;
    }
L_088E7C98:
    ctx.set_gpr(31, 0x088E7CA0u);
    // nop
    goto L_088E7CFC;
L_088E7CA0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28412)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7CB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088E7CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088E7CCCu) goto L_088E7CCC;
    return;
L_088E7CCC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8544));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088E7CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088E7CE0u) goto L_088E7CE0;
    return;
L_088E7CE0:
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
L_088E7CFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32036));
    ctx.set_gpr(31, 0x088E7D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088E7D14u) goto L_088E7D14;
    return;
L_088E7D14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7D24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E7D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088E7D34u) goto L_088E7D34;
    return;
L_088E7D34:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32184));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28412));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(32152));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-30576));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(31928));
    ctx.set_gpr(31, 0x088E7D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088E7D88u) goto L_088E7D88;
    return;
L_088E7D88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7D98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088E7DA8u);
    // nop
    goto L_088E7C6C;
L_088E7DA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E7DB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28412)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29648));
    ctx.set_gpr(31, 0x088E7DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088E7DE8u) goto L_088E7DE8;
    return;
L_088E7DE8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088E7DFCu) goto L_088E7DFC;
    return;
L_088E7DFC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088E7E18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E7E18u) goto L_088E7E18;
    return;
L_088E7E18:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(28416));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088E7E44u) goto L_088E7E44;
    return;
L_088E7E44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7E6C;
      }
      goto L_088E7E60;
    }
L_088E7E60:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E7E6Cu) goto L_088E7E6C;
    return;
L_088E7E6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29656));
    ctx.set_gpr(31, 0x088E7E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088E7E80u) goto L_088E7E80;
    return;
L_088E7E80:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088E7E94u) goto L_088E7E94;
    return;
L_088E7E94:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088E7EB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E7EB0u) goto L_088E7EB0;
    return;
L_088E7EB0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(28420));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088E7EDCu) goto L_088E7EDC;
    return;
L_088E7EDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7F04;
      }
      goto L_088E7EF8;
    }
L_088E7EF8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E7F04u) goto L_088E7F04;
    return;
L_088E7F04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088E7F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088E7F18u) goto L_088E7F18;
    return;
L_088E7F18:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088E7F2Cu) goto L_088E7F2C;
    return;
L_088E7F2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088E7F48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E7F48u) goto L_088E7F48;
    return;
L_088E7F48:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088E7F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 300u, 0x088DD89Cu>(ctx, &aot_mem) && ctx.pc == 0x088E7F54u) goto L_088E7F54;
    return;
L_088E7F54:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28424));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088E7F84u) goto L_088E7F84;
    return;
L_088E7F84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7FAC;
      }
      goto L_088E7FA0;
    }
L_088E7FA0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088E7FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088E7FACu) goto L_088E7FAC;
    return;
L_088E7FAC:
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
L_088E7FC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28428)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E7FF4;
      }
      goto L_088E7FE0;
    }
L_088E7FE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E7FFC;
      }
      goto L_088E7FF4;
    }
L_088E7FF4:
    ctx.set_gpr(31, 0x088E7FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 5u, 0x088E8058u>(ctx, &aot_mem) && ctx.pc == 0x088E7FFCu) goto L_088E7FFC;
    return;
L_088E7FFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.pc = 0x088E8000u; return;
}

void recomp_unit_0056(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0056_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_56(Runtime &runtime) {
    runtime.register_generated_unit(56u, 0x088E4000u, 16384u, &recomp_unit_0056, &recomp_unit_0056_entry);
    runtime.register_function(0x088E4000u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4050u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4060u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4070u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4080u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4098u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E40A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E40ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E40B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E40C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E40D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E40F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4104u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E410Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4124u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E413Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E414Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E415Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E41E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E420Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4228u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4238u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4244u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4260u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E426Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4288u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4294u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E42F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4304u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4320u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E432Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4348u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4354u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4370u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4380u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4390u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E439Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E43ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4418u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4434u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E444Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4454u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4460u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E446Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4474u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E448Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E44F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4500u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4510u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4568u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4578u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4588u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4598u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E45F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4630u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E464Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4664u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E466Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4678u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4684u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E468Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E46F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4704u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4718u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4734u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E474Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E475Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E476Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E47F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4808u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4810u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E481Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4828u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4830u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4848u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4860u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4874u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E487Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4894u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E48FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E490Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4918u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4920u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4928u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4938u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4944u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E494Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E495Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4968u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4970u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4978u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4988u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E49F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4A8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4AECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4B9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4BF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4C88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4CFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4D8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4DC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E74u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4E88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4ECCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4ED4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4EECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4F68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E4FECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5004u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E500Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5018u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5024u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E502Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5044u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E505Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5070u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5078u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5090u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E50C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5120u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5130u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5140u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5150u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5178u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5194u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E51F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5200u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5210u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5220u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5230u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5240u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5250u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5260u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5270u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E527Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5298u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E52F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E530Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5320u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5334u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E534Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5360u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5368u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5380u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5398u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E53F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E540Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5424u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5434u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5444u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E54F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5514u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5524u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5530u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E554Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5558u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5584u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E55F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5610u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5624u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E562Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5644u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5658u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E566Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5688u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E56C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5714u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5724u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5734u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5744u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E575Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5770u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5778u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5790u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E57C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5820u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5830u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5840u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5850u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5878u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5894u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E58FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E590Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E591Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E592Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5938u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E596Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5988u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E59FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5A90u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5AF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5B94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5BF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5C88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CC0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5CF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5D9Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DA4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DBCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DD0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5DFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E1Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5E7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5ED0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5EF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F70u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5F98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E5FFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6010u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6018u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6030u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6048u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6078u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60B8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E60F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6144u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6154u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6164u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6198u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E61DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6208u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6218u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6228u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6240u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E624Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6254u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6268u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6274u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6288u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6294u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E62ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E630Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6318u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6320u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6330u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6338u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6340u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6354u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E635Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E636Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6384u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E639Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E63F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6408u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6410u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6428u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6440u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6448u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E646Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6474u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E648Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6498u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E64D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E653Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E654Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E655Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E656Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E657Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E65F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6608u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6618u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6624u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E663Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6648u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6678u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66A8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E66E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6700u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6708u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6714u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6720u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6728u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6740u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6758u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E676Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6774u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E678Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E67C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6814u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6824u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6834u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6844u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6860u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6870u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6880u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6898u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E68F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E690Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6924u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6934u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6944u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69C4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E69D4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A38u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6A6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6AF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B30u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6B98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6BF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6C60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CB4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6CFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D10u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D3Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D50u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D5Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D7Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6D94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6DF0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6E98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6EF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F08u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6F94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FC4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E6FE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E703Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E704Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E705Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E706Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7094u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70C0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E70F4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E710Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7128u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7140u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E715Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7174u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7190u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71A0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E71F0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7220u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7230u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7240u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7258u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E727Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7284u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E729Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72D8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72E0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E72F8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7310u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7334u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E733Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7354u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E736Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7390u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7398u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73B0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73E4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E73FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7410u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7424u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7440u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7458u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7468u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7478u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E74FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7520u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E753Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E754Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E755Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7584u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E759Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75C8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E75E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7600u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7624u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7648u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7650u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E765Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7664u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7670u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7678u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7684u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E768Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76A4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E76DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7738u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7748u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7758u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7768u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7790u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77ACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77BCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77DCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77ECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E77FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7808u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7824u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7830u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E784Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7858u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7874u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7880u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78D0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E78FCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7910u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7928u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7930u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E793Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7948u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7950u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7968u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7980u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7994u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E799Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79B4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79CCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E79E8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A0Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A20u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A28u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A68u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7A78u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AE4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7AF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B58u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B64u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7B8Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BD4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7BECu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C00u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C40u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C4Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7C98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CCCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7CFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D14u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D24u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D34u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D88u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7D98u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DA8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DB8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DE8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7DFCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E44u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E60u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E6Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E80u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7E94u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EB0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EDCu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7EF8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F04u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F18u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F2Cu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F48u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F54u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7F84u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FA0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FACu, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FC8u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FE0u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FF4u, &recomp_unit_0056, "recomp_unit_0056");
    runtime.register_function(0x088E7FFCu, &recomp_unit_0056, "recomp_unit_0056");
}
} // namespace psprecomp
