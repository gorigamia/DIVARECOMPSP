#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0060[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0,
    34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0,
    95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0,
    0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 114, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0,
    120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135,
    0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0,
    0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149,
    0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157,
    0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0,
    252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0,
    0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 269, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276,
    0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 285, 0, 0, 286, 0,
    287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 292, 0, 293, 0, 0, 0, 0, 0, 294, 0,
    0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    301, 0, 302, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 0, 339, 0, 340, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0,
    0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359,
    0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 364, 0,
    0, 365, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0,
    0, 0, 0, 392, 0, 393, 0, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0,
    400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0,
    0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0,
    0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0,
    0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 426, 0, 427, 0, 0, 0,
    0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0,
    444, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450,
    0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0,
    454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0,
    459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0,
    0, 0, 0, 0, 465, 0, 466, 0, 0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472,
    0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0,
    0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0,
    0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489,
    0, 490, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0,
    0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0,
    0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0,
    0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0,
    0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 525, 0,
    0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0,
    0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0,
    0, 544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0,
    0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0,
    0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 574, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0,
    0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0,
    0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588,
    0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0,
    0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0,
    0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 605, 0, 0, 606,
    0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613,
    0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627,
    0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 0,
    633, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 636, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0,
    0, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0,
    647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 651,
    0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0,
    0, 658, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 666, 0,
    0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672,
    0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0,
    676, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0,
    686, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0,
    0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 696, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0,
    0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0,
    0, 709, 0, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0,
    0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 723,
    0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 729, 0,
    0, 730, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 737,
    0, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 743, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747,
    0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 753, 0, 0, 754, 0, 755,
};
void recomp_unit_0060_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088F4000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0060[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088F4000;
    case 2u: goto L_088F4008;
    case 3u: goto L_088F4010;
    case 4u: goto L_088F4028;
    case 5u: goto L_088F403C;
    case 6u: goto L_088F4050;
    case 7u: goto L_088F406C;
    case 8u: goto L_088F4084;
    case 9u: goto L_088F4094;
    case 10u: goto L_088F40A4;
    case 11u: goto L_088F4100;
    case 12u: goto L_088F4110;
    case 13u: goto L_088F4120;
    case 14u: goto L_088F4130;
    case 15u: goto L_088F4160;
    case 16u: goto L_088F4174;
    case 17u: goto L_088F4190;
    case 18u: goto L_088F419C;
    case 19u: goto L_088F41C4;
    case 20u: goto L_088F41E0;
    case 21u: goto L_088F41EC;
    case 22u: goto L_088F4208;
    case 23u: goto L_088F4220;
    case 24u: goto L_088F4234;
    case 25u: goto L_088F4248;
    case 26u: goto L_088F4260;
    case 27u: goto L_088F4274;
    case 28u: goto L_088F427C;
    case 29u: goto L_088F4294;
    case 30u: goto L_088F42AC;
    case 31u: goto L_088F42C8;
    case 32u: goto L_088F42EC;
    case 33u: goto L_088F42F4;
    case 34u: goto L_088F4300;
    case 35u: goto L_088F4308;
    case 36u: goto L_088F4320;
    case 37u: goto L_088F4338;
    case 38u: goto L_088F4348;
    case 39u: goto L_088F4358;
    case 40u: goto L_088F43B4;
    case 41u: goto L_088F43C4;
    case 42u: goto L_088F43D4;
    case 43u: goto L_088F43E4;
    case 44u: goto L_088F43F4;
    case 45u: goto L_088F441C;
    case 46u: goto L_088F4438;
    case 47u: goto L_088F4448;
    case 48u: goto L_088F4454;
    case 49u: goto L_088F4470;
    case 50u: goto L_088F447C;
    case 51u: goto L_088F44B0;
    case 52u: goto L_088F44CC;
    case 53u: goto L_088F44E4;
    case 54u: goto L_088F44F8;
    case 55u: goto L_088F450C;
    case 56u: goto L_088F4524;
    case 57u: goto L_088F4538;
    case 58u: goto L_088F4540;
    case 59u: goto L_088F4558;
    case 60u: goto L_088F4570;
    case 61u: goto L_088F4590;
    case 62u: goto L_088F45B4;
    case 63u: goto L_088F45BC;
    case 64u: goto L_088F45C8;
    case 65u: goto L_088F45D0;
    case 66u: goto L_088F45DC;
    case 67u: goto L_088F45E4;
    case 68u: goto L_088F45FC;
    case 69u: goto L_088F4614;
    case 70u: goto L_088F4624;
    case 71u: goto L_088F4634;
    case 72u: goto L_088F4690;
    case 73u: goto L_088F46A0;
    case 74u: goto L_088F46B0;
    case 75u: goto L_088F46C0;
    case 76u: goto L_088F46E8;
    case 77u: goto L_088F4704;
    case 78u: goto L_088F4714;
    case 79u: goto L_088F4730;
    case 80u: goto L_088F473C;
    case 81u: goto L_088F4758;
    case 82u: goto L_088F4764;
    case 83u: goto L_088F4780;
    case 84u: goto L_088F4798;
    case 85u: goto L_088F47B4;
    case 86u: goto L_088F47C0;
    case 87u: goto L_088F47EC;
    case 88u: goto L_088F4808;
    case 89u: goto L_088F4820;
    case 90u: goto L_088F4834;
    case 91u: goto L_088F4848;
    case 92u: goto L_088F4860;
    case 93u: goto L_088F4868;
    case 94u: goto L_088F4874;
    case 95u: goto L_088F4880;
    case 96u: goto L_088F4888;
    case 97u: goto L_088F48A0;
    case 98u: goto L_088F48B8;
    case 99u: goto L_088F48CC;
    case 100u: goto L_088F48D4;
    case 101u: goto L_088F48EC;
    case 102u: goto L_088F4904;
    case 103u: goto L_088F4938;
    case 104u: goto L_088F495C;
    case 105u: goto L_088F4964;
    case 106u: goto L_088F4970;
    case 107u: goto L_088F4978;
    case 108u: goto L_088F4984;
    case 109u: goto L_088F498C;
    case 110u: goto L_088F4998;
    case 111u: goto L_088F49A0;
    case 112u: goto L_088F49AC;
    case 113u: goto L_088F49B4;
    case 114u: goto L_088F49C0;
    case 115u: goto L_088F49C8;
    case 116u: goto L_088F49D4;
    case 117u: goto L_088F49DC;
    case 118u: goto L_088F49EC;
    case 119u: goto L_088F49F8;
    case 120u: goto L_088F4A00;
    case 121u: goto L_088F4A08;
    case 122u: goto L_088F4A18;
    case 123u: goto L_088F4A30;
    case 124u: goto L_088F4A48;
    case 125u: goto L_088F4A58;
    case 126u: goto L_088F4A68;
    case 127u: goto L_088F4ACC;
    case 128u: goto L_088F4ADC;
    case 129u: goto L_088F4AEC;
    case 130u: goto L_088F4AFC;
    case 131u: goto L_088F4B24;
    case 132u: goto L_088F4B40;
    case 133u: goto L_088F4B50;
    case 134u: goto L_088F4B64;
    case 135u: goto L_088F4B7C;
    case 136u: goto L_088F4B88;
    case 137u: goto L_088F4BA4;
    case 138u: goto L_088F4BB0;
    case 139u: goto L_088F4BD0;
    case 140u: goto L_088F4BE0;
    case 141u: goto L_088F4BEC;
    case 142u: goto L_088F4C04;
    case 143u: goto L_088F4C10;
    case 144u: goto L_088F4C24;
    case 145u: goto L_088F4C34;
    case 146u: goto L_088F4C44;
    case 147u: goto L_088F4C5C;
    case 148u: goto L_088F4C68;
    case 149u: goto L_088F4C7C;
    case 150u: goto L_088F4C8C;
    case 151u: goto L_088F4C9C;
    case 152u: goto L_088F4CA8;
    case 153u: goto L_088F4CBC;
    case 154u: goto L_088F4CC8;
    case 155u: goto L_088F4CDC;
    case 156u: goto L_088F4CEC;
    case 157u: goto L_088F4CFC;
    case 158u: goto L_088F4D0C;
    case 159u: goto L_088F4D1C;
    case 160u: goto L_088F4D28;
    case 161u: goto L_088F4D5C;
    case 162u: goto L_088F4D78;
    case 163u: goto L_088F4D88;
    case 164u: goto L_088F4D98;
    case 165u: goto L_088F4DB0;
    case 166u: goto L_088F4DB8;
    case 167u: goto L_088F4DC4;
    case 168u: goto L_088F4DD0;
    case 169u: goto L_088F4DD8;
    case 170u: goto L_088F4DF0;
    case 171u: goto L_088F4E08;
    case 172u: goto L_088F4E1C;
    case 173u: goto L_088F4E24;
    case 174u: goto L_088F4E3C;
    case 175u: goto L_088F4E50;
    case 176u: goto L_088F4E64;
    case 177u: goto L_088F4E80;
    case 178u: goto L_088F4E98;
    case 179u: goto L_088F4EA8;
    case 180u: goto L_088F4EB8;
    case 181u: goto L_088F4F0C;
    case 182u: goto L_088F4F1C;
    case 183u: goto L_088F4F2C;
    case 184u: goto L_088F4F3C;
    case 185u: goto L_088F4F54;
    case 186u: goto L_088F4F68;
    case 187u: goto L_088F4F7C;
    case 188u: goto L_088F4F94;
    case 189u: goto L_088F4FA8;
    case 190u: goto L_088F4FB0;
    case 191u: goto L_088F4FC8;
    case 192u: goto L_088F4FE0;
    case 193u: goto L_088F4FF8;
    case 194u: goto L_088F501C;
    case 195u: goto L_088F5034;
    case 196u: goto L_088F504C;
    case 197u: goto L_088F505C;
    case 198u: goto L_088F506C;
    case 199u: goto L_088F50C0;
    case 200u: goto L_088F50D0;
    case 201u: goto L_088F50E0;
    case 202u: goto L_088F50F0;
    case 203u: goto L_088F5118;
    case 204u: goto L_088F5134;
    case 205u: goto L_088F5144;
    case 206u: goto L_088F5158;
    case 207u: goto L_088F516C;
    case 208u: goto L_088F5184;
    case 209u: goto L_088F51A4;
    case 210u: goto L_088F51BC;
    case 211u: goto L_088F51DC;
    case 212u: goto L_088F5208;
    case 213u: goto L_088F5224;
    case 214u: goto L_088F523C;
    case 215u: goto L_088F5260;
    case 216u: goto L_088F5268;
    case 217u: goto L_088F5280;
    case 218u: goto L_088F5298;
    case 219u: goto L_088F52BC;
    case 220u: goto L_088F52C4;
    case 221u: goto L_088F52DC;
    case 222u: goto L_088F52F4;
    case 223u: goto L_088F5308;
    case 224u: goto L_088F5310;
    case 225u: goto L_088F5328;
    case 226u: goto L_088F5340;
    case 227u: goto L_088F5358;
    case 228u: goto L_088F537C;
    case 229u: goto L_088F5398;
    case 230u: goto L_088F53B0;
    case 231u: goto L_088F53C8;
    case 232u: goto L_088F53D8;
    case 233u: goto L_088F53E8;
    case 234u: goto L_088F543C;
    case 235u: goto L_088F544C;
    case 236u: goto L_088F545C;
    case 237u: goto L_088F546C;
    case 238u: goto L_088F5488;
    case 239u: goto L_088F5490;
    case 240u: goto L_088F549C;
    case 241u: goto L_088F54B0;
    case 242u: goto L_088F54C4;
    case 243u: goto L_088F54CC;
    case 244u: goto L_088F54DC;
    case 245u: goto L_088F5500;
    case 246u: goto L_088F5508;
    case 247u: goto L_088F5510;
    case 248u: goto L_088F5534;
    case 249u: goto L_088F5548;
    case 250u: goto L_088F5560;
    case 251u: goto L_088F5568;
    case 252u: goto L_088F5580;
    case 253u: goto L_088F558C;
    case 254u: goto L_088F55A0;
    case 255u: goto L_088F55B0;
    case 256u: goto L_088F55CC;
    case 257u: goto L_088F55D8;
    case 258u: goto L_088F55E4;
    case 259u: goto L_088F55F8;
    case 260u: goto L_088F5604;
    case 261u: goto L_088F5614;
    case 262u: goto L_088F5620;
    case 263u: goto L_088F5628;
    case 264u: goto L_088F5634;
    case 265u: goto L_088F563C;
    case 266u: goto L_088F5654;
    case 267u: goto L_088F5668;
    case 268u: goto L_088F5678;
    case 269u: goto L_088F5690;
    case 270u: goto L_088F5694;
    case 271u: goto L_088F569C;
    case 272u: goto L_088F56B4;
    case 273u: goto L_088F56C0;
    case 274u: goto L_088F56D0;
    case 275u: goto L_088F56E0;
    case 276u: goto L_088F56FC;
    case 277u: goto L_088F5708;
    case 278u: goto L_088F5710;
    case 279u: goto L_088F571C;
    case 280u: goto L_088F5728;
    case 281u: goto L_088F573C;
    case 282u: goto L_088F5748;
    case 283u: goto L_088F5758;
    case 284u: goto L_088F5764;
    case 285u: goto L_088F576C;
    case 286u: goto L_088F5778;
    case 287u: goto L_088F5780;
    case 288u: goto L_088F5798;
    case 289u: goto L_088F57AC;
    case 290u: goto L_088F57BC;
    case 291u: goto L_088F57D4;
    case 292u: goto L_088F57D8;
    case 293u: goto L_088F57E0;
    case 294u: goto L_088F57F8;
    case 295u: goto L_088F5804;
    case 296u: goto L_088F5818;
    case 297u: goto L_088F5828;
    case 298u: goto L_088F5844;
    case 299u: goto L_088F5850;
    case 300u: goto L_088F5868;
    case 301u: goto L_088F5880;
    case 302u: goto L_088F5888;
    case 303u: goto L_088F5894;
    case 304u: goto L_088F58A0;
    case 305u: goto L_088F58A8;
    case 306u: goto L_088F58C0;
    case 307u: goto L_088F58D8;
    case 308u: goto L_088F58EC;
    case 309u: goto L_088F58F4;
    case 310u: goto L_088F590C;
    case 311u: goto L_088F5920;
    case 312u: goto L_088F5934;
    case 313u: goto L_088F5950;
    case 314u: goto L_088F5968;
    case 315u: goto L_088F5978;
    case 316u: goto L_088F5988;
    case 317u: goto L_088F59DC;
    case 318u: goto L_088F59EC;
    case 319u: goto L_088F59FC;
    case 320u: goto L_088F5A0C;
    case 321u: goto L_088F5A3C;
    case 322u: goto L_088F5A50;
    case 323u: goto L_088F5A6C;
    case 324u: goto L_088F5A78;
    case 325u: goto L_088F5AA0;
    case 326u: goto L_088F5ABC;
    case 327u: goto L_088F5AC8;
    case 328u: goto L_088F5AE4;
    case 329u: goto L_088F5AFC;
    case 330u: goto L_088F5B10;
    case 331u: goto L_088F5B18;
    case 332u: goto L_088F5B30;
    case 333u: goto L_088F5B48;
    case 334u: goto L_088F5B6C;
    case 335u: goto L_088F5B90;
    case 336u: goto L_088F5B98;
    case 337u: goto L_088F5BA4;
    case 338u: goto L_088F5BAC;
    case 339u: goto L_088F5BB8;
    case 340u: goto L_088F5BC0;
    case 341u: goto L_088F5BCC;
    case 342u: goto L_088F5BD4;
    case 343u: goto L_088F5BEC;
    case 344u: goto L_088F5C04;
    case 345u: goto L_088F5C14;
    case 346u: goto L_088F5C24;
    case 347u: goto L_088F5C80;
    case 348u: goto L_088F5C90;
    case 349u: goto L_088F5CA0;
    case 350u: goto L_088F5CB0;
    case 351u: goto L_088F5CD8;
    case 352u: goto L_088F5CF4;
    case 353u: goto L_088F5D04;
    case 354u: goto L_088F5D10;
    case 355u: goto L_088F5D2C;
    case 356u: goto L_088F5D38;
    case 357u: goto L_088F5D54;
    case 358u: goto L_088F5D60;
    case 359u: goto L_088F5D7C;
    case 360u: goto L_088F5D88;
    case 361u: goto L_088F5DBC;
    case 362u: goto L_088F5DD8;
    case 363u: goto L_088F5DF0;
    case 364u: goto L_088F5DF8;
    case 365u: goto L_088F5E04;
    case 366u: goto L_088F5E10;
    case 367u: goto L_088F5E18;
    case 368u: goto L_088F5E30;
    case 369u: goto L_088F5E48;
    case 370u: goto L_088F5E5C;
    case 371u: goto L_088F5E64;
    case 372u: goto L_088F5E7C;
    case 373u: goto L_088F5E90;
    case 374u: goto L_088F5EA4;
    case 375u: goto L_088F5EC0;
    case 376u: goto L_088F5ED8;
    case 377u: goto L_088F5EE8;
    case 378u: goto L_088F5EF8;
    case 379u: goto L_088F5F4C;
    case 380u: goto L_088F5F5C;
    case 381u: goto L_088F5F6C;
    case 382u: goto L_088F5F7C;
    case 383u: goto L_088F5FA4;
    case 384u: goto L_088F5FC0;
    case 385u: goto L_088F5FD0;
    case 386u: goto L_088F5FDC;
    case 387u: goto L_088F6018;
    case 388u: goto L_088F6034;
    case 389u: goto L_088F604C;
    case 390u: goto L_088F6060;
    case 391u: goto L_088F6074;
    case 392u: goto L_088F608C;
    case 393u: goto L_088F6094;
    case 394u: goto L_088F60A0;
    case 395u: goto L_088F60AC;
    case 396u: goto L_088F60B4;
    case 397u: goto L_088F60CC;
    case 398u: goto L_088F60E4;
    case 399u: goto L_088F60F8;
    case 400u: goto L_088F6100;
    case 401u: goto L_088F6118;
    case 402u: goto L_088F612C;
    case 403u: goto L_088F6140;
    case 404u: goto L_088F615C;
    case 405u: goto L_088F6174;
    case 406u: goto L_088F6184;
    case 407u: goto L_088F6194;
    case 408u: goto L_088F61E8;
    case 409u: goto L_088F61F8;
    case 410u: goto L_088F6208;
    case 411u: goto L_088F6218;
    case 412u: goto L_088F6248;
    case 413u: goto L_088F625C;
    case 414u: goto L_088F6278;
    case 415u: goto L_088F6284;
    case 416u: goto L_088F62AC;
    case 417u: goto L_088F62C8;
    case 418u: goto L_088F62D4;
    case 419u: goto L_088F62F0;
    case 420u: goto L_088F6308;
    case 421u: goto L_088F631C;
    case 422u: goto L_088F6330;
    case 423u: goto L_088F6348;
    case 424u: goto L_088F6350;
    case 425u: goto L_088F635C;
    case 426u: goto L_088F6368;
    case 427u: goto L_088F6370;
    case 428u: goto L_088F6388;
    case 429u: goto L_088F63A0;
    case 430u: goto L_088F63B4;
    case 431u: goto L_088F63BC;
    case 432u: goto L_088F63D4;
    case 433u: goto L_088F63E8;
    case 434u: goto L_088F63FC;
    case 435u: goto L_088F6418;
    case 436u: goto L_088F6430;
    case 437u: goto L_088F6440;
    case 438u: goto L_088F6450;
    case 439u: goto L_088F64A4;
    case 440u: goto L_088F64B4;
    case 441u: goto L_088F64C4;
    case 442u: goto L_088F64D4;
    case 443u: goto L_088F64EC;
    case 444u: goto L_088F6500;
    case 445u: goto L_088F6508;
    case 446u: goto L_088F6520;
    case 447u: goto L_088F6534;
    case 448u: goto L_088F6548;
    case 449u: goto L_088F6564;
    case 450u: goto L_088F657C;
    case 451u: goto L_088F658C;
    case 452u: goto L_088F659C;
    case 453u: goto L_088F65F0;
    case 454u: goto L_088F6600;
    case 455u: goto L_088F6610;
    case 456u: goto L_088F6620;
    case 457u: goto L_088F6650;
    case 458u: goto L_088F6664;
    case 459u: goto L_088F6680;
    case 460u: goto L_088F668C;
    case 461u: goto L_088F66B4;
    case 462u: goto L_088F66D0;
    case 463u: goto L_088F66DC;
    case 464u: goto L_088F66F8;
    case 465u: goto L_088F6710;
    case 466u: goto L_088F6718;
    case 467u: goto L_088F6724;
    case 468u: goto L_088F6730;
    case 469u: goto L_088F6738;
    case 470u: goto L_088F6750;
    case 471u: goto L_088F6768;
    case 472u: goto L_088F677C;
    case 473u: goto L_088F6784;
    case 474u: goto L_088F679C;
    case 475u: goto L_088F67B0;
    case 476u: goto L_088F67C4;
    case 477u: goto L_088F67E0;
    case 478u: goto L_088F67F8;
    case 479u: goto L_088F6808;
    case 480u: goto L_088F6818;
    case 481u: goto L_088F6864;
    case 482u: goto L_088F6874;
    case 483u: goto L_088F6884;
    case 484u: goto L_088F6894;
    case 485u: goto L_088F68A4;
    case 486u: goto L_088F68BC;
    case 487u: goto L_088F68D0;
    case 488u: goto L_088F68E4;
    case 489u: goto L_088F68FC;
    case 490u: goto L_088F6904;
    case 491u: goto L_088F6910;
    case 492u: goto L_088F691C;
    case 493u: goto L_088F6924;
    case 494u: goto L_088F693C;
    case 495u: goto L_088F6954;
    case 496u: goto L_088F6968;
    case 497u: goto L_088F6970;
    case 498u: goto L_088F6988;
    case 499u: goto L_088F699C;
    case 500u: goto L_088F69B0;
    case 501u: goto L_088F69CC;
    case 502u: goto L_088F69E4;
    case 503u: goto L_088F69F4;
    case 504u: goto L_088F6A04;
    case 505u: goto L_088F6A58;
    case 506u: goto L_088F6A68;
    case 507u: goto L_088F6A78;
    case 508u: goto L_088F6A88;
    case 509u: goto L_088F6AB8;
    case 510u: goto L_088F6ACC;
    case 511u: goto L_088F6AE8;
    case 512u: goto L_088F6AF4;
    case 513u: goto L_088F6B1C;
    case 514u: goto L_088F6B38;
    case 515u: goto L_088F6B44;
    case 516u: goto L_088F6B60;
    case 517u: goto L_088F6B78;
    case 518u: goto L_088F6B8C;
    case 519u: goto L_088F6BA0;
    case 520u: goto L_088F6BB8;
    case 521u: goto L_088F6BC0;
    case 522u: goto L_088F6BCC;
    case 523u: goto L_088F6BD8;
    case 524u: goto L_088F6BE0;
    case 525u: goto L_088F6BF8;
    case 526u: goto L_088F6C10;
    case 527u: goto L_088F6C24;
    case 528u: goto L_088F6C2C;
    case 529u: goto L_088F6C44;
    case 530u: goto L_088F6C58;
    case 531u: goto L_088F6C6C;
    case 532u: goto L_088F6C88;
    case 533u: goto L_088F6CA0;
    case 534u: goto L_088F6CB0;
    case 535u: goto L_088F6CC0;
    case 536u: goto L_088F6D0C;
    case 537u: goto L_088F6D1C;
    case 538u: goto L_088F6D2C;
    case 539u: goto L_088F6D3C;
    case 540u: goto L_088F6D4C;
    case 541u: goto L_088F6D64;
    case 542u: goto L_088F6D6C;
    case 543u: goto L_088F6D78;
    case 544u: goto L_088F6D84;
    case 545u: goto L_088F6D8C;
    case 546u: goto L_088F6DA4;
    case 547u: goto L_088F6DBC;
    case 548u: goto L_088F6DD0;
    case 549u: goto L_088F6DD8;
    case 550u: goto L_088F6DF0;
    case 551u: goto L_088F6E04;
    case 552u: goto L_088F6E18;
    case 553u: goto L_088F6E34;
    case 554u: goto L_088F6E4C;
    case 555u: goto L_088F6E5C;
    case 556u: goto L_088F6E6C;
    case 557u: goto L_088F6EC0;
    case 558u: goto L_088F6ED0;
    case 559u: goto L_088F6EE0;
    case 560u: goto L_088F6EF0;
    case 561u: goto L_088F6F20;
    case 562u: goto L_088F6F34;
    case 563u: goto L_088F6F50;
    case 564u: goto L_088F6F5C;
    case 565u: goto L_088F6F84;
    case 566u: goto L_088F6FA0;
    case 567u: goto L_088F6FAC;
    case 568u: goto L_088F6FC8;
    case 569u: goto L_088F6FE0;
    case 570u: goto L_088F6FF4;
    case 571u: goto L_088F7008;
    case 572u: goto L_088F7020;
    case 573u: goto L_088F7028;
    case 574u: goto L_088F7034;
    case 575u: goto L_088F7040;
    case 576u: goto L_088F7048;
    case 577u: goto L_088F7060;
    case 578u: goto L_088F7078;
    case 579u: goto L_088F708C;
    case 580u: goto L_088F7094;
    case 581u: goto L_088F70AC;
    case 582u: goto L_088F70C0;
    case 583u: goto L_088F70D4;
    case 584u: goto L_088F70F0;
    case 585u: goto L_088F7108;
    case 586u: goto L_088F7118;
    case 587u: goto L_088F7128;
    case 588u: goto L_088F717C;
    case 589u: goto L_088F718C;
    case 590u: goto L_088F719C;
    case 591u: goto L_088F71AC;
    case 592u: goto L_088F71DC;
    case 593u: goto L_088F71F0;
    case 594u: goto L_088F720C;
    case 595u: goto L_088F7218;
    case 596u: goto L_088F7240;
    case 597u: goto L_088F725C;
    case 598u: goto L_088F7268;
    case 599u: goto L_088F7284;
    case 600u: goto L_088F729C;
    case 601u: goto L_088F72B0;
    case 602u: goto L_088F72C4;
    case 603u: goto L_088F72DC;
    case 604u: goto L_088F72E4;
    case 605u: goto L_088F72F0;
    case 606u: goto L_088F72FC;
    case 607u: goto L_088F7304;
    case 608u: goto L_088F731C;
    case 609u: goto L_088F7334;
    case 610u: goto L_088F7348;
    case 611u: goto L_088F7350;
    case 612u: goto L_088F7368;
    case 613u: goto L_088F737C;
    case 614u: goto L_088F7390;
    case 615u: goto L_088F73AC;
    case 616u: goto L_088F73C4;
    case 617u: goto L_088F73D4;
    case 618u: goto L_088F73E4;
    case 619u: goto L_088F7438;
    case 620u: goto L_088F7448;
    case 621u: goto L_088F7458;
    case 622u: goto L_088F7468;
    case 623u: goto L_088F7498;
    case 624u: goto L_088F74AC;
    case 625u: goto L_088F74C8;
    case 626u: goto L_088F74D4;
    case 627u: goto L_088F74FC;
    case 628u: goto L_088F7518;
    case 629u: goto L_088F7524;
    case 630u: goto L_088F7540;
    case 631u: goto L_088F7558;
    case 632u: goto L_088F756C;
    case 633u: goto L_088F7580;
    case 634u: goto L_088F7598;
    case 635u: goto L_088F75A0;
    case 636u: goto L_088F75AC;
    case 637u: goto L_088F75B8;
    case 638u: goto L_088F75C0;
    case 639u: goto L_088F75D8;
    case 640u: goto L_088F75F0;
    case 641u: goto L_088F7604;
    case 642u: goto L_088F760C;
    case 643u: goto L_088F7624;
    case 644u: goto L_088F7638;
    case 645u: goto L_088F764C;
    case 646u: goto L_088F7668;
    case 647u: goto L_088F7680;
    case 648u: goto L_088F7690;
    case 649u: goto L_088F76A0;
    case 650u: goto L_088F76EC;
    case 651u: goto L_088F76FC;
    case 652u: goto L_088F770C;
    case 653u: goto L_088F771C;
    case 654u: goto L_088F772C;
    case 655u: goto L_088F7744;
    case 656u: goto L_088F7758;
    case 657u: goto L_088F776C;
    case 658u: goto L_088F7784;
    case 659u: goto L_088F778C;
    case 660u: goto L_088F7798;
    case 661u: goto L_088F77A4;
    case 662u: goto L_088F77AC;
    case 663u: goto L_088F77C4;
    case 664u: goto L_088F77DC;
    case 665u: goto L_088F77F0;
    case 666u: goto L_088F77F8;
    case 667u: goto L_088F7810;
    case 668u: goto L_088F7824;
    case 669u: goto L_088F7838;
    case 670u: goto L_088F7854;
    case 671u: goto L_088F786C;
    case 672u: goto L_088F787C;
    case 673u: goto L_088F788C;
    case 674u: goto L_088F78E0;
    case 675u: goto L_088F78F0;
    case 676u: goto L_088F7900;
    case 677u: goto L_088F7910;
    case 678u: goto L_088F7940;
    case 679u: goto L_088F7954;
    case 680u: goto L_088F7970;
    case 681u: goto L_088F797C;
    case 682u: goto L_088F79A4;
    case 683u: goto L_088F79C0;
    case 684u: goto L_088F79CC;
    case 685u: goto L_088F79E8;
    case 686u: goto L_088F7A00;
    case 687u: goto L_088F7A14;
    case 688u: goto L_088F7A1C;
    case 689u: goto L_088F7A34;
    case 690u: goto L_088F7A48;
    case 691u: goto L_088F7A5C;
    case 692u: goto L_088F7A78;
    case 693u: goto L_088F7A90;
    case 694u: goto L_088F7AA0;
    case 695u: goto L_088F7AB0;
    case 696u: goto L_088F7B04;
    case 697u: goto L_088F7B14;
    case 698u: goto L_088F7B24;
    case 699u: goto L_088F7B34;
    case 700u: goto L_088F7B4C;
    case 701u: goto L_088F7B60;
    case 702u: goto L_088F7B74;
    case 703u: goto L_088F7B8C;
    case 704u: goto L_088F7BA0;
    case 705u: goto L_088F7BA8;
    case 706u: goto L_088F7BC0;
    case 707u: goto L_088F7BD4;
    case 708u: goto L_088F7BE8;
    case 709u: goto L_088F7C04;
    case 710u: goto L_088F7C1C;
    case 711u: goto L_088F7C2C;
    case 712u: goto L_088F7C3C;
    case 713u: goto L_088F7C90;
    case 714u: goto L_088F7CA0;
    case 715u: goto L_088F7CB0;
    case 716u: goto L_088F7CC0;
    case 717u: goto L_088F7CF0;
    case 718u: goto L_088F7D04;
    case 719u: goto L_088F7D20;
    case 720u: goto L_088F7D2C;
    case 721u: goto L_088F7D54;
    case 722u: goto L_088F7D70;
    case 723u: goto L_088F7D7C;
    case 724u: goto L_088F7D98;
    case 725u: goto L_088F7DB0;
    case 726u: goto L_088F7DC4;
    case 727u: goto L_088F7DD8;
    case 728u: goto L_088F7DF0;
    case 729u: goto L_088F7DF8;
    case 730u: goto L_088F7E04;
    case 731u: goto L_088F7E10;
    case 732u: goto L_088F7E18;
    case 733u: goto L_088F7E30;
    case 734u: goto L_088F7E48;
    case 735u: goto L_088F7E5C;
    case 736u: goto L_088F7E64;
    case 737u: goto L_088F7E7C;
    case 738u: goto L_088F7E90;
    case 739u: goto L_088F7EA4;
    case 740u: goto L_088F7EC0;
    case 741u: goto L_088F7ED8;
    case 742u: goto L_088F7EE8;
    case 743u: goto L_088F7EF8;
    case 744u: goto L_088F7F4C;
    case 745u: goto L_088F7F5C;
    case 746u: goto L_088F7F6C;
    case 747u: goto L_088F7F7C;
    case 748u: goto L_088F7F94;
    case 749u: goto L_088F7FA8;
    case 750u: goto L_088F7FBC;
    case 751u: goto L_088F7FD4;
    case 752u: goto L_088F7FDC;
    case 753u: goto L_088F7FE8;
    case 754u: goto L_088F7FF4;
    case 755u: goto L_088F7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088F4000:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F4010;
      }
      goto L_088F4008;
    }
L_088F4008:
    ctx.set_gpr(31, 0x088F4010u);
    // nop
    goto L_088F406C;
L_088F4010:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29724)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4028:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F403Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088F403Cu) goto L_088F403C;
    return;
L_088F403C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9168));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F4050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F4050u) goto L_088F4050;
    return;
L_088F4050:
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
L_088F406C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16532));
    ctx.set_gpr(31, 0x088F4084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F4084u) goto L_088F4084;
    return;
L_088F4084:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4094:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F40A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F40A4u) goto L_088F40A4;
    return;
L_088F40A4:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16688));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29724));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(16656));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-19972));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(16424));
    ctx.set_gpr(31, 0x088F4100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F4100u) goto L_088F4100;
    return;
L_088F4100:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F4120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 756u, 0x088F3FDCu>(ctx, &aot_mem) && ctx.pc == 0x088F4120u) goto L_088F4120;
    return;
L_088F4120:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29724)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F4160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F4160u) goto L_088F4160;
    return;
L_088F4160:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F4174u) goto L_088F4174;
    return;
L_088F4174:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F4190u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F4190u) goto L_088F4190;
    return;
L_088F4190:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F419Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 771u, 0x088DBFC4u>(ctx, &aot_mem) && ctx.pc == 0x088F419Cu) goto L_088F419C;
    return;
L_088F419C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29728));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F41C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F41C4u) goto L_088F41C4;
    return;
L_088F41C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F41EC;
      }
      goto L_088F41E0;
    }
L_088F41E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F41ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F41ECu) goto L_088F41EC;
    return;
L_088F41EC:
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
L_088F4208:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F4220u);
    // nop
    goto L_088F4320;
L_088F4220:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29732)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F4234u) goto L_088F4234;
    return;
L_088F4234:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4248:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29732)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4274;
      }
      goto L_088F4260;
    }
L_088F4260:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F427C;
      }
      goto L_088F4274;
    }
L_088F4274:
    ctx.set_gpr(31, 0x088F427Cu);
    // nop
    goto L_088F4320;
L_088F427C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29732)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4294:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088F42ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F42ACu) goto L_088F42AC;
    return;
L_088F42AC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9076));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x088F42C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F42C8u) goto L_088F42C8;
    return;
L_088F42C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9076));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F42F4;
      }
      goto L_088F42EC;
    }
L_088F42EC:
    ctx.set_gpr(31, 0x088F42F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F42F4u) goto L_088F42F4;
    return;
L_088F42F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4308;
      }
      goto L_088F4300;
    }
L_088F4300:
    ctx.set_gpr(31, 0x088F4308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F4308u) goto L_088F4308;
    return;
L_088F4308:
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
L_088F4320:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(17224));
    ctx.set_gpr(31, 0x088F4338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F4338u) goto L_088F4338;
    return;
L_088F4338:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F4358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F4358u) goto L_088F4358;
    return;
L_088F4358:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17396));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19960));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29732));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14720));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(17380));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(17348));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-19948));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(17044));
    ctx.set_gpr(31, 0x088F43B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F43B4u) goto L_088F43B4;
    return;
L_088F43B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F43C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F43D4u);
    // nop
    goto L_088F4248;
L_088F43D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F43E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29700)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F43F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29732)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F441Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F441Cu) goto L_088F441C;
    return;
L_088F441C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19932));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088F4438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F4438u) goto L_088F4438;
    return;
L_088F4438:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F4448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4448u) goto L_088F4448;
    return;
L_088F4448:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 719u, 0x088F3CC0u>(ctx, &aot_mem) && ctx.pc == 0x088F4454u) goto L_088F4454;
    return;
L_088F4454:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F4470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4470u) goto L_088F4470;
    return;
L_088F4470:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F447Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 24u, 0x088E8228u>(ctx, &aot_mem) && ctx.pc == 0x088F447Cu) goto L_088F447C;
    return;
L_088F447C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19892));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19884));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-19876));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F44B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F44B0u) goto L_088F44B0;
    return;
L_088F44B0:
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
L_088F44CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F44E4u);
    // nop
    goto L_088F45FC;
L_088F44E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29744)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F44F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F44F8u) goto L_088F44F8;
    return;
L_088F44F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F450C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29744)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4538;
      }
      goto L_088F4524;
    }
L_088F4524:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F4540;
      }
      goto L_088F4538;
    }
L_088F4538:
    ctx.set_gpr(31, 0x088F4540u);
    // nop
    goto L_088F45FC;
L_088F4540:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29744)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4558:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088F4570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F4570u) goto L_088F4570;
    return;
L_088F4570:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8984));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088F4590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F4590u) goto L_088F4590;
    return;
L_088F4590:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8984));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F45BC;
      }
      goto L_088F45B4;
    }
L_088F45B4:
    ctx.set_gpr(31, 0x088F45BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F45BCu) goto L_088F45BC;
    return;
L_088F45BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F45D0;
      }
      goto L_088F45C8;
    }
L_088F45C8:
    ctx.set_gpr(31, 0x088F45D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F45D0u) goto L_088F45D0;
    return;
L_088F45D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F45E4;
      }
      goto L_088F45DC;
    }
L_088F45DC:
    ctx.set_gpr(31, 0x088F45E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F45E4u) goto L_088F45E4;
    return;
L_088F45E4:
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
L_088F45FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(17956));
    ctx.set_gpr(31, 0x088F4614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F4614u) goto L_088F4614;
    return;
L_088F4614:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F4634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F4634u) goto L_088F4634;
    return;
L_088F4634:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19868));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29744));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14720));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(17380));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(18080));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-19856));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(17752));
    ctx.set_gpr(31, 0x088F4690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F4690u) goto L_088F4690;
    return;
L_088F4690:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F46A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F46B0u);
    // nop
    goto L_088F450C;
L_088F46B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F46C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29744)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F46E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F46E8u) goto L_088F46E8;
    return;
L_088F46E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19840));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088F4704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F4704u) goto L_088F4704;
    return;
L_088F4704:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F4714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4714u) goto L_088F4714;
    return;
L_088F4714:
    ctx.set_gpr(3, 2191u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(14260));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4730u) goto L_088F4730;
    return;
L_088F4730:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F473Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 24u, 0x088E8228u>(ctx, &aot_mem) && ctx.pc == 0x088F473Cu) goto L_088F473C;
    return;
L_088F473C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4758u) goto L_088F4758;
    return;
L_088F4758:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 750u, 0x088F3F84u>(ctx, &aot_mem) && ctx.pc == 0x088F4764u) goto L_088F4764;
    return;
L_088F4764:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4780u) goto L_088F4780;
    return;
L_088F4780:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19708));
    ctx.set_gpr(31, 0x088F4798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088F4798u) goto L_088F4798;
    return;
L_088F4798:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14444));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F47B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F47B4u) goto L_088F47B4;
    return;
L_088F47B4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F47C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 24u, 0x088E8228u>(ctx, &aot_mem) && ctx.pc == 0x088F47C0u) goto L_088F47C0;
    return;
L_088F47C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19768));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19748));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-19728));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F47ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F47ECu) goto L_088F47EC;
    return;
L_088F47EC:
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
L_088F4808:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F4820u);
    // nop
    goto L_088F4A30;
L_088F4820:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29768)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F4834u) goto L_088F4834;
    return;
L_088F4834:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4848:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29768)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F4888;
      }
      goto L_088F4860;
    }
L_088F4860:
    ctx.set_gpr(31, 0x088F4868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F4868u) goto L_088F4868;
    return;
L_088F4868:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F4874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F4874u) goto L_088F4874;
    return;
L_088F4874:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F4880u) goto L_088F4880;
    return;
L_088F4880:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29768), ctx.gpr[2]);
    goto L_088F4888;
L_088F4888:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29768)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F48A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29768)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F48CC;
      }
      goto L_088F48B8;
    }
L_088F48B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F48D4;
      }
      goto L_088F48CC;
    }
L_088F48CC:
    ctx.set_gpr(31, 0x088F48D4u);
    // nop
    goto L_088F4A30;
L_088F48D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29768)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F48EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088F4904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088F4904u) goto L_088F4904;
    return;
L_088F4904:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(792));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(31, 0x088F4938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F4938u) goto L_088F4938;
    return;
L_088F4938:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(792));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4964;
      }
      goto L_088F495C;
    }
L_088F495C:
    ctx.set_gpr(31, 0x088F4964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F4964u) goto L_088F4964;
    return;
L_088F4964:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4978;
      }
      goto L_088F4970;
    }
L_088F4970:
    ctx.set_gpr(31, 0x088F4978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F4978u) goto L_088F4978;
    return;
L_088F4978:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F498C;
      }
      goto L_088F4984;
    }
L_088F4984:
    ctx.set_gpr(31, 0x088F498Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F498Cu) goto L_088F498C;
    return;
L_088F498C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F49A0;
      }
      goto L_088F4998;
    }
L_088F4998:
    ctx.set_gpr(31, 0x088F49A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F49A0u) goto L_088F49A0;
    return;
L_088F49A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F49B4;
      }
      goto L_088F49AC;
    }
L_088F49AC:
    ctx.set_gpr(31, 0x088F49B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F49B4u) goto L_088F49B4;
    return;
L_088F49B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F49C8;
      }
      goto L_088F49C0;
    }
L_088F49C0:
    ctx.set_gpr(31, 0x088F49C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F49C8u) goto L_088F49C8;
    return;
L_088F49C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F49DC;
      }
      goto L_088F49D4;
    }
L_088F49D4:
    ctx.set_gpr(31, 0x088F49DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F49DCu) goto L_088F49DC;
    return;
L_088F49DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4A00;
      }
      goto L_088F49EC;
    }
L_088F49EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088F49F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088F49F8u) goto L_088F49F8;
    return;
L_088F49F8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088F4A00;
L_088F4A00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4A18;
      }
      goto L_088F4A08;
    }
L_088F4A08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088F4A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088F4A18u) goto L_088F4A18;
    return;
L_088F4A18:
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
L_088F4A30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(19032));
    ctx.set_gpr(31, 0x088F4A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F4A48u) goto L_088F4A48;
    return;
L_088F4A48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4A58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F4A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F4A68u) goto L_088F4A68;
    return;
L_088F4A68:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19196));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19832));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19704));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29768));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(19164));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-19668));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(76));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(18668));
    ctx.set_gpr(31, 0x088F4ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F4ACCu) goto L_088F4ACC;
    return;
L_088F4ACC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4ADC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F4AECu);
    // nop
    goto L_088F48A0;
L_088F4AEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4AFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29768)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F4B24u) goto L_088F4B24;
    return;
L_088F4B24:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19656));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088F4B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F4B40u) goto L_088F4B40;
    return;
L_088F4B40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F4B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4B50u) goto L_088F4B50;
    return;
L_088F4B50:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088F4B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088F4B64u) goto L_088F4B64;
    return;
L_088F4B64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4B7Cu) goto L_088F4B7C;
    return;
L_088F4B7C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4B88u);
    // nop
    goto L_088F4D98;
L_088F4B88:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4BA4u) goto L_088F4BA4;
    return;
L_088F4BA4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 247u, 0x088F14E8u>(ctx, &aot_mem) && ctx.pc == 0x088F4BB0u) goto L_088F4BB0;
    return;
L_088F4BB0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18964));
    ctx.set_gpr(31, 0x088F4BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 740u, 0x0894B57Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4BD0u) goto L_088F4BD0;
    return;
L_088F4BD0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4BE0u) goto L_088F4BE0;
    return;
L_088F4BE0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 493u, 0x088EA4B0u>(ctx, &aot_mem) && ctx.pc == 0x088F4BECu) goto L_088F4BEC;
    return;
L_088F4BEC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4C04u) goto L_088F4C04;
    return;
L_088F4C04:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 389u, 0x088E9D38u>(ctx, &aot_mem) && ctx.pc == 0x088F4C10u) goto L_088F4C10;
    return;
L_088F4C10:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4C24u) goto L_088F4C24;
    return;
L_088F4C24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088F4C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088F4C34u) goto L_088F4C34;
    return;
L_088F4C34:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4C44u) goto L_088F4C44;
    return;
L_088F4C44:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4C5Cu) goto L_088F4C5C;
    return;
L_088F4C5C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4C68u);
    // nop
    goto L_088F7DD8;
L_088F4C68:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4C7Cu) goto L_088F4C7C;
    return;
L_088F4C7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088F4C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088F4C8Cu) goto L_088F4C8C;
    return;
L_088F4C8C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4C9Cu) goto L_088F4C9C;
    return;
L_088F4C9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4CA8u);
    // nop
    goto L_088F4848;
L_088F4CA8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4CBCu) goto L_088F4CBC;
    return;
L_088F4CBC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 114u, 0x088F8A48u>(ctx, &aot_mem) && ctx.pc == 0x088F4CC8u) goto L_088F4CC8;
    return;
L_088F4CC8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4CDCu) goto L_088F4CDC;
    return;
L_088F4CDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088F4CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088F4CECu) goto L_088F4CEC;
    return;
L_088F4CEC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4CFCu) goto L_088F4CFC;
    return;
L_088F4CFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088F4D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088F4D0Cu) goto L_088F4D0C;
    return;
L_088F4D0C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4D1Cu) goto L_088F4D1C;
    return;
L_088F4D1C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 713u, 0x088E7C14u>(ctx, &aot_mem) && ctx.pc == 0x088F4D28u) goto L_088F4D28;
    return;
L_088F4D28:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19204));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19124));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-19044));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F4D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4D5Cu) goto L_088F4D5C;
    return;
L_088F4D5C:
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
L_088F4D78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F4D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 77u, 0x08910528u>(ctx, &aot_mem) && ctx.pc == 0x088F4D88u) goto L_088F4D88;
    return;
L_088F4D88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4D98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29852)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F4DD8;
      }
      goto L_088F4DB0;
    }
L_088F4DB0:
    ctx.set_gpr(31, 0x088F4DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F4DB8u) goto L_088F4DB8;
    return;
L_088F4DB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F4DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F4DC4u) goto L_088F4DC4;
    return;
L_088F4DC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F4DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F4DD0u) goto L_088F4DD0;
    return;
L_088F4DD0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29852), ctx.gpr[2]);
    goto L_088F4DD8;
L_088F4DD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29852)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4DF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29852)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4E1C;
      }
      goto L_088F4E08;
    }
L_088F4E08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F4E24;
      }
      goto L_088F4E1C;
    }
L_088F4E1C:
    ctx.set_gpr(31, 0x088F4E24u);
    // nop
    goto L_088F4E80;
L_088F4E24:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29852)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4E3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F4E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088F4E50u) goto L_088F4E50;
    return;
L_088F4E50:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8880));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F4E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F4E64u) goto L_088F4E64;
    return;
L_088F4E64:
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
L_088F4E80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20136));
    ctx.set_gpr(31, 0x088F4E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F4E98u) goto L_088F4E98;
    return;
L_088F4E98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4EA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F4EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F4EB8u) goto L_088F4EB8;
    return;
L_088F4EB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29852));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(20252));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18948));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(20028));
    ctx.set_gpr(31, 0x088F4F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F4F0Cu) goto L_088F4F0C;
    return;
L_088F4F0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4F1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F4F2Cu);
    // nop
    goto L_088F4DF0;
L_088F4F2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4F3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F4F54u);
    // nop
    goto L_088F5034;
L_088F4F54:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29856)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F4F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F4F68u) goto L_088F4F68;
    return;
L_088F4F68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4F7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29856)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4FA8;
      }
      goto L_088F4F94;
    }
L_088F4F94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F4FB0;
      }
      goto L_088F4FA8;
    }
L_088F4FA8:
    ctx.set_gpr(31, 0x088F4FB0u);
    // nop
    goto L_088F5034;
L_088F4FB0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29856)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4FC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088F4FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F4FE0u) goto L_088F4FE0;
    return;
L_088F4FE0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(904));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F4FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F4FF8u) goto L_088F4FF8;
    return;
L_088F4FF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F501Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088F501Cu) goto L_088F501C;
    return;
L_088F501C:
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
L_088F5034:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20572));
    ctx.set_gpr(31, 0x088F504Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F504Cu) goto L_088F504C;
    return;
L_088F504C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F505C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F506Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F506Cu) goto L_088F506C;
    return;
L_088F506C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29856));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(20688));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18932));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(20424));
    ctx.set_gpr(31, 0x088F50C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F50C0u) goto L_088F50C0;
    return;
L_088F50C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F50D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F50E0u);
    // nop
    goto L_088F4F7C;
L_088F50E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F50F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29856)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F5118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F5118u) goto L_088F5118;
    return;
L_088F5118:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18920));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088F5134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F5134u) goto L_088F5134;
    return;
L_088F5134:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5144u) goto L_088F5144;
    return;
L_088F5144:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F5158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088F5158u) goto L_088F5158;
    return;
L_088F5158:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F516Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F516Cu) goto L_088F516C;
    return;
L_088F516C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18828));
    ctx.set_gpr(31, 0x088F5184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088F5184u) goto L_088F5184;
    return;
L_088F5184:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21028));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F51A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F51A4u) goto L_088F51A4;
    return;
L_088F51A4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18824));
    ctx.set_gpr(31, 0x088F51BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088F51BCu) goto L_088F51BC;
    return;
L_088F51BC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21120));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F51DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F51DCu) goto L_088F51DC;
    return;
L_088F51DC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18876));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18860));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-18844));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5208u) goto L_088F5208;
    return;
L_088F5208:
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
L_088F5224:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29876)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5268;
      }
      goto L_088F523C;
    }
L_088F523C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18784));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18808));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18796));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088F5260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088F5260u) goto L_088F5260;
    return;
L_088F5260:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29876), ctx.gpr[2]);
    goto L_088F5268;
L_088F5268:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29876)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5280:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29880)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F52C4;
      }
      goto L_088F5298;
    }
L_088F5298:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18712));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18736));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18724));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088F52BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088F52BCu) goto L_088F52BC;
    return;
L_088F52BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29880), ctx.gpr[2]);
    goto L_088F52C4;
L_088F52C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29880)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F52DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29884)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5308;
      }
      goto L_088F52F4;
    }
L_088F52F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5310;
      }
      goto L_088F5308;
    }
L_088F5308:
    ctx.set_gpr(31, 0x088F5310u);
    // nop
    goto L_088F53B0;
L_088F5310:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29884)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F5340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088F5340u) goto L_088F5340;
    return;
L_088F5340:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8624));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F5358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F5358u) goto L_088F5358;
    return;
L_088F5358:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x088F537Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088F537Cu) goto L_088F537C;
    return;
L_088F537C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F5398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088F5398u) goto L_088F5398;
    return;
L_088F5398:
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
L_088F53B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21464));
    ctx.set_gpr(31, 0x088F53C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F53C8u) goto L_088F53C8;
    return;
L_088F53C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F53D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F53E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F53E8u) goto L_088F53E8;
    return;
L_088F53E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18704));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29884));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31504));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2684));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(21580));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18696));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(21288));
    ctx.set_gpr(31, 0x088F543Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F543Cu) goto L_088F543C;
    return;
L_088F543C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F544C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F545Cu);
    // nop
    goto L_088F52DC;
L_088F545C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F546C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(29888)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5534;
      }
      goto L_088F5488;
    }
L_088F5488:
    ctx.set_gpr(31, 0x088F5490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F5490u) goto L_088F5490;
    return;
L_088F5490:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F549Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F549Cu) goto L_088F549C;
    return;
L_088F549C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(29884)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F54B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F54B0u) goto L_088F54B0;
    return;
L_088F54B0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29888), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5534;
      }
      goto L_088F54C4;
    }
L_088F54C4:
    ctx.set_gpr(31, 0x088F54CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088F54CCu) goto L_088F54CC;
    return;
L_088F54CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F54DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088F54DCu) goto L_088F54DC;
    return;
L_088F54DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29888)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5508;
      }
      goto L_088F5500;
    }
L_088F5500:
    ctx.set_gpr(31, 0x088F5508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F5508u) goto L_088F5508;
    return;
L_088F5508:
    ctx.set_gpr(31, 0x088F5510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088F5510u) goto L_088F5510;
    return;
L_088F5510:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29888)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29888)));
    ctx.set_gpr(31, 0x088F5534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088F5534u) goto L_088F5534;
    return;
L_088F5534:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5548:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29888)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5568;
      }
      goto L_088F5560;
    }
L_088F5560:
    ctx.set_gpr(31, 0x088F5568u);
    // nop
    goto L_088F53B0;
L_088F5568:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29888)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5580:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F558C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x088F55A0u);
    // nop
    goto L_088F55B0;
L_088F55A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F55B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F55CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F55CCu) goto L_088F55CC;
    return;
L_088F55CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F55D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F55D8u) goto L_088F55D8;
    return;
L_088F55D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F55E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 38u, 0x088DC344u>(ctx, &aot_mem) && ctx.pc == 0x088F55E4u) goto L_088F55E4;
    return;
L_088F55E4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18672));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5604;
      }
      goto L_088F55F8;
    }
L_088F55F8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5654;
      }
      goto L_088F5604;
    }
L_088F5604:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F563C;
      }
      goto L_088F5614;
    }
L_088F5614:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088F5620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088F5620u) goto L_088F5620;
    return;
L_088F5620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5634;
      }
      goto L_088F5628;
    }
L_088F5628:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F5634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088F5634u) goto L_088F5634;
    return;
L_088F5634:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088F563C;
L_088F563C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18672));
    ctx.set_gpr(31, 0x088F5654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088F5654u) goto L_088F5654;
    return;
L_088F5654:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F5668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088F5668u) goto L_088F5668;
    return;
L_088F5668:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5694;
      }
      goto L_088F5678;
    }
L_088F5678:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5694;
      }
      goto L_088F5690;
    }
L_088F5690:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088F5694;
L_088F5694:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F56C0;
      }
      goto L_088F569C;
    }
L_088F569C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F56C0;
      }
      goto L_088F56B4;
    }
L_088F56B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F56C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088F56C0u) goto L_088F56C0;
    return;
L_088F56C0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F56D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088F56D0u) goto L_088F56D0;
    return;
L_088F56D0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F56E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088F56E0u) goto L_088F56E0;
    return;
L_088F56E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5708;
      }
      goto L_088F56FC;
    }
L_088F56FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F5708u) goto L_088F5708;
    return;
L_088F5708:
    ctx.set_gpr(31, 0x088F5710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F5710u) goto L_088F5710;
    return;
L_088F5710:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F571Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F571Cu) goto L_088F571C;
    return;
L_088F571C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F5728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 38u, 0x088DC344u>(ctx, &aot_mem) && ctx.pc == 0x088F5728u) goto L_088F5728;
    return;
L_088F5728:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18664));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5748;
      }
      goto L_088F573C;
    }
L_088F573C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5798;
      }
      goto L_088F5748;
    }
L_088F5748:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5780;
      }
      goto L_088F5758;
    }
L_088F5758:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088F5764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088F5764u) goto L_088F5764;
    return;
L_088F5764:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5778;
      }
      goto L_088F576C;
    }
L_088F576C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F5778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088F5778u) goto L_088F5778;
    return;
L_088F5778:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088F5780;
L_088F5780:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18664));
    ctx.set_gpr(31, 0x088F5798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088F5798u) goto L_088F5798;
    return;
L_088F5798:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088F57ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088F57ACu) goto L_088F57AC;
    return;
L_088F57AC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F57D8;
      }
      goto L_088F57BC;
    }
L_088F57BC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F57D8;
      }
      goto L_088F57D4;
    }
L_088F57D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088F57D8;
L_088F57D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5804;
      }
      goto L_088F57E0;
    }
L_088F57E0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5804;
      }
      goto L_088F57F8;
    }
L_088F57F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F5804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5804u) goto L_088F5804;
    return;
L_088F5804:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088F5818u) goto L_088F5818;
    return;
L_088F5818:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088F5828u) goto L_088F5828;
    return;
L_088F5828:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5850;
      }
      goto L_088F5844;
    }
L_088F5844:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F5850u) goto L_088F5850;
    return;
L_088F5850:
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
L_088F5868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29892)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F58A8;
      }
      goto L_088F5880;
    }
L_088F5880:
    ctx.set_gpr(31, 0x088F5888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F5888u) goto L_088F5888;
    return;
L_088F5888:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F5894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F5894u) goto L_088F5894;
    return;
L_088F5894:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F58A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F58A0u) goto L_088F58A0;
    return;
L_088F58A0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29892), ctx.gpr[2]);
    goto L_088F58A8;
L_088F58A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29892)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F58C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29892)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F58EC;
      }
      goto L_088F58D8;
    }
L_088F58D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F58F4;
      }
      goto L_088F58EC;
    }
L_088F58EC:
    ctx.set_gpr(31, 0x088F58F4u);
    // nop
    goto L_088F5950;
L_088F58F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29892)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F590C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F5920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F5920u) goto L_088F5920;
    return;
L_088F5920:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8524));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F5934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F5934u) goto L_088F5934;
    return;
L_088F5934:
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
L_088F5950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22904));
    ctx.set_gpr(31, 0x088F5968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F5968u) goto L_088F5968;
    return;
L_088F5968:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F5988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F5988u) goto L_088F5988;
    return;
L_088F5988:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23052));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29892));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(23020));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18656));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(22796));
    ctx.set_gpr(31, 0x088F59DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F59DCu) goto L_088F59DC;
    return;
L_088F59DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F59EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F59FCu);
    // nop
    goto L_088F58C0;
L_088F59FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5A0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29892)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F5A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F5A3Cu) goto L_088F5A3C;
    return;
L_088F5A3C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F5A50u) goto L_088F5A50;
    return;
L_088F5A50:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F5A6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F5A6Cu) goto L_088F5A6C;
    return;
L_088F5A6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F5A78u);
    // nop
    goto L_088F5548;
L_088F5A78:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29896));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F5AA0u) goto L_088F5AA0;
    return;
L_088F5AA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5AC8;
      }
      goto L_088F5ABC;
    }
L_088F5ABC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F5AC8u) goto L_088F5AC8;
    return;
L_088F5AC8:
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
L_088F5AE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29900)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5B10;
      }
      goto L_088F5AFC;
    }
L_088F5AFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5B18;
      }
      goto L_088F5B10;
    }
L_088F5B10:
    ctx.set_gpr(31, 0x088F5B18u);
    // nop
    goto L_088F5BEC;
L_088F5B18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29900)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5B30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088F5B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F5B48u) goto L_088F5B48;
    return;
L_088F5B48:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8432));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088F5B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F5B6Cu) goto L_088F5B6C;
    return;
L_088F5B6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8432));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5B98;
      }
      goto L_088F5B90;
    }
L_088F5B90:
    ctx.set_gpr(31, 0x088F5B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F5B98u) goto L_088F5B98;
    return;
L_088F5B98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5BAC;
      }
      goto L_088F5BA4;
    }
L_088F5BA4:
    ctx.set_gpr(31, 0x088F5BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F5BACu) goto L_088F5BAC;
    return;
L_088F5BAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5BC0;
      }
      goto L_088F5BB8;
    }
L_088F5BB8:
    ctx.set_gpr(31, 0x088F5BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F5BC0u) goto L_088F5BC0;
    return;
L_088F5BC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5BD4;
      }
      goto L_088F5BCC;
    }
L_088F5BCC:
    ctx.set_gpr(31, 0x088F5BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F5BD4u) goto L_088F5BD4;
    return;
L_088F5BD4:
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
L_088F5BEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23572));
    ctx.set_gpr(31, 0x088F5C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F5C04u) goto L_088F5C04;
    return;
L_088F5C04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5C14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F5C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F5C24u) goto L_088F5C24;
    return;
L_088F5C24:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23728));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18636));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29900));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(23696));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18616));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(23344));
    ctx.set_gpr(31, 0x088F5C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F5C80u) goto L_088F5C80;
    return;
L_088F5C80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5C90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F5CA0u);
    // nop
    goto L_088F5AE4;
L_088F5CA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5CB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29900)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F5CD8u) goto L_088F5CD8;
    return;
L_088F5CD8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18592));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088F5CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F5CF4u) goto L_088F5CF4;
    return;
L_088F5CF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F5D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5D04u) goto L_088F5D04;
    return;
L_088F5D04:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F5D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECA9Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5D10u) goto L_088F5D10;
    return;
L_088F5D10:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5D2Cu) goto L_088F5D2C;
    return;
L_088F5D2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F5D38u);
    // nop
    goto L_088F5868;
L_088F5D38:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5D54u) goto L_088F5D54;
    return;
L_088F5D54:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F5D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 114u, 0x088F8A48u>(ctx, &aot_mem) && ctx.pc == 0x088F5D60u) goto L_088F5D60;
    return;
L_088F5D60:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F5D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5D7Cu) goto L_088F5D7C;
    return;
L_088F5D7C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F5D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 713u, 0x088E7C14u>(ctx, &aot_mem) && ctx.pc == 0x088F5D88u) goto L_088F5D88;
    return;
L_088F5D88:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18508));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18488));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-18468));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F5DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5DBCu) goto L_088F5DBC;
    return;
L_088F5DBC:
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
L_088F5DD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29924)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5E18;
      }
      goto L_088F5DF0;
    }
L_088F5DF0:
    ctx.set_gpr(31, 0x088F5DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F5DF8u) goto L_088F5DF8;
    return;
L_088F5DF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F5E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F5E04u) goto L_088F5E04;
    return;
L_088F5E04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F5E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F5E10u) goto L_088F5E10;
    return;
L_088F5E10:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29924), ctx.gpr[2]);
    goto L_088F5E18;
L_088F5E18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29924)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5E30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29924)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5E5C;
      }
      goto L_088F5E48;
    }
L_088F5E48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5E64;
      }
      goto L_088F5E5C;
    }
L_088F5E5C:
    ctx.set_gpr(31, 0x088F5E64u);
    // nop
    goto L_088F5EC0;
L_088F5E64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29924)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5E7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F5E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F5E90u) goto L_088F5E90;
    return;
L_088F5E90:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1096));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F5EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F5EA4u) goto L_088F5EA4;
    return;
L_088F5EA4:
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
L_088F5EC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(31, 0x088F5ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F5ED8u) goto L_088F5ED8;
    return;
L_088F5ED8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5EE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F5EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F5EF8u) goto L_088F5EF8;
    return;
L_088F5EF8:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24444));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29924));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(24412));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18448));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(24188));
    ctx.set_gpr(31, 0x088F5F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F5F4Cu) goto L_088F5F4C;
    return;
L_088F5F4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5F5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F5F6Cu);
    // nop
    goto L_088F5E30;
L_088F5F6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5F7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29924)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F5FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F5FA4u) goto L_088F5FA4;
    return;
L_088F5FA4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18436));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088F5FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F5FC0u) goto L_088F5FC0;
    return;
L_088F5FC0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F5FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5FD0u) goto L_088F5FD0;
    return;
L_088F5FD0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F5FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x088F5FDCu) goto L_088F5FDC;
    return;
L_088F5FDC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18424));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-18412));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-18400));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F6018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6018u) goto L_088F6018;
    return;
L_088F6018:
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
L_088F6034:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F604Cu);
    // nop
    goto L_088F615C;
L_088F604C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29940)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F6060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F6060u) goto L_088F6060;
    return;
L_088F6060:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6074:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29940)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F60B4;
      }
      goto L_088F608C;
    }
L_088F608C:
    ctx.set_gpr(31, 0x088F6094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F6094u) goto L_088F6094;
    return;
L_088F6094:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F60A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F60A0u) goto L_088F60A0;
    return;
L_088F60A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F60ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F60ACu) goto L_088F60AC;
    return;
L_088F60AC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29940), ctx.gpr[2]);
    goto L_088F60B4;
L_088F60B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29940)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F60CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29940)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F60F8;
      }
      goto L_088F60E4;
    }
L_088F60E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6100;
      }
      goto L_088F60F8;
    }
L_088F60F8:
    ctx.set_gpr(31, 0x088F6100u);
    // nop
    goto L_088F615C;
L_088F6100:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29940)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6118:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F612Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F612Cu) goto L_088F612C;
    return;
L_088F612C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8332));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F6140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F6140u) goto L_088F6140;
    return;
L_088F6140:
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
L_088F615C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24964));
    ctx.set_gpr(31, 0x088F6174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F6174u) goto L_088F6174;
    return;
L_088F6174:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F6194u) goto L_088F6194;
    return;
L_088F6194:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29940));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(25080));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18388));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(24856));
    ctx.set_gpr(31, 0x088F61E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F61E8u) goto L_088F61E8;
    return;
L_088F61E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F61F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6208u);
    // nop
    goto L_088F60CC;
L_088F6208:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6218:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29940)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F6248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F6248u) goto L_088F6248;
    return;
L_088F6248:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F625Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F625Cu) goto L_088F625C;
    return;
L_088F625C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F6278u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F6278u) goto L_088F6278;
    return;
L_088F6278:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F6284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 901u, 0x088D7D3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6284u) goto L_088F6284;
    return;
L_088F6284:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29944));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F62ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F62ACu) goto L_088F62AC;
    return;
L_088F62AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F62D4;
      }
      goto L_088F62C8;
    }
L_088F62C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F62D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F62D4u) goto L_088F62D4;
    return;
L_088F62D4:
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
L_088F62F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F6308u);
    // nop
    goto L_088F6418;
L_088F6308:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29948)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F631Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F631Cu) goto L_088F631C;
    return;
L_088F631C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6330:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29948)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6370;
      }
      goto L_088F6348;
    }
L_088F6348:
    ctx.set_gpr(31, 0x088F6350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F6350u) goto L_088F6350;
    return;
L_088F6350:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F635Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F635Cu) goto L_088F635C;
    return;
L_088F635C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F6368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F6368u) goto L_088F6368;
    return;
L_088F6368:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29948), ctx.gpr[2]);
    goto L_088F6370;
L_088F6370:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29948)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6388:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29948)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F63B4;
      }
      goto L_088F63A0;
    }
L_088F63A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F63BC;
      }
      goto L_088F63B4;
    }
L_088F63B4:
    ctx.set_gpr(31, 0x088F63BCu);
    // nop
    goto L_088F6418;
L_088F63BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29948)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F63D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F63E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088F63E8u) goto L_088F63E8;
    return;
L_088F63E8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8228));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F63FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F63FCu) goto L_088F63FC;
    return;
L_088F63FC:
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
L_088F6418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25664));
    ctx.set_gpr(31, 0x088F6430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F6430u) goto L_088F6430;
    return;
L_088F6430:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6440:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F6450u) goto L_088F6450;
    return;
L_088F6450:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18376));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29948));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(25780));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18368));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(25556));
    ctx.set_gpr(31, 0x088F64A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F64A4u) goto L_088F64A4;
    return;
L_088F64A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F64B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F64C4u);
    // nop
    goto L_088F6388;
L_088F64C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F64D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6500;
      }
      goto L_088F64EC;
    }
L_088F64EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6508;
      }
      goto L_088F6500;
    }
L_088F6500:
    ctx.set_gpr(31, 0x088F6508u);
    // nop
    goto L_088F6564;
L_088F6508:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6520:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F6534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F6534u) goto L_088F6534;
    return;
L_088F6534:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F6548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F6548u) goto L_088F6548;
    return;
L_088F6548:
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
L_088F6564:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25996));
    ctx.set_gpr(31, 0x088F657Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F657Cu) goto L_088F657C;
    return;
L_088F657C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F658C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F659Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F659Cu) goto L_088F659C;
    return;
L_088F659C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29952));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(26112));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18352));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(25888));
    ctx.set_gpr(31, 0x088F65F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F65F0u) goto L_088F65F0;
    return;
L_088F65F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6600:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6610u);
    // nop
    goto L_088F64D4;
L_088F6610:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F6650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F6650u) goto L_088F6650;
    return;
L_088F6650:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F6664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F6664u) goto L_088F6664;
    return;
L_088F6664:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F6680u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F6680u) goto L_088F6680;
    return;
L_088F6680:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F668Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088F668Cu) goto L_088F668C;
    return;
L_088F668C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29956));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F66B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F66B4u) goto L_088F66B4;
    return;
L_088F66B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F66DC;
      }
      goto L_088F66D0;
    }
L_088F66D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F66DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F66DCu) goto L_088F66DC;
    return;
L_088F66DC:
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
L_088F66F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29960)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6738;
      }
      goto L_088F6710;
    }
L_088F6710:
    ctx.set_gpr(31, 0x088F6718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F6718u) goto L_088F6718;
    return;
L_088F6718:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F6724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F6724u) goto L_088F6724;
    return;
L_088F6724:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F6730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F6730u) goto L_088F6730;
    return;
L_088F6730:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29960), ctx.gpr[2]);
    goto L_088F6738;
L_088F6738:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29960)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29960)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F677C;
      }
      goto L_088F6768;
    }
L_088F6768:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6784;
      }
      goto L_088F677C;
    }
L_088F677C:
    ctx.set_gpr(31, 0x088F6784u);
    // nop
    goto L_088F67E0;
L_088F6784:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29960)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F679C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F67B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F67B0u) goto L_088F67B0;
    return;
L_088F67B0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8028));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F67C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F67C4u) goto L_088F67C4;
    return;
L_088F67C4:
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
L_088F67E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26632));
    ctx.set_gpr(31, 0x088F67F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F67F8u) goto L_088F67F8;
    return;
L_088F67F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6808:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F6818u) goto L_088F6818;
    return;
L_088F6818:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29960));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25996));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(26772));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(26740));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18340));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(26524));
    ctx.set_gpr(31, 0x088F6864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F6864u) goto L_088F6864;
    return;
L_088F6864:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6884u);
    // nop
    goto L_088F6750;
L_088F6884:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6894:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F68A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F68BCu);
    // nop
    goto L_088F69CC;
L_088F68BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29964)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F68D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F68D0u) goto L_088F68D0;
    return;
L_088F68D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F68E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29964)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6924;
      }
      goto L_088F68FC;
    }
L_088F68FC:
    ctx.set_gpr(31, 0x088F6904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F6904u) goto L_088F6904;
    return;
L_088F6904:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F6910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F6910u) goto L_088F6910;
    return;
L_088F6910:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F691Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F691Cu) goto L_088F691C;
    return;
L_088F691C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29964), ctx.gpr[2]);
    goto L_088F6924;
L_088F6924:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29964)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F693C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29964)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6968;
      }
      goto L_088F6954;
    }
L_088F6954:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6970;
      }
      goto L_088F6968;
    }
L_088F6968:
    ctx.set_gpr(31, 0x088F6970u);
    // nop
    goto L_088F69CC;
L_088F6970:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29964)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F699Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F699Cu) goto L_088F699C;
    return;
L_088F699C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7928));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F69B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F69B0u) goto L_088F69B0;
    return;
L_088F69B0:
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
L_088F69CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27124));
    ctx.set_gpr(31, 0x088F69E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F69E4u) goto L_088F69E4;
    return;
L_088F69E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F69F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F6A04u) goto L_088F6A04;
    return;
L_088F6A04:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29964));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(27240));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18320));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(27016));
    ctx.set_gpr(31, 0x088F6A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F6A58u) goto L_088F6A58;
    return;
L_088F6A58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6A68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6A78u);
    // nop
    goto L_088F693C;
L_088F6A78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6A88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29964)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F6AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F6AB8u) goto L_088F6AB8;
    return;
L_088F6AB8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F6ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F6ACCu) goto L_088F6ACC;
    return;
L_088F6ACC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F6AE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F6AE8u) goto L_088F6AE8;
    return;
L_088F6AE8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F6AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6AF4u) goto L_088F6AF4;
    return;
L_088F6AF4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29968));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F6B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F6B1Cu) goto L_088F6B1C;
    return;
L_088F6B1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6B44;
      }
      goto L_088F6B38;
    }
L_088F6B38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F6B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F6B44u) goto L_088F6B44;
    return;
L_088F6B44:
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
L_088F6B60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F6B78u);
    // nop
    goto L_088F6C88;
L_088F6B78:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29972)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F6B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F6B8Cu) goto L_088F6B8C;
    return;
L_088F6B8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6BA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29972)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6BE0;
      }
      goto L_088F6BB8;
    }
L_088F6BB8:
    ctx.set_gpr(31, 0x088F6BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F6BC0u) goto L_088F6BC0;
    return;
L_088F6BC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F6BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F6BCCu) goto L_088F6BCC;
    return;
L_088F6BCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F6BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F6BD8u) goto L_088F6BD8;
    return;
L_088F6BD8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29972), ctx.gpr[2]);
    goto L_088F6BE0;
L_088F6BE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29972)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6BF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29972)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6C24;
      }
      goto L_088F6C10;
    }
L_088F6C10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6C2C;
      }
      goto L_088F6C24;
    }
L_088F6C24:
    ctx.set_gpr(31, 0x088F6C2Cu);
    // nop
    goto L_088F6C88;
L_088F6C2C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29972)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6C44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F6C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F6C58u) goto L_088F6C58;
    return;
L_088F6C58:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7828));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F6C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F6C6Cu) goto L_088F6C6C;
    return;
L_088F6C6C:
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
L_088F6C88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(27824));
    ctx.set_gpr(31, 0x088F6CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F6CA0u) goto L_088F6CA0;
    return;
L_088F6CA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6CB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F6CC0u) goto L_088F6CC0;
    return;
L_088F6CC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29972));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(27124));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(27964));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(27932));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18308));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(27716));
    ctx.set_gpr(31, 0x088F6D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F6D0Cu) goto L_088F6D0C;
    return;
L_088F6D0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6D1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6D2Cu);
    // nop
    goto L_088F6BF8;
L_088F6D2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6D3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29964)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6D4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29976)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6D8C;
      }
      goto L_088F6D64;
    }
L_088F6D64:
    ctx.set_gpr(31, 0x088F6D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F6D6Cu) goto L_088F6D6C;
    return;
L_088F6D6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F6D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F6D78u) goto L_088F6D78;
    return;
L_088F6D78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F6D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F6D84u) goto L_088F6D84;
    return;
L_088F6D84:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29976), ctx.gpr[2]);
    goto L_088F6D8C;
L_088F6D8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29976)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6DA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29976)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6DD0;
      }
      goto L_088F6DBC;
    }
L_088F6DBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6DD8;
      }
      goto L_088F6DD0;
    }
L_088F6DD0:
    ctx.set_gpr(31, 0x088F6DD8u);
    // nop
    goto L_088F6E34;
L_088F6DD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29976)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6DF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F6E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F6E04u) goto L_088F6E04;
    return;
L_088F6E04:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7728));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F6E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F6E18u) goto L_088F6E18;
    return;
L_088F6E18:
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
L_088F6E34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28252));
    ctx.set_gpr(31, 0x088F6E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F6E4Cu) goto L_088F6E4C;
    return;
L_088F6E4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6E5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F6E6Cu) goto L_088F6E6C;
    return;
L_088F6E6C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28400));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29976));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(28368));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18288));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(28144));
    ctx.set_gpr(31, 0x088F6EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F6EC0u) goto L_088F6EC0;
    return;
L_088F6EC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6ED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F6EE0u);
    // nop
    goto L_088F6DA4;
L_088F6EE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6EF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29976)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F6F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F6F20u) goto L_088F6F20;
    return;
L_088F6F20:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F6F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F6F34u) goto L_088F6F34;
    return;
L_088F6F34:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F6F50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F6F50u) goto L_088F6F50;
    return;
L_088F6F50:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F6F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 587u, 0x088DF0A0u>(ctx, &aot_mem) && ctx.pc == 0x088F6F5Cu) goto L_088F6F5C;
    return;
L_088F6F5C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29980));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F6F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F6F84u) goto L_088F6F84;
    return;
L_088F6F84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6FAC;
      }
      goto L_088F6FA0;
    }
L_088F6FA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F6FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F6FACu) goto L_088F6FAC;
    return;
L_088F6FAC:
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
L_088F6FC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F6FE0u);
    // nop
    goto L_088F70F0;
L_088F6FE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29984)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F6FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F6FF4u) goto L_088F6FF4;
    return;
L_088F6FF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7008:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29984)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7048;
      }
      goto L_088F7020;
    }
L_088F7020:
    ctx.set_gpr(31, 0x088F7028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F7028u) goto L_088F7028;
    return;
L_088F7028:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F7034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F7034u) goto L_088F7034;
    return;
L_088F7034:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F7040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F7040u) goto L_088F7040;
    return;
L_088F7040:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29984), ctx.gpr[2]);
    goto L_088F7048;
L_088F7048:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29984)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7060:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29984)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F708C;
      }
      goto L_088F7078;
    }
L_088F7078:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7094;
      }
      goto L_088F708C;
    }
L_088F708C:
    ctx.set_gpr(31, 0x088F7094u);
    // nop
    goto L_088F70F0;
L_088F7094:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29984)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F70AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F70C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F70C0u) goto L_088F70C0;
    return;
L_088F70C0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7628));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F70D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F70D4u) goto L_088F70D4;
    return;
L_088F70D4:
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
L_088F70F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28952));
    ctx.set_gpr(31, 0x088F7108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F7108u) goto L_088F7108;
    return;
L_088F7108:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7118:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F7128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F7128u) goto L_088F7128;
    return;
L_088F7128:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29100));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29984));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(29068));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18268));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(28844));
    ctx.set_gpr(31, 0x088F717Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F717Cu) goto L_088F717C;
    return;
L_088F717C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F718C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F719Cu);
    // nop
    goto L_088F7060;
L_088F719C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F71AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29984)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F71DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F71DCu) goto L_088F71DC;
    return;
L_088F71DC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F71F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F71F0u) goto L_088F71F0;
    return;
L_088F71F0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F720Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F720Cu) goto L_088F720C;
    return;
L_088F720C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F7218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 482u, 0x088DA7E8u>(ctx, &aot_mem) && ctx.pc == 0x088F7218u) goto L_088F7218;
    return;
L_088F7218:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29988));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F7240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F7240u) goto L_088F7240;
    return;
L_088F7240:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7268;
      }
      goto L_088F725C;
    }
L_088F725C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F7268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F7268u) goto L_088F7268;
    return;
L_088F7268:
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
L_088F7284:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F729Cu);
    // nop
    goto L_088F73AC;
L_088F729C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29992)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F72B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F72B0u) goto L_088F72B0;
    return;
L_088F72B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F72C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29992)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7304;
      }
      goto L_088F72DC;
    }
L_088F72DC:
    ctx.set_gpr(31, 0x088F72E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F72E4u) goto L_088F72E4;
    return;
L_088F72E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F72F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F72F0u) goto L_088F72F0;
    return;
L_088F72F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F72FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F72FCu) goto L_088F72FC;
    return;
L_088F72FC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29992), ctx.gpr[2]);
    goto L_088F7304;
L_088F7304:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29992)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F731C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29992)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7348;
      }
      goto L_088F7334;
    }
L_088F7334:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7350;
      }
      goto L_088F7348;
    }
L_088F7348:
    ctx.set_gpr(31, 0x088F7350u);
    // nop
    goto L_088F73AC;
L_088F7350:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29992)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F737Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F737Cu) goto L_088F737C;
    return;
L_088F737C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7528));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F7390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F7390u) goto L_088F7390;
    return;
L_088F7390:
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
L_088F73AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29652));
    ctx.set_gpr(31, 0x088F73C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F73C4u) goto L_088F73C4;
    return;
L_088F73C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F73D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F73E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F73E4u) goto L_088F73E4;
    return;
L_088F73E4:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29800));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29992));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(29768));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18256));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(29544));
    ctx.set_gpr(31, 0x088F7438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F7438u) goto L_088F7438;
    return;
L_088F7438:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7448:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F7458u);
    // nop
    goto L_088F731C;
L_088F7458:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7468:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29992)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F7498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F7498u) goto L_088F7498;
    return;
L_088F7498:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F74ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F74ACu) goto L_088F74AC;
    return;
L_088F74AC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F74C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F74C8u) goto L_088F74C8;
    return;
L_088F74C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F74D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x088F74D4u) goto L_088F74D4;
    return;
L_088F74D4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29996));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F74FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F74FCu) goto L_088F74FC;
    return;
L_088F74FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7524;
      }
      goto L_088F7518;
    }
L_088F7518:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F7524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F7524u) goto L_088F7524;
    return;
L_088F7524:
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
L_088F7540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F7558u);
    // nop
    goto L_088F7668;
L_088F7558:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30000)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F756Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F756Cu) goto L_088F756C;
    return;
L_088F756C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7580:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30000)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F75C0;
      }
      goto L_088F7598;
    }
L_088F7598:
    ctx.set_gpr(31, 0x088F75A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F75A0u) goto L_088F75A0;
    return;
L_088F75A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F75ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F75ACu) goto L_088F75AC;
    return;
L_088F75AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F75B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F75B8u) goto L_088F75B8;
    return;
L_088F75B8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30000), ctx.gpr[2]);
    goto L_088F75C0;
L_088F75C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30000)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F75D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30000)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7604;
      }
      goto L_088F75F0;
    }
L_088F75F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F760C;
      }
      goto L_088F7604;
    }
L_088F7604:
    ctx.set_gpr(31, 0x088F760Cu);
    // nop
    goto L_088F7668;
L_088F760C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30000)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F7638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F7638u) goto L_088F7638;
    return;
L_088F7638:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7428));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F764Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F764Cu) goto L_088F764C;
    return;
L_088F764C:
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
L_088F7668:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30352));
    ctx.set_gpr(31, 0x088F7680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F7680u) goto L_088F7680;
    return;
L_088F7680:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7690:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F76A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F76A0u) goto L_088F76A0;
    return;
L_088F76A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30000));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29652));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(30492));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(30460));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18236));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(30244));
    ctx.set_gpr(31, 0x088F76ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F76ECu) goto L_088F76EC;
    return;
L_088F76EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F76FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F770Cu);
    // nop
    goto L_088F75D8;
L_088F770C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F771C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29992)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F772C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F7744u);
    // nop
    goto L_088F7854;
L_088F7744:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F7758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F7758u) goto L_088F7758;
    return;
L_088F7758:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F776C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F77AC;
      }
      goto L_088F7784;
    }
L_088F7784:
    ctx.set_gpr(31, 0x088F778Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F778Cu) goto L_088F778C;
    return;
L_088F778C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F7798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F7798u) goto L_088F7798;
    return;
L_088F7798:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F77A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F77A4u) goto L_088F77A4;
    return;
L_088F77A4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30004), ctx.gpr[2]);
    goto L_088F77AC;
L_088F77AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F77C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F77F0;
      }
      goto L_088F77DC;
    }
L_088F77DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F77F8;
      }
      goto L_088F77F0;
    }
L_088F77F0:
    ctx.set_gpr(31, 0x088F77F8u);
    // nop
    goto L_088F7854;
L_088F77F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7810:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F7824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F7824u) goto L_088F7824;
    return;
L_088F7824:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7328));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F7838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F7838u) goto L_088F7838;
    return;
L_088F7838:
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
L_088F7854:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30844));
    ctx.set_gpr(31, 0x088F786Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F786Cu) goto L_088F786C;
    return;
L_088F786C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F787C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F788Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F788Cu) goto L_088F788C;
    return;
L_088F788C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30992));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30004));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(30960));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18208));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(30736));
    ctx.set_gpr(31, 0x088F78E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F78E0u) goto L_088F78E0;
    return;
L_088F78E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F78F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F7900u);
    // nop
    goto L_088F77C4;
L_088F7900:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F7940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F7940u) goto L_088F7940;
    return;
L_088F7940:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F7954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F7954u) goto L_088F7954;
    return;
L_088F7954:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F7970u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F7970u) goto L_088F7970;
    return;
L_088F7970:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F797Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 674u, 0x088DF7A8u>(ctx, &aot_mem) && ctx.pc == 0x088F797Cu) goto L_088F797C;
    return;
L_088F797C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30008));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F79A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F79A4u) goto L_088F79A4;
    return;
L_088F79A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F79CC;
      }
      goto L_088F79C0;
    }
L_088F79C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F79CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F79CCu) goto L_088F79CC;
    return;
L_088F79CC:
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
L_088F79E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30012)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7A14;
      }
      goto L_088F7A00;
    }
L_088F7A00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7A1C;
      }
      goto L_088F7A14;
    }
L_088F7A14:
    ctx.set_gpr(31, 0x088F7A1Cu);
    // nop
    goto L_088F7A78;
L_088F7A1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30012)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7A34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F7A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088F7A48u) goto L_088F7A48;
    return;
L_088F7A48:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F7A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F7A5Cu) goto L_088F7A5C;
    return;
L_088F7A5C:
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
L_088F7A78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31392));
    ctx.set_gpr(31, 0x088F7A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F7A90u) goto L_088F7A90;
    return;
L_088F7A90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7AA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F7AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F7AB0u) goto L_088F7AB0;
    return;
L_088F7AB0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18188));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30012));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(31508));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18180));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(31284));
    ctx.set_gpr(31, 0x088F7B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F7B04u) goto L_088F7B04;
    return;
L_088F7B04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7B14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F7B24u);
    // nop
    goto L_088F79E8;
L_088F7B24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7B34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F7B4Cu);
    // nop
    goto L_088F7C04;
L_088F7B4C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F7B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F7B60u) goto L_088F7B60;
    return;
L_088F7B60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7B74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7BA0;
      }
      goto L_088F7B8C;
    }
L_088F7B8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7BA8;
      }
      goto L_088F7BA0;
    }
L_088F7BA0:
    ctx.set_gpr(31, 0x088F7BA8u);
    // nop
    goto L_088F7C04;
L_088F7BA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7BC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F7BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F7BD4u) goto L_088F7BD4;
    return;
L_088F7BD4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F7BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F7BE8u) goto L_088F7BE8;
    return;
L_088F7BE8:
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
L_088F7C04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31788));
    ctx.set_gpr(31, 0x088F7C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F7C1Cu) goto L_088F7C1C;
    return;
L_088F7C1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7C2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F7C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F7C3Cu) goto L_088F7C3C;
    return;
L_088F7C3C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31936));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30016));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(31904));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18156));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(31680));
    ctx.set_gpr(31, 0x088F7C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F7C90u) goto L_088F7C90;
    return;
L_088F7C90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7CA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F7CB0u);
    // nop
    goto L_088F7B74;
L_088F7CB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7CC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F7CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F7CF0u) goto L_088F7CF0;
    return;
L_088F7CF0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F7D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F7D04u) goto L_088F7D04;
    return;
L_088F7D04:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F7D20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F7D20u) goto L_088F7D20;
    return;
L_088F7D20:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F7D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x088F7D2Cu) goto L_088F7D2C;
    return;
L_088F7D2C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30020));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F7D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F7D54u) goto L_088F7D54;
    return;
L_088F7D54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7D7C;
      }
      goto L_088F7D70;
    }
L_088F7D70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F7D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F7D7Cu) goto L_088F7D7C;
    return;
L_088F7D7C:
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
L_088F7D98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F7DB0u);
    // nop
    goto L_088F7EC0;
L_088F7DB0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30024)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F7DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F7DC4u) goto L_088F7DC4;
    return;
L_088F7DC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7DD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30024)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7E18;
      }
      goto L_088F7DF0;
    }
L_088F7DF0:
    ctx.set_gpr(31, 0x088F7DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F7DF8u) goto L_088F7DF8;
    return;
L_088F7DF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F7E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F7E04u) goto L_088F7E04;
    return;
L_088F7E04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F7E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F7E10u) goto L_088F7E10;
    return;
L_088F7E10:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30024), ctx.gpr[2]);
    goto L_088F7E18;
L_088F7E18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30024)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7E30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30024)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7E5C;
      }
      goto L_088F7E48;
    }
L_088F7E48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7E64;
      }
      goto L_088F7E5C;
    }
L_088F7E5C:
    ctx.set_gpr(31, 0x088F7E64u);
    // nop
    goto L_088F7EC0;
L_088F7E64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30024)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7E7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F7E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088F7E90u) goto L_088F7E90;
    return;
L_088F7E90:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7020));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F7EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F7EA4u) goto L_088F7EA4;
    return;
L_088F7EA4:
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
L_088F7EC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32488));
    ctx.set_gpr(31, 0x088F7ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F7ED8u) goto L_088F7ED8;
    return;
L_088F7ED8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7EE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F7EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F7EF8u) goto L_088F7EF8;
    return;
L_088F7EF8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30024));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(32604));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-18136));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(32380));
    ctx.set_gpr(31, 0x088F7F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F7F4Cu) goto L_088F7F4C;
    return;
L_088F7F4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7F5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F7F6Cu);
    // nop
    goto L_088F7E30;
L_088F7F6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7F7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F7F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 9u, 0x088F80A4u>(ctx, &aot_mem) && ctx.pc == 0x088F7F94u) goto L_088F7F94;
    return;
L_088F7F94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F7FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F7FA8u) goto L_088F7FA8;
    return;
L_088F7FA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7FBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F7FFC;
      }
      goto L_088F7FD4;
    }
L_088F7FD4:
    ctx.set_gpr(31, 0x088F7FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F7FDCu) goto L_088F7FDC;
    return;
L_088F7FDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F7FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F7FE8u) goto L_088F7FE8;
    return;
L_088F7FE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F7FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F7FF4u) goto L_088F7FF4;
    return;
L_088F7FF4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30028), ctx.gpr[2]);
    goto L_088F7FFC;
L_088F7FFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.pc = 0x088F8000u; return;
}

void recomp_unit_0060(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0060_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_60(Runtime &runtime) {
    runtime.register_generated_unit(60u, 0x088F4000u, 16384u, &recomp_unit_0060, &recomp_unit_0060_entry);
    runtime.register_function(0x088F4000u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4008u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4010u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4028u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F403Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4050u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F406Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4084u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4094u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4100u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4110u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4120u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4130u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4160u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4174u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4190u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F419Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4208u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4220u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4234u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4248u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4260u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4274u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F427Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4294u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4300u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4308u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4320u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4338u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4348u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4358u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F441Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4438u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4448u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4454u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4470u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F447Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F450Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4524u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4538u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4540u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4558u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4570u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4590u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4614u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4624u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4634u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4690u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4704u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4714u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4730u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F473Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4758u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4764u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4780u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4798u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4808u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4820u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4834u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4848u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4860u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4868u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4874u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4880u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4888u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4904u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4938u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F495Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4964u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4970u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4978u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4984u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F498Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4998u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4ACCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4ADCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4AECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4AFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BE0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CBCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CDCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DC4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E80u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4EA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4EB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FE0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F501Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5034u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F504Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F505Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F506Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F50C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F50D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F50E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F50F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5118u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5134u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5144u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5158u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F516Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5184u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5208u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5224u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F523Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5260u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5268u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5280u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5298u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5308u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5310u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5328u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5340u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5358u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F537Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5398u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F543Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F544Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F545Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F546Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5488u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5490u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F549Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5500u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5508u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5510u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5534u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5548u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5560u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5568u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5580u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F558Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5604u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5614u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5620u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5628u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5634u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F563Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5654u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5668u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5678u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5690u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5694u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F569Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5708u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5710u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F571Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5728u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F573Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5748u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5758u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5764u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F576Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5778u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5780u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5798u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5804u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5818u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5828u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5844u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5850u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5868u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5880u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5888u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5894u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F590Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5920u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5934u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5950u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5968u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5978u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5988u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5ABCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BCCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C14u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C80u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DBCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5ED8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FDCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6018u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6034u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F604Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6060u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6074u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F608Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6094u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6100u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6118u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F612Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6140u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F615Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6174u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6184u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6194u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6208u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6218u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6248u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F625Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6278u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6284u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6308u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F631Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6330u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6348u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6350u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F635Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6368u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6370u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6388u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6418u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6430u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6440u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6450u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F64A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F64B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F64C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F64D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F64ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6500u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6508u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6520u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6534u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6548u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6564u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F657Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F658Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F659Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F65F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6600u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6610u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6620u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6650u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6664u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6680u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F668Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F66B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F66D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F66DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F66F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6710u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6718u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6724u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6730u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6738u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6750u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6768u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F677Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6784u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F679Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F67B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F67C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F67E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F67F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6808u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6818u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6864u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6874u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6884u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6894u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F68A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F68BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F68D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F68E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F68FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6904u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6910u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F691Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6924u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F693Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6954u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6968u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6970u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6988u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F699Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6AB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6ACCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6AE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6AF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BCCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BE0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DBCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6EC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6ED0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6EE0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6EF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F20u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FE0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7008u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7020u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7028u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7034u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7040u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7048u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7060u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7078u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F708Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7094u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7108u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7118u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7128u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F717Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F718Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F719Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F720Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7218u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7240u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F725Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7268u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7284u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F729Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7304u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F731Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7334u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7348u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7350u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7368u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F737Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7390u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7438u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7448u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7458u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7468u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7498u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7518u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7524u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7540u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7558u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F756Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7580u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7598u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7604u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F760Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7624u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7638u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F764Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7668u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7680u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7690u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F770Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F771Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F772Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7744u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7758u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F776Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7784u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F778Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7798u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7810u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7824u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7838u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7854u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F786Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F787Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F788Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F78E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F78F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7900u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7910u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7940u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7954u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7970u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F797Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F79A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F79C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F79CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F79E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A14u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7AA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7AB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B14u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D20u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7DB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7DC4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7DD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7DF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7DF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7EA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7EC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7ED8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7EE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7EF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7F4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7F5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7F6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7F7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7F94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FBCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FDCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FFCu, &recomp_unit_0060, "recomp_unit_0060");
}
} // namespace psprecomp
