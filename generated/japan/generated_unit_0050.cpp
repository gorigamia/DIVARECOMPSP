#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0050[4092] = {
    1, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 8, 9, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 15, 16,
    0, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 19, 20, 0, 0, 0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 23, 24,
    0, 0, 0, 0, 0, 0, 25, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 29, 0, 0, 0, 0, 0, 0,
    30, 31, 0, 0, 0, 0, 0, 0, 32, 33, 0, 0, 0, 0, 0, 0, 34, 35, 0, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0,
    38, 39, 0, 0, 0, 0, 0, 0, 40, 41, 0, 0, 0, 0, 0, 0, 42, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 46, 0, 0, 0, 0, 0, 0, 47, 48, 0, 0, 0, 0, 0, 0, 49, 50, 0, 0, 0, 0, 0, 0, 51, 52, 0, 0, 0, 0,
    0, 0, 53, 54, 0, 0, 0, 0, 0, 0, 55, 56, 0, 0, 0, 0, 0, 0, 57, 58, 0, 0, 0, 0, 0, 0, 59, 60, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0,
    0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    86, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0,
    0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 141, 0,
    0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 150, 0, 151, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0,
    0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185,
    0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 213, 0, 214, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219,
    0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226,
    0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 251, 0,
    0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0,
    267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 318, 0, 0, 0, 0, 319, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 335, 0, 0, 336, 0, 0,
    0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0,
    0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 357, 0, 358,
    359, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0,
    0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 370, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 382, 383, 0, 0, 384, 385, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 398, 0, 0, 399, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0,
    0, 406, 0, 0, 0, 407, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420,
    0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0,
    435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0,
    0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0,
    0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0,
    0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0,
    0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0,
    0, 477, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484,
    0, 485, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492,
    0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498,
    0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 505, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0,
    509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0,
    0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0,
    524, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0,
    0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0,
    0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 549,
    0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 556,
    0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0,
    0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0,
    0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0,
    0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 588, 0, 589, 0, 590,
    0, 591, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0,
    0, 601, 0, 0, 0, 0, 602, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 611, 612, 0, 0, 613, 0, 0, 0, 614, 0, 0,
    0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619,
    0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0,
    0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 629, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0,
    0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 636, 0, 637, 0, 0, 638, 0, 0, 0, 0, 639, 0,
    0, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0,
    0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0,
    0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 655, 656, 0, 0, 0, 0, 0, 0,
    0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662,
    0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0,
    0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0,
    0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0,
    681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0,
    686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0,
    692, 0, 0, 0, 0, 0, 693, 0, 694, 0, 695, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0,
    701, 0, 0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0,
    0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 717, 0, 0, 0, 718, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0,
    721, 0, 0, 722, 0, 723, 0, 0, 724, 0, 0, 0, 725, 0, 0, 726, 727, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0,
    730, 0, 731, 0, 0, 732, 733, 0, 0, 0, 734, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 744, 0,
    745, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0,
    748, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 0, 755, 756, 0,
    0, 0, 757, 0, 758, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0,
    765, 0, 0, 0, 766, 0, 0, 767, 768, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 771, 0, 772, 0, 773, 0, 0, 0, 774, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 786, 787, 0, 0, 0, 788, 0, 789,
};
void recomp_unit_0050_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088CC000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0050[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088CC000;
    case 2u: goto L_088CC010;
    case 3u: goto L_088CC014;
    case 4u: goto L_088CC030;
    case 5u: goto L_088CC034;
    case 6u: goto L_088CC050;
    case 7u: goto L_088CC054;
    case 8u: goto L_088CC070;
    case 9u: goto L_088CC074;
    case 10u: goto L_088CC07C;
    case 11u: goto L_088CC0B8;
    case 12u: goto L_088CC0BC;
    case 13u: goto L_088CC0D8;
    case 14u: goto L_088CC0DC;
    case 15u: goto L_088CC0F8;
    case 16u: goto L_088CC0FC;
    case 17u: goto L_088CC118;
    case 18u: goto L_088CC11C;
    case 19u: goto L_088CC138;
    case 20u: goto L_088CC13C;
    case 21u: goto L_088CC158;
    case 22u: goto L_088CC15C;
    case 23u: goto L_088CC178;
    case 24u: goto L_088CC17C;
    case 25u: goto L_088CC198;
    case 26u: goto L_088CC19C;
    case 27u: goto L_088CC1A4;
    case 28u: goto L_088CC1E0;
    case 29u: goto L_088CC1E4;
    case 30u: goto L_088CC200;
    case 31u: goto L_088CC204;
    case 32u: goto L_088CC220;
    case 33u: goto L_088CC224;
    case 34u: goto L_088CC240;
    case 35u: goto L_088CC244;
    case 36u: goto L_088CC260;
    case 37u: goto L_088CC264;
    case 38u: goto L_088CC280;
    case 39u: goto L_088CC284;
    case 40u: goto L_088CC2A0;
    case 41u: goto L_088CC2A4;
    case 42u: goto L_088CC2C0;
    case 43u: goto L_088CC2C4;
    case 44u: goto L_088CC2CC;
    case 45u: goto L_088CC308;
    case 46u: goto L_088CC30C;
    case 47u: goto L_088CC328;
    case 48u: goto L_088CC32C;
    case 49u: goto L_088CC348;
    case 50u: goto L_088CC34C;
    case 51u: goto L_088CC368;
    case 52u: goto L_088CC36C;
    case 53u: goto L_088CC388;
    case 54u: goto L_088CC38C;
    case 55u: goto L_088CC3A8;
    case 56u: goto L_088CC3AC;
    case 57u: goto L_088CC3C8;
    case 58u: goto L_088CC3CC;
    case 59u: goto L_088CC3E8;
    case 60u: goto L_088CC3EC;
    case 61u: goto L_088CC3F4;
    case 62u: goto L_088CC44C;
    case 63u: goto L_088CC45C;
    case 64u: goto L_088CC48C;
    case 65u: goto L_088CC4A4;
    case 66u: goto L_088CC4BC;
    case 67u: goto L_088CC4D4;
    case 68u: goto L_088CC4EC;
    case 69u: goto L_088CC504;
    case 70u: goto L_088CC51C;
    case 71u: goto L_088CC534;
    case 72u: goto L_088CC548;
    case 73u: goto L_088CC560;
    case 74u: goto L_088CC578;
    case 75u: goto L_088CC584;
    case 76u: goto L_088CC58C;
    case 77u: goto L_088CC594;
    case 78u: goto L_088CC59C;
    case 79u: goto L_088CC5A4;
    case 80u: goto L_088CC690;
    case 81u: goto L_088CC69C;
    case 82u: goto L_088CC6AC;
    case 83u: goto L_088CC6C4;
    case 84u: goto L_088CC6D4;
    case 85u: goto L_088CC6F0;
    case 86u: goto L_088CC700;
    case 87u: goto L_088CC710;
    case 88u: goto L_088CC718;
    case 89u: goto L_088CC720;
    case 90u: goto L_088CC73C;
    case 91u: goto L_088CC74C;
    case 92u: goto L_088CC770;
    case 93u: goto L_088CC788;
    case 94u: goto L_088CC794;
    case 95u: goto L_088CC7CC;
    case 96u: goto L_088CC7DC;
    case 97u: goto L_088CC7F8;
    case 98u: goto L_088CC808;
    case 99u: goto L_088CC818;
    case 100u: goto L_088CC834;
    case 101u: goto L_088CC844;
    case 102u: goto L_088CC868;
    case 103u: goto L_088CC880;
    case 104u: goto L_088CC88C;
    case 105u: goto L_088CC8B4;
    case 106u: goto L_088CC8D4;
    case 107u: goto L_088CC8F0;
    case 108u: goto L_088CC900;
    case 109u: goto L_088CC910;
    case 110u: goto L_088CC920;
    case 111u: goto L_088CC938;
    case 112u: goto L_088CC948;
    case 113u: goto L_088CC960;
    case 114u: goto L_088CC970;
    case 115u: goto L_088CC984;
    case 116u: goto L_088CC994;
    case 117u: goto L_088CC9A4;
    case 118u: goto L_088CC9B8;
    case 119u: goto L_088CC9CC;
    case 120u: goto L_088CC9F4;
    case 121u: goto L_088CCA00;
    case 122u: goto L_088CCA0C;
    case 123u: goto L_088CCA1C;
    case 124u: goto L_088CCA30;
    case 125u: goto L_088CCA38;
    case 126u: goto L_088CCA40;
    case 127u: goto L_088CCA6C;
    case 128u: goto L_088CCA84;
    case 129u: goto L_088CCAAC;
    case 130u: goto L_088CCAB8;
    case 131u: goto L_088CCAC4;
    case 132u: goto L_088CCAD4;
    case 133u: goto L_088CCAE8;
    case 134u: goto L_088CCAF0;
    case 135u: goto L_088CCAF8;
    case 136u: goto L_088CCB24;
    case 137u: goto L_088CCB3C;
    case 138u: goto L_088CCB58;
    case 139u: goto L_088CCB60;
    case 140u: goto L_088CCB6C;
    case 141u: goto L_088CCB78;
    case 142u: goto L_088CCB8C;
    case 143u: goto L_088CCB98;
    case 144u: goto L_088CCBA0;
    case 145u: goto L_088CCBAC;
    case 146u: goto L_088CCBB8;
    case 147u: goto L_088CCBD0;
    case 148u: goto L_088CCBDC;
    case 149u: goto L_088CCBE4;
    case 150u: goto L_088CCBE8;
    case 151u: goto L_088CCBF0;
    case 152u: goto L_088CCC04;
    case 153u: goto L_088CCC1C;
    case 154u: goto L_088CCC30;
    case 155u: goto L_088CCC40;
    case 156u: goto L_088CCC4C;
    case 157u: goto L_088CCC54;
    case 158u: goto L_088CCC5C;
    case 159u: goto L_088CCC8C;
    case 160u: goto L_088CCC9C;
    case 161u: goto L_088CCCAC;
    case 162u: goto L_088CCCB8;
    case 163u: goto L_088CCCC8;
    case 164u: goto L_088CCCCC;
    case 165u: goto L_088CCCE4;
    case 166u: goto L_088CCD00;
    case 167u: goto L_088CCD10;
    case 168u: goto L_088CCD20;
    case 169u: goto L_088CCD58;
    case 170u: goto L_088CCD68;
    case 171u: goto L_088CCD78;
    case 172u: goto L_088CCD88;
    case 173u: goto L_088CCD98;
    case 174u: goto L_088CCDA0;
    case 175u: goto L_088CCDB0;
    case 176u: goto L_088CCDCC;
    case 177u: goto L_088CCDDC;
    case 178u: goto L_088CCDE8;
    case 179u: goto L_088CCDF0;
    case 180u: goto L_088CCDF8;
    case 181u: goto L_088CCE44;
    case 182u: goto L_088CCE54;
    case 183u: goto L_088CCE5C;
    case 184u: goto L_088CCE74;
    case 185u: goto L_088CCE7C;
    case 186u: goto L_088CCE88;
    case 187u: goto L_088CCE94;
    case 188u: goto L_088CCEA8;
    case 189u: goto L_088CCEC0;
    case 190u: goto L_088CCEDC;
    case 191u: goto L_088CCEEC;
    case 192u: goto L_088CCF10;
    case 193u: goto L_088CCF2C;
    case 194u: goto L_088CCF44;
    case 195u: goto L_088CCF5C;
    case 196u: goto L_088CCF70;
    case 197u: goto L_088CCF80;
    case 198u: goto L_088CCFA8;
    case 199u: goto L_088CCFC0;
    case 200u: goto L_088CCFCC;
    case 201u: goto L_088CCFD8;
    case 202u: goto L_088CCFE8;
    case 203u: goto L_088CCFF8;
    case 204u: goto L_088CD014;
    case 205u: goto L_088CD024;
    case 206u: goto L_088CD034;
    case 207u: goto L_088CD03C;
    case 208u: goto L_088CD050;
    case 209u: goto L_088CD068;
    case 210u: goto L_088CD080;
    case 211u: goto L_088CD08C;
    case 212u: goto L_088CD0A0;
    case 213u: goto L_088CD0A8;
    case 214u: goto L_088CD0B0;
    case 215u: goto L_088CD0B4;
    case 216u: goto L_088CD0C8;
    case 217u: goto L_088CD0DC;
    case 218u: goto L_088CD0EC;
    case 219u: goto L_088CD0FC;
    case 220u: goto L_088CD10C;
    case 221u: goto L_088CD11C;
    case 222u: goto L_088CD140;
    case 223u: goto L_088CD154;
    case 224u: goto L_088CD164;
    case 225u: goto L_088CD170;
    case 226u: goto L_088CD17C;
    case 227u: goto L_088CD188;
    case 228u: goto L_088CD198;
    case 229u: goto L_088CD1A4;
    case 230u: goto L_088CD1B4;
    case 231u: goto L_088CD1B8;
    case 232u: goto L_088CD1D0;
    case 233u: goto L_088CD1FC;
    case 234u: goto L_088CD20C;
    case 235u: goto L_088CD218;
    case 236u: goto L_088CD248;
    case 237u: goto L_088CD288;
    case 238u: goto L_088CD298;
    case 239u: goto L_088CD2A4;
    case 240u: goto L_088CD2B0;
    case 241u: goto L_088CD2BC;
    case 242u: goto L_088CD2C8;
    case 243u: goto L_088CD32C;
    case 244u: goto L_088CD33C;
    case 245u: goto L_088CD358;
    case 246u: goto L_088CD378;
    case 247u: goto L_088CD3A4;
    case 248u: goto L_088CD3C4;
    case 249u: goto L_088CD3D0;
    case 250u: goto L_088CD3F4;
    case 251u: goto L_088CD3F8;
    case 252u: goto L_088CD40C;
    case 253u: goto L_088CD424;
    case 254u: goto L_088CD444;
    case 255u: goto L_088CD450;
    case 256u: goto L_088CD458;
    case 257u: goto L_088CD460;
    case 258u: goto L_088CD468;
    case 259u: goto L_088CD490;
    case 260u: goto L_088CD4A0;
    case 261u: goto L_088CD4B8;
    case 262u: goto L_088CD4C4;
    case 263u: goto L_088CD4D4;
    case 264u: goto L_088CD4D8;
    case 265u: goto L_088CD4F0;
    case 266u: goto L_088CD4F8;
    case 267u: goto L_088CD500;
    case 268u: goto L_088CD508;
    case 269u: goto L_088CD52C;
    case 270u: goto L_088CD544;
    case 271u: goto L_088CD550;
    case 272u: goto L_088CD578;
    case 273u: goto L_088CD588;
    case 274u: goto L_088CD5A0;
    case 275u: goto L_088CD5B8;
    case 276u: goto L_088CD5F0;
    case 277u: goto L_088CD600;
    case 278u: goto L_088CD618;
    case 279u: goto L_088CD634;
    case 280u: goto L_088CD688;
    case 281u: goto L_088CD69C;
    case 282u: goto L_088CD6A4;
    case 283u: goto L_088CD6B4;
    case 284u: goto L_088CD6F0;
    case 285u: goto L_088CD700;
    case 286u: goto L_088CD728;
    case 287u: goto L_088CD738;
    case 288u: goto L_088CD740;
    case 289u: goto L_088CD76C;
    case 290u: goto L_088CD778;
    case 291u: goto L_088CD78C;
    case 292u: goto L_088CD7AC;
    case 293u: goto L_088CD7D8;
    case 294u: goto L_088CD7FC;
    case 295u: goto L_088CD820;
    case 296u: goto L_088CD834;
    case 297u: goto L_088CD838;
    case 298u: goto L_088CD84C;
    case 299u: goto L_088CD858;
    case 300u: goto L_088CD860;
    case 301u: goto L_088CD8B4;
    case 302u: goto L_088CD8C8;
    case 303u: goto L_088CD8D0;
    case 304u: goto L_088CD8E0;
    case 305u: goto L_088CD91C;
    case 306u: goto L_088CD92C;
    case 307u: goto L_088CD954;
    case 308u: goto L_088CD964;
    case 309u: goto L_088CD96C;
    case 310u: goto L_088CD998;
    case 311u: goto L_088CD9A4;
    case 312u: goto L_088CD9B8;
    case 313u: goto L_088CD9D8;
    case 314u: goto L_088CDA04;
    case 315u: goto L_088CDA28;
    case 316u: goto L_088CDA4C;
    case 317u: goto L_088CDA60;
    case 318u: goto L_088CDA64;
    case 319u: goto L_088CDA78;
    case 320u: goto L_088CDA80;
    case 321u: goto L_088CDAA8;
    case 322u: goto L_088CDACC;
    case 323u: goto L_088CDAE4;
    case 324u: goto L_088CDAEC;
    case 325u: goto L_088CDB0C;
    case 326u: goto L_088CDB1C;
    case 327u: goto L_088CDB44;
    case 328u: goto L_088CDB54;
    case 329u: goto L_088CDB70;
    case 330u: goto L_088CDB80;
    case 331u: goto L_088CDBA4;
    case 332u: goto L_088CDBBC;
    case 333u: goto L_088CDBCC;
    case 334u: goto L_088CDBE0;
    case 335u: goto L_088CDBE8;
    case 336u: goto L_088CDBF4;
    case 337u: goto L_088CDC04;
    case 338u: goto L_088CDC24;
    case 339u: goto L_088CDC34;
    case 340u: goto L_088CDC4C;
    case 341u: goto L_088CDC64;
    case 342u: goto L_088CDC70;
    case 343u: goto L_088CDC84;
    case 344u: goto L_088CDC8C;
    case 345u: goto L_088CDCA8;
    case 346u: goto L_088CDCB4;
    case 347u: goto L_088CDCC4;
    case 348u: goto L_088CDCCC;
    case 349u: goto L_088CDCE0;
    case 350u: goto L_088CDCE8;
    case 351u: goto L_088CDD28;
    case 352u: goto L_088CDD34;
    case 353u: goto L_088CDD40;
    case 354u: goto L_088CDD4C;
    case 355u: goto L_088CDD58;
    case 356u: goto L_088CDD6C;
    case 357u: goto L_088CDD74;
    case 358u: goto L_088CDD7C;
    case 359u: goto L_088CDD80;
    case 360u: goto L_088CDD88;
    case 361u: goto L_088CDD94;
    case 362u: goto L_088CDDAC;
    case 363u: goto L_088CDDB8;
    case 364u: goto L_088CDDD0;
    case 365u: goto L_088CDDE0;
    case 366u: goto L_088CDDF8;
    case 367u: goto L_088CDE14;
    case 368u: goto L_088CDE30;
    case 369u: goto L_088CDE3C;
    case 370u: goto L_088CDE44;
    case 371u: goto L_088CDE48;
    case 372u: goto L_088CDE70;
    case 373u: goto L_088CDEA4;
    case 374u: goto L_088CDEB0;
    case 375u: goto L_088CDEC0;
    case 376u: goto L_088CDED8;
    case 377u: goto L_088CDEE0;
    case 378u: goto L_088CDEF0;
    case 379u: goto L_088CDF08;
    case 380u: goto L_088CDF34;
    case 381u: goto L_088CDF3C;
    case 382u: goto L_088CDF48;
    case 383u: goto L_088CDF4C;
    case 384u: goto L_088CDF58;
    case 385u: goto L_088CDF5C;
    case 386u: goto L_088CDF80;
    case 387u: goto L_088CDFC0;
    case 388u: goto L_088CDFD0;
    case 389u: goto L_088CDFDC;
    case 390u: goto L_088CDFE8;
    case 391u: goto L_088CE000;
    case 392u: goto L_088CE020;
    case 393u: goto L_088CE02C;
    case 394u: goto L_088CE038;
    case 395u: goto L_088CE044;
    case 396u: goto L_088CE054;
    case 397u: goto L_088CE064;
    case 398u: goto L_088CE06C;
    case 399u: goto L_088CE078;
    case 400u: goto L_088CE090;
    case 401u: goto L_088CE0A0;
    case 402u: goto L_088CE0AC;
    case 403u: goto L_088CE0B8;
    case 404u: goto L_088CE0C0;
    case 405u: goto L_088CE0E4;
    case 406u: goto L_088CE104;
    case 407u: goto L_088CE114;
    case 408u: goto L_088CE11C;
    case 409u: goto L_088CE124;
    case 410u: goto L_088CE130;
    case 411u: goto L_088CE144;
    case 412u: goto L_088CE154;
    case 413u: goto L_088CE170;
    case 414u: goto L_088CE184;
    case 415u: goto L_088CE194;
    case 416u: goto L_088CE1B0;
    case 417u: goto L_088CE1C8;
    case 418u: goto L_088CE1D0;
    case 419u: goto L_088CE1E0;
    case 420u: goto L_088CE1FC;
    case 421u: goto L_088CE20C;
    case 422u: goto L_088CE230;
    case 423u: goto L_088CE248;
    case 424u: goto L_088CE25C;
    case 425u: goto L_088CE268;
    case 426u: goto L_088CE2A0;
    case 427u: goto L_088CE2B0;
    case 428u: goto L_088CE2CC;
    case 429u: goto L_088CE2EC;
    case 430u: goto L_088CE2FC;
    case 431u: goto L_088CE320;
    case 432u: goto L_088CE33C;
    case 433u: goto L_088CE354;
    case 434u: goto L_088CE36C;
    case 435u: goto L_088CE380;
    case 436u: goto L_088CE390;
    case 437u: goto L_088CE3B8;
    case 438u: goto L_088CE3D0;
    case 439u: goto L_088CE3E0;
    case 440u: goto L_088CE3F0;
    case 441u: goto L_088CE40C;
    case 442u: goto L_088CE41C;
    case 443u: goto L_088CE42C;
    case 444u: goto L_088CE43C;
    case 445u: goto L_088CE450;
    case 446u: goto L_088CE460;
    case 447u: goto L_088CE478;
    case 448u: goto L_088CE488;
    case 449u: goto L_088CE49C;
    case 450u: goto L_088CE4D0;
    case 451u: goto L_088CE4E0;
    case 452u: goto L_088CE4E8;
    case 453u: goto L_088CE50C;
    case 454u: goto L_088CE518;
    case 455u: goto L_088CE528;
    case 456u: goto L_088CE538;
    case 457u: goto L_088CE550;
    case 458u: goto L_088CE570;
    case 459u: goto L_088CE584;
    case 460u: goto L_088CE598;
    case 461u: goto L_088CE5AC;
    case 462u: goto L_088CE5B0;
    case 463u: goto L_088CE5C0;
    case 464u: goto L_088CE5D0;
    case 465u: goto L_088CE630;
    case 466u: goto L_088CE634;
    case 467u: goto L_088CE644;
    case 468u: goto L_088CE65C;
    case 469u: goto L_088CE68C;
    case 470u: goto L_088CE6A4;
    case 471u: goto L_088CE6C0;
    case 472u: goto L_088CE6DC;
    case 473u: goto L_088CE6F8;
    case 474u: goto L_088CE714;
    case 475u: goto L_088CE738;
    case 476u: goto L_088CE764;
    case 477u: goto L_088CE784;
    case 478u: goto L_088CE790;
    case 479u: goto L_088CE7A4;
    case 480u: goto L_088CE7C4;
    case 481u: goto L_088CE7D0;
    case 482u: goto L_088CE7DC;
    case 483u: goto L_088CE7EC;
    case 484u: goto L_088CE7FC;
    case 485u: goto L_088CE804;
    case 486u: goto L_088CE818;
    case 487u: goto L_088CE820;
    case 488u: goto L_088CE834;
    case 489u: goto L_088CE844;
    case 490u: goto L_088CE854;
    case 491u: goto L_088CE85C;
    case 492u: goto L_088CE87C;
    case 493u: goto L_088CE888;
    case 494u: goto L_088CE89C;
    case 495u: goto L_088CE8BC;
    case 496u: goto L_088CE8D0;
    case 497u: goto L_088CE8E8;
    case 498u: goto L_088CE8FC;
    case 499u: goto L_088CE904;
    case 500u: goto L_088CE90C;
    case 501u: goto L_088CE928;
    case 502u: goto L_088CE938;
    case 503u: goto L_088CE95C;
    case 504u: goto L_088CE96C;
    case 505u: goto L_088CE974;
    case 506u: goto L_088CE9BC;
    case 507u: goto L_088CE9D4;
    case 508u: goto L_088CE9E4;
    case 509u: goto L_088CEA00;
    case 510u: goto L_088CEA10;
    case 511u: goto L_088CEA20;
    case 512u: goto L_088CEA50;
    case 513u: goto L_088CEA60;
    case 514u: goto L_088CEA68;
    case 515u: goto L_088CEA98;
    case 516u: goto L_088CEAA8;
    case 517u: goto L_088CEAB0;
    case 518u: goto L_088CEAF8;
    case 519u: goto L_088CEB08;
    case 520u: goto L_088CEB20;
    case 521u: goto L_088CEB3C;
    case 522u: goto L_088CEB4C;
    case 523u: goto L_088CEB5C;
    case 524u: goto L_088CEB80;
    case 525u: goto L_088CEB90;
    case 526u: goto L_088CEB9C;
    case 527u: goto L_088CEBC0;
    case 528u: goto L_088CEBD8;
    case 529u: goto L_088CEBE4;
    case 530u: goto L_088CEC0C;
    case 531u: goto L_088CEC2C;
    case 532u: goto L_088CEC48;
    case 533u: goto L_088CEC58;
    case 534u: goto L_088CEC68;
    case 535u: goto L_088CEC8C;
    case 536u: goto L_088CEC98;
    case 537u: goto L_088CECA8;
    case 538u: goto L_088CECB8;
    case 539u: goto L_088CECC8;
    case 540u: goto L_088CECD4;
    case 541u: goto L_088CECE4;
    case 542u: goto L_088CECF4;
    case 543u: goto L_088CED04;
    case 544u: goto L_088CED20;
    case 545u: goto L_088CED38;
    case 546u: goto L_088CED40;
    case 547u: goto L_088CED50;
    case 548u: goto L_088CED64;
    case 549u: goto L_088CED7C;
    case 550u: goto L_088CED8C;
    case 551u: goto L_088CEDA4;
    case 552u: goto L_088CEDC8;
    case 553u: goto L_088CEDD0;
    case 554u: goto L_088CEDDC;
    case 555u: goto L_088CEDF0;
    case 556u: goto L_088CEDFC;
    case 557u: goto L_088CEE04;
    case 558u: goto L_088CEE1C;
    case 559u: goto L_088CEE34;
    case 560u: goto L_088CEE54;
    case 561u: goto L_088CEE60;
    case 562u: goto L_088CEE74;
    case 563u: goto L_088CEE88;
    case 564u: goto L_088CEE98;
    case 565u: goto L_088CEEA8;
    case 566u: goto L_088CEEB8;
    case 567u: goto L_088CEED0;
    case 568u: goto L_088CEEE0;
    case 569u: goto L_088CEEF8;
    case 570u: goto L_088CEF08;
    case 571u: goto L_088CEF1C;
    case 572u: goto L_088CEF3C;
    case 573u: goto L_088CEF4C;
    case 574u: goto L_088CEF68;
    case 575u: goto L_088CEF78;
    case 576u: goto L_088CEF9C;
    case 577u: goto L_088CEFB4;
    case 578u: goto L_088CEFC8;
    case 579u: goto L_088CEFD4;
    case 580u: goto L_088CEFE0;
    case 581u: goto L_088CF018;
    case 582u: goto L_088CF028;
    case 583u: goto L_088CF044;
    case 584u: goto L_088CF04C;
    case 585u: goto L_088CF054;
    case 586u: goto L_088CF05C;
    case 587u: goto L_088CF064;
    case 588u: goto L_088CF06C;
    case 589u: goto L_088CF074;
    case 590u: goto L_088CF07C;
    case 591u: goto L_088CF084;
    case 592u: goto L_088CF08C;
    case 593u: goto L_088CF094;
    case 594u: goto L_088CF0B0;
    case 595u: goto L_088CF0CC;
    case 596u: goto L_088CF0E8;
    case 597u: goto L_088CF0F0;
    case 598u: goto L_088CF118;
    case 599u: goto L_088CF130;
    case 600u: goto L_088CF164;
    case 601u: goto L_088CF184;
    case 602u: goto L_088CF198;
    case 603u: goto L_088CF19C;
    case 604u: goto L_088CF1A8;
    case 605u: goto L_088CF1B8;
    case 606u: goto L_088CF1D8;
    case 607u: goto L_088CF20C;
    case 608u: goto L_088CF220;
    case 609u: goto L_088CF234;
    case 610u: goto L_088CF24C;
    case 611u: goto L_088CF254;
    case 612u: goto L_088CF258;
    case 613u: goto L_088CF264;
    case 614u: goto L_088CF274;
    case 615u: goto L_088CF288;
    case 616u: goto L_088CF294;
    case 617u: goto L_088CF2C0;
    case 618u: goto L_088CF2D8;
    case 619u: goto L_088CF2FC;
    case 620u: goto L_088CF30C;
    case 621u: goto L_088CF324;
    case 622u: goto L_088CF334;
    case 623u: goto L_088CF348;
    case 624u: goto L_088CF360;
    case 625u: goto L_088CF370;
    case 626u: goto L_088CF394;
    case 627u: goto L_088CF3A8;
    case 628u: goto L_088CF3D0;
    case 629u: goto L_088CF3D4;
    case 630u: goto L_088CF3E0;
    case 631u: goto L_088CF3EC;
    case 632u: goto L_088CF408;
    case 633u: goto L_088CF418;
    case 634u: goto L_088CF438;
    case 635u: goto L_088CF448;
    case 636u: goto L_088CF450;
    case 637u: goto L_088CF458;
    case 638u: goto L_088CF464;
    case 639u: goto L_088CF478;
    case 640u: goto L_088CF488;
    case 641u: goto L_088CF4A4;
    case 642u: goto L_088CF4BC;
    case 643u: goto L_088CF4C4;
    case 644u: goto L_088CF4D4;
    case 645u: goto L_088CF4F4;
    case 646u: goto L_088CF510;
    case 647u: goto L_088CF528;
    case 648u: goto L_088CF548;
    case 649u: goto L_088CF560;
    case 650u: goto L_088CF574;
    case 651u: goto L_088CF588;
    case 652u: goto L_088CF5B0;
    case 653u: goto L_088CF5BC;
    case 654u: goto L_088CF5CC;
    case 655u: goto L_088CF5E0;
    case 656u: goto L_088CF5E4;
    case 657u: goto L_088CF604;
    case 658u: goto L_088CF61C;
    case 659u: goto L_088CF64C;
    case 660u: goto L_088CF65C;
    case 661u: goto L_088CF66C;
    case 662u: goto L_088CF67C;
    case 663u: goto L_088CF694;
    case 664u: goto L_088CF6C0;
    case 665u: goto L_088CF6D8;
    case 666u: goto L_088CF6EC;
    case 667u: goto L_088CF704;
    case 668u: goto L_088CF71C;
    case 669u: goto L_088CF728;
    case 670u: goto L_088CF734;
    case 671u: goto L_088CF764;
    case 672u: goto L_088CF798;
    case 673u: goto L_088CF7C8;
    case 674u: goto L_088CF7D8;
    case 675u: goto L_088CF7E8;
    case 676u: goto L_088CF804;
    case 677u: goto L_088CF824;
    case 678u: goto L_088CF830;
    case 679u: goto L_088CF84C;
    case 680u: goto L_088CF85C;
    case 681u: goto L_088CF880;
    case 682u: goto L_088CF898;
    case 683u: goto L_088CF8AC;
    case 684u: goto L_088CF8B8;
    case 685u: goto L_088CF8F0;
    case 686u: goto L_088CF900;
    case 687u: goto L_088CF91C;
    case 688u: goto L_088CF940;
    case 689u: goto L_088CF950;
    case 690u: goto L_088CF960;
    case 691u: goto L_088CF970;
    case 692u: goto L_088CF980;
    case 693u: goto L_088CF998;
    case 694u: goto L_088CF9A0;
    case 695u: goto L_088CF9A8;
    case 696u: goto L_088CF9B0;
    case 697u: goto L_088CF9BC;
    case 698u: goto L_088CF9C8;
    case 699u: goto L_088CF9D8;
    case 700u: goto L_088CF9F0;
    case 701u: goto L_088CFA00;
    case 702u: goto L_088CFA18;
    case 703u: goto L_088CFA28;
    case 704u: goto L_088CFA3C;
    case 705u: goto L_088CFA44;
    case 706u: goto L_088CFA4C;
    case 707u: goto L_088CFA74;
    case 708u: goto L_088CFA84;
    case 709u: goto L_088CFA94;
    case 710u: goto L_088CFAAC;
    case 711u: goto L_088CFAC8;
    case 712u: goto L_088CFAD0;
    case 713u: goto L_088CFAD8;
    case 714u: goto L_088CFB10;
    case 715u: goto L_088CFB20;
    case 716u: goto L_088CFB30;
    case 717u: goto L_088CFB3C;
    case 718u: goto L_088CFB4C;
    case 719u: goto L_088CFB50;
    case 720u: goto L_088CFB68;
    case 721u: goto L_088CFB80;
    case 722u: goto L_088CFB8C;
    case 723u: goto L_088CFB94;
    case 724u: goto L_088CFBA0;
    case 725u: goto L_088CFBB0;
    case 726u: goto L_088CFBBC;
    case 727u: goto L_088CFBC0;
    case 728u: goto L_088CFBCC;
    case 729u: goto L_088CFBE0;
    case 730u: goto L_088CFC00;
    case 731u: goto L_088CFC08;
    case 732u: goto L_088CFC14;
    case 733u: goto L_088CFC18;
    case 734u: goto L_088CFC28;
    case 735u: goto L_088CFC34;
    case 736u: goto L_088CFC40;
    case 737u: goto L_088CFC54;
    case 738u: goto L_088CFC68;
    case 739u: goto L_088CFC70;
    case 740u: goto L_088CFCB4;
    case 741u: goto L_088CFCC0;
    case 742u: goto L_088CFCD8;
    case 743u: goto L_088CFCEC;
    case 744u: goto L_088CFCF8;
    case 745u: goto L_088CFD00;
    case 746u: goto L_088CFD1C;
    case 747u: goto L_088CFD74;
    case 748u: goto L_088CFD80;
    case 749u: goto L_088CFD8C;
    case 750u: goto L_088CFDA4;
    case 751u: goto L_088CFDAC;
    case 752u: goto L_088CFDBC;
    case 753u: goto L_088CFDD0;
    case 754u: goto L_088CFDE0;
    case 755u: goto L_088CFDF4;
    case 756u: goto L_088CFDF8;
    case 757u: goto L_088CFE08;
    case 758u: goto L_088CFE10;
    case 759u: goto L_088CFE20;
    case 760u: goto L_088CFE30;
    case 761u: goto L_088CFE40;
    case 762u: goto L_088CFE50;
    case 763u: goto L_088CFE60;
    case 764u: goto L_088CFE70;
    case 765u: goto L_088CFE80;
    case 766u: goto L_088CFE90;
    case 767u: goto L_088CFE9C;
    case 768u: goto L_088CFEA0;
    case 769u: goto L_088CFEB8;
    case 770u: goto L_088CFEC0;
    case 771u: goto L_088CFED4;
    case 772u: goto L_088CFEDC;
    case 773u: goto L_088CFEE4;
    case 774u: goto L_088CFEF4;
    case 775u: goto L_088CFF1C;
    case 776u: goto L_088CFF28;
    case 777u: goto L_088CFF38;
    case 778u: goto L_088CFF44;
    case 779u: goto L_088CFF50;
    case 780u: goto L_088CFF5C;
    case 781u: goto L_088CFF84;
    case 782u: goto L_088CFF94;
    case 783u: goto L_088CFF9C;
    case 784u: goto L_088CFFA8;
    case 785u: goto L_088CFFBC;
    case 786u: goto L_088CFFD0;
    case 787u: goto L_088CFFD4;
    case 788u: goto L_088CFFE4;
    case 789u: goto L_088CFFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088CC000:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC014;
      }
      goto L_088CC010;
    }
L_088CC010:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC014;
L_088CC014:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27476)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC034;
      }
      goto L_088CC030;
    }
L_088CC030:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC034;
L_088CC034:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27472)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC054;
      }
      goto L_088CC050;
    }
L_088CC050:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC054;
L_088CC054:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC074;
      }
      goto L_088CC070;
    }
L_088CC070:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC074;
L_088CC074:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC07C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27496)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC0BC;
      }
      goto L_088CC0B8;
    }
L_088CC0B8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC0BC;
L_088CC0BC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27492)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC0DC;
      }
      goto L_088CC0D8;
    }
L_088CC0D8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC0DC;
L_088CC0DC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27488)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC0FC;
      }
      goto L_088CC0F8;
    }
L_088CC0F8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC0FC;
L_088CC0FC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27484)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC11C;
      }
      goto L_088CC118;
    }
L_088CC118:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC11C;
L_088CC11C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27480)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC13C;
      }
      goto L_088CC138;
    }
L_088CC138:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC13C;
L_088CC13C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27476)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC15C;
      }
      goto L_088CC158;
    }
L_088CC158:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC15C;
L_088CC15C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27472)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC17C;
      }
      goto L_088CC178;
    }
L_088CC178:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC17C;
L_088CC17C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC19C;
      }
      goto L_088CC198;
    }
L_088CC198:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC19C;
L_088CC19C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC1A4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27496)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC1E4;
      }
      goto L_088CC1E0;
    }
L_088CC1E0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC1E4;
L_088CC1E4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27492)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC204;
      }
      goto L_088CC200;
    }
L_088CC200:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC204;
L_088CC204:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27488)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC224;
      }
      goto L_088CC220;
    }
L_088CC220:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC224;
L_088CC224:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27484)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC244;
      }
      goto L_088CC240;
    }
L_088CC240:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC244;
L_088CC244:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27480)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC264;
      }
      goto L_088CC260;
    }
L_088CC260:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC264;
L_088CC264:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27476)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC284;
      }
      goto L_088CC280;
    }
L_088CC280:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC284;
L_088CC284:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27472)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC2A4;
      }
      goto L_088CC2A0;
    }
L_088CC2A0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC2A4;
L_088CC2A4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC2C4;
      }
      goto L_088CC2C0;
    }
L_088CC2C0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC2C4;
L_088CC2C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC2CC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27496)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC30C;
      }
      goto L_088CC308;
    }
L_088CC308:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC30C;
L_088CC30C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27492)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC32C;
      }
      goto L_088CC328;
    }
L_088CC328:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC32C;
L_088CC32C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27488)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC34C;
      }
      goto L_088CC348;
    }
L_088CC348:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC34C;
L_088CC34C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27484)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC36C;
      }
      goto L_088CC368;
    }
L_088CC368:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC36C;
L_088CC36C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27480)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC38C;
      }
      goto L_088CC388;
    }
L_088CC388:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC38C;
L_088CC38C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27476)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC3AC;
      }
      goto L_088CC3A8;
    }
L_088CC3A8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC3AC;
L_088CC3AC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27472)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC3CC;
      }
      goto L_088CC3C8;
    }
L_088CC3C8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC3CC;
L_088CC3CC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CC3EC;
      }
      goto L_088CC3E8;
    }
L_088CC3E8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_088CC3EC;
L_088CC3EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC3F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(9, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25888)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25892)));
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25888), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25892), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[9] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088CC44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 146u, 0x089D9014u>(ctx, &aot_mem) && ctx.pc == 0x088CC44Cu) goto L_088CC44C;
    return;
L_088CC44C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC45C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(420)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC48Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC48Cu) goto L_088CC48C;
    return;
L_088CC48C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC4A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC4A4u) goto L_088CC4A4;
    return;
L_088CC4A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(404)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC4BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC4BCu) goto L_088CC4BC;
    return;
L_088CC4BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC4D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC4D4u) goto L_088CC4D4;
    return;
L_088CC4D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(428)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC4ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC4ECu) goto L_088CC4EC;
    return;
L_088CC4EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC504u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC504u) goto L_088CC504;
    return;
L_088CC504:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC51Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC51Cu) goto L_088CC51C;
    return;
L_088CC51C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC534u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC534u) goto L_088CC534;
    return;
L_088CC534:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(388)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC548u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC548u) goto L_088CC548;
    return;
L_088CC548:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC560u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC560u) goto L_088CC560;
    return;
L_088CC560:
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
L_088CC578:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC584:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC58C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC594:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC59C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC5A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24836)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24832)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24844)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24840)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CC69C;
      }
      goto L_088CC690;
    }
L_088CC690:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088CC69C;
L_088CC69C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CC6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CC6ACu) goto L_088CC6AC;
    return;
L_088CC6AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(23));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088CC6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CC6C4u) goto L_088CC6C4;
    return;
L_088CC6C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CC6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CC6D4u) goto L_088CC6D4;
    return;
L_088CC6D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CC6F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CC700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC700u) goto L_088CC700;
    return;
L_088CC700:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC710:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC718:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC720:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CC73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 133u, 0x089D8E14u>(ctx, &aot_mem) && ctx.pc == 0x088CC73Cu) goto L_088CC73C;
    return;
L_088CC73C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC74C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(396)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC770u) goto L_088CC770;
    return;
L_088CC770:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC788:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC794:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(31, 0x088CC7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CC7CCu) goto L_088CC7CC;
    return;
L_088CC7CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CC7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CC7DCu) goto L_088CC7DC;
    return;
L_088CC7DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CC7F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CC808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC808u) goto L_088CC808;
    return;
L_088CC808:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088CC834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 145u, 0x089D8FFCu>(ctx, &aot_mem) && ctx.pc == 0x088CC834u) goto L_088CC834;
    return;
L_088CC834:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(436)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC868u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC868u) goto L_088CC868;
    return;
L_088CC868:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC880:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC88C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(31, 0x088CC8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CC8B4u) goto L_088CC8B4;
    return;
L_088CC8B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CC8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CC8D4u) goto L_088CC8D4;
    return;
L_088CC8D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CC8F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CC900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC900u) goto L_088CC900;
    return;
L_088CC900:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC910:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC920:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088CC938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC938u) goto L_088CC938;
    return;
L_088CC938:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC948:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088CC960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088CC960u) goto L_088CC960;
    return;
L_088CC960:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(76))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CC970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CC970u) goto L_088CC970;
    return;
L_088CC970:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC984:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CC994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 452u, 0x088C65E8u>(ctx, &aot_mem) && ctx.pc == 0x088CC994u) goto L_088CC994;
    return;
L_088CC994:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC9A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26052)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC9B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26052)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CC9CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CC9F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CC9F4u) goto L_088CC9F4;
    return;
L_088CC9F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CCA0C;
      }
      goto L_088CCA00;
    }
L_088CCA00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCA38;
      }
      goto L_088CCA0C;
    }
L_088CCA0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CCA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 458u, 0x088C6654u>(ctx, &aot_mem) && ctx.pc == 0x088CCA1Cu) goto L_088CCA1C;
    return;
L_088CCA1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CCA30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CCA30u) goto L_088CCA30;
    return;
L_088CCA30:
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    goto L_088CCA38;
L_088CCA38:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCA6C;
      }
      goto L_088CCA40;
    }
L_088CCA40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26052)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088CCA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCA6Cu) goto L_088CCA6C;
    return;
L_088CCA6C:
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
L_088CCA84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CCAACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CCAACu) goto L_088CCAAC;
    return;
L_088CCAAC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CCAC4;
      }
      goto L_088CCAB8;
    }
L_088CCAB8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCAF0;
      }
      goto L_088CCAC4;
    }
L_088CCAC4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CCAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 458u, 0x088C6654u>(ctx, &aot_mem) && ctx.pc == 0x088CCAD4u) goto L_088CCAD4;
    return;
L_088CCAD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CCAE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CCAE8u) goto L_088CCAE8;
    return;
L_088CCAE8:
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    goto L_088CCAF0;
L_088CCAF0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCB24;
      }
      goto L_088CCAF8;
    }
L_088CCAF8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26052)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088CCB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCB24u) goto L_088CCB24;
    return;
L_088CCB24:
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
L_088CCB3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26052)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CCBF0;
      }
      goto L_088CCB58;
    }
L_088CCB58:
    ctx.set_gpr(31, 0x088CCB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 227u, 0x0893CE8Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCB60u) goto L_088CCB60;
    return;
L_088CCB60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088CCB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088CCB6Cu) goto L_088CCB6C;
    return;
L_088CCB6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CCB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 186u, 0x08999170u>(ctx, &aot_mem) && ctx.pc == 0x088CCB78u) goto L_088CCB78;
    return;
L_088CCB78:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26052));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CCB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCB8Cu) goto L_088CCB8C;
    return;
L_088CCB8C:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCBE8;
      }
      goto L_088CCB98;
    }
L_088CCB98:
    ctx.set_gpr(31, 0x088CCBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 227u, 0x0893CE8Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCBA0u) goto L_088CCBA0;
    return;
L_088CCBA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088CCBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088CCBACu) goto L_088CCBAC;
    return;
L_088CCBAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CCBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 163u, 0x08998F2Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCBB8u) goto L_088CCBB8;
    return;
L_088CCBB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26052)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CCBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088CCBD0u) goto L_088CCBD0;
    return;
L_088CCBD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCBE4;
      }
      goto L_088CCBDC;
    }
L_088CCBDC:
    ctx.set_gpr(31, 0x088CCBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088CCBE4u) goto L_088CCBE4;
    return;
L_088CCBE4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088CCBE8;
L_088CCBE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CCB98;
      }
      goto L_088CCBF0;
    }
L_088CCBF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCC04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26052)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCC30;
      }
      goto L_088CCC1C;
    }
L_088CCC1C:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26052));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CCC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CCC30u) goto L_088CCC30;
    return;
L_088CCC30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCC40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCC4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCC54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCC5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CCCAC;
      }
      goto L_088CCC8C;
    }
L_088CCC8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(31, 0x088CCC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CCC9Cu) goto L_088CCC9C;
    return;
L_088CCC9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCCB8;
      }
      goto L_088CCCAC;
    }
L_088CCCAC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCCCC;
      }
      goto L_088CCCB8;
    }
L_088CCCB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CCCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CCCC8u) goto L_088CCCC8;
    return;
L_088CCCC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088CCCCC;
L_088CCCCC:
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
L_088CCCE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088CCD00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 540u, 0x089E3308u>(ctx, &aot_mem) && ctx.pc == 0x088CCD00u) goto L_088CCD00;
    return;
L_088CCD00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCD10:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(880)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCD20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CCD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CCD58u) goto L_088CCD58;
    return;
L_088CCD58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CCD88;
      }
      goto L_088CCD68;
    }
L_088CCD68:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088CCD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CCD78u) goto L_088CCD78;
    return;
L_088CCD78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(29));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCDA0;
      }
      goto L_088CCD88;
    }
L_088CCD88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(163));
    ctx.set_gpr(31, 0x088CCD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CCD98u) goto L_088CCD98;
    return;
L_088CCD98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088CCDA0;
L_088CCDA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CCDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CCDB0u) goto L_088CCDB0;
    return;
L_088CCDB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CCDCC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCDDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCDE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCDF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCDF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26072)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26076)));
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26072), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26076), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088CCE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 243u, 0x089D9FF0u>(ctx, &aot_mem) && ctx.pc == 0x088CCE44u) goto L_088CCE44;
    return;
L_088CCE44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCE54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCE5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26092)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CCEA8;
      }
      goto L_088CCE74;
    }
L_088CCE74:
    ctx.set_gpr(31, 0x088CCE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x088CCE7Cu) goto L_088CCE7C;
    return;
L_088CCE7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088CCE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088CCE88u) goto L_088CCE88;
    return;
L_088CCE88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CCE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 355u, 0x088BA060u>(ctx, &aot_mem) && ctx.pc == 0x088CCE94u) goto L_088CCE94;
    return;
L_088CCE94:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26092));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CCEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCEA8u) goto L_088CCEA8;
    return;
L_088CCEA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26092)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCEC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26092));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CCEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CCEDCu) goto L_088CCEDC;
    return;
L_088CCEDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCEEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088CCF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x088CCF10u) goto L_088CCF10;
    return;
L_088CCF10:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CCF2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CCF2Cu) goto L_088CCF2C;
    return;
L_088CCF2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CCF44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CCF44u) goto L_088CCF44;
    return;
L_088CCF44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCF5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088CCF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCF70u) goto L_088CCF70;
    return;
L_088CCF70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CCF80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CCFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CCFA8u) goto L_088CCFA8;
    return;
L_088CCFA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088CCFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CCFC0u) goto L_088CCFC0;
    return;
L_088CCFC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CCFD8;
      }
      goto L_088CCFCC;
    }
L_088CCFCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_088CCFD8;
L_088CCFD8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(31, 0x088CCFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CCFE8u) goto L_088CCFE8;
    return;
L_088CCFE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CCFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CCFF8u) goto L_088CCFF8;
    return;
L_088CCFF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CD014:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CD024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088CD024u) goto L_088CD024;
    return;
L_088CD024:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD034:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD03C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088CD050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x088CD050u) goto L_088CD050;
    return;
L_088CD050:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20068));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088CD068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 590u, 0x0895680Cu>(ctx, &aot_mem) && ctx.pc == 0x088CD068u) goto L_088CD068;
    return;
L_088CD068:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24688)));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10228));
    ctx.set_gpr(31, 0x088CD080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088CD080u) goto L_088CD080;
    return;
L_088CD080:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD0B0;
      }
      goto L_088CD08C;
    }
L_088CD08C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    ctx.set_gpr(31, 0x088CD0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x088CD0A0u) goto L_088CD0A0;
    return;
L_088CD0A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD0B0;
      }
      goto L_088CD0A8;
    }
L_088CD0A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD0B4;
      }
      goto L_088CD0B0;
    }
L_088CD0B0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088CD0B4;
L_088CD0B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20068));
    ctx.set_gpr(31, 0x088CD0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 246u, 0x089411E8u>(ctx, &aot_mem) && ctx.pc == 0x088CD0C8u) goto L_088CD0C8;
    return;
L_088CD0C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD0DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CD0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 425u, 0x08945E9Cu>(ctx, &aot_mem) && ctx.pc == 0x088CD0ECu) goto L_088CD0EC;
    return;
L_088CD0EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD0FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CD10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 426u, 0x08945EA4u>(ctx, &aot_mem) && ctx.pc == 0x088CD10Cu) goto L_088CD10C;
    return;
L_088CD10C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD11C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CD1B8;
      }
      goto L_088CD140;
    }
L_088CD140:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088CD17C;
      }
      goto L_088CD154;
    }
L_088CD154:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD170;
      }
      goto L_088CD164;
    }
L_088CD164:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD17C;
      }
      goto L_088CD170;
    }
L_088CD170:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CD17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088CD17Cu) goto L_088CD17C;
    return;
L_088CD17C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088CD1B4;
      }
      goto L_088CD188;
    }
L_088CD188:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD1A4;
      }
      goto L_088CD198;
    }
L_088CD198:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD1B4;
      }
      goto L_088CD1A4;
    }
L_088CD1A4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CD1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088CD1B4u) goto L_088CD1B4;
    return;
L_088CD1B4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    goto L_088CD1B8;
L_088CD1B8:
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
L_088CD1D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD358;
      }
      goto L_088CD1FC;
    }
L_088CD1FC:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD358;
      }
      goto L_088CD20C;
    }
L_088CD20C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088CD218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x088CD218u) goto L_088CD218;
    return;
L_088CD218:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CD248u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD248u) goto L_088CD248;
    return;
L_088CD248:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26640)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088CD288u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD288u) goto L_088CD288;
    return;
L_088CD288:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CD2B0;
      }
      goto L_088CD298;
    }
L_088CD298:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CD2B0;
      }
      goto L_088CD2A4;
    }
L_088CD2A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CD33C;
      }
      goto L_088CD2B0;
    }
L_088CD2B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32203)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD33C;
      }
      goto L_088CD2BC;
    }
L_088CD2BC:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD32C;
      }
      goto L_088CD2C8;
    }
L_088CD2C8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_088CD32C;
L_088CD32C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD2C8;
      }
      goto L_088CD33C;
    }
L_088CD33C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CD358u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD358u) goto L_088CD358;
    return;
L_088CD358:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_088CD378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD424;
      }
      goto L_088CD3A4;
    }
L_088CD3A4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[2] | 4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CD3C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD3C4u) goto L_088CD3C4;
    return;
L_088CD3C4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD3F8;
      }
      goto L_088CD3D0;
    }
L_088CD3D0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CD3F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD3F4u) goto L_088CD3F4;
    return;
L_088CD3F4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088CD3F8;
L_088CD3F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD3D0;
      }
      goto L_088CD40C;
    }
L_088CD40C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CD424u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD424u) goto L_088CD424;
    return;
L_088CD424:
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
L_088CD444:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD450:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD458:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD460:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD468:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CD4B8;
      }
      goto L_088CD490;
    }
L_088CD490:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x088CD4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CD4A0u) goto L_088CD4A0;
    return;
L_088CD4A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD4C4;
      }
      goto L_088CD4B8;
    }
L_088CD4B8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD4D8;
      }
      goto L_088CD4C4;
    }
L_088CD4C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CD4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CD4D4u) goto L_088CD4D4;
    return;
L_088CD4D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088CD4D8;
L_088CD4D8:
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
L_088CD4F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD4F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD500:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD508:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CD52Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD52Cu) goto L_088CD52C;
    return;
L_088CD52C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD544:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088CD578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 540u, 0x089E3308u>(ctx, &aot_mem) && ctx.pc == 0x088CD578u) goto L_088CD578;
    return;
L_088CD578:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088CD588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 539u, 0x089E32BCu>(ctx, &aot_mem) && ctx.pc == 0x088CD588u) goto L_088CD588;
    return;
L_088CD588:
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
L_088CD5A0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(880)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(884)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD5B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CD5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CD5F0u) goto L_088CD5F0;
    return;
L_088CD5F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(163));
    ctx.set_gpr(31, 0x088CD600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CD600u) goto L_088CD600;
    return;
L_088CD600:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CD618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CD618u) goto L_088CD618;
    return;
L_088CD618:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CD634:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26096)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26100)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26096), ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26100), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD740;
      }
      goto L_088CD688;
    }
L_088CD688:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CD6B4;
      }
      goto L_088CD69C;
    }
L_088CD69C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CD6B4;
      }
      goto L_088CD6A4;
    }
L_088CD6A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_088CD6B4;
L_088CD6B4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088CD6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 305u, 0x0881D5C0u>(ctx, &aot_mem) && ctx.pc == 0x088CD6F0u) goto L_088CD6F0;
    return;
L_088CD6F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088CD700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x088CD700u) goto L_088CD700;
    return;
L_088CD700:
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088CD728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x088CD728u) goto L_088CD728;
    return;
L_088CD728:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088CD738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x088CD738u) goto L_088CD738;
    return;
L_088CD738:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088CD740;
L_088CD740:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CD76Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD76Cu) goto L_088CD76C;
    return;
L_088CD76C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD78C;
      }
      goto L_088CD778;
    }
L_088CD778:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CD78Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD78Cu) goto L_088CD78C;
    return;
L_088CD78C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD7AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088CD7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CD7D8u) goto L_088CD7D8;
    return;
L_088CD7D8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
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
L_088CD7FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CD820u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD820u) goto L_088CD820;
    return;
L_088CD820:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CD838;
      }
      goto L_088CD834;
    }
L_088CD834:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088CD838;
L_088CD838:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD84C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD858:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD860:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26096)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26100)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26096), ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26100), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CD96C;
      }
      goto L_088CD8B4;
    }
L_088CD8B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CD8E0;
      }
      goto L_088CD8C8;
    }
L_088CD8C8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CD8E0;
      }
      goto L_088CD8D0;
    }
L_088CD8D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_088CD8E0;
L_088CD8E0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088CD91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 305u, 0x0881D5C0u>(ctx, &aot_mem) && ctx.pc == 0x088CD91Cu) goto L_088CD91C;
    return;
L_088CD91C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088CD92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x088CD92Cu) goto L_088CD92C;
    return;
L_088CD92C:
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088CD954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x088CD954u) goto L_088CD954;
    return;
L_088CD954:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088CD964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x088CD964u) goto L_088CD964;
    return;
L_088CD964:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088CD96C;
L_088CD96C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CD998u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD998u) goto L_088CD998;
    return;
L_088CD998:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CD9B8;
      }
      goto L_088CD9A4;
    }
L_088CD9A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CD9B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CD9B8u) goto L_088CD9B8;
    return;
L_088CD9B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CD9D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088CDA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CDA04u) goto L_088CDA04;
    return;
L_088CDA04:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
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
L_088CDA28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CDA4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CDA4Cu) goto L_088CDA4C;
    return;
L_088CDA4C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CDA64;
      }
      goto L_088CDA60;
    }
L_088CDA60:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088CDA64;
L_088CDA64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDA78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDA80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088CDAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 118u, 0x089D0868u>(ctx, &aot_mem) && ctx.pc == 0x088CDAA8u) goto L_088CDAA8;
    return;
L_088CDAA8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1080)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CDACCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CDACCu) goto L_088CDACC;
    return;
L_088CDACC:
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
L_088CDAE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDAEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088CDB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 104u, 0x089DCD50u>(ctx, &aot_mem) && ctx.pc == 0x088CDB0Cu) goto L_088CDB0C;
    return;
L_088CDB0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDB1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1088)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CDB44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CDB44u) goto L_088CDB44;
    return;
L_088CDB44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDB54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088CDB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 414u, 0x089BE5A0u>(ctx, &aot_mem) && ctx.pc == 0x088CDB70u) goto L_088CDB70;
    return;
L_088CDB70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDB80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(604)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CDBA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CDBA4u) goto L_088CDBA4;
    return;
L_088CDBA4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDBBC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDBCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088CDBF4;
      }
      goto L_088CDBE0;
    }
L_088CDBE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088CDBF4;
      }
      goto L_088CDBE8;
    }
L_088CDBE8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088CDBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CDBF4u) goto L_088CDBF4;
    return;
L_088CDBF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDC04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088CDC24u);
    // nop
    goto L_088CDBBC;
L_088CDC24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CDC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 158u, 0x088C4F74u>(ctx, &aot_mem) && ctx.pc == 0x088CDC34u) goto L_088CDC34;
    return;
L_088CDC34:
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
L_088CDC4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088CDC64u);
    // nop
    goto L_088CDBBC;
L_088CDC64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CDC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 429u, 0x08945EBCu>(ctx, &aot_mem) && ctx.pc == 0x088CDC70u) goto L_088CDC70;
    return;
L_088CDC70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDC84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDC8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDCCC;
      }
      goto L_088CDCA8;
    }
L_088CDCA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088CDCCC;
      }
      goto L_088CDCB4;
    }
L_088CDCB4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CDCC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CDCC4u) goto L_088CDCC4;
    return;
L_088CDCC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    goto L_088CDCCC;
L_088CDCCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDCE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDCE8:
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
          goto L_088CDD34;
      }
      goto L_088CDD28;
    }
L_088CDD28:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDE48;
      }
      goto L_088CDD34;
    }
L_088CDD34:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDD4C;
      }
      goto L_088CDD40;
    }
L_088CDD40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088CDD4C;
L_088CDD4C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDD7C;
      }
      goto L_088CDD58;
    }
L_088CDD58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24484)));
    ctx.set_gpr(31, 0x088CDD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x088CDD6Cu) goto L_088CDD6C;
    return;
L_088CDD6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDD7C;
      }
      goto L_088CDD74;
    }
L_088CDD74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDD80;
      }
      goto L_088CDD7C;
    }
L_088CDD7C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088CDD80;
L_088CDD80:
    ctx.set_gpr(31, 0x088CDD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x088CDD88u) goto L_088CDD88;
    return;
L_088CDD88:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDE30;
      }
      goto L_088CDD94;
    }
L_088CDD94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088CDDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x088CDDACu) goto L_088CDDAC;
    return;
L_088CDDAC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CDE30;
      }
      goto L_088CDDB8;
    }
L_088CDDB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CDDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088CDDD0u) goto L_088CDDD0;
    return;
L_088CDDD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CDDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 654u, 0x0895AC28u>(ctx, &aot_mem) && ctx.pc == 0x088CDDE0u) goto L_088CDDE0;
    return;
L_088CDDE0:
    ctx.set_gpr(3, 2227u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20092)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CDDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 671u, 0x0895AD18u>(ctx, &aot_mem) && ctx.pc == 0x088CDDF8u) goto L_088CDDF8;
    return;
L_088CDDF8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088CDE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x088CDE14u) goto L_088CDE14;
    return;
L_088CDE14:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CDE30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CDE30u) goto L_088CDE30;
    return;
L_088CDE30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDE44;
      }
      goto L_088CDE3C;
    }
L_088CDE3C:
    ctx.set_gpr(31, 0x088CDE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088CDE44u) goto L_088CDE44;
    return;
L_088CDE44:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_088CDE48;
L_088CDE48:
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
L_088CDE70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CDEB0;
      }
      goto L_088CDEA4;
    }
L_088CDEA4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDF5C;
      }
      goto L_088CDEB0;
    }
L_088CDEB0:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20092)));
    ctx.set_gpr(31, 0x088CDEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088CDEC0u) goto L_088CDEC0;
    return;
L_088CDEC0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, 2227u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20092)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CDED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x088CDED8u) goto L_088CDED8;
    return;
L_088CDED8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CDF58;
      }
      goto L_088CDEE0;
    }
L_088CDEE0:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20092)));
    ctx.set_gpr(31, 0x088CDEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088CDEF0u) goto L_088CDEF0;
    return;
L_088CDEF0:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDF4C;
      }
      goto L_088CDF08;
    }
L_088CDF08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088CDF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x088CDF34u) goto L_088CDF34;
    return;
L_088CDF34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CDF48;
      }
      goto L_088CDF3C;
    }
L_088CDF3C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CDF5C;
      }
      goto L_088CDF48;
    }
L_088CDF48:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088CDF4C;
L_088CDF4C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CDF08;
      }
      goto L_088CDF58;
    }
L_088CDF58:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088CDF5C;
L_088CDF5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CDF80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CDFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088CDFC0u) goto L_088CDFC0;
    return;
L_088CDFC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CDFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 654u, 0x0895AC28u>(ctx, &aot_mem) && ctx.pc == 0x088CDFD0u) goto L_088CDFD0;
    return;
L_088CDFD0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CDFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088CDFDCu) goto L_088CDFDC;
    return;
L_088CDFDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088CDFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088CDFE8u) goto L_088CDFE8;
    return;
L_088CDFE8:
    ctx.set_gpr(3, 2227u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20092)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CE000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 671u, 0x0895AD18u>(ctx, &aot_mem) && ctx.pc == 0x088CE000u) goto L_088CE000;
    return;
L_088CE000:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE020u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE020u) goto L_088CE020;
    return;
L_088CE020:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE038;
      }
      goto L_088CE02C;
    }
L_088CE02C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088CE038;
L_088CE038:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CE064;
      }
      goto L_088CE044;
    }
L_088CE044:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x088CE054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088CE054u) goto L_088CE054;
    return;
L_088CE054:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088CE064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CE064u) goto L_088CE064;
    return;
L_088CE064:
    ctx.set_gpr(31, 0x088CE06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088CE06Cu) goto L_088CE06C;
    return;
L_088CE06C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088CE078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088CE078u) goto L_088CE078;
    return;
L_088CE078:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE090u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE090u) goto L_088CE090;
    return;
L_088CE090:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE0AC;
      }
      goto L_088CE0A0;
    }
L_088CE0A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088CE0AC;
L_088CE0AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE0C0;
      }
      goto L_088CE0B8;
    }
L_088CE0B8:
    ctx.set_gpr(31, 0x088CE0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088CE0C0u) goto L_088CE0C0;
    return;
L_088CE0C0:
    ctx.set_gpr(2, 0u + 0u);
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
L_088CE0E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE104u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE104u) goto L_088CE104;
    return;
L_088CE104:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088CE114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x088CE114u) goto L_088CE114;
    return;
L_088CE114:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CE124;
      }
      goto L_088CE11C;
    }
L_088CE11C:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26104), 0u);
    goto L_088CE124;
L_088CE124:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CE130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088CE130u) goto L_088CE130;
    return;
L_088CE130:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE144:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24460)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE184;
      }
      goto L_088CE170;
    }
L_088CE170:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE184u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE184u) goto L_088CE184;
    return;
L_088CE184:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE194:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26104)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CE1D0;
      }
      goto L_088CE1B0;
    }
L_088CE1B0:
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20096));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE1C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE1C8u) goto L_088CE1C8;
    return;
L_088CE1C8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26104), ctx.gpr[2]);
    goto L_088CE1D0;
L_088CE1D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE1E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CE1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 48u, 0x089DC580u>(ctx, &aot_mem) && ctx.pc == 0x088CE1FCu) goto L_088CE1FC;
    return;
L_088CE1FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE20C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(968)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE230u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE230u) goto L_088CE230;
    return;
L_088CE230:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE248u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE248u) goto L_088CE248;
    return;
L_088CE248:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE25C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(27));
    ctx.set_gpr(31, 0x088CE2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CE2A0u) goto L_088CE2A0;
    return;
L_088CE2A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CE2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CE2B0u) goto L_088CE2B0;
    return;
L_088CE2B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CE2CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088CE2ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 243u, 0x089D9FF0u>(ctx, &aot_mem) && ctx.pc == 0x088CE2ECu) goto L_088CE2EC;
    return;
L_088CE2EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE2FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088CE320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x088CE320u) goto L_088CE320;
    return;
L_088CE320:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(848)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE33Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE33Cu) goto L_088CE33C;
    return;
L_088CE33C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE354u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE354u) goto L_088CE354;
    return;
L_088CE354:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE36C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088CE380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CE380u) goto L_088CE380;
    return;
L_088CE380:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE390:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CE3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CE3B8u) goto L_088CE3B8;
    return;
L_088CE3B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088CE3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CE3D0u) goto L_088CE3D0;
    return;
L_088CE3D0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088CE3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CE3E0u) goto L_088CE3E0;
    return;
L_088CE3E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CE3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CE3F0u) goto L_088CE3F0;
    return;
L_088CE3F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CE40C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CE41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088CE41Cu) goto L_088CE41C;
    return;
L_088CE41C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE42C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE43C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(31, 0x088CE450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CE450u) goto L_088CE450;
    return;
L_088CE450:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE460:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088CE478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088CE478u) goto L_088CE478;
    return;
L_088CE478:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CE488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CE488u) goto L_088CE488;
    return;
L_088CE488:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE49C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20600)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CE4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 243u, 0x089D9FF0u>(ctx, &aot_mem) && ctx.pc == 0x088CE4D0u) goto L_088CE4D0;
    return;
L_088CE4D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE4E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE4E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE644;
      }
      goto L_088CE50C;
    }
L_088CE50C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CE518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 253u, 0x089C9A88u>(ctx, &aot_mem) && ctx.pc == 0x088CE518u) goto L_088CE518;
    return;
L_088CE518:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088CE634;
      }
      goto L_088CE528;
    }
L_088CE528:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CE5B0;
      }
      goto L_088CE538;
    }
L_088CE538:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x088CE550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 256u, 0x089C9AE4u>(ctx, &aot_mem) && ctx.pc == 0x088CE550u) goto L_088CE550;
    return;
L_088CE550:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088CE570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 257u, 0x089C9B20u>(ctx, &aot_mem) && ctx.pc == 0x088CE570u) goto L_088CE570;
    return;
L_088CE570:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088CE584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 258u, 0x089C9B44u>(ctx, &aot_mem) && ctx.pc == 0x088CE584u) goto L_088CE584;
    return;
L_088CE584:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088CE598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 259u, 0x089C9B68u>(ctx, &aot_mem) && ctx.pc == 0x088CE598u) goto L_088CE598;
    return;
L_088CE598:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088CE5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 260u, 0x089C9B8Cu>(ctx, &aot_mem) && ctx.pc == 0x088CE5ACu) goto L_088CE5AC;
    return;
L_088CE5AC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_088CE5B0;
L_088CE5B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CE5D0;
      }
      goto L_088CE5C0;
    }
L_088CE5C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE634;
      }
      goto L_088CE5D0;
    }
L_088CE5D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088CE630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 138u, 0x089C8F08u>(ctx, &aot_mem) && ctx.pc == 0x088CE630u) goto L_088CE630;
    return;
L_088CE630:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_088CE634;
L_088CE634:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CE644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CE644u) goto L_088CE644;
    return;
L_088CE644:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE65C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE68Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE68Cu) goto L_088CE68C;
    return;
L_088CE68C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE6A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE6A4u) goto L_088CE6A4;
    return;
L_088CE6A4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE6C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE6C0u) goto L_088CE6C0;
    return;
L_088CE6C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE6DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE6DCu) goto L_088CE6DC;
    return;
L_088CE6DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE6F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE6F8u) goto L_088CE6F8;
    return;
L_088CE6F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE714u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE714u) goto L_088CE714;
    return;
L_088CE714:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE738u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE738u) goto L_088CE738;
    return;
L_088CE738:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
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
L_088CE764:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE784u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE784u) goto L_088CE784;
    return;
L_088CE784:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CE790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088CE790u) goto L_088CE790;
    return;
L_088CE790:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE7A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CE804;
      }
      goto L_088CE7C4;
    }
L_088CE7C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CE7EC;
      }
      goto L_088CE7D0;
    }
L_088CE7D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088CE7EC;
      }
      goto L_088CE7DC;
    }
L_088CE7DC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE7ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE7ECu) goto L_088CE7EC;
    return;
L_088CE7EC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CE7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CE7FCu) goto L_088CE7FC;
    return;
L_088CE7FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_088CE804;
L_088CE804:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE818:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088CE844;
      }
      goto L_088CE834;
    }
L_088CE834:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088CE844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 374u, 0x089DE970u>(ctx, &aot_mem) && ctx.pc == 0x088CE844u) goto L_088CE844;
    return;
L_088CE844:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE854:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE85C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE87Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE87Cu) goto L_088CE87C;
    return;
L_088CE87C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CE888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088CE888u) goto L_088CE888;
    return;
L_088CE888:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE89C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CE8D0;
      }
      goto L_088CE8BC;
    }
L_088CE8BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(796)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE8D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE8D0u) goto L_088CE8D0;
    return;
L_088CE8D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CE8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CE8E8u) goto L_088CE8E8;
    return;
L_088CE8E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE8FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE904:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE90C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088CE928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 147u, 0x089D90C0u>(ctx, &aot_mem) && ctx.pc == 0x088CE928u) goto L_088CE928;
    return;
L_088CE928:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CE95Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CE95Cu) goto L_088CE95C;
    return;
L_088CE95C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE96C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CE974:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CE9BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CE9BCu) goto L_088CE9BC;
    return;
L_088CE9BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(22));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x088CE9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CE9D4u) goto L_088CE9D4;
    return;
L_088CE9D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CE9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CE9E4u) goto L_088CE9E4;
    return;
L_088CE9E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CEA00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CEA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088CEA10u) goto L_088CEA10;
    return;
L_088CEA10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEA20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(776)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CEA50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CEA50u) goto L_088CEA50;
    return;
L_088CEA50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEA60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEA68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(780)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CEA98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CEA98u) goto L_088CEA98;
    return;
L_088CEA98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEAA8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEAB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CEAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CEAF8u) goto L_088CEAF8;
    return;
L_088CEAF8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(31, 0x088CEB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CEB08u) goto L_088CEB08;
    return;
L_088CEB08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CEB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CEB20u) goto L_088CEB20;
    return;
L_088CEB20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CEB3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CEB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088CEB4Cu) goto L_088CEB4C;
    return;
L_088CEB4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEB5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(784)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CEB80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CEB80u) goto L_088CEB80;
    return;
L_088CEB80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEB90:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEB9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(788)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CEBC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CEBC0u) goto L_088CEBC0;
    return;
L_088CEBC0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEBD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEBE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x088CEC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CEC0Cu) goto L_088CEC0C;
    return;
L_088CEC0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CEC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CEC2Cu) goto L_088CEC2C;
    return;
L_088CEC2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CEC48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088CEC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 167u, 0x088C501Cu>(ctx, &aot_mem) && ctx.pc == 0x088CEC58u) goto L_088CEC58;
    return;
L_088CEC58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEC68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CED8C;
      }
      goto L_088CEC8C;
    }
L_088CEC8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088CECB8;
      }
      goto L_088CEC98;
    }
L_088CEC98:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CECA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CECA8u) goto L_088CECA8;
    return;
L_088CECA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_088CED8C;
      }
      goto L_088CECB8;
    }
L_088CECB8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CED7C;
      }
      goto L_088CECC8;
    }
L_088CECC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CED8C;
      }
      goto L_088CECD4;
    }
L_088CECD4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CED04;
      }
      goto L_088CECE4;
    }
L_088CECE4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CECF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CECF4u) goto L_088CECF4;
    return;
L_088CECF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    goto L_088CED04;
L_088CED04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CED40;
      }
      goto L_088CED20;
    }
L_088CED20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088CED38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 219u, 0x089C97E8u>(ctx, &aot_mem) && ctx.pc == 0x088CED38u) goto L_088CED38;
    return;
L_088CED38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CED8C;
      }
      goto L_088CED40;
    }
L_088CED40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CED8C;
      }
      goto L_088CED50;
    }
L_088CED50:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088CED64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 219u, 0x089C97E8u>(ctx, &aot_mem) && ctx.pc == 0x088CED64u) goto L_088CED64;
    return;
L_088CED64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CED8C;
      }
      goto L_088CED7C;
    }
L_088CED7C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CED8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 211u, 0x089C9750u>(ctx, &aot_mem) && ctx.pc == 0x088CED8Cu) goto L_088CED8C;
    return;
L_088CED8C:
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
L_088CEDA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CEE04;
      }
      goto L_088CEDC8;
    }
L_088CEDC8:
    ctx.set_gpr(31, 0x088CEDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x088CEDD0u) goto L_088CEDD0;
    return;
L_088CEDD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CEDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 403u, 0x088B66B4u>(ctx, &aot_mem) && ctx.pc == 0x088CEDDCu) goto L_088CEDDC;
    return;
L_088CEDDC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CEDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CEDF0u) goto L_088CEDF0;
    return;
L_088CEDF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEE04;
      }
      goto L_088CEDFC;
    }
L_088CEDFC:
    ctx.set_gpr(31, 0x088CEE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088CEE04u) goto L_088CEE04;
    return;
L_088CEE04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CEE1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CEE1Cu) goto L_088CEE1C;
    return;
L_088CEE1C:
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
L_088CEE34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CEE54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CEE54u) goto L_088CEE54;
    return;
L_088CEE54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CEE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088CEE60u) goto L_088CEE60;
    return;
L_088CEE60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEE74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CEE98;
      }
      goto L_088CEE88;
    }
L_088CEE88:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CEE98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CEE98u) goto L_088CEE98;
    return;
L_088CEE98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEEA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEEB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088CEED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CEED0u) goto L_088CEED0;
    return;
L_088CEED0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEEE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088CEEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088CEEF8u) goto L_088CEEF8;
    return;
L_088CEEF8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CEF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CEF08u) goto L_088CEF08;
    return;
L_088CEF08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEF1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CEF3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CEF3Cu) goto L_088CEF3C;
    return;
L_088CEF3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEF4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088CEF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 30u, 0x089DC2BCu>(ctx, &aot_mem) && ctx.pc == 0x088CEF68u) goto L_088CEF68;
    return;
L_088CEF68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEF78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(920)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CEF9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CEF9Cu) goto L_088CEF9C;
    return;
L_088CEF9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CEFB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CEFB4u) goto L_088CEFB4;
    return;
L_088CEFB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEFC8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEFD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CEFE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088CF018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CF018u) goto L_088CF018;
    return;
L_088CF018:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CF028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CF028u) goto L_088CF028;
    return;
L_088CF028:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CF044:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF04C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF054:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF05C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF064:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF06C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF074:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF07C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF084:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF08C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF094:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(26136));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CF0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CF0B0u) goto L_088CF0B0;
    return;
L_088CF0B0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20116), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF0CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20116)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CF118;
      }
      goto L_088CF0E8;
    }
L_088CF0E8:
    ctx.set_gpr(31, 0x088CF0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088CF0F0u) goto L_088CF0F0;
    return;
L_088CF0F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20120));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(20116));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x088CF118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x088CF118u) goto L_088CF118;
    return;
L_088CF118:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20116)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF19C;
      }
      goto L_088CF164;
    }
L_088CF164:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF198;
      }
      goto L_088CF184;
    }
L_088CF184:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF198u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF198u) goto L_088CF198;
    return;
L_088CF198:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088CF19C;
L_088CF19C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF164;
      }
      goto L_088CF1A8;
    }
L_088CF1A8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088CF1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CF1B8u) goto L_088CF1B8;
    return;
L_088CF1B8:
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
L_088CF1D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26136)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF2D8;
      }
      goto L_088CF20C;
    }
L_088CF20C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF2D8;
      }
      goto L_088CF220;
    }
L_088CF220:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF258;
      }
      goto L_088CF234;
    }
L_088CF234:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF254;
      }
      goto L_088CF24C;
    }
L_088CF24C:
    ctx.set_gpr(31, 0x088CF254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088CF254u) goto L_088CF254;
    return;
L_088CF254:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088CF258;
L_088CF258:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF234;
      }
      goto L_088CF264;
    }
L_088CF264:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF288;
      }
      goto L_088CF274;
    }
L_088CF274:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088CF288;
L_088CF288:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF274;
      }
      goto L_088CF294;
    }
L_088CF294:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26136)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088CF2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 305u, 0x08949578u>(ctx, &aot_mem) && ctx.pc == 0x088CF2C0u) goto L_088CF2C0;
    return;
L_088CF2C0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF2D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF2D8u) goto L_088CF2D8;
    return;
L_088CF2D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF2FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF30C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088CF324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088CF324u) goto L_088CF324;
    return;
L_088CF324:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CF334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CF334u) goto L_088CF334;
    return;
L_088CF334:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088CF360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CF360u) goto L_088CF360;
    return;
L_088CF360:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF370:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF3E0;
      }
      goto L_088CF394;
    }
L_088CF394:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF3D4;
      }
      goto L_088CF3A8;
    }
L_088CF3A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF3D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF3D0u) goto L_088CF3D0;
    return;
L_088CF3D0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088CF3D4;
L_088CF3D4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF3A8;
      }
      goto L_088CF3E0;
    }
L_088CF3E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088CF3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088CF3ECu) goto L_088CF3EC;
    return;
L_088CF3EC:
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
L_088CF408:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF438u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF438u) goto L_088CF438;
    return;
L_088CF438:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088CF448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x088CF448u) goto L_088CF448;
    return;
L_088CF448:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF458;
      }
      goto L_088CF450;
    }
L_088CF450:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26140), 0u);
    goto L_088CF458;
L_088CF458:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CF464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088CF464u) goto L_088CF464;
    return;
L_088CF464:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF478:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24164)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26140)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CF4C4;
      }
      goto L_088CF4A4;
    }
L_088CF4A4:
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20096));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF4BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF4BCu) goto L_088CF4BC;
    return;
L_088CF4BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26140), ctx.gpr[2]);
    goto L_088CF4C4;
L_088CF4C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF4D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088CF4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 118u, 0x089D0868u>(ctx, &aot_mem) && ctx.pc == 0x088CF4F4u) goto L_088CF4F4;
    return;
L_088CF4F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26140)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF510u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF510u) goto L_088CF510;
    return;
L_088CF510:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26140)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF528u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF528u) goto L_088CF528;
    return;
L_088CF528:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26140)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF548u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF548u) goto L_088CF548;
    return;
L_088CF548:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26140)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF560u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF560u) goto L_088CF560;
    return;
L_088CF560:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF574:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF588:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(352));
    ctx.set_gpr(31, 0x088CF5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088CF5B0u) goto L_088CF5B0;
    return;
L_088CF5B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF604;
      }
      goto L_088CF5BC;
    }
L_088CF5BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CF5E4;
      }
      goto L_088CF5CC;
    }
L_088CF5CC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF5E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF5E0u) goto L_088CF5E0;
    return;
L_088CF5E0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_088CF5E4;
L_088CF5E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4102));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF604u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF604u) goto L_088CF604;
    return;
L_088CF604:
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
L_088CF61C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x088CF64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 405u, 0x089DB438u>(ctx, &aot_mem) && ctx.pc == 0x088CF64Cu) goto L_088CF64C;
    return;
L_088CF64C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088CF65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 401u, 0x089DB3F0u>(ctx, &aot_mem) && ctx.pc == 0x088CF65Cu) goto L_088CF65C;
    return;
L_088CF65C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088CF66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 403u, 0x089DB414u>(ctx, &aot_mem) && ctx.pc == 0x088CF66Cu) goto L_088CF66C;
    return;
L_088CF66C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x088CF67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 413u, 0x089DB490u>(ctx, &aot_mem) && ctx.pc == 0x088CF67Cu) goto L_088CF67C;
    return;
L_088CF67C:
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
L_088CF694:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(664)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF6C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF6C0u) goto L_088CF6C0;
    return;
L_088CF6C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF6D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF6D8u) goto L_088CF6D8;
    return;
L_088CF6D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(672)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF6ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF6ECu) goto L_088CF6EC;
    return;
L_088CF6EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF704u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF704u) goto L_088CF704;
    return;
L_088CF704:
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
L_088CF71C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF728:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF734:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF764u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF764u) goto L_088CF764;
    return;
L_088CF764:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF798u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF798u) goto L_088CF798;
    return;
L_088CF798:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CF7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CF7C8u) goto L_088CF7C8;
    return;
L_088CF7C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(31, 0x088CF7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CF7D8u) goto L_088CF7D8;
    return;
L_088CF7D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CF7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CF7E8u) goto L_088CF7E8;
    return;
L_088CF7E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CF804:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF824:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088CF84Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 397u, 0x089DB374u>(ctx, &aot_mem) && ctx.pc == 0x088CF84Cu) goto L_088CF84C;
    return;
L_088CF84C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF85C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(656)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF880u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF880u) goto L_088CF880;
    return;
L_088CF880:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF898u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF898u) goto L_088CF898;
    return;
L_088CF898:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF8AC:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF8B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(31, 0x088CF8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CF8F0u) goto L_088CF8F0;
    return;
L_088CF8F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CF900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CF900u) goto L_088CF900;
    return;
L_088CF900:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CF91C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CF980;
      }
      goto L_088CF940;
    }
L_088CF940:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CF960;
      }
      goto L_088CF950;
    }
L_088CF950:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CF960u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CF960u) goto L_088CF960;
    return;
L_088CF960:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088CF980;
      }
      goto L_088CF970;
    }
L_088CF970:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088CF980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 367u, 0x089E242Cu>(ctx, &aot_mem) && ctx.pc == 0x088CF980u) goto L_088CF980;
    return;
L_088CF980:
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
L_088CF998:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF9A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF9A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF9B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF9BC:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF9C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CF9D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088CF9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CF9F0u) goto L_088CF9F0;
    return;
L_088CF9F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFA00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088CFA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088CFA18u) goto L_088CFA18;
    return;
L_088CFA18:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(76))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CFA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 153u, 0x088C4F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CFA28u) goto L_088CFA28;
    return;
L_088CFA28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFA3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFA44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFA4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088CFA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CFA74u) goto L_088CFA74;
    return;
L_088CFA74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088CFA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088CFA84u) goto L_088CFA84;
    return;
L_088CFA84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(31, 0x088CFA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CFA94u) goto L_088CFA94;
    return;
L_088CFA94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CFAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CFAACu) goto L_088CFAAC;
    return;
L_088CFAAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088CFAC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFAD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFAD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CFB30;
      }
      goto L_088CFB10;
    }
L_088CFB10:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088CFB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088CFB20u) goto L_088CFB20;
    return;
L_088CFB20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFB3C;
      }
      goto L_088CFB30;
    }
L_088CFB30:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFB50;
      }
      goto L_088CFB3C;
    }
L_088CFB3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CFB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088CFB4Cu) goto L_088CFB4C;
    return;
L_088CFB4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088CFB50;
L_088CFB50:
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
L_088CFB68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFB8C;
      }
      goto L_088CFB80;
    }
L_088CFB80:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFBCC;
      }
      goto L_088CFB8C;
    }
L_088CFB8C:
    ctx.set_gpr(31, 0x088CFB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088CFB94u) goto L_088CFB94;
    return;
L_088CFB94:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFBC0;
      }
      goto L_088CFBA0;
    }
L_088CFBA0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CFBCC;
      }
      goto L_088CFBB0;
    }
L_088CFBB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(47));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CFBCC;
      }
      goto L_088CFBBC;
    }
L_088CFBBC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_088CFBC0;
L_088CFBC0:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFBA0;
      }
      goto L_088CFBCC;
    }
L_088CFBCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFBE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFC18;
      }
      goto L_088CFC00;
    }
L_088CFC00:
    ctx.set_gpr(31, 0x088CFC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 220u, 0x0893CE1Cu>(ctx, &aot_mem) && ctx.pc == 0x088CFC08u) goto L_088CFC08;
    return;
L_088CFC08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088CFC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088CFC14u) goto L_088CFC14;
    return;
L_088CFC14:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088CFC18;
L_088CFC18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CFC28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x088CFC28u) goto L_088CFC28;
    return;
L_088CFC28:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFC40;
      }
      goto L_088CFC34;
    }
L_088CFC34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088CFC40;
L_088CFC40:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20148));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFC70;
      }
      goto L_088CFC54;
    }
L_088CFC54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFC70;
      }
      goto L_088CFC68;
    }
L_088CFC68:
    ctx.set_gpr(31, 0x088CFC70u);
    // nop
    goto L_088CFB68;
L_088CFC70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20160));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088CFCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088CFCB4u) goto L_088CFCB4;
    return;
L_088CFCB4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088CFCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088CFCC0u) goto L_088CFCC0;
    return;
L_088CFCC0:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088CFCD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CFCD8u) goto L_088CFCD8;
    return;
L_088CFCD8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x088CFCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x088CFCECu) goto L_088CFCEC;
    return;
L_088CFCEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFD00;
      }
      goto L_088CFCF8;
    }
L_088CFCF8:
    ctx.set_gpr(31, 0x088CFD00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088CFD00u) goto L_088CFD00;
    return;
L_088CFD00:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFD1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20160));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088CFD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x088CFD74u) goto L_088CFD74;
    return;
L_088CFD74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088CFD8C;
      }
      goto L_088CFD80;
    }
L_088CFD80:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFEA0;
      }
      goto L_088CFD8C;
    }
L_088CFD8C:
    ctx.set_gpr(17, 2227u << 16u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(20148));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CFDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x088CFDA4u) goto L_088CFDA4;
    return;
L_088CFDA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFDF8;
      }
      goto L_088CFDAC;
    }
L_088CFDAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CFDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x088CFDBCu) goto L_088CFDBC;
    return;
L_088CFDBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFDF8;
      }
      goto L_088CFDD0;
    }
L_088CFDD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088CFDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x088CFDE0u) goto L_088CFDE0;
    return;
L_088CFDE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x088CFDF4u);
    // nop
    goto L_088CFB68;
L_088CFDF4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_088CFDF8;
L_088CFDF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088CFE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x088CFE08u) goto L_088CFE08;
    return;
L_088CFE08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFE9C;
      }
      goto L_088CFE10;
    }
L_088CFE10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CFE9C;
      }
      goto L_088CFE20;
    }
L_088CFE20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CFE9C;
      }
      goto L_088CFE30;
    }
L_088CFE30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CFE9C;
      }
      goto L_088CFE40;
    }
L_088CFE40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CFE9C;
      }
      goto L_088CFE50;
    }
L_088CFE50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CFE9C;
      }
      goto L_088CFE60;
    }
L_088CFE60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CFE9C;
      }
      goto L_088CFE70;
    }
L_088CFE70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CFE9C;
      }
      goto L_088CFE80;
    }
L_088CFE80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CFE9C;
      }
      goto L_088CFE90;
    }
L_088CFE90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFEA0;
      }
      goto L_088CFE9C;
    }
L_088CFE9C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088CFEA0;
L_088CFEA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFEB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFEC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFEDC;
      }
      goto L_088CFED4;
    }
L_088CFED4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_088CFEDC;
L_088CFEDC:
    ctx.set_gpr(31, 0x088CFEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 154u, 0x088C4F18u>(ctx, &aot_mem) && ctx.pc == 0x088CFEE4u) goto L_088CFEE4;
    return;
L_088CFEE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CFEF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 6u, 0x088D0054u>(ctx, &aot_mem); return;
      }
      goto L_088CFF1C;
    }
L_088CFF1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 11u, 0x088D00B8u>(ctx, &aot_mem); return;
      }
      goto L_088CFF28;
    }
L_088CFF28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 3u, 0x088D0018u>(ctx, &aot_mem); return;
      }
      goto L_088CFF38;
    }
L_088CFF38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 3u, 0x088D0018u>(ctx, &aot_mem); return;
      }
      goto L_088CFF44;
    }
L_088CFF44:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088CFFEC;
      }
      goto L_088CFF50;
    }
L_088CFF50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088CFF5C;
      }
      goto L_088CFF5C;
    }
L_088CFF5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x088CFF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 283u, 0x089E1824u>(ctx, &aot_mem) && ctx.pc == 0x088CFF84u) goto L_088CFF84;
    return;
L_088CFF84:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFFD4;
      }
      goto L_088CFF94;
    }
L_088CFF94:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFFA8;
      }
      goto L_088CFF9C;
    }
L_088CFF9C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CFFBC;
      }
      goto L_088CFFA8;
    }
L_088CFFA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    goto L_088CFFBC;
L_088CFFBC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088CFFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 417u, 0x089E28ECu>(ctx, &aot_mem) && ctx.pc == 0x088CFFD0u) goto L_088CFFD0;
    return;
L_088CFFD0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088CFFD4;
L_088CFFD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CFF94;
      }
      goto L_088CFFE4;
    }
L_088CFFE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 5u, 0x088D0044u>(ctx, &aot_mem); return;
      }
      goto L_088CFFEC;
    }
L_088CFFEC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.pc = 0x088D0000u; return;
}

void recomp_unit_0050(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0050_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_50(Runtime &runtime) {
    runtime.register_generated_unit(50u, 0x088CC000u, 16384u, &recomp_unit_0050, &recomp_unit_0050_entry);
    runtime.register_function(0x088CC000u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC010u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC014u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC030u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC034u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC050u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC054u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC070u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC074u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC07Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0F8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC0FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC118u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC11Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC138u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC13Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC158u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC15Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC178u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC17Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC198u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC19Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC1A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC1E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC1E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC200u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC204u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC220u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC224u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC240u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC244u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC260u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC264u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC280u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC284u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC2A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC2A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC2C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC2C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC2CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC308u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC30Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC328u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC32Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC348u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC34Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC368u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC36Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC388u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC38Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC3A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC3ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC3C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC3CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC3E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC3ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC3F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC44Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC45Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC48Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC4A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC4BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC4D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC4ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC504u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC51Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC534u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC548u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC560u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC578u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC584u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC58Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC594u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC59Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC5A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC690u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC69Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC6ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC6C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC6D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC6F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC700u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC710u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC718u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC720u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC73Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC74Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC770u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC788u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC794u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC7CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC7DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC7F8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC808u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC818u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC834u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC844u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC868u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC880u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC88Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC8B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC8D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC8F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC900u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC910u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC920u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC938u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC948u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC960u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC970u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC984u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC994u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC9A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC9B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC9CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CC9F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA00u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA38u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA6Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCA84u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCAACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCAB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCAC4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCAD4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCAE8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCAF0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCAF8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB24u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB58u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB60u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB6Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCB98u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBE8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCBF0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC04u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCC9Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCCACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCCB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCCC8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCCCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCCE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD00u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD20u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD58u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD88u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCD98u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCDA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCDB0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCDCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCDDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCDE8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCDF0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCDF8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE74u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE7Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE88u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCE94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCEA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCEC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCEDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCEECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF2Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCF80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCFA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCFC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCFCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCFD8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCFE8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CCFF8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD014u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD024u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD034u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD03Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD050u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD068u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD080u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD08Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD0FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD10Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD11Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD140u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD154u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD164u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD170u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD17Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD188u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD198u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD1A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD1B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD1B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD1D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD1FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD20Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD218u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD248u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD288u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD298u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD2A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD2B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD2BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD2C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD32Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD33Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD358u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD378u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD3A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD3C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD3D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD3F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD3F8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD40Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD424u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD444u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD450u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD458u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD460u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD468u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD490u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD4A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD4B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD4C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD4D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD4D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD4F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD4F8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD500u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD508u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD52Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD544u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD550u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD578u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD588u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD5A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD5B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD5F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD600u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD618u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD634u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD688u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD69Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD6A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD6B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD6F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD700u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD728u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD738u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD740u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD76Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD778u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD78Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD7ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD7D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD7FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD820u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD834u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD838u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD84Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD858u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD860u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD8B4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD8C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD8D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD8E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD91Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD92Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD954u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD964u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD96Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD998u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD9A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD9B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CD9D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA04u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA60u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA64u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDA80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDAA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDACCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDAE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDAECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDB80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDBA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDBBCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDBCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDBE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDBE8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDBF4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC04u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC24u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC64u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC84u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDC8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCB4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCC4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDCE8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD58u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD6Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD74u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD7Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD88u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDD94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDDF8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE14u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE48u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDE70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEB0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDED8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDEF0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF48u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF58u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDF80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDFC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDFD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDFDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CDFE8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE000u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE020u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE02Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE038u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE044u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE054u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE064u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE06Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE078u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE090u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE0A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE0ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE0B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE0C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE0E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE104u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE114u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE11Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE124u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE130u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE144u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE154u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE170u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE184u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE194u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE1FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE20Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE230u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE248u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE25Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE268u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE2A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE2B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE2CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE2ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE2FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE320u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE33Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE354u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE36Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE380u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE390u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE3B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE3D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE3E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE3F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE40Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE41Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE42Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE43Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE450u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE460u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE478u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE488u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE49Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE4D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE4E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE4E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE50Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE518u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE528u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE538u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE550u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE570u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE584u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE598u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE5ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE5B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE5C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE5D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE630u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE634u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE644u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE65Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE68Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE6A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE6C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE6DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE6F8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE714u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE738u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE764u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE784u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE790u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE7A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE7C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE7D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE7DCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE7ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE7FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE804u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE818u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE820u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE834u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE844u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE854u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE85Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE87Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE888u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE89Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE8FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE904u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE90Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE928u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE938u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE95Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE96Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE974u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE9BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE9D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CE9E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA00u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA20u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA60u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEA98u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEAA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEAB0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEAF8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB20u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB90u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEB9Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEBC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEBD8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEBE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC0Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC2Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC48u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC58u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEC98u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CECA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CECB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CECC8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CECD4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CECE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CECF4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED04u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED20u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED38u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED64u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED7Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CED8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDC8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDF0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEDFCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE04u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE60u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE74u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE88u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEE98u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEEA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEEB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEED0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEEE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEEF8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF78u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEF9Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEFB4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEFC8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEFD4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CEFE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF018u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF028u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF044u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF04Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF054u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF05Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF064u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF06Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF074u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF07Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF084u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF08Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF094u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF0B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF0CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF0E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF0F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF118u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF130u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF164u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF184u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF198u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF19Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF1A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF1B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF1D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF20Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF220u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF234u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF24Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF254u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF258u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF264u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF274u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF288u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF294u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF2C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF2D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF2FCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF30Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF324u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF334u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF348u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF360u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF370u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF394u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF3A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF3D0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF3D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF3E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF3ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF408u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF418u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF438u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF448u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF450u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF458u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF464u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF478u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF488u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF4A4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF4BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF4C4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF4D4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF4F4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF510u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF528u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF548u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF560u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF574u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF588u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF5B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF5BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF5CCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF5E0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF5E4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF604u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF61Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF64Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF65Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF66Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF67Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF694u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF6C0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF6D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF6ECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF704u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF71Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF728u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF734u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF764u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF798u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF7C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF7D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF7E8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF804u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF824u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF830u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF84Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF85Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF880u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF898u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF8ACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF8B8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF8F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF900u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF91Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF940u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF950u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF960u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF970u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF980u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF998u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF9A0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF9A8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF9B0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF9BCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF9C8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF9D8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CF9F0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA00u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA18u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA74u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA84u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFA94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFAACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFAC8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFAD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFAD8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB20u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB3Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB4Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFB94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBB0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBBCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBCCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFBE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC00u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC14u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC18u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC34u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC54u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC68u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFC70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCB4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCD8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCECu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFCF8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFD00u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFD1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFD74u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFD80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFD8Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFDA4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFDACu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFDBCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFDD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFDE0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFDF4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFDF8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE08u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE10u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE20u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE30u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE40u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE60u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE70u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE80u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE90u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFE9Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFEA0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFEB8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFEC0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFED4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFEDCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFEE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFEF4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF1Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF28u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF38u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF44u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF50u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF5Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF84u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF94u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFF9Cu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFFA8u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFFBCu, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFFD0u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFFD4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFFE4u, &recomp_unit_0050, "recomp_unit_0050");
    runtime.register_function(0x088CFFECu, &recomp_unit_0050, "recomp_unit_0050");
}
} // namespace psprecomp
