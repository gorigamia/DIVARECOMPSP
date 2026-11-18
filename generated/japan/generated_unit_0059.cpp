#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0059[4094] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 39, 0, 40, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 54, 0,
    55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0,
    0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109,
    0, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135,
    136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0,
    0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151,
    0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179,
    0, 0, 180, 0, 0, 0, 181, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 195, 0, 196, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    248, 0, 249, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0,
    273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278,
    0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299,
    0, 300, 0, 0, 301, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0,
    0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0,
    0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0,
    382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387,
    0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415,
    0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0,
    0, 422, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0,
    0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0,
    0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 471,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 481, 0, 0, 482, 0, 483, 0, 0, 484,
    0, 485, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 0, 494, 0, 495, 0, 0, 496, 0, 497,
    0, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0,
    0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0,
    0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0,
    0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0,
    0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0,
    0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0,
    0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0,
    0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0,
    0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0,
    0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0,
    0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0,
    0, 0, 571, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0,
    577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587,
    0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 594, 0,
    0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0,
    0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0,
    0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0,
    0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0,
    0, 620, 0, 621, 0, 0, 622, 0, 623, 0, 0, 624, 0, 625, 0, 0, 626, 0, 627, 0, 0, 628, 0, 629, 0, 0, 630, 0, 631, 0, 0, 0,
    0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0,
    0, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647,
    0, 0, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0,
    0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0,
    659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0,
    0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0,
    0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 679,
    0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0,
    685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689,
    0, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0,
    696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0,
    0, 702, 0, 703, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 722, 0, 0, 723, 0,
    724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0,
    0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0,
    0, 750, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 753, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757,
};
void recomp_unit_0059_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088F0000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0059[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088F0000;
    case 2u: goto L_088F0010;
    case 3u: goto L_088F0018;
    case 4u: goto L_088F0030;
    case 5u: goto L_088F0044;
    case 6u: goto L_088F0058;
    case 7u: goto L_088F0074;
    case 8u: goto L_088F008C;
    case 9u: goto L_088F009C;
    case 10u: goto L_088F00AC;
    case 11u: goto L_088F0100;
    case 12u: goto L_088F0110;
    case 13u: goto L_088F0120;
    case 14u: goto L_088F0130;
    case 15u: goto L_088F0148;
    case 16u: goto L_088F015C;
    case 17u: goto L_088F0170;
    case 18u: goto L_088F0188;
    case 19u: goto L_088F019C;
    case 20u: goto L_088F01A4;
    case 21u: goto L_088F01BC;
    case 22u: goto L_088F01D4;
    case 23u: goto L_088F01E4;
    case 24u: goto L_088F01F4;
    case 25u: goto L_088F0244;
    case 26u: goto L_088F0254;
    case 27u: goto L_088F0264;
    case 28u: goto L_088F0288;
    case 29u: goto L_088F02A4;
    case 30u: goto L_088F02B4;
    case 31u: goto L_088F02C4;
    case 32u: goto L_088F02EC;
    case 33u: goto L_088F0318;
    case 34u: goto L_088F0328;
    case 35u: goto L_088F0338;
    case 36u: goto L_088F0350;
    case 37u: goto L_088F0358;
    case 38u: goto L_088F0364;
    case 39u: goto L_088F0370;
    case 40u: goto L_088F0378;
    case 41u: goto L_088F0390;
    case 42u: goto L_088F03A8;
    case 43u: goto L_088F03BC;
    case 44u: goto L_088F03C4;
    case 45u: goto L_088F03DC;
    case 46u: goto L_088F03F4;
    case 47u: goto L_088F0418;
    case 48u: goto L_088F043C;
    case 49u: goto L_088F0444;
    case 50u: goto L_088F0450;
    case 51u: goto L_088F0458;
    case 52u: goto L_088F0464;
    case 53u: goto L_088F046C;
    case 54u: goto L_088F0478;
    case 55u: goto L_088F0480;
    case 56u: goto L_088F0498;
    case 57u: goto L_088F04B0;
    case 58u: goto L_088F04C0;
    case 59u: goto L_088F04D0;
    case 60u: goto L_088F052C;
    case 61u: goto L_088F053C;
    case 62u: goto L_088F054C;
    case 63u: goto L_088F055C;
    case 64u: goto L_088F0584;
    case 65u: goto L_088F05A0;
    case 66u: goto L_088F05B0;
    case 67u: goto L_088F05BC;
    case 68u: goto L_088F05D8;
    case 69u: goto L_088F05E4;
    case 70u: goto L_088F0600;
    case 71u: goto L_088F060C;
    case 72u: goto L_088F0628;
    case 73u: goto L_088F0634;
    case 74u: goto L_088F0668;
    case 75u: goto L_088F0684;
    case 76u: goto L_088F069C;
    case 77u: goto L_088F06A4;
    case 78u: goto L_088F06B0;
    case 79u: goto L_088F06BC;
    case 80u: goto L_088F06C4;
    case 81u: goto L_088F06DC;
    case 82u: goto L_088F06F4;
    case 83u: goto L_088F0708;
    case 84u: goto L_088F0710;
    case 85u: goto L_088F0728;
    case 86u: goto L_088F0740;
    case 87u: goto L_088F0750;
    case 88u: goto L_088F0760;
    case 89u: goto L_088F07A8;
    case 90u: goto L_088F07B8;
    case 91u: goto L_088F07C8;
    case 92u: goto L_088F07D8;
    case 93u: goto L_088F07F0;
    case 94u: goto L_088F0804;
    case 95u: goto L_088F080C;
    case 96u: goto L_088F0824;
    case 97u: goto L_088F083C;
    case 98u: goto L_088F084C;
    case 99u: goto L_088F085C;
    case 100u: goto L_088F08AC;
    case 101u: goto L_088F08BC;
    case 102u: goto L_088F08CC;
    case 103u: goto L_088F08DC;
    case 104u: goto L_088F0900;
    case 105u: goto L_088F091C;
    case 106u: goto L_088F0944;
    case 107u: goto L_088F095C;
    case 108u: goto L_088F0974;
    case 109u: goto L_088F097C;
    case 110u: goto L_088F0988;
    case 111u: goto L_088F0994;
    case 112u: goto L_088F099C;
    case 113u: goto L_088F09B4;
    case 114u: goto L_088F09CC;
    case 115u: goto L_088F09E0;
    case 116u: goto L_088F09E8;
    case 117u: goto L_088F0A00;
    case 118u: goto L_088F0A14;
    case 119u: goto L_088F0A28;
    case 120u: goto L_088F0A44;
    case 121u: goto L_088F0A5C;
    case 122u: goto L_088F0A6C;
    case 123u: goto L_088F0A7C;
    case 124u: goto L_088F0AD0;
    case 125u: goto L_088F0AE0;
    case 126u: goto L_088F0AF0;
    case 127u: goto L_088F0B00;
    case 128u: goto L_088F0B18;
    case 129u: goto L_088F0B24;
    case 130u: goto L_088F0B2C;
    case 131u: goto L_088F0B40;
    case 132u: goto L_088F0B4C;
    case 133u: goto L_088F0B60;
    case 134u: goto L_088F0B6C;
    case 135u: goto L_088F0B7C;
    case 136u: goto L_088F0B80;
    case 137u: goto L_088F0B94;
    case 138u: goto L_088F0BAC;
    case 139u: goto L_088F0BC4;
    case 140u: goto L_088F0BE4;
    case 141u: goto L_088F0BF0;
    case 142u: goto L_088F0BF8;
    case 143u: goto L_088F0C08;
    case 144u: goto L_088F0C10;
    case 145u: goto L_088F0C20;
    case 146u: goto L_088F0C28;
    case 147u: goto L_088F0C38;
    case 148u: goto L_088F0C50;
    case 149u: goto L_088F0C68;
    case 150u: goto L_088F0C70;
    case 151u: goto L_088F0C7C;
    case 152u: goto L_088F0C88;
    case 153u: goto L_088F0C90;
    case 154u: goto L_088F0CA8;
    case 155u: goto L_088F0CC0;
    case 156u: goto L_088F0CD4;
    case 157u: goto L_088F0CDC;
    case 158u: goto L_088F0CF4;
    case 159u: goto L_088F0D08;
    case 160u: goto L_088F0D10;
    case 161u: goto L_088F0D2C;
    case 162u: goto L_088F0D44;
    case 163u: goto L_088F0D54;
    case 164u: goto L_088F0DB0;
    case 165u: goto L_088F0DC0;
    case 166u: goto L_088F0DD0;
    case 167u: goto L_088F0DE0;
    case 168u: goto L_088F0E08;
    case 169u: goto L_088F0E24;
    case 170u: goto L_088F0E34;
    case 171u: goto L_088F0E40;
    case 172u: goto L_088F0E80;
    case 173u: goto L_088F0E9C;
    case 174u: goto L_088F0EB4;
    case 175u: goto L_088F0EC0;
    case 176u: goto L_088F0EC8;
    case 177u: goto L_088F0EDC;
    case 178u: goto L_088F0EE8;
    case 179u: goto L_088F0EFC;
    case 180u: goto L_088F0F08;
    case 181u: goto L_088F0F18;
    case 182u: goto L_088F0F1C;
    case 183u: goto L_088F0F30;
    case 184u: goto L_088F0F48;
    case 185u: goto L_088F0F60;
    case 186u: goto L_088F0F80;
    case 187u: goto L_088F0F8C;
    case 188u: goto L_088F0F94;
    case 189u: goto L_088F0FA4;
    case 190u: goto L_088F0FAC;
    case 191u: goto L_088F0FBC;
    case 192u: goto L_088F0FC4;
    case 193u: goto L_088F0FD4;
    case 194u: goto L_088F0FEC;
    case 195u: goto L_088F1004;
    case 196u: goto L_088F100C;
    case 197u: goto L_088F1018;
    case 198u: goto L_088F1024;
    case 199u: goto L_088F102C;
    case 200u: goto L_088F1044;
    case 201u: goto L_088F105C;
    case 202u: goto L_088F1070;
    case 203u: goto L_088F1078;
    case 204u: goto L_088F1090;
    case 205u: goto L_088F10A4;
    case 206u: goto L_088F10AC;
    case 207u: goto L_088F10C8;
    case 208u: goto L_088F10E0;
    case 209u: goto L_088F10F0;
    case 210u: goto L_088F114C;
    case 211u: goto L_088F115C;
    case 212u: goto L_088F116C;
    case 213u: goto L_088F117C;
    case 214u: goto L_088F118C;
    case 215u: goto L_088F11BC;
    case 216u: goto L_088F11D0;
    case 217u: goto L_088F11EC;
    case 218u: goto L_088F1218;
    case 219u: goto L_088F1234;
    case 220u: goto L_088F1240;
    case 221u: goto L_088F125C;
    case 222u: goto L_088F1274;
    case 223u: goto L_088F1288;
    case 224u: goto L_088F1290;
    case 225u: goto L_088F12A8;
    case 226u: goto L_088F12C0;
    case 227u: goto L_088F12D8;
    case 228u: goto L_088F12FC;
    case 229u: goto L_088F1314;
    case 230u: goto L_088F132C;
    case 231u: goto L_088F133C;
    case 232u: goto L_088F134C;
    case 233u: goto L_088F13A8;
    case 234u: goto L_088F13B8;
    case 235u: goto L_088F13C8;
    case 236u: goto L_088F13D8;
    case 237u: goto L_088F1400;
    case 238u: goto L_088F141C;
    case 239u: goto L_088F142C;
    case 240u: goto L_088F1438;
    case 241u: goto L_088F1454;
    case 242u: goto L_088F1464;
    case 243u: goto L_088F148C;
    case 244u: goto L_088F14A8;
    case 245u: goto L_088F14C0;
    case 246u: goto L_088F14D4;
    case 247u: goto L_088F14E8;
    case 248u: goto L_088F1500;
    case 249u: goto L_088F1508;
    case 250u: goto L_088F1514;
    case 251u: goto L_088F1520;
    case 252u: goto L_088F1528;
    case 253u: goto L_088F1540;
    case 254u: goto L_088F1558;
    case 255u: goto L_088F156C;
    case 256u: goto L_088F1574;
    case 257u: goto L_088F158C;
    case 258u: goto L_088F15A0;
    case 259u: goto L_088F15B4;
    case 260u: goto L_088F15D0;
    case 261u: goto L_088F15E8;
    case 262u: goto L_088F15F8;
    case 263u: goto L_088F1608;
    case 264u: goto L_088F165C;
    case 265u: goto L_088F166C;
    case 266u: goto L_088F167C;
    case 267u: goto L_088F168C;
    case 268u: goto L_088F16A4;
    case 269u: goto L_088F16B8;
    case 270u: goto L_088F16CC;
    case 271u: goto L_088F16E4;
    case 272u: goto L_088F16F8;
    case 273u: goto L_088F1700;
    case 274u: goto L_088F1718;
    case 275u: goto L_088F1730;
    case 276u: goto L_088F1748;
    case 277u: goto L_088F1770;
    case 278u: goto L_088F177C;
    case 279u: goto L_088F1784;
    case 280u: goto L_088F178C;
    case 281u: goto L_088F179C;
    case 282u: goto L_088F17B4;
    case 283u: goto L_088F17CC;
    case 284u: goto L_088F17DC;
    case 285u: goto L_088F17EC;
    case 286u: goto L_088F1840;
    case 287u: goto L_088F1850;
    case 288u: goto L_088F1860;
    case 289u: goto L_088F1870;
    case 290u: goto L_088F1894;
    case 291u: goto L_088F18B0;
    case 292u: goto L_088F18D8;
    case 293u: goto L_088F1904;
    case 294u: goto L_088F1914;
    case 295u: goto L_088F1924;
    case 296u: goto L_088F193C;
    case 297u: goto L_088F1950;
    case 298u: goto L_088F1964;
    case 299u: goto L_088F197C;
    case 300u: goto L_088F1984;
    case 301u: goto L_088F1990;
    case 302u: goto L_088F199C;
    case 303u: goto L_088F19A4;
    case 304u: goto L_088F19BC;
    case 305u: goto L_088F19D4;
    case 306u: goto L_088F19E8;
    case 307u: goto L_088F19F0;
    case 308u: goto L_088F1A08;
    case 309u: goto L_088F1A20;
    case 310u: goto L_088F1A30;
    case 311u: goto L_088F1A40;
    case 312u: goto L_088F1A90;
    case 313u: goto L_088F1AA0;
    case 314u: goto L_088F1AC8;
    case 315u: goto L_088F1AE4;
    case 316u: goto L_088F1AF4;
    case 317u: goto L_088F1B08;
    case 318u: goto L_088F1B18;
    case 319u: goto L_088F1B30;
    case 320u: goto L_088F1B4C;
    case 321u: goto L_088F1B64;
    case 322u: goto L_088F1B80;
    case 323u: goto L_088F1B94;
    case 324u: goto L_088F1BA4;
    case 325u: goto L_088F1BB4;
    case 326u: goto L_088F1BC4;
    case 327u: goto L_088F1BD4;
    case 328u: goto L_088F1BE4;
    case 329u: goto L_088F1BF4;
    case 330u: goto L_088F1C20;
    case 331u: goto L_088F1C50;
    case 332u: goto L_088F1C60;
    case 333u: goto L_088F1C70;
    case 334u: goto L_088F1C88;
    case 335u: goto L_088F1CAC;
    case 336u: goto L_088F1CB4;
    case 337u: goto L_088F1CCC;
    case 338u: goto L_088F1CE4;
    case 339u: goto L_088F1D08;
    case 340u: goto L_088F1D10;
    case 341u: goto L_088F1D28;
    case 342u: goto L_088F1D40;
    case 343u: goto L_088F1D54;
    case 344u: goto L_088F1D68;
    case 345u: goto L_088F1D80;
    case 346u: goto L_088F1D94;
    case 347u: goto L_088F1D9C;
    case 348u: goto L_088F1DB4;
    case 349u: goto L_088F1DCC;
    case 350u: goto L_088F1DEC;
    case 351u: goto L_088F1E14;
    case 352u: goto L_088F1E20;
    case 353u: goto L_088F1E28;
    case 354u: goto L_088F1E30;
    case 355u: goto L_088F1E40;
    case 356u: goto L_088F1E50;
    case 357u: goto L_088F1E5C;
    case 358u: goto L_088F1E64;
    case 359u: goto L_088F1E6C;
    case 360u: goto L_088F1E7C;
    case 361u: goto L_088F1E98;
    case 362u: goto L_088F1EB0;
    case 363u: goto L_088F1EC8;
    case 364u: goto L_088F1ED8;
    case 365u: goto L_088F1EE8;
    case 366u: goto L_088F1F3C;
    case 367u: goto L_088F1F4C;
    case 368u: goto L_088F1F5C;
    case 369u: goto L_088F1F6C;
    case 370u: goto L_088F1F90;
    case 371u: goto L_088F1FAC;
    case 372u: goto L_088F1FBC;
    case 373u: goto L_088F1FCC;
    case 374u: goto L_088F1FDC;
    case 375u: goto L_088F1FEC;
    case 376u: goto L_088F1FFC;
    case 377u: goto L_088F200C;
    case 378u: goto L_088F2034;
    case 379u: goto L_088F204C;
    case 380u: goto L_088F2064;
    case 381u: goto L_088F2078;
    case 382u: goto L_088F2080;
    case 383u: goto L_088F2098;
    case 384u: goto L_088F20B0;
    case 385u: goto L_088F20D0;
    case 386u: goto L_088F20F4;
    case 387u: goto L_088F20FC;
    case 388u: goto L_088F2108;
    case 389u: goto L_088F2110;
    case 390u: goto L_088F212C;
    case 391u: goto L_088F2144;
    case 392u: goto L_088F215C;
    case 393u: goto L_088F216C;
    case 394u: goto L_088F217C;
    case 395u: goto L_088F21D8;
    case 396u: goto L_088F21E8;
    case 397u: goto L_088F21F8;
    case 398u: goto L_088F2208;
    case 399u: goto L_088F2230;
    case 400u: goto L_088F224C;
    case 401u: goto L_088F225C;
    case 402u: goto L_088F2268;
    case 403u: goto L_088F2280;
    case 404u: goto L_088F2290;
    case 405u: goto L_088F22A0;
    case 406u: goto L_088F22AC;
    case 407u: goto L_088F22C4;
    case 408u: goto L_088F22D4;
    case 409u: goto L_088F22FC;
    case 410u: goto L_088F2318;
    case 411u: goto L_088F2330;
    case 412u: goto L_088F2344;
    case 413u: goto L_088F234C;
    case 414u: goto L_088F2364;
    case 415u: goto L_088F237C;
    case 416u: goto L_088F23A0;
    case 417u: goto L_088F23C8;
    case 418u: goto L_088F23D4;
    case 419u: goto L_088F23DC;
    case 420u: goto L_088F23E4;
    case 421u: goto L_088F23F4;
    case 422u: goto L_088F2404;
    case 423u: goto L_088F2410;
    case 424u: goto L_088F2418;
    case 425u: goto L_088F2420;
    case 426u: goto L_088F2430;
    case 427u: goto L_088F2440;
    case 428u: goto L_088F244C;
    case 429u: goto L_088F2454;
    case 430u: goto L_088F245C;
    case 431u: goto L_088F246C;
    case 432u: goto L_088F2488;
    case 433u: goto L_088F24A0;
    case 434u: goto L_088F24B8;
    case 435u: goto L_088F24C8;
    case 436u: goto L_088F24D8;
    case 437u: goto L_088F2534;
    case 438u: goto L_088F2544;
    case 439u: goto L_088F2554;
    case 440u: goto L_088F2564;
    case 441u: goto L_088F2590;
    case 442u: goto L_088F25AC;
    case 443u: goto L_088F25C4;
    case 444u: goto L_088F25D4;
    case 445u: goto L_088F25E0;
    case 446u: goto L_088F25EC;
    case 447u: goto L_088F25F8;
    case 448u: goto L_088F2620;
    case 449u: goto L_088F2650;
    case 450u: goto L_088F266C;
    case 451u: goto L_088F2678;
    case 452u: goto L_088F2688;
    case 453u: goto L_088F269C;
    case 454u: goto L_088F26AC;
    case 455u: goto L_088F26C0;
    case 456u: goto L_088F26D0;
    case 457u: goto L_088F26E4;
    case 458u: goto L_088F2710;
    case 459u: goto L_088F2730;
    case 460u: goto L_088F2748;
    case 461u: goto L_088F275C;
    case 462u: goto L_088F2770;
    case 463u: goto L_088F2788;
    case 464u: goto L_088F2790;
    case 465u: goto L_088F279C;
    case 466u: goto L_088F27A8;
    case 467u: goto L_088F27B0;
    case 468u: goto L_088F27C8;
    case 469u: goto L_088F27E0;
    case 470u: goto L_088F27F4;
    case 471u: goto L_088F27FC;
    case 472u: goto L_088F2814;
    case 473u: goto L_088F282C;
    case 474u: goto L_088F2874;
    case 475u: goto L_088F289C;
    case 476u: goto L_088F28A8;
    case 477u: goto L_088F28B0;
    case 478u: goto L_088F28B8;
    case 479u: goto L_088F28C8;
    case 480u: goto L_088F28D4;
    case 481u: goto L_088F28DC;
    case 482u: goto L_088F28E8;
    case 483u: goto L_088F28F0;
    case 484u: goto L_088F28FC;
    case 485u: goto L_088F2904;
    case 486u: goto L_088F2910;
    case 487u: goto L_088F2918;
    case 488u: goto L_088F2924;
    case 489u: goto L_088F292C;
    case 490u: goto L_088F2938;
    case 491u: goto L_088F2940;
    case 492u: goto L_088F294C;
    case 493u: goto L_088F2954;
    case 494u: goto L_088F2960;
    case 495u: goto L_088F2968;
    case 496u: goto L_088F2974;
    case 497u: goto L_088F297C;
    case 498u: goto L_088F2988;
    case 499u: goto L_088F2990;
    case 500u: goto L_088F299C;
    case 501u: goto L_088F29A4;
    case 502u: goto L_088F29B0;
    case 503u: goto L_088F29B8;
    case 504u: goto L_088F29D0;
    case 505u: goto L_088F29E8;
    case 506u: goto L_088F29F8;
    case 507u: goto L_088F2A08;
    case 508u: goto L_088F2A64;
    case 509u: goto L_088F2A74;
    case 510u: goto L_088F2A84;
    case 511u: goto L_088F2A94;
    case 512u: goto L_088F2ABC;
    case 513u: goto L_088F2AD8;
    case 514u: goto L_088F2AE8;
    case 515u: goto L_088F2AF8;
    case 516u: goto L_088F2B08;
    case 517u: goto L_088F2B18;
    case 518u: goto L_088F2B28;
    case 519u: goto L_088F2B38;
    case 520u: goto L_088F2B48;
    case 521u: goto L_088F2B58;
    case 522u: goto L_088F2B68;
    case 523u: goto L_088F2B78;
    case 524u: goto L_088F2B88;
    case 525u: goto L_088F2B9C;
    case 526u: goto L_088F2BA8;
    case 527u: goto L_088F2BC4;
    case 528u: goto L_088F2BD0;
    case 529u: goto L_088F2BEC;
    case 530u: goto L_088F2BF8;
    case 531u: goto L_088F2C14;
    case 532u: goto L_088F2C20;
    case 533u: goto L_088F2C3C;
    case 534u: goto L_088F2C48;
    case 535u: goto L_088F2C64;
    case 536u: goto L_088F2C70;
    case 537u: goto L_088F2C8C;
    case 538u: goto L_088F2C98;
    case 539u: goto L_088F2CB4;
    case 540u: goto L_088F2CC0;
    case 541u: goto L_088F2CDC;
    case 542u: goto L_088F2CE8;
    case 543u: goto L_088F2D04;
    case 544u: goto L_088F2D10;
    case 545u: goto L_088F2D2C;
    case 546u: goto L_088F2D38;
    case 547u: goto L_088F2D58;
    case 548u: goto L_088F2D70;
    case 549u: goto L_088F2D84;
    case 550u: goto L_088F2D98;
    case 551u: goto L_088F2DB0;
    case 552u: goto L_088F2DC8;
    case 553u: goto L_088F2DE0;
    case 554u: goto L_088F2DF8;
    case 555u: goto L_088F2E14;
    case 556u: goto L_088F2E30;
    case 557u: goto L_088F2E44;
    case 558u: goto L_088F2E58;
    case 559u: goto L_088F2E74;
    case 560u: goto L_088F2E88;
    case 561u: goto L_088F2E9C;
    case 562u: goto L_088F2EA8;
    case 563u: goto L_088F2EC0;
    case 564u: goto L_088F2ED4;
    case 565u: goto L_088F2EE8;
    case 566u: goto L_088F2F14;
    case 567u: goto L_088F2F30;
    case 568u: goto L_088F2F48;
    case 569u: goto L_088F2F5C;
    case 570u: goto L_088F2F70;
    case 571u: goto L_088F2F88;
    case 572u: goto L_088F2F9C;
    case 573u: goto L_088F2FA4;
    case 574u: goto L_088F2FBC;
    case 575u: goto L_088F2FD0;
    case 576u: goto L_088F2FE4;
    case 577u: goto L_088F3000;
    case 578u: goto L_088F3018;
    case 579u: goto L_088F3028;
    case 580u: goto L_088F3038;
    case 581u: goto L_088F3094;
    case 582u: goto L_088F30A4;
    case 583u: goto L_088F30B4;
    case 584u: goto L_088F30C4;
    case 585u: goto L_088F30DC;
    case 586u: goto L_088F30EC;
    case 587u: goto L_088F30FC;
    case 588u: goto L_088F310C;
    case 589u: goto L_088F311C;
    case 590u: goto L_088F312C;
    case 591u: goto L_088F3144;
    case 592u: goto L_088F3158;
    case 593u: goto L_088F3160;
    case 594u: goto L_088F3178;
    case 595u: goto L_088F318C;
    case 596u: goto L_088F31A0;
    case 597u: goto L_088F31BC;
    case 598u: goto L_088F31D4;
    case 599u: goto L_088F31E4;
    case 600u: goto L_088F31F4;
    case 601u: goto L_088F3248;
    case 602u: goto L_088F3258;
    case 603u: goto L_088F3268;
    case 604u: goto L_088F3278;
    case 605u: goto L_088F329C;
    case 606u: goto L_088F32B8;
    case 607u: goto L_088F32E0;
    case 608u: goto L_088F32F8;
    case 609u: goto L_088F3310;
    case 610u: goto L_088F3324;
    case 611u: goto L_088F3338;
    case 612u: goto L_088F3350;
    case 613u: goto L_088F3364;
    case 614u: goto L_088F336C;
    case 615u: goto L_088F3384;
    case 616u: goto L_088F339C;
    case 617u: goto L_088F33CC;
    case 618u: goto L_088F33F0;
    case 619u: goto L_088F33F8;
    case 620u: goto L_088F3404;
    case 621u: goto L_088F340C;
    case 622u: goto L_088F3418;
    case 623u: goto L_088F3420;
    case 624u: goto L_088F342C;
    case 625u: goto L_088F3434;
    case 626u: goto L_088F3440;
    case 627u: goto L_088F3448;
    case 628u: goto L_088F3454;
    case 629u: goto L_088F345C;
    case 630u: goto L_088F3468;
    case 631u: goto L_088F3470;
    case 632u: goto L_088F3488;
    case 633u: goto L_088F34A0;
    case 634u: goto L_088F34B0;
    case 635u: goto L_088F34C0;
    case 636u: goto L_088F351C;
    case 637u: goto L_088F352C;
    case 638u: goto L_088F353C;
    case 639u: goto L_088F354C;
    case 640u: goto L_088F3574;
    case 641u: goto L_088F3590;
    case 642u: goto L_088F35A0;
    case 643u: goto L_088F35AC;
    case 644u: goto L_088F35C8;
    case 645u: goto L_088F35D4;
    case 646u: goto L_088F35F0;
    case 647u: goto L_088F35FC;
    case 648u: goto L_088F3618;
    case 649u: goto L_088F3624;
    case 650u: goto L_088F3638;
    case 651u: goto L_088F3648;
    case 652u: goto L_088F3658;
    case 653u: goto L_088F3670;
    case 654u: goto L_088F368C;
    case 655u: goto L_088F3698;
    case 656u: goto L_088F36BC;
    case 657u: goto L_088F36C8;
    case 658u: goto L_088F36F4;
    case 659u: goto L_088F3700;
    case 660u: goto L_088F372C;
    case 661u: goto L_088F374C;
    case 662u: goto L_088F3760;
    case 663u: goto L_088F3798;
    case 664u: goto L_088F37B4;
    case 665u: goto L_088F37CC;
    case 666u: goto L_088F37F0;
    case 667u: goto L_088F37F8;
    case 668u: goto L_088F3810;
    case 669u: goto L_088F3828;
    case 670u: goto L_088F384C;
    case 671u: goto L_088F3854;
    case 672u: goto L_088F386C;
    case 673u: goto L_088F3884;
    case 674u: goto L_088F38A8;
    case 675u: goto L_088F38B0;
    case 676u: goto L_088F38C8;
    case 677u: goto L_088F38E0;
    case 678u: goto L_088F38F4;
    case 679u: goto L_088F38FC;
    case 680u: goto L_088F3914;
    case 681u: goto L_088F3928;
    case 682u: goto L_088F393C;
    case 683u: goto L_088F3958;
    case 684u: goto L_088F3970;
    case 685u: goto L_088F3980;
    case 686u: goto L_088F3990;
    case 687u: goto L_088F39DC;
    case 688u: goto L_088F39EC;
    case 689u: goto L_088F39FC;
    case 690u: goto L_088F3A0C;
    case 691u: goto L_088F3A24;
    case 692u: goto L_088F3A38;
    case 693u: goto L_088F3A4C;
    case 694u: goto L_088F3A64;
    case 695u: goto L_088F3A78;
    case 696u: goto L_088F3A80;
    case 697u: goto L_088F3A98;
    case 698u: goto L_088F3AB0;
    case 699u: goto L_088F3ACC;
    case 700u: goto L_088F3AF0;
    case 701u: goto L_088F3AF8;
    case 702u: goto L_088F3B04;
    case 703u: goto L_088F3B0C;
    case 704u: goto L_088F3B24;
    case 705u: goto L_088F3B3C;
    case 706u: goto L_088F3B4C;
    case 707u: goto L_088F3B5C;
    case 708u: goto L_088F3BB8;
    case 709u: goto L_088F3BC8;
    case 710u: goto L_088F3BD8;
    case 711u: goto L_088F3BE8;
    case 712u: goto L_088F3C10;
    case 713u: goto L_088F3C2C;
    case 714u: goto L_088F3C3C;
    case 715u: goto L_088F3C48;
    case 716u: goto L_088F3C64;
    case 717u: goto L_088F3C70;
    case 718u: goto L_088F3CA4;
    case 719u: goto L_088F3CC0;
    case 720u: goto L_088F3CD8;
    case 721u: goto L_088F3CE0;
    case 722u: goto L_088F3CEC;
    case 723u: goto L_088F3CF8;
    case 724u: goto L_088F3D00;
    case 725u: goto L_088F3D18;
    case 726u: goto L_088F3D30;
    case 727u: goto L_088F3D44;
    case 728u: goto L_088F3D4C;
    case 729u: goto L_088F3D64;
    case 730u: goto L_088F3D78;
    case 731u: goto L_088F3D8C;
    case 732u: goto L_088F3DA8;
    case 733u: goto L_088F3DC0;
    case 734u: goto L_088F3DD0;
    case 735u: goto L_088F3DE0;
    case 736u: goto L_088F3E3C;
    case 737u: goto L_088F3E4C;
    case 738u: goto L_088F3E5C;
    case 739u: goto L_088F3E6C;
    case 740u: goto L_088F3E9C;
    case 741u: goto L_088F3EB0;
    case 742u: goto L_088F3ECC;
    case 743u: goto L_088F3ED8;
    case 744u: goto L_088F3F00;
    case 745u: goto L_088F3F1C;
    case 746u: goto L_088F3F28;
    case 747u: goto L_088F3F44;
    case 748u: goto L_088F3F5C;
    case 749u: goto L_088F3F70;
    case 750u: goto L_088F3F84;
    case 751u: goto L_088F3F9C;
    case 752u: goto L_088F3FA4;
    case 753u: goto L_088F3FB0;
    case 754u: goto L_088F3FBC;
    case 755u: goto L_088F3FC4;
    case 756u: goto L_088F3FDC;
    case 757u: goto L_088F3FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088F0000:
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0018;
      }
      goto L_088F0010;
    }
L_088F0010:
    ctx.set_gpr(31, 0x088F0018u);
    // nop
    goto L_088F0074;
L_088F0018:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29244)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F0044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088F0044u) goto L_088F0044;
    return;
L_088F0044:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10136));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F0058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F0058u) goto L_088F0058;
    return;
L_088F0058:
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
L_088F0074:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x088F008Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F008Cu) goto L_088F008C;
    return;
L_088F008C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F009C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F00ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F00ACu) goto L_088F00AC;
    return;
L_088F00AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29244));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24484));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088F0100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F0100u) goto L_088F0100;
    return;
L_088F0100:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F0120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 733u, 0x088EFFE4u>(ctx, &aot_mem) && ctx.pc == 0x088F0120u) goto L_088F0120;
    return;
L_088F0120:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F0148u);
    // nop
    goto L_088F01BC;
L_088F0148:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29248)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F015Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F015Cu) goto L_088F015C;
    return;
L_088F015C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0170:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29248)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F019C;
      }
      goto L_088F0188;
    }
L_088F0188:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F01A4;
      }
      goto L_088F019C;
    }
L_088F019C:
    ctx.set_gpr(31, 0x088F01A4u);
    // nop
    goto L_088F01BC;
L_088F01A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29248)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F01BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(484));
    ctx.set_gpr(31, 0x088F01D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F01D4u) goto L_088F01D4;
    return;
L_088F01D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F01E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F01F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F01F4u) goto L_088F01F4;
    return;
L_088F01F4:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(612));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29248));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(26548));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(596));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(26720));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24472));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088F0244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F0244u) goto L_088F0244;
    return;
L_088F0244:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0254:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28244)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29248)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F0288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F0288u) goto L_088F0288;
    return;
L_088F0288:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24460));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088F02A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F02A4u) goto L_088F02A4;
    return;
L_088F02A4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F02B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F02B4u) goto L_088F02B4;
    return;
L_088F02B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088F02C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088F02C4u) goto L_088F02C4;
    return;
L_088F02C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24392));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24376));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24360));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F02ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F02ECu) goto L_088F02EC;
    return;
L_088F02EC:
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(792));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(29248)));
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
L_088F0318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F0328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 683u, 0x088FBCD4u>(ctx, &aot_mem) && ctx.pc == 0x088F0328u) goto L_088F0328;
    return;
L_088F0328:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0338:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29268)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0378;
      }
      goto L_088F0350;
    }
L_088F0350:
    ctx.set_gpr(31, 0x088F0358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F0358u) goto L_088F0358;
    return;
L_088F0358:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F0364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0364u) goto L_088F0364;
    return;
L_088F0364:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F0370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F0370u) goto L_088F0370;
    return;
L_088F0370:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29268), ctx.gpr[2]);
    goto L_088F0378;
L_088F0378:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29268)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0390:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29268)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F03BC;
      }
      goto L_088F03A8;
    }
L_088F03A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F03C4;
      }
      goto L_088F03BC;
    }
L_088F03BC:
    ctx.set_gpr(31, 0x088F03C4u);
    // nop
    goto L_088F0498;
L_088F03C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29268)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F03DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088F03F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F03F4u) goto L_088F03F4;
    return;
L_088F03F4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2600));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088F0418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F0418u) goto L_088F0418;
    return;
L_088F0418:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2600));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0444;
      }
      goto L_088F043C;
    }
L_088F043C:
    ctx.set_gpr(31, 0x088F0444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F0444u) goto L_088F0444;
    return;
L_088F0444:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0458;
      }
      goto L_088F0450;
    }
L_088F0450:
    ctx.set_gpr(31, 0x088F0458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F0458u) goto L_088F0458;
    return;
L_088F0458:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F046C;
      }
      goto L_088F0464;
    }
L_088F0464:
    ctx.set_gpr(31, 0x088F046Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F046Cu) goto L_088F046C;
    return;
L_088F046C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0480;
      }
      goto L_088F0478;
    }
L_088F0478:
    ctx.set_gpr(31, 0x088F0480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F0480u) goto L_088F0480;
    return;
L_088F0480:
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
L_088F0498:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1216));
    ctx.set_gpr(31, 0x088F04B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F04B0u) goto L_088F04B0;
    return;
L_088F04B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F04C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F04D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F04D0u) goto L_088F04D0;
    return;
L_088F04D0:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1372));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24344));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29268));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1340));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24328));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(988));
    ctx.set_gpr(31, 0x088F052Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F052Cu) goto L_088F052C;
    return;
L_088F052C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F053C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F054Cu);
    // nop
    goto L_088F0390;
L_088F054C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F055C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29268)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F0584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F0584u) goto L_088F0584;
    return;
L_088F0584:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24312));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088F05A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F05A0u) goto L_088F05A0;
    return;
L_088F05A0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F05B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F05B0u) goto L_088F05B0;
    return;
L_088F05B0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F05BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 633u, 0x088F7580u>(ctx, &aot_mem) && ctx.pc == 0x088F05BCu) goto L_088F05BC;
    return;
L_088F05BC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F05D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F05D8u) goto L_088F05D8;
    return;
L_088F05D8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F05E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 519u, 0x088F6BA0u>(ctx, &aot_mem) && ctx.pc == 0x088F05E4u) goto L_088F05E4;
    return;
L_088F05E4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F0600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0600u) goto L_088F0600;
    return;
L_088F0600:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F060Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 678u, 0x088E7910u>(ctx, &aot_mem) && ctx.pc == 0x088F060Cu) goto L_088F060C;
    return;
L_088F060C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F0628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0628u) goto L_088F0628;
    return;
L_088F0628:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F0634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 678u, 0x088E7910u>(ctx, &aot_mem) && ctx.pc == 0x088F0634u) goto L_088F0634;
    return;
L_088F0634:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24276));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24252));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24228));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F0668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0668u) goto L_088F0668;
    return;
L_088F0668:
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
L_088F0684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29296)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F06C4;
      }
      goto L_088F069C;
    }
L_088F069C:
    ctx.set_gpr(31, 0x088F06A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F06A4u) goto L_088F06A4;
    return;
L_088F06A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F06B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F06B0u) goto L_088F06B0;
    return;
L_088F06B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F06BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F06BCu) goto L_088F06BC;
    return;
L_088F06BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29296), ctx.gpr[2]);
    goto L_088F06C4;
L_088F06C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29296)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F06DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29296)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0708;
      }
      goto L_088F06F4;
    }
L_088F06F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0710;
      }
      goto L_088F0708;
    }
L_088F0708:
    ctx.set_gpr(31, 0x088F0710u);
    // nop
    goto L_088F0728;
L_088F0710:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29296)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1872));
    ctx.set_gpr(31, 0x088F0740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F0740u) goto L_088F0740;
    return;
L_088F0740:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F0760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F0760u) goto L_088F0760;
    return;
L_088F0760:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29296));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1976));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24204));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088F07A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F07A8u) goto L_088F07A8;
    return;
L_088F07A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F07B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F07C8u);
    // nop
    goto L_088F06DC;
L_088F07C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F07D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29300)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0804;
      }
      goto L_088F07F0;
    }
L_088F07F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F080C;
      }
      goto L_088F0804;
    }
L_088F0804:
    ctx.set_gpr(31, 0x088F080Cu);
    // nop
    goto L_088F0824;
L_088F080C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29300)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0824:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2124));
    ctx.set_gpr(31, 0x088F083Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F083Cu) goto L_088F083C;
    return;
L_088F083C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F084C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F085Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F085Cu) goto L_088F085C;
    return;
L_088F085C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29300));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2236));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24188));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088F08ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F08ACu) goto L_088F08AC;
    return;
L_088F08AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F08BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F08CCu);
    // nop
    goto L_088F07D8;
L_088F08CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F08DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29300)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F0900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F0900u) goto L_088F0900;
    return;
L_088F0900:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24176));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088F091Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F091Cu) goto L_088F091C;
    return;
L_088F091C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24152));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24148));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24144));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F0944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0944u) goto L_088F0944;
    return;
L_088F0944:
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
L_088F095C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29308)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F099C;
      }
      goto L_088F0974;
    }
L_088F0974:
    ctx.set_gpr(31, 0x088F097Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F097Cu) goto L_088F097C;
    return;
L_088F097C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F0988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0988u) goto L_088F0988;
    return;
L_088F0988:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F0994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F0994u) goto L_088F0994;
    return;
L_088F0994:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29308), ctx.gpr[2]);
    goto L_088F099C;
L_088F099C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29308)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F09B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29308)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F09E0;
      }
      goto L_088F09CC;
    }
L_088F09CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F09E8;
      }
      goto L_088F09E0;
    }
L_088F09E0:
    ctx.set_gpr(31, 0x088F09E8u);
    // nop
    goto L_088F0A44;
L_088F09E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29308)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0A00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F0A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088F0A14u) goto L_088F0A14;
    return;
L_088F0A14:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10032));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F0A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F0A28u) goto L_088F0A28;
    return;
L_088F0A28:
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
L_088F0A44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2668));
    ctx.set_gpr(31, 0x088F0A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F0A5Cu) goto L_088F0A5C;
    return;
L_088F0A5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0A6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F0A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F0A7Cu) goto L_088F0A7C;
    return;
L_088F0A7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24140));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29308));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2784));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24132));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2560));
    ctx.set_gpr(31, 0x088F0AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F0AD0u) goto L_088F0AD0;
    return;
L_088F0AD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0AE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F0AF0u);
    // nop
    goto L_088F09B4;
L_088F0AF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0B00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F0B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F0B18u) goto L_088F0B18;
    return;
L_088F0B18:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0B4C;
      }
      goto L_088F0B24;
    }
L_088F0B24:
    ctx.set_gpr(31, 0x088F0B2Cu);
    // nop
    goto L_088F0D2C;
L_088F0B2C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29312)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F0B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F0B40u) goto L_088F0B40;
    return;
L_088F0B40:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0BAC;
      }
      goto L_088F0B4C;
    }
L_088F0B4C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F0B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088F0B60u) goto L_088F0B60;
    return;
L_088F0B60:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0B80;
      }
      goto L_088F0B6C;
    }
L_088F0B6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088F0B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 651u, 0x08926DA0u>(ctx, &aot_mem) && ctx.pc == 0x088F0B7Cu) goto L_088F0B7C;
    return;
L_088F0B7C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088F0B80;
L_088F0B80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F0B94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F0B94u) goto L_088F0B94;
    return;
L_088F0B94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F0BACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F0BACu) goto L_088F0BAC;
    return;
L_088F0BAC:
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
L_088F0BC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088F0BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F0BE4u) goto L_088F0BE4;
    return;
L_088F0BE4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0C10;
      }
      goto L_088F0BF0;
    }
L_088F0BF0:
    ctx.set_gpr(31, 0x088F0BF8u);
    // nop
    goto L_088F0D2C;
L_088F0BF8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F0C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088F0C08u) goto L_088F0C08;
    return;
L_088F0C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0C38;
      }
      goto L_088F0C10;
    }
L_088F0C10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088F0C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088F0C20u) goto L_088F0C20;
    return;
L_088F0C20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0C38;
      }
      goto L_088F0C28;
    }
L_088F0C28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F0C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 657u, 0x08926E34u>(ctx, &aot_mem) && ctx.pc == 0x088F0C38u) goto L_088F0C38;
    return;
L_088F0C38:
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
L_088F0C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29312)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0C90;
      }
      goto L_088F0C68;
    }
L_088F0C68:
    ctx.set_gpr(31, 0x088F0C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F0C70u) goto L_088F0C70;
    return;
L_088F0C70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F0C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0C7Cu) goto L_088F0C7C;
    return;
L_088F0C7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F0C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F0C88u) goto L_088F0C88;
    return;
L_088F0C88:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29312), ctx.gpr[2]);
    goto L_088F0C90;
L_088F0C90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29312)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0CA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29312)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0CD4;
      }
      goto L_088F0CC0;
    }
L_088F0CC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0CDC;
      }
      goto L_088F0CD4;
    }
L_088F0CD4:
    ctx.set_gpr(31, 0x088F0CDCu);
    // nop
    goto L_088F0D2C;
L_088F0CDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29312)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0CF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088F0D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 655u, 0x08926DF0u>(ctx, &aot_mem) && ctx.pc == 0x088F0D08u) goto L_088F0D08;
    return;
L_088F0D08:
    ctx.set_gpr(31, 0x088F0D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F0D10u) goto L_088F0D10;
    return;
L_088F0D10:
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
L_088F0D2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3412));
    ctx.set_gpr(31, 0x088F0D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F0D44u) goto L_088F0D44;
    return;
L_088F0D44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0D54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3552));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29312));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(3520));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24116));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(3316));
    ctx.set_gpr(31, 0x088F0DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F0DB0u) goto L_088F0DB0;
    return;
L_088F0DB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0DC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F0DD0u);
    // nop
    goto L_088F0CA8;
L_088F0DD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0DE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29312)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F0E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F0E08u) goto L_088F0E08;
    return;
L_088F0E08:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24080));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088F0E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F0E24u) goto L_088F0E24;
    return;
L_088F0E24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F0E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0E34u) goto L_088F0E34;
    return;
L_088F0E34:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F0E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 771u, 0x088DBFC4u>(ctx, &aot_mem) && ctx.pc == 0x088F0E40u) goto L_088F0E40;
    return;
L_088F0E40:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24072));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24064));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24056));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F0E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F0E80u) goto L_088F0E80;
    return;
L_088F0E80:
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
L_088F0E9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F0EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F0EB4u) goto L_088F0EB4;
    return;
L_088F0EB4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0EE8;
      }
      goto L_088F0EC0;
    }
L_088F0EC0:
    ctx.set_gpr(31, 0x088F0EC8u);
    // nop
    goto L_088F10C8;
L_088F0EC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29324)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F0EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F0EDCu) goto L_088F0EDC;
    return;
L_088F0EDC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0F48;
      }
      goto L_088F0EE8;
    }
L_088F0EE8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F0EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088F0EFCu) goto L_088F0EFC;
    return;
L_088F0EFC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0F1C;
      }
      goto L_088F0F08;
    }
L_088F0F08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088F0F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 734u, 0x08927378u>(ctx, &aot_mem) && ctx.pc == 0x088F0F18u) goto L_088F0F18;
    return;
L_088F0F18:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088F0F1C;
L_088F0F1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F0F30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F0F30u) goto L_088F0F30;
    return;
L_088F0F30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F0F48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F0F48u) goto L_088F0F48;
    return;
L_088F0F48:
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
L_088F0F60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088F0F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F0F80u) goto L_088F0F80;
    return;
L_088F0F80:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0FAC;
      }
      goto L_088F0F8C;
    }
L_088F0F8C:
    ctx.set_gpr(31, 0x088F0F94u);
    // nop
    goto L_088F10C8;
L_088F0F94:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F0FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088F0FA4u) goto L_088F0FA4;
    return;
L_088F0FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0FD4;
      }
      goto L_088F0FAC;
    }
L_088F0FAC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088F0FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088F0FBCu) goto L_088F0FBC;
    return;
L_088F0FBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0FD4;
      }
      goto L_088F0FC4;
    }
L_088F0FC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F0FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 738u, 0x089273F0u>(ctx, &aot_mem) && ctx.pc == 0x088F0FD4u) goto L_088F0FD4;
    return;
L_088F0FD4:
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
L_088F0FEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29324)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F102C;
      }
      goto L_088F1004;
    }
L_088F1004:
    ctx.set_gpr(31, 0x088F100Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F100Cu) goto L_088F100C;
    return;
L_088F100C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F1018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1018u) goto L_088F1018;
    return;
L_088F1018:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F1024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F1024u) goto L_088F1024;
    return;
L_088F1024:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29324), ctx.gpr[2]);
    goto L_088F102C;
L_088F102C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29324)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1044:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29324)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1070;
      }
      goto L_088F105C;
    }
L_088F105C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1078;
      }
      goto L_088F1070;
    }
L_088F1070:
    ctx.set_gpr(31, 0x088F1078u);
    // nop
    goto L_088F10C8;
L_088F1078:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29324)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1090:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088F10A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 736u, 0x089273B4u>(ctx, &aot_mem) && ctx.pc == 0x088F10A4u) goto L_088F10A4;
    return;
L_088F10A4:
    ctx.set_gpr(31, 0x088F10ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F10ACu) goto L_088F10AC;
    return;
L_088F10AC:
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
L_088F10C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4336));
    ctx.set_gpr(31, 0x088F10E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F10E0u) goto L_088F10E0;
    return;
L_088F10E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F10F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29324));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(3412));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4476));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4444));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24048));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4240));
    ctx.set_gpr(31, 0x088F114Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F114Cu) goto L_088F114C;
    return;
L_088F114C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F115C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F116Cu);
    // nop
    goto L_088F1044;
L_088F116C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F117C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29312)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F118C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29324)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F11BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F11BCu) goto L_088F11BC;
    return;
L_088F11BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F11D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F11D0u) goto L_088F11D0;
    return;
L_088F11D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F11ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F11ECu) goto L_088F11EC;
    return;
L_088F11EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(29328));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F1218u) goto L_088F1218;
    return;
L_088F1218:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1240;
      }
      goto L_088F1234;
    }
L_088F1234:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F1240u) goto L_088F1240;
    return;
L_088F1240:
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
L_088F125C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29332)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1288;
      }
      goto L_088F1274;
    }
L_088F1274:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1290;
      }
      goto L_088F1288;
    }
L_088F1288:
    ctx.set_gpr(31, 0x088F1290u);
    // nop
    goto L_088F1314;
L_088F1290:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29332)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F12A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F12C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F12C0u) goto L_088F12C0;
    return;
L_088F12C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2212));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F12D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F12D8u) goto L_088F12D8;
    return;
L_088F12D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088F12FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088F12FCu) goto L_088F12FC;
    return;
L_088F12FC:
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
L_088F1314:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(31, 0x088F132Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F132Cu) goto L_088F132C;
    return;
L_088F132C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F133C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F134Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F134Cu) goto L_088F134C;
    return;
L_088F134C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5080));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24024));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29332));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(5048));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-24016));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4776));
    ctx.set_gpr(31, 0x088F13A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F13A8u) goto L_088F13A8;
    return;
L_088F13A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F13B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F13C8u);
    // nop
    goto L_088F125C;
L_088F13C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F13D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29332)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F1400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F1400u) goto L_088F1400;
    return;
L_088F1400:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24008));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088F141Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F141Cu) goto L_088F141C;
    return;
L_088F141C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F142Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F142Cu) goto L_088F142C;
    return;
L_088F142C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F1438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 91u, 0x088F4848u>(ctx, &aot_mem) && ctx.pc == 0x088F1438u) goto L_088F1438;
    return;
L_088F1438:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F1454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1454u) goto L_088F1454;
    return;
L_088F1454:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088F1464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088F1464u) goto L_088F1464;
    return;
L_088F1464:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23972));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23964));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23956));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F148Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F148Cu) goto L_088F148C;
    return;
L_088F148C:
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
L_088F14A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F14C0u);
    // nop
    goto L_088F15D0;
L_088F14C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29344)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F14D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F14D4u) goto L_088F14D4;
    return;
L_088F14D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F14E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29344)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1528;
      }
      goto L_088F1500;
    }
L_088F1500:
    ctx.set_gpr(31, 0x088F1508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F1508u) goto L_088F1508;
    return;
L_088F1508:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F1514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1514u) goto L_088F1514;
    return;
L_088F1514:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F1520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F1520u) goto L_088F1520;
    return;
L_088F1520:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29344), ctx.gpr[2]);
    goto L_088F1528;
L_088F1528:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29344)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29344)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F156C;
      }
      goto L_088F1558;
    }
L_088F1558:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1574;
      }
      goto L_088F156C;
    }
L_088F156C:
    ctx.set_gpr(31, 0x088F1574u);
    // nop
    goto L_088F15D0;
L_088F1574:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29344)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F158C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F15A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088F15A0u) goto L_088F15A0;
    return;
L_088F15A0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9744));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F15B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F15B4u) goto L_088F15B4;
    return;
L_088F15B4:
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
L_088F15D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5624));
    ctx.set_gpr(31, 0x088F15E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F15E8u) goto L_088F15E8;
    return;
L_088F15E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F15F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F1608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F1608u) goto L_088F1608;
    return;
L_088F1608:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23948));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29344));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(5740));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-23940));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(5516));
    ctx.set_gpr(31, 0x088F165Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F165Cu) goto L_088F165C;
    return;
L_088F165C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F166C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F167Cu);
    // nop
    goto L_088F1540;
L_088F167C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F168C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F16A4u);
    // nop
    goto L_088F17B4;
L_088F16A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29348)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F16B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F16B8u) goto L_088F16B8;
    return;
L_088F16B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F16CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29348)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F16F8;
      }
      goto L_088F16E4;
    }
L_088F16E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1700;
      }
      goto L_088F16F8;
    }
L_088F16F8:
    ctx.set_gpr(31, 0x088F1700u);
    // nop
    goto L_088F17B4;
L_088F1700:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29348)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1718:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088F1730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F1730u) goto L_088F1730;
    return;
L_088F1730:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1960));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x088F1748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F1748u) goto L_088F1748;
    return;
L_088F1748:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1960));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1784;
      }
      goto L_088F1770;
    }
L_088F1770:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F177Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088F177Cu) goto L_088F177C;
    return;
L_088F177C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088F1784;
L_088F1784:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F179C;
      }
      goto L_088F178C;
    }
L_088F178C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088F179Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088F179Cu) goto L_088F179C;
    return;
L_088F179C:
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
L_088F17B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6108));
    ctx.set_gpr(31, 0x088F17CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F17CCu) goto L_088F17CC;
    return;
L_088F17CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F17DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F17ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F17ECu) goto L_088F17EC;
    return;
L_088F17EC:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29348));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(6224));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-23928));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(5912));
    ctx.set_gpr(31, 0x088F1840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F1840u) goto L_088F1840;
    return;
L_088F1840:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1850:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F1860u);
    // nop
    goto L_088F16CC;
L_088F1860:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1870:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29348)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F1894u) goto L_088F1894;
    return;
L_088F1894:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23916));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088F18B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F18B0u) goto L_088F18B0;
    return;
L_088F18B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23900));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23896));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23892));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F18D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F18D8u) goto L_088F18D8;
    return;
L_088F18D8:
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6404));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(29348)));
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
L_088F1904:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F1914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 696u, 0x088FBE08u>(ctx, &aot_mem) && ctx.pc == 0x088F1914u) goto L_088F1914;
    return;
L_088F1914:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1924:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F193Cu);
    // nop
    goto L_088F1A08;
L_088F193C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29356)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F1950u) goto L_088F1950;
    return;
L_088F1950:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29356)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F19A4;
      }
      goto L_088F197C;
    }
L_088F197C:
    ctx.set_gpr(31, 0x088F1984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F1984u) goto L_088F1984;
    return;
L_088F1984:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F1990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1990u) goto L_088F1990;
    return;
L_088F1990:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F199Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F199Cu) goto L_088F199C;
    return;
L_088F199C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29356), ctx.gpr[2]);
    goto L_088F19A4;
L_088F19A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29356)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F19BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29356)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F19E8;
      }
      goto L_088F19D4;
    }
L_088F19D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F19F0;
      }
      goto L_088F19E8;
    }
L_088F19E8:
    ctx.set_gpr(31, 0x088F19F0u);
    // nop
    goto L_088F1A08;
L_088F19F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29356)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1A08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6704));
    ctx.set_gpr(31, 0x088F1A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F1A20u) goto L_088F1A20;
    return;
L_088F1A20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1A30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F1A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F1A40u) goto L_088F1A40;
    return;
L_088F1A40:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29356));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2776));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-23888));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088F1A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F1A90u) goto L_088F1A90;
    return;
L_088F1A90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1AA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29356)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F1AC8u) goto L_088F1AC8;
    return;
L_088F1AC8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23880));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088F1AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F1AE4u) goto L_088F1AE4;
    return;
L_088F1AE4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F1AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1AF4u) goto L_088F1AF4;
    return;
L_088F1AF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23640));
    ctx.set_gpr(31, 0x088F1B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088F1B08u) goto L_088F1B08;
    return;
L_088F1B08:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1B18u) goto L_088F1B18;
    return;
L_088F1B18:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23648));
    ctx.set_gpr(31, 0x088F1B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088F1B30u) goto L_088F1B30;
    return;
L_088F1B30:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7372));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1B4Cu) goto L_088F1B4C;
    return;
L_088F1B4C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23644));
    ctx.set_gpr(31, 0x088F1B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088F1B64u) goto L_088F1B64;
    return;
L_088F1B64:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7280));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1B80u) goto L_088F1B80;
    return;
L_088F1B80:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1B94u) goto L_088F1B94;
    return;
L_088F1B94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 16u << 16u);
    ctx.set_gpr(31, 0x088F1BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088F1BA4u) goto L_088F1BA4;
    return;
L_088F1BA4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1BB4u) goto L_088F1BB4;
    return;
L_088F1BB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 16u << 16u);
    ctx.set_gpr(31, 0x088F1BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088F1BC4u) goto L_088F1BC4;
    return;
L_088F1BC4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1BD4u) goto L_088F1BD4;
    return;
L_088F1BD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x088F1BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088F1BE4u) goto L_088F1BE4;
    return;
L_088F1BE4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1BF4u) goto L_088F1BF4;
    return;
L_088F1BF4:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23744));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23712));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23680));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F1C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1C20u) goto L_088F1C20;
    return;
L_088F1C20:
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7248));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(29356)));
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
L_088F1C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F1C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 710u, 0x088FBF64u>(ctx, &aot_mem) && ctx.pc == 0x088F1C60u) goto L_088F1C60;
    return;
L_088F1C60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1C70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29392)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1CB4;
      }
      goto L_088F1C88;
    }
L_088F1C88:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-23448));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23520));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23484));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088F1CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088F1CACu) goto L_088F1CAC;
    return;
L_088F1CAC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29392), ctx.gpr[2]);
    goto L_088F1CB4;
L_088F1CB4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29392)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1CCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29396)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1D10;
      }
      goto L_088F1CE4;
    }
L_088F1CE4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-23356));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23380));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23368));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088F1D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088F1D08u) goto L_088F1D08;
    return;
L_088F1D08:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29396), ctx.gpr[2]);
    goto L_088F1D10;
L_088F1D10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29396)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1D28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F1D40u);
    // nop
    goto L_088F1EB0;
L_088F1D40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29400)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F1D54u) goto L_088F1D54;
    return;
L_088F1D54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1D68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29400)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1D94;
      }
      goto L_088F1D80;
    }
L_088F1D80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1D9C;
      }
      goto L_088F1D94;
    }
L_088F1D94:
    ctx.set_gpr(31, 0x088F1D9Cu);
    // nop
    goto L_088F1EB0;
L_088F1D9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29400)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088F1DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F1DCCu) goto L_088F1DCC;
    return;
L_088F1DCC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-864));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x088F1DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F1DECu) goto L_088F1DEC;
    return;
L_088F1DEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-864));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1E28;
      }
      goto L_088F1E14;
    }
L_088F1E14:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088F1E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1E20u) goto L_088F1E20;
    return;
L_088F1E20:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088F1E28;
L_088F1E28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1E40;
      }
      goto L_088F1E30;
    }
L_088F1E30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088F1E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088F1E40u) goto L_088F1E40;
    return;
L_088F1E40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1E64;
      }
      goto L_088F1E50;
    }
L_088F1E50:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x088F1E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1E5Cu) goto L_088F1E5C;
    return;
L_088F1E5C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088F1E64;
L_088F1E64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1E7C;
      }
      goto L_088F1E6C;
    }
L_088F1E6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088F1E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088F1E7Cu) goto L_088F1E7C;
    return;
L_088F1E7C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F1E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088F1E98u) goto L_088F1E98;
    return;
L_088F1E98:
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
L_088F1EB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7896));
    ctx.set_gpr(31, 0x088F1EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F1EC8u) goto L_088F1EC8;
    return;
L_088F1EC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1ED8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F1EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F1EE8u) goto L_088F1EE8;
    return;
L_088F1EE8:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8044));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29400));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20572));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-12172));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8012));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-23344));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(7604));
    ctx.set_gpr(31, 0x088F1F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F1F3Cu) goto L_088F1F3C;
    return;
L_088F1F3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1F4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F1F5Cu);
    // nop
    goto L_088F1D68;
L_088F1F5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F1F6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29400)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F1F90u) goto L_088F1F90;
    return;
L_088F1F90:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23324));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088F1FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F1FACu) goto L_088F1FAC;
    return;
L_088F1FAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F1FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1FBCu) goto L_088F1FBC;
    return;
L_088F1FBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088F1FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088F1FCCu) goto L_088F1FCC;
    return;
L_088F1FCC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1FDCu) goto L_088F1FDC;
    return;
L_088F1FDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F1FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088F1FECu) goto L_088F1FEC;
    return;
L_088F1FEC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F1FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F1FFCu) goto L_088F1FFC;
    return;
L_088F1FFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088F200Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088F200Cu) goto L_088F200C;
    return;
L_088F200C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23276));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23264));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23252));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F2034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2034u) goto L_088F2034;
    return;
L_088F2034:
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
L_088F204C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29416)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2078;
      }
      goto L_088F2064;
    }
L_088F2064:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F2080;
      }
      goto L_088F2078;
    }
L_088F2078:
    ctx.set_gpr(31, 0x088F2080u);
    // nop
    goto L_088F2144;
L_088F2080:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29416)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2098:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F20B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F20B0u) goto L_088F20B0;
    return;
L_088F20B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-672));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(31, 0x088F20D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F20D0u) goto L_088F20D0;
    return;
L_088F20D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-672));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F20FC;
      }
      goto L_088F20F4;
    }
L_088F20F4:
    ctx.set_gpr(31, 0x088F20FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F20FCu) goto L_088F20FC;
    return;
L_088F20FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2110;
      }
      goto L_088F2108;
    }
L_088F2108:
    ctx.set_gpr(31, 0x088F2110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F2110u) goto L_088F2110;
    return;
L_088F2110:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F212Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088F212Cu) goto L_088F212C;
    return;
L_088F212C:
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
L_088F2144:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8556));
    ctx.set_gpr(31, 0x088F215Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F215Cu) goto L_088F215C;
    return;
L_088F215C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F216C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F217Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F217Cu) goto L_088F217C;
    return;
L_088F217C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8712));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29416));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20572));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-12172));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8680));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-23232));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(8344));
    ctx.set_gpr(31, 0x088F21D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F21D8u) goto L_088F21D8;
    return;
L_088F21D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F21E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F21F8u);
    // nop
    goto L_088F204C;
L_088F21F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2208:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29416)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F2230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F2230u) goto L_088F2230;
    return;
L_088F2230:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23208));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088F224Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F224Cu) goto L_088F224C;
    return;
L_088F224C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F225Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F225Cu) goto L_088F225C;
    return;
L_088F225C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 753u, 0x088D7138u>(ctx, &aot_mem) && ctx.pc == 0x088F2268u) goto L_088F2268;
    return;
L_088F2268:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F2280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2280u) goto L_088F2280;
    return;
L_088F2280:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F2290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088F2290u) goto L_088F2290;
    return;
L_088F2290:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F22A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F22A0u) goto L_088F22A0;
    return;
L_088F22A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F22ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 753u, 0x088D7138u>(ctx, &aot_mem) && ctx.pc == 0x088F22ACu) goto L_088F22AC;
    return;
L_088F22AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F22C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F22C4u) goto L_088F22C4;
    return;
L_088F22C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F22D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088F22D4u) goto L_088F22D4;
    return;
L_088F22D4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23112));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23088));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23064));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F22FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F22FCu) goto L_088F22FC;
    return;
L_088F22FC:
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
L_088F2318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29444)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2344;
      }
      goto L_088F2330;
    }
L_088F2330:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F234C;
      }
      goto L_088F2344;
    }
L_088F2344:
    ctx.set_gpr(31, 0x088F234Cu);
    // nop
    goto L_088F24A0;
L_088F234C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29444)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088F237Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F237Cu) goto L_088F237C;
    return;
L_088F237C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x088F23A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F23A0u) goto L_088F23A0;
    return;
L_088F23A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F23DC;
      }
      goto L_088F23C8;
    }
L_088F23C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088F23D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088F23D4u) goto L_088F23D4;
    return;
L_088F23D4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088F23DC;
L_088F23DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F23F4;
      }
      goto L_088F23E4;
    }
L_088F23E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088F23F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088F23F4u) goto L_088F23F4;
    return;
L_088F23F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2418;
      }
      goto L_088F2404;
    }
L_088F2404:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x088F2410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2410u) goto L_088F2410;
    return;
L_088F2410:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088F2418;
L_088F2418:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2430;
      }
      goto L_088F2420;
    }
L_088F2420:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088F2430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088F2430u) goto L_088F2430;
    return;
L_088F2430:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2454;
      }
      goto L_088F2440;
    }
L_088F2440:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088F244Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088F244Cu) goto L_088F244C;
    return;
L_088F244C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088F2454;
L_088F2454:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F246C;
      }
      goto L_088F245C;
    }
L_088F245C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088F246Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088F246Cu) goto L_088F246C;
    return;
L_088F246C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F2488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088F2488u) goto L_088F2488;
    return;
L_088F2488:
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
L_088F24A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9416));
    ctx.set_gpr(31, 0x088F24B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F24B8u) goto L_088F24B8;
    return;
L_088F24B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F24C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F24D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F24D8u) goto L_088F24D8;
    return;
L_088F24D8:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9572));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29444));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20572));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-12172));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9540));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-23032));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(9060));
    ctx.set_gpr(31, 0x088F2534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F2534u) goto L_088F2534;
    return;
L_088F2534:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F2554u);
    // nop
    goto L_088F2318;
L_088F2554:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2564:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29444)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F2590u) goto L_088F2590;
    return;
L_088F2590:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23012));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088F25ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F25ACu) goto L_088F25AC;
    return;
L_088F25AC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26900));
    ctx.set_gpr(31, 0x088F25C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F25C4u) goto L_088F25C4;
    return;
L_088F25C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F25D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F25D4u) goto L_088F25D4;
    return;
L_088F25D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F25E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F25E0u) goto L_088F25E0;
    return;
L_088F25E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F25ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F25ECu) goto L_088F25EC;
    return;
L_088F25EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F25F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 711u, 0x088DBB10u>(ctx, &aot_mem) && ctx.pc == 0x088F25F8u) goto L_088F25F8;
    return;
L_088F25F8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26900));
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29448));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 547u, 0x0894265Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2620u) goto L_088F2620;
    return;
L_088F2620:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29448));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F2650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F2650u) goto L_088F2650;
    return;
L_088F2650:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F2678;
      }
      goto L_088F266C;
    }
L_088F266C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F2678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F2678u) goto L_088F2678;
    return;
L_088F2678:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088F2688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2688u) goto L_088F2688;
    return;
L_088F2688:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22900));
    ctx.set_gpr(31, 0x088F269Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088F269Cu) goto L_088F269C;
    return;
L_088F269C:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F26ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F26ACu) goto L_088F26AC;
    return;
L_088F26AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22888));
    ctx.set_gpr(31, 0x088F26C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088F26C0u) goto L_088F26C0;
    return;
L_088F26C0:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F26D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F26D0u) goto L_088F26D0;
    return;
L_088F26D0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(31, 0x088F26E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088F26E4u) goto L_088F26E4;
    return;
L_088F26E4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22948));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22932));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-22916));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088F2710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2710u) goto L_088F2710;
    return;
L_088F2710:
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
L_088F2730:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F2748u);
    // nop
    goto L_088F29D0;
L_088F2748:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29468)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F275Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F275Cu) goto L_088F275C;
    return;
L_088F275C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29468)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F27B0;
      }
      goto L_088F2788;
    }
L_088F2788:
    ctx.set_gpr(31, 0x088F2790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F2790u) goto L_088F2790;
    return;
L_088F2790:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F279Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F279Cu) goto L_088F279C;
    return;
L_088F279C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F27A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F27A8u) goto L_088F27A8;
    return;
L_088F27A8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29468), ctx.gpr[2]);
    goto L_088F27B0;
L_088F27B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29468)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F27C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29468)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F27F4;
      }
      goto L_088F27E0;
    }
L_088F27E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F27FC;
      }
      goto L_088F27F4;
    }
L_088F27F4:
    ctx.set_gpr(31, 0x088F27FCu);
    // nop
    goto L_088F29D0;
L_088F27FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29468)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-9552));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F282Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F282Cu) goto L_088F282C;
    return;
L_088F282C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-280));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), 0u);
    ctx.set_gpr(31, 0x088F2874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F2874u) goto L_088F2874;
    return;
L_088F2874:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-280));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F28B0;
      }
      goto L_088F289C;
    }
L_088F289C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x088F28A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088F28A8u) goto L_088F28A8;
    return;
L_088F28A8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088F28B0;
L_088F28B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F28C8;
      }
      goto L_088F28B8;
    }
L_088F28B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088F28C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088F28C8u) goto L_088F28C8;
    return;
L_088F28C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F28DC;
      }
      goto L_088F28D4;
    }
L_088F28D4:
    ctx.set_gpr(31, 0x088F28DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F28DCu) goto L_088F28DC;
    return;
L_088F28DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F28F0;
      }
      goto L_088F28E8;
    }
L_088F28E8:
    ctx.set_gpr(31, 0x088F28F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F28F0u) goto L_088F28F0;
    return;
L_088F28F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2904;
      }
      goto L_088F28FC;
    }
L_088F28FC:
    ctx.set_gpr(31, 0x088F2904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F2904u) goto L_088F2904;
    return;
L_088F2904:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2918;
      }
      goto L_088F2910;
    }
L_088F2910:
    ctx.set_gpr(31, 0x088F2918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F2918u) goto L_088F2918;
    return;
L_088F2918:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F292C;
      }
      goto L_088F2924;
    }
L_088F2924:
    ctx.set_gpr(31, 0x088F292Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F292Cu) goto L_088F292C;
    return;
L_088F292C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2940;
      }
      goto L_088F2938;
    }
L_088F2938:
    ctx.set_gpr(31, 0x088F2940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F2940u) goto L_088F2940;
    return;
L_088F2940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2954;
      }
      goto L_088F294C;
    }
L_088F294C:
    ctx.set_gpr(31, 0x088F2954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F2954u) goto L_088F2954;
    return;
L_088F2954:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2968;
      }
      goto L_088F2960;
    }
L_088F2960:
    ctx.set_gpr(31, 0x088F2968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F2968u) goto L_088F2968;
    return;
L_088F2968:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F297C;
      }
      goto L_088F2974;
    }
L_088F2974:
    ctx.set_gpr(31, 0x088F297Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F297Cu) goto L_088F297C;
    return;
L_088F297C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2990;
      }
      goto L_088F2988;
    }
L_088F2988:
    ctx.set_gpr(31, 0x088F2990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F2990u) goto L_088F2990;
    return;
L_088F2990:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F29A4;
      }
      goto L_088F299C;
    }
L_088F299C:
    ctx.set_gpr(31, 0x088F29A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F29A4u) goto L_088F29A4;
    return;
L_088F29A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F29B8;
      }
      goto L_088F29B0;
    }
L_088F29B0:
    ctx.set_gpr(31, 0x088F29B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F29B8u) goto L_088F29B8;
    return;
L_088F29B8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(9552));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F29D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10744));
    ctx.set_gpr(31, 0x088F29E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F29E8u) goto L_088F29E8;
    return;
L_088F29E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F29F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F2A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F2A08u) goto L_088F2A08;
    return;
L_088F2A08:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10900));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22880));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29468));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(10868));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-22848));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(9524));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(10260));
    ctx.set_gpr(31, 0x088F2A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F2A64u) goto L_088F2A64;
    return;
L_088F2A64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2A74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F2A84u);
    // nop
    goto L_088F27C8;
L_088F2A84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2A94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29468)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F2ABCu) goto L_088F2ABC;
    return;
L_088F2ABC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22832));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(31, 0x088F2AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F2AD8u) goto L_088F2AD8;
    return;
L_088F2AD8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2AE8u) goto L_088F2AE8;
    return;
L_088F2AE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F2AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088F2AF8u) goto L_088F2AF8;
    return;
L_088F2AF8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2B08u) goto L_088F2B08;
    return;
L_088F2B08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F2B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088F2B18u) goto L_088F2B18;
    return;
L_088F2B18:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2B28u) goto L_088F2B28;
    return;
L_088F2B28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F2B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088F2B38u) goto L_088F2B38;
    return;
L_088F2B38:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2B48u) goto L_088F2B48;
    return;
L_088F2B48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F2B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088F2B58u) goto L_088F2B58;
    return;
L_088F2B58:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2B68u) goto L_088F2B68;
    return;
L_088F2B68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F2B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088F2B78u) goto L_088F2B78;
    return;
L_088F2B78:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2B88u) goto L_088F2B88;
    return;
L_088F2B88:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2B9Cu) goto L_088F2B9C;
    return;
L_088F2B9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 678u, 0x088E7910u>(ctx, &aot_mem) && ctx.pc == 0x088F2BA8u) goto L_088F2BA8;
    return;
L_088F2BA8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2BC4u) goto L_088F2BC4;
    return;
L_088F2BC4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 678u, 0x088E7910u>(ctx, &aot_mem) && ctx.pc == 0x088F2BD0u) goto L_088F2BD0;
    return;
L_088F2BD0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2BECu) goto L_088F2BEC;
    return;
L_088F2BEC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 678u, 0x088E7910u>(ctx, &aot_mem) && ctx.pc == 0x088F2BF8u) goto L_088F2BF8;
    return;
L_088F2BF8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2C14u) goto L_088F2C14;
    return;
L_088F2C14:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 678u, 0x088E7910u>(ctx, &aot_mem) && ctx.pc == 0x088F2C20u) goto L_088F2C20;
    return;
L_088F2C20:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2C3Cu) goto L_088F2C3C;
    return;
L_088F2C3C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 678u, 0x088E7910u>(ctx, &aot_mem) && ctx.pc == 0x088F2C48u) goto L_088F2C48;
    return;
L_088F2C48:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2C64u) goto L_088F2C64;
    return;
L_088F2C64:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 678u, 0x088E7910u>(ctx, &aot_mem) && ctx.pc == 0x088F2C70u) goto L_088F2C70;
    return;
L_088F2C70:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2C8Cu) goto L_088F2C8C;
    return;
L_088F2C8C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 511u, 0x088FACD4u>(ctx, &aot_mem) && ctx.pc == 0x088F2C98u) goto L_088F2C98;
    return;
L_088F2C98:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2CB4u) goto L_088F2CB4;
    return;
L_088F2CB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2CC0u);
    // nop
    goto L_088F0338;
L_088F2CC0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2CDCu) goto L_088F2CDC;
    return;
L_088F2CDC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 464u, 0x088F66F8u>(ctx, &aot_mem) && ctx.pc == 0x088F2CE8u) goto L_088F2CE8;
    return;
L_088F2CE8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2D04u) goto L_088F2D04;
    return;
L_088F2D04:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 519u, 0x088F6BA0u>(ctx, &aot_mem) && ctx.pc == 0x088F2D10u) goto L_088F2D10;
    return;
L_088F2D10:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2D2Cu) goto L_088F2D2C;
    return;
L_088F2D2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 490u, 0x088FAB28u>(ctx, &aot_mem) && ctx.pc == 0x088F2D38u) goto L_088F2D38;
    return;
L_088F2D38:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2D58u) goto L_088F2D58;
    return;
L_088F2D58:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2D70u) goto L_088F2D70;
    return;
L_088F2D70:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088F2D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x088F2D84u) goto L_088F2D84;
    return;
L_088F2D84:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(23));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2D98u) goto L_088F2D98;
    return;
L_088F2D98:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2DB0u) goto L_088F2DB0;
    return;
L_088F2DB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(25));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2DC8u) goto L_088F2DC8;
    return;
L_088F2DC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2DE0u) goto L_088F2DE0;
    return;
L_088F2DE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(27));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2DF8u) goto L_088F2DF8;
    return;
L_088F2DF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8196));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2E14u) goto L_088F2E14;
    return;
L_088F2E14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(256));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(29));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2E30u) goto L_088F2E30;
    return;
L_088F2E30:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F2E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088F2E44u) goto L_088F2E44;
    return;
L_088F2E44:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2E58u) goto L_088F2E58;
    return;
L_088F2E58:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(256));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2E74u) goto L_088F2E74;
    return;
L_088F2E74:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F2E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088F2E88u) goto L_088F2E88;
    return;
L_088F2E88:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2E9Cu) goto L_088F2E9C;
    return;
L_088F2E9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F2EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 389u, 0x088E9D38u>(ctx, &aot_mem) && ctx.pc == 0x088F2EA8u) goto L_088F2EA8;
    return;
L_088F2EA8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(33));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2EC0u) goto L_088F2EC0;
    return;
L_088F2EC0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088F2ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088F2ED4u) goto L_088F2ED4;
    return;
L_088F2ED4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(34));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2EE8u) goto L_088F2EE8;
    return;
L_088F2EE8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22124));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-21844));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F2F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F2F14u) goto L_088F2F14;
    return;
L_088F2F14:
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
L_088F2F30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F2F48u);
    // nop
    goto L_088F3000;
L_088F2F48:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29612)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F2F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F2F5Cu) goto L_088F2F5C;
    return;
L_088F2F5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2F70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29612)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2F9C;
      }
      goto L_088F2F88;
    }
L_088F2F88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F2FA4;
      }
      goto L_088F2F9C;
    }
L_088F2F9C:
    ctx.set_gpr(31, 0x088F2FA4u);
    // nop
    goto L_088F3000;
L_088F2FA4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29612)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2FBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088F2FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F2FD0u) goto L_088F2FD0;
    return;
L_088F2FD0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9652));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F2FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F2FE4u) goto L_088F2FE4;
    return;
L_088F2FE4:
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
L_088F3000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12328));
    ctx.set_gpr(31, 0x088F3018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F3018u) goto L_088F3018;
    return;
L_088F3018:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3028:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F3038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F3038u) goto L_088F3038;
    return;
L_088F3038:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12484));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12524));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29612));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(12452));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-21132));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12220));
    ctx.set_gpr(31, 0x088F3094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F3094u) goto L_088F3094;
    return;
L_088F3094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F30A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F30B4u);
    // nop
    goto L_088F2F70;
L_088F30B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F30C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12556));
    ctx.set_gpr(31, 0x088F30DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088F30DCu) goto L_088F30DC;
    return;
L_088F30DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F30EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F30FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 486u, 0x08915B70u>(ctx, &aot_mem) && ctx.pc == 0x088F30FCu) goto L_088F30FC;
    return;
L_088F30FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F310C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F311Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 488u, 0x08915B90u>(ctx, &aot_mem) && ctx.pc == 0x088F311Cu) goto L_088F311C;
    return;
L_088F311C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F312C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29616)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3158;
      }
      goto L_088F3144;
    }
L_088F3144:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3160;
      }
      goto L_088F3158;
    }
L_088F3158:
    ctx.set_gpr(31, 0x088F3160u);
    // nop
    goto L_088F31BC;
L_088F3160:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29616)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3178:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088F318Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F318Cu) goto L_088F318C;
    return;
L_088F318C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9560));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F31A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F31A0u) goto L_088F31A0;
    return;
L_088F31A0:
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
L_088F31BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12772));
    ctx.set_gpr(31, 0x088F31D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F31D4u) goto L_088F31D4;
    return;
L_088F31D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F31E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F31F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F31F4u) goto L_088F31F4;
    return;
L_088F31F4:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12920));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29616));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(12888));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-21100));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12664));
    ctx.set_gpr(31, 0x088F3248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F3248u) goto L_088F3248;
    return;
L_088F3248:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3258:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F3268u);
    // nop
    goto L_088F312C;
L_088F3268:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3278:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29616)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F329Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F329Cu) goto L_088F329C;
    return;
L_088F329C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-21084));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088F32B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F32B8u) goto L_088F32B8;
    return;
L_088F32B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-21052));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21036));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-21020));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F32E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F32E0u) goto L_088F32E0;
    return;
L_088F32E0:
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
L_088F32F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F3310u);
    // nop
    goto L_088F3488;
L_088F3310:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29636)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F3324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F3324u) goto L_088F3324;
    return;
L_088F3324:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3338:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29636)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3364;
      }
      goto L_088F3350;
    }
L_088F3350:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F336C;
      }
      goto L_088F3364;
    }
L_088F3364:
    ctx.set_gpr(31, 0x088F336Cu);
    // nop
    goto L_088F3488;
L_088F336C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29636)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3384:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088F339Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F339Cu) goto L_088F339C;
    return;
L_088F339C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(188));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(31, 0x088F33CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F33CCu) goto L_088F33CC;
    return;
L_088F33CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(188));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F33F8;
      }
      goto L_088F33F0;
    }
L_088F33F0:
    ctx.set_gpr(31, 0x088F33F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F33F8u) goto L_088F33F8;
    return;
L_088F33F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F340C;
      }
      goto L_088F3404;
    }
L_088F3404:
    ctx.set_gpr(31, 0x088F340Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F340Cu) goto L_088F340C;
    return;
L_088F340C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3420;
      }
      goto L_088F3418;
    }
L_088F3418:
    ctx.set_gpr(31, 0x088F3420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F3420u) goto L_088F3420;
    return;
L_088F3420:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3434;
      }
      goto L_088F342C;
    }
L_088F342C:
    ctx.set_gpr(31, 0x088F3434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F3434u) goto L_088F3434;
    return;
L_088F3434:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3448;
      }
      goto L_088F3440;
    }
L_088F3440:
    ctx.set_gpr(31, 0x088F3448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F3448u) goto L_088F3448;
    return;
L_088F3448:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F345C;
      }
      goto L_088F3454;
    }
L_088F3454:
    ctx.set_gpr(31, 0x088F345Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F345Cu) goto L_088F345C;
    return;
L_088F345C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3470;
      }
      goto L_088F3468;
    }
L_088F3468:
    ctx.set_gpr(31, 0x088F3470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F3470u) goto L_088F3470;
    return;
L_088F3470:
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
L_088F3488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13488));
    ctx.set_gpr(31, 0x088F34A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F34A0u) goto L_088F34A0;
    return;
L_088F34A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F34B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F34C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F34C0u) goto L_088F34C0;
    return;
L_088F34C0:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13644));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-21004));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29636));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13612));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-20980));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(13188));
    ctx.set_gpr(31, 0x088F351Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F351Cu) goto L_088F351C;
    return;
L_088F351C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F352C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F353Cu);
    // nop
    goto L_088F3338;
L_088F353C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F354C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29636)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F3574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F3574u) goto L_088F3574;
    return;
L_088F3574:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20960));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088F3590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F3590u) goto L_088F3590;
    return;
L_088F3590:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F35A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F35A0u) goto L_088F35A0;
    return;
L_088F35A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F35ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 53u, 0x088E84C4u>(ctx, &aot_mem) && ctx.pc == 0x088F35ACu) goto L_088F35AC;
    return;
L_088F35AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F35C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F35C8u) goto L_088F35C8;
    return;
L_088F35C8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F35D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 270u, 0x088F97B8u>(ctx, &aot_mem) && ctx.pc == 0x088F35D4u) goto L_088F35D4;
    return;
L_088F35D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F35F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F35F0u) goto L_088F35F0;
    return;
L_088F35F0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F35FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 270u, 0x088F97B8u>(ctx, &aot_mem) && ctx.pc == 0x088F35FCu) goto L_088F35FC;
    return;
L_088F35FC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F3618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3618u) goto L_088F3618;
    return;
L_088F3618:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F3624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 730u, 0x088EB744u>(ctx, &aot_mem) && ctx.pc == 0x088F3624u) goto L_088F3624;
    return;
L_088F3624:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F3638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3638u) goto L_088F3638;
    return;
L_088F3638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088F3648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088F3648u) goto L_088F3648;
    return;
L_088F3648:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F3658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3658u) goto L_088F3658;
    return;
L_088F3658:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20560));
    ctx.set_gpr(31, 0x088F3670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088F3670u) goto L_088F3670;
    return;
L_088F3670:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14352));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F368Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F368Cu) goto L_088F368C;
    return;
L_088F368C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F3698u);
    // nop
    goto L_088F1964;
L_088F3698:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F36BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F36BCu) goto L_088F36BC;
    return;
L_088F36BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F36C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 24u, 0x088E8228u>(ctx, &aot_mem) && ctx.pc == 0x088F36C8u) goto L_088F36C8;
    return;
L_088F36C8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F36F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F36F4u) goto L_088F36F4;
    return;
L_088F36F4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F3700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 24u, 0x088E8228u>(ctx, &aot_mem) && ctx.pc == 0x088F3700u) goto L_088F3700;
    return;
L_088F3700:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F372Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F372Cu) goto L_088F372C;
    return;
L_088F372C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F374Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F374Cu) goto L_088F374C;
    return;
L_088F374C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F3760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3760u) goto L_088F3760;
    return;
L_088F3760:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20704));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20656));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-20608));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F3798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3798u) goto L_088F3798;
    return;
L_088F3798:
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
L_088F37B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29688)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F37F8;
      }
      goto L_088F37CC;
    }
L_088F37CC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20276));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20388));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20332));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x088F37F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088F37F0u) goto L_088F37F0;
    return;
L_088F37F0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29688), ctx.gpr[2]);
    goto L_088F37F8;
L_088F37F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29688)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3810:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29692)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3854;
      }
      goto L_088F3828;
    }
L_088F3828:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20200));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20216));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20208));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088F384Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088F384Cu) goto L_088F384C;
    return;
L_088F384C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29692), ctx.gpr[2]);
    goto L_088F3854;
L_088F3854:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29692)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F386C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29696)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F38B0;
      }
      goto L_088F3884;
    }
L_088F3884:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20076));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20108));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20092));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088F38A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088F38A8u) goto L_088F38A8;
    return;
L_088F38A8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29696), ctx.gpr[2]);
    goto L_088F38B0;
L_088F38B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29696)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F38C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29700)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F38F4;
      }
      goto L_088F38E0;
    }
L_088F38E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F38FC;
      }
      goto L_088F38F4;
    }
L_088F38F4:
    ctx.set_gpr(31, 0x088F38FCu);
    // nop
    goto L_088F3958;
L_088F38FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29700)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088F3928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F3928u) goto L_088F3928;
    return;
L_088F3928:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9468));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F393Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F393Cu) goto L_088F393C;
    return;
L_088F393C:
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
L_088F3958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14720));
    ctx.set_gpr(31, 0x088F3970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F3970u) goto L_088F3970;
    return;
L_088F3970:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3980:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F3990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F3990u) goto L_088F3990;
    return;
L_088F3990:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29700));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14828));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-20064));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14612));
    ctx.set_gpr(31, 0x088F39DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F39DCu) goto L_088F39DC;
    return;
L_088F39DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F39EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F39FCu);
    // nop
    goto L_088F38C8;
L_088F39FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3A0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F3A24u);
    // nop
    goto L_088F3B24;
L_088F3A24:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29704)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F3A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F3A38u) goto L_088F3A38;
    return;
L_088F3A38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3A4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3A78;
      }
      goto L_088F3A64;
    }
L_088F3A64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3A80;
      }
      goto L_088F3A78;
    }
L_088F3A78:
    ctx.set_gpr(31, 0x088F3A80u);
    // nop
    goto L_088F3B24;
L_088F3A80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29704)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3A98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088F3AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088F3AB0u) goto L_088F3AB0;
    return;
L_088F3AB0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9376));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x088F3ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F3ACCu) goto L_088F3ACC;
    return;
L_088F3ACC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9376));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3AF8;
      }
      goto L_088F3AF0;
    }
L_088F3AF0:
    ctx.set_gpr(31, 0x088F3AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F3AF8u) goto L_088F3AF8;
    return;
L_088F3AF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3B0C;
      }
      goto L_088F3B04;
    }
L_088F3B04:
    ctx.set_gpr(31, 0x088F3B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088F3B0Cu) goto L_088F3B0C;
    return;
L_088F3B0C:
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
L_088F3B24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15180));
    ctx.set_gpr(31, 0x088F3B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F3B3Cu) goto L_088F3B3C;
    return;
L_088F3B3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3B4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F3B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F3B5Cu) goto L_088F3B5C;
    return;
L_088F3B5C:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20056));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29704));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(15304));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-20048));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(15000));
    ctx.set_gpr(31, 0x088F3BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F3BB8u) goto L_088F3BB8;
    return;
L_088F3BB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3BC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F3BD8u);
    // nop
    goto L_088F3A4C;
L_088F3BD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3BE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29704)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F3C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088F3C10u) goto L_088F3C10;
    return;
L_088F3C10:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20036));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088F3C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088F3C2Cu) goto L_088F3C2C;
    return;
L_088F3C2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F3C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3C3Cu) goto L_088F3C3C;
    return;
L_088F3C3C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F3C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 24u, 0x088E8228u>(ctx, &aot_mem) && ctx.pc == 0x088F3C48u) goto L_088F3C48;
    return;
L_088F3C48:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088F3C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3C64u) goto L_088F3C64;
    return;
L_088F3C64:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F3C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 24u, 0x088E8228u>(ctx, &aot_mem) && ctx.pc == 0x088F3C70u) goto L_088F3C70;
    return;
L_088F3C70:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20028));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-20020));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-20012));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088F3CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3CA4u) goto L_088F3CA4;
    return;
L_088F3CA4:
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
L_088F3CC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29716)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3D00;
      }
      goto L_088F3CD8;
    }
L_088F3CD8:
    ctx.set_gpr(31, 0x088F3CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F3CE0u) goto L_088F3CE0;
    return;
L_088F3CE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F3CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3CECu) goto L_088F3CEC;
    return;
L_088F3CEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F3CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F3CF8u) goto L_088F3CF8;
    return;
L_088F3CF8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29716), ctx.gpr[2]);
    goto L_088F3D00;
L_088F3D00:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29716)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3D18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29716)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3D44;
      }
      goto L_088F3D30;
    }
L_088F3D30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3D4C;
      }
      goto L_088F3D44;
    }
L_088F3D44:
    ctx.set_gpr(31, 0x088F3D4Cu);
    // nop
    goto L_088F3DA8;
L_088F3D4C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29716)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3D64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088F3D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088F3D78u) goto L_088F3D78;
    return;
L_088F3D78:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088F3D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088F3D8Cu) goto L_088F3D8C;
    return;
L_088F3D8C:
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
L_088F3DA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15824));
    ctx.set_gpr(31, 0x088F3DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088F3DC0u) goto L_088F3DC0;
    return;
L_088F3DC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3DD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F3DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088F3DE0u) goto L_088F3DE0;
    return;
L_088F3DE0:
    ctx.set_gpr(2, 2191u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20004));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29716));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(15948));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-19996));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2191u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(15716));
    ctx.set_gpr(31, 0x088F3E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088F3E3Cu) goto L_088F3E3C;
    return;
L_088F3E3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3E4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088F3E5Cu);
    // nop
    goto L_088F3D18;
L_088F3E5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3E6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29716)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088F3E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088F3E9Cu) goto L_088F3E9C;
    return;
L_088F3E9C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F3EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088F3EB0u) goto L_088F3EB0;
    return;
L_088F3EB0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088F3ECCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F3ECCu) goto L_088F3ECC;
    return;
L_088F3ECC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F3ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 771u, 0x088DBFC4u>(ctx, &aot_mem) && ctx.pc == 0x088F3ED8u) goto L_088F3ED8;
    return;
L_088F3ED8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29720));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F3F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088F3F00u) goto L_088F3F00;
    return;
L_088F3F00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3F28;
      }
      goto L_088F3F1C;
    }
L_088F3F1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F3F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088F3F28u) goto L_088F3F28;
    return;
L_088F3F28:
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
L_088F3F44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088F3F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 7u, 0x088F406Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3F5Cu) goto L_088F3F5C;
    return;
L_088F3F5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29724)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088F3F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088F3F70u) goto L_088F3F70;
    return;
L_088F3F70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3F84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29724)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3FC4;
      }
      goto L_088F3F9C;
    }
L_088F3F9C:
    ctx.set_gpr(31, 0x088F3FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088F3FA4u) goto L_088F3FA4;
    return;
L_088F3FA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088F3FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3FB0u) goto L_088F3FB0;
    return;
L_088F3FB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088F3FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088F3FBCu) goto L_088F3FBC;
    return;
L_088F3FBC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(29724), ctx.gpr[2]);
    goto L_088F3FC4;
L_088F3FC4:
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
L_088F3FDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29724)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 2u, 0x088F4008u>(ctx, &aot_mem); return;
      }
      goto L_088F3FF4;
    }
L_088F3FF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.pc = 0x088F4000u; return;
}

void recomp_unit_0059(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0059_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_59(Runtime &runtime) {
    runtime.register_generated_unit(59u, 0x088F0000u, 16384u, &recomp_unit_0059, &recomp_unit_0059_entry);
    runtime.register_function(0x088F0000u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0010u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0018u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0030u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0044u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0058u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0074u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F008Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F009Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0100u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0110u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0120u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0130u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0148u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F015Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0170u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0188u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F019Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0244u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0254u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0264u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0288u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F02A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F02B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F02C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F02ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0318u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0328u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0338u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0350u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0358u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0364u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0370u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0378u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0390u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0418u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F043Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0444u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0450u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0458u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0464u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F046Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0478u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0480u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0498u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F04B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F04C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F04D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F052Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F053Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F054Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F055Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0584u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0600u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F060Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0628u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0634u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0668u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0684u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F069Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0708u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0710u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0728u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0740u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0750u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0760u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0804u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F080Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0824u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F083Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F084Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F085Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0900u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F091Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0944u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F095Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0974u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F097Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0988u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0994u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F099Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C50u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C68u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C90u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CF4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0DB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0DC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0DD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0DE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E34u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0EB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0EC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0EC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0EDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0EE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0EFCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F1Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F8Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1004u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F100Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1018u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1024u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F102Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1044u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F105Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1070u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1078u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1090u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F114Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F115Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F116Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F117Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F118Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1218u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1234u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1240u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F125Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1274u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1288u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1290u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1314u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F132Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F133Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F134Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1400u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F141Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F142Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1438u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1454u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1464u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F148Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F14A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F14C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F14D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F14E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1500u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1508u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1514u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1520u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1528u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1540u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1558u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F156Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1574u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F158Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F15A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F15B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F15D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F15E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F15F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1608u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F165Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F166Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F167Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F168Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1700u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1718u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1730u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1748u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1770u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F177Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1784u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F178Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F179Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1840u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1850u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1860u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1870u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1894u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1904u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1914u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1924u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F193Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1950u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1964u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F197Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1984u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1990u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F199Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F19A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F19BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F19D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F19E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F19F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A90u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AA0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AF4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BF4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C50u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D68u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1DB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1DCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1DECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E50u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1ED8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F90u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FFCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F200Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2034u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F204Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2064u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2078u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2080u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2098u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2108u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2110u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F212Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2144u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F215Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F216Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F217Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2208u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2230u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F224Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F225Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2268u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2280u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2290u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F22A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F22ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F22C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F22D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F22FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2318u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2330u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2344u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F234Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2364u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F237Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2404u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2410u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2418u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2420u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2430u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2440u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F244Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2454u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F245Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F246Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2488u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F24A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F24B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F24C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F24D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2534u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2544u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2554u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2564u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2590u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2620u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2650u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F266Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2678u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2688u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F269Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2710u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2730u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2748u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F275Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2770u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2788u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2790u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F279Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2814u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F282Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2874u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F289Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2904u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2910u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2918u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2924u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F292Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2938u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2940u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F294Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2954u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2960u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2968u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2974u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F297Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2988u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2990u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F299Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A74u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2ABCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AD8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B58u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B68u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C8Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D04u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D58u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2DB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2DC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2DE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2DF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E58u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E74u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2EA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2EC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2ED4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2EE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2FA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2FBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2FD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2FE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3000u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3018u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3028u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3038u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3094u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F310Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F311Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F312Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3144u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3158u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3160u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3178u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F318Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3248u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3258u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3268u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3278u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F329Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F32B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F32E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F32F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3310u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3324u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3338u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3350u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3364u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F336Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3384u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F339Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3404u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F340Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3418u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3420u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F342Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3434u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3440u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3448u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3454u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F345Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3468u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3470u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3488u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F34A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F34B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F34C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F351Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F352Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F353Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F354Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3574u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3590u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3618u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3624u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3638u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3648u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3658u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3670u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F368Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3698u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3700u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F372Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F374Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3760u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3798u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3810u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3828u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F384Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3854u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F386Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3884u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3914u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3928u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F393Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3958u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3970u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3980u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3990u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3ACCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B04u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3BB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3BC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3BD8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3BE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CD8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D8Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3DA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3DC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3DD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3DE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3EB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3ECCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3ED8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F1Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FF4u, &recomp_unit_0059, "recomp_unit_0059");
}
} // namespace psprecomp
