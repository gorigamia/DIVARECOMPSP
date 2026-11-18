#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0112[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 4, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 15, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20,
    0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 37, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 47, 48, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0,
    0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0,
    72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0,
    0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86,
    0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0,
    0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0,
    0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0,
    109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0,
    0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0,
    139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0,
    146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 169, 0, 0, 170, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 175, 0,
    0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 183,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0,
    214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221,
    0, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233,
    0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0,
    243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0,
    0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0,
    0, 264, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0,
    0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284,
    0, 0, 285, 0, 0, 286, 0, 0, 287, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 314,
    0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0,
    0, 320, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 327, 0,
    0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333,
    334, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 0, 0,
    361, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 365, 0, 366, 0, 0, 0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373,
    0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0,
    379, 0, 0, 380, 0, 381, 0, 0, 382, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0,
    0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 408, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 412, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 0,
    0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 429, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0,
    433, 0, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 439, 0, 0, 440, 0,
    441, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    444, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 453,
    0, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 459, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0, 464, 0, 465, 466, 0, 467, 0, 468, 0, 0, 469, 0, 0, 470, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0,
    0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 483, 0,
    484, 0, 0, 485, 0, 0, 0, 0, 0, 486, 487, 0, 0, 488, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 491, 492, 0, 0, 493, 0, 0, 494,
    0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0,
    0, 499, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 505, 0, 506, 0, 0, 507,
    0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 0,
    0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 516, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0,
    522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0,
    528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0,
    0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0,
    0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 541, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547,
    0, 0, 0, 548, 0, 0, 0, 549, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 562,
    0, 563, 0, 564, 0, 565, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0,
    0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0,
    578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 582, 0,
    0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588,
    0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0,
    0, 598, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0,
    0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 608, 0, 0, 609, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0,
    0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 0,
    0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0,
    0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631,
    0, 0, 0, 632, 0, 633, 634, 0, 0, 635, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 639, 0, 0, 0,
    0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0,
    646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0,
    0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 657, 0, 658, 659, 0, 0, 660, 0, 661, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0,
    0, 0, 668, 0, 669, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 674, 0, 0,
    0, 675, 0, 0, 676, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0,
    0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 687, 0, 0, 688, 0, 689, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 692, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 697, 698, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0,
    0, 701, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 709, 0, 0, 710,
    0, 0, 711, 0, 0, 712, 0, 713, 0, 714, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 719, 0, 720,
    0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 724, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0,
    0, 0, 0, 0, 729, 730, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 736, 0, 0, 737, 0,
    738, 0, 0, 739, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 745,
    0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 751, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 755, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0,
    0, 0, 759, 0, 0, 0, 0, 0, 760, 761, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 764, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 777, 0,
    0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 784,
    0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 788, 0, 789, 790, 0, 0, 0, 791, 0,
    0, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 795, 0, 0, 796, 0, 797, 0, 0, 798, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 805, 0, 0, 806, 0, 0, 0, 807, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 809, 0, 810, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0,
    0, 814, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819,
    0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 826,
};
void recomp_unit_0112_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C4000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0112[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C4000;
    case 2u: goto L_089C4138;
    case 3u: goto L_089C413C;
    case 4u: goto L_089C414C;
    case 5u: goto L_089C4150;
    case 6u: goto L_089C4160;
    case 7u: goto L_089C4170;
    case 8u: goto L_089C41B4;
    case 9u: goto L_089C41D4;
    case 10u: goto L_089C41E8;
    case 11u: goto L_089C41F4;
    case 12u: goto L_089C4344;
    case 13u: goto L_089C445C;
    case 14u: goto L_089C4470;
    case 15u: goto L_089C4474;
    case 16u: goto L_089C4484;
    case 17u: goto L_089C44A8;
    case 18u: goto L_089C44C4;
    case 19u: goto L_089C44E0;
    case 20u: goto L_089C44FC;
    case 21u: goto L_089C4504;
    case 22u: goto L_089C4520;
    case 23u: goto L_089C453C;
    case 24u: goto L_089C4544;
    case 25u: goto L_089C4560;
    case 26u: goto L_089C457C;
    case 27u: goto L_089C4590;
    case 28u: goto L_089C45A8;
    case 29u: goto L_089C45C4;
    case 30u: goto L_089C45DC;
    case 31u: goto L_089C4608;
    case 32u: goto L_089C4620;
    case 33u: goto L_089C4638;
    case 34u: goto L_089C464C;
    case 35u: goto L_089C4658;
    case 36u: goto L_089C4660;
    case 37u: goto L_089C466C;
    case 38u: goto L_089C4674;
    case 39u: goto L_089C46D8;
    case 40u: goto L_089C46F0;
    case 41u: goto L_089C4700;
    case 42u: goto L_089C4718;
    case 43u: goto L_089C4740;
    case 44u: goto L_089C4750;
    case 45u: goto L_089C475C;
    case 46u: goto L_089C4768;
    case 47u: goto L_089C4770;
    case 48u: goto L_089C4774;
    case 49u: goto L_089C4790;
    case 50u: goto L_089C47A8;
    case 51u: goto L_089C47C0;
    case 52u: goto L_089C47D4;
    case 53u: goto L_089C47DC;
    case 54u: goto L_089C482C;
    case 55u: goto L_089C4834;
    case 56u: goto L_089C4848;
    case 57u: goto L_089C4854;
    case 58u: goto L_089C4874;
    case 59u: goto L_089C4894;
    case 60u: goto L_089C48A8;
    case 61u: goto L_089C48B0;
    case 62u: goto L_089C48CC;
    case 63u: goto L_089C48D4;
    case 64u: goto L_089C48F0;
    case 65u: goto L_089C48F8;
    case 66u: goto L_089C4914;
    case 67u: goto L_089C491C;
    case 68u: goto L_089C4938;
    case 69u: goto L_089C4940;
    case 70u: goto L_089C495C;
    case 71u: goto L_089C4964;
    case 72u: goto L_089C4980;
    case 73u: goto L_089C4988;
    case 74u: goto L_089C49A4;
    case 75u: goto L_089C49AC;
    case 76u: goto L_089C49C8;
    case 77u: goto L_089C49D0;
    case 78u: goto L_089C49EC;
    case 79u: goto L_089C49F4;
    case 80u: goto L_089C4A10;
    case 81u: goto L_089C4A18;
    case 82u: goto L_089C4A34;
    case 83u: goto L_089C4A3C;
    case 84u: goto L_089C4A58;
    case 85u: goto L_089C4A60;
    case 86u: goto L_089C4A7C;
    case 87u: goto L_089C4A84;
    case 88u: goto L_089C4AA0;
    case 89u: goto L_089C4AA8;
    case 90u: goto L_089C4AC4;
    case 91u: goto L_089C4ACC;
    case 92u: goto L_089C4AE8;
    case 93u: goto L_089C4AF0;
    case 94u: goto L_089C4B0C;
    case 95u: goto L_089C4B14;
    case 96u: goto L_089C4B30;
    case 97u: goto L_089C4B38;
    case 98u: goto L_089C4B54;
    case 99u: goto L_089C4B64;
    case 100u: goto L_089C4B74;
    case 101u: goto L_089C4B84;
    case 102u: goto L_089C4B94;
    case 103u: goto L_089C4BA8;
    case 104u: goto L_089C4BB4;
    case 105u: goto L_089C4BC8;
    case 106u: goto L_089C4BD8;
    case 107u: goto L_089C4BE8;
    case 108u: goto L_089C4BF8;
    case 109u: goto L_089C4C00;
    case 110u: goto L_089C4C18;
    case 111u: goto L_089C4C28;
    case 112u: goto L_089C4C40;
    case 113u: goto L_089C4C50;
    case 114u: goto L_089C4C68;
    case 115u: goto L_089C4C78;
    case 116u: goto L_089C4C90;
    case 117u: goto L_089C4CA0;
    case 118u: goto L_089C4CB4;
    case 119u: goto L_089C4CC0;
    case 120u: goto L_089C4CC8;
    case 121u: goto L_089C4CE0;
    case 122u: goto L_089C4CF8;
    case 123u: goto L_089C4D10;
    case 124u: goto L_089C4D20;
    case 125u: goto L_089C4D3C;
    case 126u: goto L_089C4D50;
    case 127u: goto L_089C4D64;
    case 128u: goto L_089C4D6C;
    case 129u: goto L_089C4D84;
    case 130u: goto L_089C4D8C;
    case 131u: goto L_089C4DA0;
    case 132u: goto L_089C4DAC;
    case 133u: goto L_089C4DBC;
    case 134u: goto L_089C4DC8;
    case 135u: goto L_089C4DD4;
    case 136u: goto L_089C4DE0;
    case 137u: goto L_089C4DE8;
    case 138u: goto L_089C4DF4;
    case 139u: goto L_089C4E00;
    case 140u: goto L_089C4E0C;
    case 141u: goto L_089C4E18;
    case 142u: goto L_089C4E30;
    case 143u: goto L_089C4E3C;
    case 144u: goto L_089C4E64;
    case 145u: goto L_089C4E74;
    case 146u: goto L_089C4E80;
    case 147u: goto L_089C4E94;
    case 148u: goto L_089C4EB4;
    case 149u: goto L_089C4EC4;
    case 150u: goto L_089C4ED0;
    case 151u: goto L_089C4EDC;
    case 152u: goto L_089C4EE4;
    case 153u: goto L_089C4EF8;
    case 154u: goto L_089C4F14;
    case 155u: goto L_089C4F20;
    case 156u: goto L_089C4F30;
    case 157u: goto L_089C4F4C;
    case 158u: goto L_089C4F70;
    case 159u: goto L_089C4F7C;
    case 160u: goto L_089C4FA0;
    case 161u: goto L_089C4FBC;
    case 162u: goto L_089C4FC8;
    case 163u: goto L_089C4FD8;
    case 164u: goto L_089C50D8;
    case 165u: goto L_089C50F4;
    case 166u: goto L_089C5100;
    case 167u: goto L_089C5108;
    case 168u: goto L_089C5138;
    case 169u: goto L_089C513C;
    case 170u: goto L_089C5148;
    case 171u: goto L_089C514C;
    case 172u: goto L_089C5158;
    case 173u: goto L_089C5164;
    case 174u: goto L_089C5170;
    case 175u: goto L_089C5178;
    case 176u: goto L_089C5184;
    case 177u: goto L_089C518C;
    case 178u: goto L_089C51A8;
    case 179u: goto L_089C51C4;
    case 180u: goto L_089C51CC;
    case 181u: goto L_089C51E4;
    case 182u: goto L_089C51F8;
    case 183u: goto L_089C51FC;
    case 184u: goto L_089C5230;
    case 185u: goto L_089C5248;
    case 186u: goto L_089C5258;
    case 187u: goto L_089C5270;
    case 188u: goto L_089C5280;
    case 189u: goto L_089C5288;
    case 190u: goto L_089C5290;
    case 191u: goto L_089C52B8;
    case 192u: goto L_089C52C8;
    case 193u: goto L_089C52D4;
    case 194u: goto L_089C52F0;
    case 195u: goto L_089C5308;
    case 196u: goto L_089C5320;
    case 197u: goto L_089C5344;
    case 198u: goto L_089C534C;
    case 199u: goto L_089C5364;
    case 200u: goto L_089C5378;
    case 201u: goto L_089C5398;
    case 202u: goto L_089C53B8;
    case 203u: goto L_089C53C0;
    case 204u: goto L_089C5404;
    case 205u: goto L_089C5410;
    case 206u: goto L_089C5418;
    case 207u: goto L_089C5428;
    case 208u: goto L_089C5434;
    case 209u: goto L_089C543C;
    case 210u: goto L_089C5450;
    case 211u: goto L_089C5458;
    case 212u: goto L_089C5464;
    case 213u: goto L_089C5474;
    case 214u: goto L_089C5480;
    case 215u: goto L_089C5490;
    case 216u: goto L_089C549C;
    case 217u: goto L_089C54A8;
    case 218u: goto L_089C54D0;
    case 219u: goto L_089C54E4;
    case 220u: goto L_089C54F0;
    case 221u: goto L_089C54FC;
    case 222u: goto L_089C5508;
    case 223u: goto L_089C5510;
    case 224u: goto L_089C5518;
    case 225u: goto L_089C5524;
    case 226u: goto L_089C5530;
    case 227u: goto L_089C5538;
    case 228u: goto L_089C5540;
    case 229u: goto L_089C554C;
    case 230u: goto L_089C5554;
    case 231u: goto L_089C5564;
    case 232u: goto L_089C5570;
    case 233u: goto L_089C557C;
    case 234u: goto L_089C5584;
    case 235u: goto L_089C5594;
    case 236u: goto L_089C55A4;
    case 237u: goto L_089C55B0;
    case 238u: goto L_089C55C0;
    case 239u: goto L_089C55CC;
    case 240u: goto L_089C55D8;
    case 241u: goto L_089C55E8;
    case 242u: goto L_089C55F4;
    case 243u: goto L_089C5600;
    case 244u: goto L_089C560C;
    case 245u: goto L_089C5618;
    case 246u: goto L_089C5624;
    case 247u: goto L_089C5630;
    case 248u: goto L_089C563C;
    case 249u: goto L_089C5648;
    case 250u: goto L_089C5650;
    case 251u: goto L_089C565C;
    case 252u: goto L_089C5664;
    case 253u: goto L_089C5674;
    case 254u: goto L_089C5688;
    case 255u: goto L_089C5694;
    case 256u: goto L_089C56A0;
    case 257u: goto L_089C56A8;
    case 258u: goto L_089C56B8;
    case 259u: goto L_089C56C8;
    case 260u: goto L_089C56D4;
    case 261u: goto L_089C56E0;
    case 262u: goto L_089C56EC;
    case 263u: goto L_089C56F8;
    case 264u: goto L_089C5704;
    case 265u: goto L_089C5710;
    case 266u: goto L_089C571C;
    case 267u: goto L_089C5724;
    case 268u: goto L_089C5734;
    case 269u: goto L_089C5744;
    case 270u: goto L_089C5750;
    case 271u: goto L_089C575C;
    case 272u: goto L_089C576C;
    case 273u: goto L_089C5778;
    case 274u: goto L_089C5784;
    case 275u: goto L_089C5790;
    case 276u: goto L_089C579C;
    case 277u: goto L_089C57A8;
    case 278u: goto L_089C57B4;
    case 279u: goto L_089C57C0;
    case 280u: goto L_089C57CC;
    case 281u: goto L_089C57D8;
    case 282u: goto L_089C57E4;
    case 283u: goto L_089C57F0;
    case 284u: goto L_089C57FC;
    case 285u: goto L_089C5808;
    case 286u: goto L_089C5814;
    case 287u: goto L_089C5820;
    case 288u: goto L_089C5824;
    case 289u: goto L_089C582C;
    case 290u: goto L_089C5878;
    case 291u: goto L_089C5884;
    case 292u: goto L_089C589C;
    case 293u: goto L_089C58B4;
    case 294u: goto L_089C58C0;
    case 295u: goto L_089C58C8;
    case 296u: goto L_089C58EC;
    case 297u: goto L_089C58F4;
    case 298u: goto L_089C5924;
    case 299u: goto L_089C5934;
    case 300u: goto L_089C593C;
    case 301u: goto L_089C5948;
    case 302u: goto L_089C5968;
    case 303u: goto L_089C597C;
    case 304u: goto L_089C5990;
    case 305u: goto L_089C59C0;
    case 306u: goto L_089C59D0;
    case 307u: goto L_089C59D8;
    case 308u: goto L_089C59E4;
    case 309u: goto L_089C5A1C;
    case 310u: goto L_089C5A28;
    case 311u: goto L_089C5A58;
    case 312u: goto L_089C5A68;
    case 313u: goto L_089C5A70;
    case 314u: goto L_089C5A7C;
    case 315u: goto L_089C5A8C;
    case 316u: goto L_089C5AAC;
    case 317u: goto L_089C5AB8;
    case 318u: goto L_089C5AC4;
    case 319u: goto L_089C5AF4;
    case 320u: goto L_089C5B04;
    case 321u: goto L_089C5B0C;
    case 322u: goto L_089C5B18;
    case 323u: goto L_089C5B24;
    case 324u: goto L_089C5B30;
    case 325u: goto L_089C5B60;
    case 326u: goto L_089C5B70;
    case 327u: goto L_089C5B78;
    case 328u: goto L_089C5B84;
    case 329u: goto L_089C5B9C;
    case 330u: goto L_089C5BAC;
    case 331u: goto L_089C5BDC;
    case 332u: goto L_089C5BEC;
    case 333u: goto L_089C5BFC;
    case 334u: goto L_089C5C00;
    case 335u: goto L_089C5C14;
    case 336u: goto L_089C5C20;
    case 337u: goto L_089C5C4C;
    case 338u: goto L_089C5C5C;
    case 339u: goto L_089C5C64;
    case 340u: goto L_089C5C70;
    case 341u: goto L_089C5C80;
    case 342u: goto L_089C5CB4;
    case 343u: goto L_089C5CCC;
    case 344u: goto L_089C5CD4;
    case 345u: goto L_089C5CE8;
    case 346u: goto L_089C5CF4;
    case 347u: goto L_089C5D24;
    case 348u: goto L_089C5D34;
    case 349u: goto L_089C5D3C;
    case 350u: goto L_089C5D48;
    case 351u: goto L_089C5D50;
    case 352u: goto L_089C5D5C;
    case 353u: goto L_089C5D7C;
    case 354u: goto L_089C5D98;
    case 355u: goto L_089C5DA4;
    case 356u: goto L_089C5DB4;
    case 357u: goto L_089C5DC8;
    case 358u: goto L_089C5DD8;
    case 359u: goto L_089C5DE8;
    case 360u: goto L_089C5DF0;
    case 361u: goto L_089C5E00;
    case 362u: goto L_089C5E04;
    case 363u: goto L_089C5E18;
    case 364u: goto L_089C5E2C;
    case 365u: goto L_089C5E84;
    case 366u: goto L_089C5E8C;
    case 367u: goto L_089C5E9C;
    case 368u: goto L_089C5EA4;
    case 369u: goto L_089C5EB4;
    case 370u: goto L_089C5EC0;
    case 371u: goto L_089C5ECC;
    case 372u: goto L_089C5EDC;
    case 373u: goto L_089C5EFC;
    case 374u: goto L_089C5F0C;
    case 375u: goto L_089C5F28;
    case 376u: goto L_089C5F38;
    case 377u: goto L_089C5F68;
    case 378u: goto L_089C5F78;
    case 379u: goto L_089C5F80;
    case 380u: goto L_089C5F8C;
    case 381u: goto L_089C5F94;
    case 382u: goto L_089C5FA0;
    case 383u: goto L_089C5FA8;
    case 384u: goto L_089C5FB4;
    case 385u: goto L_089C5FBC;
    case 386u: goto L_089C5FC4;
    case 387u: goto L_089C5FD4;
    case 388u: goto L_089C5FF8;
    case 389u: goto L_089C6004;
    case 390u: goto L_089C6020;
    case 391u: goto L_089C6038;
    case 392u: goto L_089C6044;
    case 393u: goto L_089C604C;
    case 394u: goto L_089C6054;
    case 395u: goto L_089C6064;
    case 396u: goto L_089C6070;
    case 397u: goto L_089C6094;
    case 398u: goto L_089C60A8;
    case 399u: goto L_089C60CC;
    case 400u: goto L_089C60DC;
    case 401u: goto L_089C60E4;
    case 402u: goto L_089C60FC;
    case 403u: goto L_089C6120;
    case 404u: goto L_089C6138;
    case 405u: goto L_089C6148;
    case 406u: goto L_089C6154;
    case 407u: goto L_089C6160;
    case 408u: goto L_089C6168;
    case 409u: goto L_089C617C;
    case 410u: goto L_089C61A0;
    case 411u: goto L_089C61A8;
    case 412u: goto L_089C61C4;
    case 413u: goto L_089C61C8;
    case 414u: goto L_089C61D8;
    case 415u: goto L_089C61E8;
    case 416u: goto L_089C6200;
    case 417u: goto L_089C6224;
    case 418u: goto L_089C6230;
    case 419u: goto L_089C623C;
    case 420u: goto L_089C624C;
    case 421u: goto L_089C6258;
    case 422u: goto L_089C6260;
    case 423u: goto L_089C626C;
    case 424u: goto L_089C6274;
    case 425u: goto L_089C6288;
    case 426u: goto L_089C629C;
    case 427u: goto L_089C62AC;
    case 428u: goto L_089C62C4;
    case 429u: goto L_089C62C8;
    case 430u: goto L_089C62D0;
    case 431u: goto L_089C62E8;
    case 432u: goto L_089C62F4;
    case 433u: goto L_089C6300;
    case 434u: goto L_089C630C;
    case 435u: goto L_089C6314;
    case 436u: goto L_089C6324;
    case 437u: goto L_089C6354;
    case 438u: goto L_089C6364;
    case 439u: goto L_089C636C;
    case 440u: goto L_089C6378;
    case 441u: goto L_089C6380;
    case 442u: goto L_089C6384;
    case 443u: goto L_089C63B8;
    case 444u: goto L_089C6400;
    case 445u: goto L_089C640C;
    case 446u: goto L_089C641C;
    case 447u: goto L_089C642C;
    case 448u: goto L_089C6438;
    case 449u: goto L_089C6448;
    case 450u: goto L_089C6454;
    case 451u: goto L_089C6460;
    case 452u: goto L_089C6474;
    case 453u: goto L_089C647C;
    case 454u: goto L_089C648C;
    case 455u: goto L_089C6498;
    case 456u: goto L_089C64A4;
    case 457u: goto L_089C64B8;
    case 458u: goto L_089C64D4;
    case 459u: goto L_089C6504;
    case 460u: goto L_089C6514;
    case 461u: goto L_089C651C;
    case 462u: goto L_089C6528;
    case 463u: goto L_089C653C;
    case 464u: goto L_089C6544;
    case 465u: goto L_089C654C;
    case 466u: goto L_089C6550;
    case 467u: goto L_089C6558;
    case 468u: goto L_089C6560;
    case 469u: goto L_089C656C;
    case 470u: goto L_089C6578;
    case 471u: goto L_089C65A4;
    case 472u: goto L_089C65B4;
    case 473u: goto L_089C65BC;
    case 474u: goto L_089C65C8;
    case 475u: goto L_089C65D8;
    case 476u: goto L_089C65E0;
    case 477u: goto L_089C6604;
    case 478u: goto L_089C6614;
    case 479u: goto L_089C6624;
    case 480u: goto L_089C664C;
    case 481u: goto L_089C665C;
    case 482u: goto L_089C666C;
    case 483u: goto L_089C6678;
    case 484u: goto L_089C6680;
    case 485u: goto L_089C668C;
    case 486u: goto L_089C66A4;
    case 487u: goto L_089C66A8;
    case 488u: goto L_089C66B4;
    case 489u: goto L_089C66BC;
    case 490u: goto L_089C66C8;
    case 491u: goto L_089C66E0;
    case 492u: goto L_089C66E4;
    case 493u: goto L_089C66F0;
    case 494u: goto L_089C66FC;
    case 495u: goto L_089C6714;
    case 496u: goto L_089C6740;
    case 497u: goto L_089C6770;
    case 498u: goto L_089C6778;
    case 499u: goto L_089C6784;
    case 500u: goto L_089C6790;
    case 501u: goto L_089C67A4;
    case 502u: goto L_089C67BC;
    case 503u: goto L_089C67D4;
    case 504u: goto L_089C67DC;
    case 505u: goto L_089C67E8;
    case 506u: goto L_089C67F0;
    case 507u: goto L_089C67FC;
    case 508u: goto L_089C6814;
    case 509u: goto L_089C6828;
    case 510u: goto L_089C6858;
    case 511u: goto L_089C6860;
    case 512u: goto L_089C6874;
    case 513u: goto L_089C6894;
    case 514u: goto L_089C68A0;
    case 515u: goto L_089C68AC;
    case 516u: goto L_089C68BC;
    case 517u: goto L_089C68C4;
    case 518u: goto L_089C68D0;
    case 519u: goto L_089C68DC;
    case 520u: goto L_089C68E8;
    case 521u: goto L_089C68F4;
    case 522u: goto L_089C6900;
    case 523u: goto L_089C6910;
    case 524u: goto L_089C692C;
    case 525u: goto L_089C6948;
    case 526u: goto L_089C6964;
    case 527u: goto L_089C6974;
    case 528u: goto L_089C6980;
    case 529u: goto L_089C699C;
    case 530u: goto L_089C69B8;
    case 531u: goto L_089C69D8;
    case 532u: goto L_089C69F4;
    case 533u: goto L_089C6A14;
    case 534u: goto L_089C6A34;
    case 535u: goto L_089C6A50;
    case 536u: goto L_089C6A70;
    case 537u: goto L_089C6A90;
    case 538u: goto L_089C6AB0;
    case 539u: goto L_089C6AC0;
    case 540u: goto L_089C6AC8;
    case 541u: goto L_089C6B08;
    case 542u: goto L_089C6B14;
    case 543u: goto L_089C6B24;
    case 544u: goto L_089C6B44;
    case 545u: goto L_089C6B4C;
    case 546u: goto L_089C6B74;
    case 547u: goto L_089C6B7C;
    case 548u: goto L_089C6B8C;
    case 549u: goto L_089C6B9C;
    case 550u: goto L_089C6BA4;
    case 551u: goto L_089C6BB0;
    case 552u: goto L_089C6BD0;
    case 553u: goto L_089C6C50;
    case 554u: goto L_089C6C58;
    case 555u: goto L_089C6C88;
    case 556u: goto L_089C6C98;
    case 557u: goto L_089C6CA8;
    case 558u: goto L_089C6CB0;
    case 559u: goto L_089C6CBC;
    case 560u: goto L_089C6CD8;
    case 561u: goto L_089C6CE0;
    case 562u: goto L_089C6CFC;
    case 563u: goto L_089C6D04;
    case 564u: goto L_089C6D0C;
    case 565u: goto L_089C6D14;
    case 566u: goto L_089C6D20;
    case 567u: goto L_089C6D3C;
    case 568u: goto L_089C6D48;
    case 569u: goto L_089C6D54;
    case 570u: goto L_089C6D78;
    case 571u: goto L_089C6D84;
    case 572u: goto L_089C6DA0;
    case 573u: goto L_089C6DC0;
    case 574u: goto L_089C6DD4;
    case 575u: goto L_089C6DE0;
    case 576u: goto L_089C6DEC;
    case 577u: goto L_089C6DF8;
    case 578u: goto L_089C6E00;
    case 579u: goto L_089C6E0C;
    case 580u: goto L_089C6E64;
    case 581u: goto L_089C6E70;
    case 582u: goto L_089C6E78;
    case 583u: goto L_089C6E84;
    case 584u: goto L_089C6EB0;
    case 585u: goto L_089C6EBC;
    case 586u: goto L_089C6EC4;
    case 587u: goto L_089C6ED0;
    case 588u: goto L_089C6EFC;
    case 589u: goto L_089C6F08;
    case 590u: goto L_089C6F10;
    case 591u: goto L_089C6F20;
    case 592u: goto L_089C6F30;
    case 593u: goto L_089C6F38;
    case 594u: goto L_089C6F44;
    case 595u: goto L_089C6F50;
    case 596u: goto L_089C6F5C;
    case 597u: goto L_089C6F74;
    case 598u: goto L_089C6F84;
    case 599u: goto L_089C6F8C;
    case 600u: goto L_089C6F98;
    case 601u: goto L_089C6FA4;
    case 602u: goto L_089C6FB4;
    case 603u: goto L_089C6FD4;
    case 604u: goto L_089C6FF8;
    case 605u: goto L_089C700C;
    case 606u: goto L_089C701C;
    case 607u: goto L_089C702C;
    case 608u: goto L_089C7034;
    case 609u: goto L_089C7040;
    case 610u: goto L_089C7048;
    case 611u: goto L_089C7054;
    case 612u: goto L_089C7070;
    case 613u: goto L_089C7094;
    case 614u: goto L_089C70A0;
    case 615u: goto L_089C70BC;
    case 616u: goto L_089C70D8;
    case 617u: goto L_089C70E4;
    case 618u: goto L_089C70F0;
    case 619u: goto L_089C710C;
    case 620u: goto L_089C711C;
    case 621u: goto L_089C713C;
    case 622u: goto L_089C7148;
    case 623u: goto L_089C7164;
    case 624u: goto L_089C716C;
    case 625u: goto L_089C718C;
    case 626u: goto L_089C71A0;
    case 627u: goto L_089C71B4;
    case 628u: goto L_089C71C4;
    case 629u: goto L_089C71CC;
    case 630u: goto L_089C71EC;
    case 631u: goto L_089C71FC;
    case 632u: goto L_089C720C;
    case 633u: goto L_089C7214;
    case 634u: goto L_089C7218;
    case 635u: goto L_089C7224;
    case 636u: goto L_089C7228;
    case 637u: goto L_089C7258;
    case 638u: goto L_089C7268;
    case 639u: goto L_089C7270;
    case 640u: goto L_089C7290;
    case 641u: goto L_089C72A0;
    case 642u: goto L_089C72B8;
    case 643u: goto L_089C72C8;
    case 644u: goto L_089C72D0;
    case 645u: goto L_089C72F0;
    case 646u: goto L_089C7300;
    case 647u: goto L_089C733C;
    case 648u: goto L_089C734C;
    case 649u: goto L_089C7354;
    case 650u: goto L_089C7364;
    case 651u: goto L_089C7374;
    case 652u: goto L_089C7384;
    case 653u: goto L_089C7394;
    case 654u: goto L_089C739C;
    case 655u: goto L_089C73AC;
    case 656u: goto L_089C73BC;
    case 657u: goto L_089C73CC;
    case 658u: goto L_089C73D4;
    case 659u: goto L_089C73D8;
    case 660u: goto L_089C73E4;
    case 661u: goto L_089C73EC;
    case 662u: goto L_089C7420;
    case 663u: goto L_089C7430;
    case 664u: goto L_089C7438;
    case 665u: goto L_089C7448;
    case 666u: goto L_089C7458;
    case 667u: goto L_089C7478;
    case 668u: goto L_089C7488;
    case 669u: goto L_089C7490;
    case 670u: goto L_089C74A0;
    case 671u: goto L_089C74B0;
    case 672u: goto L_089C74D8;
    case 673u: goto L_089C74E8;
    case 674u: goto L_089C74F4;
    case 675u: goto L_089C7504;
    case 676u: goto L_089C7510;
    case 677u: goto L_089C7518;
    case 678u: goto L_089C7524;
    case 679u: goto L_089C753C;
    case 680u: goto L_089C7568;
    case 681u: goto L_089C7578;
    case 682u: goto L_089C758C;
    case 683u: goto L_089C75A0;
    case 684u: goto L_089C75B0;
    case 685u: goto L_089C75C4;
    case 686u: goto L_089C75D0;
    case 687u: goto L_089C75DC;
    case 688u: goto L_089C75E8;
    case 689u: goto L_089C75F0;
    case 690u: goto L_089C7618;
    case 691u: goto L_089C7624;
    case 692u: goto L_089C7630;
    case 693u: goto L_089C7638;
    case 694u: goto L_089C7648;
    case 695u: goto L_089C7658;
    case 696u: goto L_089C7668;
    case 697u: goto L_089C7670;
    case 698u: goto L_089C7674;
    case 699u: goto L_089C76A8;
    case 700u: goto L_089C76E4;
    case 701u: goto L_089C7704;
    case 702u: goto L_089C7710;
    case 703u: goto L_089C7724;
    case 704u: goto L_089C7734;
    case 705u: goto L_089C7740;
    case 706u: goto L_089C774C;
    case 707u: goto L_089C7758;
    case 708u: goto L_089C7764;
    case 709u: goto L_089C7770;
    case 710u: goto L_089C777C;
    case 711u: goto L_089C7788;
    case 712u: goto L_089C7794;
    case 713u: goto L_089C779C;
    case 714u: goto L_089C77A4;
    case 715u: goto L_089C77B4;
    case 716u: goto L_089C77C4;
    case 717u: goto L_089C77D4;
    case 718u: goto L_089C77E8;
    case 719u: goto L_089C77F4;
    case 720u: goto L_089C77FC;
    case 721u: goto L_089C7808;
    case 722u: goto L_089C7814;
    case 723u: goto L_089C7830;
    case 724u: goto L_089C7838;
    case 725u: goto L_089C7840;
    case 726u: goto L_089C7858;
    case 727u: goto L_089C7868;
    case 728u: goto L_089C7878;
    case 729u: goto L_089C7890;
    case 730u: goto L_089C7894;
    case 731u: goto L_089C789C;
    case 732u: goto L_089C78B4;
    case 733u: goto L_089C78C0;
    case 734u: goto L_089C78D4;
    case 735u: goto L_089C78E0;
    case 736u: goto L_089C78EC;
    case 737u: goto L_089C78F8;
    case 738u: goto L_089C7900;
    case 739u: goto L_089C790C;
    case 740u: goto L_089C7918;
    case 741u: goto L_089C7928;
    case 742u: goto L_089C7940;
    case 743u: goto L_089C7958;
    case 744u: goto L_089C7970;
    case 745u: goto L_089C797C;
    case 746u: goto L_089C7994;
    case 747u: goto L_089C79A0;
    case 748u: goto L_089C79AC;
    case 749u: goto L_089C79C4;
    case 750u: goto L_089C79E4;
    case 751u: goto L_089C7A0C;
    case 752u: goto L_089C7A1C;
    case 753u: goto L_089C7A24;
    case 754u: goto L_089C7A40;
    case 755u: goto L_089C7A48;
    case 756u: goto L_089C7A50;
    case 757u: goto L_089C7A68;
    case 758u: goto L_089C7A78;
    case 759u: goto L_089C7A88;
    case 760u: goto L_089C7AA0;
    case 761u: goto L_089C7AA4;
    case 762u: goto L_089C7AAC;
    case 763u: goto L_089C7AC4;
    case 764u: goto L_089C7AD0;
    case 765u: goto L_089C7ADC;
    case 766u: goto L_089C7B24;
    case 767u: goto L_089C7B30;
    case 768u: goto L_089C7B3C;
    case 769u: goto L_089C7B48;
    case 770u: goto L_089C7B50;
    case 771u: goto L_089C7B68;
    case 772u: goto L_089C7B90;
    case 773u: goto L_089C7BA4;
    case 774u: goto L_089C7BB8;
    case 775u: goto L_089C7BCC;
    case 776u: goto L_089C7BE0;
    case 777u: goto L_089C7BF8;
    case 778u: goto L_089C7C14;
    case 779u: goto L_089C7C20;
    case 780u: goto L_089C7C30;
    case 781u: goto L_089C7C4C;
    case 782u: goto L_089C7C68;
    case 783u: goto L_089C7C70;
    case 784u: goto L_089C7C7C;
    case 785u: goto L_089C7C98;
    case 786u: goto L_089C7CA0;
    case 787u: goto L_089C7CBC;
    case 788u: goto L_089C7CDC;
    case 789u: goto L_089C7CE4;
    case 790u: goto L_089C7CE8;
    case 791u: goto L_089C7CF8;
    case 792u: goto L_089C7D08;
    case 793u: goto L_089C7D18;
    case 794u: goto L_089C7D24;
    case 795u: goto L_089C7D2C;
    case 796u: goto L_089C7D38;
    case 797u: goto L_089C7D40;
    case 798u: goto L_089C7D4C;
    case 799u: goto L_089C7D54;
    case 800u: goto L_089C7D80;
    case 801u: goto L_089C7DB0;
    case 802u: goto L_089C7DC0;
    case 803u: goto L_089C7DD8;
    case 804u: goto L_089C7DE8;
    case 805u: goto L_089C7E10;
    case 806u: goto L_089C7E1C;
    case 807u: goto L_089C7E2C;
    case 808u: goto L_089C7E34;
    case 809u: goto L_089C7E84;
    case 810u: goto L_089C7E8C;
    case 811u: goto L_089C7E98;
    case 812u: goto L_089C7EBC;
    case 813u: goto L_089C7EE8;
    case 814u: goto L_089C7F04;
    case 815u: goto L_089C7F18;
    case 816u: goto L_089C7F2C;
    case 817u: goto L_089C7F5C;
    case 818u: goto L_089C7F6C;
    case 819u: goto L_089C7F7C;
    case 820u: goto L_089C7F88;
    case 821u: goto L_089C7FA0;
    case 822u: goto L_089C7FA8;
    case 823u: goto L_089C7FB4;
    case 824u: goto L_089C7FC0;
    case 825u: goto L_089C7FE8;
    case 826u: goto L_089C7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C4000:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(26, 0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(26, 0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.fpr[22] = ctx.fpr[26] + ctx.fpr[25];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[23] = ctx.fpr[23] + ctx.fpr[24];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = ctx.fpr[23] + ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[15];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[19];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[18];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[21];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[29];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[31];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = ctx.fpr[12] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[4];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[6];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[5];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[7];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[9];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[8];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[11];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[10];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1336)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089C4138;
L_089C4138:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089C413C;
L_089C413C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 585u, 0x089BF2B8u>(ctx, &aot_mem); return;
      }
      goto L_089C414C;
    }
L_089C414C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089C4150;
L_089C4150:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 584u, 0x089BF29Cu>(ctx, &aot_mem); return;
      }
      goto L_089C4160;
    }
L_089C4160:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x089C4170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 368u, 0x08991FC4u>(ctx, &aot_mem) && ctx.pc == 0x089C4170u) goto L_089C4170;
    return;
L_089C4170:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1312), ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C41B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C41B4u) goto L_089C41B4;
    return;
L_089C41B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1312)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C41D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C41D4u) goto L_089C41D4;
    return;
L_089C41D4:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4474;
      }
      goto L_089C41E8;
    }
L_089C41E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C445C;
      }
      goto L_089C41F4;
    }
L_089C41F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.set_gpr(3, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1420)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[5];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[4];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1308), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = ctx.fpr[0] - ctx.fpr[5];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[4];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1276));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1288));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(1300));
    ctx.set_gpr(31, 0x089C4344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4344u) goto L_089C4344;
    return;
L_089C4344:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1276)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[2] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1276)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1276), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1280), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1364)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1364)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1276)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1364)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1276)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1364)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1276)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    goto L_089C445C;
L_089C445C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C41F4;
      }
      goto L_089C4470;
    }
L_089C4470:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089C4474;
L_089C4474:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C41E8;
      }
      goto L_089C4484;
    }
L_089C4484:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1312)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C44A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C44A8u) goto L_089C44A8;
    return;
L_089C44A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1400));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C44C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C44C4u) goto L_089C44C4;
    return;
L_089C44C4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1484));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C44E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C44E0u) goto L_089C44E0;
    return;
L_089C44E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C44FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C44FCu) goto L_089C44FC;
    return;
L_089C44FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C453C;
      }
      goto L_089C4504;
    }
L_089C4504:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1372));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4520u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4520u) goto L_089C4520;
    return;
L_089C4520:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C453Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C453Cu) goto L_089C453C;
    return;
L_089C453C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C457C;
      }
      goto L_089C4544;
    }
L_089C4544:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1316));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4560u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4560u) goto L_089C4560;
    return;
L_089C4560:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1428));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C457Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C457Cu) goto L_089C457C;
    return;
L_089C457C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4590u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4590u) goto L_089C4590;
    return;
L_089C4590:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C45A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C45A8u) goto L_089C45A8;
    return;
L_089C45A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C45C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C45C4u) goto L_089C45C4;
    return;
L_089C45C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1312)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C45DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C45DCu) goto L_089C45DC;
    return;
L_089C45DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(9, ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4608u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4608u) goto L_089C4608;
    return;
L_089C4608:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4620u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4620u) goto L_089C4620;
    return;
L_089C4620:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4638u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4638u) goto L_089C4638;
    return;
L_089C4638:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(724)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C464Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C464Cu) goto L_089C464C;
    return;
L_089C464C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1312)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4660;
      }
      goto L_089C4658;
    }
L_089C4658:
    ctx.set_gpr(31, 0x089C4660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C4660u) goto L_089C4660;
    return;
L_089C4660:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4674;
      }
      goto L_089C466C;
    }
L_089C466C:
    ctx.set_gpr(31, 0x089C4674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C4674u) goto L_089C4674;
    return;
L_089C4674:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[31] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[30] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[29] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[27] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C46D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C46F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C46F0u) goto L_089C46F0;
    return;
L_089C46F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4700:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4718:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[5] << 2u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C475C;
      }
      goto L_089C4740;
    }
L_089C4740:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C4750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 12u, 0x08948114u>(ctx, &aot_mem) && ctx.pc == 0x089C4750u) goto L_089C4750;
    return;
L_089C4750:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4774;
      }
      goto L_089C475C;
    }
L_089C475C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4770;
      }
      goto L_089C4768;
    }
L_089C4768:
    ctx.set_gpr(31, 0x089C4770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089C4770u) goto L_089C4770;
    return;
L_089C4770:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_089C4774;
L_089C4774:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089C4790:
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C47A8:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C47C0:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C47D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C47DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-256));
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
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17856));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C482Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C482Cu) goto L_089C482C;
    return;
L_089C482C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4854;
      }
      goto L_089C4834;
    }
L_089C4834:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4848u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4848u) goto L_089C4848;
    return;
L_089C4848:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C51FC;
      }
      goto L_089C4854;
    }
L_089C4854:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4874u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4874u) goto L_089C4874;
    return;
L_089C4874:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(124));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4894u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4894u) goto L_089C4894;
    return;
L_089C4894:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, 17476u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 21280u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4B54;
      }
      goto L_089C48A8;
    }
L_089C48A8:
    ctx.set_gpr(31, 0x089C48B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C48B0u) goto L_089C48B0;
    return;
L_089C48B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C48CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C48CCu) goto L_089C48CC;
    return;
L_089C48CC:
    ctx.set_gpr(31, 0x089C48D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C48D4u) goto L_089C48D4;
    return;
L_089C48D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C48F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C48F0u) goto L_089C48F0;
    return;
L_089C48F0:
    ctx.set_gpr(31, 0x089C48F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C48F8u) goto L_089C48F8;
    return;
L_089C48F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4914u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4914u) goto L_089C4914;
    return;
L_089C4914:
    ctx.set_gpr(31, 0x089C491Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C491Cu) goto L_089C491C;
    return;
L_089C491C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4938u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4938u) goto L_089C4938;
    return;
L_089C4938:
    ctx.set_gpr(31, 0x089C4940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4940u) goto L_089C4940;
    return;
L_089C4940:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C495Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C495Cu) goto L_089C495C;
    return;
L_089C495C:
    ctx.set_gpr(31, 0x089C4964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4964u) goto L_089C4964;
    return;
L_089C4964:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4980u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4980u) goto L_089C4980;
    return;
L_089C4980:
    ctx.set_gpr(31, 0x089C4988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4988u) goto L_089C4988;
    return;
L_089C4988:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C49A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C49A4u) goto L_089C49A4;
    return;
L_089C49A4:
    ctx.set_gpr(31, 0x089C49ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C49ACu) goto L_089C49AC;
    return;
L_089C49AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C49C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C49C8u) goto L_089C49C8;
    return;
L_089C49C8:
    ctx.set_gpr(31, 0x089C49D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C49D0u) goto L_089C49D0;
    return;
L_089C49D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C49ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C49ECu) goto L_089C49EC;
    return;
L_089C49EC:
    ctx.set_gpr(31, 0x089C49F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C49F4u) goto L_089C49F4;
    return;
L_089C49F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4A10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4A10u) goto L_089C4A10;
    return;
L_089C4A10:
    ctx.set_gpr(31, 0x089C4A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4A18u) goto L_089C4A18;
    return;
L_089C4A18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4A34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4A34u) goto L_089C4A34;
    return;
L_089C4A34:
    ctx.set_gpr(31, 0x089C4A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4A3Cu) goto L_089C4A3C;
    return;
L_089C4A3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4A58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4A58u) goto L_089C4A58;
    return;
L_089C4A58:
    ctx.set_gpr(31, 0x089C4A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4A60u) goto L_089C4A60;
    return;
L_089C4A60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4A7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4A7Cu) goto L_089C4A7C;
    return;
L_089C4A7C:
    ctx.set_gpr(31, 0x089C4A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4A84u) goto L_089C4A84;
    return;
L_089C4A84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4AA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4AA0u) goto L_089C4AA0;
    return;
L_089C4AA0:
    ctx.set_gpr(31, 0x089C4AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4AA8u) goto L_089C4AA8;
    return;
L_089C4AA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4AC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4AC4u) goto L_089C4AC4;
    return;
L_089C4AC4:
    ctx.set_gpr(31, 0x089C4ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4ACCu) goto L_089C4ACC;
    return;
L_089C4ACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4AE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4AE8u) goto L_089C4AE8;
    return;
L_089C4AE8:
    ctx.set_gpr(31, 0x089C4AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4AF0u) goto L_089C4AF0;
    return;
L_089C4AF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4B0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4B0Cu) goto L_089C4B0C;
    return;
L_089C4B0C:
    ctx.set_gpr(31, 0x089C4B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4B14u) goto L_089C4B14;
    return;
L_089C4B14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4B30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4B30u) goto L_089C4B30;
    return;
L_089C4B30:
    ctx.set_gpr(31, 0x089C4B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x089C4B38u) goto L_089C4B38;
    return;
L_089C4B38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4B54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4B54u) goto L_089C4B54;
    return;
L_089C4B54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(124));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4B84;
      }
      goto L_089C4B64;
    }
L_089C4B64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(2, ctx.gpr[3] & 4103u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4B84;
      }
      goto L_089C4B74;
    }
L_089C4B74:
    ctx.set_gpr(2, 8u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4B94;
      }
      goto L_089C4B84;
    }
L_089C4B84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4BB4;
      }
      goto L_089C4B94;
    }
L_089C4B94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4BA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4BA8u) goto L_089C4BA8;
    return;
L_089C4BA8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C51FC;
      }
      goto L_089C4BB4;
    }
L_089C4BB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, 12873u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 21569u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4C78;
      }
      goto L_089C4BC8;
    }
L_089C4BC8:
    ctx.set_gpr(2, 13652u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 22596u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4C50;
      }
      goto L_089C4BD8;
    }
L_089C4BD8:
    ctx.set_gpr(2, 13140u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 22596u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4C28;
      }
      goto L_089C4BE8;
    }
L_089C4BE8:
    ctx.set_gpr(2, 12628u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 22596u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4C00;
      }
      goto L_089C4BF8;
    }
L_089C4BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4CA0;
      }
      goto L_089C4C00;
    }
L_089C4C00:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4C18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4C18u) goto L_089C4C18;
    return;
L_089C4C18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4CC0;
      }
      goto L_089C4C28;
    }
L_089C4C28:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4C40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4C40u) goto L_089C4C40;
    return;
L_089C4C40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4CC0;
      }
      goto L_089C4C50;
    }
L_089C4C50:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4C68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4C68u) goto L_089C4C68;
    return;
L_089C4C68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4CC0;
      }
      goto L_089C4C78;
    }
L_089C4C78:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4C90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4C90u) goto L_089C4C90;
    return;
L_089C4C90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4CC0;
      }
      goto L_089C4CA0;
    }
L_089C4CA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4CB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4CB4u) goto L_089C4CB4;
    return;
L_089C4CB4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C51FC;
      }
      goto L_089C4CC0;
    }
L_089C4CC0:
    ctx.set_gpr(31, 0x089C4CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 559u, 0x089A2744u>(ctx, &aot_mem) && ctx.pc == 0x089C4CC8u) goto L_089C4CC8;
    return;
L_089C4CC8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4CE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4CE0u) goto L_089C4CE0;
    return;
L_089C4CE0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4CF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4CF8u) goto L_089C4CF8;
    return;
L_089C4CF8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4D10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4D10u) goto L_089C4D10;
    return;
L_089C4D10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089C4D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 485u, 0x089A6210u>(ctx, &aot_mem) && ctx.pc == 0x089C4D20u) goto L_089C4D20;
    return;
L_089C4D20:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4D3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4D3Cu) goto L_089C4D3C;
    return;
L_089C4D3C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4D50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4D50u) goto L_089C4D50;
    return;
L_089C4D50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13560));
    ctx.set_gpr(31, 0x089C4D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x089C4D64u) goto L_089C4D64;
    return;
L_089C4D64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4D8C;
      }
      goto L_089C4D6C;
    }
L_089C4D6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x089C4D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C4D84u) goto L_089C4D84;
    return;
L_089C4D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4DAC;
      }
      goto L_089C4D8C;
    }
L_089C4D8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4DA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4DA0u) goto L_089C4DA0;
    return;
L_089C4DA0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C51FC;
      }
      goto L_089C4DAC;
    }
L_089C4DAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4E00;
      }
      goto L_089C4DBC;
    }
L_089C4DBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4DF4;
      }
      goto L_089C4DC8;
    }
L_089C4DC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4DF4;
      }
      goto L_089C4DD4;
    }
L_089C4DD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4DE8;
      }
      goto L_089C4DE0;
    }
L_089C4DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E0C;
      }
      goto L_089C4DE8;
    }
L_089C4DE8:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E18;
      }
      goto L_089C4DF4;
    }
L_089C4DF4:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E18;
      }
      goto L_089C4E00;
    }
L_089C4E00:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E18;
      }
      goto L_089C4E0C;
    }
L_089C4E0C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C51FC;
      }
      goto L_089C4E18;
    }
L_089C4E18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(31, 0x089C4E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4E30u) goto L_089C4E30;
    return;
L_089C4E30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C4E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C4E3Cu) goto L_089C4E3C;
    return;
L_089C4E3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4E64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4E64u) goto L_089C4E64;
    return;
L_089C4E64:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C514C;
      }
      goto L_089C4E74;
    }
L_089C4E74:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C513C;
      }
      goto L_089C4E80;
    }
L_089C4E80:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089C4E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C4E94u) goto L_089C4E94;
    return;
L_089C4E94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C4EB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C4EB4u) goto L_089C4EB4;
    return;
L_089C4EB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4FD8;
      }
      goto L_089C4EC4;
    }
L_089C4EC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4F30;
      }
      goto L_089C4ED0;
    }
L_089C4ED0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C4EE4;
      }
      goto L_089C4EDC;
    }
L_089C4EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5108;
      }
      goto L_089C4EE4;
    }
L_089C4EE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4F14;
      }
      goto L_089C4EF8;
    }
L_089C4EF8:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089C4F14;
L_089C4F14:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4EF8;
      }
      goto L_089C4F20;
    }
L_089C4F20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5108;
      }
      goto L_089C4F30;
    }
L_089C4F30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4F70;
      }
      goto L_089C4F4C;
    }
L_089C4F4C:
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089C4F70;
L_089C4F70:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4F4C;
      }
      goto L_089C4F7C;
    }
L_089C4F7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4FBC;
      }
      goto L_089C4FA0;
    }
L_089C4FA0:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089C4FBC;
L_089C4FBC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4FA0;
      }
      goto L_089C4FC8;
    }
L_089C4FC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5108;
      }
      goto L_089C4FD8;
    }
L_089C4FD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(6, (ctx.gpr[2] >> 4u) & 0x0000FFFFu);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[3] & 3840u);
    ctx.set_gpr(6, ctx.gpr[6] << 4u);
    ctx.set_gpr(7, ctx.gpr[6] & 65535u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(6, ctx.gpr[3] & 61440u);
    ctx.set_gpr(7, (ctx.gpr[6] >> 12u) & 0x0000FFFFu);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(6, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, ctx.gpr[2] & 61440u);
    ctx.set_gpr(6, (ctx.gpr[5] >> 4u) & 0x0000FFFFu);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(5, ctx.gpr[3] & 15u);
    ctx.set_gpr(5, ctx.gpr[5] << 12u);
    ctx.set_gpr(6, ctx.gpr[5] & 65535u);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(3, ctx.gpr[3] & 240u);
    ctx.set_gpr(5, (ctx.gpr[3] >> 4u) & 0x0000FFFFu);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C50F4;
      }
      goto L_089C50D8;
    }
L_089C50D8:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089C50F4;
L_089C50F4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C50D8;
      }
      goto L_089C5100;
    }
L_089C5100:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    goto L_089C5108;
L_089C5108:
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089C5138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C5138u) goto L_089C5138;
    return;
L_089C5138:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089C513C;
L_089C513C:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E80;
      }
      goto L_089C5148;
    }
L_089C5148:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089C514C;
L_089C514C:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E74;
      }
      goto L_089C5158;
    }
L_089C5158:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.set_gpr(31, 0x089C5164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 559u, 0x089A2744u>(ctx, &aot_mem) && ctx.pc == 0x089C5164u) goto L_089C5164;
    return;
L_089C5164:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(101));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C51E4;
      }
      goto L_089C5170;
    }
L_089C5170:
    ctx.set_gpr(31, 0x089C5178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 559u, 0x089A2744u>(ctx, &aot_mem) && ctx.pc == 0x089C5178u) goto L_089C5178;
    return;
L_089C5178:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(107));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C51E4;
      }
      goto L_089C5184;
    }
L_089C5184:
    ctx.set_gpr(31, 0x089C518Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 559u, 0x089A2744u>(ctx, &aot_mem) && ctx.pc == 0x089C518Cu) goto L_089C518C;
    return;
L_089C518C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C51A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C51A8u) goto L_089C51A8;
    return;
L_089C51A8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C51C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C51C4u) goto L_089C51C4;
    return;
L_089C51C4:
    ctx.set_gpr(31, 0x089C51CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 559u, 0x089A2744u>(ctx, &aot_mem) && ctx.pc == 0x089C51CCu) goto L_089C51CC;
    return;
L_089C51CC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C51E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C51E4u) goto L_089C51E4;
    return;
L_089C51E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C51F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C51F8u) goto L_089C51F8;
    return;
L_089C51F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089C51FC;
L_089C51FC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5230:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28652)));
    ctx.set_gpr(31, 0x089C5248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x089C5248u) goto L_089C5248;
    return;
L_089C5248:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5258:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28652)));
    ctx.set_gpr(31, 0x089C5270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089C5270u) goto L_089C5270;
    return;
L_089C5270:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5280:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5288:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089C52B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 156u, 0x08820A80u>(ctx, &aot_mem) && ctx.pc == 0x089C52B8u) goto L_089C52B8;
    return;
L_089C52B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089C5378;
      }
      goto L_089C52C8;
    }
L_089C52C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C52F0;
      }
      goto L_089C52D4;
    }
L_089C52D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C52F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C52F0u) goto L_089C52F0;
    return;
L_089C52F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C534C;
      }
      goto L_089C5308;
    }
L_089C5308:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089C5320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C5320u) goto L_089C5320;
    return;
L_089C5320:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[19]);
    ctx.set_gpr(7, ctx.gpr[17] - ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C5344u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5344u) goto L_089C5344;
    return;
L_089C5344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5398;
      }
      goto L_089C534C;
    }
L_089C534C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C5364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C5364u) goto L_089C5364;
    return;
L_089C5364:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5398;
      }
      goto L_089C5378;
    }
L_089C5378:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C5398u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5398u) goto L_089C5398;
    return;
L_089C5398:
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
L_089C53B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C53C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.set_gpr(19, ctx.gpr[9] + 0u);
    ctx.set_gpr(18, ctx.gpr[10] + 0u);
    ctx.set_gpr(17, ctx.gpr[11] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5410;
      }
      goto L_089C5404;
    }
L_089C5404:
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x089C5410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089C5410u) goto L_089C5410;
    return;
L_089C5410:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5428;
      }
      goto L_089C5418;
    }
L_089C5418:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089C5428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089C5428u) goto L_089C5428;
    return;
L_089C5428:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5474;
      }
      goto L_089C5434;
    }
L_089C5434:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5458;
      }
      goto L_089C543C;
    }
L_089C543C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089C5450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 624u, 0x088227E4u>(ctx, &aot_mem) && ctx.pc == 0x089C5450u) goto L_089C5450;
    return;
L_089C5450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5474;
      }
      goto L_089C5458;
    }
L_089C5458:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089C5464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 65u, 0x08820460u>(ctx, &aot_mem) && ctx.pc == 0x089C5464u) goto L_089C5464;
    return;
L_089C5464:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089C5474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 66u, 0x08830524u>(ctx, &aot_mem) && ctx.pc == 0x089C5474u) goto L_089C5474;
    return;
L_089C5474:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5490;
      }
      goto L_089C5480;
    }
L_089C5480:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C5490u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5490u) goto L_089C5490;
    return;
L_089C5490:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C54A8;
      }
      goto L_089C549C;
    }
L_089C549C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089C54A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089C54A8u) goto L_089C54A8;
    return;
L_089C54A8:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_089C54D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5704;
      }
      goto L_089C54E4;
    }
L_089C54E4:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089C5688;
      }
      goto L_089C54F0;
    }
L_089C54F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5630;
      }
      goto L_089C54FC;
    }
L_089C54FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5564;
      }
      goto L_089C5508;
    }
L_089C5508:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5518;
      }
      goto L_089C5510;
    }
L_089C5510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5518;
    }
L_089C5518:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5554;
      }
      goto L_089C5524;
    }
L_089C5524:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5554;
      }
      goto L_089C5530;
    }
L_089C5530:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089C5554;
      }
      goto L_089C5538;
    }
L_089C5538:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5554;
      }
      goto L_089C5540;
    }
L_089C5540:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5554;
      }
      goto L_089C554C;
    }
L_089C554C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5554;
    }
L_089C5554:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5564;
    }
L_089C5564:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5584;
      }
      goto L_089C5570;
    }
L_089C5570:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5584;
      }
      goto L_089C557C;
    }
L_089C557C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5584;
    }
L_089C5584:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5594;
    }
L_089C5594:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C55CC;
      }
      goto L_089C55A4;
    }
L_089C55A4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C55CC;
      }
      goto L_089C55B0;
    }
L_089C55B0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C55CC;
      }
      goto L_089C55C0;
    }
L_089C55C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C55CC;
    }
L_089C55CC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C5600;
      }
      goto L_089C55D8;
    }
L_089C55D8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5600;
      }
      goto L_089C55E8;
    }
L_089C55E8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C5600;
      }
      goto L_089C55F4;
    }
L_089C55F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5600;
    }
L_089C5600:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C560C;
    }
L_089C560C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5618;
    }
L_089C5618:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5624;
    }
L_089C5624:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5630;
    }
L_089C5630:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5674;
      }
      goto L_089C563C;
    }
L_089C563C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5674;
      }
      goto L_089C5648;
    }
L_089C5648:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089C5674;
      }
      goto L_089C5650;
    }
L_089C5650:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5664;
      }
      goto L_089C565C;
    }
L_089C565C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5664;
    }
L_089C5664:
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5674;
    }
L_089C5674:
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5688;
    }
L_089C5688:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C56A8;
      }
      goto L_089C5694;
    }
L_089C5694:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C56A8;
      }
      goto L_089C56A0;
    }
L_089C56A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C56A8;
    }
L_089C56A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C56B8;
    }
L_089C56B8:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C56E0;
      }
      goto L_089C56C8;
    }
L_089C56C8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C56E0;
      }
      goto L_089C56D4;
    }
L_089C56D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C56E0;
    }
L_089C56E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C56EC;
    }
L_089C56EC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C56F8;
    }
L_089C56F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5704;
    }
L_089C5704:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5724;
      }
      goto L_089C5710;
    }
L_089C5710:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5724;
      }
      goto L_089C571C;
    }
L_089C571C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5724;
    }
L_089C5724:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5734;
    }
L_089C5734:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C5744;
    }
L_089C5744:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C5750;
    }
L_089C5750:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C575C;
    }
L_089C575C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C5778;
      }
      goto L_089C576C;
    }
L_089C576C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5778;
    }
L_089C5778:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C57B4;
      }
      goto L_089C5784;
    }
L_089C5784:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C57B4;
      }
      goto L_089C5790;
    }
L_089C5790:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C57B4;
      }
      goto L_089C579C;
    }
L_089C579C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C57B4;
      }
      goto L_089C57A8;
    }
L_089C57A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C57B4;
    }
L_089C57B4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C57F0;
      }
      goto L_089C57C0;
    }
L_089C57C0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C57F0;
      }
      goto L_089C57CC;
    }
L_089C57CC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C57F0;
      }
      goto L_089C57D8;
    }
L_089C57D8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C57F0;
      }
      goto L_089C57E4;
    }
L_089C57E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C57F0;
    }
L_089C57F0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C57FC;
    }
L_089C57FC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5808;
    }
L_089C5808:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5814;
    }
L_089C5814:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C5824;
      }
      goto L_089C5820;
    }
L_089C5820:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    goto L_089C5824;
L_089C5824:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C582C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28652), ctx.gpr[21]);
    ctx.set_gpr(31, 0x089C5878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5878u) goto L_089C5878;
    return;
L_089C5878:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C5884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x089C5884u) goto L_089C5884;
    return;
L_089C5884:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28648)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089C58C0;
      }
      goto L_089C589C;
    }
L_089C589C:
    ctx.set_gpr(5, ctx.gpr[2] << 10u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089C58B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x0894806Cu>(ctx, &aot_mem) && ctx.pc == 0x089C58B4u) goto L_089C58B4;
    return;
L_089C58B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C58C8;
      }
      goto L_089C58C0;
    }
L_089C58C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    goto L_089C58C8;
L_089C58C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17856));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C58ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C58ECu) goto L_089C58EC;
    return;
L_089C58EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5948;
      }
      goto L_089C58F4;
    }
L_089C58F4:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C5924u);
    // nop
    goto L_089C53C0;
L_089C5924:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C593C;
      }
      goto L_089C5934;
    }
L_089C5934:
    ctx.set_gpr(31, 0x089C593Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C593Cu) goto L_089C593C;
    return;
L_089C593C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6384;
      }
      goto L_089C5948;
    }
L_089C5948:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C5968u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5968u) goto L_089C5968;
    return;
L_089C5968:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089C597Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 26u, 0x088201C4u>(ctx, &aot_mem) && ctx.pc == 0x089C597Cu) goto L_089C597C;
    return;
L_089C597C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C59E4;
      }
      goto L_089C5990;
    }
L_089C5990:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C59C0u);
    // nop
    goto L_089C53C0;
L_089C59C0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C59D8;
      }
      goto L_089C59D0;
    }
L_089C59D0:
    ctx.set_gpr(31, 0x089C59D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C59D8u) goto L_089C59D8;
    return;
L_089C59D8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6384;
      }
      goto L_089C59E4;
    }
L_089C59E4:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16356));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 2204u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21120));
    ctx.set_gpr(7, 2204u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(21128));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 2204u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(21040));
    ctx.set_gpr(10, 2204u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(21080));
    ctx.set_gpr(31, 0x089C5A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 323u, 0x08821464u>(ctx, &aot_mem) && ctx.pc == 0x089C5A1Cu) goto L_089C5A1C;
    return;
L_089C5A1C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5A7C;
      }
      goto L_089C5A28;
    }
L_089C5A28:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C5A58u);
    // nop
    goto L_089C53C0;
L_089C5A58:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5A70;
      }
      goto L_089C5A68;
    }
L_089C5A68:
    ctx.set_gpr(31, 0x089C5A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C5A70u) goto L_089C5A70;
    return;
L_089C5A70:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6384;
      }
      goto L_089C5A7C;
    }
L_089C5A7C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089C5A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 21u, 0x08820168u>(ctx, &aot_mem) && ctx.pc == 0x089C5A8Cu) goto L_089C5A8C;
    return;
L_089C5A8C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 2204u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21040));
    ctx.set_gpr(7, 2204u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(21080));
    ctx.set_gpr(31, 0x089C5AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 322u, 0x08821450u>(ctx, &aot_mem) && ctx.pc == 0x089C5AACu) goto L_089C5AAC;
    return;
L_089C5AAC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089C5AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 58u, 0x088203FCu>(ctx, &aot_mem) && ctx.pc == 0x089C5AB8u) goto L_089C5AB8;
    return;
L_089C5AB8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5B18;
      }
      goto L_089C5AC4;
    }
L_089C5AC4:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C5AF4u);
    // nop
    goto L_089C53C0;
L_089C5AF4:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5B0C;
      }
      goto L_089C5B04;
    }
L_089C5B04:
    ctx.set_gpr(31, 0x089C5B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C5B0Cu) goto L_089C5B0C;
    return;
L_089C5B0C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6384;
      }
      goto L_089C5B18;
    }
L_089C5B18:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089C5B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 58u, 0x088203FCu>(ctx, &aot_mem) && ctx.pc == 0x089C5B24u) goto L_089C5B24;
    return;
L_089C5B24:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5B84;
      }
      goto L_089C5B30;
    }
L_089C5B30:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C5B60u);
    // nop
    goto L_089C53C0;
L_089C5B60:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5B78;
      }
      goto L_089C5B70;
    }
L_089C5B70:
    ctx.set_gpr(31, 0x089C5B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C5B78u) goto L_089C5B78;
    return;
L_089C5B78:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6384;
      }
      goto L_089C5B84;
    }
L_089C5B84:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(6, 2204u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21136));
    ctx.set_gpr(31, 0x089C5B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 692u, 0x08822CB0u>(ctx, &aot_mem) && ctx.pc == 0x089C5B9Cu) goto L_089C5B9C;
    return;
L_089C5B9C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089C5BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 358u, 0x08821728u>(ctx, &aot_mem) && ctx.pc == 0x089C5BACu) goto L_089C5BAC;
    return;
L_089C5BAC:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x089C5BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 215u, 0x08820EA8u>(ctx, &aot_mem) && ctx.pc == 0x089C5BDCu) goto L_089C5BDC;
    return;
L_089C5BDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5C00;
      }
      goto L_089C5BEC;
    }
L_089C5BEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5C00;
      }
      goto L_089C5BFC;
    }
L_089C5BFC:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_089C5C00;
L_089C5C00:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089C5C14u);
    // nop
    goto L_089C63B8;
L_089C5C14:
    ctx.set_gpr(10, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5C70;
      }
      goto L_089C5C20;
    }
L_089C5C20:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C5C4Cu);
    // nop
    goto L_089C53C0;
L_089C5C4C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5C64;
      }
      goto L_089C5C5C;
    }
L_089C5C5C:
    ctx.set_gpr(31, 0x089C5C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C5C64u) goto L_089C5C64;
    return;
L_089C5C64:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6384;
      }
      goto L_089C5C70;
    }
L_089C5C70:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089C5C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 474u, 0x08821E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5C80u) goto L_089C5C80;
    return;
L_089C5C80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x089C5CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 215u, 0x08820EA8u>(ctx, &aot_mem) && ctx.pc == 0x089C5CB4u) goto L_089C5CB4;
    return;
L_089C5CB4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x089C5CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 205u, 0x08820E54u>(ctx, &aot_mem) && ctx.pc == 0x089C5CCCu) goto L_089C5CCC;
    return;
L_089C5CCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5CE8;
      }
      goto L_089C5CD4;
    }
L_089C5CD4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x089C5CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 246u, 0x0882102Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5CE8u) goto L_089C5CE8;
    return;
L_089C5CE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5D5C;
      }
      goto L_089C5CF4;
    }
L_089C5CF4:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C5D24u);
    // nop
    goto L_089C53C0;
L_089C5D24:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5D3C;
      }
      goto L_089C5D34;
    }
L_089C5D34:
    ctx.set_gpr(31, 0x089C5D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C5D3Cu) goto L_089C5D3C;
    return;
L_089C5D3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5D50;
      }
      goto L_089C5D48;
    }
L_089C5D48:
    ctx.set_gpr(31, 0x089C5D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C5D50u) goto L_089C5D50;
    return;
L_089C5D50:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6384;
      }
      goto L_089C5D5C;
    }
L_089C5D5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089C5D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 239u, 0x08820FDCu>(ctx, &aot_mem) && ctx.pc == 0x089C5D7Cu) goto L_089C5D7C;
    return;
L_089C5D7C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089C5D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 253u, 0x08821074u>(ctx, &aot_mem) && ctx.pc == 0x089C5D98u) goto L_089C5D98;
    return;
L_089C5D98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089C5F0C;
      }
      goto L_089C5DA4;
    }
L_089C5DA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C5F0C;
      }
      goto L_089C5DB4;
    }
L_089C5DB4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089C5DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 205u, 0x08820E54u>(ctx, &aot_mem) && ctx.pc == 0x089C5DC8u) goto L_089C5DC8;
    return;
L_089C5DC8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(23, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5DF0;
      }
      goto L_089C5DD8;
    }
L_089C5DD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5DF0;
      }
      goto L_089C5DE8;
    }
L_089C5DE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    goto L_089C5DF0;
L_089C5DF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5E04;
      }
      goto L_089C5E00;
    }
L_089C5E00:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_089C5E04;
L_089C5E04:
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089C5E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x0894806Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5E18u) goto L_089C5E18;
    return;
L_089C5E18:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5EA4;
      }
      goto L_089C5E2C;
    }
L_089C5E2C:
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5E9C;
      }
      goto L_089C5E84;
    }
L_089C5E84:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5E9C;
      }
      goto L_089C5E8C;
    }
L_089C5E8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C5E9C;
L_089C5E9C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_089C5EA4;
L_089C5EA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5E2C;
      }
      goto L_089C5EB4;
    }
L_089C5EB4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089C5EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5EC0u) goto L_089C5EC0;
    return;
L_089C5EC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C5ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 203u, 0x089992FCu>(ctx, &aot_mem) && ctx.pc == 0x089C5ECCu) goto L_089C5ECC;
    return;
L_089C5ECC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C5EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5EDCu) goto L_089C5EDC;
    return;
L_089C5EDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C5EFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5EFCu) goto L_089C5EFC;
    return;
L_089C5EFC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C5F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089C5F0Cu) goto L_089C5F0C;
    return;
L_089C5F0C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x089C5F28u);
    // nop
    goto L_089C54D0;
L_089C5F28:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C5FA0;
      }
      goto L_089C5F38;
    }
L_089C5F38:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C5F68u);
    // nop
    goto L_089C53C0;
L_089C5F68:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5F80;
      }
      goto L_089C5F78;
    }
L_089C5F78:
    ctx.set_gpr(31, 0x089C5F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C5F80u) goto L_089C5F80;
    return;
L_089C5F80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5F94;
      }
      goto L_089C5F8C;
    }
L_089C5F8C:
    ctx.set_gpr(31, 0x089C5F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C5F94u) goto L_089C5F94;
    return;
L_089C5F94:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6384;
      }
      goto L_089C5FA0;
    }
L_089C5FA0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5FC4;
      }
      goto L_089C5FA8;
    }
L_089C5FA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C5FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 162u, 0x089A4A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5FB4u) goto L_089C5FB4;
    return;
L_089C5FB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5FC4;
      }
      goto L_089C5FBC;
    }
L_089C5FBC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(16, ctx.gpr[2] | 1u);
    goto L_089C5FC4;
L_089C5FC4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089C5FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 210u, 0x08820E80u>(ctx, &aot_mem) && ctx.pc == 0x089C5FD4u) goto L_089C5FD4;
    return;
L_089C5FD4:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089C5FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 825u, 0x089A3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089C5FF8u) goto L_089C5FF8;
    return;
L_089C5FF8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089C6004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6004u) goto L_089C6004;
    return;
L_089C6004:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6020u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6020u) goto L_089C6020;
    return;
L_089C6020:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(30, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089C6038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 558u, 0x089A2734u>(ctx, &aot_mem) && ctx.pc == 0x089C6038u) goto L_089C6038;
    return;
L_089C6038:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C6044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089C6044u) goto L_089C6044;
    return;
L_089C6044:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6054;
      }
      goto L_089C604C;
    }
L_089C604C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C60E4;
      }
      goto L_089C6054;
    }
L_089C6054:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089C6064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6064u) goto L_089C6064;
    return;
L_089C6064:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C6070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 411u, 0x089923BCu>(ctx, &aot_mem) && ctx.pc == 0x089C6070u) goto L_089C6070;
    return;
L_089C6070:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x089C6094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 825u, 0x089A3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089C6094u) goto L_089C6094;
    return;
L_089C6094:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089C60A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x0894806Cu>(ctx, &aot_mem) && ctx.pc == 0x089C60A8u) goto L_089C60A8;
    return;
L_089C60A8:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C60CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C60CCu) goto L_089C60CC;
    return;
L_089C60CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C60E4;
      }
      goto L_089C60DC;
    }
L_089C60DC:
    ctx.set_gpr(31, 0x089C60E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C60E4u) goto L_089C60E4;
    return;
L_089C60E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089C60FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x0894806Cu>(ctx, &aot_mem) && ctx.pc == 0x089C60FCu) goto L_089C60FC;
    return;
L_089C60FC:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6138;
      }
      goto L_089C6120;
    }
L_089C6120:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[2]);
    goto L_089C6138;
L_089C6138:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6120;
      }
      goto L_089C6148;
    }
L_089C6148:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C61C8;
      }
      goto L_089C6154;
    }
L_089C6154:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C6160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 169u, 0x089A4AB4u>(ctx, &aot_mem) && ctx.pc == 0x089C6160u) goto L_089C6160;
    return;
L_089C6160:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C61A8;
      }
      goto L_089C6168;
    }
L_089C6168:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089C617Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 478u, 0x08821EA4u>(ctx, &aot_mem) && ctx.pc == 0x089C617Cu) goto L_089C617C;
    return;
L_089C617C:
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089C61A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C61A0u) goto L_089C61A0;
    return;
L_089C61A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C61C4;
      }
      goto L_089C61A8;
    }
L_089C61A8:
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089C61C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 478u, 0x08821EA4u>(ctx, &aot_mem) && ctx.pc == 0x089C61C4u) goto L_089C61C4;
    return;
L_089C61C4:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089C61C8;
L_089C61C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, ctx.gpr[22] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6154;
      }
      goto L_089C61D8;
    }
L_089C61D8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C61E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 524u, 0x088221DCu>(ctx, &aot_mem) && ctx.pc == 0x089C61E8u) goto L_089C61E8;
    return;
L_089C61E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6200u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6200u) goto L_089C6200;
    return;
L_089C6200:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C6224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 255u, 0x089A508Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6224u) goto L_089C6224;
    return;
L_089C6224:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C623C;
      }
      goto L_089C6230;
    }
L_089C6230:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6288;
      }
      goto L_089C623C;
    }
L_089C623C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6274;
      }
      goto L_089C624C;
    }
L_089C624C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089C6258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089C6258u) goto L_089C6258;
    return;
L_089C6258:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C626C;
      }
      goto L_089C6260;
    }
L_089C6260:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C626Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089C626Cu) goto L_089C626C;
    return;
L_089C626C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089C6274;
L_089C6274:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x089C6288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089C6288u) goto L_089C6288;
    return;
L_089C6288:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089C629Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 139u, 0x089A0894u>(ctx, &aot_mem) && ctx.pc == 0x089C629Cu) goto L_089C629C;
    return;
L_089C629C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C62C8;
      }
      goto L_089C62AC;
    }
L_089C62AC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C62C8;
      }
      goto L_089C62C4;
    }
L_089C62C4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089C62C8;
L_089C62C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C62F4;
      }
      goto L_089C62D0;
    }
L_089C62D0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C62F4;
      }
      goto L_089C62E8;
    }
L_089C62E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C62F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089C62F4u) goto L_089C62F4;
    return;
L_089C62F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6324;
      }
      goto L_089C6300;
    }
L_089C6300:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C630Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 162u, 0x089A4A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C630Cu) goto L_089C630C;
    return;
L_089C630C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6324;
      }
      goto L_089C6314;
    }
L_089C6314:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(31, 0x089C6324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 241u, 0x089A1064u>(ctx, &aot_mem) && ctx.pc == 0x089C6324u) goto L_089C6324;
    return;
L_089C6324:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    ctx.set_gpr(9, ctx.gpr[30] + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[10] + 0u);
    ctx.set_gpr(31, 0x089C6354u);
    // nop
    goto L_089C53C0;
L_089C6354:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C636C;
      }
      goto L_089C6364;
    }
L_089C6364:
    ctx.set_gpr(31, 0x089C636Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C636Cu) goto L_089C636C;
    return;
L_089C636C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6380;
      }
      goto L_089C6378;
    }
L_089C6378:
    ctx.set_gpr(31, 0x089C6380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C6380u) goto L_089C6380;
    return;
L_089C6380:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_089C6384;
L_089C6384:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C63B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089C6400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 215u, 0x08820EA8u>(ctx, &aot_mem) && ctx.pc == 0x089C6400u) goto L_089C6400;
    return;
L_089C6400:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C640Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 699u, 0x08822D34u>(ctx, &aot_mem) && ctx.pc == 0x089C640Cu) goto L_089C640C;
    return;
L_089C640C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6438;
      }
      goto L_089C641C;
    }
L_089C641C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C6438;
      }
      goto L_089C642C;
    }
L_089C642C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C6438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 654u, 0x0882EFC0u>(ctx, &aot_mem) && ctx.pc == 0x089C6438u) goto L_089C6438;
    return;
L_089C6438:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6460;
      }
      goto L_089C6448;
    }
L_089C6448:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6460;
      }
      goto L_089C6454;
    }
L_089C6454:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C6460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 700u, 0x08822D48u>(ctx, &aot_mem) && ctx.pc == 0x089C6460u) goto L_089C6460;
    return;
L_089C6460:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089C6474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 205u, 0x08820E54u>(ctx, &aot_mem) && ctx.pc == 0x089C6474u) goto L_089C6474;
    return;
L_089C6474:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C64A4;
      }
      goto L_089C647C;
    }
L_089C647C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C64A4;
      }
      goto L_089C648C;
    }
L_089C648C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C64A4;
      }
      goto L_089C6498;
    }
L_089C6498:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C64A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 701u, 0x08822D5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C64A4u) goto L_089C64A4;
    return;
L_089C64A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2204u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21432));
    ctx.set_gpr(31, 0x089C64B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 702u, 0x08822D70u>(ctx, &aot_mem) && ctx.pc == 0x089C64B8u) goto L_089C64B8;
    return;
L_089C64B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C64D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(31, 0x089C6504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x089C6504u) goto L_089C6504;
    return;
L_089C6504:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C6514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 455u, 0x0891E160u>(ctx, &aot_mem) && ctx.pc == 0x089C6514u) goto L_089C6514;
    return;
L_089C6514:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C65E0;
      }
      goto L_089C651C;
    }
L_089C651C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C654C;
      }
      goto L_089C6528;
    }
L_089C6528:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28156)));
    ctx.set_gpr(31, 0x089C653Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C653Cu) goto L_089C653C;
    return;
L_089C653C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C654C;
      }
      goto L_089C6544;
    }
L_089C6544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6550;
      }
      goto L_089C654C;
    }
L_089C654C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_089C6550;
L_089C6550:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C65E0;
      }
      goto L_089C6558;
    }
L_089C6558:
    ctx.set_gpr(31, 0x089C6560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6560u) goto L_089C6560;
    return;
L_089C6560:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C656Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C656Cu) goto L_089C656C;
    return;
L_089C656C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C6578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x089C6578u) goto L_089C6578;
    return;
L_089C6578:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13548));
    ctx.set_gpr(31, 0x089C65A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 633u, 0x0895AA80u>(ctx, &aot_mem) && ctx.pc == 0x089C65A4u) goto L_089C65A4;
    return;
L_089C65A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C65BC;
      }
      goto L_089C65B4;
    }
L_089C65B4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_089C65BC;
L_089C65BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C65C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 706u, 0x089A31D0u>(ctx, &aot_mem) && ctx.pc == 0x089C65C8u) goto L_089C65C8;
    return;
L_089C65C8:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C65E0;
      }
      goto L_089C65D8;
    }
L_089C65D8:
    ctx.set_gpr(31, 0x089C65E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C65E0u) goto L_089C65E0;
    return;
L_089C65E0:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_089C6604:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089C6614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x089C6614u) goto L_089C6614;
    return;
L_089C6614:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C666C;
      }
      goto L_089C664C;
    }
L_089C664C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C665Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C665Cu) goto L_089C665C;
    return;
L_089C665C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089C666Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089C666Cu) goto L_089C666C;
    return;
L_089C666C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C66A8;
      }
      goto L_089C6678;
    }
L_089C6678:
    ctx.set_gpr(31, 0x089C6680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6680u) goto L_089C6680;
    return;
L_089C6680:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C668Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C668Cu) goto L_089C668C;
    return;
L_089C668C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C66A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C66A4u) goto L_089C66A4;
    return;
L_089C66A4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    goto L_089C66A8;
L_089C66A8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C66E4;
      }
      goto L_089C66B4;
    }
L_089C66B4:
    ctx.set_gpr(31, 0x089C66BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C66BCu) goto L_089C66BC;
    return;
L_089C66BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C66C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C66C8u) goto L_089C66C8;
    return;
L_089C66C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C66E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C66E0u) goto L_089C66E0;
    return;
L_089C66E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    goto L_089C66E4;
L_089C66E4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x089C66F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C66F0u) goto L_089C66F0;
    return;
L_089C66F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C66FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C66FCu) goto L_089C66FC;
    return;
L_089C66FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6714u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6714u) goto L_089C6714;
    return;
L_089C6714:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_089C6740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6770u) goto L_089C6770;
    return;
L_089C6770:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6784;
      }
      goto L_089C6778;
    }
L_089C6778:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6790;
      }
      goto L_089C6784;
    }
L_089C6784:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089C6790;
L_089C6790:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C67A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C67BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089C67D4u);
    // nop
    goto L_089C67A4;
L_089C67D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C67FC;
      }
      goto L_089C67DC;
    }
L_089C67DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C67E8u);
    // nop
    goto L_089C6740;
L_089C67E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C67FC;
      }
      goto L_089C67F0;
    }
L_089C67F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6814;
      }
      goto L_089C67FC;
    }
L_089C67FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089C6814;
L_089C6814:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6828:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_089C68D0;
      }
      goto L_089C6858;
    }
L_089C6858:
    ctx.set_gpr(31, 0x089C6860u);
    // nop
    goto L_089C67BC;
L_089C6860:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C68C4;
      }
      goto L_089C6874;
    }
L_089C6874:
    ctx.set_gpr(3, ctx.gpr[4] & 127u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C68AC;
      }
      goto L_089C6894;
    }
L_089C6894:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089C68A0u);
    // nop
    goto L_089C67BC;
L_089C68A0:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089C68AC;
L_089C68AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6894;
      }
      goto L_089C68BC;
    }
L_089C68BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C68D0;
      }
      goto L_089C68C4;
    }
L_089C68C4:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
    goto L_089C68D0;
L_089C68D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6910;
      }
      goto L_089C68DC;
    }
L_089C68DC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6900;
      }
      goto L_089C68E8;
    }
L_089C68E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089C68F4u);
    // nop
    goto L_089C67BC;
L_089C68F4:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089C6900;
L_089C6900:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C68E8;
      }
      goto L_089C6910;
    }
L_089C6910:
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
L_089C692C:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AB0;
      }
      goto L_089C6948;
    }
L_089C6948:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29444));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6964:
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C6974;
    }
L_089C6974:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C6980;
    }
L_089C6980:
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C699C;
    }
L_089C699C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C69B8;
    }
L_089C69B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C69D8;
    }
L_089C69D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C69F4;
    }
L_089C69F4:
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C6A14;
    }
L_089C6A14:
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C6A34;
    }
L_089C6A34:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C6A50;
    }
L_089C6A50:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C6A70;
    }
L_089C6A70:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C6A90;
    }
L_089C6A90:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6AC0;
      }
      goto L_089C6AB0;
    }
L_089C6AB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_089C6AC0;
L_089C6AC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6AC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089C6B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6B08u) goto L_089C6B08;
    return;
L_089C6B08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C6B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x089C6B14u) goto L_089C6B14;
    return;
L_089C6B14:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C6B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089C6B24u) goto L_089C6B24;
    return;
L_089C6B24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6B4C;
      }
      goto L_089C6B44;
    }
L_089C6B44:
    ctx.set_gpr(31, 0x089C6B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089C6B4Cu) goto L_089C6B4C;
    return;
L_089C6B4C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17856));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6B74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6B74u) goto L_089C6B74;
    return;
L_089C6B74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6BB0;
      }
      goto L_089C6B7C;
    }
L_089C6B7C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089C6B8Cu);
    // nop
    goto L_089C6624;
L_089C6B8C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6BA4;
      }
      goto L_089C6B9C;
    }
L_089C6B9C:
    ctx.set_gpr(31, 0x089C6BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C6BA4u) goto L_089C6BA4;
    return;
L_089C6BA4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7674;
      }
      goto L_089C6BB0;
    }
L_089C6BB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6BD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6BD0u) goto L_089C6BD0;
    return;
L_089C6BD0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(101)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(22, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(105));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(20, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C6C58;
      }
      goto L_089C6C50;
    }
L_089C6C50:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089C6C58;
L_089C6C58:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-13541));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CBC;
      }
      goto L_089C6C88;
    }
L_089C6C88:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089C6C98u);
    // nop
    goto L_089C6624;
L_089C6C98:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CB0;
      }
      goto L_089C6CA8;
    }
L_089C6CA8:
    ctx.set_gpr(31, 0x089C6CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C6CB0u) goto L_089C6CB0;
    return;
L_089C6CB0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7674;
      }
      goto L_089C6CBC;
    }
L_089C6CBC:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-13492));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(23, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[21]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6CE0;
      }
      goto L_089C6CD8;
    }
L_089C6CD8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), 0u);
    goto L_089C6CE0;
L_089C6CE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6CFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6CFCu) goto L_089C6CFC;
    return;
L_089C6CFC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6FD4;
      }
      goto L_089C6D04;
    }
L_089C6D04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089C6FD4;
      }
      goto L_089C6D0C;
    }
L_089C6D0C:
    ctx.set_gpr(31, 0x089C6D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6D14u) goto L_089C6D14;
    return;
L_089C6D14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C6D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C6D20u) goto L_089C6D20;
    return;
L_089C6D20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] << 2u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6D3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6D3Cu) goto L_089C6D3C;
    return;
L_089C6D3C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089C6D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6D48u) goto L_089C6D48;
    return;
L_089C6D48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C6D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C6D54u) goto L_089C6D54;
    return;
L_089C6D54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(22, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6D78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6D78u) goto L_089C6D78;
    return;
L_089C6D78:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089C6DA0;
      }
      goto L_089C6D84;
    }
L_089C6D84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6DA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6DA0u) goto L_089C6DA0;
    return;
L_089C6DA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6DC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6DC0u) goto L_089C6DC0;
    return;
L_089C6DC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[23] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F44;
      }
      goto L_089C6DD4;
    }
L_089C6DD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C6EC4;
      }
      goto L_089C6DE0;
    }
L_089C6DE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C6E78;
      }
      goto L_089C6DEC;
    }
L_089C6DEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C6E00;
      }
      goto L_089C6DF8;
    }
L_089C6DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F10;
      }
      goto L_089C6E00;
    }
L_089C6E00:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6E64;
      }
      goto L_089C6E0C;
    }
L_089C6E0C:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[5] & 31744u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 10u));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13476));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[5] & 992u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 5u));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[5] & 31u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_089C6E64;
L_089C6E64:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6E0C;
      }
      goto L_089C6E70;
    }
L_089C6E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F44;
      }
      goto L_089C6E78;
    }
L_089C6E78:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6EB0;
      }
      goto L_089C6E84;
    }
L_089C6E84:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_089C6EB0;
L_089C6EB0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6E84;
      }
      goto L_089C6EBC;
    }
L_089C6EBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F44;
      }
      goto L_089C6EC4;
    }
L_089C6EC4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6EFC;
      }
      goto L_089C6ED0;
    }
L_089C6ED0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_089C6EFC;
L_089C6EFC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6ED0;
      }
      goto L_089C6F08;
    }
L_089C6F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F44;
      }
      goto L_089C6F10;
    }
L_089C6F10:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089C6F20u);
    // nop
    goto L_089C6624;
L_089C6F20:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F38;
      }
      goto L_089C6F30;
    }
L_089C6F30:
    ctx.set_gpr(31, 0x089C6F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C6F38u) goto L_089C6F38;
    return;
L_089C6F38:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7674;
      }
      goto L_089C6F44;
    }
L_089C6F44:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089C6F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6F50u) goto L_089C6F50;
    return;
L_089C6F50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C6F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C6F5Cu) goto L_089C6F5C;
    return;
L_089C6F5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6F74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6F74u) goto L_089C6F74;
    return;
L_089C6F74:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C6FD4;
      }
      goto L_089C6F84;
    }
L_089C6F84:
    ctx.set_gpr(31, 0x089C6F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 230u, 0x0893CEBCu>(ctx, &aot_mem) && ctx.pc == 0x089C6F8Cu) goto L_089C6F8C;
    return;
L_089C6F8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C6F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C6F98u) goto L_089C6F98;
    return;
L_089C6F98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C6FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 203u, 0x089992FCu>(ctx, &aot_mem) && ctx.pc == 0x089C6FA4u) goto L_089C6FA4;
    return;
L_089C6FA4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C6FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6FB4u) goto L_089C6FB4;
    return;
L_089C6FB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C6FD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6FD4u) goto L_089C6FD4;
    return;
L_089C6FD4:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(111));
    ctx.set_gpr(31, 0x089C6FF8u);
    // nop
    goto L_089C692C;
L_089C6FF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089C7040;
      }
      goto L_089C700C;
    }
L_089C700C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089C701Cu);
    // nop
    goto L_089C6624;
L_089C701C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7034;
      }
      goto L_089C702C;
    }
L_089C702C:
    ctx.set_gpr(31, 0x089C7034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C7034u) goto L_089C7034;
    return;
L_089C7034:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7674;
      }
      goto L_089C7040;
    }
L_089C7040:
    ctx.set_gpr(31, 0x089C7048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7048u) goto L_089C7048;
    return;
L_089C7048:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C7054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C7054u) goto L_089C7054;
    return;
L_089C7054:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C7070u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7070u) goto L_089C7070;
    return;
L_089C7070:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(106)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x089C7094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 825u, 0x089A3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089C7094u) goto L_089C7094;
    return;
L_089C7094:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089C70A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089C70A0u) goto L_089C70A0;
    return;
L_089C70A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C70BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C70BCu) goto L_089C70BC;
    return;
L_089C70BC:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089C70D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C70D8u) goto L_089C70D8;
    return;
L_089C70D8:
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74F4;
      }
      goto L_089C70E4;
    }
L_089C70E4:
    ctx.set_gpr(1, ctx.gpr[21] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74E8;
      }
      goto L_089C70F0;
    }
L_089C70F0:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-29392));
    ctx.set_gpr(2, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C710C:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C7148;
      }
      goto L_089C711C;
    }
L_089C711C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C713Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C713Cu) goto L_089C713C;
    return;
L_089C713C:
    ctx.set_gpr(23, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(106)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74E8;
      }
      goto L_089C7148;
    }
L_089C7148:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C7164u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7164u) goto L_089C7164;
    return;
L_089C7164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74E8;
      }
      goto L_089C716C;
    }
L_089C716C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C718Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C718Cu) goto L_089C718C;
    return;
L_089C718C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C71B4;
      }
      goto L_089C71A0;
    }
L_089C71A0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089C71B4;
L_089C71B4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C71A0;
      }
      goto L_089C71C4;
    }
L_089C71C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74E8;
      }
      goto L_089C71CC;
    }
L_089C71CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C71ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C71ECu) goto L_089C71EC;
    return;
L_089C71EC:
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7258;
      }
      goto L_089C71FC;
    }
L_089C71FC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 32768u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7224;
      }
      goto L_089C720C;
    }
L_089C720C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7218;
      }
      goto L_089C7214;
    }
L_089C7214:
    ctx.set_gpr(30, 0u + 0u);
    goto L_089C7218;
L_089C7218:
    ctx.set_gpr(4, ctx.gpr[3] & 32767u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7228;
      }
      goto L_089C7224;
    }
L_089C7224:
    ctx.set_gpr(4, ctx.gpr[3] | 32768u);
    goto L_089C7228;
L_089C7228:
    ctx.set_gpr(3, ctx.gpr[4] & 32768u);
    ctx.set_gpr(2, ctx.gpr[4] & 31u);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] & 31744u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] & 992u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    goto L_089C7258;
L_089C7258:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C71FC;
      }
      goto L_089C7268;
    }
L_089C7268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74E8;
      }
      goto L_089C7270;
    }
L_089C7270:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C7290u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7290u) goto L_089C7290;
    return;
L_089C7290:
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C72B8;
      }
      goto L_089C72A0;
    }
L_089C72A0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    goto L_089C72B8;
L_089C72B8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C72A0;
      }
      goto L_089C72C8;
    }
L_089C72C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74E8;
      }
      goto L_089C72D0;
    }
L_089C72D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C72F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C72F0u) goto L_089C72F0;
    return;
L_089C72F0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C733C;
      }
      goto L_089C7300;
    }
L_089C7300:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] & 65280u);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 255u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_089C733C;
L_089C733C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7300;
      }
      goto L_089C734C;
    }
L_089C734C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74E8;
      }
      goto L_089C7354;
    }
L_089C7354:
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7384;
      }
      goto L_089C7364;
    }
L_089C7364:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089C7374u);
    // nop
    goto L_089C6828;
L_089C7374:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089C7384;
L_089C7384:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7364;
      }
      goto L_089C7394;
    }
L_089C7394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74E8;
      }
      goto L_089C739C;
    }
L_089C739C:
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7420;
      }
      goto L_089C73AC;
    }
L_089C73AC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089C73BCu);
    // nop
    goto L_089C6828;
L_089C73BC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, ctx.gpr[3] & 32768u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C73E4;
      }
      goto L_089C73CC;
    }
L_089C73CC:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C73D8;
      }
      goto L_089C73D4;
    }
L_089C73D4:
    ctx.set_gpr(30, 0u + 0u);
    goto L_089C73D8;
L_089C73D8:
    ctx.set_gpr(2, ctx.gpr[3] & 32767u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C73EC;
      }
      goto L_089C73E4;
    }
L_089C73E4:
    ctx.set_gpr(2, ctx.gpr[3] | 32768u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    goto L_089C73EC;
L_089C73EC:
    ctx.set_gpr(4, ctx.gpr[2] & 65535u);
    ctx.set_gpr(3, ctx.gpr[4] & 32768u);
    ctx.set_gpr(2, ctx.gpr[4] & 31u);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] & 31744u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 10u));
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] & 992u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    goto L_089C7420;
L_089C7420:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C73AC;
      }
      goto L_089C7430;
    }
L_089C7430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74E8;
      }
      goto L_089C7438;
    }
L_089C7438:
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7478;
      }
      goto L_089C7448;
    }
L_089C7448:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089C7458u);
    // nop
    goto L_089C6828;
L_089C7458:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    goto L_089C7478;
L_089C7478:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7448;
      }
      goto L_089C7488;
    }
L_089C7488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74E8;
      }
      goto L_089C7490;
    }
L_089C7490:
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C74D8;
      }
      goto L_089C74A0;
    }
L_089C74A0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089C74B0u);
    // nop
    goto L_089C6828;
L_089C74B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    goto L_089C74D8;
L_089C74D8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C74A0;
      }
      goto L_089C74E8;
    }
L_089C74E8:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    goto L_089C74F4;
L_089C74F4:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(106)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C70E4;
      }
      goto L_089C7504;
    }
L_089C7504:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C75D0;
      }
      goto L_089C7510;
    }
L_089C7510:
    ctx.set_gpr(31, 0x089C7518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7518u) goto L_089C7518;
    return;
L_089C7518:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C7524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C7524u) goto L_089C7524;
    return;
L_089C7524:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C753Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C753Cu) goto L_089C753C;
    return;
L_089C753C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(106)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C75B0;
      }
      goto L_089C7568;
    }
L_089C7568:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089C7578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C7578u) goto L_089C7578;
    return;
L_089C7578:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C758Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C758Cu) goto L_089C758C;
    return;
L_089C758C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089C75A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C75A0u) goto L_089C75A0;
    return;
L_089C75A0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[6]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089C75B0;
L_089C75B0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(106)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7568;
      }
      goto L_089C75C4;
    }
L_089C75C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089C75D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089C75D0u) goto L_089C75D0;
    return;
L_089C75D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C75F0;
      }
      goto L_089C75DC;
    }
L_089C75DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C75F0;
      }
      goto L_089C75E8;
    }
L_089C75E8:
    ctx.set_gpr(31, 0x089C75F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 454u, 0x0892A024u>(ctx, &aot_mem) && ctx.pc == 0x089C75F0u) goto L_089C75F0;
    return;
L_089C75F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(106)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089C7618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 255u, 0x089A508Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7618u) goto L_089C7618;
    return;
L_089C7618:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7648;
      }
      goto L_089C7624;
    }
L_089C7624:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089C7630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 162u, 0x089A4A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7630u) goto L_089C7630;
    return;
L_089C7630:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7648;
      }
      goto L_089C7638;
    }
L_089C7638:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x089C7648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 241u, 0x089A1064u>(ctx, &aot_mem) && ctx.pc == 0x089C7648u) goto L_089C7648;
    return;
L_089C7648:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C7658u);
    // nop
    goto L_089C6624;
L_089C7658:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7670;
      }
      goto L_089C7668;
    }
L_089C7668:
    ctx.set_gpr(31, 0x089C7670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C7670u) goto L_089C7670;
    return;
L_089C7670:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_089C7674;
L_089C7674:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C76A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(31, 0x089C76E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x089C76E4u) goto L_089C76E4;
    return;
L_089C76E4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C7704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 391u, 0x0891DBE0u>(ctx, &aot_mem) && ctx.pc == 0x089C7704u) goto L_089C7704;
    return;
L_089C7704:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7D40;
      }
      goto L_089C7710;
    }
L_089C7710:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089C7724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C7724u) goto L_089C7724;
    return;
L_089C7724:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C77D4;
      }
      goto L_089C7734;
    }
L_089C7734:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C77D4;
      }
      goto L_089C7740;
    }
L_089C7740:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C77D4;
      }
      goto L_089C774C;
    }
L_089C774C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C77C4;
      }
      goto L_089C7758;
    }
L_089C7758:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C77C4;
      }
      goto L_089C7764;
    }
L_089C7764:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C77C4;
      }
      goto L_089C7770;
    }
L_089C7770:
    ctx.set_gpr(2, 1u << 16u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C77B4;
      }
      goto L_089C777C;
    }
L_089C777C:
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C77B4;
      }
      goto L_089C7788;
    }
L_089C7788:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C77A4;
      }
      goto L_089C7794;
    }
L_089C7794:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C77A4;
      }
      goto L_089C779C;
    }
L_089C779C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C77E8;
      }
      goto L_089C77A4;
    }
L_089C77A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C77F4;
      }
      goto L_089C77B4;
    }
L_089C77B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C77F4;
      }
      goto L_089C77C4;
    }
L_089C77C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C77F4;
      }
      goto L_089C77D4;
    }
L_089C77D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C77F4;
      }
      goto L_089C77E8;
    }
L_089C77E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_089C77F4;
L_089C77F4:
    ctx.set_gpr(31, 0x089C77FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C77FCu) goto L_089C77FC;
    return;
L_089C77FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C7808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C7808u) goto L_089C7808;
    return;
L_089C7808:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C7814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x089C7814u) goto L_089C7814;
    return;
L_089C7814:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089C7830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 333u, 0x089A1770u>(ctx, &aot_mem) && ctx.pc == 0x089C7830u) goto L_089C7830;
    return;
L_089C7830:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C78C0;
      }
      goto L_089C7838;
    }
L_089C7838:
    ctx.set_gpr(31, 0x089C7840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 707u, 0x0898B2D8u>(ctx, &aot_mem) && ctx.pc == 0x089C7840u) goto L_089C7840;
    return;
L_089C7840:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C7858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 387u, 0x08941BFCu>(ctx, &aot_mem) && ctx.pc == 0x089C7858u) goto L_089C7858;
    return;
L_089C7858:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089C7868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089C7868u) goto L_089C7868;
    return;
L_089C7868:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7894;
      }
      goto L_089C7878;
    }
L_089C7878:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7894;
      }
      goto L_089C7890;
    }
L_089C7890:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089C7894;
L_089C7894:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C78C0;
      }
      goto L_089C789C;
    }
L_089C789C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C78C0;
      }
      goto L_089C78B4;
    }
L_089C78B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C78C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089C78C0u) goto L_089C78C0;
    return;
L_089C78C0:
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C78E0;
      }
      goto L_089C78D4;
    }
L_089C78D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089C78E0;
L_089C78E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7AD0;
      }
      goto L_089C78EC;
    }
L_089C78EC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7AD0;
      }
      goto L_089C78F8;
    }
L_089C78F8:
    ctx.set_gpr(31, 0x089C7900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7900u) goto L_089C7900;
    return;
L_089C7900:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C790Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C790Cu) goto L_089C790C;
    return;
L_089C790C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C7918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x089C7918u) goto L_089C7918;
    return;
L_089C7918:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C7928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7928u) goto L_089C7928;
    return;
L_089C7928:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C7940u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7940u) goto L_089C7940;
    return;
L_089C7940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C7958u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7958u) goto L_089C7958;
    return;
L_089C7958:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C7970u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7970u) goto L_089C7970;
    return;
L_089C7970:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089C797Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 559u, 0x089A2744u>(ctx, &aot_mem) && ctx.pc == 0x089C797Cu) goto L_089C797C;
    return;
L_089C797C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C7994u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7994u) goto L_089C7994;
    return;
L_089C7994:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x089C79A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C79A0u) goto L_089C79A0;
    return;
L_089C79A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C79ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C79ACu) goto L_089C79AC;
    return;
L_089C79AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C79C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C79C4u) goto L_089C79C4;
    return;
L_089C79C4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089C79E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C79E4u) goto L_089C79E4;
    return;
L_089C79E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(101));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C7AD0;
      }
      goto L_089C7A0C;
    }
L_089C7A0C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089C7A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 485u, 0x089A6210u>(ctx, &aot_mem) && ctx.pc == 0x089C7A1Cu) goto L_089C7A1C;
    return;
L_089C7A1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7A48;
      }
      goto L_089C7A24;
    }
L_089C7A24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C7A40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C7A40u) goto L_089C7A40;
    return;
L_089C7A40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7AD0;
      }
      goto L_089C7A48;
    }
L_089C7A48:
    ctx.set_gpr(31, 0x089C7A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 707u, 0x0898B2D8u>(ctx, &aot_mem) && ctx.pc == 0x089C7A50u) goto L_089C7A50;
    return;
L_089C7A50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C7A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 387u, 0x08941BFCu>(ctx, &aot_mem) && ctx.pc == 0x089C7A68u) goto L_089C7A68;
    return;
L_089C7A68:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089C7A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089C7A78u) goto L_089C7A78;
    return;
L_089C7A78:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7AA4;
      }
      goto L_089C7A88;
    }
L_089C7A88:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7AA4;
      }
      goto L_089C7AA0;
    }
L_089C7AA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089C7AA4;
L_089C7AA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7AD0;
      }
      goto L_089C7AAC;
    }
L_089C7AAC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7AD0;
      }
      goto L_089C7AC4;
    }
L_089C7AC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C7AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7AD0u) goto L_089C7AD0;
    return;
L_089C7AD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7CE8;
      }
      goto L_089C7ADC;
    }
L_089C7ADC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C7B48;
      }
      goto L_089C7B24;
    }
L_089C7B24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C7B48;
      }
      goto L_089C7B30;
    }
L_089C7B30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C7B48;
      }
      goto L_089C7B3C;
    }
L_089C7B3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C7CE8;
      }
      goto L_089C7B48;
    }
L_089C7B48:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7B68;
      }
      goto L_089C7B50;
    }
L_089C7B50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089C7B68;
L_089C7B68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x089C7B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C7B90u) goto L_089C7B90;
    return;
L_089C7B90:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(39));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089C7BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C7BA4u) goto L_089C7BA4;
    return;
L_089C7BA4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(43));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C7BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C7BB8u) goto L_089C7BB8;
    return;
L_089C7BB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(82));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089C7BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C7BCCu) goto L_089C7BCC;
    return;
L_089C7BCC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(90));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x089C7BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089C7BE0u) goto L_089C7BE0;
    return;
L_089C7BE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x089C7BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 429u, 0x0891DEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C7BF8u) goto L_089C7BF8;
    return;
L_089C7BF8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089C7C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 437u, 0x0891DFA0u>(ctx, &aot_mem) && ctx.pc == 0x089C7C14u) goto L_089C7C14;
    return;
L_089C7C14:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7CE8;
      }
      goto L_089C7C20;
    }
L_089C7C20:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7C98;
      }
      goto L_089C7C30;
    }
L_089C7C30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x089C7C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 429u, 0x0891DEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C7C4Cu) goto L_089C7C4C;
    return;
L_089C7C4C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089C7C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 437u, 0x0891DFA0u>(ctx, &aot_mem) && ctx.pc == 0x089C7C68u) goto L_089C7C68;
    return;
L_089C7C68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7C7C;
      }
      goto L_089C7C70;
    }
L_089C7C70:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7C98;
      }
      goto L_089C7C7C;
    }
L_089C7C7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[20] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    goto L_089C7C98;
L_089C7C98:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7CE8;
      }
      goto L_089C7CA0;
    }
L_089C7CA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x089C7CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 429u, 0x0891DEA0u>(ctx, &aot_mem) && ctx.pc == 0x089C7CBCu) goto L_089C7CBC;
    return;
L_089C7CBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089C7CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 437u, 0x0891DFA0u>(ctx, &aot_mem) && ctx.pc == 0x089C7CDCu) goto L_089C7CDC;
    return;
L_089C7CDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7CE8;
      }
      goto L_089C7CE4;
    }
L_089C7CE4:
    ctx.set_gpr(18, 0u + 0u);
    goto L_089C7CE8;
L_089C7CE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x089C7CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 418u, 0x0891DDBCu>(ctx, &aot_mem) && ctx.pc == 0x089C7CF8u) goto L_089C7CF8;
    return;
L_089C7CF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089C7D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089C7D08u) goto L_089C7D08;
    return;
L_089C7D08:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089C7D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089C7D18u) goto L_089C7D18;
    return;
L_089C7D18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7D2C;
      }
      goto L_089C7D24;
    }
L_089C7D24:
    ctx.set_gpr(31, 0x089C7D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C7D2Cu) goto L_089C7D2C;
    return;
L_089C7D2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7D40;
      }
      goto L_089C7D38;
    }
L_089C7D38:
    ctx.set_gpr(31, 0x089C7D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C7D40u) goto L_089C7D40;
    return;
L_089C7D40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7D54;
      }
      goto L_089C7D4C;
    }
L_089C7D4C:
    ctx.set_gpr(31, 0x089C7D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C7D54u) goto L_089C7D54;
    return;
L_089C7D54:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7D80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 6u, 0x089C8058u>(ctx, &aot_mem); return;
      }
      goto L_089C7DB0;
    }
L_089C7DB0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(816)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(816));
    ctx.set_gpr(31, 0x089C7DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089C7DC0u) goto L_089C7DC0;
    return;
L_089C7DC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7E10;
      }
      goto L_089C7DD8;
    }
L_089C7DD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7E10;
      }
      goto L_089C7DE8;
    }
L_089C7DE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    goto L_089C7E10;
L_089C7E10:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C7E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 144u, 0x089D0A28u>(ctx, &aot_mem) && ctx.pc == 0x089C7E1Cu) goto L_089C7E1C;
    return;
L_089C7E1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F5C;
      }
      goto L_089C7E2C;
    }
L_089C7E2C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7EBC;
      }
      goto L_089C7E34;
    }
L_089C7E34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[19] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F5C;
      }
      goto L_089C7E84;
    }
L_089C7E84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C7F5C;
      }
      goto L_089C7E8C;
    }
L_089C7E8C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F5C;
      }
      goto L_089C7E98;
    }
L_089C7E98:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F5C;
      }
      goto L_089C7EBC;
    }
L_089C7EBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C7EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089C7EE8u) goto L_089C7EE8;
    return;
L_089C7EE8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F18;
      }
      goto L_089C7F04;
    }
L_089C7F04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F2C;
      }
      goto L_089C7F18;
    }
L_089C7F18:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089C7F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7F2Cu) goto L_089C7F2C;
    return;
L_089C7F2C:
    ctx.set_gpr(3, ctx.gpr[18] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    goto L_089C7F5C;
L_089C7F5C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089C7F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 23u, 0x089C8248u>(ctx, &aot_mem) && ctx.pc == 0x089C7F6Cu) goto L_089C7F6C;
    return;
L_089C7F6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7FA8;
      }
      goto L_089C7F7C;
    }
L_089C7F7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C7F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089C7F88u) goto L_089C7F88;
    return;
L_089C7F88:
    ctx.set_gpr(3, 2816u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089C7FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089C7FA0u) goto L_089C7FA0;
    return;
L_089C7FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7FE8;
      }
      goto L_089C7FA8;
    }
L_089C7FA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(824)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7FE8;
      }
      goto L_089C7FB4;
    }
L_089C7FB4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C7FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089C7FC0u) goto L_089C7FC0;
    return;
L_089C7FC0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28408)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28436)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089C7FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089C7FE8u) goto L_089C7FE8;
    return;
L_089C7FE8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(816));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C7FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089C7FF8u) goto L_089C7FF8;
    return;
L_089C7FF8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(824)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 5u, 0x089C8054u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 1u, 0x089C8004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0112(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0112_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_112(Runtime &runtime) {
    runtime.register_generated_unit(112u, 0x089C4000u, 16384u, &recomp_unit_0112, &recomp_unit_0112_entry);
    runtime.register_function(0x089C4000u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4138u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C413Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C414Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4150u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4160u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4170u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4344u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C445Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4470u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4474u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4484u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4504u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4520u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C453Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4544u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4560u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C457Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4590u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4608u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4620u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4638u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C464Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4658u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4660u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C466Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4674u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4700u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4718u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4740u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4750u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C475Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4768u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4770u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4774u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4790u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C482Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4834u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4848u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4854u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4874u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4894u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4914u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C491Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4938u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4940u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C495Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4964u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4980u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4988u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4ACCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4ED0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4EF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4F7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4FA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4FBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4FC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4FD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5100u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5108u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5138u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C513Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5148u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C514Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5158u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5164u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5170u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5178u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5184u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C518Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5230u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5248u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5258u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5270u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5280u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5288u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5290u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5308u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5320u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5344u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C534Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5364u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5378u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5398u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5404u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5410u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5418u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5428u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5434u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C543Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5450u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5458u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5464u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5474u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5480u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5490u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C549Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5508u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5510u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5518u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5524u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5530u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5538u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5540u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C554Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5554u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5564u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5570u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C557Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5584u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5594u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5600u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C560Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5618u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5624u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5630u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C563Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5648u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5650u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C565Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5664u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5674u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5688u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5694u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5704u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5710u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C571Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5724u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5734u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5744u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5750u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C575Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C576Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5778u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5784u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5790u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C579Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5808u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5814u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5820u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5824u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C582Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5878u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5884u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C589Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5924u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5934u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C593Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5948u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5968u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C597Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5990u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5BFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5ECCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6004u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6020u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6038u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6044u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C604Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6054u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6064u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6070u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6094u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6120u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6138u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6148u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6154u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6160u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6168u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C617Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6200u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6224u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6230u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C623Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C624Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6258u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6260u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C626Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6274u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6288u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C629Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6300u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C630Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6314u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6324u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6354u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6364u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C636Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6378u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6380u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6384u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6400u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C640Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C641Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C642Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6438u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6448u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6454u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6460u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6474u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C647Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C648Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6498u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6504u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6514u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C651Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6528u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C653Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6544u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C654Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6550u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6558u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6560u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C656Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6578u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6604u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6614u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6624u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C664Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C665Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C666Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6678u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6680u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C668Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6714u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6740u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6770u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6778u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6784u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6790u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6814u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6828u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6858u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6860u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6874u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6894u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6900u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6910u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C692Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6948u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6964u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6974u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6980u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C699Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6ED0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C700Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C701Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C702Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7034u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7040u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7048u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7054u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7070u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7094u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C710Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C711Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C713Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7148u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7164u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C716Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C718Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C720Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7214u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7218u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7224u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7228u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7258u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7268u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7270u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7290u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7300u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C733Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C734Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7354u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7364u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7374u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7384u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7394u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C739Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7420u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7430u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7438u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7448u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7458u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7478u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7488u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7490u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7504u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7510u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7518u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7524u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C753Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7568u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7578u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C758Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7618u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7624u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7630u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7638u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7648u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7658u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7668u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7670u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7674u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7704u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7710u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7724u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7734u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7740u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C774Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7758u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7764u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7770u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C777Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7788u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7794u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C779Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7808u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7814u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7830u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7838u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7840u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7858u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7868u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7878u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7890u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7894u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C789Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7900u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C790Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7918u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7928u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7940u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7958u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7970u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C797Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7994u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7ADCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FF8u, &recomp_unit_0112, "recomp_unit_0112");
}
} // namespace psprecomp
