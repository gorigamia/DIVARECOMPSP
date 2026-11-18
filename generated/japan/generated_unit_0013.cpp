#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0013[4094] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0,
    0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0,
    0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 0, 49, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0,
    0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 101, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0,
    0, 0, 107, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 117, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 132, 0, 133, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 142, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175,
    0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 182, 0, 0, 0, 0, 0, 0, 0, 183, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 217, 0, 0, 0, 0, 0,
    218, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227,
    0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 235, 0,
    0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0,
    0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0,
    0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 267, 268, 0, 0, 0, 0, 269, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282,
    0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0,
    0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 300, 0, 301, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0,
    0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 0, 324, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0,
    329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 332, 333, 0, 0, 334, 0, 0, 0, 335, 336, 0, 0, 337, 0, 0, 0, 0, 338,
    339, 0, 340, 0, 0, 0, 0, 341, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 359, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364, 365, 0, 0, 0, 366, 0, 0, 0, 0,
    0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 379, 380,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0,
    0, 0, 386, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 393, 0, 0,
    394, 0, 395, 0, 0, 396, 0, 397, 0, 0, 398, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0,
    0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 410, 411, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414,
    0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420,
    0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0,
    426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0,
    0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 437, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 443, 0, 0, 0,
    0, 444, 445, 0, 446, 0, 0, 447, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 452, 0, 0,
    0, 0, 453, 0, 0, 0, 454, 455, 0, 0, 0, 0, 0, 456, 457, 0, 458, 0, 0, 459, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0,
    0, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 468, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0,
    0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0,
    0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 485, 486, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0,
    492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 504, 0, 0, 505, 0, 506, 0, 0, 507, 508, 0, 0, 0, 0, 0,
    509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0,
    0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 516, 0, 517, 518, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 527, 528, 0, 0,
    529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 533, 534, 535, 0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 0, 539, 540, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 546, 0, 0, 0, 0, 547,
    548, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554,
    0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559,
    0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566,
    0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 574, 0,
    575, 0, 0, 0, 576, 0, 577, 578, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0,
    584, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 592, 0, 593,
    0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 596, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0,
    600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0,
    0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 613,
    0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 619, 0, 0, 0, 620, 0, 621, 622, 0, 0,
    623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 629, 630, 0,
    0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0,
    0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 643, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 646, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0,
    0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657,
    0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0,
    0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0,
    670, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 674,
};
void recomp_unit_0013_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08838000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0013[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08838000;
    case 2u: goto L_08838018;
    case 3u: goto L_08838020;
    case 4u: goto L_0883802C;
    case 5u: goto L_08838068;
    case 6u: goto L_08838078;
    case 7u: goto L_0883808C;
    case 8u: goto L_08838094;
    case 9u: goto L_088380A8;
    case 10u: goto L_088380CC;
    case 11u: goto L_088380E0;
    case 12u: goto L_088380EC;
    case 13u: goto L_088380F8;
    case 14u: goto L_08838104;
    case 15u: goto L_0883810C;
    case 16u: goto L_08838124;
    case 17u: goto L_08838138;
    case 18u: goto L_08838174;
    case 19u: goto L_0883817C;
    case 20u: goto L_08838184;
    case 21u: goto L_088381C0;
    case 22u: goto L_088381C8;
    case 23u: goto L_08838204;
    case 24u: goto L_0883820C;
    case 25u: goto L_08838248;
    case 26u: goto L_0883827C;
    case 27u: goto L_088382A0;
    case 28u: goto L_088382B4;
    case 29u: goto L_088382C8;
    case 30u: goto L_088382DC;
    case 31u: goto L_088382F8;
    case 32u: goto L_08838338;
    case 33u: goto L_08838340;
    case 34u: goto L_08838354;
    case 35u: goto L_08838374;
    case 36u: goto L_088383CC;
    case 37u: goto L_088383DC;
    case 38u: goto L_088383E4;
    case 39u: goto L_088383F4;
    case 40u: goto L_08838410;
    case 41u: goto L_0883841C;
    case 42u: goto L_08838428;
    case 43u: goto L_08838470;
    case 44u: goto L_08838498;
    case 45u: goto L_088384A8;
    case 46u: goto L_088384B0;
    case 47u: goto L_088384B8;
    case 48u: goto L_088384C4;
    case 49u: goto L_088384D0;
    case 50u: goto L_088384D4;
    case 51u: goto L_088384E0;
    case 52u: goto L_088384F8;
    case 53u: goto L_08838504;
    case 54u: goto L_0883850C;
    case 55u: goto L_08838518;
    case 56u: goto L_08838550;
    case 57u: goto L_08838558;
    case 58u: goto L_08838574;
    case 59u: goto L_08838580;
    case 60u: goto L_088385BC;
    case 61u: goto L_088385D4;
    case 62u: goto L_088385E0;
    case 63u: goto L_08838600;
    case 64u: goto L_0883860C;
    case 65u: goto L_08838628;
    case 66u: goto L_08838634;
    case 67u: goto L_08838644;
    case 68u: goto L_08838694;
    case 69u: goto L_0883869C;
    case 70u: goto L_088386A8;
    case 71u: goto L_088386B0;
    case 72u: goto L_088386BC;
    case 73u: goto L_088386F4;
    case 74u: goto L_088386FC;
    case 75u: goto L_08838718;
    case 76u: goto L_08838724;
    case 77u: goto L_08838768;
    case 78u: goto L_08838774;
    case 79u: goto L_0883877C;
    case 80u: goto L_08838788;
    case 81u: goto L_088387C0;
    case 82u: goto L_088387C8;
    case 83u: goto L_088387E4;
    case 84u: goto L_088387F0;
    case 85u: goto L_08838830;
    case 86u: goto L_08838850;
    case 87u: goto L_0883885C;
    case 88u: goto L_08838878;
    case 89u: goto L_088388C8;
    case 90u: goto L_088388D0;
    case 91u: goto L_088388DC;
    case 92u: goto L_088388E4;
    case 93u: goto L_088388F0;
    case 94u: goto L_08838928;
    case 95u: goto L_08838930;
    case 96u: goto L_0883894C;
    case 97u: goto L_08838958;
    case 98u: goto L_0883898C;
    case 99u: goto L_088389A4;
    case 100u: goto L_088389B8;
    case 101u: goto L_088389BC;
    case 102u: goto L_088389C4;
    case 103u: goto L_088389CC;
    case 104u: goto L_088389D8;
    case 105u: goto L_088389E8;
    case 106u: goto L_088389F8;
    case 107u: goto L_08838A08;
    case 108u: goto L_08838A0C;
    case 109u: goto L_08838A14;
    case 110u: goto L_08838A28;
    case 111u: goto L_08838A40;
    case 112u: goto L_08838A50;
    case 113u: goto L_08838A58;
    case 114u: goto L_08838A64;
    case 115u: goto L_08838A70;
    case 116u: goto L_08838A80;
    case 117u: goto L_08838A90;
    case 118u: goto L_08838A94;
    case 119u: goto L_08838A9C;
    case 120u: goto L_08838AD4;
    case 121u: goto L_08838ADC;
    case 122u: goto L_08838B00;
    case 123u: goto L_08838B04;
    case 124u: goto L_08838B10;
    case 125u: goto L_08838B1C;
    case 126u: goto L_08838B28;
    case 127u: goto L_08838B30;
    case 128u: goto L_08838B3C;
    case 129u: goto L_08838B4C;
    case 130u: goto L_08838B5C;
    case 131u: goto L_08838B6C;
    case 132u: goto L_08838B70;
    case 133u: goto L_08838B78;
    case 134u: goto L_08838B8C;
    case 135u: goto L_08838BA4;
    case 136u: goto L_08838BB4;
    case 137u: goto L_08838BBC;
    case 138u: goto L_08838BC8;
    case 139u: goto L_08838BD4;
    case 140u: goto L_08838BE4;
    case 141u: goto L_08838BF4;
    case 142u: goto L_08838BF8;
    case 143u: goto L_08838C00;
    case 144u: goto L_08838C38;
    case 145u: goto L_08838C40;
    case 146u: goto L_08838C60;
    case 147u: goto L_08838C6C;
    case 148u: goto L_08838C78;
    case 149u: goto L_08838C8C;
    case 150u: goto L_08838CA0;
    case 151u: goto L_08838CD8;
    case 152u: goto L_08838CE0;
    case 153u: goto L_08838CE8;
    case 154u: goto L_08838D24;
    case 155u: goto L_08838D2C;
    case 156u: goto L_08838D68;
    case 157u: goto L_08838D70;
    case 158u: goto L_08838DAC;
    case 159u: goto L_08838DDC;
    case 160u: goto L_08838E00;
    case 161u: goto L_08838E10;
    case 162u: goto L_08838E3C;
    case 163u: goto L_08838E4C;
    case 164u: goto L_08838E54;
    case 165u: goto L_08838E7C;
    case 166u: goto L_08838E98;
    case 167u: goto L_08838EA4;
    case 168u: goto L_08838EBC;
    case 169u: goto L_08838EE0;
    case 170u: goto L_08838EF8;
    case 171u: goto L_08838F2C;
    case 172u: goto L_08838F48;
    case 173u: goto L_08838F54;
    case 174u: goto L_08838F64;
    case 175u: goto L_08838F7C;
    case 176u: goto L_08838F84;
    case 177u: goto L_08838FA0;
    case 178u: goto L_08838FB0;
    case 179u: goto L_08838FF0;
    case 180u: goto L_08839018;
    case 181u: goto L_08839030;
    case 182u: goto L_08839034;
    case 183u: goto L_08839054;
    case 184u: goto L_08839058;
    case 185u: goto L_08839078;
    case 186u: goto L_08839080;
    case 187u: goto L_0883908C;
    case 188u: goto L_088390C4;
    case 189u: goto L_088390E8;
    case 190u: goto L_088390F0;
    case 191u: goto L_088390F4;
    case 192u: goto L_08839138;
    case 193u: goto L_08839144;
    case 194u: goto L_0883917C;
    case 195u: goto L_088391A0;
    case 196u: goto L_088391AC;
    case 197u: goto L_088391C4;
    case 198u: goto L_088391CC;
    case 199u: goto L_088391D0;
    case 200u: goto L_08839214;
    case 201u: goto L_08839238;
    case 202u: goto L_08839240;
    case 203u: goto L_08839244;
    case 204u: goto L_08839288;
    case 205u: goto L_08839294;
    case 206u: goto L_088392A0;
    case 207u: goto L_088392B8;
    case 208u: goto L_088392C0;
    case 209u: goto L_088392C4;
    case 210u: goto L_08839300;
    case 211u: goto L_08839310;
    case 212u: goto L_08839324;
    case 213u: goto L_08839330;
    case 214u: goto L_0883933C;
    case 215u: goto L_08839358;
    case 216u: goto L_08839364;
    case 217u: goto L_08839368;
    case 218u: goto L_08839380;
    case 219u: goto L_08839384;
    case 220u: goto L_08839394;
    case 221u: goto L_088393AC;
    case 222u: goto L_088393B8;
    case 223u: goto L_088393C4;
    case 224u: goto L_088393D0;
    case 225u: goto L_088393DC;
    case 226u: goto L_088393E8;
    case 227u: goto L_088393FC;
    case 228u: goto L_08839404;
    case 229u: goto L_08839418;
    case 230u: goto L_08839438;
    case 231u: goto L_0883944C;
    case 232u: goto L_08839458;
    case 233u: goto L_08839464;
    case 234u: goto L_0883946C;
    case 235u: goto L_08839478;
    case 236u: goto L_08839488;
    case 237u: goto L_08839498;
    case 238u: goto L_088394A4;
    case 239u: goto L_088394B0;
    case 240u: goto L_088394C8;
    case 241u: goto L_088394D4;
    case 242u: goto L_088394E0;
    case 243u: goto L_088394F8;
    case 244u: goto L_08839508;
    case 245u: goto L_08839514;
    case 246u: goto L_08839520;
    case 247u: goto L_0883952C;
    case 248u: goto L_08839538;
    case 249u: goto L_08839550;
    case 250u: goto L_0883955C;
    case 251u: goto L_08839564;
    case 252u: goto L_08839578;
    case 253u: goto L_08839588;
    case 254u: goto L_08839594;
    case 255u: goto L_088395A0;
    case 256u: goto L_088395AC;
    case 257u: goto L_088395B0;
    case 258u: goto L_088395C8;
    case 259u: goto L_088395E8;
    case 260u: goto L_088395F8;
    case 261u: goto L_0883961C;
    case 262u: goto L_08839628;
    case 263u: goto L_08839634;
    case 264u: goto L_08839640;
    case 265u: goto L_0883964C;
    case 266u: goto L_08839658;
    case 267u: goto L_0883965C;
    case 268u: goto L_08839660;
    case 269u: goto L_08839674;
    case 270u: goto L_08839690;
    case 271u: goto L_0883969C;
    case 272u: goto L_088396A8;
    case 273u: goto L_088396E8;
    case 274u: goto L_08839714;
    case 275u: goto L_08839734;
    case 276u: goto L_0883975C;
    case 277u: goto L_08839764;
    case 278u: goto L_08839770;
    case 279u: goto L_0883977C;
    case 280u: goto L_088397C8;
    case 281u: goto L_088397F0;
    case 282u: goto L_088397FC;
    case 283u: goto L_0883980C;
    case 284u: goto L_08839814;
    case 285u: goto L_08839820;
    case 286u: goto L_0883982C;
    case 287u: goto L_0883986C;
    case 288u: goto L_08839878;
    case 289u: goto L_08839884;
    case 290u: goto L_088398CC;
    case 291u: goto L_088398D8;
    case 292u: goto L_088398E4;
    case 293u: goto L_0883992C;
    case 294u: goto L_08839938;
    case 295u: goto L_08839944;
    case 296u: goto L_0883999C;
    case 297u: goto L_088399C4;
    case 298u: goto L_088399D8;
    case 299u: goto L_088399E8;
    case 300u: goto L_08839A04;
    case 301u: goto L_08839A0C;
    case 302u: goto L_08839A10;
    case 303u: goto L_08839A1C;
    case 304u: goto L_08839A28;
    case 305u: goto L_08839A44;
    case 306u: goto L_08839A54;
    case 307u: goto L_08839A64;
    case 308u: goto L_08839A6C;
    case 309u: goto L_08839A78;
    case 310u: goto L_08839A84;
    case 311u: goto L_08839AC4;
    case 312u: goto L_08839AD0;
    case 313u: goto L_08839ADC;
    case 314u: goto L_08839B24;
    case 315u: goto L_08839B30;
    case 316u: goto L_08839B3C;
    case 317u: goto L_08839B84;
    case 318u: goto L_08839B90;
    case 319u: goto L_08839B9C;
    case 320u: goto L_08839BE8;
    case 321u: goto L_08839C10;
    case 322u: goto L_08839C18;
    case 323u: goto L_08839C24;
    case 324u: goto L_08839C30;
    case 325u: goto L_08839C34;
    case 326u: goto L_08839C50;
    case 327u: goto L_08839CCC;
    case 328u: goto L_08839CF4;
    case 329u: goto L_08839D00;
    case 330u: goto L_08839D14;
    case 331u: goto L_08839D24;
    case 332u: goto L_08839D38;
    case 333u: goto L_08839D3C;
    case 334u: goto L_08839D48;
    case 335u: goto L_08839D58;
    case 336u: goto L_08839D5C;
    case 337u: goto L_08839D68;
    case 338u: goto L_08839D7C;
    case 339u: goto L_08839D80;
    case 340u: goto L_08839D88;
    case 341u: goto L_08839D9C;
    case 342u: goto L_08839DA0;
    case 343u: goto L_08839DB4;
    case 344u: goto L_08839DCC;
    case 345u: goto L_08839DD8;
    case 346u: goto L_08839DE0;
    case 347u: goto L_08839DEC;
    case 348u: goto L_08839E08;
    case 349u: goto L_08839E14;
    case 350u: goto L_08839E34;
    case 351u: goto L_08839E48;
    case 352u: goto L_08839E54;
    case 353u: goto L_08839E5C;
    case 354u: goto L_08839E70;
    case 355u: goto L_08839E90;
    case 356u: goto L_08839EA0;
    case 357u: goto L_08839ED4;
    case 358u: goto L_08839EEC;
    case 359u: goto L_08839F04;
    case 360u: goto L_08839F08;
    case 361u: goto L_08839F24;
    case 362u: goto L_08839F38;
    case 363u: goto L_08839F40;
    case 364u: goto L_08839F58;
    case 365u: goto L_08839F5C;
    case 366u: goto L_08839F6C;
    case 367u: goto L_08839F88;
    case 368u: goto L_08839F94;
    case 369u: goto L_08839FB4;
    case 370u: goto L_08839FE0;
    case 371u: goto L_08839FE8;
    case 372u: goto L_0883A010;
    case 373u: goto L_0883A014;
    case 374u: goto L_0883A024;
    case 375u: goto L_0883A040;
    case 376u: goto L_0883A050;
    case 377u: goto L_0883A060;
    case 378u: goto L_0883A06C;
    case 379u: goto L_0883A078;
    case 380u: goto L_0883A07C;
    case 381u: goto L_0883A090;
    case 382u: goto L_0883A0B8;
    case 383u: goto L_0883A0CC;
    case 384u: goto L_0883A0E8;
    case 385u: goto L_0883A0F4;
    case 386u: goto L_0883A108;
    case 387u: goto L_0883A110;
    case 388u: goto L_0883A11C;
    case 389u: goto L_0883A134;
    case 390u: goto L_0883A148;
    case 391u: goto L_0883A160;
    case 392u: goto L_0883A170;
    case 393u: goto L_0883A174;
    case 394u: goto L_0883A180;
    case 395u: goto L_0883A188;
    case 396u: goto L_0883A194;
    case 397u: goto L_0883A19C;
    case 398u: goto L_0883A1A8;
    case 399u: goto L_0883A1AC;
    case 400u: goto L_0883A1DC;
    case 401u: goto L_0883A22C;
    case 402u: goto L_0883A238;
    case 403u: goto L_0883A244;
    case 404u: goto L_0883A278;
    case 405u: goto L_0883A288;
    case 406u: goto L_0883A29C;
    case 407u: goto L_0883A2A8;
    case 408u: goto L_0883A2B4;
    case 409u: goto L_0883A2C4;
    case 410u: goto L_0883A2D8;
    case 411u: goto L_0883A2DC;
    case 412u: goto L_0883A304;
    case 413u: goto L_0883A370;
    case 414u: goto L_0883A37C;
    case 415u: goto L_0883A388;
    case 416u: goto L_0883A3C4;
    case 417u: goto L_0883A3D0;
    case 418u: goto L_0883A3DC;
    case 419u: goto L_0883A3E8;
    case 420u: goto L_0883A3FC;
    case 421u: goto L_0883A408;
    case 422u: goto L_0883A418;
    case 423u: goto L_0883A42C;
    case 424u: goto L_0883A438;
    case 425u: goto L_0883A474;
    case 426u: goto L_0883A480;
    case 427u: goto L_0883A48C;
    case 428u: goto L_0883A498;
    case 429u: goto L_0883A4A4;
    case 430u: goto L_0883A4B8;
    case 431u: goto L_0883A4C4;
    case 432u: goto L_0883A4DC;
    case 433u: goto L_0883A4E8;
    case 434u: goto L_0883A4F8;
    case 435u: goto L_0883A50C;
    case 436u: goto L_0883A518;
    case 437u: goto L_0883A52C;
    case 438u: goto L_0883A530;
    case 439u: goto L_0883A564;
    case 440u: goto L_0883A5A0;
    case 441u: goto L_0883A5E4;
    case 442u: goto L_0883A5EC;
    case 443u: goto L_0883A5F0;
    case 444u: goto L_0883A604;
    case 445u: goto L_0883A608;
    case 446u: goto L_0883A610;
    case 447u: goto L_0883A61C;
    case 448u: goto L_0883A620;
    case 449u: goto L_0883A644;
    case 450u: goto L_0883A658;
    case 451u: goto L_0883A660;
    case 452u: goto L_0883A674;
    case 453u: goto L_0883A688;
    case 454u: goto L_0883A698;
    case 455u: goto L_0883A69C;
    case 456u: goto L_0883A6B4;
    case 457u: goto L_0883A6B8;
    case 458u: goto L_0883A6C0;
    case 459u: goto L_0883A6CC;
    case 460u: goto L_0883A6D0;
    case 461u: goto L_0883A6F4;
    case 462u: goto L_0883A708;
    case 463u: goto L_0883A710;
    case 464u: goto L_0883A724;
    case 465u: goto L_0883A72C;
    case 466u: goto L_0883A760;
    case 467u: goto L_0883A768;
    case 468u: goto L_0883A778;
    case 469u: goto L_0883A7CC;
    case 470u: goto L_0883A7DC;
    case 471u: goto L_0883A7E8;
    case 472u: goto L_0883A7F8;
    case 473u: goto L_0883A804;
    case 474u: goto L_0883A810;
    case 475u: goto L_0883A820;
    case 476u: goto L_0883A82C;
    case 477u: goto L_0883A838;
    case 478u: goto L_0883A848;
    case 479u: goto L_0883A854;
    case 480u: goto L_0883A874;
    case 481u: goto L_0883A88C;
    case 482u: goto L_0883A898;
    case 483u: goto L_0883A8CC;
    case 484u: goto L_0883A8D4;
    case 485u: goto L_0883A8F0;
    case 486u: goto L_0883A8F4;
    case 487u: goto L_0883A924;
    case 488u: goto L_0883A92C;
    case 489u: goto L_0883A948;
    case 490u: goto L_0883A95C;
    case 491u: goto L_0883A96C;
    case 492u: goto L_0883A980;
    case 493u: goto L_0883A9AC;
    case 494u: goto L_0883A9BC;
    case 495u: goto L_0883A9C8;
    case 496u: goto L_0883A9F4;
    case 497u: goto L_0883AA2C;
    case 498u: goto L_0883AA34;
    case 499u: goto L_0883AA44;
    case 500u: goto L_0883AA68;
    case 501u: goto L_0883AA78;
    case 502u: goto L_0883AAA0;
    case 503u: goto L_0883AAC0;
    case 504u: goto L_0883AAC4;
    case 505u: goto L_0883AAD0;
    case 506u: goto L_0883AAD8;
    case 507u: goto L_0883AAE4;
    case 508u: goto L_0883AAE8;
    case 509u: goto L_0883AB00;
    case 510u: goto L_0883AB34;
    case 511u: goto L_0883AB40;
    case 512u: goto L_0883AB54;
    case 513u: goto L_0883AB70;
    case 514u: goto L_0883AB88;
    case 515u: goto L_0883ABA8;
    case 516u: goto L_0883ABAC;
    case 517u: goto L_0883ABB4;
    case 518u: goto L_0883ABB8;
    case 519u: goto L_0883ABC0;
    case 520u: goto L_0883ABC8;
    case 521u: goto L_0883ABF8;
    case 522u: goto L_0883AC20;
    case 523u: goto L_0883AC2C;
    case 524u: goto L_0883AC38;
    case 525u: goto L_0883AC4C;
    case 526u: goto L_0883AC68;
    case 527u: goto L_0883AC70;
    case 528u: goto L_0883AC74;
    case 529u: goto L_0883AC80;
    case 530u: goto L_0883ACA0;
    case 531u: goto L_0883ACE0;
    case 532u: goto L_0883ACF4;
    case 533u: goto L_0883AD20;
    case 534u: goto L_0883AD24;
    case 535u: goto L_0883AD28;
    case 536u: goto L_0883AD34;
    case 537u: goto L_0883AD3C;
    case 538u: goto L_0883AD48;
    case 539u: goto L_0883AD58;
    case 540u: goto L_0883AD5C;
    case 541u: goto L_0883ADA0;
    case 542u: goto L_0883ADB4;
    case 543u: goto L_0883ADC4;
    case 544u: goto L_0883ADD8;
    case 545u: goto L_0883ADE0;
    case 546u: goto L_0883ADE8;
    case 547u: goto L_0883ADFC;
    case 548u: goto L_0883AE00;
    case 549u: goto L_0883AE08;
    case 550u: goto L_0883AE3C;
    case 551u: goto L_0883AEB4;
    case 552u: goto L_0883AEBC;
    case 553u: goto L_0883AEC0;
    case 554u: goto L_0883AEFC;
    case 555u: goto L_0883AF0C;
    case 556u: goto L_0883AF38;
    case 557u: goto L_0883AF4C;
    case 558u: goto L_0883AF60;
    case 559u: goto L_0883AF7C;
    case 560u: goto L_0883AF84;
    case 561u: goto L_0883AFA0;
    case 562u: goto L_0883AFC0;
    case 563u: goto L_0883AFC8;
    case 564u: goto L_0883AFD4;
    case 565u: goto L_0883AFF4;
    case 566u: goto L_0883AFFC;
    case 567u: goto L_0883B004;
    case 568u: goto L_0883B018;
    case 569u: goto L_0883B02C;
    case 570u: goto L_0883B038;
    case 571u: goto L_0883B04C;
    case 572u: goto L_0883B058;
    case 573u: goto L_0883B068;
    case 574u: goto L_0883B078;
    case 575u: goto L_0883B080;
    case 576u: goto L_0883B090;
    case 577u: goto L_0883B098;
    case 578u: goto L_0883B09C;
    case 579u: goto L_0883B0A8;
    case 580u: goto L_0883B0B0;
    case 581u: goto L_0883B0CC;
    case 582u: goto L_0883B0D4;
    case 583u: goto L_0883B0E0;
    case 584u: goto L_0883B100;
    case 585u: goto L_0883B108;
    case 586u: goto L_0883B114;
    case 587u: goto L_0883B138;
    case 588u: goto L_0883B1B4;
    case 589u: goto L_0883B1D8;
    case 590u: goto L_0883B1E4;
    case 591u: goto L_0883B1EC;
    case 592u: goto L_0883B1F4;
    case 593u: goto L_0883B1FC;
    case 594u: goto L_0883B220;
    case 595u: goto L_0883B29C;
    case 596u: goto L_0883B2C0;
    case 597u: goto L_0883B2C4;
    case 598u: goto L_0883B2E0;
    case 599u: goto L_0883B35C;
    case 600u: goto L_0883B380;
    case 601u: goto L_0883B390;
    case 602u: goto L_0883B410;
    case 603u: goto L_0883B43C;
    case 604u: goto L_0883B448;
    case 605u: goto L_0883B464;
    case 606u: goto L_0883B4E0;
    case 607u: goto L_0883B504;
    case 608u: goto L_0883B514;
    case 609u: goto L_0883B594;
    case 610u: goto L_0883B5C0;
    case 611u: goto L_0883B5DC;
    case 612u: goto L_0883B658;
    case 613u: goto L_0883B67C;
    case 614u: goto L_0883B68C;
    case 615u: goto L_0883B70C;
    case 616u: goto L_0883B730;
    case 617u: goto L_0883B740;
    case 618u: goto L_0883B750;
    case 619u: goto L_0883B758;
    case 620u: goto L_0883B768;
    case 621u: goto L_0883B770;
    case 622u: goto L_0883B774;
    case 623u: goto L_0883B780;
    case 624u: goto L_0883B788;
    case 625u: goto L_0883B7A8;
    case 626u: goto L_0883B7B8;
    case 627u: goto L_0883B7C4;
    case 628u: goto L_0883B7D0;
    case 629u: goto L_0883B7F4;
    case 630u: goto L_0883B7F8;
    case 631u: goto L_0883B804;
    case 632u: goto L_0883B834;
    case 633u: goto L_0883B850;
    case 634u: goto L_0883B8D0;
    case 635u: goto L_0883B8F4;
    case 636u: goto L_0883B904;
    case 637u: goto L_0883B984;
    case 638u: goto L_0883B9A8;
    case 639u: goto L_0883B9B8;
    case 640u: goto L_0883BA38;
    case 641u: goto L_0883BA5C;
    case 642u: goto L_0883BA68;
    case 643u: goto L_0883BA78;
    case 644u: goto L_0883BB0C;
    case 645u: goto L_0883BB48;
    case 646u: goto L_0883BB4C;
    case 647u: goto L_0883BB58;
    case 648u: goto L_0883BB68;
    case 649u: goto L_0883BB78;
    case 650u: goto L_0883BB88;
    case 651u: goto L_0883BBA0;
    case 652u: goto L_0883BC1C;
    case 653u: goto L_0883BC3C;
    case 654u: goto L_0883BC48;
    case 655u: goto L_0883BC58;
    case 656u: goto L_0883BC80;
    case 657u: goto L_0883BCFC;
    case 658u: goto L_0883BD20;
    case 659u: goto L_0883BD40;
    case 660u: goto L_0883BDC0;
    case 661u: goto L_0883BDE8;
    case 662u: goto L_0883BDF4;
    case 663u: goto L_0883BE10;
    case 664u: goto L_0883BE1C;
    case 665u: goto L_0883BE98;
    case 666u: goto L_0883BEBC;
    case 667u: goto L_0883BED4;
    case 668u: goto L_0883BF50;
    case 669u: goto L_0883BF74;
    case 670u: goto L_0883BF80;
    case 671u: goto L_0883BFA4;
    case 672u: goto L_0883BFDC;
    case 673u: goto L_0883BFEC;
    case 674u: goto L_0883BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08838000:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(31, 0x08838018u);
    // nop
    goto L_0883A5A0;
L_08838018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838248;
      }
      goto L_08838020;
    }
L_08838020:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0883802C;
L_0883802C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08838068u);
    // nop
    goto L_08838374;
L_08838068:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08838094;
      }
      goto L_08838078;
    }
L_08838078:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0883808Cu);
    // nop
    goto L_0883A5A0;
L_0883808C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838248;
      }
      goto L_08838094;
    }
L_08838094:
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088380A8u);
    // nop
    goto L_08838DDC;
L_088380A8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088380E0;
      }
      goto L_088380CC;
    }
L_088380CC:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088380EC;
      }
      goto L_088380E0;
    }
L_088380E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_088380EC;
L_088380EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838104;
      }
      goto L_088380F8;
    }
L_088380F8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 648u, 0x0883732Cu>(ctx, &aot_mem); return;
      }
      goto L_08838104;
    }
L_08838104:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0883810C;
L_0883810C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08838124u);
    // nop
    goto L_0883A5A0;
L_08838124:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0883817C;
      }
      goto L_08838138;
    }
L_08838138:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08838174u);
    // nop
    goto L_0883A5A0;
L_08838174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838248;
      }
      goto L_0883817C;
    }
L_0883817C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08838184;
L_08838184:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088381C0u);
    // nop
    goto L_0883A5A0;
L_088381C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838248;
      }
      goto L_088381C8;
    }
L_088381C8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(31, 0x08838204u);
    // nop
    goto L_0883A5A0;
L_08838204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838248;
      }
      goto L_0883820C;
    }
L_0883820C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(31, 0x08838248u);
    // nop
    goto L_0883A5A0;
L_08838248:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883827C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088382A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 619u, 0x088370A8u>(ctx, &aot_mem) && ctx.pc == 0x088382A0u) goto L_088382A0;
    return;
L_088382A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088382B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088382B4u) goto L_088382B4;
    return;
L_088382B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088382C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088382C8u) goto L_088382C8;
    return;
L_088382C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088382DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088382DCu) goto L_088382DC;
    return;
L_088382DC:
    ctx.set_gpr(2, 0u + 0u);
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
L_088382F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08838338u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08838338u) goto L_08838338;
    return;
L_08838338:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838354;
      }
      goto L_08838340;
    }
L_08838340:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[19]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[18]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    goto L_08838354;
L_08838354:
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
L_08838374:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088383DC;
      }
      goto L_088383CC;
    }
L_088383CC:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088383E4;
      }
      goto L_088383DC;
    }
L_088383DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    goto L_088383E4;
L_088383E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838D70;
      }
      goto L_088383F4;
    }
L_088383F4:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4916));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838410:
    ctx.set_gpr(4, ctx.gpr[2] < static_cast<std::uint32_t>(258) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088384E0;
      }
      goto L_0883841C;
    }
L_0883841C:
    ctx.set_gpr(4, ctx.gpr[22] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088384E0;
      }
      goto L_08838428;
    }
L_08838428:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(17)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08838470u);
    // nop
    goto L_08838E10;
L_08838470:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088384A8;
      }
      goto L_08838498;
    }
L_08838498:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088384B0;
      }
      goto L_088384A8;
    }
L_088384A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    goto L_088384B0;
L_088384B0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088384E0;
      }
      goto L_088384B8;
    }
L_088384B8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088384D0;
      }
      goto L_088384C4;
    }
L_088384C4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088384D4;
      }
      goto L_088384D0;
    }
L_088384D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(9));
    goto L_088384D4;
L_088384D4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088383E4;
      }
      goto L_088384E0;
    }
L_088384E0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088384F8;
L_088384F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838574;
      }
      goto L_08838504;
    }
L_08838504:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838518;
      }
      goto L_0883850C;
    }
L_0883850C:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838558;
      }
      goto L_08838518;
    }
L_08838518:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08838550u);
    // nop
    goto L_0883A5A0;
L_08838550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_08838558;
    }
L_08838558:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << (ctx.gpr[18] & 31u));
    ctx.set_gpr(21, ctx.gpr[21] | ctx.gpr[4]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_08838574;
L_08838574:
    ctx.set_gpr(4, ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838504;
      }
      goto L_08838580;
    }
L_08838580:
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(21, ctx.gpr[21] >> (ctx.gpr[4] & 31u));
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088385D4;
      }
      goto L_088385BC;
    }
L_088385BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088383E4;
      }
      goto L_088385D4;
    }
L_088385D4:
    ctx.set_gpr(4, ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838600;
      }
      goto L_088385E0;
    }
L_088385E0:
    ctx.set_gpr(4, ctx.gpr[5] & 15u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088383E4;
      }
      goto L_08838600;
    }
L_08838600:
    ctx.set_gpr(4, ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838628;
      }
      goto L_0883860C;
    }
L_0883860C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088383E4;
      }
      goto L_08838628;
    }
L_08838628:
    ctx.set_gpr(4, ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838644;
      }
      goto L_08838634;
    }
L_08838634:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088383E4;
      }
      goto L_08838644;
    }
L_08838644:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10776));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(31, 0x08838694u);
    // nop
    goto L_0883A5A0;
L_08838694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_0883869C;
    }
L_0883869C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838718;
      }
      goto L_088386A8;
    }
L_088386A8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088386BC;
      }
      goto L_088386B0;
    }
L_088386B0:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088386FC;
      }
      goto L_088386BC;
    }
L_088386BC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088386F4u);
    // nop
    goto L_0883A5A0;
L_088386F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_088386FC;
    }
L_088386FC:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << (ctx.gpr[18] & 31u));
    ctx.set_gpr(21, ctx.gpr[21] | ctx.gpr[4]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_08838718;
L_08838718:
    ctx.set_gpr(4, ctx.gpr[18] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088386A8;
      }
      goto L_08838724;
    }
L_08838724:
    ctx.set_gpr(5, ctx.gpr[7] << 2u);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[21] & ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(21, ctx.gpr[21] >> (ctx.gpr[7] & 31u));
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[7]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(17)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08838768;
L_08838768:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088387E4;
      }
      goto L_08838774;
    }
L_08838774:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838788;
      }
      goto L_0883877C;
    }
L_0883877C:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088387C8;
      }
      goto L_08838788;
    }
L_08838788:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088387C0u);
    // nop
    goto L_0883A5A0;
L_088387C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_088387C8;
    }
L_088387C8:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << (ctx.gpr[18] & 31u));
    ctx.set_gpr(21, ctx.gpr[21] | ctx.gpr[4]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_088387E4;
L_088387E4:
    ctx.set_gpr(4, ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838774;
      }
      goto L_088387F0;
    }
L_088387F0:
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(21, ctx.gpr[21] >> (ctx.gpr[4] & 31u));
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838850;
      }
      goto L_08838830;
    }
L_08838830:
    ctx.set_gpr(4, ctx.gpr[5] & 15u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088383E4;
      }
      goto L_08838850;
    }
L_08838850:
    ctx.set_gpr(4, ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838878;
      }
      goto L_0883885C;
    }
L_0883885C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088383E4;
      }
      goto L_08838878;
    }
L_08838878:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10804));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(31, 0x088388C8u);
    // nop
    goto L_0883A5A0;
L_088388C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_088388D0;
    }
L_088388D0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883894C;
      }
      goto L_088388DC;
    }
L_088388DC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088388F0;
      }
      goto L_088388E4;
    }
L_088388E4:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838930;
      }
      goto L_088388F0;
    }
L_088388F0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08838928u);
    // nop
    goto L_0883A5A0;
L_08838928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_08838930;
    }
L_08838930:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << (ctx.gpr[18] & 31u));
    ctx.set_gpr(21, ctx.gpr[21] | ctx.gpr[4]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_0883894C;
L_0883894C:
    ctx.set_gpr(4, ctx.gpr[18] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088388DC;
      }
      goto L_08838958;
    }
L_08838958:
    ctx.set_gpr(5, ctx.gpr[7] << 2u);
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[21] & ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(21, ctx.gpr[21] >> (ctx.gpr[7] & 31u));
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[7]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0883898C;
L_0883898C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088389B8;
      }
      goto L_088389A4;
    }
L_088389A4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[7]);
    ctx.set_gpr(23, ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088389BC;
      }
      goto L_088389B8;
    }
L_088389B8:
    ctx.set_gpr(23, ctx.gpr[3] - ctx.gpr[4]);
    goto L_088389BC;
L_088389BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838B10;
      }
      goto L_088389C4;
    }
L_088389C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838ADC;
      }
      goto L_088389CC;
    }
L_088389CC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08838A0C;
      }
      goto L_088389D8;
    }
L_088389D8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08838A0C;
      }
      goto L_088389E8;
    }
L_088389E8:
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A08;
      }
      goto L_088389F8;
    }
L_088389F8:
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A0C;
      }
      goto L_08838A08;
    }
L_08838A08:
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[5]);
    goto L_08838A0C;
L_08838A0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838ADC;
      }
      goto L_08838A14;
    }
L_08838A14:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08838A28u);
    // nop
    goto L_0883A5A0;
L_08838A28:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A50;
      }
      goto L_08838A40;
    }
L_08838A40:
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A58;
      }
      goto L_08838A50;
    }
L_08838A50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    goto L_08838A58;
L_08838A58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08838A94;
      }
      goto L_08838A64;
    }
L_08838A64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838A94;
      }
      goto L_08838A70;
    }
L_08838A70:
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A90;
      }
      goto L_08838A80;
    }
L_08838A80:
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A94;
      }
      goto L_08838A90;
    }
L_08838A90:
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[4]);
    goto L_08838A94;
L_08838A94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838ADC;
      }
      goto L_08838A9C;
    }
L_08838A9C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08838AD4u);
    // nop
    goto L_0883A5A0;
L_08838AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_08838ADC;
    }
L_08838ADC:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838B04;
      }
      goto L_08838B00;
    }
L_08838B00:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    goto L_08838B04;
L_08838B04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08838B10;
L_08838B10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088389C4;
      }
      goto L_08838B1C;
    }
L_08838B1C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088383E4;
      }
      goto L_08838B28;
    }
L_08838B28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838C40;
      }
      goto L_08838B30;
    }
L_08838B30:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08838B70;
      }
      goto L_08838B3C;
    }
L_08838B3C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08838B70;
      }
      goto L_08838B4C;
    }
L_08838B4C:
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838B6C;
      }
      goto L_08838B5C;
    }
L_08838B5C:
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838B70;
      }
      goto L_08838B6C;
    }
L_08838B6C:
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[5]);
    goto L_08838B70;
L_08838B70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838C40;
      }
      goto L_08838B78;
    }
L_08838B78:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08838B8Cu);
    // nop
    goto L_0883A5A0;
L_08838B8C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838BB4;
      }
      goto L_08838BA4;
    }
L_08838BA4:
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838BBC;
      }
      goto L_08838BB4;
    }
L_08838BB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    goto L_08838BBC;
L_08838BBC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08838BF8;
      }
      goto L_08838BC8;
    }
L_08838BC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08838BF8;
      }
      goto L_08838BD4;
    }
L_08838BD4:
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838BF4;
      }
      goto L_08838BE4;
    }
L_08838BE4:
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838BF8;
      }
      goto L_08838BF4;
    }
L_08838BF4:
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[4]);
    goto L_08838BF8;
L_08838BF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838C40;
      }
      goto L_08838C00;
    }
L_08838C00:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08838C38u);
    // nop
    goto L_0883A5A0;
L_08838C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_08838C40;
    }
L_08838C40:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088383E4;
      }
      goto L_08838C60;
    }
L_08838C60:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838C78;
      }
      goto L_08838C6C;
    }
L_08838C6C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08838C78;
L_08838C78:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08838C8Cu);
    // nop
    goto L_0883A5A0;
L_08838C8C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08838CE0;
      }
      goto L_08838CA0;
    }
L_08838CA0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08838CD8u);
    // nop
    goto L_0883A5A0;
L_08838CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_08838CE0;
    }
L_08838CE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08838CE8;
L_08838CE8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08838D24u);
    // nop
    goto L_0883A5A0;
L_08838D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_08838D2C;
    }
L_08838D2C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(31, 0x08838D68u);
    // nop
    goto L_0883A5A0;
L_08838D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_08838D70;
    }
L_08838D70:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(31, 0x08838DACu);
    // nop
    goto L_0883A5A0;
L_08838DAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08838DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08838E00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08838E00u) goto L_08838E00;
    return;
L_08838E00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838E10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, ctx.gpr[11] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838E4C;
      }
      goto L_08838E3C;
    }
L_08838E3C:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838E54;
      }
      goto L_08838E4C;
    }
L_08838E4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(10, ctx.gpr[2] - ctx.gpr[11]);
    goto L_08838E54;
L_08838E54:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838E98;
      }
      goto L_08838E7C;
    }
L_08838E7C:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[13] + 0u);
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[14] & 31u));
    ctx.set_gpr(15, ctx.gpr[15] | ctx.gpr[2]);
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(8));
    goto L_08838E98;
L_08838E98:
    ctx.set_gpr(2, ctx.gpr[14] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838E7C;
      }
      goto L_08838EA4;
    }
L_08838EA4:
    ctx.set_gpr(2, ctx.gpr[15] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(25, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838EE0;
      }
      goto L_08838EBC;
    }
L_08838EBC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(15, ctx.gpr[15] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(14, ctx.gpr[14] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839288;
      }
      goto L_08838EE0;
    }
L_08838EE0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(15, ctx.gpr[15] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(14, ctx.gpr[14] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[24] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839138;
      }
      goto L_08838EF8;
    }
L_08838EF8:
    ctx.set_gpr(16, ctx.gpr[24] & 15u);
    ctx.set_gpr(5, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[15] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(15, ctx.gpr[15] >> (ctx.gpr[16] & 31u));
    ctx.set_gpr(14, ctx.gpr[14] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838F48;
      }
      goto L_08838F2C;
    }
L_08838F2C:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[13] + 0u);
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[14] & 31u));
    ctx.set_gpr(15, ctx.gpr[15] | ctx.gpr[2]);
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(8));
    goto L_08838F48;
L_08838F48:
    ctx.set_gpr(2, ctx.gpr[14] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838F2C;
      }
      goto L_08838F54;
    }
L_08838F54:
    ctx.set_gpr(2, ctx.gpr[15] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(25, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    goto L_08838F64;
L_08838F64:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(15, ctx.gpr[15] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(14, ctx.gpr[14] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[24] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839080;
      }
      goto L_08838F7C;
    }
L_08838F7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838FA0;
      }
      goto L_08838F84;
    }
L_08838F84:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[13] + 0u);
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[14] & 31u));
    ctx.set_gpr(15, ctx.gpr[15] | ctx.gpr[2]);
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(8));
    goto L_08838FA0;
L_08838FA0:
    ctx.set_gpr(2, ctx.gpr[24] & 15u);
    ctx.set_gpr(16, ctx.gpr[14] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838F84;
      }
      goto L_08838FB0;
    }
L_08838FB0:
    ctx.set_gpr(24, ctx.gpr[2] << 2u);
    ctx.set_gpr(16, 2226u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[24]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[15] & ctx.gpr[16]);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(25, ctx.gpr[24] + ctx.gpr[16]);
    ctx.set_gpr(15, ctx.gpr[15] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(14, ctx.gpr[14] - ctx.gpr[2]);
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(24, ctx.gpr[11] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[24] < ctx.gpr[25] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839018;
      }
      goto L_08838FF0;
    }
L_08838FF0:
    ctx.set_gpr(24, ctx.gpr[11] - ctx.gpr[25]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839058;
      }
      goto L_08839018;
    }
L_08839018:
    ctx.set_gpr(24, ctx.gpr[25] - ctx.gpr[24]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[24]);
    ctx.set_gpr(1, ctx.gpr[24] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839058;
      }
      goto L_08839030;
    }
L_08839030:
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[24]);
    goto L_08839034;
L_08839034:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839034;
      }
      goto L_08839054;
    }
L_08839054:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    goto L_08839058;
L_08839058:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839058;
      }
      goto L_08839078;
    }
L_08839078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839288;
      }
      goto L_08839080;
    }
L_08839080:
    ctx.set_gpr(2, ctx.gpr[24] & 64u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088390C4;
      }
      goto L_0883908C;
    }
L_0883908C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(25, ctx.gpr[25] + ctx.gpr[2]);
    ctx.set_gpr(24, ctx.gpr[24] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[24]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[15] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(25, ctx.gpr[25] + ctx.gpr[2]);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838F64;
      }
      goto L_088390C4;
    }
L_088390C4:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10828));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[12]);
    ctx.set_gpr(5, ctx.gpr[14] >> 3u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088390F0;
      }
      goto L_088390E8;
    }
L_088390E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088390F4;
      }
      goto L_088390F0;
    }
L_088390F0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_088390F4;
L_088390F4:
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[13] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[14] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(52), ctx.gpr[11]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839300;
      }
      goto L_08839138;
    }
L_08839138:
    ctx.set_gpr(2, ctx.gpr[24] & 64u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088391A0;
      }
      goto L_08839144;
    }
L_08839144:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(25, ctx.gpr[25] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[24] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15600));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[15] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(25, ctx.gpr[25] + ctx.gpr[2]);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838EE0;
      }
      goto L_0883917C;
    }
L_0883917C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(15, ctx.gpr[15] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(14, ctx.gpr[14] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839288;
      }
      goto L_088391A0;
    }
L_088391A0:
    ctx.set_gpr(2, ctx.gpr[24] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839214;
      }
      goto L_088391AC;
    }
L_088391AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[12]);
    ctx.set_gpr(5, ctx.gpr[14] >> 3u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088391CC;
      }
      goto L_088391C4;
    }
L_088391C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088391D0;
      }
      goto L_088391CC;
    }
L_088391CC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_088391D0;
L_088391D0:
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[13] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[14] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(52), ctx.gpr[11]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839300;
      }
      goto L_08839214;
    }
L_08839214:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10852));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[12]);
    ctx.set_gpr(5, ctx.gpr[14] >> 3u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839240;
      }
      goto L_08839238;
    }
L_08839238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839244;
      }
      goto L_08839240;
    }
L_08839240:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08839244;
L_08839244:
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[13] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[14] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(52), ctx.gpr[11]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839300;
      }
      goto L_08839288;
    }
L_08839288:
    ctx.set_gpr(2, ctx.gpr[10] < static_cast<std::uint32_t>(258) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088392A0;
      }
      goto L_08839294;
    }
L_08839294:
    ctx.set_gpr(1, ctx.gpr[12] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838E98;
      }
      goto L_088392A0;
    }
L_088392A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[12]);
    ctx.set_gpr(5, ctx.gpr[14] >> 3u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088392C0;
      }
      goto L_088392B8;
    }
L_088392B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088392C4;
      }
      goto L_088392C0;
    }
L_088392C0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_088392C4;
L_088392C4:
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[13] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[14] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(52), ctx.gpr[11]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08839300;
L_08839300:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839330;
      }
      goto L_08839324;
    }
L_08839324:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883933C;
      }
      goto L_08839330;
    }
L_08839330:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839384;
      }
      goto L_0883933C;
    }
L_0883933C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839364;
      }
      goto L_08839358;
    }
L_08839358:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839368;
      }
      goto L_08839364;
    }
L_08839364:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08839368;
L_08839368:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08839380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 619u, 0x088370A8u>(ctx, &aot_mem) && ctx.pc == 0x08839380u) goto L_08839380;
    return;
L_08839380:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08839384;
L_08839384:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839394:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088393C4;
      }
      goto L_088393AC;
    }
L_088393AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088393C4;
      }
      goto L_088393B8;
    }
L_088393B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088393D0;
      }
      goto L_088393C4;
    }
L_088393C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839404;
      }
      goto L_088393D0;
    }
L_088393D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088393E8;
      }
      goto L_088393DC;
    }
L_088393DC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088393E8u);
    // nop
    goto L_0883827C;
L_088393E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088393FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088393FCu) goto L_088393FC;
    return;
L_088393FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08839404;
L_08839404:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839458;
      }
      goto L_08839438;
    }
L_08839438:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(10880))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08839458;
      }
      goto L_0883944C;
    }
L_0883944C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08839464;
      }
      goto L_08839458;
    }
L_08839458:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088395B0;
      }
      goto L_08839464;
    }
L_08839464:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839478;
      }
      goto L_0883946C;
    }
L_0883946C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088395B0;
      }
      goto L_08839478;
    }
L_08839478:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839498;
      }
      goto L_08839488;
    }
L_08839488:
    ctx.set_gpr(2, 2180u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13596));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    goto L_08839498;
L_08839498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088394B0;
      }
      goto L_088394A4;
    }
L_088394A4:
    ctx.set_gpr(2, 2180u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13556));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_088394B0;
L_088394B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088394C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088394C8u) goto L_088394C8;
    return;
L_088394C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088394E0;
      }
      goto L_088394D4;
    }
L_088394D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088395B0;
      }
      goto L_088394E0;
    }
L_088394E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08839508;
      }
      goto L_088394F8;
    }
L_088394F8:
    ctx.set_gpr(16, 0u - ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_08839508;
L_08839508:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839520;
      }
      goto L_08839514;
    }
L_08839514:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839538;
      }
      goto L_08839520;
    }
L_08839520:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0883952Cu);
    // nop
    goto L_08839394;
L_0883952C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088395B0;
      }
      goto L_08839538;
    }
L_08839538:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883955C;
      }
      goto L_08839550;
    }
L_08839550:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839564;
      }
      goto L_0883955C;
    }
L_0883955C:
    ctx.set_gpr(5, 2179u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20452));
    goto L_08839564;
L_08839564:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[2] << (ctx.gpr[16] & 31u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08839578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 630u, 0x08837178u>(ctx, &aot_mem) && ctx.pc == 0x08839578u) goto L_08839578;
    return;
L_08839578:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088395A0;
      }
      goto L_08839588;
    }
L_08839588:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08839594u);
    // nop
    goto L_08839394;
L_08839594:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088395B0;
      }
      goto L_088395A0;
    }
L_088395A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088395ACu);
    // nop
    goto L_08839310;
L_088395AC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088395B0;
L_088395B0:
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
L_088395C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088395E8u);
    // nop
    goto L_08839418;
L_088395E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088395F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839634;
      }
      goto L_0883961C;
    }
L_0883961C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839634;
      }
      goto L_08839628;
    }
L_08839628:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839640;
      }
      goto L_08839634;
    }
L_08839634:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_08839640;
    }
L_08839640:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08839658;
      }
      goto L_0883964C;
    }
L_0883964C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883965C;
      }
      goto L_08839658;
    }
L_08839658:
    ctx.set_gpr(17, 0u + 0u);
    goto L_0883965C;
L_0883965C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-5));
    goto L_08839660;
L_08839660:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C30;
      }
      goto L_08839674;
    }
L_08839674:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4956));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839690:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088396A8;
      }
      goto L_0883969C;
    }
L_0883969C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_088396A8;
    }
L_088396A8:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08839714;
      }
      goto L_088396E8;
    }
L_088396E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10888));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839660;
      }
      goto L_08839714;
    }
L_08839714:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] >> 4u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883975C;
      }
      goto L_08839734;
    }
L_08839734:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10916));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839660;
      }
      goto L_0883975C;
    }
L_0883975C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08839764;
L_08839764:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883977C;
      }
      goto L_08839770;
    }
L_08839770:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_0883977C;
    }
L_0883977C:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(31));
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088397F0;
      }
      goto L_088397C8;
    }
L_088397C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10936));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839660;
      }
      goto L_088397F0;
    }
L_088397F0:
    ctx.set_gpr(2, ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883980C;
      }
      goto L_088397FC;
    }
L_088397FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839660;
      }
      goto L_0883980C;
    }
L_0883980C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08839814;
L_08839814:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883982C;
      }
      goto L_08839820;
    }
L_08839820:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_0883982C;
    }
L_0883982C:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0883986C;
L_0883986C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839884;
      }
      goto L_08839878;
    }
L_08839878:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_08839884;
    }
L_08839884:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_088398CC;
L_088398CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088398E4;
      }
      goto L_088398D8;
    }
L_088398D8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_088398E4;
    }
L_088398E4:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0883992C;
L_0883992C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839944;
      }
      goto L_08839938;
    }
L_08839938:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_08839944;
    }
L_08839944:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_0883999C;
    }
L_0883999C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10960));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_088399C4;
    }
L_088399C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088399D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 645u, 0x088372B0u>(ctx, &aot_mem) && ctx.pc == 0x088399D8u) goto L_088399D8;
    return;
L_088399D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08839A04;
      }
      goto L_088399E8;
    }
L_088399E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839660;
      }
      goto L_08839A04;
    }
L_08839A04:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839A10;
      }
      goto L_08839A0C;
    }
L_08839A0C:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    goto L_08839A10;
L_08839A10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08839A28;
      }
      goto L_08839A1C;
    }
L_08839A1C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_08839A28;
    }
L_08839A28:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08839A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 619u, 0x088370A8u>(ctx, &aot_mem) && ctx.pc == 0x08839A44u) goto L_08839A44;
    return;
L_08839A44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839A64;
      }
      goto L_08839A54;
    }
L_08839A54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839660;
      }
      goto L_08839A64;
    }
L_08839A64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08839A6C;
L_08839A6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839A84;
      }
      goto L_08839A78;
    }
L_08839A78:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_08839A84;
    }
L_08839A84:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08839AC4;
L_08839AC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839ADC;
      }
      goto L_08839AD0;
    }
L_08839AD0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_08839ADC;
    }
L_08839ADC:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08839B24;
L_08839B24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839B3C;
      }
      goto L_08839B30;
    }
L_08839B30:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_08839B3C;
    }
L_08839B3C:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08839B84;
L_08839B84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839B9C;
      }
      goto L_08839B90;
    }
L_08839B90:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_08839B9C;
    }
L_08839B9C:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08839C10;
      }
      goto L_08839BE8;
    }
L_08839BE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10976));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839660;
      }
      goto L_08839C10;
    }
L_08839C10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08839C18;
L_08839C18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_08839C24;
    }
L_08839C24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C34;
      }
      goto L_08839C30;
    }
L_08839C30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    goto L_08839C34;
L_08839C34:
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
L_08839C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    goto L_08839CCC;
L_08839CCC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(192), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839CCC;
      }
      goto L_08839CF4;
    }
L_08839CF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08839D14;
      }
      goto L_08839D00;
    }
L_08839D00:
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A1AC;
      }
      goto L_08839D14;
    }
L_08839D14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839D3C;
      }
      goto L_08839D24;
    }
L_08839D24:
    ctx.set_gpr(2, ctx.gpr[15] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839D48;
      }
      goto L_08839D38;
    }
L_08839D38:
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    goto L_08839D3C;
L_08839D3C:
    ctx.set_gpr(1, ctx.gpr[15] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839D24;
      }
      goto L_08839D48;
    }
L_08839D48:
    ctx.set_gpr(12, ctx.gpr[15] + 0u);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[15] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839D5C;
      }
      goto L_08839D58;
    }
L_08839D58:
    ctx.set_gpr(3, ctx.gpr[15] + 0u);
    goto L_08839D5C;
L_08839D5C:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839D80;
      }
      goto L_08839D68;
    }
L_08839D68:
    ctx.set_gpr(2, ctx.gpr[13] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839D88;
      }
      goto L_08839D7C;
    }
L_08839D7C:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    goto L_08839D80;
L_08839D80:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839D68;
      }
      goto L_08839D88;
    }
L_08839D88:
    ctx.set_gpr(19, ctx.gpr[13] + 0u);
    ctx.set_gpr(14, ctx.gpr[13] + 0u);
    ctx.set_gpr(1, ctx.gpr[13] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839DA0;
      }
      goto L_08839D9C;
    }
L_08839D9C:
    ctx.set_gpr(3, ctx.gpr[13] + 0u);
    goto L_08839DA0;
L_08839DA0:
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[15] & 31u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839DE0;
      }
      goto L_08839DB4;
    }
L_08839DB4:
    ctx.set_gpr(10, ctx.gpr[15] << 2u);
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[29]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08839DD8;
      }
      goto L_08839DCC;
    }
L_08839DCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A1AC;
      }
      goto L_08839DD8;
    }
L_08839DD8:
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    goto L_08839DE0;
L_08839DE0:
    ctx.set_gpr(10, ctx.gpr[15] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839DB4;
      }
      goto L_08839DEC;
    }
L_08839DEC:
    ctx.set_gpr(10, ctx.gpr[13] << 2u);
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[29]);
    ctx.set_gpr(15, ctx.gpr[10] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08839E14;
      }
      goto L_08839E08;
    }
L_08839E08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A1AC;
      }
      goto L_08839E14;
    }
L_08839E14:
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(15, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(20, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839E48;
      }
      goto L_08839E34;
    }
L_08839E34:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    goto L_08839E48;
L_08839E48:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839E34;
      }
      goto L_08839E54;
    }
L_08839E54:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(13, 0u + 0u);
    goto L_08839E5C;
L_08839E5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839E90;
      }
      goto L_08839E70;
    }
L_08839E70:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(15, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[10] << 2u);
    ctx.set_gpr(4, ctx.gpr[23] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    goto L_08839E90;
L_08839E90:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[13] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839E5C;
      }
      goto L_08839EA0;
    }
L_08839EA0:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(13, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(21, 0u - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A174;
      }
      goto L_08839ED4;
    }
L_08839ED4:
    ctx.set_gpr(5, ctx.gpr[12] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[29]);
    ctx.set_gpr(18, ctx.gpr[5] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A160;
      }
      goto L_08839EEC;
    }
L_08839EEC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[14] - ctx.gpr[21]);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839F08;
      }
      goto L_08839F04;
    }
L_08839F04:
    ctx.set_gpr(10, ctx.gpr[3] + 0u);
    goto L_08839F08;
L_08839F08:
    ctx.set_gpr(15, ctx.gpr[12] - ctx.gpr[21]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[20] << (ctx.gpr[15] & 31u));
    ctx.set_gpr(20, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839F6C;
      }
      goto L_08839F24;
    }
L_08839F24:
    ctx.set_gpr(24, ctx.gpr[22] - ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[18] + 0u);
    ctx.set_gpr(1, ctx.gpr[15] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839F6C;
      }
      goto L_08839F38;
    }
L_08839F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839F5C;
      }
      goto L_08839F40;
    }
L_08839F40:
    ctx.set_gpr(24, ctx.gpr[24] << 1u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[24] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839F6C;
      }
      goto L_08839F58;
    }
L_08839F58:
    ctx.set_gpr(24, ctx.gpr[24] - ctx.gpr[22]);
    goto L_08839F5C;
L_08839F5C:
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[15] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839F40;
      }
      goto L_08839F6C;
    }
L_08839F6C:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[10] << (ctx.gpr[15] & 31u));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[22] + ctx.gpr[20]);
    ctx.set_gpr(1, ctx.gpr[24] < static_cast<std::uint32_t>(1441) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839F94;
      }
      goto L_08839F88;
    }
L_08839F88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A1AC;
      }
      goto L_08839F94;
    }
L_08839F94:
    ctx.set_gpr(10, ctx.gpr[4] << 2u);
    ctx.set_gpr(22, ctx.gpr[22] << 3u);
    ctx.set_gpr(22, ctx.gpr[11] + ctx.gpr[22]);
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A010;
      }
      goto L_08839FB4;
    }
L_08839FB4:
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(60), ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(15, ctx.gpr[21] - ctx.gpr[3]);
    ctx.set_gpr(25, ctx.gpr[13] >> (ctx.gpr[15] & 31u));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[22] - ctx.gpr[24]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[15]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08839FE8;
      }
      goto L_08839FE0;
    }
L_08839FE0:
    ctx.set_gpr(10, ctx.gpr[15] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 3u));
    goto L_08839FE8;
L_08839FE8:
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[25] << 3u);
    ctx.set_gpr(10, ctx.gpr[24] + ctx.gpr[10]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A014;
      }
      goto L_0883A010;
    }
L_0883A010:
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    goto L_0883A014;
L_0883A014:
    ctx.set_gpr(10, ctx.gpr[21] + ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839EEC;
      }
      goto L_0883A024;
    }
L_0883A024:
    ctx.set_gpr(15, ctx.gpr[12] - ctx.gpr[21]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(185), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(10, ctx.gpr[16] << 2u);
    ctx.set_gpr(10, ctx.gpr[23] + ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[2] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A050;
      }
      goto L_0883A040;
    }
L_0883A040:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(192));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[10]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A0B8;
      }
      goto L_0883A050;
    }
L_0883A050:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[24] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A090;
      }
      goto L_0883A060;
    }
L_0883A060:
    ctx.set_gpr(1, ctx.gpr[24] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A078;
      }
      goto L_0883A06C;
    }
L_0883A06C:
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A07C;
      }
      goto L_0883A078;
    }
L_0883A078:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(96));
    goto L_0883A07C;
L_0883A07C:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[10]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[24]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A0B8;
      }
      goto L_0883A090;
    }
L_0883A090:
    ctx.set_gpr(10, ctx.gpr[24] - ctx.gpr[6]);
    ctx.set_gpr(10, ctx.gpr[10] << 2u);
    ctx.set_gpr(24, ctx.gpr[8] + ctx.gpr[10]);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(80));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.set_gpr(10, ctx.gpr[7] + ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_0883A0B8;
L_0883A0B8:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] << (ctx.gpr[15] & 31u));
    ctx.set_gpr(15, ctx.gpr[13] >> (ctx.gpr[21] & 31u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A0E8;
      }
      goto L_0883A0CC;
    }
L_0883A0CC:
    ctx.set_gpr(24, ctx.gpr[15] << 3u);
    ctx.set_gpr(24, ctx.gpr[22] + ctx.gpr[24]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[10]);
    goto L_0883A0E8;
L_0883A0E8:
    ctx.set_gpr(24, ctx.gpr[15] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A0CC;
      }
      goto L_0883A0F4;
    }
L_0883A0F4:
    ctx.set_gpr(15, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, ctx.gpr[10] << (ctx.gpr[15] & 31u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A110;
      }
      goto L_0883A108;
    }
L_0883A108:
    ctx.set_gpr(13, ctx.gpr[13] ^ ctx.gpr[15]);
    ctx.set_gpr(15, ctx.gpr[15] >> 1u);
    goto L_0883A110;
L_0883A110:
    ctx.set_gpr(10, ctx.gpr[13] & ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A108;
      }
      goto L_0883A11C;
    }
L_0883A11C:
    ctx.set_gpr(13, ctx.gpr[13] ^ ctx.gpr[15]);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] << (ctx.gpr[21] & 31u));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A148;
      }
      goto L_0883A134;
    }
L_0883A134:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(21, ctx.gpr[21] - ctx.gpr[3]);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[10] << (ctx.gpr[21] & 31u));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    goto L_0883A148;
L_0883A148:
    ctx.set_gpr(10, ctx.gpr[13] & ctx.gpr[10]);
    ctx.set_gpr(15, ctx.gpr[4] << 2u);
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[29]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[15];
    // nop
      if (branch_taken) {
          goto L_0883A134;
      }
      goto L_0883A160;
    }
L_0883A160:
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A014;
      }
      goto L_0883A170;
    }
L_0883A170:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_0883A174;
L_0883A174:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839ED4;
      }
      goto L_0883A180;
    }
L_0883A180:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A1A8;
      }
      goto L_0883A188;
    }
L_0883A188:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883A19C;
      }
      goto L_0883A194;
    }
L_0883A194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A1A8;
      }
      goto L_0883A19C;
    }
L_0883A19C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A1AC;
      }
      goto L_0883A1A8;
    }
L_0883A1A8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0883A1AC;
L_0883A1AC:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0883A22Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A22Cu) goto L_0883A22C;
    return;
L_0883A22C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A244;
      }
      goto L_0883A238;
    }
L_0883A238:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A2DC;
      }
      goto L_0883A244;
    }
L_0883A244:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    ctx.set_gpr(11, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0883A278u);
    // nop
    goto L_08839C50;
L_0883A278:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883A29C;
      }
      goto L_0883A288;
    }
L_0883A288:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11000));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A2C4;
      }
      goto L_0883A29C;
    }
L_0883A29C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883A2B4;
      }
      goto L_0883A2A8;
    }
L_0883A2A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A2C4;
      }
      goto L_0883A2B4;
    }
L_0883A2B4:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11040));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-3));
    goto L_0883A2C4;
L_0883A2C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0883A2D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A2D8u) goto L_0883A2D8;
    return;
L_0883A2D8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0883A2DC;
L_0883A2DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A304:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(288));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0883A370u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A370u) goto L_0883A370;
    return;
L_0883A370:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A388;
      }
      goto L_0883A37C;
    }
L_0883A37C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A530;
      }
      goto L_0883A388;
    }
L_0883A388:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(257));
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(5012));
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(5136));
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[19] + 0u);
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0883A3C4u);
    // nop
    goto L_08839C50;
L_0883A3C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A3DC;
      }
      goto L_0883A3D0;
    }
L_0883A3D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A438;
      }
      goto L_0883A3DC;
    }
L_0883A3DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883A3FC;
      }
      goto L_0883A3E8;
    }
L_0883A3E8:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11076));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A418;
      }
      goto L_0883A3FC;
    }
L_0883A3FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883A418;
      }
      goto L_0883A408;
    }
L_0883A408:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11112));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    goto L_0883A418;
L_0883A418:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0883A42Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A42Cu) goto L_0883A42C;
    return;
L_0883A42C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A530;
      }
      goto L_0883A438;
    }
L_0883A438:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[21] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(5260));
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(5380));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0883A474u);
    // nop
    goto L_08839C50;
L_0883A474:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A498;
      }
      goto L_0883A480;
    }
L_0883A480:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A518;
      }
      goto L_0883A48C;
    }
L_0883A48C:
    ctx.set_gpr(1, ctx.gpr[21] < static_cast<std::uint32_t>(258) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A518;
      }
      goto L_0883A498;
    }
L_0883A498:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883A4B8;
      }
      goto L_0883A4A4;
    }
L_0883A4A4:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11144));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A4F8;
      }
      goto L_0883A4B8;
    }
L_0883A4B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883A4DC;
      }
      goto L_0883A4C4;
    }
L_0883A4C4:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11176));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A4F8;
      }
      goto L_0883A4DC;
    }
L_0883A4DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883A4F8;
      }
      goto L_0883A4E8;
    }
L_0883A4E8:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11204));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    goto L_0883A4F8;
L_0883A4F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0883A50Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A50Cu) goto L_0883A50C;
    return;
L_0883A50C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A530;
      }
      goto L_0883A518;
    }
L_0883A518:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0883A52Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A52Cu) goto L_0883A52C;
    return;
L_0883A52C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0883A530;
L_0883A530:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A564:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11240)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11244)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11248));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15344));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A5A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A5EC;
      }
      goto L_0883A5E4;
    }
L_0883A5E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A5F0;
      }
      goto L_0883A5EC;
    }
L_0883A5EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    goto L_0883A5F0;
L_0883A5F0:
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A608;
      }
      goto L_0883A604;
    }
L_0883A604:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0883A608;
L_0883A608:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A620;
      }
      goto L_0883A610;
    }
L_0883A610:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883A620;
      }
      goto L_0883A61C;
    }
L_0883A61C:
    ctx.set_gpr(18, 0u + 0u);
    goto L_0883A620;
L_0883A620:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A660;
      }
      goto L_0883A644;
    }
L_0883A644:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0883A658u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A658u) goto L_0883A658;
    return;
L_0883A658:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_0883A660;
L_0883A660:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0883A674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0883A674u) goto L_0883A674;
    return;
L_0883A674:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883A72C;
      }
      goto L_0883A688;
    }
L_0883A688:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883A69C;
      }
      goto L_0883A698;
    }
L_0883A698:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    goto L_0883A69C;
L_0883A69C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[21]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A6B8;
      }
      goto L_0883A6B4;
    }
L_0883A6B4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0883A6B8;
L_0883A6B8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A6D0;
      }
      goto L_0883A6C0;
    }
L_0883A6C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883A6D0;
      }
      goto L_0883A6CC;
    }
L_0883A6CC:
    ctx.set_gpr(18, 0u + 0u);
    goto L_0883A6D0;
L_0883A6D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A710;
      }
      goto L_0883A6F4;
    }
L_0883A6F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0883A708u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A708u) goto L_0883A708;
    return;
L_0883A708:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    goto L_0883A710;
L_0883A710:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0883A724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0883A724u) goto L_0883A724;
    return;
L_0883A724:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[17]);
    goto L_0883A72C;
L_0883A72C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A760:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0883A778u);
    // nop
    goto L_0883A760;
L_0883A778:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(140));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2832), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15668));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2840), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(2432));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2844), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15688));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2852), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(2676));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2856), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15708));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2864), ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5804), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0883A7CCu);
    // nop
    goto L_0883A7DC;
L_0883A7CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A7DC:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A7F8;
      }
      goto L_0883A7E8;
    }
L_0883A7E8:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(140), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0883A7F8;
L_0883A7F8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 286 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A7E8;
      }
      goto L_0883A804;
    }
L_0883A804:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A820;
      }
      goto L_0883A810;
    }
L_0883A810:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(2432), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0883A820;
L_0883A820:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A810;
      }
      goto L_0883A82C;
    }
L_0883A82C:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A848;
      }
      goto L_0883A838;
    }
L_0883A838:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(2676), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0883A848;
L_0883A848:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A838;
      }
      goto L_0883A854;
    }
L_0883A854:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1164), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5796), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5792), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5800), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5784), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A874:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2900)));
    ctx.set_gpr(7, ctx.gpr[6] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A95C;
      }
      goto L_0883A88C;
    }
L_0883A88C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A8F4;
      }
      goto L_0883A898;
    }
L_0883A898:
    ctx.set_gpr(8, ctx.gpr[7] << 2u);
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(2900)));
    ctx.set_gpr(8, ctx.gpr[12] << 2u);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(2904)));
    ctx.set_gpr(8, ctx.gpr[10] << 2u);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A8F0;
      }
      goto L_0883A8CC;
    }
L_0883A8CC:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0883A8F4;
      }
      goto L_0883A8D4;
    }
L_0883A8D4:
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[4]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(5200)));
    ctx.set_gpr(8, ctx.gpr[12] + ctx.gpr[4]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(5200)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A8F4;
      }
      goto L_0883A8F0;
    }
L_0883A8F0:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0883A8F4;
L_0883A8F4:
    ctx.set_gpr(8, ctx.gpr[7] << 2u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(2900)));
    ctx.set_gpr(8, ctx.gpr[11] << 2u);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[3] << 2u);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A96C;
      }
      goto L_0883A924;
    }
L_0883A924:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0883A948;
      }
      goto L_0883A92C;
    }
L_0883A92C:
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(5200)));
    ctx.set_gpr(8, ctx.gpr[11] + ctx.gpr[4]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(5200)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A96C;
      }
      goto L_0883A948;
    }
L_0883A948:
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2900), ctx.gpr[11]);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] << 1u);
    goto L_0883A95C;
L_0883A95C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5192)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A88C;
      }
      goto L_0883A96C;
    }
L_0883A96C:
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2900), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A980:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A9BC;
      }
      goto L_0883A9AC;
    }
L_0883A9AC:
    ctx.set_gpr(3, ctx.gpr[12] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(2868), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_0883A9BC;
L_0883A9BC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A9AC;
      }
      goto L_0883A9C8;
    }
L_0883A9C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5196)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2900)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5196)));
    ctx.set_gpr(13, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AAC4;
      }
      goto L_0883A9F4;
    }
L_0883A9F4:
    ctx.set_gpr(3, ctx.gpr[13] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2900)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(15, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, ctx.gpr[12] << 2u);
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[10]);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AA34;
      }
      goto L_0883AA2C;
    }
L_0883AA2C:
    ctx.set_gpr(12, ctx.gpr[14] + 0u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_0883AA34;
L_0883AA34:
    rt.memory().aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883AAC0;
      }
      goto L_0883AA44;
    }
L_0883AA44:
    ctx.set_gpr(15, ctx.gpr[12] << 1u);
    ctx.set_gpr(24, ctx.gpr[15] + ctx.gpr[4]);
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(2868)));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(2868), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(24, 0u + 0u);
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883AA78;
      }
      goto L_0883AA68;
    }
L_0883AA68:
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0883AA78;
L_0883AA78:
    ctx.set_gpr(5, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[12] + ctx.gpr[24]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.lo);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5792)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5792), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AAC0;
      }
      goto L_0883AAA0;
    }
L_0883AAA0:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[24] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5796)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5796), ctx.gpr[3]);
    goto L_0883AAC0;
L_0883AAC0:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_0883AAC4;
L_0883AAC4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[13]) < 573 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A9F4;
      }
      goto L_0883AAD0;
    }
L_0883AAD0:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883ABC0;
      }
      goto L_0883AAD8;
    }
L_0883AAD8:
    ctx.set_gpr(12, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AAE8;
      }
      goto L_0883AAE4;
    }
L_0883AAE4:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    goto L_0883AAE8;
L_0883AAE8:
    ctx.set_gpr(3, ctx.gpr[12] << 1u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(2868));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2868)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AAE4;
      }
      goto L_0883AB00;
    }
L_0883AB00:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2870)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2870), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[14] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2868)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2868), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) > 0;
    // nop
      if (branch_taken) {
          goto L_0883AAD8;
      }
      goto L_0883AB34;
    }
L_0883AB34:
    ctx.set_gpr(12, ctx.gpr[14] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883ABB8;
      }
      goto L_0883AB40;
    }
L_0883AB40:
    ctx.set_gpr(3, ctx.gpr[12] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2868)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883ABAC;
      }
      goto L_0883AB54;
    }
L_0883AB54:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[13] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2900)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883ABAC;
      }
      goto L_0883AB70;
    }
L_0883AB70:
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883ABA8;
      }
      goto L_0883AB88;
    }
L_0883AB88:
    ctx.set_gpr(5, ctx.gpr[12] - ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5792)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5792), ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    goto L_0883ABA8;
L_0883ABA8:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_0883ABAC;
L_0883ABAC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883AB54;
      }
      goto L_0883ABB4;
    }
L_0883ABB4:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    goto L_0883ABB8;
L_0883ABB8:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883AB40;
      }
      goto L_0883ABC0;
    }
L_0883ABC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883ABC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AC20;
      }
      goto L_0883ABF8;
    }
L_0883ABF8:
    ctx.set_gpr(5, ctx.gpr[7] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(3, ctx.gpr[8] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(8, ctx.gpr[4] & 65535u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[29]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0883AC20;
L_0883AC20:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883ABF8;
      }
      goto L_0883AC2C;
    }
L_0883AC2C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AC74;
      }
      goto L_0883AC38;
    }
L_0883AC38:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AC70;
      }
      goto L_0883AC4C;
    }
L_0883AC4C:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x0883AC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 62u, 0x0883C8A4u>(ctx, &aot_mem) && ctx.pc == 0x0883AC68u) goto L_0883AC68;
    return;
L_0883AC68:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[16]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0883AC70;
L_0883AC70:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0883AC74;
L_0883AC74:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AC38;
      }
      goto L_0883AC80;
    }
L_0883AC80:
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
L_0883ACA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(25, ctx.gpr[4] + 0u);
    ctx.set_gpr(15, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5192), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(573));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5196), ctx.gpr[5]);
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AD28;
      }
      goto L_0883ACE0;
    }
L_0883ACE0:
    ctx.set_gpr(4, ctx.gpr[13] << 2u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AD20;
      }
      goto L_0883ACF4;
    }
L_0883ACF4:
    ctx.set_gpr(16, ctx.gpr[13] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(5192)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(5192), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2900), ctx.gpr[13]);
    ctx.set_gpr(4, ctx.gpr[13] + ctx.gpr[25]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5200), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AD24;
      }
      goto L_0883AD20;
    }
L_0883AD20:
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    goto L_0883AD24;
L_0883AD24:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_0883AD28;
L_0883AD28:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883ACE0;
      }
      goto L_0883AD34;
    }
L_0883AD34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883ADB4;
      }
      goto L_0883AD3C;
    }
L_0883AD3C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AD58;
      }
      goto L_0883AD48;
    }
L_0883AD48:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AD5C;
      }
      goto L_0883AD58;
    }
L_0883AD58:
    ctx.set_gpr(7, 0u + 0u);
    goto L_0883AD5C;
L_0883AD5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(5192)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(5192), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2900), ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[7] << 2u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[25]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5200), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(5792)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(5792), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883ADB4;
      }
      goto L_0883ADA0;
    }
L_0883ADA0:
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(5796)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(5796), ctx.gpr[4]);
    goto L_0883ADB4;
L_0883ADB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(5192)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883AD3C;
      }
      goto L_0883ADC4;
    }
L_0883ADC4:
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(5192)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0883ADE0;
      }
      goto L_0883ADD8;
    }
L_0883ADD8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_0883ADE0;
L_0883ADE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AE00;
      }
      goto L_0883ADE8;
    }
L_0883ADE8:
    ctx.set_gpr(4, ctx.gpr[25] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[13] + 0u);
    ctx.set_gpr(31, 0x0883ADFCu);
    // nop
    goto L_0883A874;
L_0883ADFC:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    goto L_0883AE00;
L_0883AE00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) > 0;
    // nop
      if (branch_taken) {
          goto L_0883ADE8;
      }
      goto L_0883AE08;
    }
L_0883AE08:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(2904)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(5192)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(5192), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[25]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2900)));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(2904), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[25] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0883AE3Cu);
    // nop
    goto L_0883A874;
L_0883AE3C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(2904)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(5196)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(5196), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2900), ctx.gpr[13]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(5196)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(5196), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2900), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[13] << 2u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[14] << 2u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[25]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5200)));
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[25]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5200)));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883AEBC;
      }
      goto L_0883AEB4;
    }
L_0883AEB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AEC0;
      }
      goto L_0883AEBC;
    }
L_0883AEBC:
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    goto L_0883AEC0;
L_0883AEC0:
    ctx.set_gpr(5, ctx.gpr[6] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[14] + ctx.gpr[25]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5200), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[14]));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(2904), ctx.gpr[14]);
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[25] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0883AEFCu);
    // nop
    goto L_0883A874;
L_0883AEFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(5192)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AE08;
      }
      goto L_0883AF0C;
    }
L_0883AF0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(2904)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(5196)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(5196), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2900), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[25] + 0u);
    ctx.set_gpr(5, ctx.gpr[15] + 0u);
    ctx.set_gpr(31, 0x0883AF38u);
    // nop
    goto L_0883A980;
L_0883AF38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[25] + static_cast<std::uint32_t>(2868));
    ctx.set_gpr(31, 0x0883AF4Cu);
    // nop
    goto L_0883ABC8;
L_0883AF4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883AF60:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883AF84;
      }
      goto L_0883AF7C;
    }
L_0883AF7C:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(138));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    goto L_0883AF84;
L_0883AF84:
    ctx.set_gpr(8, 0u | 65535u);
    ctx.set_gpr(7, ctx.gpr[6] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B09C;
      }
      goto L_0883AFA0;
    }
L_0883AFA0:
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AFC8;
      }
      goto L_0883AFC0;
    }
L_0883AFC0:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883B098;
      }
      goto L_0883AFC8;
    }
L_0883AFC8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AFF4;
      }
      goto L_0883AFD4;
    }
L_0883AFD4:
    ctx.set_gpr(9, ctx.gpr[7] << 2u);
    ctx.set_gpr(11, ctx.gpr[9] + ctx.gpr[4]);
    ctx.set_gpr(10, ctx.gpr[12] & 65535u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(2676)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(2676), static_cast<std::uint16_t>(ctx.gpr[9]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B058;
      }
      goto L_0883AFF4;
    }
L_0883AFF4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B02C;
      }
      goto L_0883AFFC;
    }
L_0883AFFC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0883B018;
      }
      goto L_0883B004;
    }
L_0883B004:
    ctx.set_gpr(9, ctx.gpr[7] << 2u);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[4]);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2676)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(2676), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_0883B018;
L_0883B018:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2740), static_cast<std::uint16_t>(ctx.gpr[9]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B058;
      }
      goto L_0883B02C;
    }
L_0883B02C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B04C;
      }
      goto L_0883B038;
    }
L_0883B038:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2744)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2744), static_cast<std::uint16_t>(ctx.gpr[9]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B058;
      }
      goto L_0883B04C;
    }
L_0883B04C:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2748)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2748), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_0883B058;
L_0883B058:
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(11, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B078;
      }
      goto L_0883B068;
    }
L_0883B068:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(138));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B098;
      }
      goto L_0883B078;
    }
L_0883B078:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883B090;
      }
      goto L_0883B080;
    }
L_0883B080:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B098;
      }
      goto L_0883B090;
    }
L_0883B090:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    goto L_0883B098;
L_0883B098:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0883B09C;
L_0883B09C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AFA0;
      }
      goto L_0883B0A8;
    }
L_0883B0A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B0B0:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B0D4;
      }
      goto L_0883B0CC;
    }
L_0883B0CC:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(138));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    goto L_0883B0D4;
L_0883B0D4:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B774;
      }
      goto L_0883B0E0;
    }
L_0883B0E0:
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B108;
      }
      goto L_0883B100;
    }
L_0883B100:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883B770;
      }
      goto L_0883B108;
    }
L_0883B108:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B1EC;
      }
      goto L_0883B114;
    }
L_0883B114:
    ctx.set_gpr(9, ctx.gpr[7] << 2u);
    ctx.set_gpr(14, ctx.gpr[9] + ctx.gpr[4]);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(2678)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[10] - ctx.gpr[11]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B1B4;
      }
      goto L_0883B138;
    }
L_0883B138:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(2676)));
    ctx.set_gpr(13, ctx.gpr[9] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(14, ctx.gpr[13] & 65535u);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(13, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 8u));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[13]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[10] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B1D8;
      }
      goto L_0883B1B4;
    }
L_0883B1B4:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(2676)));
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(10, ctx.gpr[9] & 65535u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    goto L_0883B1D8;
L_0883B1D8:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B114;
      }
      goto L_0883B1E4;
    }
L_0883B1E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B730;
      }
      goto L_0883B1EC;
    }
L_0883B1EC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B43C;
      }
      goto L_0883B1F4;
    }
L_0883B1F4:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0883B2C4;
      }
      goto L_0883B1FC;
    }
L_0883B1FC:
    ctx.set_gpr(9, ctx.gpr[7] << 2u);
    ctx.set_gpr(14, ctx.gpr[9] + ctx.gpr[4]);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(2678)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[10] - ctx.gpr[11]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B29C;
      }
      goto L_0883B220;
    }
L_0883B220:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(2676)));
    ctx.set_gpr(13, ctx.gpr[9] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(14, ctx.gpr[13] & 65535u);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(13, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 8u));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[13]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[10] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B2C0;
      }
      goto L_0883B29C;
    }
L_0883B29C:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(2676)));
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(10, ctx.gpr[9] & 65535u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    goto L_0883B2C0;
L_0883B2C0:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    goto L_0883B2C4;
L_0883B2C4:
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2742)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[10] - ctx.gpr[11]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B35C;
      }
      goto L_0883B2E0;
    }
L_0883B2E0:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    ctx.set_gpr(13, ctx.gpr[9] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(14, ctx.gpr[13] & 65535u);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(13, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 8u));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[13]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[10] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B380;
      }
      goto L_0883B35C;
    }
L_0883B35C:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(10, ctx.gpr[9] & 65535u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    goto L_0883B380;
L_0883B380:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B410;
      }
      goto L_0883B390;
    }
L_0883B390:
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(10, ctx.gpr[9] << (ctx.gpr[10] & 31u));
    ctx.set_gpr(11, ctx.gpr[10] & 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[9] & 65535u);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[10] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-14));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B730;
      }
      goto L_0883B410;
    }
L_0883B410:
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[10] & 31u));
    ctx.set_gpr(10, ctx.gpr[9] & 65535u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B730;
      }
      goto L_0883B43C;
    }
L_0883B43C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B5C0;
      }
      goto L_0883B448;
    }
L_0883B448:
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2746)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[10] - ctx.gpr[11]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B4E0;
      }
      goto L_0883B464;
    }
L_0883B464:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2744)));
    ctx.set_gpr(13, ctx.gpr[9] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(14, ctx.gpr[13] & 65535u);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(13, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 8u));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[13]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[10] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B504;
      }
      goto L_0883B4E0;
    }
L_0883B4E0:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2744)));
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(10, ctx.gpr[9] & 65535u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    goto L_0883B504;
L_0883B504:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B594;
      }
      goto L_0883B514;
    }
L_0883B514:
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(10, ctx.gpr[9] << (ctx.gpr[10] & 31u));
    ctx.set_gpr(11, ctx.gpr[10] & 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[9] & 65535u);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[10] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-13));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B730;
      }
      goto L_0883B594;
    }
L_0883B594:
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[10] & 31u));
    ctx.set_gpr(10, ctx.gpr[9] & 65535u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B730;
      }
      goto L_0883B5C0;
    }
L_0883B5C0:
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2750)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[10] - ctx.gpr[11]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B658;
      }
      goto L_0883B5DC;
    }
L_0883B5DC:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2748)));
    ctx.set_gpr(13, ctx.gpr[9] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(14, ctx.gpr[13] & 65535u);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(13, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 8u));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[13]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[10] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B67C;
      }
      goto L_0883B658;
    }
L_0883B658:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2748)));
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[13] & 31u));
    ctx.set_gpr(10, ctx.gpr[9] & 65535u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    goto L_0883B67C;
L_0883B67C:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B70C;
      }
      goto L_0883B68C;
    }
L_0883B68C:
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(-11));
    ctx.set_gpr(10, ctx.gpr[9] << (ctx.gpr[10] & 31u));
    ctx.set_gpr(11, ctx.gpr[10] & 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(10, ctx.gpr[10] - ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[9] & 65535u);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[10] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-9));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B730;
      }
      goto L_0883B70C;
    }
L_0883B70C:
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(-11));
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[10] & 31u));
    ctx.set_gpr(10, ctx.gpr[9] & 65535u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[9]);
    goto L_0883B730;
L_0883B730:
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(11, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B750;
      }
      goto L_0883B740;
    }
L_0883B740:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(138));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B770;
      }
      goto L_0883B750;
    }
L_0883B750:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0883B768;
      }
      goto L_0883B758;
    }
L_0883B758:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B770;
      }
      goto L_0883B768;
    }
L_0883B768:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    goto L_0883B770;
L_0883B770:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0883B774;
L_0883B774:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B0E0;
      }
      goto L_0883B780;
    }
L_0883B780:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B788:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2836)));
    ctx.set_gpr(31, 0x0883B7A8u);
    // nop
    goto L_0883AF60;
L_0883B7A8:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2432));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2848)));
    ctx.set_gpr(31, 0x0883B7B8u);
    // nop
    goto L_0883AF60;
L_0883B7B8:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2856));
    ctx.set_gpr(31, 0x0883B7C4u);
    // nop
    goto L_0883ACA0;
L_0883B7C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B7F8;
      }
      goto L_0883B7D0;
    }
L_0883B7D0:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(5812));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2678)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B804;
      }
      goto L_0883B7F4;
    }
L_0883B7F4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_0883B7F8;
L_0883B7F8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B7D0;
      }
      goto L_0883B804;
    }
L_0883B804:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5792)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5792), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B834:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(24, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B8D0;
      }
      goto L_0883B850;
    }
L_0883B850:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-257));
    ctx.set_gpr(6, ctx.gpr[3] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(8, ctx.gpr[6] & 65535u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[6] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-11));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B8F4;
      }
      goto L_0883B8D0;
    }
L_0883B8D0:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-257));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(6, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    goto L_0883B8F4;
L_0883B8F4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B984;
      }
      goto L_0883B904;
    }
L_0883B904:
    ctx.set_gpr(3, ctx.gpr[24] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[3] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(8, ctx.gpr[6] & 65535u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[6] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-11));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B9A8;
      }
      goto L_0883B984;
    }
L_0883B984:
    ctx.set_gpr(3, ctx.gpr[24] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(6, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    goto L_0883B9A8;
L_0883B9A8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BA38;
      }
      goto L_0883B9B8;
    }
L_0883B9B8:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, ctx.gpr[3] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(8, ctx.gpr[6] & 65535u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[6] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-12));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BA5C;
      }
      goto L_0883BA38;
    }
L_0883BA38:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(6, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    goto L_0883BA5C;
L_0883BA5C:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BB4C;
      }
      goto L_0883BA68;
    }
L_0883BA68:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BB0C;
      }
      goto L_0883BA78;
    }
L_0883BA78:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(5812));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2678)));
    ctx.set_gpr(8, ctx.gpr[3] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(9, ctx.gpr[8] & 65535u);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(8, ctx.gpr[8] - ctx.gpr[9]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[8] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-13));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BB48;
      }
      goto L_0883BB0C;
    }
L_0883BB0C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(5812));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2678)));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(8, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[3]);
    goto L_0883BB48;
L_0883BB48:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0883BB4C;
L_0883BB4C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BA68;
      }
      goto L_0883BB58;
    }
L_0883BB58:
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0883BB68u);
    // nop
    goto L_0883B0B0;
L_0883BB68:
    ctx.set_gpr(6, ctx.gpr[24] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(2432));
    ctx.set_gpr(31, 0x0883BB78u);
    // nop
    goto L_0883B0B0;
L_0883BB78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BB88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BC1C;
      }
      goto L_0883BBA0;
    }
L_0883BBA0:
    ctx.set_gpr(2, ctx.gpr[7] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[7] & 65535u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[3] & 31u)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BC3C;
      }
      goto L_0883BC1C;
    }
L_0883BC1C:
    ctx.set_gpr(2, ctx.gpr[7] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    goto L_0883BC3C;
L_0883BC3C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0883BC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 75u, 0x0883CA00u>(ctx, &aot_mem) && ctx.pc == 0x0883BC48u) goto L_0883BC48;
    return;
L_0883BC48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BC58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BCFC;
      }
      goto L_0883BC80;
    }
L_0883BC80:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[5] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[2] & 31u)));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BD20;
      }
      goto L_0883BCFC;
    }
L_0883BCFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    goto L_0883BD20;
L_0883BD20:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(6858)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[16]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BDC0;
      }
      goto L_0883BD40;
    }
L_0883BD40:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(6856)));
    ctx.set_gpr(2, ctx.gpr[17] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> (ctx.gpr[2] & 31u)));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BDE8;
      }
      goto L_0883BDC0;
    }
L_0883BDC0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(6856)));
    ctx.set_gpr(2, ctx.gpr[17] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    goto L_0883BDE8;
L_0883BDE8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0883BDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 65u, 0x0883C8D4u>(ctx, &aot_mem) && ctx.pc == 0x0883BDF4u) goto L_0883BDF4;
    return;
L_0883BDF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5804)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BF80;
      }
      goto L_0883BE10;
    }
L_0883BE10:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BE98;
      }
      goto L_0883BE1C;
    }
L_0883BE1C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[2] & 31u)));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BEBC;
      }
      goto L_0883BE98;
    }
L_0883BE98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    goto L_0883BEBC;
L_0883BEBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[16]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BF50;
      }
      goto L_0883BED4;
    }
L_0883BED4:
    ctx.set_gpr(5, ctx.gpr[17] & 65535u);
    ctx.set_gpr(2, ctx.gpr[5] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[2] & 31u)));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BF74;
      }
      goto L_0883BF50;
    }
L_0883BF50:
    ctx.set_gpr(2, ctx.gpr[17] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5808)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(5808), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(5812)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5812), ctx.gpr[2]);
    goto L_0883BF74;
L_0883BF74:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0883BF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 65u, 0x0883C8D4u>(ctx, &aot_mem) && ctx.pc == 0x0883BF80u) goto L_0883BF80;
    return;
L_0883BF80:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(5804), ctx.gpr[3]);
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
L_0883BFA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x0883C050u>(ctx, &aot_mem); return;
      }
      goto L_0883BFDC;
    }
L_0883BFDC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883BFF4;
      }
      goto L_0883BFEC;
    }
L_0883BFEC:
    ctx.set_gpr(31, 0x0883BFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 52u, 0x0883C808u>(ctx, &aot_mem) && ctx.pc == 0x0883BFF4u) goto L_0883BFF4;
    return;
L_0883BFF4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(2832));
    ctx.set_gpr(31, 0x0883C004u);
    // nop
    goto L_0883ACA0;
}

void recomp_unit_0013(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0013_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_13(Runtime &runtime) {
    runtime.register_generated_unit(13u, 0x08838000u, 16384u, &recomp_unit_0013, &recomp_unit_0013_entry);
    runtime.register_function(0x08838000u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838018u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838020u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883802Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838068u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838078u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883808Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838094u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838104u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883810Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838124u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838138u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838174u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883817Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838184u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838204u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883820Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838248u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883827Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838338u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838340u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838354u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838374u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838410u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883841Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838428u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838470u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838498u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838504u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883850Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838518u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838550u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838558u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838574u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838580u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838600u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883860Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838628u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838634u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838644u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838694u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883869Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838718u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838724u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838768u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838774u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883877Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838788u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838830u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838850u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883885Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838878u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838928u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838930u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883894Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838958u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883898Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A94u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838AD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838ADCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B4Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BF4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E4Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FB0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839018u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839030u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839034u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839054u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839058u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839078u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839080u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883908Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088390F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839138u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839144u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883917Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839214u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839238u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839240u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839244u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839288u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839294u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839300u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839310u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839324u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839330u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883933Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839358u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839364u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839368u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839380u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839384u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839394u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839404u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839418u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839438u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883944Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839458u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839464u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883946Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839478u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839488u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839498u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839508u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839514u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839520u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883952Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839538u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839550u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883955Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839564u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839578u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839588u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839594u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883961Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839628u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839634u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839640u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883964Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839658u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883965Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839660u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839674u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839690u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883969Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088396A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088396E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839714u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839734u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883975Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839764u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839770u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883977Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883980Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839814u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839820u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883982Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883986Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839878u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839884u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883992Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839938u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839944u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883999Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839AC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839AD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839ADCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CF4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839ED4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F94u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A010u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A014u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A024u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A040u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A050u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A060u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A06Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A078u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A07Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A090u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A108u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A110u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A11Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A134u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A148u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A160u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A170u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A174u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A180u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A188u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A194u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A19Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A22Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A238u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A244u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A278u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A288u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A29Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A304u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A370u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A37Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A388u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A408u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A418u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A42Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A438u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A474u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A480u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A48Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A498u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A50Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A518u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A52Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A530u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A564u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A5A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A5E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A5ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A5F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A604u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A608u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A610u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A61Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A620u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A644u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A658u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A660u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A674u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A688u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A698u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A69Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A708u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A710u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A724u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A72Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A760u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A768u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A778u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A804u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A810u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A820u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A82Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A838u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A848u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A854u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A874u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A88Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A898u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A924u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A92Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A948u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A95Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A96Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A980u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A9ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A9BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A9C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A9F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC4Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACF4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADFCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AEB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AEBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AEC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AEFCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF4Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFF4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFFCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B004u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B018u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B02Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B038u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B04Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B058u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B068u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B078u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B080u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B090u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B098u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B09Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B100u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B108u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B114u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B138u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B220u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B29Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B2C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B2C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B2E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B35Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B380u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B390u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B410u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B43Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B448u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B464u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B504u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B514u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B594u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B5C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B5DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B658u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B67Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B68Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B70Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B730u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B740u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B750u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B758u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B768u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B770u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B774u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B780u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B788u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B804u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B834u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B850u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B904u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B984u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB4Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BBA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BCFCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDF4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BEBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BED4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFF4u, &recomp_unit_0013, "recomp_unit_0013");
}
} // namespace psprecomp
