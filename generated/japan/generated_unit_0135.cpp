#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0135[4090] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0,
    62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0,
    0, 75, 0, 76, 0, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87,
    0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98,
    0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104,
    0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125,
    0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139,
    0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 0, 163, 0, 164, 0,
    0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0,
    0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0,
    0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221,
    0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240,
    0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0,
    0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265,
    0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0,
    333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 345, 0, 0, 346, 0,
    347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0,
    0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363,
    0, 364, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    0, 375, 0, 376, 0, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 384, 0, 0, 385, 0, 386, 0, 0, 387,
    0, 388, 0, 0, 389, 0, 390, 0, 0, 391, 0, 392, 0, 0, 393, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0,
    0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0,
    0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419,
    0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 426, 0,
    0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431,
    0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454,
    0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0,
    0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0,
    0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485,
    0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495,
    0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0, 0, 502, 0, 503,
    0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 513, 0, 514, 0, 0, 515, 0, 516, 0,
    0, 517, 0, 518, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0,
    0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0,
    0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 0,
    0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 0,
    540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 545,
    0, 0, 546, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0,
    553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0,
    563, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 566, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0,
    0, 571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0,
    0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 589, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 593,
    0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0,
    0, 0, 0, 599, 0, 600, 0, 0, 601, 0, 602, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607,
    0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0,
    0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 616, 0,
    0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621,
    0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0,
    0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0,
    0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0,
    0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 650, 0, 0,
    651, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0,
    658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0,
    0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 674, 0,
    0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0,
    0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 691,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0,
    0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 0,
    702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 707, 0, 0, 708,
    0, 709, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 719, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 730, 0, 0, 731, 0,
    732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0,
    0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 748,
    0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 753,
};
void recomp_unit_0135_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A20000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0135[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A20000;
    case 2u: goto L_08A20008;
    case 3u: goto L_08A20028;
    case 4u: goto L_08A2004C;
    case 5u: goto L_08A20058;
    case 6u: goto L_08A20074;
    case 7u: goto L_08A2008C;
    case 8u: goto L_08A200A4;
    case 9u: goto L_08A200B4;
    case 10u: goto L_08A200C4;
    case 11u: goto L_08A20118;
    case 12u: goto L_08A20128;
    case 13u: goto L_08A20138;
    case 14u: goto L_08A20148;
    case 15u: goto L_08A20170;
    case 16u: goto L_08A2018C;
    case 17u: goto L_08A2019C;
    case 18u: goto L_08A201B4;
    case 19u: goto L_08A201D0;
    case 20u: goto L_08A201E4;
    case 21u: goto L_08A201F4;
    case 22u: goto L_08A2020C;
    case 23u: goto L_08A20240;
    case 24u: goto L_08A2025C;
    case 25u: goto L_08A20274;
    case 26u: goto L_08A20288;
    case 27u: goto L_08A20290;
    case 28u: goto L_08A202A8;
    case 29u: goto L_08A202C0;
    case 30u: goto L_08A202DC;
    case 31u: goto L_08A20304;
    case 32u: goto L_08A2031C;
    case 33u: goto L_08A20334;
    case 34u: goto L_08A20344;
    case 35u: goto L_08A20354;
    case 36u: goto L_08A203B0;
    case 37u: goto L_08A203C0;
    case 38u: goto L_08A203D0;
    case 39u: goto L_08A203E0;
    case 40u: goto L_08A20408;
    case 41u: goto L_08A20424;
    case 42u: goto L_08A20434;
    case 43u: goto L_08A20448;
    case 44u: goto L_08A20458;
    case 45u: goto L_08A2046C;
    case 46u: goto L_08A2047C;
    case 47u: goto L_08A20488;
    case 48u: goto L_08A204B8;
    case 49u: goto L_08A204D4;
    case 50u: goto L_08A204EC;
    case 51u: goto L_08A20500;
    case 52u: goto L_08A20508;
    case 53u: goto L_08A20520;
    case 54u: goto L_08A2053C;
    case 55u: goto L_08A20578;
    case 56u: goto L_08A205AC;
    case 57u: goto L_08A205D0;
    case 58u: goto L_08A205D8;
    case 59u: goto L_08A205E4;
    case 60u: goto L_08A205EC;
    case 61u: goto L_08A205F8;
    case 62u: goto L_08A20600;
    case 63u: goto L_08A2060C;
    case 64u: goto L_08A20614;
    case 65u: goto L_08A20620;
    case 66u: goto L_08A20628;
    case 67u: goto L_08A20634;
    case 68u: goto L_08A2063C;
    case 69u: goto L_08A20648;
    case 70u: goto L_08A20650;
    case 71u: goto L_08A2065C;
    case 72u: goto L_08A20664;
    case 73u: goto L_08A20670;
    case 74u: goto L_08A20678;
    case 75u: goto L_08A20684;
    case 76u: goto L_08A2068C;
    case 77u: goto L_08A20698;
    case 78u: goto L_08A206A0;
    case 79u: goto L_08A206AC;
    case 80u: goto L_08A206B4;
    case 81u: goto L_08A206C0;
    case 82u: goto L_08A206C8;
    case 83u: goto L_08A206D4;
    case 84u: goto L_08A206DC;
    case 85u: goto L_08A206E8;
    case 86u: goto L_08A206F0;
    case 87u: goto L_08A206FC;
    case 88u: goto L_08A20704;
    case 89u: goto L_08A20710;
    case 90u: goto L_08A20718;
    case 91u: goto L_08A20730;
    case 92u: goto L_08A20740;
    case 93u: goto L_08A20758;
    case 94u: goto L_08A20770;
    case 95u: goto L_08A20780;
    case 96u: goto L_08A20790;
    case 97u: goto L_08A207EC;
    case 98u: goto L_08A207FC;
    case 99u: goto L_08A2080C;
    case 100u: goto L_08A2081C;
    case 101u: goto L_08A20844;
    case 102u: goto L_08A20860;
    case 103u: goto L_08A20870;
    case 104u: goto L_08A2087C;
    case 105u: goto L_08A20890;
    case 106u: goto L_08A2089C;
    case 107u: goto L_08A208B0;
    case 108u: goto L_08A208BC;
    case 109u: goto L_08A208DC;
    case 110u: goto L_08A208E8;
    case 111u: goto L_08A20908;
    case 112u: goto L_08A20918;
    case 113u: goto L_08A20928;
    case 114u: goto L_08A20938;
    case 115u: goto L_08A20948;
    case 116u: goto L_08A20954;
    case 117u: goto L_08A20970;
    case 118u: goto L_08A2097C;
    case 119u: goto L_08A20998;
    case 120u: goto L_08A209A8;
    case 121u: goto L_08A209B8;
    case 122u: goto L_08A209CC;
    case 123u: goto L_08A209DC;
    case 124u: goto L_08A209EC;
    case 125u: goto L_08A209FC;
    case 126u: goto L_08A20A0C;
    case 127u: goto L_08A20A1C;
    case 128u: goto L_08A20A28;
    case 129u: goto L_08A20A3C;
    case 130u: goto L_08A20A48;
    case 131u: goto L_08A20A64;
    case 132u: goto L_08A20A84;
    case 133u: goto L_08A20A94;
    case 134u: goto L_08A20AA0;
    case 135u: goto L_08A20AB4;
    case 136u: goto L_08A20AC0;
    case 137u: goto L_08A20AD8;
    case 138u: goto L_08A20AE4;
    case 139u: goto L_08A20AFC;
    case 140u: goto L_08A20B08;
    case 141u: goto L_08A20B20;
    case 142u: goto L_08A20B2C;
    case 143u: goto L_08A20B48;
    case 144u: goto L_08A20B54;
    case 145u: goto L_08A20B70;
    case 146u: goto L_08A20B7C;
    case 147u: goto L_08A20B9C;
    case 148u: goto L_08A20BA8;
    case 149u: goto L_08A20BBC;
    case 150u: goto L_08A20BC8;
    case 151u: goto L_08A20BF4;
    case 152u: goto L_08A20C10;
    case 153u: goto L_08A20C28;
    case 154u: goto L_08A20C3C;
    case 155u: goto L_08A20C44;
    case 156u: goto L_08A20C5C;
    case 157u: goto L_08A20C74;
    case 158u: goto L_08A20CA4;
    case 159u: goto L_08A20CC8;
    case 160u: goto L_08A20CD0;
    case 161u: goto L_08A20CDC;
    case 162u: goto L_08A20CE4;
    case 163u: goto L_08A20CF0;
    case 164u: goto L_08A20CF8;
    case 165u: goto L_08A20D04;
    case 166u: goto L_08A20D0C;
    case 167u: goto L_08A20D18;
    case 168u: goto L_08A20D20;
    case 169u: goto L_08A20D2C;
    case 170u: goto L_08A20D34;
    case 171u: goto L_08A20D40;
    case 172u: goto L_08A20D48;
    case 173u: goto L_08A20D60;
    case 174u: goto L_08A20D78;
    case 175u: goto L_08A20D88;
    case 176u: goto L_08A20D98;
    case 177u: goto L_08A20DF4;
    case 178u: goto L_08A20E04;
    case 179u: goto L_08A20E14;
    case 180u: goto L_08A20E24;
    case 181u: goto L_08A20E4C;
    case 182u: goto L_08A20E68;
    case 183u: goto L_08A20E78;
    case 184u: goto L_08A20E8C;
    case 185u: goto L_08A20E9C;
    case 186u: goto L_08A20EAC;
    case 187u: goto L_08A20EBC;
    case 188u: goto L_08A20ECC;
    case 189u: goto L_08A20EDC;
    case 190u: goto L_08A20EE8;
    case 191u: goto L_08A20F04;
    case 192u: goto L_08A20F10;
    case 193u: goto L_08A20F2C;
    case 194u: goto L_08A20F38;
    case 195u: goto L_08A20F54;
    case 196u: goto L_08A20F60;
    case 197u: goto L_08A20F74;
    case 198u: goto L_08A20F84;
    case 199u: goto L_08A20F94;
    case 200u: goto L_08A20FA0;
    case 201u: goto L_08A20FB4;
    case 202u: goto L_08A20FC0;
    case 203u: goto L_08A20FD4;
    case 204u: goto L_08A20FE0;
    case 205u: goto L_08A20FF4;
    case 206u: goto L_08A2100C;
    case 207u: goto L_08A21040;
    case 208u: goto L_08A2105C;
    case 209u: goto L_08A21074;
    case 210u: goto L_08A21098;
    case 211u: goto L_08A210A0;
    case 212u: goto L_08A210B8;
    case 213u: goto L_08A210D0;
    case 214u: goto L_08A210E4;
    case 215u: goto L_08A210EC;
    case 216u: goto L_08A21104;
    case 217u: goto L_08A21120;
    case 218u: goto L_08A21144;
    case 219u: goto L_08A21150;
    case 220u: goto L_08A21158;
    case 221u: goto L_08A2117C;
    case 222u: goto L_08A21184;
    case 223u: goto L_08A2119C;
    case 224u: goto L_08A211AC;
    case 225u: goto L_08A211C4;
    case 226u: goto L_08A211DC;
    case 227u: goto L_08A211EC;
    case 228u: goto L_08A211FC;
    case 229u: goto L_08A21258;
    case 230u: goto L_08A21268;
    case 231u: goto L_08A21278;
    case 232u: goto L_08A21288;
    case 233u: goto L_08A212B0;
    case 234u: goto L_08A212CC;
    case 235u: goto L_08A212DC;
    case 236u: goto L_08A212E8;
    case 237u: goto L_08A21304;
    case 238u: goto L_08A2135C;
    case 239u: goto L_08A2136C;
    case 240u: goto L_08A2137C;
    case 241u: goto L_08A2138C;
    case 242u: goto L_08A2139C;
    case 243u: goto L_08A213AC;
    case 244u: goto L_08A21404;
    case 245u: goto L_08A21414;
    case 246u: goto L_08A21424;
    case 247u: goto L_08A21434;
    case 248u: goto L_08A21444;
    case 249u: goto L_08A2146C;
    case 250u: goto L_08A21488;
    case 251u: goto L_08A214A0;
    case 252u: goto L_08A214B4;
    case 253u: goto L_08A214BC;
    case 254u: goto L_08A214D4;
    case 255u: goto L_08A214EC;
    case 256u: goto L_08A21504;
    case 257u: goto L_08A21528;
    case 258u: goto L_08A21530;
    case 259u: goto L_08A21548;
    case 260u: goto L_08A21560;
    case 261u: goto L_08A21570;
    case 262u: goto L_08A21580;
    case 263u: goto L_08A215DC;
    case 264u: goto L_08A215EC;
    case 265u: goto L_08A215FC;
    case 266u: goto L_08A2160C;
    case 267u: goto L_08A21634;
    case 268u: goto L_08A21650;
    case 269u: goto L_08A21660;
    case 270u: goto L_08A21678;
    case 271u: goto L_08A21694;
    case 272u: goto L_08A216B4;
    case 273u: goto L_08A216C4;
    case 274u: goto L_08A216E0;
    case 275u: goto L_08A216F0;
    case 276u: goto L_08A216FC;
    case 277u: goto L_08A21728;
    case 278u: goto L_08A21744;
    case 279u: goto L_08A2175C;
    case 280u: goto L_08A21780;
    case 281u: goto L_08A21788;
    case 282u: goto L_08A217A0;
    case 283u: goto L_08A217B8;
    case 284u: goto L_08A217CC;
    case 285u: goto L_08A217E0;
    case 286u: goto L_08A217F8;
    case 287u: goto L_08A2180C;
    case 288u: goto L_08A21814;
    case 289u: goto L_08A2182C;
    case 290u: goto L_08A21844;
    case 291u: goto L_08A21864;
    case 292u: goto L_08A21888;
    case 293u: goto L_08A21898;
    case 294u: goto L_08A218B0;
    case 295u: goto L_08A218C8;
    case 296u: goto L_08A218D8;
    case 297u: goto L_08A218E8;
    case 298u: goto L_08A2193C;
    case 299u: goto L_08A2194C;
    case 300u: goto L_08A2195C;
    case 301u: goto L_08A2196C;
    case 302u: goto L_08A21990;
    case 303u: goto L_08A219AC;
    case 304u: goto L_08A219BC;
    case 305u: goto L_08A219DC;
    case 306u: goto L_08A219EC;
    case 307u: goto L_08A21A08;
    case 308u: goto L_08A21A30;
    case 309u: goto L_08A21A48;
    case 310u: goto L_08A21A60;
    case 311u: goto L_08A21A74;
    case 312u: goto L_08A21A88;
    case 313u: goto L_08A21AA0;
    case 314u: goto L_08A21AB4;
    case 315u: goto L_08A21ABC;
    case 316u: goto L_08A21AD4;
    case 317u: goto L_08A21AEC;
    case 318u: goto L_08A21B04;
    case 319u: goto L_08A21B28;
    case 320u: goto L_08A21B30;
    case 321u: goto L_08A21B48;
    case 322u: goto L_08A21B60;
    case 323u: goto L_08A21B70;
    case 324u: goto L_08A21B80;
    case 325u: goto L_08A21BDC;
    case 326u: goto L_08A21BEC;
    case 327u: goto L_08A21BFC;
    case 328u: goto L_08A21C0C;
    case 329u: goto L_08A21C34;
    case 330u: goto L_08A21C50;
    case 331u: goto L_08A21C60;
    case 332u: goto L_08A21C6C;
    case 333u: goto L_08A21C80;
    case 334u: goto L_08A21C90;
    case 335u: goto L_08A21CA0;
    case 336u: goto L_08A21CAC;
    case 337u: goto L_08A21CC4;
    case 338u: goto L_08A21CD0;
    case 339u: goto L_08A21CE8;
    case 340u: goto L_08A21CF4;
    case 341u: goto L_08A21D24;
    case 342u: goto L_08A21D40;
    case 343u: goto L_08A21D58;
    case 344u: goto L_08A21D60;
    case 345u: goto L_08A21D6C;
    case 346u: goto L_08A21D78;
    case 347u: goto L_08A21D80;
    case 348u: goto L_08A21D98;
    case 349u: goto L_08A21DB0;
    case 350u: goto L_08A21DC4;
    case 351u: goto L_08A21DCC;
    case 352u: goto L_08A21DE4;
    case 353u: goto L_08A21DF8;
    case 354u: goto L_08A21E0C;
    case 355u: goto L_08A21E28;
    case 356u: goto L_08A21E40;
    case 357u: goto L_08A21E50;
    case 358u: goto L_08A21E60;
    case 359u: goto L_08A21EB4;
    case 360u: goto L_08A21EC4;
    case 361u: goto L_08A21ED4;
    case 362u: goto L_08A21EE4;
    case 363u: goto L_08A21EFC;
    case 364u: goto L_08A21F04;
    case 365u: goto L_08A21F10;
    case 366u: goto L_08A21F1C;
    case 367u: goto L_08A21F24;
    case 368u: goto L_08A21F3C;
    case 369u: goto L_08A21F54;
    case 370u: goto L_08A21F68;
    case 371u: goto L_08A21F70;
    case 372u: goto L_08A21F88;
    case 373u: goto L_08A21FA0;
    case 374u: goto L_08A21FE0;
    case 375u: goto L_08A22004;
    case 376u: goto L_08A2200C;
    case 377u: goto L_08A22018;
    case 378u: goto L_08A22020;
    case 379u: goto L_08A2202C;
    case 380u: goto L_08A22034;
    case 381u: goto L_08A22040;
    case 382u: goto L_08A22048;
    case 383u: goto L_08A22054;
    case 384u: goto L_08A2205C;
    case 385u: goto L_08A22068;
    case 386u: goto L_08A22070;
    case 387u: goto L_08A2207C;
    case 388u: goto L_08A22084;
    case 389u: goto L_08A22090;
    case 390u: goto L_08A22098;
    case 391u: goto L_08A220A4;
    case 392u: goto L_08A220AC;
    case 393u: goto L_08A220B8;
    case 394u: goto L_08A220C0;
    case 395u: goto L_08A220CC;
    case 396u: goto L_08A220D4;
    case 397u: goto L_08A220EC;
    case 398u: goto L_08A22104;
    case 399u: goto L_08A22114;
    case 400u: goto L_08A22124;
    case 401u: goto L_08A22188;
    case 402u: goto L_08A22198;
    case 403u: goto L_08A221A8;
    case 404u: goto L_08A221B8;
    case 405u: goto L_08A221E0;
    case 406u: goto L_08A221FC;
    case 407u: goto L_08A2220C;
    case 408u: goto L_08A22218;
    case 409u: goto L_08A22234;
    case 410u: goto L_08A22240;
    case 411u: goto L_08A2225C;
    case 412u: goto L_08A22268;
    case 413u: goto L_08A22284;
    case 414u: goto L_08A22290;
    case 415u: goto L_08A222AC;
    case 416u: goto L_08A222B8;
    case 417u: goto L_08A222D4;
    case 418u: goto L_08A222E0;
    case 419u: goto L_08A222FC;
    case 420u: goto L_08A22308;
    case 421u: goto L_08A22324;
    case 422u: goto L_08A22330;
    case 423u: goto L_08A2234C;
    case 424u: goto L_08A22358;
    case 425u: goto L_08A2236C;
    case 426u: goto L_08A22378;
    case 427u: goto L_08A2238C;
    case 428u: goto L_08A22398;
    case 429u: goto L_08A223B4;
    case 430u: goto L_08A223C0;
    case 431u: goto L_08A223FC;
    case 432u: goto L_08A2240C;
    case 433u: goto L_08A22428;
    case 434u: goto L_08A22440;
    case 435u: goto L_08A22450;
    case 436u: goto L_08A22460;
    case 437u: goto L_08A22470;
    case 438u: goto L_08A22488;
    case 439u: goto L_08A2249C;
    case 440u: goto L_08A224B0;
    case 441u: goto L_08A224C8;
    case 442u: goto L_08A224DC;
    case 443u: goto L_08A224E4;
    case 444u: goto L_08A224FC;
    case 445u: goto L_08A22510;
    case 446u: goto L_08A22524;
    case 447u: goto L_08A22540;
    case 448u: goto L_08A22558;
    case 449u: goto L_08A22568;
    case 450u: goto L_08A22578;
    case 451u: goto L_08A225CC;
    case 452u: goto L_08A225DC;
    case 453u: goto L_08A225EC;
    case 454u: goto L_08A225FC;
    case 455u: goto L_08A22614;
    case 456u: goto L_08A22628;
    case 457u: goto L_08A2263C;
    case 458u: goto L_08A22654;
    case 459u: goto L_08A22668;
    case 460u: goto L_08A22670;
    case 461u: goto L_08A22688;
    case 462u: goto L_08A226A0;
    case 463u: goto L_08A226C4;
    case 464u: goto L_08A226E8;
    case 465u: goto L_08A226F0;
    case 466u: goto L_08A22708;
    case 467u: goto L_08A22718;
    case 468u: goto L_08A22730;
    case 469u: goto L_08A22748;
    case 470u: goto L_08A22758;
    case 471u: goto L_08A22768;
    case 472u: goto L_08A227C4;
    case 473u: goto L_08A227D4;
    case 474u: goto L_08A227E4;
    case 475u: goto L_08A227F4;
    case 476u: goto L_08A2281C;
    case 477u: goto L_08A22838;
    case 478u: goto L_08A22848;
    case 479u: goto L_08A22854;
    case 480u: goto L_08A22894;
    case 481u: goto L_08A228B0;
    case 482u: goto L_08A228C8;
    case 483u: goto L_08A228DC;
    case 484u: goto L_08A228E4;
    case 485u: goto L_08A228FC;
    case 486u: goto L_08A22910;
    case 487u: goto L_08A22924;
    case 488u: goto L_08A22940;
    case 489u: goto L_08A22958;
    case 490u: goto L_08A22968;
    case 491u: goto L_08A22978;
    case 492u: goto L_08A229CC;
    case 493u: goto L_08A229DC;
    case 494u: goto L_08A229EC;
    case 495u: goto L_08A229FC;
    case 496u: goto L_08A22A14;
    case 497u: goto L_08A22A28;
    case 498u: goto L_08A22A3C;
    case 499u: goto L_08A22A54;
    case 500u: goto L_08A22A5C;
    case 501u: goto L_08A22A68;
    case 502u: goto L_08A22A74;
    case 503u: goto L_08A22A7C;
    case 504u: goto L_08A22A94;
    case 505u: goto L_08A22AAC;
    case 506u: goto L_08A22AC0;
    case 507u: goto L_08A22AC8;
    case 508u: goto L_08A22AE0;
    case 509u: goto L_08A22AF8;
    case 510u: goto L_08A22B24;
    case 511u: goto L_08A22B48;
    case 512u: goto L_08A22B50;
    case 513u: goto L_08A22B5C;
    case 514u: goto L_08A22B64;
    case 515u: goto L_08A22B70;
    case 516u: goto L_08A22B78;
    case 517u: goto L_08A22B84;
    case 518u: goto L_08A22B8C;
    case 519u: goto L_08A22B98;
    case 520u: goto L_08A22BA0;
    case 521u: goto L_08A22BB8;
    case 522u: goto L_08A22BD0;
    case 523u: goto L_08A22BE8;
    case 524u: goto L_08A22BF8;
    case 525u: goto L_08A22C08;
    case 526u: goto L_08A22C64;
    case 527u: goto L_08A22C74;
    case 528u: goto L_08A22C84;
    case 529u: goto L_08A22C94;
    case 530u: goto L_08A22CBC;
    case 531u: goto L_08A22CD8;
    case 532u: goto L_08A22CE8;
    case 533u: goto L_08A22CF4;
    case 534u: goto L_08A22D08;
    case 535u: goto L_08A22D14;
    case 536u: goto L_08A22D30;
    case 537u: goto L_08A22D3C;
    case 538u: goto L_08A22D58;
    case 539u: goto L_08A22D64;
    case 540u: goto L_08A22D80;
    case 541u: goto L_08A22D8C;
    case 542u: goto L_08A22DC0;
    case 543u: goto L_08A22DDC;
    case 544u: goto L_08A22DF4;
    case 545u: goto L_08A22DFC;
    case 546u: goto L_08A22E08;
    case 547u: goto L_08A22E14;
    case 548u: goto L_08A22E1C;
    case 549u: goto L_08A22E34;
    case 550u: goto L_08A22E4C;
    case 551u: goto L_08A22E60;
    case 552u: goto L_08A22E68;
    case 553u: goto L_08A22E80;
    case 554u: goto L_08A22E94;
    case 555u: goto L_08A22EA8;
    case 556u: goto L_08A22EC4;
    case 557u: goto L_08A22EDC;
    case 558u: goto L_08A22EEC;
    case 559u: goto L_08A22EFC;
    case 560u: goto L_08A22F50;
    case 561u: goto L_08A22F60;
    case 562u: goto L_08A22F70;
    case 563u: goto L_08A22F80;
    case 564u: goto L_08A22F98;
    case 565u: goto L_08A22FA0;
    case 566u: goto L_08A22FAC;
    case 567u: goto L_08A22FB8;
    case 568u: goto L_08A22FC0;
    case 569u: goto L_08A22FD8;
    case 570u: goto L_08A22FF0;
    case 571u: goto L_08A23004;
    case 572u: goto L_08A2300C;
    case 573u: goto L_08A23024;
    case 574u: goto L_08A2303C;
    case 575u: goto L_08A2304C;
    case 576u: goto L_08A2305C;
    case 577u: goto L_08A230B4;
    case 578u: goto L_08A230C4;
    case 579u: goto L_08A230D4;
    case 580u: goto L_08A230E4;
    case 581u: goto L_08A2310C;
    case 582u: goto L_08A23128;
    case 583u: goto L_08A23138;
    case 584u: goto L_08A23144;
    case 585u: goto L_08A23170;
    case 586u: goto L_08A2318C;
    case 587u: goto L_08A231A4;
    case 588u: goto L_08A231AC;
    case 589u: goto L_08A231B8;
    case 590u: goto L_08A231C4;
    case 591u: goto L_08A231CC;
    case 592u: goto L_08A231E4;
    case 593u: goto L_08A231FC;
    case 594u: goto L_08A23210;
    case 595u: goto L_08A23218;
    case 596u: goto L_08A23230;
    case 597u: goto L_08A23248;
    case 598u: goto L_08A23268;
    case 599u: goto L_08A2328C;
    case 600u: goto L_08A23294;
    case 601u: goto L_08A232A0;
    case 602u: goto L_08A232A8;
    case 603u: goto L_08A232B4;
    case 604u: goto L_08A232BC;
    case 605u: goto L_08A232D4;
    case 606u: goto L_08A232EC;
    case 607u: goto L_08A232FC;
    case 608u: goto L_08A2330C;
    case 609u: goto L_08A23368;
    case 610u: goto L_08A23378;
    case 611u: goto L_08A23388;
    case 612u: goto L_08A23398;
    case 613u: goto L_08A233C0;
    case 614u: goto L_08A233DC;
    case 615u: goto L_08A233EC;
    case 616u: goto L_08A233F8;
    case 617u: goto L_08A23414;
    case 618u: goto L_08A2342C;
    case 619u: goto L_08A23448;
    case 620u: goto L_08A23460;
    case 621u: goto L_08A2347C;
    case 622u: goto L_08A23494;
    case 623u: goto L_08A234B0;
    case 624u: goto L_08A234BC;
    case 625u: goto L_08A234D8;
    case 626u: goto L_08A234E8;
    case 627u: goto L_08A234F8;
    case 628u: goto L_08A2350C;
    case 629u: goto L_08A2351C;
    case 630u: goto L_08A23530;
    case 631u: goto L_08A23544;
    case 632u: goto L_08A23550;
    case 633u: goto L_08A2356C;
    case 634u: goto L_08A23598;
    case 635u: goto L_08A235B4;
    case 636u: goto L_08A235CC;
    case 637u: goto L_08A235F0;
    case 638u: goto L_08A235F8;
    case 639u: goto L_08A23610;
    case 640u: goto L_08A23628;
    case 641u: goto L_08A2364C;
    case 642u: goto L_08A23654;
    case 643u: goto L_08A2366C;
    case 644u: goto L_08A23684;
    case 645u: goto L_08A236A8;
    case 646u: goto L_08A236B0;
    case 647u: goto L_08A236C8;
    case 648u: goto L_08A236E0;
    case 649u: goto L_08A236E8;
    case 650u: goto L_08A236F4;
    case 651u: goto L_08A23700;
    case 652u: goto L_08A23708;
    case 653u: goto L_08A23720;
    case 654u: goto L_08A23738;
    case 655u: goto L_08A2374C;
    case 656u: goto L_08A23754;
    case 657u: goto L_08A2376C;
    case 658u: goto L_08A23780;
    case 659u: goto L_08A23794;
    case 660u: goto L_08A237B0;
    case 661u: goto L_08A237C8;
    case 662u: goto L_08A237D8;
    case 663u: goto L_08A237E8;
    case 664u: goto L_08A2383C;
    case 665u: goto L_08A2384C;
    case 666u: goto L_08A2385C;
    case 667u: goto L_08A2386C;
    case 668u: goto L_08A23884;
    case 669u: goto L_08A23898;
    case 670u: goto L_08A238AC;
    case 671u: goto L_08A238C4;
    case 672u: goto L_08A238D8;
    case 673u: goto L_08A238E0;
    case 674u: goto L_08A238F8;
    case 675u: goto L_08A2390C;
    case 676u: goto L_08A23920;
    case 677u: goto L_08A2393C;
    case 678u: goto L_08A23954;
    case 679u: goto L_08A23964;
    case 680u: goto L_08A23974;
    case 681u: goto L_08A239C8;
    case 682u: goto L_08A239D8;
    case 683u: goto L_08A239E8;
    case 684u: goto L_08A239F8;
    case 685u: goto L_08A23A10;
    case 686u: goto L_08A23A24;
    case 687u: goto L_08A23A2C;
    case 688u: goto L_08A23A44;
    case 689u: goto L_08A23A5C;
    case 690u: goto L_08A23A6C;
    case 691u: goto L_08A23A7C;
    case 692u: goto L_08A23AC4;
    case 693u: goto L_08A23AD4;
    case 694u: goto L_08A23AE4;
    case 695u: goto L_08A23AF4;
    case 696u: goto L_08A23B0C;
    case 697u: goto L_08A23B20;
    case 698u: goto L_08A23B34;
    case 699u: goto L_08A23B4C;
    case 700u: goto L_08A23B60;
    case 701u: goto L_08A23B68;
    case 702u: goto L_08A23B80;
    case 703u: goto L_08A23B98;
    case 704u: goto L_08A23BB4;
    case 705u: goto L_08A23BD8;
    case 706u: goto L_08A23BE0;
    case 707u: goto L_08A23BF0;
    case 708u: goto L_08A23BFC;
    case 709u: goto L_08A23C04;
    case 710u: goto L_08A23C0C;
    case 711u: goto L_08A23C1C;
    case 712u: goto L_08A23C34;
    case 713u: goto L_08A23C4C;
    case 714u: goto L_08A23C5C;
    case 715u: goto L_08A23C6C;
    case 716u: goto L_08A23CC8;
    case 717u: goto L_08A23CD8;
    case 718u: goto L_08A23CE8;
    case 719u: goto L_08A23CF8;
    case 720u: goto L_08A23D20;
    case 721u: goto L_08A23D3C;
    case 722u: goto L_08A23D4C;
    case 723u: goto L_08A23D5C;
    case 724u: goto L_08A23D6C;
    case 725u: goto L_08A23D78;
    case 726u: goto L_08A23DA4;
    case 727u: goto L_08A23DC0;
    case 728u: goto L_08A23DD8;
    case 729u: goto L_08A23DE0;
    case 730u: goto L_08A23DEC;
    case 731u: goto L_08A23DF8;
    case 732u: goto L_08A23E00;
    case 733u: goto L_08A23E18;
    case 734u: goto L_08A23E30;
    case 735u: goto L_08A23E44;
    case 736u: goto L_08A23E4C;
    case 737u: goto L_08A23E64;
    case 738u: goto L_08A23E78;
    case 739u: goto L_08A23E8C;
    case 740u: goto L_08A23EA8;
    case 741u: goto L_08A23EC0;
    case 742u: goto L_08A23ED0;
    case 743u: goto L_08A23EE0;
    case 744u: goto L_08A23F34;
    case 745u: goto L_08A23F44;
    case 746u: goto L_08A23F54;
    case 747u: goto L_08A23F64;
    case 748u: goto L_08A23F7C;
    case 749u: goto L_08A23F90;
    case 750u: goto L_08A23F98;
    case 751u: goto L_08A23FB0;
    case 752u: goto L_08A23FC8;
    case 753u: goto L_08A23FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A20000:
    ctx.set_gpr(31, 0x08A20008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A20008u) goto L_08A20008;
    return;
L_08A20008:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8900));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A20028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A20028u) goto L_08A20028;
    return;
L_08A20028:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A2004Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2004Cu) goto L_08A2004C;
    return;
L_08A2004C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08A20058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20058u) goto L_08A20058;
    return;
L_08A20058:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A20074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A20074u) goto L_08A20074;
    return;
L_08A20074:
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
L_08A2008C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x08A200A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A200A4u) goto L_08A200A4;
    return;
L_08A200A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A200B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A200C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A200C4u) goto L_08A200C4;
    return;
L_08A200C4:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(328));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23420));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9936));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(26880));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(296));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(13484));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(68));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(31, 0x08A20118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A20118u) goto L_08A20118;
    return;
L_08A20118:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20128:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A20138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 771u, 0x08A1FFA4u>(ctx, &aot_mem) && ctx.pc == 0x08A20138u) goto L_08A20138;
    return;
L_08A20138:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20148:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23420)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A20170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A20170u) goto L_08A20170;
    return;
L_08A20170:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08A2018Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A2018Cu) goto L_08A2018C;
    return;
L_08A2018C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2019Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2019Cu) goto L_08A2019C;
    return;
L_08A2019C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13744));
    ctx.set_gpr(31, 0x08A201B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A201B4u) goto L_08A201B4;
    return;
L_08A201B4:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-276));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A201D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A201D0u) goto L_08A201D0;
    return;
L_08A201D0:
    ctx.set_gpr(3, 16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A201E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A201E4u) goto L_08A201E4;
    return;
L_08A201E4:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A201F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A201F4u) goto L_08A201F4;
    return;
L_08A201F4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13748));
    ctx.set_gpr(31, 0x08A2020Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A2020Cu) goto L_08A2020C;
    return;
L_08A2020C:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-184));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13624));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13664));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13704));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20240u) goto L_08A20240;
    return;
L_08A20240:
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
L_08A2025C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23376)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20288;
      }
      goto L_08A20274;
    }
L_08A20274:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20290;
      }
      goto L_08A20288;
    }
L_08A20288:
    ctx.set_gpr(31, 0x08A20290u);
    // nop
    goto L_08A2031C;
L_08A20290:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23376)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A202A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A202C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A202C0u) goto L_08A202C0;
    return;
L_08A202C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13636));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A202DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A202DCu) goto L_08A202DC;
    return;
L_08A202DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8900));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A20304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A20304u) goto L_08A20304;
    return;
L_08A20304:
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
L_08A2031C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(836));
    ctx.set_gpr(31, 0x08A20334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A20334u) goto L_08A20334;
    return;
L_08A20334:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A20354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A20354u) goto L_08A20354;
    return;
L_08A20354:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(992));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13752));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23376));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25652));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(960));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(13760));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(680));
    ctx.set_gpr(31, 0x08A203B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A203B0u) goto L_08A203B0;
    return;
L_08A203B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A203C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A203D0u);
    // nop
    goto L_08A2025C;
L_08A203D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A203E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23376)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A20408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A20408u) goto L_08A20408;
    return;
L_08A20408:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13772));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A20424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A20424u) goto L_08A20424;
    return;
L_08A20424:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A20434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20434u) goto L_08A20434;
    return;
L_08A20434:
    ctx.set_gpr(3, 16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A20448u) goto L_08A20448;
    return;
L_08A20448:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A20458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20458u) goto L_08A20458;
    return;
L_08A20458:
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2046Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A2046Cu) goto L_08A2046C;
    return;
L_08A2046C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2047Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2047Cu) goto L_08A2047C;
    return;
L_08A2047C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 80u, 0x08A1C704u>(ctx, &aot_mem) && ctx.pc == 0x08A20488u) goto L_08A20488;
    return;
L_08A20488:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13820));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13832));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13844));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A204B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A204B8u) goto L_08A204B8;
    return;
L_08A204B8:
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
L_08A204D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23360)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20500;
      }
      goto L_08A204EC;
    }
L_08A204EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20508;
      }
      goto L_08A20500;
    }
L_08A20500:
    ctx.set_gpr(31, 0x08A20508u);
    // nop
    goto L_08A20758;
L_08A20508:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23360)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20520:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2053Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2053Cu) goto L_08A2053C;
    return;
L_08A2053C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13488));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08A20578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A20578u) goto L_08A20578;
    return;
L_08A20578:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    ctx.set_gpr(31, 0x08A205ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A205ACu) goto L_08A205AC;
    return;
L_08A205AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13488));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A205D8;
      }
      goto L_08A205D0;
    }
L_08A205D0:
    ctx.set_gpr(31, 0x08A205D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A205D8u) goto L_08A205D8;
    return;
L_08A205D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A205EC;
      }
      goto L_08A205E4;
    }
L_08A205E4:
    ctx.set_gpr(31, 0x08A205ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A205ECu) goto L_08A205EC;
    return;
L_08A205EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20600;
      }
      goto L_08A205F8;
    }
L_08A205F8:
    ctx.set_gpr(31, 0x08A20600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20600u) goto L_08A20600;
    return;
L_08A20600:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20614;
      }
      goto L_08A2060C;
    }
L_08A2060C:
    ctx.set_gpr(31, 0x08A20614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20614u) goto L_08A20614;
    return;
L_08A20614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20628;
      }
      goto L_08A20620;
    }
L_08A20620:
    ctx.set_gpr(31, 0x08A20628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20628u) goto L_08A20628;
    return;
L_08A20628:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2063C;
      }
      goto L_08A20634;
    }
L_08A20634:
    ctx.set_gpr(31, 0x08A2063Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2063Cu) goto L_08A2063C;
    return;
L_08A2063C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20650;
      }
      goto L_08A20648;
    }
L_08A20648:
    ctx.set_gpr(31, 0x08A20650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20650u) goto L_08A20650;
    return;
L_08A20650:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20664;
      }
      goto L_08A2065C;
    }
L_08A2065C:
    ctx.set_gpr(31, 0x08A20664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20664u) goto L_08A20664;
    return;
L_08A20664:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20678;
      }
      goto L_08A20670;
    }
L_08A20670:
    ctx.set_gpr(31, 0x08A20678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20678u) goto L_08A20678;
    return;
L_08A20678:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2068C;
      }
      goto L_08A20684;
    }
L_08A20684:
    ctx.set_gpr(31, 0x08A2068Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2068Cu) goto L_08A2068C;
    return;
L_08A2068C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A206A0;
      }
      goto L_08A20698;
    }
L_08A20698:
    ctx.set_gpr(31, 0x08A206A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A206A0u) goto L_08A206A0;
    return;
L_08A206A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A206B4;
      }
      goto L_08A206AC;
    }
L_08A206AC:
    ctx.set_gpr(31, 0x08A206B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A206B4u) goto L_08A206B4;
    return;
L_08A206B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A206C8;
      }
      goto L_08A206C0;
    }
L_08A206C0:
    ctx.set_gpr(31, 0x08A206C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A206C8u) goto L_08A206C8;
    return;
L_08A206C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A206DC;
      }
      goto L_08A206D4;
    }
L_08A206D4:
    ctx.set_gpr(31, 0x08A206DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A206DCu) goto L_08A206DC;
    return;
L_08A206DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A206F0;
      }
      goto L_08A206E8;
    }
L_08A206E8:
    ctx.set_gpr(31, 0x08A206F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A206F0u) goto L_08A206F0;
    return;
L_08A206F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20704;
      }
      goto L_08A206FC;
    }
L_08A206FC:
    ctx.set_gpr(31, 0x08A20704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20704u) goto L_08A20704;
    return;
L_08A20704:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20718;
      }
      goto L_08A20710;
    }
L_08A20710:
    ctx.set_gpr(31, 0x08A20718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20718u) goto L_08A20718;
    return;
L_08A20718:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A20730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20730u) goto L_08A20730;
    return;
L_08A20730:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A20740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A20740u) goto L_08A20740;
    return;
L_08A20740:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20758:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1920));
    ctx.set_gpr(31, 0x08A20770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A20770u) goto L_08A20770;
    return;
L_08A20770:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A20790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A20790u) goto L_08A20790;
    return;
L_08A20790:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2076));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13856));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23360));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2044));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(13900));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1312));
    ctx.set_gpr(31, 0x08A207ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A207ECu) goto L_08A207EC;
    return;
L_08A207EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A207FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A2080Cu);
    // nop
    goto L_08A204D4;
L_08A2080C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2081C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23360)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A20844u) goto L_08A20844;
    return;
L_08A20844:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13916));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(31, 0x08A20860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A20860u) goto L_08A20860;
    return;
L_08A20860:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A20870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20870u) goto L_08A20870;
    return;
L_08A20870:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2087Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A2087Cu) goto L_08A2087C;
    return;
L_08A2087C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20890u) goto L_08A20890;
    return;
L_08A20890:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2089Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A2089Cu) goto L_08A2089C;
    return;
L_08A2089C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A208B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A208B0u) goto L_08A208B0;
    return;
L_08A208B0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A208BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 394u, 0x088BA3D8u>(ctx, &aot_mem) && ctx.pc == 0x08A208BCu) goto L_08A208BC;
    return;
L_08A208BC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A208DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A208DCu) goto L_08A208DC;
    return;
L_08A208DC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A208E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 462u, 0x08A1A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08A208E8u) goto L_08A208E8;
    return;
L_08A208E8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20908u) goto L_08A20908;
    return;
L_08A20908:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A20918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A20918u) goto L_08A20918;
    return;
L_08A20918:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20928u) goto L_08A20928;
    return;
L_08A20928:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A20938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A20938u) goto L_08A20938;
    return;
L_08A20938:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20948u) goto L_08A20948;
    return;
L_08A20948:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 204u, 0x089F5114u>(ctx, &aot_mem) && ctx.pc == 0x08A20954u) goto L_08A20954;
    return;
L_08A20954:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20970u) goto L_08A20970;
    return;
L_08A20970:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2097Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2097Cu) goto L_08A2097C;
    return;
L_08A2097C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20998u) goto L_08A20998;
    return;
L_08A20998:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08A209A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A209A8u) goto L_08A209A8;
    return;
L_08A209A8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A209B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A209B8u) goto L_08A209B8;
    return;
L_08A209B8:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A209CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A209CCu) goto L_08A209CC;
    return;
L_08A209CC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A209DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A209DCu) goto L_08A209DC;
    return;
L_08A209DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A209ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A209ECu) goto L_08A209EC;
    return;
L_08A209EC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A209FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A209FCu) goto L_08A209FC;
    return;
L_08A209FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32500)));
    ctx.set_gpr(31, 0x08A20A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A20A0Cu) goto L_08A20A0C;
    return;
L_08A20A0C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20A1Cu) goto L_08A20A1C;
    return;
L_08A20A1C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 475u, 0x08A05B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20A28u) goto L_08A20A28;
    return;
L_08A20A28:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20A3Cu) goto L_08A20A3C;
    return;
L_08A20A3C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 66u, 0x088BC69Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20A48u) goto L_08A20A48;
    return;
L_08A20A48:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20A64u) goto L_08A20A64;
    return;
L_08A20A64:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A20A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20A84u) goto L_08A20A84;
    return;
L_08A20A84:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20A94u) goto L_08A20A94;
    return;
L_08A20A94:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 260u, 0x089957D0u>(ctx, &aot_mem) && ctx.pc == 0x08A20AA0u) goto L_08A20AA0;
    return;
L_08A20AA0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20AB4u) goto L_08A20AB4;
    return;
L_08A20AB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A20AC0u) goto L_08A20AC0;
    return;
L_08A20AC0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20AD8u) goto L_08A20AD8;
    return;
L_08A20AD8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A20AE4u) goto L_08A20AE4;
    return;
L_08A20AE4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20AFCu) goto L_08A20AFC;
    return;
L_08A20AFC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A20B08u) goto L_08A20B08;
    return;
L_08A20B08:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20B20u) goto L_08A20B20;
    return;
L_08A20B20:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 301u, 0x088B1C68u>(ctx, &aot_mem) && ctx.pc == 0x08A20B2Cu) goto L_08A20B2C;
    return;
L_08A20B2C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20B48u) goto L_08A20B48;
    return;
L_08A20B48:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 301u, 0x088B1C68u>(ctx, &aot_mem) && ctx.pc == 0x08A20B54u) goto L_08A20B54;
    return;
L_08A20B54:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20B70u) goto L_08A20B70;
    return;
L_08A20B70:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 543u, 0x088FAF98u>(ctx, &aot_mem) && ctx.pc == 0x08A20B7Cu) goto L_08A20B7C;
    return;
L_08A20B7C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(23));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20B9Cu) goto L_08A20B9C;
    return;
L_08A20B9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A20BA8u) goto L_08A20BA8;
    return;
L_08A20BA8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20BBCu) goto L_08A20BBC;
    return;
L_08A20BBC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A20BC8u) goto L_08A20BC8;
    return;
L_08A20BC8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14328));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14428));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14528));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A20BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20BF4u) goto L_08A20BF4;
    return;
L_08A20BF4:
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
L_08A20C10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23256)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20C3C;
      }
      goto L_08A20C28;
    }
L_08A20C28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20C44;
      }
      goto L_08A20C3C;
    }
L_08A20C3C:
    ctx.set_gpr(31, 0x08A20C44u);
    // nop
    goto L_08A20D60;
L_08A20C44:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23256)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20C5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A20C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A20C74u) goto L_08A20C74;
    return;
L_08A20C74:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8992));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(31, 0x08A20CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A20CA4u) goto L_08A20CA4;
    return;
L_08A20CA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8992));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20CD0;
      }
      goto L_08A20CC8;
    }
L_08A20CC8:
    ctx.set_gpr(31, 0x08A20CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20CD0u) goto L_08A20CD0;
    return;
L_08A20CD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20CE4;
      }
      goto L_08A20CDC;
    }
L_08A20CDC:
    ctx.set_gpr(31, 0x08A20CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20CE4u) goto L_08A20CE4;
    return;
L_08A20CE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20CF8;
      }
      goto L_08A20CF0;
    }
L_08A20CF0:
    ctx.set_gpr(31, 0x08A20CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20CF8u) goto L_08A20CF8;
    return;
L_08A20CF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20D0C;
      }
      goto L_08A20D04;
    }
L_08A20D04:
    ctx.set_gpr(31, 0x08A20D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20D0Cu) goto L_08A20D0C;
    return;
L_08A20D0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20D20;
      }
      goto L_08A20D18;
    }
L_08A20D18:
    ctx.set_gpr(31, 0x08A20D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20D20u) goto L_08A20D20;
    return;
L_08A20D20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20D34;
      }
      goto L_08A20D2C;
    }
L_08A20D2C:
    ctx.set_gpr(31, 0x08A20D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20D34u) goto L_08A20D34;
    return;
L_08A20D34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20D48;
      }
      goto L_08A20D40;
    }
L_08A20D40:
    ctx.set_gpr(31, 0x08A20D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A20D48u) goto L_08A20D48;
    return;
L_08A20D48:
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
L_08A20D60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3464));
    ctx.set_gpr(31, 0x08A20D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A20D78u) goto L_08A20D78;
    return;
L_08A20D78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20D88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A20D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A20D98u) goto L_08A20D98;
    return;
L_08A20D98:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3620));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14628));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23256));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(3588));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(14656));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(3164));
    ctx.set_gpr(31, 0x08A20DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A20DF4u) goto L_08A20DF4;
    return;
L_08A20DF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20E04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A20E14u);
    // nop
    goto L_08A20C10;
L_08A20E14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20E24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23256)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A20E4Cu) goto L_08A20E4C;
    return;
L_08A20E4C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14680));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08A20E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A20E68u) goto L_08A20E68;
    return;
L_08A20E68:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A20E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20E78u) goto L_08A20E78;
    return;
L_08A20E78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A20E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 63u, 0x089284A0u>(ctx, &aot_mem) && ctx.pc == 0x08A20E8Cu) goto L_08A20E8C;
    return;
L_08A20E8C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20E9Cu) goto L_08A20E9C;
    return;
L_08A20E9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A20EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A20EACu) goto L_08A20EAC;
    return;
L_08A20EAC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20EBCu) goto L_08A20EBC;
    return;
L_08A20EBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A20ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A20ECCu) goto L_08A20ECC;
    return;
L_08A20ECC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20EDCu) goto L_08A20EDC;
    return;
L_08A20EDC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 631u, 0x089F7758u>(ctx, &aot_mem) && ctx.pc == 0x08A20EE8u) goto L_08A20EE8;
    return;
L_08A20EE8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20F04u) goto L_08A20F04;
    return;
L_08A20F04:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 423u, 0x089F2F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20F10u) goto L_08A20F10;
    return;
L_08A20F10:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20F2Cu) goto L_08A20F2C;
    return;
L_08A20F2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 423u, 0x089F2F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20F38u) goto L_08A20F38;
    return;
L_08A20F38:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20F54u) goto L_08A20F54;
    return;
L_08A20F54:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 85u, 0x088EC770u>(ctx, &aot_mem) && ctx.pc == 0x08A20F60u) goto L_08A20F60;
    return;
L_08A20F60:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20F74u) goto L_08A20F74;
    return;
L_08A20F74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A20F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A20F84u) goto L_08A20F84;
    return;
L_08A20F84:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20F94u) goto L_08A20F94;
    return;
L_08A20F94:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 24u, 0x088E8228u>(ctx, &aot_mem) && ctx.pc == 0x08A20FA0u) goto L_08A20FA0;
    return;
L_08A20FA0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20FB4u) goto L_08A20FB4;
    return;
L_08A20FB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 165u, 0x088F8EA8u>(ctx, &aot_mem) && ctx.pc == 0x08A20FC0u) goto L_08A20FC0;
    return;
L_08A20FC0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20FD4u) goto L_08A20FD4;
    return;
L_08A20FD4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A20FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 571u, 0x08A2718Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20FE0u) goto L_08A20FE0;
    return;
L_08A20FE0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A20FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20FF4u) goto L_08A20FF4;
    return;
L_08A20FF4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15100));
    ctx.set_gpr(31, 0x08A2100Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A2100Cu) goto L_08A2100C;
    return;
L_08A2100C:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4188));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14944));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14996));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(15048));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A21040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21040u) goto L_08A21040;
    return;
L_08A21040:
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
L_08A2105C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23200)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A210A0;
      }
      goto L_08A21074;
    }
L_08A21074:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15160));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15172));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A21098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A21098u) goto L_08A21098;
    return;
L_08A21098:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23200), ctx.gpr[2]);
    goto L_08A210A0;
L_08A210A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23200)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A210B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23196)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A210E4;
      }
      goto L_08A210D0;
    }
L_08A210D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A210EC;
      }
      goto L_08A210E4;
    }
L_08A210E4:
    ctx.set_gpr(31, 0x08A210ECu);
    // nop
    goto L_08A211C4;
L_08A210EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23196)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21104:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A21120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A21120u) goto L_08A21120;
    return;
L_08A21120:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9164));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A21144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A21144u) goto L_08A21144;
    return;
L_08A21144:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08A21150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A21150u) goto L_08A21150;
    return;
L_08A21150:
    ctx.set_gpr(31, 0x08A21158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A21158u) goto L_08A21158;
    return;
L_08A21158:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9164));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21184;
      }
      goto L_08A2117C;
    }
L_08A2117C:
    ctx.set_gpr(31, 0x08A21184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A21184u) goto L_08A21184;
    return;
L_08A21184:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13116));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A2119Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2119Cu) goto L_08A2119C;
    return;
L_08A2119C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A211ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A211ACu) goto L_08A211AC;
    return;
L_08A211AC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A211C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4588));
    ctx.set_gpr(31, 0x08A211DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A211DCu) goto L_08A211DC;
    return;
L_08A211DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A211EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A211FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A211FCu) goto L_08A211FC;
    return;
L_08A211FC:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4744));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15196));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23196));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10072));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24808));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4712));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(15204));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(172));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4356));
    ctx.set_gpr(31, 0x08A21258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A21258u) goto L_08A21258;
    return;
L_08A21258:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A21278u);
    // nop
    goto L_08A210B8;
L_08A21278:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21288:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23196)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A212B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A212B0u) goto L_08A212B0;
    return;
L_08A212B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15224));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A212CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A212CCu) goto L_08A212CC;
    return;
L_08A212CC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A212DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A212DCu) goto L_08A212DC;
    return;
L_08A212DC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A212E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A212E8u) goto L_08A212E8;
    return;
L_08A212E8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A21304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21304u) goto L_08A21304;
    return;
L_08A21304:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08A2135Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A2135Cu) goto L_08A2135C;
    return;
L_08A2135C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x08A2136Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A2136Cu) goto L_08A2136C;
    return;
L_08A2136C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x08A2137Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A2137Cu) goto L_08A2137C;
    return;
L_08A2137C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x08A2138Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A2138Cu) goto L_08A2138C;
    return;
L_08A2138C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x08A2139Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x08A2139Cu) goto L_08A2139C;
    return;
L_08A2139C:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A213ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A213ACu) goto L_08A213AC;
    return;
L_08A213AC:
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
    ctx.set_gpr(31, 0x08A21404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A21404u) goto L_08A21404;
    return;
L_08A21404:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A21414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A21414u) goto L_08A21414;
    return;
L_08A21414:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A21424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A21424u) goto L_08A21424;
    return;
L_08A21424:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A21434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A21434u) goto L_08A21434;
    return;
L_08A21434:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A21444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x08A21444u) goto L_08A21444;
    return;
L_08A21444:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15284));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15296));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(15308));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2146Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2146Cu) goto L_08A2146C;
    return;
L_08A2146C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23180)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A214B4;
      }
      goto L_08A214A0;
    }
L_08A214A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A214BC;
      }
      goto L_08A214B4;
    }
L_08A214B4:
    ctx.set_gpr(31, 0x08A214BCu);
    // nop
    goto L_08A21548;
L_08A214BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23180)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A214D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A214ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A214ECu) goto L_08A214EC;
    return;
L_08A214EC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13320));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x08A21504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A21504u) goto L_08A21504;
    return;
L_08A21504:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13320));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21530;
      }
      goto L_08A21528;
    }
L_08A21528:
    ctx.set_gpr(31, 0x08A21530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A21530u) goto L_08A21530;
    return;
L_08A21530:
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
L_08A21548:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5488));
    ctx.set_gpr(31, 0x08A21560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A21560u) goto L_08A21560;
    return;
L_08A21560:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21570:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A21580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A21580u) goto L_08A21580;
    return;
L_08A21580:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5644));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15320));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23180));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14180));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27884));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(5612));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(15328));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(5332));
    ctx.set_gpr(31, 0x08A215DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A215DCu) goto L_08A215DC;
    return;
L_08A215DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A215EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A215FCu);
    // nop
    goto L_08A21488;
L_08A215FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2160C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23180)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A21634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A21634u) goto L_08A21634;
    return;
L_08A21634:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15352));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A21650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A21650u) goto L_08A21650;
    return;
L_08A21650:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A21660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21660u) goto L_08A21660;
    return;
L_08A21660:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15432));
    ctx.set_gpr(31, 0x08A21678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A21678u) goto L_08A21678;
    return;
L_08A21678:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5956));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A21694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21694u) goto L_08A21694;
    return;
L_08A21694:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A216B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A216B4u) goto L_08A216B4;
    return;
L_08A216B4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A216C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A216C4u) goto L_08A216C4;
    return;
L_08A216C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A216E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A216E0u) goto L_08A216E0;
    return;
L_08A216E0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A216F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A216F0u) goto L_08A216F0;
    return;
L_08A216F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A216FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 358u, 0x088BA0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A216FCu) goto L_08A216FC;
    return;
L_08A216FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15384));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15400));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(15416));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A21728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21728u) goto L_08A21728;
    return;
L_08A21728:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08A21744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23160)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21788;
      }
      goto L_08A2175C;
    }
L_08A2175C:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15536));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15504));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15520));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A21780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A21780u) goto L_08A21780;
    return;
L_08A21780:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23160), ctx.gpr[2]);
    goto L_08A21788;
L_08A21788:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23160)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A217A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A217B8u);
    // nop
    goto L_08A218B0;
L_08A217B8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23156)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A217CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A217CCu) goto L_08A217CC;
    return;
L_08A217CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A217E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23156)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2180C;
      }
      goto L_08A217F8;
    }
L_08A217F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21814;
      }
      goto L_08A2180C;
    }
L_08A2180C:
    ctx.set_gpr(31, 0x08A21814u);
    // nop
    goto L_08A218B0;
L_08A21814:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23156)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2182C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A21844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21844u) goto L_08A21844;
    return;
L_08A21844:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9312));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A21864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A21864u) goto L_08A21864;
    return;
L_08A21864:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A21888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21888u) goto L_08A21888;
    return;
L_08A21888:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A21898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A21898u) goto L_08A21898;
    return;
L_08A21898:
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
L_08A218B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6360));
    ctx.set_gpr(31, 0x08A218C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A218C8u) goto L_08A218C8;
    return;
L_08A218C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A218D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A218E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A218E8u) goto L_08A218E8;
    return;
L_08A218E8:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6508));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23156));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(6476));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(15552));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(6188));
    ctx.set_gpr(31, 0x08A2193Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A2193Cu) goto L_08A2193C;
    return;
L_08A2193C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2194C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A2195Cu);
    // nop
    goto L_08A217E0;
L_08A2195C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2196C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23156)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A21990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A21990u) goto L_08A21990;
    return;
L_08A21990:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15564));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A219ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A219ACu) goto L_08A219AC;
    return;
L_08A219AC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A219BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A219BCu) goto L_08A219BC;
    return;
L_08A219BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A219DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A219DCu) goto L_08A219DC;
    return;
L_08A219DC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A219ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A219ECu) goto L_08A219EC;
    return;
L_08A219EC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A21A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21A08u) goto L_08A21A08;
    return;
L_08A21A08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15576));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15588));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A21A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21A30u) goto L_08A21A30;
    return;
L_08A21A30:
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
L_08A21A48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A21A60u);
    // nop
    goto L_08A21B48;
L_08A21A60:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23140)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A21A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A21A74u) goto L_08A21A74;
    return;
L_08A21A74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21A88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23140)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21AB4;
      }
      goto L_08A21AA0;
    }
L_08A21AA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21ABC;
      }
      goto L_08A21AB4;
    }
L_08A21AB4:
    ctx.set_gpr(31, 0x08A21ABCu);
    // nop
    goto L_08A21B48;
L_08A21ABC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23140)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21AD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A21AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A21AECu) goto L_08A21AEC;
    return;
L_08A21AEC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9412));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(31, 0x08A21B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A21B04u) goto L_08A21B04;
    return;
L_08A21B04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9412));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21B30;
      }
      goto L_08A21B28;
    }
L_08A21B28:
    ctx.set_gpr(31, 0x08A21B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A21B30u) goto L_08A21B30;
    return;
L_08A21B30:
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
L_08A21B48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7024));
    ctx.set_gpr(31, 0x08A21B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A21B60u) goto L_08A21B60;
    return;
L_08A21B60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21B70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A21B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A21B80u) goto L_08A21B80;
    return;
L_08A21B80:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7180));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15612));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23140));
    ctx.set_gpr(6, 2215u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(11364));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30708));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(7148));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(15628));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(6868));
    ctx.set_gpr(31, 0x08A21BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A21BDCu) goto L_08A21BDC;
    return;
L_08A21BDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21BEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A21BFCu);
    // nop
    goto L_08A21A88;
L_08A21BFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21C0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23140)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A21C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A21C34u) goto L_08A21C34;
    return;
L_08A21C34:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15640));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A21C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A21C50u) goto L_08A21C50;
    return;
L_08A21C50:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A21C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21C60u) goto L_08A21C60;
    return;
L_08A21C60:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A21C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 505u, 0x088C2CF8u>(ctx, &aot_mem) && ctx.pc == 0x08A21C6Cu) goto L_08A21C6C;
    return;
L_08A21C6C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A21C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21C80u) goto L_08A21C80;
    return;
L_08A21C80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A21C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A21C90u) goto L_08A21C90;
    return;
L_08A21C90:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A21CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21CA0u) goto L_08A21CA0;
    return;
L_08A21CA0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A21CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 505u, 0x088C2CF8u>(ctx, &aot_mem) && ctx.pc == 0x08A21CACu) goto L_08A21CAC;
    return;
L_08A21CAC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A21CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21CC4u) goto L_08A21CC4;
    return;
L_08A21CC4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A21CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 505u, 0x088C2CF8u>(ctx, &aot_mem) && ctx.pc == 0x08A21CD0u) goto L_08A21CD0;
    return;
L_08A21CD0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A21CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21CE8u) goto L_08A21CE8;
    return;
L_08A21CE8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A21CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 363u, 0x08A0A098u>(ctx, &aot_mem) && ctx.pc == 0x08A21CF4u) goto L_08A21CF4;
    return;
L_08A21CF4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15840));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15872));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(15904));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A21D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21D24u) goto L_08A21D24;
    return;
L_08A21D24:
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
L_08A21D40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21D80;
      }
      goto L_08A21D58;
    }
L_08A21D58:
    ctx.set_gpr(31, 0x08A21D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A21D60u) goto L_08A21D60;
    return;
L_08A21D60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A21D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A21D6Cu) goto L_08A21D6C;
    return;
L_08A21D6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A21D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A21D78u) goto L_08A21D78;
    return;
L_08A21D78:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23104), ctx.gpr[2]);
    goto L_08A21D80;
L_08A21D80:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21D98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21DC4;
      }
      goto L_08A21DB0;
    }
L_08A21DB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21DCC;
      }
      goto L_08A21DC4;
    }
L_08A21DC4:
    ctx.set_gpr(31, 0x08A21DCCu);
    // nop
    goto L_08A21E28;
L_08A21DCC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21DE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A21DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A21DF8u) goto L_08A21DF8;
    return;
L_08A21DF8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9516));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A21E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A21E0Cu) goto L_08A21E0C;
    return;
L_08A21E0C:
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
L_08A21E28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7760));
    ctx.set_gpr(31, 0x08A21E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A21E40u) goto L_08A21E40;
    return;
L_08A21E40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21E50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A21E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A21E60u) goto L_08A21E60;
    return;
L_08A21E60:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15936));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23104));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(7876));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(15944));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(7652));
    ctx.set_gpr(31, 0x08A21EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A21EB4u) goto L_08A21EB4;
    return;
L_08A21EB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21EC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A21ED4u);
    // nop
    goto L_08A21D98;
L_08A21ED4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21EE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21F24;
      }
      goto L_08A21EFC;
    }
L_08A21EFC:
    ctx.set_gpr(31, 0x08A21F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A21F04u) goto L_08A21F04;
    return;
L_08A21F04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A21F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A21F10u) goto L_08A21F10;
    return;
L_08A21F10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A21F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A21F1Cu) goto L_08A21F1C;
    return;
L_08A21F1C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23100), ctx.gpr[2]);
    goto L_08A21F24;
L_08A21F24:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21F3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21F68;
      }
      goto L_08A21F54;
    }
L_08A21F54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21F70;
      }
      goto L_08A21F68;
    }
L_08A21F68:
    ctx.set_gpr(31, 0x08A21F70u);
    // nop
    goto L_08A220EC;
L_08A21F70:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21F88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A21FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A21FA0u) goto L_08A21FA0;
    return;
L_08A21FA0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13212));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(31, 0x08A21FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A21FE0u) goto L_08A21FE0;
    return;
L_08A21FE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13212));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2200C;
      }
      goto L_08A22004;
    }
L_08A22004:
    ctx.set_gpr(31, 0x08A2200Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2200Cu) goto L_08A2200C;
    return;
L_08A2200C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22020;
      }
      goto L_08A22018;
    }
L_08A22018:
    ctx.set_gpr(31, 0x08A22020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A22020u) goto L_08A22020;
    return;
L_08A22020:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22034;
      }
      goto L_08A2202C;
    }
L_08A2202C:
    ctx.set_gpr(31, 0x08A22034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A22034u) goto L_08A22034;
    return;
L_08A22034:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22048;
      }
      goto L_08A22040;
    }
L_08A22040:
    ctx.set_gpr(31, 0x08A22048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A22048u) goto L_08A22048;
    return;
L_08A22048:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2205C;
      }
      goto L_08A22054;
    }
L_08A22054:
    ctx.set_gpr(31, 0x08A2205Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2205Cu) goto L_08A2205C;
    return;
L_08A2205C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22070;
      }
      goto L_08A22068;
    }
L_08A22068:
    ctx.set_gpr(31, 0x08A22070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A22070u) goto L_08A22070;
    return;
L_08A22070:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22084;
      }
      goto L_08A2207C;
    }
L_08A2207C:
    ctx.set_gpr(31, 0x08A22084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A22084u) goto L_08A22084;
    return;
L_08A22084:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22098;
      }
      goto L_08A22090;
    }
L_08A22090:
    ctx.set_gpr(31, 0x08A22098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A22098u) goto L_08A22098;
    return;
L_08A22098:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A220AC;
      }
      goto L_08A220A4;
    }
L_08A220A4:
    ctx.set_gpr(31, 0x08A220ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A220ACu) goto L_08A220AC;
    return;
L_08A220AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A220C0;
      }
      goto L_08A220B8;
    }
L_08A220B8:
    ctx.set_gpr(31, 0x08A220C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A220C0u) goto L_08A220C0;
    return;
L_08A220C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A220D4;
      }
      goto L_08A220CC;
    }
L_08A220CC:
    ctx.set_gpr(31, 0x08A220D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A220D4u) goto L_08A220D4;
    return;
L_08A220D4:
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
L_08A220EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8468));
    ctx.set_gpr(31, 0x08A22104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A22104u) goto L_08A22104;
    return;
L_08A22104:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22114:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A22124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A22124u) goto L_08A22124;
    return;
L_08A22124:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8632));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15960));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23100));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8600));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(15996));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(76));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(8072));
    ctx.set_gpr(31, 0x08A22188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A22188u) goto L_08A22188;
    return;
L_08A22188:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22198:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A221A8u);
    // nop
    goto L_08A21F3C;
L_08A221A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A221B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A221E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A221E0u) goto L_08A221E0;
    return;
L_08A221E0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16016));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08A221FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A221FCu) goto L_08A221FC;
    return;
L_08A221FC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2220Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2220Cu) goto L_08A2220C;
    return;
L_08A2220C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22218u);
    // nop
    goto L_08A21D40;
L_08A22218:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A22234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22234u) goto L_08A22234;
    return;
L_08A22234:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 537u, 0x088C2FACu>(ctx, &aot_mem) && ctx.pc == 0x08A22240u) goto L_08A22240;
    return;
L_08A22240:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2225Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2225Cu) goto L_08A2225C;
    return;
L_08A2225C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A22268u) goto L_08A22268;
    return;
L_08A22268:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A22284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22284u) goto L_08A22284;
    return;
L_08A22284:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A22290u) goto L_08A22290;
    return;
L_08A22290:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A222ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A222ACu) goto L_08A222AC;
    return;
L_08A222AC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A222B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A222B8u) goto L_08A222B8;
    return;
L_08A222B8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A222D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A222D4u) goto L_08A222D4;
    return;
L_08A222D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A222E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A222E0u) goto L_08A222E0;
    return;
L_08A222E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A222FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A222FCu) goto L_08A222FC;
    return;
L_08A222FC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A22308u) goto L_08A22308;
    return;
L_08A22308:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A22324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22324u) goto L_08A22324;
    return;
L_08A22324:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A22330u) goto L_08A22330;
    return;
L_08A22330:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2234Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2234Cu) goto L_08A2234C;
    return;
L_08A2234C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 243u, 0x08999660u>(ctx, &aot_mem) && ctx.pc == 0x08A22358u) goto L_08A22358;
    return;
L_08A22358:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2236Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2236Cu) goto L_08A2236C;
    return;
L_08A2236C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 488u, 0x088C2BA4u>(ctx, &aot_mem) && ctx.pc == 0x08A22378u) goto L_08A22378;
    return;
L_08A22378:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2238Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2238Cu) goto L_08A2238C;
    return;
L_08A2238C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 399u, 0x08A0E1B0u>(ctx, &aot_mem) && ctx.pc == 0x08A22398u) goto L_08A22398;
    return;
L_08A22398:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A223B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A223B4u) goto L_08A223B4;
    return;
L_08A223B4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A223C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A223C0u) goto L_08A223C0;
    return;
L_08A223C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16380));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16448));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16516));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A223FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A223FCu) goto L_08A223FC;
    return;
L_08A223FC:
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9296));
    ctx.set_gpr(31, 0x08A2240Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2240Cu) goto L_08A2240C;
    return;
L_08A2240C:
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
L_08A22428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2211u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10172));
    ctx.set_gpr(31, 0x08A22440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 240u, 0x089451F4u>(ctx, &aot_mem) && ctx.pc == 0x08A22440u) goto L_08A22440;
    return;
L_08A22440:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22450:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A22460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 365u, 0x08A2D7F0u>(ctx, &aot_mem) && ctx.pc == 0x08A22460u) goto L_08A22460;
    return;
L_08A22460:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22470:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A22488u);
    // nop
    goto L_08A22540;
L_08A22488:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23028)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2249Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A2249Cu) goto L_08A2249C;
    return;
L_08A2249C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A224B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23028)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A224DC;
      }
      goto L_08A224C8;
    }
L_08A224C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A224E4;
      }
      goto L_08A224DC;
    }
L_08A224DC:
    ctx.set_gpr(31, 0x08A224E4u);
    // nop
    goto L_08A22540;
L_08A224E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23028)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A224FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A22510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A22510u) goto L_08A22510;
    return;
L_08A22510:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9620));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A22524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A22524u) goto L_08A22524;
    return;
L_08A22524:
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
L_08A22540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9576));
    ctx.set_gpr(31, 0x08A22558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A22558u) goto L_08A22558;
    return;
L_08A22558:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22568:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A22578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A22578u) goto L_08A22578;
    return;
L_08A22578:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16584));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23028));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11416));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13108));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9692));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(16592));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(9468));
    ctx.set_gpr(31, 0x08A225CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A225CCu) goto L_08A225CC;
    return;
L_08A225CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A225DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A225ECu);
    // nop
    goto L_08A224B0;
L_08A225EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A225FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A22614u);
    // nop
    goto L_08A22730;
L_08A22614:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23024)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A22628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A22628u) goto L_08A22628;
    return;
L_08A22628:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2263C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23024)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22668;
      }
      goto L_08A22654;
    }
L_08A22654:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22670;
      }
      goto L_08A22668;
    }
L_08A22668:
    ctx.set_gpr(31, 0x08A22670u);
    // nop
    goto L_08A22730;
L_08A22670:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23024)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22688:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A226A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A226A0u) goto L_08A226A0;
    return;
L_08A226A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13116));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(31, 0x08A226C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A226C4u) goto L_08A226C4;
    return;
L_08A226C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13116));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A226F0;
      }
      goto L_08A226E8;
    }
L_08A226E8:
    ctx.set_gpr(31, 0x08A226F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A226F0u) goto L_08A226F0;
    return;
L_08A226F0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A22708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22708u) goto L_08A22708;
    return;
L_08A22708:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A22718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A22718u) goto L_08A22718;
    return;
L_08A22718:
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
L_08A22730:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10072));
    ctx.set_gpr(31, 0x08A22748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A22748u) goto L_08A22748;
    return;
L_08A22748:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22758:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A22768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A22768u) goto L_08A22768;
    return;
L_08A22768:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10228));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16628));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23024));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(10196));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(16636));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(9864));
    ctx.set_gpr(31, 0x08A227C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A227C4u) goto L_08A227C4;
    return;
L_08A227C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A227D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A227E4u);
    // nop
    goto L_08A2263C;
L_08A227E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A227F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23024)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2281Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A2281Cu) goto L_08A2281C;
    return;
L_08A2281C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16648));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A22838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A22838u) goto L_08A22838;
    return;
L_08A22838:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A22848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22848u) goto L_08A22848;
    return;
L_08A22848:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 537u, 0x088C2FACu>(ctx, &aot_mem) && ctx.pc == 0x08A22854u) goto L_08A22854;
    return;
L_08A22854:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16668));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16676));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16684));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A22894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22894u) goto L_08A22894;
    return;
L_08A22894:
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
L_08A228B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23012)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A228DC;
      }
      goto L_08A228C8;
    }
L_08A228C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A228E4;
      }
      goto L_08A228DC;
    }
L_08A228DC:
    ctx.set_gpr(31, 0x08A228E4u);
    // nop
    goto L_08A22940;
L_08A228E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23012)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A228FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A22910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A22910u) goto L_08A22910;
    return;
L_08A22910:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9724));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A22924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A22924u) goto L_08A22924;
    return;
L_08A22924:
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
L_08A22940:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10600));
    ctx.set_gpr(31, 0x08A22958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A22958u) goto L_08A22958;
    return;
L_08A22958:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A22978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A22978u) goto L_08A22978;
    return;
L_08A22978:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16692));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23012));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11416));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13108));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(10716));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(16700));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(10492));
    ctx.set_gpr(31, 0x08A229CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A229CCu) goto L_08A229CC;
    return;
L_08A229CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A229DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A229ECu);
    // nop
    goto L_08A228B0;
L_08A229EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A229FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A22A14u);
    // nop
    goto L_08A22BD0;
L_08A22A14:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23008)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A22A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A22A28u) goto L_08A22A28;
    return;
L_08A22A28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22A3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23008)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22A7C;
      }
      goto L_08A22A54;
    }
L_08A22A54:
    ctx.set_gpr(31, 0x08A22A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A22A5Cu) goto L_08A22A5C;
    return;
L_08A22A5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A22A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A22A68u) goto L_08A22A68;
    return;
L_08A22A68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A22A74u) goto L_08A22A74;
    return;
L_08A22A74:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23008), ctx.gpr[2]);
    goto L_08A22A7C;
L_08A22A7C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23008)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22A94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23008)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22AC0;
      }
      goto L_08A22AAC;
    }
L_08A22AAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22AC8;
      }
      goto L_08A22AC0;
    }
L_08A22AC0:
    ctx.set_gpr(31, 0x08A22AC8u);
    // nop
    goto L_08A22BD0;
L_08A22AC8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23008)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22AE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A22AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A22AF8u) goto L_08A22AF8;
    return;
L_08A22AF8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A22B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A22B24u) goto L_08A22B24;
    return;
L_08A22B24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22B50;
      }
      goto L_08A22B48;
    }
L_08A22B48:
    ctx.set_gpr(31, 0x08A22B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A22B50u) goto L_08A22B50;
    return;
L_08A22B50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22B64;
      }
      goto L_08A22B5C;
    }
L_08A22B5C:
    ctx.set_gpr(31, 0x08A22B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A22B64u) goto L_08A22B64;
    return;
L_08A22B64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22B78;
      }
      goto L_08A22B70;
    }
L_08A22B70:
    ctx.set_gpr(31, 0x08A22B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A22B78u) goto L_08A22B78;
    return;
L_08A22B78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22B8C;
      }
      goto L_08A22B84;
    }
L_08A22B84:
    ctx.set_gpr(31, 0x08A22B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A22B8Cu) goto L_08A22B8C;
    return;
L_08A22B8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22BA0;
      }
      goto L_08A22B98;
    }
L_08A22B98:
    ctx.set_gpr(31, 0x08A22BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A22BA0u) goto L_08A22BA0;
    return;
L_08A22BA0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A22BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08A22BB8u) goto L_08A22BB8;
    return;
L_08A22BB8:
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
L_08A22BD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11256));
    ctx.set_gpr(31, 0x08A22BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A22BE8u) goto L_08A22BE8;
    return;
L_08A22BE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22BF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A22C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A22C08u) goto L_08A22C08;
    return;
L_08A22C08:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11412));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16728));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23008));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(11380));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(16752));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(10976));
    ctx.set_gpr(31, 0x08A22C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A22C64u) goto L_08A22C64;
    return;
L_08A22C64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22C74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A22C84u);
    // nop
    goto L_08A22A94;
L_08A22C84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22C94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23008)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A22CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A22CBCu) goto L_08A22CBC;
    return;
L_08A22CBC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16768));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A22CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A22CD8u) goto L_08A22CD8;
    return;
L_08A22CD8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A22CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22CE8u) goto L_08A22CE8;
    return;
L_08A22CE8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 568u, 0x08A0AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A22CF4u) goto L_08A22CF4;
    return;
L_08A22CF4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A22D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22D08u) goto L_08A22D08;
    return;
L_08A22D08:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 601u, 0x08A0B2A4u>(ctx, &aot_mem) && ctx.pc == 0x08A22D14u) goto L_08A22D14;
    return;
L_08A22D14:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A22D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22D30u) goto L_08A22D30;
    return;
L_08A22D30:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 385u, 0x08A15F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22D3Cu) goto L_08A22D3C;
    return;
L_08A22D3C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A22D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22D58u) goto L_08A22D58;
    return;
L_08A22D58:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 53u, 0x088E84C4u>(ctx, &aot_mem) && ctx.pc == 0x08A22D64u) goto L_08A22D64;
    return;
L_08A22D64:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A22D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22D80u) goto L_08A22D80;
    return;
L_08A22D80:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 506u, 0x08A128BCu>(ctx, &aot_mem) && ctx.pc == 0x08A22D8Cu) goto L_08A22D8C;
    return;
L_08A22D8C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16884));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16904));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16924));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A22DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22DC0u) goto L_08A22DC0;
    return;
L_08A22DC0:
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
L_08A22DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22984)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22E1C;
      }
      goto L_08A22DF4;
    }
L_08A22DF4:
    ctx.set_gpr(31, 0x08A22DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A22DFCu) goto L_08A22DFC;
    return;
L_08A22DFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A22E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A22E08u) goto L_08A22E08;
    return;
L_08A22E08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A22E14u) goto L_08A22E14;
    return;
L_08A22E14:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22984), ctx.gpr[2]);
    goto L_08A22E1C;
L_08A22E1C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22984)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22E34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22984)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22E60;
      }
      goto L_08A22E4C;
    }
L_08A22E4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22E68;
      }
      goto L_08A22E60;
    }
L_08A22E60:
    ctx.set_gpr(31, 0x08A22E68u);
    // nop
    goto L_08A22EC4;
L_08A22E68:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22984)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22E80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A22E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A22E94u) goto L_08A22E94;
    return;
L_08A22E94:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9920));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A22EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A22EA8u) goto L_08A22EA8;
    return;
L_08A22EA8:
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
L_08A22EC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12012));
    ctx.set_gpr(31, 0x08A22EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A22EDCu) goto L_08A22EDC;
    return;
L_08A22EDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22EEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A22EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A22EFCu) goto L_08A22EFC;
    return;
L_08A22EFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16944));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22984));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(12128));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(16952));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(11904));
    ctx.set_gpr(31, 0x08A22F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A22F50u) goto L_08A22F50;
    return;
L_08A22F50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22F60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A22F70u);
    // nop
    goto L_08A22E34;
L_08A22F70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22F80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22980)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22FC0;
      }
      goto L_08A22F98;
    }
L_08A22F98:
    ctx.set_gpr(31, 0x08A22FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A22FA0u) goto L_08A22FA0;
    return;
L_08A22FA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A22FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A22FACu) goto L_08A22FAC;
    return;
L_08A22FAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A22FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A22FB8u) goto L_08A22FB8;
    return;
L_08A22FB8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22980), ctx.gpr[2]);
    goto L_08A22FC0;
L_08A22FC0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22980)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A22FD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22980)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23004;
      }
      goto L_08A22FF0;
    }
L_08A22FF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2300C;
      }
      goto L_08A23004;
    }
L_08A23004:
    ctx.set_gpr(31, 0x08A2300Cu);
    // nop
    goto L_08A23024;
L_08A2300C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22980)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12364));
    ctx.set_gpr(31, 0x08A2303Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A2303Cu) goto L_08A2303C;
    return;
L_08A2303C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2304C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A2305Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A2305Cu) goto L_08A2305C;
    return;
L_08A2305C:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12516));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16972));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22980));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(12484));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(16980));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A230B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A230B4u) goto L_08A230B4;
    return;
L_08A230B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A230C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A230D4u);
    // nop
    goto L_08A22FD8;
L_08A230D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A230E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22980)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2310Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A2310Cu) goto L_08A2310C;
    return;
L_08A2310C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17000));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A23128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A23128u) goto L_08A23128;
    return;
L_08A23128:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A23138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23138u) goto L_08A23138;
    return;
L_08A23138:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A23144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 715u, 0x08A0BCC0u>(ctx, &aot_mem) && ctx.pc == 0x08A23144u) goto L_08A23144;
    return;
L_08A23144:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17016));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17020));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(17024));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A23170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23170u) goto L_08A23170;
    return;
L_08A23170:
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
L_08A2318C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22972)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A231CC;
      }
      goto L_08A231A4;
    }
L_08A231A4:
    ctx.set_gpr(31, 0x08A231ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A231ACu) goto L_08A231AC;
    return;
L_08A231AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A231B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A231B8u) goto L_08A231B8;
    return;
L_08A231B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A231C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A231C4u) goto L_08A231C4;
    return;
L_08A231C4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22972), ctx.gpr[2]);
    goto L_08A231CC;
L_08A231CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22972)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A231E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22972)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23210;
      }
      goto L_08A231FC;
    }
L_08A231FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23218;
      }
      goto L_08A23210;
    }
L_08A23210:
    ctx.set_gpr(31, 0x08A23218u);
    // nop
    goto L_08A232D4;
L_08A23218:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22972)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23230:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A23248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A23248u) goto L_08A23248;
    return;
L_08A23248:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12944));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    ctx.set_gpr(31, 0x08A23268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A23268u) goto L_08A23268;
    return;
L_08A23268:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12944));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23294;
      }
      goto L_08A2328C;
    }
L_08A2328C:
    ctx.set_gpr(31, 0x08A23294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A23294u) goto L_08A23294;
    return;
L_08A23294:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A232A8;
      }
      goto L_08A232A0;
    }
L_08A232A0:
    ctx.set_gpr(31, 0x08A232A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A232A8u) goto L_08A232A8;
    return;
L_08A232A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A232BC;
      }
      goto L_08A232B4;
    }
L_08A232B4:
    ctx.set_gpr(31, 0x08A232BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A232BCu) goto L_08A232BC;
    return;
L_08A232BC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A232D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13052));
    ctx.set_gpr(31, 0x08A232ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A232ECu) goto L_08A232EC;
    return;
L_08A232EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A232FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A2330Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A2330Cu) goto L_08A2330C;
    return;
L_08A2330C:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17028));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22972));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13176));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(17036));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(160));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12848));
    ctx.set_gpr(31, 0x08A23368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A23368u) goto L_08A23368;
    return;
L_08A23368:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A23388u);
    // nop
    goto L_08A231E4;
L_08A23388:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22972)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A233C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A233C0u) goto L_08A233C0;
    return;
L_08A233C0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17056));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08A233DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A233DCu) goto L_08A233DC;
    return;
L_08A233DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A233ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A233ECu) goto L_08A233EC;
    return;
L_08A233EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A233F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 466u, 0x08A268ECu>(ctx, &aot_mem) && ctx.pc == 0x08A233F8u) goto L_08A233F8;
    return;
L_08A233F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A23414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23414u) goto L_08A23414;
    return;
L_08A23414:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17932));
    ctx.set_gpr(31, 0x08A2342Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A2342Cu) goto L_08A2342C;
    return;
L_08A2342C:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13748));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A23448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23448u) goto L_08A23448;
    return;
L_08A23448:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17936));
    ctx.set_gpr(31, 0x08A23460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A23460u) goto L_08A23460;
    return;
L_08A23460:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13840));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2347Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2347Cu) goto L_08A2347C;
    return;
L_08A2347C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17940));
    ctx.set_gpr(31, 0x08A23494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A23494u) goto L_08A23494;
    return;
L_08A23494:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13932));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A234B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A234B0u) goto L_08A234B0;
    return;
L_08A234B0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A234BCu);
    // nop
    goto L_08A2318C;
L_08A234BC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A234D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A234D8u) goto L_08A234D8;
    return;
L_08A234D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A234E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A234E8u) goto L_08A234E8;
    return;
L_08A234E8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A234F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A234F8u) goto L_08A234F8;
    return;
L_08A234F8:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2350Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A2350Cu) goto L_08A2350C;
    return;
L_08A2350C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2351Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2351Cu) goto L_08A2351C;
    return;
L_08A2351C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A23530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23530u) goto L_08A23530;
    return;
L_08A23530:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A23544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23544u) goto L_08A23544;
    return;
L_08A23544:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A23550u);
    // nop
    goto L_08A2318C;
L_08A23550:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(25));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2356Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2356Cu) goto L_08A2356C;
    return;
L_08A2356C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17620));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17724));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(17828));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A23598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23598u) goto L_08A23598;
    return;
L_08A23598:
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
L_08A235B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22864)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A235F8;
      }
      goto L_08A235CC;
    }
L_08A235CC:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(17984));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17960));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17972));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A235F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A235F0u) goto L_08A235F0;
    return;
L_08A235F0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22864), ctx.gpr[2]);
    goto L_08A235F8;
L_08A235F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22864)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23610:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22860)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23654;
      }
      goto L_08A23628;
    }
L_08A23628:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(18108));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18060));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18084));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08A2364Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A2364Cu) goto L_08A2364C;
    return;
L_08A2364C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22860), ctx.gpr[2]);
    goto L_08A23654;
L_08A23654:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22860)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2366C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22856)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A236B0;
      }
      goto L_08A23684;
    }
L_08A23684:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(18216));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18184));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18200));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A236A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A236A8u) goto L_08A236A8;
    return;
L_08A236A8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22856), ctx.gpr[2]);
    goto L_08A236B0;
L_08A236B0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22856)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A236C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22852)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23708;
      }
      goto L_08A236E0;
    }
L_08A236E0:
    ctx.set_gpr(31, 0x08A236E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A236E8u) goto L_08A236E8;
    return;
L_08A236E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A236F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A236F4u) goto L_08A236F4;
    return;
L_08A236F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A23700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23700u) goto L_08A23700;
    return;
L_08A23700:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22852), ctx.gpr[2]);
    goto L_08A23708;
L_08A23708:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22852)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23720:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22852)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2374C;
      }
      goto L_08A23738;
    }
L_08A23738:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23754;
      }
      goto L_08A2374C;
    }
L_08A2374C:
    ctx.set_gpr(31, 0x08A23754u);
    // nop
    goto L_08A237B0;
L_08A23754:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22852)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2376C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A23780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A23780u) goto L_08A23780;
    return;
L_08A23780:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10024));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A23794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A23794u) goto L_08A23794;
    return;
L_08A23794:
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
L_08A237B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14296));
    ctx.set_gpr(31, 0x08A237C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A237C8u) goto L_08A237C8;
    return;
L_08A237C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A237D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A237E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A237E8u) goto L_08A237E8;
    return;
L_08A237E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22852));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14412));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18232));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14188));
    ctx.set_gpr(31, 0x08A2383Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A2383Cu) goto L_08A2383C;
    return;
L_08A2383C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2384C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A2385Cu);
    // nop
    goto L_08A23720;
L_08A2385C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2386C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A23884u);
    // nop
    goto L_08A2393C;
L_08A23884:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22848)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A23898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A23898u) goto L_08A23898;
    return;
L_08A23898:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A238AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22848)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A238D8;
      }
      goto L_08A238C4;
    }
L_08A238C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A238E0;
      }
      goto L_08A238D8;
    }
L_08A238D8:
    ctx.set_gpr(31, 0x08A238E0u);
    // nop
    goto L_08A2393C;
L_08A238E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22848)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A238F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A2390Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A2390Cu) goto L_08A2390C;
    return;
L_08A2390C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A23920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A23920u) goto L_08A23920;
    return;
L_08A23920:
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
L_08A2393C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14692));
    ctx.set_gpr(31, 0x08A23954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A23954u) goto L_08A23954;
    return;
L_08A23954:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A23974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A23974u) goto L_08A23974;
    return;
L_08A23974:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22848));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14808));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18264));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14584));
    ctx.set_gpr(31, 0x08A239C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A239C8u) goto L_08A239C8;
    return;
L_08A239C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A239D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A239E8u);
    // nop
    goto L_08A238AC;
L_08A239E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A239F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22844)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23A24;
      }
      goto L_08A23A10;
    }
L_08A23A10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23A2C;
      }
      goto L_08A23A24;
    }
L_08A23A24:
    ctx.set_gpr(31, 0x08A23A2Cu);
    // nop
    goto L_08A23A44;
L_08A23A2C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22844)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23A44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14956));
    ctx.set_gpr(31, 0x08A23A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A23A5Cu) goto L_08A23A5C;
    return;
L_08A23A5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23A6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A23A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A23A7Cu) goto L_08A23A7C;
    return;
L_08A23A7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22844));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23528));
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25116));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(15060));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18288));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A23AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A23AC4u) goto L_08A23AC4;
    return;
L_08A23AC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23AD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A23AE4u);
    // nop
    goto L_08A239F8;
L_08A23AE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23AF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A23B0Cu);
    // nop
    goto L_08A23C34;
L_08A23B0C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22840)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A23B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A23B20u) goto L_08A23B20;
    return;
L_08A23B20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23B34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22840)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23B60;
      }
      goto L_08A23B4C;
    }
L_08A23B4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23B68;
      }
      goto L_08A23B60;
    }
L_08A23B60:
    ctx.set_gpr(31, 0x08A23B68u);
    // nop
    goto L_08A23C34;
L_08A23B68:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22840)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23B80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A23B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A23B98u) goto L_08A23B98;
    return;
L_08A23B98:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10220));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x08A23BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A23BB4u) goto L_08A23BB4;
    return;
L_08A23BB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10220));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23BE0;
      }
      goto L_08A23BD8;
    }
L_08A23BD8:
    ctx.set_gpr(31, 0x08A23BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A23BE0u) goto L_08A23BE0;
    return;
L_08A23BE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23C04;
      }
      goto L_08A23BF0;
    }
L_08A23BF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A23BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23BFCu) goto L_08A23BFC;
    return;
L_08A23BFC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A23C04;
L_08A23C04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23C1C;
      }
      goto L_08A23C0C;
    }
L_08A23C0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A23C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A23C1Cu) goto L_08A23C1C;
    return;
L_08A23C1C:
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
L_08A23C34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15452));
    ctx.set_gpr(31, 0x08A23C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A23C4Cu) goto L_08A23C4C;
    return;
L_08A23C4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23C5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A23C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A23C6Cu) goto L_08A23C6C;
    return;
L_08A23C6C:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15608));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18308));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22840));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(15576));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18316));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(15232));
    ctx.set_gpr(31, 0x08A23CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A23CC8u) goto L_08A23CC8;
    return;
L_08A23CC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A23CE8u);
    // nop
    goto L_08A23B34;
L_08A23CE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23CF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22840)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A23D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A23D20u) goto L_08A23D20;
    return;
L_08A23D20:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18336));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A23D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A23D3Cu) goto L_08A23D3C;
    return;
L_08A23D3C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A23D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23D4Cu) goto L_08A23D4C;
    return;
L_08A23D4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A23D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x08A23D5Cu) goto L_08A23D5C;
    return;
L_08A23D5C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A23D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23D6Cu) goto L_08A23D6C;
    return;
L_08A23D6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A23D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 475u, 0x08A05B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23D78u) goto L_08A23D78;
    return;
L_08A23D78:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18360));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18368));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18376));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A23DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23DA4u) goto L_08A23DA4;
    return;
L_08A23DA4:
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
L_08A23DC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22828)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23E00;
      }
      goto L_08A23DD8;
    }
L_08A23DD8:
    ctx.set_gpr(31, 0x08A23DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A23DE0u) goto L_08A23DE0;
    return;
L_08A23DE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A23DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A23DECu) goto L_08A23DEC;
    return;
L_08A23DEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A23DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A23DF8u) goto L_08A23DF8;
    return;
L_08A23DF8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22828), ctx.gpr[2]);
    goto L_08A23E00;
L_08A23E00:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22828)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23E18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22828)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23E44;
      }
      goto L_08A23E30;
    }
L_08A23E30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23E4C;
      }
      goto L_08A23E44;
    }
L_08A23E44:
    ctx.set_gpr(31, 0x08A23E4Cu);
    // nop
    goto L_08A23EA8;
L_08A23E4C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22828)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23E64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A23E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A23E78u) goto L_08A23E78;
    return;
L_08A23E78:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10324));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A23E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A23E8Cu) goto L_08A23E8C;
    return;
L_08A23E8C:
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
L_08A23EA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16080));
    ctx.set_gpr(31, 0x08A23EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A23EC0u) goto L_08A23EC0;
    return;
L_08A23EC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23ED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A23EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A23EE0u) goto L_08A23EE0;
    return;
L_08A23EE0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22828));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(16196));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18392));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(15972));
    ctx.set_gpr(31, 0x08A23F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A23F34u) goto L_08A23F34;
    return;
L_08A23F34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23F44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A23F54u);
    // nop
    goto L_08A23E18;
L_08A23F54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23F64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22824)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23F90;
      }
      goto L_08A23F7C;
    }
L_08A23F7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23F98;
      }
      goto L_08A23F90;
    }
L_08A23F90:
    ctx.set_gpr(31, 0x08A23F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 5u, 0x08A24044u>(ctx, &aot_mem) && ctx.pc == 0x08A23F98u) goto L_08A23F98;
    return;
L_08A23F98:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22824)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A23FB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A23FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A23FC8u) goto L_08A23FC8;
    return;
L_08A23FC8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12836));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A23FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A23FE4u) goto L_08A23FE4;
    return;
L_08A23FE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12836));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08A24000u; return;
}

void recomp_unit_0135(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0135_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_135(Runtime &runtime) {
    runtime.register_generated_unit(135u, 0x08A20000u, 16384u, &recomp_unit_0135, &recomp_unit_0135_entry);
    runtime.register_function(0x08A20000u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20008u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20028u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2004Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20058u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20074u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2008Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20118u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20128u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20138u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20148u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20170u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2018Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2019Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2020Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20240u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2025Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20274u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20288u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20290u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A202A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A202C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A202DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20304u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2031Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20334u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20344u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20354u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20408u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20424u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20434u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20448u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20458u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2046Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2047Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20488u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20500u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20508u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20520u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2053Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20578u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20600u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2060Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20614u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20620u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20628u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20634u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2063Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20648u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20650u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2065Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20664u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20670u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20678u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20684u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2068Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20698u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20704u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20710u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20718u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20730u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20740u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20758u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20770u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20780u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20790u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2080Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2081Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20844u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20860u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20870u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2087Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20890u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2089Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20908u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20918u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20928u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20938u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20948u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20954u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20970u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2097Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20998u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20ECCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F38u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2100Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21040u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2105Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21074u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21098u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21104u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21120u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21144u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21150u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21158u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2117Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21184u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2119Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21258u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21268u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21278u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21288u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21304u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2135Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2136Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2137Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2138Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2139Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21404u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21414u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21424u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21434u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21444u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2146Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21488u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21504u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21528u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21530u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21548u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21560u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21570u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21580u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2160Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21634u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21650u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21660u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21678u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21694u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21728u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21744u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2175Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21780u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21788u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2180Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21814u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2182Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21844u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21864u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21888u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21898u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2193Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2194Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2195Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2196Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21990u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21ABCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21ED4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22004u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2200Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22018u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22020u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2202Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22034u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22040u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22048u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22054u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2205Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22068u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22070u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2207Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22084u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22090u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22098u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22104u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22114u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22124u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22188u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22198u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2220Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22218u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22234u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22240u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2225Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22268u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22284u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22290u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22308u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22324u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22330u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2234Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22358u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2236Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22378u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2238Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22398u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2240Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22428u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22440u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22450u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22460u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22470u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22488u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2249Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22510u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22524u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22540u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22558u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22568u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22578u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A225CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A225DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A225ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A225FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22614u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22628u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2263Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22654u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22668u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22670u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22688u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22708u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22718u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22730u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22748u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22758u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22768u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2281Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22838u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22848u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22854u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22894u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22910u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22924u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22940u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22958u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22968u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22978u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23004u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2300Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23024u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2303Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2304Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2305Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2310Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23128u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23138u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23144u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23170u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2318Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23210u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23218u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23230u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23248u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23268u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2328Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23294u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2330Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23368u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23378u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23388u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23398u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23414u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2342Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23448u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23460u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2347Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23494u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2350Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2351Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23530u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23544u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23550u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2356Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23598u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23610u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23628u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2364Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23654u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2366Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23684u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23700u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23708u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23720u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23738u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2374Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23754u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2376Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23780u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23794u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2383Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2384Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2385Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2386Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23884u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23898u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2390Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23920u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2393Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23954u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23964u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23974u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23AC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23AD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23AE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23AF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23ED0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FE4u, &recomp_unit_0135, "recomp_unit_0135");
}
} // namespace psprecomp
