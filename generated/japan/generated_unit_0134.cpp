#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0134[4092] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27,
    0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0,
    103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0,
    0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0,
    0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0,
    0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0,
    0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187,
    0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 221,
    0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 0, 266, 0,
    267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283,
    0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 291, 0, 292, 0, 0, 293, 0, 294, 0, 0, 295, 0,
    296, 0, 0, 297, 0, 298, 0, 0, 299, 0, 300, 0, 0, 301, 0, 302, 0, 0, 303, 0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0,
    0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0,
    0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364,
    0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0,
    370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0,
    376, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0,
    0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0,
    403, 0, 404, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 411, 0, 0,
    0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421,
    0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0,
    428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0,
    0, 432, 0, 433, 0, 0, 434, 0, 435, 0, 0, 436, 0, 437, 0, 0, 438, 0, 439, 0, 0, 440, 0, 441, 0, 0, 442, 0, 443, 0, 0, 444,
    0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0,
    0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0,
    0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0,
    472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0,
    0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0,
    0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 490,
    0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0,
    499, 0, 0, 500, 0, 501, 0, 0, 502, 0, 503, 0, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 0, 508, 0, 509, 0, 0, 510, 0, 511, 0,
    0, 512, 0, 513, 0, 0, 514, 0, 515, 0, 0, 516, 0, 517, 0, 0, 518, 0, 519, 0, 0, 520, 0, 521, 0, 0, 522, 0, 523, 0, 0, 524,
    0, 525, 0, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0, 0, 534, 0, 535, 0, 0, 536, 0, 537,
    0, 0, 538, 0, 539, 0, 0, 540, 0, 541, 0, 0, 542, 0, 543, 0, 0, 544, 0, 545, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0,
    0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0,
    0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0,
    572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0,
    0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0,
    0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0,
    0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598,
    0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605,
    0, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611,
    0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0,
    0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0,
    0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0,
    626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0,
    0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0,
    0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 658,
    0, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0,
    0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 668, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 672,
    0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0,
    0, 681, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0,
    0, 688, 0, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0,
    0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 703,
    0, 704, 0, 0, 705, 0, 706, 0, 0, 707, 0, 708, 0, 0, 709, 0, 710, 0, 0, 711, 0, 712, 0, 0, 713, 0, 714, 0, 0, 715, 0, 716,
    0, 0, 717, 0, 718, 0, 0, 719, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0,
    0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726, 0, 727, 0, 0, 728, 0, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0,
    731, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734,
    0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0,
    740, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0,
    0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 753, 0,
    0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0, 0, 0, 0,
    0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0,
    764, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0,
    769, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 775,
};
void recomp_unit_0134_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A1C004u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0134[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A1C004;
    case 2u: goto L_08A1C014;
    case 3u: goto L_08A1C020;
    case 4u: goto L_08A1C040;
    case 5u: goto L_08A1C04C;
    case 6u: goto L_08A1C06C;
    case 7u: goto L_08A1C078;
    case 8u: goto L_08A1C098;
    case 9u: goto L_08A1C0AC;
    case 10u: goto L_08A1C0D8;
    case 11u: goto L_08A1C0F4;
    case 12u: goto L_08A1C10C;
    case 13u: goto L_08A1C120;
    case 14u: goto L_08A1C128;
    case 15u: goto L_08A1C140;
    case 16u: goto L_08A1C158;
    case 17u: goto L_08A1C178;
    case 18u: goto L_08A1C19C;
    case 19u: goto L_08A1C1A8;
    case 20u: goto L_08A1C1B4;
    case 21u: goto L_08A1C1CC;
    case 22u: goto L_08A1C1E4;
    case 23u: goto L_08A1C1F4;
    case 24u: goto L_08A1C204;
    case 25u: goto L_08A1C260;
    case 26u: goto L_08A1C270;
    case 27u: goto L_08A1C280;
    case 28u: goto L_08A1C290;
    case 29u: goto L_08A1C2A0;
    case 30u: goto L_08A1C2C4;
    case 31u: goto L_08A1C2E0;
    case 32u: goto L_08A1C2F0;
    case 33u: goto L_08A1C304;
    case 34u: goto L_08A1C314;
    case 35u: goto L_08A1C33C;
    case 36u: goto L_08A1C34C;
    case 37u: goto L_08A1C364;
    case 38u: goto L_08A1C374;
    case 39u: goto L_08A1C384;
    case 40u: goto L_08A1C394;
    case 41u: goto L_08A1C3A4;
    case 42u: goto L_08A1C3BC;
    case 43u: goto L_08A1C3C4;
    case 44u: goto L_08A1C3D0;
    case 45u: goto L_08A1C3DC;
    case 46u: goto L_08A1C3E4;
    case 47u: goto L_08A1C3FC;
    case 48u: goto L_08A1C414;
    case 49u: goto L_08A1C428;
    case 50u: goto L_08A1C430;
    case 51u: goto L_08A1C448;
    case 52u: goto L_08A1C45C;
    case 53u: goto L_08A1C470;
    case 54u: goto L_08A1C48C;
    case 55u: goto L_08A1C4A4;
    case 56u: goto L_08A1C4B4;
    case 57u: goto L_08A1C4C4;
    case 58u: goto L_08A1C520;
    case 59u: goto L_08A1C530;
    case 60u: goto L_08A1C540;
    case 61u: goto L_08A1C550;
    case 62u: goto L_08A1C578;
    case 63u: goto L_08A1C594;
    case 64u: goto L_08A1C5A4;
    case 65u: goto L_08A1C5B0;
    case 66u: goto L_08A1C5D4;
    case 67u: goto L_08A1C5EC;
    case 68u: goto L_08A1C5FC;
    case 69u: goto L_08A1C60C;
    case 70u: goto L_08A1C628;
    case 71u: goto L_08A1C640;
    case 72u: goto L_08A1C654;
    case 73u: goto L_08A1C66C;
    case 74u: goto L_08A1C698;
    case 75u: goto L_08A1C6A8;
    case 76u: goto L_08A1C6C4;
    case 77u: goto L_08A1C6D4;
    case 78u: goto L_08A1C6E4;
    case 79u: goto L_08A1C6F4;
    case 80u: goto L_08A1C704;
    case 81u: goto L_08A1C71C;
    case 82u: goto L_08A1C724;
    case 83u: goto L_08A1C730;
    case 84u: goto L_08A1C73C;
    case 85u: goto L_08A1C744;
    case 86u: goto L_08A1C75C;
    case 87u: goto L_08A1C774;
    case 88u: goto L_08A1C788;
    case 89u: goto L_08A1C790;
    case 90u: goto L_08A1C7A8;
    case 91u: goto L_08A1C7C0;
    case 92u: goto L_08A1C7E4;
    case 93u: goto L_08A1C808;
    case 94u: goto L_08A1C810;
    case 95u: goto L_08A1C828;
    case 96u: goto L_08A1C838;
    case 97u: goto L_08A1C850;
    case 98u: goto L_08A1C868;
    case 99u: goto L_08A1C878;
    case 100u: goto L_08A1C888;
    case 101u: goto L_08A1C8E4;
    case 102u: goto L_08A1C8F4;
    case 103u: goto L_08A1C904;
    case 104u: goto L_08A1C914;
    case 105u: goto L_08A1C93C;
    case 106u: goto L_08A1C958;
    case 107u: goto L_08A1C968;
    case 108u: goto L_08A1C97C;
    case 109u: goto L_08A1C98C;
    case 110u: goto L_08A1C9A0;
    case 111u: goto L_08A1C9B0;
    case 112u: goto L_08A1C9C4;
    case 113u: goto L_08A1C9D4;
    case 114u: goto L_08A1C9E8;
    case 115u: goto L_08A1C9F8;
    case 116u: goto L_08A1CA0C;
    case 117u: goto L_08A1CA1C;
    case 118u: goto L_08A1CA30;
    case 119u: goto L_08A1CA40;
    case 120u: goto L_08A1CA54;
    case 121u: goto L_08A1CA64;
    case 122u: goto L_08A1CA78;
    case 123u: goto L_08A1CA8C;
    case 124u: goto L_08A1CAA0;
    case 125u: goto L_08A1CAB0;
    case 126u: goto L_08A1CAC4;
    case 127u: goto L_08A1CAD4;
    case 128u: goto L_08A1CAE0;
    case 129u: goto L_08A1CB18;
    case 130u: goto L_08A1CB34;
    case 131u: goto L_08A1CB4C;
    case 132u: goto L_08A1CB54;
    case 133u: goto L_08A1CB60;
    case 134u: goto L_08A1CB6C;
    case 135u: goto L_08A1CB74;
    case 136u: goto L_08A1CB8C;
    case 137u: goto L_08A1CBA4;
    case 138u: goto L_08A1CBB8;
    case 139u: goto L_08A1CBC0;
    case 140u: goto L_08A1CBD8;
    case 141u: goto L_08A1CBF0;
    case 142u: goto L_08A1CC14;
    case 143u: goto L_08A1CC38;
    case 144u: goto L_08A1CC40;
    case 145u: goto L_08A1CC4C;
    case 146u: goto L_08A1CC54;
    case 147u: goto L_08A1CC60;
    case 148u: goto L_08A1CC68;
    case 149u: goto L_08A1CC74;
    case 150u: goto L_08A1CC7C;
    case 151u: goto L_08A1CC94;
    case 152u: goto L_08A1CCAC;
    case 153u: goto L_08A1CCBC;
    case 154u: goto L_08A1CCCC;
    case 155u: goto L_08A1CD28;
    case 156u: goto L_08A1CD38;
    case 157u: goto L_08A1CD48;
    case 158u: goto L_08A1CD58;
    case 159u: goto L_08A1CD80;
    case 160u: goto L_08A1CD9C;
    case 161u: goto L_08A1CDAC;
    case 162u: goto L_08A1CDB8;
    case 163u: goto L_08A1CDCC;
    case 164u: goto L_08A1CDD8;
    case 165u: goto L_08A1CDEC;
    case 166u: goto L_08A1CDF8;
    case 167u: goto L_08A1CE0C;
    case 168u: goto L_08A1CE18;
    case 169u: goto L_08A1CE44;
    case 170u: goto L_08A1CE60;
    case 171u: goto L_08A1CE78;
    case 172u: goto L_08A1CE8C;
    case 173u: goto L_08A1CE94;
    case 174u: goto L_08A1CEAC;
    case 175u: goto L_08A1CEC4;
    case 176u: goto L_08A1CEE8;
    case 177u: goto L_08A1CF0C;
    case 178u: goto L_08A1CF14;
    case 179u: goto L_08A1CF2C;
    case 180u: goto L_08A1CF38;
    case 181u: goto L_08A1CF44;
    case 182u: goto L_08A1CF5C;
    case 183u: goto L_08A1CF74;
    case 184u: goto L_08A1CF84;
    case 185u: goto L_08A1CF94;
    case 186u: goto L_08A1CFF0;
    case 187u: goto L_08A1D000;
    case 188u: goto L_08A1D010;
    case 189u: goto L_08A1D020;
    case 190u: goto L_08A1D030;
    case 191u: goto L_08A1D058;
    case 192u: goto L_08A1D074;
    case 193u: goto L_08A1D084;
    case 194u: goto L_08A1D090;
    case 195u: goto L_08A1D0BC;
    case 196u: goto L_08A1D0D8;
    case 197u: goto L_08A1D0F0;
    case 198u: goto L_08A1D104;
    case 199u: goto L_08A1D10C;
    case 200u: goto L_08A1D124;
    case 201u: goto L_08A1D13C;
    case 202u: goto L_08A1D15C;
    case 203u: goto L_08A1D180;
    case 204u: goto L_08A1D188;
    case 205u: goto L_08A1D194;
    case 206u: goto L_08A1D19C;
    case 207u: goto L_08A1D1A8;
    case 208u: goto L_08A1D1B0;
    case 209u: goto L_08A1D1C8;
    case 210u: goto L_08A1D1E0;
    case 211u: goto L_08A1D1F0;
    case 212u: goto L_08A1D200;
    case 213u: goto L_08A1D25C;
    case 214u: goto L_08A1D26C;
    case 215u: goto L_08A1D27C;
    case 216u: goto L_08A1D28C;
    case 217u: goto L_08A1D2B4;
    case 218u: goto L_08A1D2D0;
    case 219u: goto L_08A1D2E0;
    case 220u: goto L_08A1D2EC;
    case 221u: goto L_08A1D300;
    case 222u: goto L_08A1D30C;
    case 223u: goto L_08A1D320;
    case 224u: goto L_08A1D32C;
    case 225u: goto L_08A1D340;
    case 226u: goto L_08A1D354;
    case 227u: goto L_08A1D364;
    case 228u: goto L_08A1D37C;
    case 229u: goto L_08A1D398;
    case 230u: goto L_08A1D3AC;
    case 231u: goto L_08A1D3C0;
    case 232u: goto L_08A1D3D0;
    case 233u: goto L_08A1D3E0;
    case 234u: goto L_08A1D410;
    case 235u: goto L_08A1D42C;
    case 236u: goto L_08A1D444;
    case 237u: goto L_08A1D458;
    case 238u: goto L_08A1D46C;
    case 239u: goto L_08A1D484;
    case 240u: goto L_08A1D498;
    case 241u: goto L_08A1D4A0;
    case 242u: goto L_08A1D4B8;
    case 243u: goto L_08A1D4D0;
    case 244u: goto L_08A1D4E8;
    case 245u: goto L_08A1D50C;
    case 246u: goto L_08A1D514;
    case 247u: goto L_08A1D52C;
    case 248u: goto L_08A1D544;
    case 249u: goto L_08A1D554;
    case 250u: goto L_08A1D564;
    case 251u: goto L_08A1D5C0;
    case 252u: goto L_08A1D5D0;
    case 253u: goto L_08A1D5E0;
    case 254u: goto L_08A1D5F0;
    case 255u: goto L_08A1D618;
    case 256u: goto L_08A1D634;
    case 257u: goto L_08A1D644;
    case 258u: goto L_08A1D650;
    case 259u: goto L_08A1D668;
    case 260u: goto L_08A1D674;
    case 261u: goto L_08A1D6A8;
    case 262u: goto L_08A1D6C4;
    case 263u: goto L_08A1D6DC;
    case 264u: goto L_08A1D6E4;
    case 265u: goto L_08A1D6F0;
    case 266u: goto L_08A1D6FC;
    case 267u: goto L_08A1D704;
    case 268u: goto L_08A1D71C;
    case 269u: goto L_08A1D734;
    case 270u: goto L_08A1D748;
    case 271u: goto L_08A1D750;
    case 272u: goto L_08A1D768;
    case 273u: goto L_08A1D77C;
    case 274u: goto L_08A1D790;
    case 275u: goto L_08A1D7AC;
    case 276u: goto L_08A1D7C4;
    case 277u: goto L_08A1D7D4;
    case 278u: goto L_08A1D7E4;
    case 279u: goto L_08A1D838;
    case 280u: goto L_08A1D848;
    case 281u: goto L_08A1D858;
    case 282u: goto L_08A1D868;
    case 283u: goto L_08A1D880;
    case 284u: goto L_08A1D894;
    case 285u: goto L_08A1D89C;
    case 286u: goto L_08A1D8B4;
    case 287u: goto L_08A1D8CC;
    case 288u: goto L_08A1D91C;
    case 289u: goto L_08A1D940;
    case 290u: goto L_08A1D948;
    case 291u: goto L_08A1D954;
    case 292u: goto L_08A1D95C;
    case 293u: goto L_08A1D968;
    case 294u: goto L_08A1D970;
    case 295u: goto L_08A1D97C;
    case 296u: goto L_08A1D984;
    case 297u: goto L_08A1D990;
    case 298u: goto L_08A1D998;
    case 299u: goto L_08A1D9A4;
    case 300u: goto L_08A1D9AC;
    case 301u: goto L_08A1D9B8;
    case 302u: goto L_08A1D9C0;
    case 303u: goto L_08A1D9CC;
    case 304u: goto L_08A1D9D4;
    case 305u: goto L_08A1D9E0;
    case 306u: goto L_08A1D9E8;
    case 307u: goto L_08A1D9F4;
    case 308u: goto L_08A1D9FC;
    case 309u: goto L_08A1DA08;
    case 310u: goto L_08A1DA10;
    case 311u: goto L_08A1DA1C;
    case 312u: goto L_08A1DA24;
    case 313u: goto L_08A1DA3C;
    case 314u: goto L_08A1DA4C;
    case 315u: goto L_08A1DA64;
    case 316u: goto L_08A1DA7C;
    case 317u: goto L_08A1DA8C;
    case 318u: goto L_08A1DA9C;
    case 319u: goto L_08A1DB00;
    case 320u: goto L_08A1DB10;
    case 321u: goto L_08A1DB20;
    case 322u: goto L_08A1DB30;
    case 323u: goto L_08A1DB58;
    case 324u: goto L_08A1DB74;
    case 325u: goto L_08A1DB84;
    case 326u: goto L_08A1DB90;
    case 327u: goto L_08A1DBB0;
    case 328u: goto L_08A1DBBC;
    case 329u: goto L_08A1DBDC;
    case 330u: goto L_08A1DBE8;
    case 331u: goto L_08A1DC08;
    case 332u: goto L_08A1DC14;
    case 333u: goto L_08A1DC34;
    case 334u: goto L_08A1DC40;
    case 335u: goto L_08A1DC60;
    case 336u: goto L_08A1DC78;
    case 337u: goto L_08A1DC94;
    case 338u: goto L_08A1DCA0;
    case 339u: goto L_08A1DCC0;
    case 340u: goto L_08A1DCCC;
    case 341u: goto L_08A1DCEC;
    case 342u: goto L_08A1DCF8;
    case 343u: goto L_08A1DD18;
    case 344u: goto L_08A1DD24;
    case 345u: goto L_08A1DD44;
    case 346u: goto L_08A1DD50;
    case 347u: goto L_08A1DD70;
    case 348u: goto L_08A1DD84;
    case 349u: goto L_08A1DD9C;
    case 350u: goto L_08A1DDBC;
    case 351u: goto L_08A1DDC8;
    case 352u: goto L_08A1DDE0;
    case 353u: goto L_08A1DDEC;
    case 354u: goto L_08A1DE24;
    case 355u: goto L_08A1DE40;
    case 356u: goto L_08A1DE50;
    case 357u: goto L_08A1DE60;
    case 358u: goto L_08A1DE78;
    case 359u: goto L_08A1DE9C;
    case 360u: goto L_08A1DEA4;
    case 361u: goto L_08A1DEBC;
    case 362u: goto L_08A1DED4;
    case 363u: goto L_08A1DEF8;
    case 364u: goto L_08A1DF00;
    case 365u: goto L_08A1DF18;
    case 366u: goto L_08A1DF30;
    case 367u: goto L_08A1DF44;
    case 368u: goto L_08A1DF58;
    case 369u: goto L_08A1DF70;
    case 370u: goto L_08A1DF84;
    case 371u: goto L_08A1DF8C;
    case 372u: goto L_08A1DFA4;
    case 373u: goto L_08A1DFBC;
    case 374u: goto L_08A1DFD8;
    case 375u: goto L_08A1DFFC;
    case 376u: goto L_08A1E004;
    case 377u: goto L_08A1E010;
    case 378u: goto L_08A1E018;
    case 379u: goto L_08A1E030;
    case 380u: goto L_08A1E048;
    case 381u: goto L_08A1E058;
    case 382u: goto L_08A1E068;
    case 383u: goto L_08A1E0C4;
    case 384u: goto L_08A1E0D4;
    case 385u: goto L_08A1E0E4;
    case 386u: goto L_08A1E0F4;
    case 387u: goto L_08A1E11C;
    case 388u: goto L_08A1E138;
    case 389u: goto L_08A1E148;
    case 390u: goto L_08A1E15C;
    case 391u: goto L_08A1E168;
    case 392u: goto L_08A1E180;
    case 393u: goto L_08A1E194;
    case 394u: goto L_08A1E1A8;
    case 395u: goto L_08A1E1BC;
    case 396u: goto L_08A1E1C8;
    case 397u: goto L_08A1E1E8;
    case 398u: goto L_08A1E1FC;
    case 399u: goto L_08A1E210;
    case 400u: goto L_08A1E224;
    case 401u: goto L_08A1E250;
    case 402u: goto L_08A1E26C;
    case 403u: goto L_08A1E284;
    case 404u: goto L_08A1E28C;
    case 405u: goto L_08A1E298;
    case 406u: goto L_08A1E2A4;
    case 407u: goto L_08A1E2AC;
    case 408u: goto L_08A1E2C4;
    case 409u: goto L_08A1E2DC;
    case 410u: goto L_08A1E2F0;
    case 411u: goto L_08A1E2F8;
    case 412u: goto L_08A1E310;
    case 413u: goto L_08A1E324;
    case 414u: goto L_08A1E338;
    case 415u: goto L_08A1E354;
    case 416u: goto L_08A1E36C;
    case 417u: goto L_08A1E37C;
    case 418u: goto L_08A1E38C;
    case 419u: goto L_08A1E3E0;
    case 420u: goto L_08A1E3F0;
    case 421u: goto L_08A1E400;
    case 422u: goto L_08A1E410;
    case 423u: goto L_08A1E428;
    case 424u: goto L_08A1E43C;
    case 425u: goto L_08A1E450;
    case 426u: goto L_08A1E468;
    case 427u: goto L_08A1E47C;
    case 428u: goto L_08A1E484;
    case 429u: goto L_08A1E49C;
    case 430u: goto L_08A1E4B4;
    case 431u: goto L_08A1E4E4;
    case 432u: goto L_08A1E508;
    case 433u: goto L_08A1E510;
    case 434u: goto L_08A1E51C;
    case 435u: goto L_08A1E524;
    case 436u: goto L_08A1E530;
    case 437u: goto L_08A1E538;
    case 438u: goto L_08A1E544;
    case 439u: goto L_08A1E54C;
    case 440u: goto L_08A1E558;
    case 441u: goto L_08A1E560;
    case 442u: goto L_08A1E56C;
    case 443u: goto L_08A1E574;
    case 444u: goto L_08A1E580;
    case 445u: goto L_08A1E588;
    case 446u: goto L_08A1E598;
    case 447u: goto L_08A1E5B0;
    case 448u: goto L_08A1E5C8;
    case 449u: goto L_08A1E5D8;
    case 450u: goto L_08A1E5E8;
    case 451u: goto L_08A1E64C;
    case 452u: goto L_08A1E65C;
    case 453u: goto L_08A1E66C;
    case 454u: goto L_08A1E67C;
    case 455u: goto L_08A1E6A4;
    case 456u: goto L_08A1E6C0;
    case 457u: goto L_08A1E6D0;
    case 458u: goto L_08A1E6DC;
    case 459u: goto L_08A1E6FC;
    case 460u: goto L_08A1E708;
    case 461u: goto L_08A1E728;
    case 462u: goto L_08A1E734;
    case 463u: goto L_08A1E754;
    case 464u: goto L_08A1E768;
    case 465u: goto L_08A1E774;
    case 466u: goto L_08A1E78C;
    case 467u: goto L_08A1E798;
    case 468u: goto L_08A1E7B8;
    case 469u: goto L_08A1E7CC;
    case 470u: goto L_08A1E7D8;
    case 471u: goto L_08A1E7F8;
    case 472u: goto L_08A1E804;
    case 473u: goto L_08A1E824;
    case 474u: goto L_08A1E838;
    case 475u: goto L_08A1E84C;
    case 476u: goto L_08A1E878;
    case 477u: goto L_08A1E888;
    case 478u: goto L_08A1E8A4;
    case 479u: goto L_08A1E8B4;
    case 480u: goto L_08A1E8C4;
    case 481u: goto L_08A1E8D4;
    case 482u: goto L_08A1E8E4;
    case 483u: goto L_08A1E8F4;
    case 484u: goto L_08A1E90C;
    case 485u: goto L_08A1E920;
    case 486u: goto L_08A1E934;
    case 487u: goto L_08A1E94C;
    case 488u: goto L_08A1E960;
    case 489u: goto L_08A1E968;
    case 490u: goto L_08A1E980;
    case 491u: goto L_08A1E99C;
    case 492u: goto L_08A1E9F0;
    case 493u: goto L_08A1E9FC;
    case 494u: goto L_08A1EA30;
    case 495u: goto L_08A1EA40;
    case 496u: goto L_08A1EA4C;
    case 497u: goto L_08A1EA58;
    case 498u: goto L_08A1EA7C;
    case 499u: goto L_08A1EA84;
    case 500u: goto L_08A1EA90;
    case 501u: goto L_08A1EA98;
    case 502u: goto L_08A1EAA4;
    case 503u: goto L_08A1EAAC;
    case 504u: goto L_08A1EAB8;
    case 505u: goto L_08A1EAC0;
    case 506u: goto L_08A1EACC;
    case 507u: goto L_08A1EAD4;
    case 508u: goto L_08A1EAE0;
    case 509u: goto L_08A1EAE8;
    case 510u: goto L_08A1EAF4;
    case 511u: goto L_08A1EAFC;
    case 512u: goto L_08A1EB08;
    case 513u: goto L_08A1EB10;
    case 514u: goto L_08A1EB1C;
    case 515u: goto L_08A1EB24;
    case 516u: goto L_08A1EB30;
    case 517u: goto L_08A1EB38;
    case 518u: goto L_08A1EB44;
    case 519u: goto L_08A1EB4C;
    case 520u: goto L_08A1EB58;
    case 521u: goto L_08A1EB60;
    case 522u: goto L_08A1EB6C;
    case 523u: goto L_08A1EB74;
    case 524u: goto L_08A1EB80;
    case 525u: goto L_08A1EB88;
    case 526u: goto L_08A1EB94;
    case 527u: goto L_08A1EB9C;
    case 528u: goto L_08A1EBA8;
    case 529u: goto L_08A1EBB0;
    case 530u: goto L_08A1EBBC;
    case 531u: goto L_08A1EBC4;
    case 532u: goto L_08A1EBD0;
    case 533u: goto L_08A1EBD8;
    case 534u: goto L_08A1EBE4;
    case 535u: goto L_08A1EBEC;
    case 536u: goto L_08A1EBF8;
    case 537u: goto L_08A1EC00;
    case 538u: goto L_08A1EC0C;
    case 539u: goto L_08A1EC14;
    case 540u: goto L_08A1EC20;
    case 541u: goto L_08A1EC28;
    case 542u: goto L_08A1EC34;
    case 543u: goto L_08A1EC3C;
    case 544u: goto L_08A1EC48;
    case 545u: goto L_08A1EC50;
    case 546u: goto L_08A1EC5C;
    case 547u: goto L_08A1EC64;
    case 548u: goto L_08A1EC70;
    case 549u: goto L_08A1EC78;
    case 550u: goto L_08A1EC90;
    case 551u: goto L_08A1ECA8;
    case 552u: goto L_08A1ECC0;
    case 553u: goto L_08A1ECD0;
    case 554u: goto L_08A1ECE0;
    case 555u: goto L_08A1ED44;
    case 556u: goto L_08A1ED54;
    case 557u: goto L_08A1ED64;
    case 558u: goto L_08A1ED74;
    case 559u: goto L_08A1ED9C;
    case 560u: goto L_08A1EDB8;
    case 561u: goto L_08A1EDC8;
    case 562u: goto L_08A1EDD4;
    case 563u: goto L_08A1EDF0;
    case 564u: goto L_08A1EDFC;
    case 565u: goto L_08A1EE18;
    case 566u: goto L_08A1EE24;
    case 567u: goto L_08A1EE38;
    case 568u: goto L_08A1EE44;
    case 569u: goto L_08A1EE58;
    case 570u: goto L_08A1EE64;
    case 571u: goto L_08A1EE78;
    case 572u: goto L_08A1EE84;
    case 573u: goto L_08A1EEA0;
    case 574u: goto L_08A1EEAC;
    case 575u: goto L_08A1EEC8;
    case 576u: goto L_08A1EED4;
    case 577u: goto L_08A1EEF0;
    case 578u: goto L_08A1EEFC;
    case 579u: goto L_08A1EF18;
    case 580u: goto L_08A1EF24;
    case 581u: goto L_08A1EF40;
    case 582u: goto L_08A1EF4C;
    case 583u: goto L_08A1EF68;
    case 584u: goto L_08A1EF74;
    case 585u: goto L_08A1EF90;
    case 586u: goto L_08A1EF9C;
    case 587u: goto L_08A1EFB8;
    case 588u: goto L_08A1EFC4;
    case 589u: goto L_08A1EFE0;
    case 590u: goto L_08A1F038;
    case 591u: goto L_08A1F048;
    case 592u: goto L_08A1F058;
    case 593u: goto L_08A1F068;
    case 594u: goto L_08A1F078;
    case 595u: goto L_08A1F088;
    case 596u: goto L_08A1F0E0;
    case 597u: goto L_08A1F0F0;
    case 598u: goto L_08A1F100;
    case 599u: goto L_08A1F110;
    case 600u: goto L_08A1F120;
    case 601u: goto L_08A1F130;
    case 602u: goto L_08A1F13C;
    case 603u: goto L_08A1F158;
    case 604u: goto L_08A1F164;
    case 605u: goto L_08A1F180;
    case 606u: goto L_08A1F18C;
    case 607u: goto L_08A1F1A8;
    case 608u: goto L_08A1F1B4;
    case 609u: goto L_08A1F1D4;
    case 610u: goto L_08A1F1EC;
    case 611u: goto L_08A1F200;
    case 612u: goto L_08A1F214;
    case 613u: goto L_08A1F220;
    case 614u: goto L_08A1F240;
    case 615u: goto L_08A1F24C;
    case 616u: goto L_08A1F26C;
    case 617u: goto L_08A1F278;
    case 618u: goto L_08A1F298;
    case 619u: goto L_08A1F2A4;
    case 620u: goto L_08A1F2C4;
    case 621u: goto L_08A1F2D0;
    case 622u: goto L_08A1F2F0;
    case 623u: goto L_08A1F2FC;
    case 624u: goto L_08A1F31C;
    case 625u: goto L_08A1F374;
    case 626u: goto L_08A1F384;
    case 627u: goto L_08A1F394;
    case 628u: goto L_08A1F3A4;
    case 629u: goto L_08A1F3B4;
    case 630u: goto L_08A1F3C4;
    case 631u: goto L_08A1F3D0;
    case 632u: goto L_08A1F3EC;
    case 633u: goto L_08A1F400;
    case 634u: goto L_08A1F458;
    case 635u: goto L_08A1F468;
    case 636u: goto L_08A1F478;
    case 637u: goto L_08A1F488;
    case 638u: goto L_08A1F498;
    case 639u: goto L_08A1F4AC;
    case 640u: goto L_08A1F504;
    case 641u: goto L_08A1F514;
    case 642u: goto L_08A1F524;
    case 643u: goto L_08A1F534;
    case 644u: goto L_08A1F544;
    case 645u: goto L_08A1F558;
    case 646u: goto L_08A1F56C;
    case 647u: goto L_08A1F578;
    case 648u: goto L_08A1F598;
    case 649u: goto L_08A1F5AC;
    case 650u: goto L_08A1F5C0;
    case 651u: goto L_08A1F5E8;
    case 652u: goto L_08A1F614;
    case 653u: goto L_08A1F624;
    case 654u: goto L_08A1F640;
    case 655u: goto L_08A1F650;
    case 656u: goto L_08A1F660;
    case 657u: goto L_08A1F670;
    case 658u: goto L_08A1F680;
    case 659u: goto L_08A1F690;
    case 660u: goto L_08A1F6A8;
    case 661u: goto L_08A1F6BC;
    case 662u: goto L_08A1F6C4;
    case 663u: goto L_08A1F6DC;
    case 664u: goto L_08A1F6F4;
    case 665u: goto L_08A1F714;
    case 666u: goto L_08A1F738;
    case 667u: goto L_08A1F740;
    case 668u: goto L_08A1F74C;
    case 669u: goto L_08A1F754;
    case 670u: goto L_08A1F760;
    case 671u: goto L_08A1F768;
    case 672u: goto L_08A1F780;
    case 673u: goto L_08A1F798;
    case 674u: goto L_08A1F7A8;
    case 675u: goto L_08A1F7B8;
    case 676u: goto L_08A1F814;
    case 677u: goto L_08A1F824;
    case 678u: goto L_08A1F834;
    case 679u: goto L_08A1F844;
    case 680u: goto L_08A1F86C;
    case 681u: goto L_08A1F888;
    case 682u: goto L_08A1F898;
    case 683u: goto L_08A1F8A4;
    case 684u: goto L_08A1F8B8;
    case 685u: goto L_08A1F8C4;
    case 686u: goto L_08A1F8D8;
    case 687u: goto L_08A1F8F8;
    case 688u: goto L_08A1F908;
    case 689u: goto L_08A1F914;
    case 690u: goto L_08A1F928;
    case 691u: goto L_08A1F948;
    case 692u: goto L_08A1F970;
    case 693u: goto L_08A1F98C;
    case 694u: goto L_08A1F9A4;
    case 695u: goto L_08A1F9B8;
    case 696u: goto L_08A1F9C0;
    case 697u: goto L_08A1F9D8;
    case 698u: goto L_08A1F9F4;
    case 699u: goto L_08A1FA28;
    case 700u: goto L_08A1FA48;
    case 701u: goto L_08A1FA6C;
    case 702u: goto L_08A1FA74;
    case 703u: goto L_08A1FA80;
    case 704u: goto L_08A1FA88;
    case 705u: goto L_08A1FA94;
    case 706u: goto L_08A1FA9C;
    case 707u: goto L_08A1FAA8;
    case 708u: goto L_08A1FAB0;
    case 709u: goto L_08A1FABC;
    case 710u: goto L_08A1FAC4;
    case 711u: goto L_08A1FAD0;
    case 712u: goto L_08A1FAD8;
    case 713u: goto L_08A1FAE4;
    case 714u: goto L_08A1FAEC;
    case 715u: goto L_08A1FAF8;
    case 716u: goto L_08A1FB00;
    case 717u: goto L_08A1FB0C;
    case 718u: goto L_08A1FB14;
    case 719u: goto L_08A1FB20;
    case 720u: goto L_08A1FB28;
    case 721u: goto L_08A1FB40;
    case 722u: goto L_08A1FB50;
    case 723u: goto L_08A1FB68;
    case 724u: goto L_08A1FB88;
    case 725u: goto L_08A1FB94;
    case 726u: goto L_08A1FBB0;
    case 727u: goto L_08A1FBB8;
    case 728u: goto L_08A1FBC4;
    case 729u: goto L_08A1FBD0;
    case 730u: goto L_08A1FBEC;
    case 731u: goto L_08A1FC04;
    case 732u: goto L_08A1FC14;
    case 733u: goto L_08A1FC24;
    case 734u: goto L_08A1FC80;
    case 735u: goto L_08A1FC90;
    case 736u: goto L_08A1FCA0;
    case 737u: goto L_08A1FCB0;
    case 738u: goto L_08A1FCD8;
    case 739u: goto L_08A1FCF4;
    case 740u: goto L_08A1FD04;
    case 741u: goto L_08A1FD10;
    case 742u: goto L_08A1FD24;
    case 743u: goto L_08A1FD30;
    case 744u: goto L_08A1FD44;
    case 745u: goto L_08A1FD50;
    case 746u: goto L_08A1FD70;
    case 747u: goto L_08A1FD7C;
    case 748u: goto L_08A1FD9C;
    case 749u: goto L_08A1FDC0;
    case 750u: goto L_08A1FDD0;
    case 751u: goto L_08A1FDDC;
    case 752u: goto L_08A1FDF0;
    case 753u: goto L_08A1FDFC;
    case 754u: goto L_08A1FE10;
    case 755u: goto L_08A1FE1C;
    case 756u: goto L_08A1FE38;
    case 757u: goto L_08A1FE44;
    case 758u: goto L_08A1FE60;
    case 759u: goto L_08A1FE6C;
    case 760u: goto L_08A1FE8C;
    case 761u: goto L_08A1FE98;
    case 762u: goto L_08A1FED0;
    case 763u: goto L_08A1FEEC;
    case 764u: goto L_08A1FF04;
    case 765u: goto L_08A1FF28;
    case 766u: goto L_08A1FF30;
    case 767u: goto L_08A1FF48;
    case 768u: goto L_08A1FF60;
    case 769u: goto L_08A1FF84;
    case 770u: goto L_08A1FF8C;
    case 771u: goto L_08A1FFA4;
    case 772u: goto L_08A1FFBC;
    case 773u: goto L_08A1FFD0;
    case 774u: goto L_08A1FFD8;
    case 775u: goto L_08A1FFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A1C004:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1C014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C014u) goto L_08A1C014;
    return;
L_08A1C014:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1C020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 142u, 0x088F8CC4u>(ctx, &aot_mem) && ctx.pc == 0x08A1C020u) goto L_08A1C020;
    return;
L_08A1C020:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C040u) goto L_08A1C040;
    return;
L_08A1C040:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1C04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 602u, 0x088F72C4u>(ctx, &aot_mem) && ctx.pc == 0x08A1C04Cu) goto L_08A1C04C;
    return;
L_08A1C04C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C06Cu) goto L_08A1C06C;
    return;
L_08A1C06C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1C078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 602u, 0x088F72C4u>(ctx, &aot_mem) && ctx.pc == 0x08A1C078u) goto L_08A1C078;
    return;
L_08A1C078:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C098u) goto L_08A1C098;
    return;
L_08A1C098:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A1C0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A1C0ACu) goto L_08A1C0AC;
    return;
L_08A1C0AC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8168));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8184));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8200));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1C0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C0D8u) goto L_08A1C0D8;
    return;
L_08A1C0D8:
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
L_08A1C0F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24056)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C120;
      }
      goto L_08A1C10C;
    }
L_08A1C10C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C128;
      }
      goto L_08A1C120;
    }
L_08A1C120:
    ctx.set_gpr(31, 0x08A1C128u);
    // nop
    goto L_08A1C1CC;
L_08A1C128:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24056)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A1C158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1C158u) goto L_08A1C158;
    return;
L_08A1C158:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15216));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A1C178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C178u) goto L_08A1C178;
    return;
L_08A1C178:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12944));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08A1C19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C19Cu) goto L_08A1C19C;
    return;
L_08A1C19C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A1C1A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C1A8u) goto L_08A1C1A8;
    return;
L_08A1C1A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A1C1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C1B4u) goto L_08A1C1B4;
    return;
L_08A1C1B4:
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
L_08A1C1CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15884));
    ctx.set_gpr(31, 0x08A1C1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1C1E4u) goto L_08A1C1E4;
    return;
L_08A1C1E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C1F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1C204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1C204u) goto L_08A1C204;
    return;
L_08A1C204:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15712));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15516));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24056));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13052));
    ctx.set_gpr(7, 2210u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-15728));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-15760));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8216));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-16064));
    ctx.set_gpr(31, 0x08A1C260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1C260u) goto L_08A1C260;
    return;
L_08A1C260:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C270:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1C280u);
    // nop
    goto L_08A1C0F4;
L_08A1C280:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C290:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22972)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C2A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24056)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1C2C4u) goto L_08A1C2C4;
    return;
L_08A1C2C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A1C2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1C2E0u) goto L_08A1C2E0;
    return;
L_08A1C2E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1C2F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C2F0u) goto L_08A1C2F0;
    return;
L_08A1C2F0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C304u) goto L_08A1C304;
    return;
L_08A1C304:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A1C314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1C314u) goto L_08A1C314;
    return;
L_08A1C314:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8284));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8292));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8300));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1C33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C33Cu) goto L_08A1C33C;
    return;
L_08A1C33C:
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15484));
    ctx.set_gpr(31, 0x08A1C34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x08A1C34Cu) goto L_08A1C34C;
    return;
L_08A1C34C:
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
L_08A1C364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1C374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 645u, 0x08A42C38u>(ctx, &aot_mem) && ctx.pc == 0x08A1C374u) goto L_08A1C374;
    return;
L_08A1C374:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C384:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1C394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 655u, 0x08A42CF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C394u) goto L_08A1C394;
    return;
L_08A1C394:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C3A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24044)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C3E4;
      }
      goto L_08A1C3BC;
    }
L_08A1C3BC:
    ctx.set_gpr(31, 0x08A1C3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A1C3C4u) goto L_08A1C3C4;
    return;
L_08A1C3C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1C3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1C3D0u) goto L_08A1C3D0;
    return;
L_08A1C3D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1C3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1C3DCu) goto L_08A1C3DC;
    return;
L_08A1C3DC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24044), ctx.gpr[2]);
    goto L_08A1C3E4;
L_08A1C3E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24044)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C3FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24044)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C428;
      }
      goto L_08A1C414;
    }
L_08A1C414:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C430;
      }
      goto L_08A1C428;
    }
L_08A1C428:
    ctx.set_gpr(31, 0x08A1C430u);
    // nop
    goto L_08A1C48C;
L_08A1C430:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24044)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C448:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A1C45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1C45Cu) goto L_08A1C45C;
    return;
L_08A1C45C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15108));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A1C470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C470u) goto L_08A1C470;
    return;
L_08A1C470:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C48C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15180));
    ctx.set_gpr(31, 0x08A1C4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1C4A4u) goto L_08A1C4A4;
    return;
L_08A1C4A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C4B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1C4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1C4C4u) goto L_08A1C4C4;
    return;
L_08A1C4C4:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15024));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14652));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24044));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-15056));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8308));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-15288));
    ctx.set_gpr(31, 0x08A1C520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1C520u) goto L_08A1C520;
    return;
L_08A1C520:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C530:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1C540u);
    // nop
    goto L_08A1C3FC;
L_08A1C540:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24044)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1C578u) goto L_08A1C578;
    return;
L_08A1C578:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8332));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08A1C594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1C594u) goto L_08A1C594;
    return;
L_08A1C594:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1C5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C5A4u) goto L_08A1C5A4;
    return;
L_08A1C5A4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1C5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x08A1C5B0u) goto L_08A1C5B0;
    return;
L_08A1C5B0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C5D4u) goto L_08A1C5D4;
    return;
L_08A1C5D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C5ECu) goto L_08A1C5EC;
    return;
L_08A1C5EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A1C5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C5FCu) goto L_08A1C5FC;
    return;
L_08A1C5FC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C60Cu) goto L_08A1C60C;
    return;
L_08A1C60C:
    ctx.set_gpr(3, 2215u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-528));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C628u) goto L_08A1C628;
    return;
L_08A1C628:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1C640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C640u) goto L_08A1C640;
    return;
L_08A1C640:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C654u) goto L_08A1C654;
    return;
L_08A1C654:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A1C66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 63u, 0x089284A0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C66Cu) goto L_08A1C66C;
    return;
L_08A1C66C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8416));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8440));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8464));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1C698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C698u) goto L_08A1C698;
    return;
L_08A1C698:
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14620));
    ctx.set_gpr(31, 0x08A1C6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x08A1C6A8u) goto L_08A1C6A8;
    return;
L_08A1C6A8:
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
L_08A1C6C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1C6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 501u, 0x08A42180u>(ctx, &aot_mem) && ctx.pc == 0x08A1C6D4u) goto L_08A1C6D4;
    return;
L_08A1C6D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C6E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1C6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 503u, 0x08A421A4u>(ctx, &aot_mem) && ctx.pc == 0x08A1C6F4u) goto L_08A1C6F4;
    return;
L_08A1C6F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C704:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24016)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C744;
      }
      goto L_08A1C71C;
    }
L_08A1C71C:
    ctx.set_gpr(31, 0x08A1C724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A1C724u) goto L_08A1C724;
    return;
L_08A1C724:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1C730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1C730u) goto L_08A1C730;
    return;
L_08A1C730:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1C73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1C73Cu) goto L_08A1C73C;
    return;
L_08A1C73C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24016), ctx.gpr[2]);
    goto L_08A1C744;
L_08A1C744:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24016)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C75C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24016)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C788;
      }
      goto L_08A1C774;
    }
L_08A1C774:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C790;
      }
      goto L_08A1C788;
    }
L_08A1C788:
    ctx.set_gpr(31, 0x08A1C790u);
    // nop
    goto L_08A1C850;
L_08A1C790:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24016)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C7A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1C7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C7C0u) goto L_08A1C7C0;
    return;
L_08A1C7C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14992));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(31, 0x08A1C7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C7E4u) goto L_08A1C7E4;
    return;
L_08A1C7E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14992));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1C810;
      }
      goto L_08A1C808;
    }
L_08A1C808:
    ctx.set_gpr(31, 0x08A1C810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1C810u) goto L_08A1C810;
    return;
L_08A1C810:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A1C828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C828u) goto L_08A1C828;
    return;
L_08A1C828:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A1C838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A1C838u) goto L_08A1C838;
    return;
L_08A1C838:
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
L_08A1C850:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14216));
    ctx.set_gpr(31, 0x08A1C868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1C868u) goto L_08A1C868;
    return;
L_08A1C868:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C878:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1C888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1C888u) goto L_08A1C888;
    return;
L_08A1C888:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14060));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8488));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24016));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-14092));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8496));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-14424));
    ctx.set_gpr(31, 0x08A1C8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1C8E4u) goto L_08A1C8E4;
    return;
L_08A1C8E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C8F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1C904u);
    // nop
    goto L_08A1C75C;
L_08A1C904:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1C914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24016)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1C93Cu) goto L_08A1C93C;
    return;
L_08A1C93C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8508));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A1C958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1C958u) goto L_08A1C958;
    return;
L_08A1C958:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C968u) goto L_08A1C968;
    return;
L_08A1C968:
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1C97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C97Cu) goto L_08A1C97C;
    return;
L_08A1C97C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C98Cu) goto L_08A1C98C;
    return;
L_08A1C98C:
    ctx.set_gpr(3, 17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1C9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C9A0u) goto L_08A1C9A0;
    return;
L_08A1C9A0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C9B0u) goto L_08A1C9B0;
    return;
L_08A1C9B0:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1C9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C9C4u) goto L_08A1C9C4;
    return;
L_08A1C9C4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C9D4u) goto L_08A1C9D4;
    return;
L_08A1C9D4:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1C9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1C9E8u) goto L_08A1C9E8;
    return;
L_08A1C9E8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1C9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1C9F8u) goto L_08A1C9F8;
    return;
L_08A1C9F8:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1CA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CA0Cu) goto L_08A1CA0C;
    return;
L_08A1CA0C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1CA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CA1Cu) goto L_08A1CA1C;
    return;
L_08A1CA1C:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1CA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CA30u) goto L_08A1CA30;
    return;
L_08A1CA30:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1CA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CA40u) goto L_08A1CA40;
    return;
L_08A1CA40:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1CA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CA54u) goto L_08A1CA54;
    return;
L_08A1CA54:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1CA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CA64u) goto L_08A1CA64;
    return;
L_08A1CA64:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A1CA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1CA78u) goto L_08A1CA78;
    return;
L_08A1CA78:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1CA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CA8Cu) goto L_08A1CA8C;
    return;
L_08A1CA8C:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1CAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CAA0u) goto L_08A1CAA0;
    return;
L_08A1CAA0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1CAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CAB0u) goto L_08A1CAB0;
    return;
L_08A1CAB0:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1CAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CAC4u) goto L_08A1CAC4;
    return;
L_08A1CAC4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1CAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CAD4u) goto L_08A1CAD4;
    return;
L_08A1CAD4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1CAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A1CAE0u) goto L_08A1CAE0;
    return;
L_08A1CAE0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8708));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8756));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8804));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1CB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CB18u) goto L_08A1CB18;
    return;
L_08A1CB18:
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
L_08A1CB34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23964)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CB74;
      }
      goto L_08A1CB4C;
    }
L_08A1CB4C:
    ctx.set_gpr(31, 0x08A1CB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A1CB54u) goto L_08A1CB54;
    return;
L_08A1CB54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1CB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1CB60u) goto L_08A1CB60;
    return;
L_08A1CB60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1CB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1CB6Cu) goto L_08A1CB6C;
    return;
L_08A1CB6C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23964), ctx.gpr[2]);
    goto L_08A1CB74;
L_08A1CB74:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23964)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CB8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23964)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CBB8;
      }
      goto L_08A1CBA4;
    }
L_08A1CBA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CBC0;
      }
      goto L_08A1CBB8;
    }
L_08A1CBB8:
    ctx.set_gpr(31, 0x08A1CBC0u);
    // nop
    goto L_08A1CC94;
L_08A1CBC0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23964)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CBD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1CBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1CBF0u) goto L_08A1CBF0;
    return;
L_08A1CBF0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14840));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(31, 0x08A1CC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CC14u) goto L_08A1CC14;
    return;
L_08A1CC14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14840));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CC40;
      }
      goto L_08A1CC38;
    }
L_08A1CC38:
    ctx.set_gpr(31, 0x08A1CC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1CC40u) goto L_08A1CC40;
    return;
L_08A1CC40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CC54;
      }
      goto L_08A1CC4C;
    }
L_08A1CC4C:
    ctx.set_gpr(31, 0x08A1CC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1CC54u) goto L_08A1CC54;
    return;
L_08A1CC54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CC68;
      }
      goto L_08A1CC60;
    }
L_08A1CC60:
    ctx.set_gpr(31, 0x08A1CC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1CC68u) goto L_08A1CC68;
    return;
L_08A1CC68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CC7C;
      }
      goto L_08A1CC74;
    }
L_08A1CC74:
    ctx.set_gpr(31, 0x08A1CC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1CC7Cu) goto L_08A1CC7C;
    return;
L_08A1CC7C:
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
L_08A1CC94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13124));
    ctx.set_gpr(31, 0x08A1CCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1CCACu) goto L_08A1CCAC;
    return;
L_08A1CCAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CCBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1CCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1CCCCu) goto L_08A1CCCC;
    return;
L_08A1CCCC:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12968));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8852));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23964));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-13000));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8860));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-13352));
    ctx.set_gpr(31, 0x08A1CD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1CD28u) goto L_08A1CD28;
    return;
L_08A1CD28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CD38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1CD48u);
    // nop
    goto L_08A1CB8C;
L_08A1CD48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CD58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23964)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1CD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1CD80u) goto L_08A1CD80;
    return;
L_08A1CD80:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8900));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08A1CD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1CD9Cu) goto L_08A1CD9C;
    return;
L_08A1CD9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1CDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CDACu) goto L_08A1CDAC;
    return;
L_08A1CDAC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1CDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CDB8u) goto L_08A1CDB8;
    return;
L_08A1CDB8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1CDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CDCCu) goto L_08A1CDCC;
    return;
L_08A1CDCC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1CDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CDD8u) goto L_08A1CDD8;
    return;
L_08A1CDD8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1CDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CDECu) goto L_08A1CDEC;
    return;
L_08A1CDEC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1CDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CDF8u) goto L_08A1CDF8;
    return;
L_08A1CDF8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1CE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CE0Cu) goto L_08A1CE0C;
    return;
L_08A1CE0C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1CE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CE18u) goto L_08A1CE18;
    return;
L_08A1CE18:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9120));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9160));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9200));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1CE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CE44u) goto L_08A1CE44;
    return;
L_08A1CE44:
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
L_08A1CE60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23920)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CE8C;
      }
      goto L_08A1CE78;
    }
L_08A1CE78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CE94;
      }
      goto L_08A1CE8C;
    }
L_08A1CE8C:
    ctx.set_gpr(31, 0x08A1CE94u);
    // nop
    goto L_08A1CF5C;
L_08A1CE94:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23920)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CEAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1CEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1CEC4u) goto L_08A1CEC4;
    return;
L_08A1CEC4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(31, 0x08A1CEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1CEE8u) goto L_08A1CEE8;
    return;
L_08A1CEE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1CF14;
      }
      goto L_08A1CF0C;
    }
L_08A1CF0C:
    ctx.set_gpr(31, 0x08A1CF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1CF14u) goto L_08A1CF14;
    return;
L_08A1CF14:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14552));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A1CF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CF2Cu) goto L_08A1CF2C;
    return;
L_08A1CF2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A1CF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CF38u) goto L_08A1CF38;
    return;
L_08A1CF38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08A1CF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1CF44u) goto L_08A1CF44;
    return;
L_08A1CF44:
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
L_08A1CF5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12412));
    ctx.set_gpr(31, 0x08A1CF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1CF74u) goto L_08A1CF74;
    return;
L_08A1CF74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1CF84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1CF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1CF94u) goto L_08A1CF94;
    return;
L_08A1CF94:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23920));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11792));
    ctx.set_gpr(7, 2210u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-12256));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-12288));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9248));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-12628));
    ctx.set_gpr(31, 0x08A1CFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1CFF0u) goto L_08A1CFF0;
    return;
L_08A1CFF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1D010u);
    // nop
    goto L_08A1CE60;
L_08A1D010:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D020:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23904)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23920)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1D058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1D058u) goto L_08A1D058;
    return;
L_08A1D058:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9288));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A1D074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1D074u) goto L_08A1D074;
    return;
L_08A1D074:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1D084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D084u) goto L_08A1D084;
    return;
L_08A1D084:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1D090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D090u) goto L_08A1D090;
    return;
L_08A1D090:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9400));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9412));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9424));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1D0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D0BCu) goto L_08A1D0BC;
    return;
L_08A1D0BC:
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
L_08A1D0D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23904)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D104;
      }
      goto L_08A1D0F0;
    }
L_08A1D0F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D10C;
      }
      goto L_08A1D104;
    }
L_08A1D104:
    ctx.set_gpr(31, 0x08A1D10Cu);
    // nop
    goto L_08A1D1C8;
L_08A1D10C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23904)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D124:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1D13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1D13Cu) goto L_08A1D13C;
    return;
L_08A1D13C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14552));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(31, 0x08A1D15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D15Cu) goto L_08A1D15C;
    return;
L_08A1D15C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14552));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D188;
      }
      goto L_08A1D180;
    }
L_08A1D180:
    ctx.set_gpr(31, 0x08A1D188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D188u) goto L_08A1D188;
    return;
L_08A1D188:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D19C;
      }
      goto L_08A1D194;
    }
L_08A1D194:
    ctx.set_gpr(31, 0x08A1D19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D19Cu) goto L_08A1D19C;
    return;
L_08A1D19C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D1B0;
      }
      goto L_08A1D1A8;
    }
L_08A1D1A8:
    ctx.set_gpr(31, 0x08A1D1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D1B0u) goto L_08A1D1B0;
    return;
L_08A1D1B0:
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
L_08A1D1C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11792));
    ctx.set_gpr(31, 0x08A1D1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1D1E0u) goto L_08A1D1E0;
    return;
L_08A1D1E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D1F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1D200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1D200u) goto L_08A1D200;
    return;
L_08A1D200:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11636));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9436));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23904));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14956));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(28132));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-11668));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9444));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-11996));
    ctx.set_gpr(31, 0x08A1D25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1D25Cu) goto L_08A1D25C;
    return;
L_08A1D25C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D26C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1D27Cu);
    // nop
    goto L_08A1D0D8;
L_08A1D27C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D28C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23904)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1D2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1D2B4u) goto L_08A1D2B4;
    return;
L_08A1D2B4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9476));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A1D2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1D2D0u) goto L_08A1D2D0;
    return;
L_08A1D2D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1D2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D2E0u) goto L_08A1D2E0;
    return;
L_08A1D2E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1D2ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D2ECu) goto L_08A1D2EC;
    return;
L_08A1D2EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1D300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D300u) goto L_08A1D300;
    return;
L_08A1D300:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1D30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D30Cu) goto L_08A1D30C;
    return;
L_08A1D30C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1D320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D320u) goto L_08A1D320;
    return;
L_08A1D320:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1D32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 657u, 0x088F776Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D32Cu) goto L_08A1D32C;
    return;
L_08A1D32C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1D340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D340u) goto L_08A1D340;
    return;
L_08A1D340:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A1D354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 818u, 0x0895F748u>(ctx, &aot_mem) && ctx.pc == 0x08A1D354u) goto L_08A1D354;
    return;
L_08A1D354:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1D364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D364u) goto L_08A1D364;
    return;
L_08A1D364:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9788));
    ctx.set_gpr(31, 0x08A1D37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A1D37Cu) goto L_08A1D37C;
    return;
L_08A1D37C:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24480));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1D398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D398u) goto L_08A1D398;
    return;
L_08A1D398:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A1D3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A1D3ACu) goto L_08A1D3AC;
    return;
L_08A1D3AC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1D3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D3C0u) goto L_08A1D3C0;
    return;
L_08A1D3C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A1D3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D3D0u) goto L_08A1D3D0;
    return;
L_08A1D3D0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1D3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D3E0u) goto L_08A1D3E0;
    return;
L_08A1D3E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9644));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9692));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9740));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1D410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D410u) goto L_08A1D410;
    return;
L_08A1D410:
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
L_08A1D42C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A1D444u);
    // nop
    goto L_08A1D52C;
L_08A1D444:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23852)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1D458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1D458u) goto L_08A1D458;
    return;
L_08A1D458:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D46C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23852)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D498;
      }
      goto L_08A1D484;
    }
L_08A1D484:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D4A0;
      }
      goto L_08A1D498;
    }
L_08A1D498:
    ctx.set_gpr(31, 0x08A1D4A0u);
    // nop
    goto L_08A1D52C;
L_08A1D4A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23852)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D4B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1D4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1D4D0u) goto L_08A1D4D0;
    return;
L_08A1D4D0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8452));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(31, 0x08A1D4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D4E8u) goto L_08A1D4E8;
    return;
L_08A1D4E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8452));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D514;
      }
      goto L_08A1D50C;
    }
L_08A1D50C:
    ctx.set_gpr(31, 0x08A1D514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D514u) goto L_08A1D514;
    return;
L_08A1D514:
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
L_08A1D52C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10924));
    ctx.set_gpr(31, 0x08A1D544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1D544u) goto L_08A1D544;
    return;
L_08A1D544:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1D564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1D564u) goto L_08A1D564;
    return;
L_08A1D564:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10768));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9792));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23852));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-10800));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9804));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-11080));
    ctx.set_gpr(31, 0x08A1D5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1D5C0u) goto L_08A1D5C0;
    return;
L_08A1D5C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D5D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1D5E0u);
    // nop
    goto L_08A1D46C;
L_08A1D5E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D5F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23852)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1D618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1D618u) goto L_08A1D618;
    return;
L_08A1D618:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9824));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A1D634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1D634u) goto L_08A1D634;
    return;
L_08A1D634:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1D644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D644u) goto L_08A1D644;
    return;
L_08A1D644:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1D650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 224u, 0x088C1484u>(ctx, &aot_mem) && ctx.pc == 0x08A1D650u) goto L_08A1D650;
    return;
L_08A1D650:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1D668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D668u) goto L_08A1D668;
    return;
L_08A1D668:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1D674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 505u, 0x088C2CF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1D674u) goto L_08A1D674;
    return;
L_08A1D674:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9840));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9848));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(9856));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1D6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D6A8u) goto L_08A1D6A8;
    return;
L_08A1D6A8:
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
L_08A1D6C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23840)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D704;
      }
      goto L_08A1D6DC;
    }
L_08A1D6DC:
    ctx.set_gpr(31, 0x08A1D6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A1D6E4u) goto L_08A1D6E4;
    return;
L_08A1D6E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1D6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1D6F0u) goto L_08A1D6F0;
    return;
L_08A1D6F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1D6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1D6FCu) goto L_08A1D6FC;
    return;
L_08A1D6FC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23840), ctx.gpr[2]);
    goto L_08A1D704;
L_08A1D704:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23840)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D71C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23840)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D748;
      }
      goto L_08A1D734;
    }
L_08A1D734:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D750;
      }
      goto L_08A1D748;
    }
L_08A1D748:
    ctx.set_gpr(31, 0x08A1D750u);
    // nop
    goto L_08A1D7AC;
L_08A1D750:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23840)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A1D77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D77Cu) goto L_08A1D77C;
    return;
L_08A1D77C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8556));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A1D790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D790u) goto L_08A1D790;
    return;
L_08A1D790:
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
L_08A1D7AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10284));
    ctx.set_gpr(31, 0x08A1D7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1D7C4u) goto L_08A1D7C4;
    return;
L_08A1D7C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D7D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1D7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1D7E4u) goto L_08A1D7E4;
    return;
L_08A1D7E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9864));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23840));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-10168));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9872));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-10392));
    ctx.set_gpr(31, 0x08A1D838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1D838u) goto L_08A1D838;
    return;
L_08A1D838:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D848:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1D858u);
    // nop
    goto L_08A1D71C;
L_08A1D858:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23836)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D894;
      }
      goto L_08A1D880;
    }
L_08A1D880:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D89C;
      }
      goto L_08A1D894;
    }
L_08A1D894:
    ctx.set_gpr(31, 0x08A1D89Cu);
    // nop
    goto L_08A1DA64;
L_08A1D89C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23836)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D8B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A1D8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D8CCu) goto L_08A1D8CC;
    return;
L_08A1D8CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14356));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(31, 0x08A1D91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D91Cu) goto L_08A1D91C;
    return;
L_08A1D91C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14356));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D948;
      }
      goto L_08A1D940;
    }
L_08A1D940:
    ctx.set_gpr(31, 0x08A1D948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D948u) goto L_08A1D948;
    return;
L_08A1D948:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D95C;
      }
      goto L_08A1D954;
    }
L_08A1D954:
    ctx.set_gpr(31, 0x08A1D95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D95Cu) goto L_08A1D95C;
    return;
L_08A1D95C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D970;
      }
      goto L_08A1D968;
    }
L_08A1D968:
    ctx.set_gpr(31, 0x08A1D970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D970u) goto L_08A1D970;
    return;
L_08A1D970:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D984;
      }
      goto L_08A1D97C;
    }
L_08A1D97C:
    ctx.set_gpr(31, 0x08A1D984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D984u) goto L_08A1D984;
    return;
L_08A1D984:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D998;
      }
      goto L_08A1D990;
    }
L_08A1D990:
    ctx.set_gpr(31, 0x08A1D998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D998u) goto L_08A1D998;
    return;
L_08A1D998:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D9AC;
      }
      goto L_08A1D9A4;
    }
L_08A1D9A4:
    ctx.set_gpr(31, 0x08A1D9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D9ACu) goto L_08A1D9AC;
    return;
L_08A1D9AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D9C0;
      }
      goto L_08A1D9B8;
    }
L_08A1D9B8:
    ctx.set_gpr(31, 0x08A1D9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D9C0u) goto L_08A1D9C0;
    return;
L_08A1D9C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D9D4;
      }
      goto L_08A1D9CC;
    }
L_08A1D9CC:
    ctx.set_gpr(31, 0x08A1D9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D9D4u) goto L_08A1D9D4;
    return;
L_08A1D9D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D9E8;
      }
      goto L_08A1D9E0;
    }
L_08A1D9E0:
    ctx.set_gpr(31, 0x08A1D9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D9E8u) goto L_08A1D9E8;
    return;
L_08A1D9E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D9FC;
      }
      goto L_08A1D9F4;
    }
L_08A1D9F4:
    ctx.set_gpr(31, 0x08A1D9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1D9FCu) goto L_08A1D9FC;
    return;
L_08A1D9FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DA10;
      }
      goto L_08A1DA08;
    }
L_08A1DA08:
    ctx.set_gpr(31, 0x08A1DA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1DA10u) goto L_08A1DA10;
    return;
L_08A1DA10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DA24;
      }
      goto L_08A1DA1C;
    }
L_08A1DA1C:
    ctx.set_gpr(31, 0x08A1DA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1DA24u) goto L_08A1DA24;
    return;
L_08A1DA24:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A1DA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DA3Cu) goto L_08A1DA3C;
    return;
L_08A1DA3C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A1DA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A1DA4Cu) goto L_08A1DA4C;
    return;
L_08A1DA4C:
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
L_08A1DA64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9588));
    ctx.set_gpr(31, 0x08A1DA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1DA7Cu) goto L_08A1DA7C;
    return;
L_08A1DA7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DA8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1DA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1DA9Cu) goto L_08A1DA9C;
    return;
L_08A1DA9C:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9424));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9896));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23836));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-9456));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(9932));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-10060));
    ctx.set_gpr(31, 0x08A1DB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1DB00u) goto L_08A1DB00;
    return;
L_08A1DB00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DB10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1DB20u);
    // nop
    goto L_08A1D868;
L_08A1DB20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DB30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23836)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1DB58u) goto L_08A1DB58;
    return;
L_08A1DB58:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(9948));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A1DB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1DB74u) goto L_08A1DB74;
    return;
L_08A1DB74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1DB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DB84u) goto L_08A1DB84;
    return;
L_08A1DB84:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A1DB90u) goto L_08A1DB90;
    return;
L_08A1DB90:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DBB0u) goto L_08A1DBB0;
    return;
L_08A1DBB0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A1DBBCu) goto L_08A1DBBC;
    return;
L_08A1DBBC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DBDCu) goto L_08A1DBDC;
    return;
L_08A1DBDC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A1DBE8u) goto L_08A1DBE8;
    return;
L_08A1DBE8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DC08u) goto L_08A1DC08;
    return;
L_08A1DC08:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A1DC14u) goto L_08A1DC14;
    return;
L_08A1DC14:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DC34u) goto L_08A1DC34;
    return;
L_08A1DC34:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DC40u);
    // nop
    goto L_08A1D6C4;
L_08A1DC40:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DC60u) goto L_08A1DC60;
    return;
L_08A1DC60:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10432));
    ctx.set_gpr(31, 0x08A1DC78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A1DC78u) goto L_08A1DC78;
    return;
L_08A1DC78:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8608));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DC94u) goto L_08A1DC94;
    return;
L_08A1DC94:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DCA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A1DCA0u) goto L_08A1DCA0;
    return;
L_08A1DCA0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DCC0u) goto L_08A1DCC0;
    return;
L_08A1DCC0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A1DCCCu) goto L_08A1DCCC;
    return;
L_08A1DCCC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DCECu) goto L_08A1DCEC;
    return;
L_08A1DCEC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 537u, 0x088C2FACu>(ctx, &aot_mem) && ctx.pc == 0x08A1DCF8u) goto L_08A1DCF8;
    return;
L_08A1DCF8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DD18u) goto L_08A1DD18;
    return;
L_08A1DD18:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 394u, 0x088BA3D8u>(ctx, &aot_mem) && ctx.pc == 0x08A1DD24u) goto L_08A1DD24;
    return;
L_08A1DD24:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DD44u) goto L_08A1DD44;
    return;
L_08A1DD44:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DD50u);
    // nop
    goto L_08A1E26C;
L_08A1DD50:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DD70u) goto L_08A1DD70;
    return;
L_08A1DD70:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DD84u) goto L_08A1DD84;
    return;
L_08A1DD84:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10436));
    ctx.set_gpr(31, 0x08A1DD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A1DD9Cu) goto L_08A1DD9C;
    return;
L_08A1DD9C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8516));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DDBCu) goto L_08A1DDBC;
    return;
L_08A1DDBC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 455u, 0x088BA974u>(ctx, &aot_mem) && ctx.pc == 0x08A1DDC8u) goto L_08A1DDC8;
    return;
L_08A1DDC8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DDE0u) goto L_08A1DDE0;
    return;
L_08A1DDE0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1DDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 701u, 0x08A1B9DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1DDECu) goto L_08A1DDEC;
    return;
L_08A1DDEC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10252));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10312));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(10372));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1DE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DE24u) goto L_08A1DE24;
    return;
L_08A1DE24:
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
L_08A1DE40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1DE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 188u, 0x08A3CD34u>(ctx, &aot_mem) && ctx.pc == 0x08A1DE50u) goto L_08A1DE50;
    return;
L_08A1DE50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DE60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23772)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DEA4;
      }
      goto L_08A1DE78;
    }
L_08A1DE78:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10504));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10480));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10492));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A1DE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A1DE9Cu) goto L_08A1DE9C;
    return;
L_08A1DE9C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23772), ctx.gpr[2]);
    goto L_08A1DEA4;
L_08A1DEA4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23772)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DEBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23768)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DF00;
      }
      goto L_08A1DED4;
    }
L_08A1DED4:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10704));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10656));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10680));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08A1DEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A1DEF8u) goto L_08A1DEF8;
    return;
L_08A1DEF8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23768), ctx.gpr[2]);
    goto L_08A1DF00;
L_08A1DF00:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23768)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DF18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A1DF30u);
    // nop
    goto L_08A1E030;
L_08A1DF30:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23764)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1DF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1DF44u) goto L_08A1DF44;
    return;
L_08A1DF44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DF58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23764)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DF84;
      }
      goto L_08A1DF70;
    }
L_08A1DF70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DF8C;
      }
      goto L_08A1DF84;
    }
L_08A1DF84:
    ctx.set_gpr(31, 0x08A1DF8Cu);
    // nop
    goto L_08A1E030;
L_08A1DF8C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23764)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DFA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A1DFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1DFBCu) goto L_08A1DFBC;
    return;
L_08A1DFBC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8648));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(31, 0x08A1DFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1DFD8u) goto L_08A1DFD8;
    return;
L_08A1DFD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8648));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E004;
      }
      goto L_08A1DFFC;
    }
L_08A1DFFC:
    ctx.set_gpr(31, 0x08A1E004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1E004u) goto L_08A1E004;
    return;
L_08A1E004:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E018;
      }
      goto L_08A1E010;
    }
L_08A1E010:
    ctx.set_gpr(31, 0x08A1E018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1E018u) goto L_08A1E018;
    return;
L_08A1E018:
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
L_08A1E030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8104));
    ctx.set_gpr(31, 0x08A1E048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1E048u) goto L_08A1E048;
    return;
L_08A1E048:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E058:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1E068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1E068u) goto L_08A1E068;
    return;
L_08A1E068:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7948));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23764));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-7980));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(10732));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8284));
    ctx.set_gpr(31, 0x08A1E0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1E0C4u) goto L_08A1E0C4;
    return;
L_08A1E0C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E0D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1E0E4u);
    // nop
    goto L_08A1DF58;
L_08A1E0E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E0F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23764)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1E11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E11Cu) goto L_08A1E11C;
    return;
L_08A1E11C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10752));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A1E138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1E138u) goto L_08A1E138;
    return;
L_08A1E138:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E148u) goto L_08A1E148;
    return;
L_08A1E148:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1E15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E15Cu) goto L_08A1E15C;
    return;
L_08A1E15C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1E168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 475u, 0x08A05B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E168u) goto L_08A1E168;
    return;
L_08A1E168:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1E180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E180u) goto L_08A1E180;
    return;
L_08A1E180:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A1E194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A1E194u) goto L_08A1E194;
    return;
L_08A1E194:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1E1A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E1A8u) goto L_08A1E1A8;
    return;
L_08A1E1A8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1E1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E1BCu) goto L_08A1E1BC;
    return;
L_08A1E1BC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1E1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 24u, 0x088E8228u>(ctx, &aot_mem) && ctx.pc == 0x08A1E1C8u) goto L_08A1E1C8;
    return;
L_08A1E1C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1E1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E1E8u) goto L_08A1E1E8;
    return;
L_08A1E1E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A1E1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1E1FCu) goto L_08A1E1FC;
    return;
L_08A1E1FC:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1E210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E210u) goto L_08A1E210;
    return;
L_08A1E210:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1E224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E224u) goto L_08A1E224;
    return;
L_08A1E224:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10840));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10872));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(10904));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E250u) goto L_08A1E250;
    return;
L_08A1E250:
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
L_08A1E26C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23728)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E2AC;
      }
      goto L_08A1E284;
    }
L_08A1E284:
    ctx.set_gpr(31, 0x08A1E28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A1E28Cu) goto L_08A1E28C;
    return;
L_08A1E28C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1E298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1E298u) goto L_08A1E298;
    return;
L_08A1E298:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1E2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E2A4u) goto L_08A1E2A4;
    return;
L_08A1E2A4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23728), ctx.gpr[2]);
    goto L_08A1E2AC;
L_08A1E2AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23728)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E2C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23728)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E2F0;
      }
      goto L_08A1E2DC;
    }
L_08A1E2DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E2F8;
      }
      goto L_08A1E2F0;
    }
L_08A1E2F0:
    ctx.set_gpr(31, 0x08A1E2F8u);
    // nop
    goto L_08A1E354;
L_08A1E2F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23728)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A1E324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1E324u) goto L_08A1E324;
    return;
L_08A1E324:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8752));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A1E338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1E338u) goto L_08A1E338;
    return;
L_08A1E338:
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
L_08A1E354:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7300));
    ctx.set_gpr(31, 0x08A1E36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1E36Cu) goto L_08A1E36C;
    return;
L_08A1E36C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E37C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1E38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1E38Cu) goto L_08A1E38C;
    return;
L_08A1E38C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23728));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-7184));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(10944));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7408));
    ctx.set_gpr(31, 0x08A1E3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1E3E0u) goto L_08A1E3E0;
    return;
L_08A1E3E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E3F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1E400u);
    // nop
    goto L_08A1E2C4;
L_08A1E400:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E410:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A1E428u);
    // nop
    goto L_08A1E5B0;
L_08A1E428:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23724)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1E43Cu) goto L_08A1E43C;
    return;
L_08A1E43C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E450:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23724)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E47C;
      }
      goto L_08A1E468;
    }
L_08A1E468:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E484;
      }
      goto L_08A1E47C;
    }
L_08A1E47C:
    ctx.set_gpr(31, 0x08A1E484u);
    // nop
    goto L_08A1E5B0;
L_08A1E484:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23724)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E49C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1E4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 604u, 0x08A1B12Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E4B4u) goto L_08A1E4B4;
    return;
L_08A1E4B4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    ctx.set_gpr(31, 0x08A1E4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1E4E4u) goto L_08A1E4E4;
    return;
L_08A1E4E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E510;
      }
      goto L_08A1E508;
    }
L_08A1E508:
    ctx.set_gpr(31, 0x08A1E510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1E510u) goto L_08A1E510;
    return;
L_08A1E510:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E524;
      }
      goto L_08A1E51C;
    }
L_08A1E51C:
    ctx.set_gpr(31, 0x08A1E524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1E524u) goto L_08A1E524;
    return;
L_08A1E524:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E538;
      }
      goto L_08A1E530;
    }
L_08A1E530:
    ctx.set_gpr(31, 0x08A1E538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1E538u) goto L_08A1E538;
    return;
L_08A1E538:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E54C;
      }
      goto L_08A1E544;
    }
L_08A1E544:
    ctx.set_gpr(31, 0x08A1E54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1E54Cu) goto L_08A1E54C;
    return;
L_08A1E54C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E560;
      }
      goto L_08A1E558;
    }
L_08A1E558:
    ctx.set_gpr(31, 0x08A1E560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1E560u) goto L_08A1E560;
    return;
L_08A1E560:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E574;
      }
      goto L_08A1E56C;
    }
L_08A1E56C:
    ctx.set_gpr(31, 0x08A1E574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1E574u) goto L_08A1E574;
    return;
L_08A1E574:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E588;
      }
      goto L_08A1E580;
    }
L_08A1E580:
    ctx.set_gpr(31, 0x08A1E588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1E588u) goto L_08A1E588;
    return;
L_08A1E588:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A1E598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 518u, 0x08A1AD58u>(ctx, &aot_mem) && ctx.pc == 0x08A1E598u) goto L_08A1E598;
    return;
L_08A1E598:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E5B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6696));
    ctx.set_gpr(31, 0x08A1E5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1E5C8u) goto L_08A1E5C8;
    return;
L_08A1E5C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E5D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1E5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1E5E8u) goto L_08A1E5E8;
    return;
L_08A1E5E8:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6532));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10968));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23724));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4912));
    ctx.set_gpr(7, 2210u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-19736));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-6564));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(11000));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(544));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7012));
    ctx.set_gpr(31, 0x08A1E64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1E64Cu) goto L_08A1E64C;
    return;
L_08A1E64C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E65C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1E66Cu);
    // nop
    goto L_08A1E450;
L_08A1E66C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E67C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23724)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E6A4u) goto L_08A1E6A4;
    return;
L_08A1E6A4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11020));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A1E6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1E6C0u) goto L_08A1E6C0;
    return;
L_08A1E6C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1E6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E6D0u) goto L_08A1E6D0;
    return;
L_08A1E6D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1E6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 394u, 0x088BA3D8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E6DCu) goto L_08A1E6DC;
    return;
L_08A1E6DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E6FCu) goto L_08A1E6FC;
    return;
L_08A1E6FC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1E708u);
    // nop
    goto L_08A1E26C;
L_08A1E708:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E728u) goto L_08A1E728;
    return;
L_08A1E728:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1E734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 633u, 0x08A73B28u>(ctx, &aot_mem) && ctx.pc == 0x08A1E734u) goto L_08A1E734;
    return;
L_08A1E734:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E754u) goto L_08A1E754;
    return;
L_08A1E754:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E768u) goto L_08A1E768;
    return;
L_08A1E768:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1E774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 631u, 0x089F7758u>(ctx, &aot_mem) && ctx.pc == 0x08A1E774u) goto L_08A1E774;
    return;
L_08A1E774:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E78Cu) goto L_08A1E78C;
    return;
L_08A1E78C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1E798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 849u, 0x08A07CE4u>(ctx, &aot_mem) && ctx.pc == 0x08A1E798u) goto L_08A1E798;
    return;
L_08A1E798:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E7B8u) goto L_08A1E7B8;
    return;
L_08A1E7B8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E7CCu) goto L_08A1E7CC;
    return;
L_08A1E7CC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1E7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 701u, 0x08A1B9DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1E7D8u) goto L_08A1E7D8;
    return;
L_08A1E7D8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E7F8u) goto L_08A1E7F8;
    return;
L_08A1E7F8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1E804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 252u, 0x088C1710u>(ctx, &aot_mem) && ctx.pc == 0x08A1E804u) goto L_08A1E804;
    return;
L_08A1E804:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E824u) goto L_08A1E824;
    return;
L_08A1E824:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E838u) goto L_08A1E838;
    return;
L_08A1E838:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E84Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E84Cu) goto L_08A1E84C;
    return;
L_08A1E84C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11172));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(11220));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(11268));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1E878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1E878u) goto L_08A1E878;
    return;
L_08A1E878:
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5932));
    ctx.set_gpr(31, 0x08A1E888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E888u) goto L_08A1E888;
    return;
L_08A1E888:
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
L_08A1E8A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1E8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 584u, 0x08A3B138u>(ctx, &aot_mem) && ctx.pc == 0x08A1E8B4u) goto L_08A1E8B4;
    return;
L_08A1E8B4:
    ctx.set_gpr(4, 2212u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20212));
    ctx.set_gpr(31, 0x08A1E8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 240u, 0x089451F4u>(ctx, &aot_mem) && ctx.pc == 0x08A1E8C4u) goto L_08A1E8C4;
    return;
L_08A1E8C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E8D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1E8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 588u, 0x08A3B178u>(ctx, &aot_mem) && ctx.pc == 0x08A1E8E4u) goto L_08A1E8E4;
    return;
L_08A1E8E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E8F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A1E90Cu);
    // nop
    goto L_08A1ECA8;
L_08A1E90C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23672)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1E920u) goto L_08A1E920;
    return;
L_08A1E920:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E934:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23672)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E960;
      }
      goto L_08A1E94C;
    }
L_08A1E94C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1E968;
      }
      goto L_08A1E960;
    }
L_08A1E960:
    ctx.set_gpr(31, 0x08A1E968u);
    // nop
    goto L_08A1ECA8;
L_08A1E968:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23672)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1E980:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-512));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1E99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1E99Cu) goto L_08A1E99C;
    return;
L_08A1E99C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14060));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08A1E9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1E9F0u) goto L_08A1E9F0;
    return;
L_08A1E9F0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x08A1E9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1E9FCu) goto L_08A1E9FC;
    return;
L_08A1E9FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x08A1EA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1EA30u) goto L_08A1EA30;
    return;
L_08A1EA30:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(31, 0x08A1EA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1EA40u) goto L_08A1EA40;
    return;
L_08A1EA40:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x08A1EA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1EA4Cu) goto L_08A1EA4C;
    return;
L_08A1EA4C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), 0u);
    ctx.set_gpr(31, 0x08A1EA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1EA58u) goto L_08A1EA58;
    return;
L_08A1EA58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14060));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EA84;
      }
      goto L_08A1EA7C;
    }
L_08A1EA7C:
    ctx.set_gpr(31, 0x08A1EA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EA84u) goto L_08A1EA84;
    return;
L_08A1EA84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EA98;
      }
      goto L_08A1EA90;
    }
L_08A1EA90:
    ctx.set_gpr(31, 0x08A1EA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EA98u) goto L_08A1EA98;
    return;
L_08A1EA98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EAAC;
      }
      goto L_08A1EAA4;
    }
L_08A1EAA4:
    ctx.set_gpr(31, 0x08A1EAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EAACu) goto L_08A1EAAC;
    return;
L_08A1EAAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EAC0;
      }
      goto L_08A1EAB8;
    }
L_08A1EAB8:
    ctx.set_gpr(31, 0x08A1EAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EAC0u) goto L_08A1EAC0;
    return;
L_08A1EAC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EAD4;
      }
      goto L_08A1EACC;
    }
L_08A1EACC:
    ctx.set_gpr(31, 0x08A1EAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EAD4u) goto L_08A1EAD4;
    return;
L_08A1EAD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EAE8;
      }
      goto L_08A1EAE0;
    }
L_08A1EAE0:
    ctx.set_gpr(31, 0x08A1EAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EAE8u) goto L_08A1EAE8;
    return;
L_08A1EAE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EAFC;
      }
      goto L_08A1EAF4;
    }
L_08A1EAF4:
    ctx.set_gpr(31, 0x08A1EAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EAFCu) goto L_08A1EAFC;
    return;
L_08A1EAFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EB10;
      }
      goto L_08A1EB08;
    }
L_08A1EB08:
    ctx.set_gpr(31, 0x08A1EB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EB10u) goto L_08A1EB10;
    return;
L_08A1EB10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EB24;
      }
      goto L_08A1EB1C;
    }
L_08A1EB1C:
    ctx.set_gpr(31, 0x08A1EB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EB24u) goto L_08A1EB24;
    return;
L_08A1EB24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EB38;
      }
      goto L_08A1EB30;
    }
L_08A1EB30:
    ctx.set_gpr(31, 0x08A1EB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EB38u) goto L_08A1EB38;
    return;
L_08A1EB38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EB4C;
      }
      goto L_08A1EB44;
    }
L_08A1EB44:
    ctx.set_gpr(31, 0x08A1EB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EB4Cu) goto L_08A1EB4C;
    return;
L_08A1EB4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EB60;
      }
      goto L_08A1EB58;
    }
L_08A1EB58:
    ctx.set_gpr(31, 0x08A1EB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EB60u) goto L_08A1EB60;
    return;
L_08A1EB60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EB74;
      }
      goto L_08A1EB6C;
    }
L_08A1EB6C:
    ctx.set_gpr(31, 0x08A1EB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EB74u) goto L_08A1EB74;
    return;
L_08A1EB74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EB88;
      }
      goto L_08A1EB80;
    }
L_08A1EB80:
    ctx.set_gpr(31, 0x08A1EB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EB88u) goto L_08A1EB88;
    return;
L_08A1EB88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EB9C;
      }
      goto L_08A1EB94;
    }
L_08A1EB94:
    ctx.set_gpr(31, 0x08A1EB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EB9Cu) goto L_08A1EB9C;
    return;
L_08A1EB9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EBB0;
      }
      goto L_08A1EBA8;
    }
L_08A1EBA8:
    ctx.set_gpr(31, 0x08A1EBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EBB0u) goto L_08A1EBB0;
    return;
L_08A1EBB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EBC4;
      }
      goto L_08A1EBBC;
    }
L_08A1EBBC:
    ctx.set_gpr(31, 0x08A1EBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EBC4u) goto L_08A1EBC4;
    return;
L_08A1EBC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EBD8;
      }
      goto L_08A1EBD0;
    }
L_08A1EBD0:
    ctx.set_gpr(31, 0x08A1EBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EBD8u) goto L_08A1EBD8;
    return;
L_08A1EBD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EBEC;
      }
      goto L_08A1EBE4;
    }
L_08A1EBE4:
    ctx.set_gpr(31, 0x08A1EBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EBECu) goto L_08A1EBEC;
    return;
L_08A1EBEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EC00;
      }
      goto L_08A1EBF8;
    }
L_08A1EBF8:
    ctx.set_gpr(31, 0x08A1EC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EC00u) goto L_08A1EC00;
    return;
L_08A1EC00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EC14;
      }
      goto L_08A1EC0C;
    }
L_08A1EC0C:
    ctx.set_gpr(31, 0x08A1EC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EC14u) goto L_08A1EC14;
    return;
L_08A1EC14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EC28;
      }
      goto L_08A1EC20;
    }
L_08A1EC20:
    ctx.set_gpr(31, 0x08A1EC28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EC28u) goto L_08A1EC28;
    return;
L_08A1EC28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EC3C;
      }
      goto L_08A1EC34;
    }
L_08A1EC34:
    ctx.set_gpr(31, 0x08A1EC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EC3Cu) goto L_08A1EC3C;
    return;
L_08A1EC3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EC50;
      }
      goto L_08A1EC48;
    }
L_08A1EC48:
    ctx.set_gpr(31, 0x08A1EC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EC50u) goto L_08A1EC50;
    return;
L_08A1EC50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EC64;
      }
      goto L_08A1EC5C;
    }
L_08A1EC5C:
    ctx.set_gpr(31, 0x08A1EC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EC64u) goto L_08A1EC64;
    return;
L_08A1EC64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1EC78;
      }
      goto L_08A1EC70;
    }
L_08A1EC70:
    ctx.set_gpr(31, 0x08A1EC78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1EC78u) goto L_08A1EC78;
    return;
L_08A1EC78:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A1EC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EC90u) goto L_08A1EC90;
    return;
L_08A1EC90:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(512));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ECA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4912));
    ctx.set_gpr(31, 0x08A1ECC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1ECC0u) goto L_08A1ECC0;
    return;
L_08A1ECC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ECD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1ECE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1ECE0u) goto L_08A1ECE0;
    return;
L_08A1ECE0:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11316));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23672));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21204));
    ctx.set_gpr(7, 2210u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-31216));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4780));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(11420));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(496));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-5760));
    ctx.set_gpr(31, 0x08A1ED44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1ED44u) goto L_08A1ED44;
    return;
L_08A1ED44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ED54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1ED64u);
    // nop
    goto L_08A1E934;
L_08A1ED64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ED74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23672)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1ED9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1ED9Cu) goto L_08A1ED9C;
    return;
L_08A1ED9C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11440));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(31, 0x08A1EDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1EDB8u) goto L_08A1EDB8;
    return;
L_08A1EDB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1EDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EDC8u) goto L_08A1EDC8;
    return;
L_08A1EDC8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EDD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 362u, 0x08A21EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A1EDD4u) goto L_08A1EDD4;
    return;
L_08A1EDD4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EDF0u) goto L_08A1EDF0;
    return;
L_08A1EDF0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 801u, 0x08A078A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1EDFCu) goto L_08A1EDFC;
    return;
L_08A1EDFC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EE18u) goto L_08A1EE18;
    return;
L_08A1EE18:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 54u, 0x0898C4FCu>(ctx, &aot_mem) && ctx.pc == 0x08A1EE24u) goto L_08A1EE24;
    return;
L_08A1EE24:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EE38u) goto L_08A1EE38;
    return;
L_08A1EE38:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 243u, 0x08999660u>(ctx, &aot_mem) && ctx.pc == 0x08A1EE44u) goto L_08A1EE44;
    return;
L_08A1EE44:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EE58u) goto L_08A1EE58;
    return;
L_08A1EE58:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 488u, 0x088C2BA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1EE64u) goto L_08A1EE64;
    return;
L_08A1EE64:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EE78u) goto L_08A1EE78;
    return;
L_08A1EE78:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A1EE84u) goto L_08A1EE84;
    return;
L_08A1EE84:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EEA0u) goto L_08A1EEA0;
    return;
L_08A1EEA0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 441u, 0x08A0A710u>(ctx, &aot_mem) && ctx.pc == 0x08A1EEACu) goto L_08A1EEAC;
    return;
L_08A1EEAC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EEC8u) goto L_08A1EEC8;
    return;
L_08A1EEC8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 419u, 0x08A0E354u>(ctx, &aot_mem) && ctx.pc == 0x08A1EED4u) goto L_08A1EED4;
    return;
L_08A1EED4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EEF0u) goto L_08A1EEF0;
    return;
L_08A1EEF0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 439u, 0x08A0E4F8u>(ctx, &aot_mem) && ctx.pc == 0x08A1EEFCu) goto L_08A1EEFC;
    return;
L_08A1EEFC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EF18u) goto L_08A1EF18;
    return;
L_08A1EF18:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 479u, 0x08A0E840u>(ctx, &aot_mem) && ctx.pc == 0x08A1EF24u) goto L_08A1EF24;
    return;
L_08A1EF24:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EF40u) goto L_08A1EF40;
    return;
L_08A1EF40:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 539u, 0x08A0ED2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EF4Cu) goto L_08A1EF4C;
    return;
L_08A1EF4C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EF68u) goto L_08A1EF68;
    return;
L_08A1EF68:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 499u, 0x08A0E9E4u>(ctx, &aot_mem) && ctx.pc == 0x08A1EF74u) goto L_08A1EF74;
    return;
L_08A1EF74:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EF90u) goto L_08A1EF90;
    return;
L_08A1EF90:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 519u, 0x08A0EB88u>(ctx, &aot_mem) && ctx.pc == 0x08A1EF9Cu) goto L_08A1EF9C;
    return;
L_08A1EF9C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EFB8u) goto L_08A1EFB8;
    return;
L_08A1EFB8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1EFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 459u, 0x08A0E69Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EFC4u) goto L_08A1EFC4;
    return;
L_08A1EFC4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1EFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1EFE0u) goto L_08A1EFE0;
    return;
L_08A1EFE0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.set_gpr(31, 0x08A1F038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F038u) goto L_08A1F038;
    return;
L_08A1F038:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.set_gpr(31, 0x08A1F048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F048u) goto L_08A1F048;
    return;
L_08A1F048:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.set_gpr(31, 0x08A1F058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F058u) goto L_08A1F058;
    return;
L_08A1F058:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(31, 0x08A1F068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F068u) goto L_08A1F068;
    return;
L_08A1F068:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.set_gpr(31, 0x08A1F078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1F078u) goto L_08A1F078;
    return;
L_08A1F078:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F088u) goto L_08A1F088;
    return;
L_08A1F088:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.set_gpr(31, 0x08A1F0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F0E0u) goto L_08A1F0E0;
    return;
L_08A1F0E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.set_gpr(31, 0x08A1F0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F0F0u) goto L_08A1F0F0;
    return;
L_08A1F0F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(31, 0x08A1F100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F100u) goto L_08A1F100;
    return;
L_08A1F100:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x08A1F110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F110u) goto L_08A1F110;
    return;
L_08A1F110:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.set_gpr(31, 0x08A1F120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1F120u) goto L_08A1F120;
    return;
L_08A1F120:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F130u) goto L_08A1F130;
    return;
L_08A1F130:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 455u, 0x088BA974u>(ctx, &aot_mem) && ctx.pc == 0x08A1F13Cu) goto L_08A1F13C;
    return;
L_08A1F13C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F158u) goto L_08A1F158;
    return;
L_08A1F158:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 159u, 0x088B8F54u>(ctx, &aot_mem) && ctx.pc == 0x08A1F164u) goto L_08A1F164;
    return;
L_08A1F164:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F180u) goto L_08A1F180;
    return;
L_08A1F180:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 199u, 0x08A712D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1F18Cu) goto L_08A1F18C;
    return;
L_08A1F18C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F1A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F1A8u) goto L_08A1F1A8;
    return;
L_08A1F1A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 633u, 0x08A73B28u>(ctx, &aot_mem) && ctx.pc == 0x08A1F1B4u) goto L_08A1F1B4;
    return;
L_08A1F1B4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F1D4u) goto L_08A1F1D4;
    return;
L_08A1F1D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A1F1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 63u, 0x089284A0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F1ECu) goto L_08A1F1EC;
    return;
L_08A1F1EC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F200u) goto L_08A1F200;
    return;
L_08A1F200:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(23));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F214u) goto L_08A1F214;
    return;
L_08A1F214:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 849u, 0x08A07CE4u>(ctx, &aot_mem) && ctx.pc == 0x08A1F220u) goto L_08A1F220;
    return;
L_08A1F220:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F240u) goto L_08A1F240;
    return;
L_08A1F240:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 849u, 0x08A07CE4u>(ctx, &aot_mem) && ctx.pc == 0x08A1F24Cu) goto L_08A1F24C;
    return;
L_08A1F24C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(25));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F26Cu) goto L_08A1F26C;
    return;
L_08A1F26C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A1F278u) goto L_08A1F278;
    return;
L_08A1F278:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F298u) goto L_08A1F298;
    return;
L_08A1F298:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 53u, 0x088E84C4u>(ctx, &aot_mem) && ctx.pc == 0x08A1F2A4u) goto L_08A1F2A4;
    return;
L_08A1F2A4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(27));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F2C4u) goto L_08A1F2C4;
    return;
L_08A1F2C4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 526u, 0x08A12A60u>(ctx, &aot_mem) && ctx.pc == 0x08A1F2D0u) goto L_08A1F2D0;
    return;
L_08A1F2D0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F2F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F2F0u) goto L_08A1F2F0;
    return;
L_08A1F2F0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 559u, 0x08A0EED0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F2FCu) goto L_08A1F2FC;
    return;
L_08A1F2FC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(29));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F31Cu) goto L_08A1F31C;
    return;
L_08A1F31C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.set_gpr(31, 0x08A1F374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F374u) goto L_08A1F374;
    return;
L_08A1F374:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x08A1F384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F384u) goto L_08A1F384;
    return;
L_08A1F384:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(31, 0x08A1F394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F394u) goto L_08A1F394;
    return;
L_08A1F394:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(31, 0x08A1F3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F3A4u) goto L_08A1F3A4;
    return;
L_08A1F3A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.set_gpr(31, 0x08A1F3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1F3B4u) goto L_08A1F3B4;
    return;
L_08A1F3B4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F3C4u) goto L_08A1F3C4;
    return;
L_08A1F3C4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 945u, 0x088AFCF4u>(ctx, &aot_mem) && ctx.pc == 0x08A1F3D0u) goto L_08A1F3D0;
    return;
L_08A1F3D0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F3ECu) goto L_08A1F3EC;
    return;
L_08A1F3EC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F400u) goto L_08A1F400;
    return;
L_08A1F400:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x08A1F458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F458u) goto L_08A1F458;
    return;
L_08A1F458:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08A1F468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F468u) goto L_08A1F468;
    return;
L_08A1F468:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x08A1F478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F478u) goto L_08A1F478;
    return;
L_08A1F478:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x08A1F488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F488u) goto L_08A1F488;
    return;
L_08A1F488:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08A1F498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1F498u) goto L_08A1F498;
    return;
L_08A1F498:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(33));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F4ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F4ACu) goto L_08A1F4AC;
    return;
L_08A1F4AC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A1F504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F504u) goto L_08A1F504;
    return;
L_08A1F504:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A1F514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F514u) goto L_08A1F514;
    return;
L_08A1F514:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A1F524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F524u) goto L_08A1F524;
    return;
L_08A1F524:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A1F534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1F534u) goto L_08A1F534;
    return;
L_08A1F534:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A1F544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1F544u) goto L_08A1F544;
    return;
L_08A1F544:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(34));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F558u) goto L_08A1F558;
    return;
L_08A1F558:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(35));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F56Cu) goto L_08A1F56C;
    return;
L_08A1F56C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 579u, 0x08A0F074u>(ctx, &aot_mem) && ctx.pc == 0x08A1F578u) goto L_08A1F578;
    return;
L_08A1F578:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F598u) goto L_08A1F598;
    return;
L_08A1F598:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(37));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F5ACu) goto L_08A1F5AC;
    return;
L_08A1F5AC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(38));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F5C0u) goto L_08A1F5C0;
    return;
L_08A1F5C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1F5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x08A1F5E8u) goto L_08A1F5E8;
    return;
L_08A1F5E8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(12304));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12460));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(12616));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1F614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F614u) goto L_08A1F614;
    return;
L_08A1F614:
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2448));
    ctx.set_gpr(31, 0x08A1F624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F624u) goto L_08A1F624;
    return;
L_08A1F624:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(672));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F640:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1F650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 382u, 0x08A361ACu>(ctx, &aot_mem) && ctx.pc == 0x08A1F650u) goto L_08A1F650;
    return;
L_08A1F650:
    ctx.set_gpr(4, 2211u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24092));
    ctx.set_gpr(31, 0x08A1F660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 240u, 0x089451F4u>(ctx, &aot_mem) && ctx.pc == 0x08A1F660u) goto L_08A1F660;
    return;
L_08A1F660:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F670:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1F680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 394u, 0x08A3622Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F680u) goto L_08A1F680;
    return;
L_08A1F680:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F690:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23512)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F6BC;
      }
      goto L_08A1F6A8;
    }
L_08A1F6A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F6C4;
      }
      goto L_08A1F6BC;
    }
L_08A1F6BC:
    ctx.set_gpr(31, 0x08A1F6C4u);
    // nop
    goto L_08A1F780;
L_08A1F6C4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23512)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F6DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A1F6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F6F4u) goto L_08A1F6F4;
    return;
L_08A1F6F4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13912));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(31, 0x08A1F714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F714u) goto L_08A1F714;
    return;
L_08A1F714:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13912));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F740;
      }
      goto L_08A1F738;
    }
L_08A1F738:
    ctx.set_gpr(31, 0x08A1F740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1F740u) goto L_08A1F740;
    return;
L_08A1F740:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F754;
      }
      goto L_08A1F74C;
    }
L_08A1F74C:
    ctx.set_gpr(31, 0x08A1F754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1F754u) goto L_08A1F754;
    return;
L_08A1F754:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F768;
      }
      goto L_08A1F760;
    }
L_08A1F760:
    ctx.set_gpr(31, 0x08A1F768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1F768u) goto L_08A1F768;
    return;
L_08A1F768:
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
L_08A1F780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2136));
    ctx.set_gpr(31, 0x08A1F798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1F798u) goto L_08A1F798;
    return;
L_08A1F798:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F7A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1F7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1F7B8u) goto L_08A1F7B8;
    return;
L_08A1F7B8:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12772));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23512));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14180));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27884));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2012));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(12788));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-2340));
    ctx.set_gpr(31, 0x08A1F814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1F814u) goto L_08A1F814;
    return;
L_08A1F814:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F824:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1F834u);
    // nop
    goto L_08A1F690;
L_08A1F834:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23512)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1F86Cu) goto L_08A1F86C;
    return;
L_08A1F86C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(12816));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A1F888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1F888u) goto L_08A1F888;
    return;
L_08A1F888:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1F898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F898u) goto L_08A1F898;
    return;
L_08A1F898:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 99u, 0x088B0944u>(ctx, &aot_mem) && ctx.pc == 0x08A1F8A4u) goto L_08A1F8A4;
    return;
L_08A1F8A4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F8B8u) goto L_08A1F8B8;
    return;
L_08A1F8B8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 412u, 0x088B2640u>(ctx, &aot_mem) && ctx.pc == 0x08A1F8C4u) goto L_08A1F8C4;
    return;
L_08A1F8C4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F8D8u) goto L_08A1F8D8;
    return;
L_08A1F8D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A1F8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F8F8u) goto L_08A1F8F8;
    return;
L_08A1F8F8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F908u) goto L_08A1F908;
    return;
L_08A1F908:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1F914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 10u, 0x088BC0E0u>(ctx, &aot_mem) && ctx.pc == 0x08A1F914u) goto L_08A1F914;
    return;
L_08A1F914:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F928u) goto L_08A1F928;
    return;
L_08A1F928:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A1F948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F948u) goto L_08A1F948;
    return;
L_08A1F948:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(12892));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12912));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(12932));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1F970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F970u) goto L_08A1F970;
    return;
L_08A1F970:
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
L_08A1F98C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23488)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F9B8;
      }
      goto L_08A1F9A4;
    }
L_08A1F9A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1F9C0;
      }
      goto L_08A1F9B8;
    }
L_08A1F9B8:
    ctx.set_gpr(31, 0x08A1F9C0u);
    // nop
    goto L_08A1FBEC;
L_08A1F9C0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23488)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1F9D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1F9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1F9F4u) goto L_08A1F9F4;
    return;
L_08A1F9F4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13804));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A1FA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1FA28u) goto L_08A1FA28;
    return;
L_08A1FA28:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    ctx.set_gpr(31, 0x08A1FA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FA48u) goto L_08A1FA48;
    return;
L_08A1FA48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13804));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FA74;
      }
      goto L_08A1FA6C;
    }
L_08A1FA6C:
    ctx.set_gpr(31, 0x08A1FA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1FA74u) goto L_08A1FA74;
    return;
L_08A1FA74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FA88;
      }
      goto L_08A1FA80;
    }
L_08A1FA80:
    ctx.set_gpr(31, 0x08A1FA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1FA88u) goto L_08A1FA88;
    return;
L_08A1FA88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FA9C;
      }
      goto L_08A1FA94;
    }
L_08A1FA94:
    ctx.set_gpr(31, 0x08A1FA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1FA9Cu) goto L_08A1FA9C;
    return;
L_08A1FA9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FAB0;
      }
      goto L_08A1FAA8;
    }
L_08A1FAA8:
    ctx.set_gpr(31, 0x08A1FAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1FAB0u) goto L_08A1FAB0;
    return;
L_08A1FAB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FAC4;
      }
      goto L_08A1FABC;
    }
L_08A1FABC:
    ctx.set_gpr(31, 0x08A1FAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1FAC4u) goto L_08A1FAC4;
    return;
L_08A1FAC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FAD8;
      }
      goto L_08A1FAD0;
    }
L_08A1FAD0:
    ctx.set_gpr(31, 0x08A1FAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1FAD8u) goto L_08A1FAD8;
    return;
L_08A1FAD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FAEC;
      }
      goto L_08A1FAE4;
    }
L_08A1FAE4:
    ctx.set_gpr(31, 0x08A1FAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1FAECu) goto L_08A1FAEC;
    return;
L_08A1FAEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FB00;
      }
      goto L_08A1FAF8;
    }
L_08A1FAF8:
    ctx.set_gpr(31, 0x08A1FB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1FB00u) goto L_08A1FB00;
    return;
L_08A1FB00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FB14;
      }
      goto L_08A1FB0C;
    }
L_08A1FB0C:
    ctx.set_gpr(31, 0x08A1FB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1FB14u) goto L_08A1FB14;
    return;
L_08A1FB14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FB28;
      }
      goto L_08A1FB20;
    }
L_08A1FB20:
    ctx.set_gpr(31, 0x08A1FB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1FB28u) goto L_08A1FB28;
    return;
L_08A1FB28:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A1FB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FB40u) goto L_08A1FB40;
    return;
L_08A1FB40:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A1FB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A1FB50u) goto L_08A1FB50;
    return;
L_08A1FB50:
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
L_08A1FB68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FBD0;
      }
      goto L_08A1FB88;
    }
L_08A1FB88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FBB8;
      }
      goto L_08A1FB94;
    }
L_08A1FB94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FBB8;
      }
      goto L_08A1FBB0;
    }
L_08A1FBB0:
    ctx.set_gpr(31, 0x08A1FBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A1FBB8u) goto L_08A1FBB8;
    return;
L_08A1FBB8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A1FBD0;
      }
      goto L_08A1FBC4;
    }
L_08A1FBC4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1FBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A1FBD0u) goto L_08A1FBD0;
    return;
L_08A1FBD0:
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
L_08A1FBEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1004));
    ctx.set_gpr(31, 0x08A1FC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1FC04u) goto L_08A1FC04;
    return;
L_08A1FC04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1FC14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1FC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1FC24u) goto L_08A1FC24;
    return;
L_08A1FC24:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-848));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12952));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23488));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-880));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(12988));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(160));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1576));
    ctx.set_gpr(31, 0x08A1FC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1FC80u) goto L_08A1FC80;
    return;
L_08A1FC80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1FC90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1FCA0u);
    // nop
    goto L_08A1F98C;
L_08A1FCA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1FCB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23488)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1FCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1FCD8u) goto L_08A1FCD8;
    return;
L_08A1FCD8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13004));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08A1FCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1FCF4u) goto L_08A1FCF4;
    return;
L_08A1FCF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1FD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FD04u) goto L_08A1FD04;
    return;
L_08A1FD04:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1FD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A1FD10u) goto L_08A1FD10;
    return;
L_08A1FD10:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1FD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FD24u) goto L_08A1FD24;
    return;
L_08A1FD24:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1FD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A1FD30u) goto L_08A1FD30;
    return;
L_08A1FD30:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1FD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FD44u) goto L_08A1FD44;
    return;
L_08A1FD44:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1FD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 394u, 0x088BA3D8u>(ctx, &aot_mem) && ctx.pc == 0x08A1FD50u) goto L_08A1FD50;
    return;
L_08A1FD50:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1FD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FD70u) goto L_08A1FD70;
    return;
L_08A1FD70:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1FD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 462u, 0x08A1A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08A1FD7Cu) goto L_08A1FD7C;
    return;
L_08A1FD7C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1FD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FD9Cu) goto L_08A1FD9C;
    return;
L_08A1FD9C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1FDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x08A1FDC0u) goto L_08A1FDC0;
    return;
L_08A1FDC0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1FDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FDD0u) goto L_08A1FDD0;
    return;
L_08A1FDD0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1FDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 475u, 0x08A05B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FDDCu) goto L_08A1FDDC;
    return;
L_08A1FDDC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1FDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FDF0u) goto L_08A1FDF0;
    return;
L_08A1FDF0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1FDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 10u, 0x088BC0E0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FDFCu) goto L_08A1FDFC;
    return;
L_08A1FDFC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1FE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FE10u) goto L_08A1FE10;
    return;
L_08A1FE10:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1FE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 365u, 0x08A0DED0u>(ctx, &aot_mem) && ctx.pc == 0x08A1FE1Cu) goto L_08A1FE1C;
    return;
L_08A1FE1C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1FE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FE38u) goto L_08A1FE38;
    return;
L_08A1FE38:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1FE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 165u, 0x088F8EA8u>(ctx, &aot_mem) && ctx.pc == 0x08A1FE44u) goto L_08A1FE44;
    return;
L_08A1FE44:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1FE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FE60u) goto L_08A1FE60;
    return;
L_08A1FE60:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1FE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 301u, 0x088B1C68u>(ctx, &aot_mem) && ctx.pc == 0x08A1FE6Cu) goto L_08A1FE6C;
    return;
L_08A1FE6C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1FE8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FE8Cu) goto L_08A1FE8C;
    return;
L_08A1FE8C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1FE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 301u, 0x088B1C68u>(ctx, &aot_mem) && ctx.pc == 0x08A1FE98u) goto L_08A1FE98;
    return;
L_08A1FE98:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13180));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13236));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13292));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1FED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FED0u) goto L_08A1FED0;
    return;
L_08A1FED0:
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
L_08A1FEEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23428)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FF30;
      }
      goto L_08A1FF04;
    }
L_08A1FF04:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13392));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13376));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13384));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A1FF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A1FF28u) goto L_08A1FF28;
    return;
L_08A1FF28:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23428), ctx.gpr[2]);
    goto L_08A1FF30;
L_08A1FF30:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23428)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1FF48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23424)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FF8C;
      }
      goto L_08A1FF60;
    }
L_08A1FF60:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13460));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(13444));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(13452));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A1FF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A1FF84u) goto L_08A1FF84;
    return;
L_08A1FF84:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23424), ctx.gpr[2]);
    goto L_08A1FF8C;
L_08A1FF8C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23424)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1FFA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23420)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FFD0;
      }
      goto L_08A1FFBC;
    }
L_08A1FFBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1FFD8;
      }
      goto L_08A1FFD0;
    }
L_08A1FFD0:
    ctx.set_gpr(31, 0x08A1FFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 7u, 0x08A2008Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1FFD8u) goto L_08A1FFD8;
    return;
L_08A1FFD8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23420)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1FFF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.pc = 0x08A20000u; return;
}

void recomp_unit_0134(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0134_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_134(Runtime &runtime) {
    runtime.register_generated_unit(134u, 0x08A1C000u, 16384u, &recomp_unit_0134, &recomp_unit_0134_entry);
    runtime.register_function(0x08A1C004u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C014u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C020u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C040u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C04Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C06Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C078u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C098u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C0ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C0D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C0F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C10Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C120u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C128u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C140u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C158u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C178u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C19Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C1F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C204u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C260u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C270u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C280u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C290u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C2A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C2C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C2E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C2F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C304u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C314u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C33Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C34Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C364u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C374u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C384u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C394u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C3FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C414u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C428u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C430u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C448u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C45Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C470u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C48Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C4A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C4B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C4C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C520u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C530u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C540u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C550u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C578u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C594u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C5A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C5B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C5D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C5ECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C5FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C60Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C628u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C640u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C654u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C66Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C698u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C6A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C6C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C6D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C6E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C6F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C704u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C71Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C724u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C730u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C73Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C744u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C75Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C774u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C788u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C790u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C7A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C7C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C7E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C808u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C810u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C828u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C838u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C850u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C868u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C878u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C888u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C8E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C8F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C904u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C914u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C93Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C958u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C968u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C97Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C98Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C9A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C9B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C9C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C9D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C9E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1C9F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA0Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA1Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA30u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA40u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA78u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CA8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAA0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAD4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CAE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB18u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB34u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB4Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB60u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB6Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CB8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBA4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBB8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBD8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CBF0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC38u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC40u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC4Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC60u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC68u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC7Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CC94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CCACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CCBCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CCCCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CD28u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CD38u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CD48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CD58u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CD80u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CD9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CDACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CDB8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CDCCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CDD8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CDECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CDF8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CE0Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CE18u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CE44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CE60u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CE78u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CE8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CE94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CEACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CEC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CEE8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF0Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF2Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF38u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF5Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CF94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1CFF0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D000u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D010u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D020u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D030u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D058u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D074u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D084u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D090u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D0BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D0D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D0F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D104u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D10Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D124u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D13Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D15Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D180u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D188u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D194u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D19Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D1A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D1B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D1C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D1E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D1F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D200u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D25Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D26Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D27Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D28Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D2ECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D300u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D30Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D320u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D32Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D340u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D354u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D364u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D37Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D398u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D3ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D3C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D3D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D3E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D410u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D42Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D444u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D458u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D46Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D484u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D498u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D4A0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D4B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D4D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D4E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D50Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D514u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D52Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D544u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D554u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D564u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D5C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D5D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D5E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D5F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D618u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D634u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D644u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D650u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D668u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D674u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D6A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D6C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D6DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D6E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D6F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D6FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D704u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D71Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D734u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D748u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D750u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D768u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D77Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D790u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D7ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D7C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D7D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D7E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D838u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D848u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D858u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D868u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D880u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D894u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D89Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D8B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D8CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D91Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D940u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D948u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D954u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D95Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D968u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D970u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D97Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D984u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D990u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D998u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D9A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D9ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D9B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D9C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D9CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D9D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D9E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D9E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D9F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1D9FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA08u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA10u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA1Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA3Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA4Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA7Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DA9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DB00u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DB10u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DB20u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DB30u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DB58u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DB74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DB84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DB90u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DBB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DBBCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DBDCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DBE8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DC08u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DC14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DC34u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DC40u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DC60u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DC78u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DC94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DCA0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DCC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DCCCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DCECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DCF8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DD18u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DD24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DD44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DD50u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DD70u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DD84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DD9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DDBCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DDC8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DDE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DDECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DE24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DE40u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DE50u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DE60u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DE78u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DE9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DEA4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DEBCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DED4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DEF8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DF00u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DF18u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DF30u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DF44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DF58u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DF70u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DF84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DF8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DFA4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DFBCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DFD8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1DFFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E004u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E010u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E018u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E030u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E048u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E058u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E068u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E0C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E0D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E0E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E0F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E11Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E138u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E148u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E15Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E168u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E180u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E194u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E1A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E1BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E1C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E1E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E1FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E210u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E224u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E250u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E26Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E284u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E28Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E298u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E2A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E2ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E2C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E2DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E2F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E2F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E310u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E324u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E338u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E354u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E36Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E37Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E38Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E3E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E3F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E400u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E410u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E428u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E43Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E450u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E468u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E47Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E484u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E49Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E4B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E4E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E508u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E510u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E51Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E524u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E530u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E538u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E544u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E54Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E558u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E560u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E56Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E574u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E580u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E588u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E598u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E5B0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E5C8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E5D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E5E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E64Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E65Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E66Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E67Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E6A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E6C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E6D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E6DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E6FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E708u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E728u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E734u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E754u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E768u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E774u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E78Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E798u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E7B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E7CCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E7D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E7F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E804u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E824u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E838u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E84Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E878u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E888u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E8A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E8B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E8C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E8D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E8E4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E8F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E90Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E920u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E934u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E94Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E960u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E968u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E980u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E99Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E9F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1E9FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA30u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA40u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA4Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA58u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA7Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA90u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EA98u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAA4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAB8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EACCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAD4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAE8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAF4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EAFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB08u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB10u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB1Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB30u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB38u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB4Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB58u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB60u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB6Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB80u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB88u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EB9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBBCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBD0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBD8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBE4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EBF8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC00u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC0Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC20u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC28u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC34u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC3Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC50u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC5Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC70u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC78u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EC90u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ECA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ECC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ECD0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ECE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED54u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1ED9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDB8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDC8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDD4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDF0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EDFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE18u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE38u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE58u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE64u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE78u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EE84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EEA0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EEACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EEC8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EED4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EEF0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EEFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF18u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF40u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF4Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF68u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF90u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EF9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EFB8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EFC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1EFE0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F038u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F048u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F058u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F068u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F078u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F088u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F0E0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F0F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F100u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F110u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F120u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F130u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F13Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F158u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F164u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F180u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F18Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F1A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F1B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F1D4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F1ECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F200u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F214u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F220u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F240u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F24Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F26Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F278u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F298u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F2A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F2C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F2D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F2F0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F2FCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F31Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F374u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F384u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F394u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F3A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F3B4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F3C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F3D0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F3ECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F400u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F458u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F468u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F478u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F488u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F498u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F4ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F504u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F514u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F524u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F534u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F544u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F558u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F56Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F578u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F598u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F5ACu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F5C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F5E8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F614u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F624u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F640u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F650u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F660u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F670u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F680u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F690u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F6A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F6BCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F6C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F6DCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F6F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F714u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F738u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F740u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F74Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F754u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F760u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F768u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F780u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F798u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F7A8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F7B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F814u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F824u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F834u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F844u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F86Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F888u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F898u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F8A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F8B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F8C4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F8D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F8F8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F908u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F914u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F928u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F948u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F970u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F98Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F9A4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F9B8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F9C0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F9D8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1F9F4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA28u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA6Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA74u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA80u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA88u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FA9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FAA8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FAB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FABCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FAC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FAD0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FAD8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FAE4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FAECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FAF8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB00u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB0Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB20u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB28u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB40u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB50u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB68u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB88u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FB94u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FBB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FBB8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FBC4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FBD0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FBECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC04u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC14u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC80u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FC90u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FCA0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FCB0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FCD8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FCF4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD04u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD10u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD24u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD30u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD50u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD70u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD7Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FD9Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FDC0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FDD0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FDDCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FDF0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FDFCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE10u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE1Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE38u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE44u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE60u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE6Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FE98u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FED0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FEECu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF04u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF28u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF30u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF48u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF60u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF84u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FF8Cu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FFA4u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FFBCu, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FFD0u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FFD8u, &recomp_unit_0134, "recomp_unit_0134");
    runtime.register_function(0x08A1FFF0u, &recomp_unit_0134, "recomp_unit_0134");
}
} // namespace psprecomp
